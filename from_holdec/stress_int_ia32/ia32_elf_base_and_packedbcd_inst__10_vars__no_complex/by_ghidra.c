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

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
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



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

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
  char in_AF;
  
  return ((uint)(CONCAT11(in_AF + 'd',in_AF * '\x06' + 'D') & 0xff0f) | 0x12ba0000) + 0xed459af6;
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
  byte in_AF;
  
  return ((uint)(CONCAT11((in_AF | 1) - 0xe,(in_AF | 1) * '\x06' + '\x1d') & 0xff0f) | 0xae9d0000) +
         0x51620cfd;
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
  char in_AF;
  
  return ((uint)(CONCAT11(in_AF + '\x03',in_AF * '\x06' + -0x5b) & 0xff0f) | 0x7b8a0000) +
         0x8475fbf5;
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
  char in_AF;
  
  return ((uint)(CONCAT11(in_AF + -0x59,in_AF * '\x06' + '5') & 0xff0f) | 0x3e400000) + 0xc1bf57f5;
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
  byte in_AF;
  
  return ((uint)(CONCAT11((in_AF | 1) + 0x87,(in_AF | 1) * '\x06' + -0x56) & 0xff0f) | 0xcc4f0000) +
         0x33b07800;
}



int inst_0_flags_var_4(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return (uint)in_AF + iVar1;
}



int inst_0_values_var_5(void)

{
  char in_AF;
  
  return ((uint)(CONCAT11(in_AF + -0x53,in_AF * '\x06' + '1') & 0xff0f) | 0xb6fb0000) + 0x490451f9;
}



int inst_0_flags_var_5(void)

{
  int iVar1;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return (uint)in_AF + iVar1;
}



int inst_0_values_var_6(void)

{
  char in_AF;
  
  return ((uint)(CONCAT11(in_AF + '\x1f',in_AF * '\x06' + -0x3a) & 0xff0f) | 0x3fd50000) +
         0xc02adff4;
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
  char in_AF;
  
  return ((uint)(CONCAT11(in_AF + '\"',in_AF * '\x06' + -0x6d) & 0xff0f) | 0x44400000) + 0xbbbfdcf7;
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
  byte in_AF;
  
  return ((uint)(CONCAT11((in_AF | 1) + 99,(in_AF | 1) * '\x06' + -0x31) & 0xff0f) | 0x88a80000) +
         0x77579bfb;
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
  byte in_AF;
  
  return ((uint)(CONCAT11((in_AF | 1) + 0xa4,(in_AF | 1) * '\x06' + -0x56) & 0xff0f) | 0x2720000) +
         0xfd8d5b00;
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

int inst_1_flags_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_1_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08053b3e)

int inst_1_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0xc;
}



undefined4 inst_1_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08053bef)

int inst_1_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -8;
}



undefined4 inst_1_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08053ca0)

undefined4 inst_1_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_1_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08053d51)

int inst_1_flags_var_4(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0xc;
}



undefined4 inst_1_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08053e02)

int inst_1_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_1_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08053eb3)

undefined4 inst_1_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_1_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08053f64)

int inst_1_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -8;
}



undefined4 inst_1_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08054015)

int inst_1_flags_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0xc;
}



undefined4 inst_1_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080540c6)

int inst_1_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0xc;
}



undefined4 inst_2_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08054177)

int inst_2_flags_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_2_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08054228)

undefined4 inst_2_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_2_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080542d9)

int inst_2_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_2_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805438a)

int inst_2_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_2_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805443b)

int inst_2_flags_var_4(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_2_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080544ec)

int inst_2_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -8;
}



undefined4 inst_2_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805459d)

int inst_2_flags_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_2_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805464e)

int inst_2_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_2_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080546ff)

int inst_2_flags_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0xc;
}



undefined4 inst_2_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080547b0)

int inst_2_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



int inst_3_values_var_0(void)

{
  byte in_AF;
  
  return ((uint)(CONCAT11(-0x12 - (in_AF | 1),(in_AF | 1) * -6 + -0x13) & 0xff0f) | 0x4f9d0000) +
         0xb06212f9;
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
  char in_AF;
  
  return ((uint)(CONCAT11(-0x3a - in_AF,in_AF * -6 + 'V') & 0xff0f) | 0x9b9c0000) + 0x64633b00;
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
  char in_AF;
  
  return ((uint)(CONCAT11(-0x43 - in_AF,in_AF * -6 + -0x7c) & 0xff0f) | 0x8b5f0000) + 0x74a043f2;
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
  char in_AF;
  
  return ((uint)(CONCAT11('\x06' - in_AF,in_AF * -6 + 'w') & 0xff0f) | 0xc5b50000) + 0x3a4afaff;
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
  char in_AF;
  
  return ((uint)(CONCAT11('\x01' - in_AF,in_AF * -6 + -0x6b) & 0xff0f) | 0xec990000) + 0x1366fff1;
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
  char in_AF;
  
  return ((uint)(CONCAT11(-0x20 - in_AF,in_AF * -6 + -0x6d) & 0xff0f) | 0x41490000) + 0xbeb620f3;
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
  char in_AF;
  
  return ((uint)(CONCAT11('\t' - in_AF,in_AF * -6 + 'f') & 0xff0f) | 0xe33e0000) + 0x1cc1f800;
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
  byte in_AF;
  
  return ((uint)(CONCAT11(-0x50 - (in_AF | 1),(in_AF | 1) * -6 + ':') & 0xff0f) | 0xa3580000) +
         0x5ca750fc;
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
  char in_AF;
  
  return ((uint)(CONCAT11('\x1c' - in_AF,in_AF * -6 + ')') & 0xff0f) | 0x7cab0000) + 0x8354e4fd;
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
  byte in_AF;
  
  return ((uint)(CONCAT11(',' - (in_AF | 1),(in_AF | 1) * -6 + '~') & 0xff0f) | 0x429e0000) +
         0xbd61d4f8;
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



// WARNING: Removing unreachable block (ram,0x08054f4d)
// WARNING: Removing unreachable block (ram,0x08054f67)

undefined4 inst_4_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_4_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805500e)
// WARNING: Removing unreachable block (ram,0x08055045)

undefined4 inst_4_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_4_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080550dc)
// WARNING: Removing unreachable block (ram,0x08055113)

int inst_4_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_4_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08055353)
// WARNING: Removing unreachable block (ram,0x08055346)
// WARNING: Removing unreachable block (ram,0x0805537d)

undefined4 inst_4_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_4_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08055421)
// WARNING: Removing unreachable block (ram,0x08055414)
// WARNING: Removing unreachable block (ram,0x0805544b)

int inst_4_flags_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_4_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08055509)
// WARNING: Removing unreachable block (ram,0x080554ef)
// WARNING: Removing unreachable block (ram,0x08055519)

undefined4 inst_4_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_4_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080555b0)
// WARNING: Removing unreachable block (ram,0x080555bd)
// WARNING: Removing unreachable block (ram,0x080555d7)

undefined4 inst_4_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_5_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08055757)
// WARNING: Removing unreachable block (ram,0x0805574a)
// WARNING: Removing unreachable block (ram,0x08055781)

int inst_5_flags_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_5_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805583d)

int inst_5_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_5_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080558ef)
// WARNING: Removing unreachable block (ram,0x080558e2)
// WARNING: Removing unreachable block (ram,0x08055919)

undefined4 inst_5_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_5_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080559bb)
// WARNING: Removing unreachable block (ram,0x080559ae)
// WARNING: Removing unreachable block (ram,0x080559e5)

undefined4 inst_5_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_5_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08055aa1)
// WARNING: Removing unreachable block (ram,0x08055a87)
// WARNING: Removing unreachable block (ram,0x08055ab1)

int inst_5_flags_var_4(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_5_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08055b6d)
// WARNING: Removing unreachable block (ram,0x08055b7d)

int inst_5_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_5_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08055c1f)

undefined4 inst_5_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_5_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08055daa)
// WARNING: Removing unreachable block (ram,0x08055db7)

undefined4 inst_5_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_5_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08055e9d)

int inst_5_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_6_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08055f6d)
// WARNING: Removing unreachable block (ram,0x08055f53)
// WARNING: Removing unreachable block (ram,0x08055f7d)

int inst_6_flags_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x10;
}



undefined4 inst_6_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08056024)
// WARNING: Removing unreachable block (ram,0x0805604e)

int inst_6_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x10;
}



undefined4 inst_6_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080560e9)
// WARNING: Removing unreachable block (ram,0x080560f6)
// WARNING: Removing unreachable block (ram,0x08056110)

int inst_6_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_6_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080561e1)
// WARNING: Removing unreachable block (ram,0x080561ba)
// WARNING: Removing unreachable block (ram,0x080561c7)
// WARNING: Removing unreachable block (ram,0x080561f1)

undefined4 inst_6_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_6_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805628b)
// WARNING: Removing unreachable block (ram,0x080562c2)

int inst_6_flags_var_4(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x14;
}



undefined4 inst_6_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805636a)
// WARNING: Removing unreachable block (ram,0x08056384)

int inst_6_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_6_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08056456)
// WARNING: Removing unreachable block (ram,0x0805642f)
// WARNING: Removing unreachable block (ram,0x0805643c)
// WARNING: Removing unreachable block (ram,0x08056466)

int inst_6_flags_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_6_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080565e0)
// WARNING: Removing unreachable block (ram,0x080565d3)
// WARNING: Removing unreachable block (ram,0x0805660a)

int inst_6_flags_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x10;
}



undefined4 inst_6_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080566cb)

undefined4 inst_6_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_7_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08056799)
// WARNING: Removing unreachable block (ram,0x0805677f)
// WARNING: Removing unreachable block (ram,0x080567a9)

int inst_7_flags_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_7_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805684d)
// WARNING: Removing unreachable block (ram,0x08056840)
// WARNING: Removing unreachable block (ram,0x08056877)

int inst_7_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x14;
}



undefined4 inst_7_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805691b)
// WARNING: Removing unreachable block (ram,0x0805690e)
// WARNING: Removing unreachable block (ram,0x08056945)

int inst_7_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x10;
}



undefined4 inst_7_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080569dc)
// WARNING: Removing unreachable block (ram,0x080569e9)

int inst_7_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_7_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08056ad1)
// WARNING: Removing unreachable block (ram,0x08056ab7)
// WARNING: Removing unreachable block (ram,0x08056ae1)

int inst_7_flags_var_4(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x14;
}



undefined4 inst_7_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08056b85)
// WARNING: Removing unreachable block (ram,0x08056b78)
// WARNING: Removing unreachable block (ram,0x08056baf)

int inst_7_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_7_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08056c6d)
// WARNING: Removing unreachable block (ram,0x08056c53)
// WARNING: Removing unreachable block (ram,0x08056c7d)

undefined4 inst_7_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_7_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08056d3b)
// WARNING: Removing unreachable block (ram,0x08056d21)
// WARNING: Removing unreachable block (ram,0x08056d4b)

int inst_7_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x10;
}



undefined4 inst_7_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08056de2)

undefined4 inst_7_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_7_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08056ed7)

int inst_7_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_8_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08056f83)
// WARNING: Removing unreachable block (ram,0x08056f90)

int inst_8_flags_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_8_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08057064)

int inst_8_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_8_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08057152)
// WARNING: Removing unreachable block (ram,0x08057138)
// WARNING: Removing unreachable block (ram,0x08057162)

undefined4 inst_8_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_8_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080571ff)

int inst_8_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_8_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080572fa)
// WARNING: Removing unreachable block (ram,0x080572e0)
// WARNING: Removing unreachable block (ram,0x0805730a)

int inst_8_flags_var_4(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_8_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080573b4)
// WARNING: Removing unreachable block (ram,0x080573a7)
// WARNING: Removing unreachable block (ram,0x080573de)

int inst_8_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_8_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08057488)
// WARNING: Removing unreachable block (ram,0x0805747b)
// WARNING: Removing unreachable block (ram,0x080574b2)

undefined4 inst_8_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_8_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805754e)
// WARNING: Removing unreachable block (ram,0x08057585)

undefined4 inst_8_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_8_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08057648)
// WARNING: Removing unreachable block (ram,0x0805762e)
// WARNING: Removing unreachable block (ram,0x08057658)

int inst_8_flags_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x14;
}



undefined4 inst_8_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080576f5)
// WARNING: Removing unreachable block (ram,0x08057702)

int inst_8_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_9_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080577ce)
// WARNING: Removing unreachable block (ram,0x080577f8)

int inst_9_flags_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x14;
}



undefined4 inst_9_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080578b4)
// WARNING: Removing unreachable block (ram,0x0805789a)
// WARNING: Removing unreachable block (ram,0x080578c4)

int inst_9_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x10;
}



undefined4 inst_9_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08057980)
// WARNING: Removing unreachable block (ram,0x08057959)
// WARNING: Removing unreachable block (ram,0x08057966)
// WARNING: Removing unreachable block (ram,0x08057990)

int inst_9_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x10;
}



undefined4 inst_9_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08057a32)
// WARNING: Removing unreachable block (ram,0x08057a25)
// WARNING: Removing unreachable block (ram,0x08057a5c)

int inst_9_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x10;
}



undefined4 inst_9_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08057b18)
// WARNING: Removing unreachable block (ram,0x08057afe)
// WARNING: Removing unreachable block (ram,0x08057b28)

undefined4 inst_9_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_9_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08057be4)
// WARNING: Removing unreachable block (ram,0x08057bca)
// WARNING: Removing unreachable block (ram,0x08057bf4)

int inst_9_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x10;
}



undefined4 inst_9_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08057c96)
// WARNING: Removing unreachable block (ram,0x08057c89)
// WARNING: Removing unreachable block (ram,0x08057cc0)

int inst_9_flags_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x14;
}



undefined4 inst_9_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08057d55)
// WARNING: Removing unreachable block (ram,0x08057d62)

int inst_9_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_9_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08057e48)
// WARNING: Removing unreachable block (ram,0x08057e2e)
// WARNING: Removing unreachable block (ram,0x08057e58)

undefined4 inst_9_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_9_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08057f14)
// WARNING: Removing unreachable block (ram,0x08057f24)

int inst_9_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x14;
}



undefined4 inst_10_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08057fca)
// WARNING: Removing unreachable block (ram,0x08057ff4)

undefined4 inst_10_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_10_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805816a)

int inst_10_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_10_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805830a)
// WARNING: Removing unreachable block (ram,0x080582fd)
// WARNING: Removing unreachable block (ram,0x08058334)

undefined4 inst_10_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_10_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080583da)
// WARNING: Removing unreachable block (ram,0x080583cd)
// WARNING: Removing unreachable block (ram,0x08058404)

undefined4 inst_10_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_10_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080584c4)
// WARNING: Removing unreachable block (ram,0x080584d4)

undefined4 inst_10_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_10_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08058663)
// WARNING: Removing unreachable block (ram,0x0805863c)
// WARNING: Removing unreachable block (ram,0x08058649)
// WARNING: Removing unreachable block (ram,0x08058673)

undefined4 inst_10_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_11_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080587e7)
// WARNING: Removing unreachable block (ram,0x080587da)
// WARNING: Removing unreachable block (ram,0x08058811)

undefined4 inst_11_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_11_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080588a8)
// WARNING: Removing unreachable block (ram,0x080588b5)
// WARNING: Removing unreachable block (ram,0x080588cf)

undefined4 inst_11_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_11_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08058983)
// WARNING: Removing unreachable block (ram,0x0805899d)

undefined4 inst_11_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_11_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08058a51)

undefined4 inst_11_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_11_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08058b1f)
// WARNING: Removing unreachable block (ram,0x08058b12)
// WARNING: Removing unreachable block (ram,0x08058b49)

undefined4 inst_11_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_11_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08058be0)
// WARNING: Removing unreachable block (ram,0x08058c17)

undefined4 inst_11_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_11_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08058cbb)
// WARNING: Removing unreachable block (ram,0x08058cd5)

undefined4 inst_11_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_11_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08058d89)
// WARNING: Removing unreachable block (ram,0x08058da3)

undefined4 inst_11_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_11_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08058e57)
// WARNING: Removing unreachable block (ram,0x08058e4a)
// WARNING: Removing unreachable block (ram,0x08058e81)

undefined4 inst_11_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_11_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08058f3f)
// WARNING: Removing unreachable block (ram,0x08058f4f)

int inst_11_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_12_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08058fec)
// WARNING: Removing unreachable block (ram,0x08058ff9)

int inst_12_flags_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0x10;
}



undefined4 inst_12_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080590c0)
// WARNING: Removing unreachable block (ram,0x080590cd)
// WARNING: Removing unreachable block (ram,0x080590e7)

int inst_12_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_12_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080591a1)

int inst_12_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_12_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805928f)

int inst_12_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0x10;
}



undefined4 inst_12_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08059363)
// WARNING: Removing unreachable block (ram,0x08059349)
// WARNING: Removing unreachable block (ram,0x08059373)

int inst_12_flags_var_4(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x10;
}



undefined4 inst_12_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08059436)
// WARNING: Removing unreachable block (ram,0x0805940f)
// WARNING: Removing unreachable block (ram,0x0805941c)
// WARNING: Removing unreachable block (ram,0x08059446)

int inst_12_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_12_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080595b7)
// WARNING: Removing unreachable block (ram,0x080595c4)
// WARNING: Removing unreachable block (ram,0x080595de)

int inst_12_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_12_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805968b)

int inst_12_flags_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_12_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805976c)
// WARNING: Removing unreachable block (ram,0x0805975f)
// WARNING: Removing unreachable block (ram,0x08059796)

int inst_12_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x14;
}



undefined4 inst_13_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805983c)
// WARNING: Removing unreachable block (ram,0x08059866)

undefined4 inst_13_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_13_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080598ff)
// WARNING: Removing unreachable block (ram,0x08059936)

int inst_13_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x14;
}



undefined4 inst_13_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080599cf)
// WARNING: Removing unreachable block (ram,0x080599dc)
// WARNING: Removing unreachable block (ram,0x080599f6)

int inst_13_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0x10;
}



undefined4 inst_13_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08059aac)
// WARNING: Removing unreachable block (ram,0x08059ad6)

int inst_13_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_13_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08059b6f)

int inst_13_flags_var_4(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_13_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08059c4c)

int inst_13_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_13_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08059d1c)
// WARNING: Removing unreachable block (ram,0x08059d46)

undefined4 inst_13_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_13_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08059dec)
// WARNING: Removing unreachable block (ram,0x08059ddf)
// WARNING: Removing unreachable block (ram,0x08059e16)

int inst_13_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_13_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08059ed6)
// WARNING: Removing unreachable block (ram,0x08059ee6)

undefined4 inst_13_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_13_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08059f8c)

undefined4 inst_13_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_14_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805a061)
// WARNING: Removing unreachable block (ram,0x0805a07b)

int inst_14_flags_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_14_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805a136)
// WARNING: Removing unreachable block (ram,0x0805a129)
// WARNING: Removing unreachable block (ram,0x0805a160)

int inst_14_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x10;
}



undefined4 inst_14_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805a1fd)

int inst_14_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_14_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805a2fa)

undefined4 inst_14_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_14_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805a3d0)
// WARNING: Removing unreachable block (ram,0x0805a3a9)
// WARNING: Removing unreachable block (ram,0x0805a3b6)
// WARNING: Removing unreachable block (ram,0x0805a3e0)

undefined4 inst_14_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_14_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805a47f)
// WARNING: Removing unreachable block (ram,0x0805a48c)

int inst_14_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_14_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805a562)

int inst_14_flags_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_14_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805a638)
// WARNING: Removing unreachable block (ram,0x0805a62b)
// WARNING: Removing unreachable block (ram,0x0805a662)

int inst_14_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x14;
}



undefined4 inst_14_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805a701)
// WARNING: Removing unreachable block (ram,0x0805a70e)
// WARNING: Removing unreachable block (ram,0x0805a728)

undefined4 inst_14_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_14_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805a7e4)
// WARNING: Removing unreachable block (ram,0x0805a7fe)

int inst_14_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0x10;
}



undefined4 inst_15_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805a8a5)
// WARNING: Removing unreachable block (ram,0x0805a8dc)

int inst_15_flags_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x10;
}



undefined4 inst_15_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805a980)
// WARNING: Removing unreachable block (ram,0x0805a9aa)

int inst_15_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x14;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_15_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805ab0f)

int inst_15_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_15_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805ac04)
// WARNING: Removing unreachable block (ram,0x0805abea)
// WARNING: Removing unreachable block (ram,0x0805ac14)

int inst_15_flags_var_4(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x10;
}



undefined4 inst_15_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805acb8)
// WARNING: Removing unreachable block (ram,0x0805acd2)

undefined4 inst_15_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_15_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805ad79)
// WARNING: Removing unreachable block (ram,0x0805adb0)

undefined4 inst_15_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_15_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805af15)
// WARNING: Removing unreachable block (ram,0x0805af22)
// WARNING: Removing unreachable block (ram,0x0805af3c)

int inst_15_flags_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_16_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805b0bf)
// WARNING: Removing unreachable block (ram,0x0805b0b2)
// WARNING: Removing unreachable block (ram,0x0805b0e9)

undefined4 inst_16_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_16_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805b182)
// WARNING: Removing unreachable block (ram,0x0805b1b9)

undefined4 inst_16_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_16_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805b321)

undefined4 inst_16_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_16_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805b3fe)

undefined4 inst_16_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_16_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805b4bf)
// WARNING: Removing unreachable block (ram,0x0805b4cc)

undefined4 inst_16_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_16_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805b58f)
// WARNING: Removing unreachable block (ram,0x0805b59c)
// WARNING: Removing unreachable block (ram,0x0805b5b6)

undefined4 inst_16_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_16_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805b66b)
// WARNING: Removing unreachable block (ram,0x0805b65e)
// WARNING: Removing unreachable block (ram,0x0805b695)

undefined4 inst_16_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_16_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805b73b)
// WARNING: Removing unreachable block (ram,0x0805b72e)
// WARNING: Removing unreachable block (ram,0x0805b765)

undefined4 inst_16_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_16_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805b7fe)

undefined4 inst_16_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_17_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805b8d9)
// WARNING: Removing unreachable block (ram,0x0805b903)

undefined4 inst_17_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_17_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805b9c1)
// WARNING: Removing unreachable block (ram,0x0805b99a)
// WARNING: Removing unreachable block (ram,0x0805b9a7)
// WARNING: Removing unreachable block (ram,0x0805b9d1)

int inst_17_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_17_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805bb43)
// WARNING: Removing unreachable block (ram,0x0805bb36)
// WARNING: Removing unreachable block (ram,0x0805bb6d)

undefined4 inst_17_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_17_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805bcd2)
// WARNING: Removing unreachable block (ram,0x0805bcdf)
// WARNING: Removing unreachable block (ram,0x0805bcf9)

int inst_17_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_17_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805bdc7)
// WARNING: Removing unreachable block (ram,0x0805bdad)
// WARNING: Removing unreachable block (ram,0x0805bdd7)

int inst_17_flags_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_17_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805be7b)
// WARNING: Removing unreachable block (ram,0x0805bea5)

int inst_17_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_17_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805c00a)

int inst_17_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_18_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805c0de)

int inst_18_flags_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_18_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805c1d8)
// WARNING: Removing unreachable block (ram,0x0805c1b1)
// WARNING: Removing unreachable block (ram,0x0805c1be)
// WARNING: Removing unreachable block (ram,0x0805c1e8)

undefined4 inst_18_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_18_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805c285)
// WARNING: Removing unreachable block (ram,0x0805c292)
// WARNING: Removing unreachable block (ram,0x0805c2ac)

undefined4 inst_18_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_18_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805c527)

int inst_18_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0x10;
}



undefined4 inst_18_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805c5fb)

int inst_18_flags_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0x10;
}



undefined4 inst_18_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805c6b5)
// WARNING: Removing unreachable block (ram,0x0805c6df)

int inst_18_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x14;
}



undefined4 inst_18_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805c7a3)
// WARNING: Removing unreachable block (ram,0x0805c7b3)

int inst_18_flags_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_19_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805c92d)
// WARNING: Removing unreachable block (ram,0x0805c947)

int inst_19_flags_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0x10;
}



undefined4 inst_19_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805c9f0)
// WARNING: Removing unreachable block (ram,0x0805ca27)

int inst_19_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_19_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805cacd)
// WARNING: Removing unreachable block (ram,0x0805cac0)
// WARNING: Removing unreachable block (ram,0x0805caf7)

undefined4 inst_19_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_19_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805cbb7)
// WARNING: Removing unreachable block (ram,0x0805cb90)
// WARNING: Removing unreachable block (ram,0x0805cb9d)
// WARNING: Removing unreachable block (ram,0x0805cbc7)

int inst_19_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_19_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805cc87)
// WARNING: Removing unreachable block (ram,0x0805cc97)

undefined4 inst_19_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_19_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805cd30)

int inst_19_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_19_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805ce27)

undefined4 inst_19_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_19_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805cef7)
// WARNING: Removing unreachable block (ram,0x0805cedd)
// WARNING: Removing unreachable block (ram,0x0805cf07)

undefined4 inst_19_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_19_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805cfc7)
// WARNING: Removing unreachable block (ram,0x0805cfa0)
// WARNING: Removing unreachable block (ram,0x0805cfad)
// WARNING: Removing unreachable block (ram,0x0805cfd7)

int inst_19_flags_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x14;
}



undefined4 inst_19_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805d097)
// WARNING: Removing unreachable block (ram,0x0805d0a7)

undefined4 inst_19_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_20_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805d242)

undefined4 inst_20_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_20_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805d317)

int inst_20_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_20_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805d3d3)
// WARNING: Removing unreachable block (ram,0x0805d3ed)

int inst_20_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_20_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805d4a9)
// WARNING: Removing unreachable block (ram,0x0805d49c)
// WARNING: Removing unreachable block (ram,0x0805d4d3)

int inst_20_flags_var_4(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_20_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805d599)
// WARNING: Removing unreachable block (ram,0x0805d57f)
// WARNING: Removing unreachable block (ram,0x0805d5a9)

int inst_20_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_20_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805d655)
// WARNING: Removing unreachable block (ram,0x0805d648)
// WARNING: Removing unreachable block (ram,0x0805d67f)

int inst_20_flags_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_20_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805d71e)
// WARNING: Removing unreachable block (ram,0x0805d72b)

int inst_20_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_20_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805d81b)

int inst_20_flags_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_20_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805d8f1)
// WARNING: Removing unreachable block (ram,0x0805d8ca)
// WARNING: Removing unreachable block (ram,0x0805d8d7)
// WARNING: Removing unreachable block (ram,0x0805d901)

int inst_20_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x14;
}



undefined4 inst_21_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805d9bf)
// WARNING: Removing unreachable block (ram,0x0805d9a5)
// WARNING: Removing unreachable block (ram,0x0805d9cf)

int inst_21_flags_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_21_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805da73)
// WARNING: Removing unreachable block (ram,0x0805da8d)

undefined4 inst_21_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_21_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805db41)
// WARNING: Removing unreachable block (ram,0x0805db5b)

undefined4 inst_21_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_21_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805dc0f)
// WARNING: Removing unreachable block (ram,0x0805dc39)

undefined4 inst_21_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_21_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805dcdd)
// WARNING: Removing unreachable block (ram,0x0805dcd0)
// WARNING: Removing unreachable block (ram,0x0805dd07)

int inst_21_flags_var_4(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_21_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805ddc5)
// WARNING: Removing unreachable block (ram,0x0805ddd5)

int inst_21_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_21_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805de6c)
// WARNING: Removing unreachable block (ram,0x0805dea3)

int inst_21_flags_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x10;
}



undefined4 inst_21_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805df61)
// WARNING: Removing unreachable block (ram,0x0805df71)

int inst_21_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x14;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_21_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805e0e3)
// WARNING: Removing unreachable block (ram,0x0805e0fd)

int inst_21_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0x10;
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
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_22_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805e27e)
// WARNING: Removing unreachable block (ram,0x0805e298)

int inst_22_flags_var_1(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_22_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805e33f)
// WARNING: Removing unreachable block (ram,0x0805e34c)

int inst_22_flags_var_2(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_22_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805e434)

int inst_22_flags_var_3(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_22_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805e4db)
// WARNING: Removing unreachable block (ram,0x0805e4e8)

int inst_22_flags_var_4(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_22_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805e5b6)
// WARNING: Removing unreachable block (ram,0x0805e5d0)

int inst_22_flags_var_5(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_22_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805e677)

int inst_22_flags_var_6(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
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
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_22_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805e820)

int inst_22_flags_var_8(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_22_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805e8e1)
// WARNING: Removing unreachable block (ram,0x0805e8ee)

int inst_22_flags_var_9(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
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
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_23_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805eaa0)

int inst_23_flags_var_1(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_23_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805eb52)
// WARNING: Removing unreachable block (ram,0x0805eb45)
// WARNING: Removing unreachable block (ram,0x0805eb6c)

int inst_23_flags_var_2(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_23_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805ec38)

int inst_23_flags_var_3(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_23_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805ecdd)
// WARNING: Removing unreachable block (ram,0x0805ecea)

int inst_23_flags_var_4(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_23_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805eda9)
// WARNING: Removing unreachable block (ram,0x0805edb6)

int inst_23_flags_var_5(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_23_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805ee82)
// WARNING: Removing unreachable block (ram,0x0805ee75)
// WARNING: Removing unreachable block (ram,0x0805ee9c)

int inst_23_flags_var_6(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_23_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805ef68)

int inst_23_flags_var_7(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_23_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805f01a)
// WARNING: Removing unreachable block (ram,0x0805f034)

int inst_23_flags_var_8(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_23_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805f0e6)

int inst_23_flags_var_9(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_24_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805f1b7)
// WARNING: Removing unreachable block (ram,0x0805f1d1)

int inst_24_flags_var_0(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_24_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805f289)
// WARNING: Removing unreachable block (ram,0x0805f2a3)

int inst_24_flags_var_1(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
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
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_24_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805f420)

int inst_24_flags_var_3(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_24_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805f4ff)
// WARNING: Removing unreachable block (ram,0x0805f519)

int inst_24_flags_var_4(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
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
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_24_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805f695)
// WARNING: Removing unreachable block (ram,0x0805f6a2)

int inst_24_flags_var_6(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_24_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805f767)
// WARNING: Removing unreachable block (ram,0x0805f774)

int inst_24_flags_var_7(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_24_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805f839)
// WARNING: Removing unreachable block (ram,0x0805f846)

int inst_24_flags_var_8(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_24_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805f917)

int inst_24_flags_var_9(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_25_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805f9d8)

int inst_25_flags_var_0(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_25_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805faa6)
// WARNING: Removing unreachable block (ram,0x0805fab3)

int inst_25_flags_var_1(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_25_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805fb81)

int inst_25_flags_var_2(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_25_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805fc42)
// WARNING: Removing unreachable block (ram,0x0805fc4f)

int inst_25_flags_var_3(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_25_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805fd10)

int inst_25_flags_var_4(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_25_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805fe05)

int inst_25_flags_var_5(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_25_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805feb9)
// WARNING: Removing unreachable block (ram,0x0805feac)
// WARNING: Removing unreachable block (ram,0x0805fed3)

int inst_25_flags_var_6(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_25_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0805ff7a)
// WARNING: Removing unreachable block (ram,0x0805ff87)

int inst_25_flags_var_7(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_25_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08060055)

int inst_25_flags_var_8(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_25_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08060116)

int inst_25_flags_var_9(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_26_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080601f7)

int inst_26_flags_var_0(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_26_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080602be)
// WARNING: Removing unreachable block (ram,0x080602cb)

int inst_26_flags_var_1(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_26_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806039d)
// WARNING: Removing unreachable block (ram,0x08060390)
// WARNING: Removing unreachable block (ram,0x080603b7)

int inst_26_flags_var_2(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_26_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08060463)
// WARNING: Removing unreachable block (ram,0x08060470)

int inst_26_flags_var_3(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_26_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08060537)
// WARNING: Removing unreachable block (ram,0x08060544)

int inst_26_flags_var_4(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_26_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806060b)

int inst_26_flags_var_5(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
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
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_26_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080607c0)
// WARNING: Removing unreachable block (ram,0x080607da)

int inst_26_flags_var_7(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_26_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08060894)
// WARNING: Removing unreachable block (ram,0x080608ae)

int inst_26_flags_var_8(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_26_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806095a)
// WARNING: Removing unreachable block (ram,0x08060967)

int inst_26_flags_var_9(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_27_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08060a26)
// WARNING: Removing unreachable block (ram,0x08060a33)

int inst_27_flags_var_0(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_27_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08060aff)

int inst_27_flags_var_1(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_27_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08060bbe)
// WARNING: Removing unreachable block (ram,0x08060bcb)

int inst_27_flags_var_2(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_27_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08060c97)
// WARNING: Removing unreachable block (ram,0x08060c8a)
// WARNING: Removing unreachable block (ram,0x08060cb1)

int inst_27_flags_var_3(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_27_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08060d63)
// WARNING: Removing unreachable block (ram,0x08060d56)
// WARNING: Removing unreachable block (ram,0x08060d7d)

int inst_27_flags_var_4(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_27_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08060e22)

int inst_27_flags_var_5(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
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
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_27_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08060fc7)
// WARNING: Removing unreachable block (ram,0x08060fe1)

int inst_27_flags_var_7(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_27_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08061093)

int inst_27_flags_var_8(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_27_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806115f)

int inst_27_flags_var_9(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_28_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806122d)
// WARNING: Removing unreachable block (ram,0x08061220)
// WARNING: Removing unreachable block (ram,0x08061247)

undefined4 inst_28_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_28_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080612e3)
// WARNING: Removing unreachable block (ram,0x080612f0)

int inst_28_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_28_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080613b2)
// WARNING: Removing unreachable block (ram,0x080613a5)
// WARNING: Removing unreachable block (ram,0x080613cc)

int inst_28_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_28_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08061474)
// WARNING: Removing unreachable block (ram,0x08061467)
// WARNING: Removing unreachable block (ram,0x0806148e)

int inst_28_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_28_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08061537)
// WARNING: Removing unreachable block (ram,0x0806152a)
// WARNING: Removing unreachable block (ram,0x08061551)

undefined4 inst_28_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_28_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080615ec)
// WARNING: Removing unreachable block (ram,0x080615f9)

int inst_28_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_28_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080616bb)
// WARNING: Removing unreachable block (ram,0x080616ae)
// WARNING: Removing unreachable block (ram,0x080616d5)

undefined4 inst_28_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_28_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08061771)
// WARNING: Removing unreachable block (ram,0x0806177e)

undefined4 inst_28_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_28_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08061841)
// WARNING: Removing unreachable block (ram,0x08061834)
// WARNING: Removing unreachable block (ram,0x0806185b)

int inst_28_flags_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_28_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08061904)
// WARNING: Removing unreachable block (ram,0x080618f7)
// WARNING: Removing unreachable block (ram,0x0806191e)

int inst_28_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_29_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080619c5)
// WARNING: Removing unreachable block (ram,0x080619b8)
// WARNING: Removing unreachable block (ram,0x080619df)

undefined4 inst_29_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_29_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08061a79)
// WARNING: Removing unreachable block (ram,0x08061a86)

int inst_29_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_29_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08061b3a)
// WARNING: Removing unreachable block (ram,0x08061b47)

undefined4 inst_29_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_29_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08061bfb)
// WARNING: Removing unreachable block (ram,0x08061c08)

int inst_29_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_29_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08061cc9)
// WARNING: Removing unreachable block (ram,0x08061cbc)
// WARNING: Removing unreachable block (ram,0x08061ce3)

undefined4 inst_29_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_29_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08061d8a)
// WARNING: Removing unreachable block (ram,0x08061d7d)
// WARNING: Removing unreachable block (ram,0x08061da4)

undefined4 inst_29_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_29_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08061e3e)
// WARNING: Removing unreachable block (ram,0x08061e4b)

undefined4 inst_29_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_29_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08061f0c)
// WARNING: Removing unreachable block (ram,0x08061eff)
// WARNING: Removing unreachable block (ram,0x08061f26)

undefined4 inst_29_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_29_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08061fc0)
// WARNING: Removing unreachable block (ram,0x08061fcd)

undefined4 inst_29_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_29_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806208e)
// WARNING: Removing unreachable block (ram,0x08062081)
// WARNING: Removing unreachable block (ram,0x080620a8)

undefined4 inst_29_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_30_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08062148)
// WARNING: Removing unreachable block (ram,0x08062155)

undefined4 inst_30_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_30_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806221c)
// WARNING: Removing unreachable block (ram,0x0806220f)
// WARNING: Removing unreachable block (ram,0x08062236)

int inst_30_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_30_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080622d5)
// WARNING: Removing unreachable block (ram,0x080622e2)

undefined4 inst_30_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_30_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080623a9)
// WARNING: Removing unreachable block (ram,0x0806239c)
// WARNING: Removing unreachable block (ram,0x080623c3)

undefined4 inst_30_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_30_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08062462)
// WARNING: Removing unreachable block (ram,0x0806246f)

undefined4 inst_30_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_30_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08062536)
// WARNING: Removing unreachable block (ram,0x08062529)
// WARNING: Removing unreachable block (ram,0x08062550)

int inst_30_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_30_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080625fc)
// WARNING: Removing unreachable block (ram,0x080625ef)
// WARNING: Removing unreachable block (ram,0x08062616)

int inst_30_flags_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_30_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080626c3)
// WARNING: Removing unreachable block (ram,0x080626b6)
// WARNING: Removing unreachable block (ram,0x080626dd)

int inst_30_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_30_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806277d)
// WARNING: Removing unreachable block (ram,0x0806278a)

int inst_30_flags_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_30_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08062851)
// WARNING: Removing unreachable block (ram,0x08062844)
// WARNING: Removing unreachable block (ram,0x0806286b)

int inst_30_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_31_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08062907)
// WARNING: Removing unreachable block (ram,0x08062914)

undefined4 inst_31_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_31_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080629d7)
// WARNING: Removing unreachable block (ram,0x080629ca)
// WARNING: Removing unreachable block (ram,0x080629f1)

undefined4 inst_31_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_31_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08062a9a)
// WARNING: Removing unreachable block (ram,0x08062a8d)
// WARNING: Removing unreachable block (ram,0x08062ab4)

int inst_31_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_31_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08062b5d)
// WARNING: Removing unreachable block (ram,0x08062b50)
// WARNING: Removing unreachable block (ram,0x08062b77)

int inst_31_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_31_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08062c20)
// WARNING: Removing unreachable block (ram,0x08062c13)
// WARNING: Removing unreachable block (ram,0x08062c3a)

undefined4 inst_31_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_31_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08062ce3)
// WARNING: Removing unreachable block (ram,0x08062cd6)
// WARNING: Removing unreachable block (ram,0x08062cfd)

int inst_31_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_31_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08062da6)
// WARNING: Removing unreachable block (ram,0x08062d99)
// WARNING: Removing unreachable block (ram,0x08062dc0)

undefined4 inst_31_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_31_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08062e69)
// WARNING: Removing unreachable block (ram,0x08062e5c)
// WARNING: Removing unreachable block (ram,0x08062e83)

int inst_31_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_31_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08062f1f)
// WARNING: Removing unreachable block (ram,0x08062f2c)

undefined4 inst_31_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_31_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08062fe2)
// WARNING: Removing unreachable block (ram,0x08062fef)

undefined4 inst_31_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_32_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080630aa)
// WARNING: Removing unreachable block (ram,0x080630b7)

undefined4 inst_32_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_32_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08063173)
// WARNING: Removing unreachable block (ram,0x08063180)

undefined4 inst_32_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_32_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08063247)
// WARNING: Removing unreachable block (ram,0x0806323a)
// WARNING: Removing unreachable block (ram,0x08063261)

undefined4 inst_32_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_32_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08063303)
// WARNING: Removing unreachable block (ram,0x08063310)

int inst_32_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_32_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080633d8)
// WARNING: Removing unreachable block (ram,0x080633cb)
// WARNING: Removing unreachable block (ram,0x080633f2)

int inst_32_flags_var_4(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_32_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080634a1)
// WARNING: Removing unreachable block (ram,0x08063494)
// WARNING: Removing unreachable block (ram,0x080634bb)

int inst_32_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_32_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0806356a)
// WARNING: Removing unreachable block (ram,0x0806355d)
// WARNING: Removing unreachable block (ram,0x08063584)

int inst_32_flags_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_32_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08063632)
// WARNING: Removing unreachable block (ram,0x08063625)
// WARNING: Removing unreachable block (ram,0x0806364c)

undefined4 inst_32_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_32_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080636fa)
// WARNING: Removing unreachable block (ram,0x080636ed)
// WARNING: Removing unreachable block (ram,0x08063714)

undefined4 inst_32_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_32_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080637c2)
// WARNING: Removing unreachable block (ram,0x080637b5)
// WARNING: Removing unreachable block (ram,0x080637dc)

int inst_32_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_33_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08063883)
// WARNING: Removing unreachable block (ram,0x08063876)
// WARNING: Removing unreachable block (ram,0x0806389d)

int inst_33_flags_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_33_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08063944)
// WARNING: Removing unreachable block (ram,0x08063937)
// WARNING: Removing unreachable block (ram,0x0806395e)

int inst_33_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_33_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08063a05)
// WARNING: Removing unreachable block (ram,0x080639f8)
// WARNING: Removing unreachable block (ram,0x08063a1f)

undefined4 inst_33_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_33_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08063ac6)
// WARNING: Removing unreachable block (ram,0x08063ab9)
// WARNING: Removing unreachable block (ram,0x08063ae0)

int inst_33_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_33_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08063b87)
// WARNING: Removing unreachable block (ram,0x08063b7a)
// WARNING: Removing unreachable block (ram,0x08063ba1)

int inst_33_flags_var_4(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_33_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08063c48)
// WARNING: Removing unreachable block (ram,0x08063c3b)
// WARNING: Removing unreachable block (ram,0x08063c62)

undefined4 inst_33_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_33_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08063d09)
// WARNING: Removing unreachable block (ram,0x08063cfc)
// WARNING: Removing unreachable block (ram,0x08063d23)

int inst_33_flags_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_33_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08063dca)
// WARNING: Removing unreachable block (ram,0x08063dbd)
// WARNING: Removing unreachable block (ram,0x08063de4)

int inst_33_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_33_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08063e8b)
// WARNING: Removing unreachable block (ram,0x08063e7e)
// WARNING: Removing unreachable block (ram,0x08063ea5)

int inst_33_flags_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_33_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08063f4c)
// WARNING: Removing unreachable block (ram,0x08063f3f)
// WARNING: Removing unreachable block (ram,0x08063f66)

int inst_33_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



int inst_34_values_var_0(void)

{
  int iVar1;
  
  iVar1 = 0;
  while ((0x8766918aU >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return iVar1 + -1;
}



undefined4 inst_34_flags_var_0(void)

{
  int iVar1;
  
  iVar1 = 0;
  while ((0x71e8bf0bU >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return 0;
}



int inst_34_values_var_1(void)

{
  int iVar1;
  
  iVar1 = 0;
  while ((0xbc07e239U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



undefined4 inst_34_flags_var_1(void)

{
  int iVar1;
  
  iVar1 = 0;
  while ((0xf85d5270U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return 0;
}



int inst_34_values_var_2(void)

{
  int iVar1;
  
  iVar1 = 0;
  while ((0xd31bd504U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return iVar1 + -2;
}



undefined4 inst_34_flags_var_2(void)

{
  int iVar1;
  
  iVar1 = 0;
  while ((0x916a3873U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return 0;
}



int inst_34_values_var_3(void)

{
  int iVar1;
  
  iVar1 = 0;
  while ((0xf57f2996U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return iVar1 + -1;
}



undefined4 inst_34_flags_var_3(void)

{
  int iVar1;
  
  iVar1 = 0;
  while ((0xce1413ccU >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return 0;
}



int inst_34_values_var_4(void)

{
  int iVar1;
  
  iVar1 = 0;
  while ((0x3eb45341U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



undefined4 inst_34_flags_var_4(void)

{
  int iVar1;
  
  iVar1 = 0;
  while ((0xd15e5417U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return 0;
}



int inst_34_values_var_5(void)

{
  int iVar1;
  
  iVar1 = 0;
  while ((0x927b775dU >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



undefined4 inst_34_flags_var_5(void)

{
  int iVar1;
  
  iVar1 = 0;
  while ((0x28e38075U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return 0;
}



int inst_34_values_var_6(void)

{
  int iVar1;
  
  iVar1 = 0;
  while ((0xe61c2c2fU >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



undefined4 inst_34_flags_var_6(void)

{
  int iVar1;
  
  iVar1 = 0;
  while ((0x39b60967U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return 0;
}



int inst_34_values_var_7(void)

{
  int iVar1;
  
  iVar1 = 0;
  while ((0xd45fa1b6U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return iVar1 + -1;
}



undefined4 inst_34_flags_var_7(void)

{
  int iVar1;
  
  iVar1 = 0;
  while ((0x9849b4f6U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return 0;
}



int inst_34_values_var_8(void)

{
  int iVar1;
  
  iVar1 = 0;
  while ((0x8b335f09U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



undefined4 inst_34_flags_var_8(void)

{
  int iVar1;
  
  iVar1 = 0;
  while ((0x2bba89c5U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return 0;
}



int inst_34_values_var_9(void)

{
  int iVar1;
  
  iVar1 = 0;
  while ((0x7e172c51U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



undefined4 inst_34_flags_var_9(void)

{
  int iVar1;
  
  iVar1 = 0;
  while ((0x40a04fc9U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return 0;
}



int inst_35_values_var_0(void)

{
  int iVar1;
  
  iVar1 = 0x1f;
  while (0xeadaf271U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return iVar1 + -0x1f;
}



undefined4 inst_35_flags_var_0(void)

{
  int iVar1;
  
  iVar1 = 0x1f;
  while (0xa188b353U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return 0;
}



int inst_35_values_var_1(void)

{
  int iVar1;
  
  iVar1 = 0x1f;
  while (0xc157f3efU >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return iVar1 + -0x1f;
}



undefined4 inst_35_flags_var_1(void)

{
  int iVar1;
  
  iVar1 = 0x1f;
  while (0xbb961fd3U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return 0;
}



int inst_35_values_var_2(void)

{
  int iVar1;
  
  iVar1 = 0x1f;
  while (0x86e00699U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return iVar1 + -0x1f;
}



undefined4 inst_35_flags_var_2(void)

{
  int iVar1;
  
  iVar1 = 0x1f;
  while (0x23503619U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return 0;
}



int inst_35_values_var_3(void)

{
  int iVar1;
  
  iVar1 = 0x1f;
  while (0x8218af63U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return iVar1 + -0x1f;
}



undefined4 inst_35_flags_var_3(void)

{
  int iVar1;
  
  iVar1 = 0x1f;
  while (0xe69fee0bU >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return 0;
}



int inst_35_values_var_4(void)

{
  int iVar1;
  
  iVar1 = 0x1f;
  while (0xf29a35b0U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return iVar1 + -0x1f;
}



undefined4 inst_35_flags_var_4(void)

{
  int iVar1;
  
  iVar1 = 0x1f;
  while (0xa0560132U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return 0;
}



int inst_35_values_var_5(void)

{
  int iVar1;
  
  iVar1 = 0x1f;
  while (0x5d4bf350U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return iVar1 + -0x1e;
}



undefined4 inst_35_flags_var_5(void)

{
  int iVar1;
  
  iVar1 = 0x1f;
  while (0x9787f2e5U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return 0;
}



int inst_35_values_var_6(void)

{
  int iVar1;
  
  iVar1 = 0x1f;
  while (0x371f961dU >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return iVar1 + -0x1d;
}



undefined4 inst_35_flags_var_6(void)

{
  int iVar1;
  
  iVar1 = 0x1f;
  while (0xc02bfd83U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return 0;
}



int inst_35_values_var_7(void)

{
  int iVar1;
  
  iVar1 = 0x1f;
  while (0xcdb8dd20U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return iVar1 + -0x1f;
}



undefined4 inst_35_flags_var_7(void)

{
  int iVar1;
  
  iVar1 = 0x1f;
  while (0xbb300de4U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return 0;
}



int inst_35_values_var_8(void)

{
  int iVar1;
  
  iVar1 = 0x1f;
  while (0x8a6bf559U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return iVar1 + -0x1f;
}



undefined4 inst_35_flags_var_8(void)

{
  int iVar1;
  
  iVar1 = 0x1f;
  while (0xed3ebeeeU >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return 0;
}



int inst_35_values_var_9(void)

{
  int iVar1;
  
  iVar1 = 0x1f;
  while (0x8f27bb4dU >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return iVar1 + -0x1f;
}



undefined4 inst_35_flags_var_9(void)

{
  int iVar1;
  
  iVar1 = 0x1f;
  while (0x7f04027aU >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
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
  return 0xfffffffe;
}



undefined4 inst_43_flags_var_4(void)

{
  return 0;
}



undefined4 inst_43_values_var_5(void)

{
  return 0xffffc000;
}



undefined4 inst_43_flags_var_5(void)

{
  return 0;
}



undefined4 inst_43_values_var_6(void)

{
  return 0xffffc000;
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
  return 0xfffff800;
}



undefined4 inst_43_flags_var_8(void)

{
  return 0;
}



undefined4 inst_43_values_var_9(void)

{
  return 0xffffffc0;
}



// WARNING: Removing unreachable block (ram,0x080681ab)

undefined4 inst_43_flags_var_9(void)

{
  return 0;
}



undefined4 inst_44_values_var_0(void)

{
  return 0xffffffc0;
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
  return 0xfffc0000;
}



undefined4 inst_44_flags_var_4(void)

{
  return 0;
}



undefined4 inst_44_values_var_5(void)

{
  return 0xffffc000;
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
  return 0xffffc000;
}



// WARNING: Removing unreachable block (ram,0x08068713)

undefined4 inst_44_flags_var_7(void)

{
  return 0;
}



undefined4 inst_44_values_var_8(void)

{
  return 0xffe00000;
}



// WARNING: Removing unreachable block (ram,0x080687c0)

undefined4 inst_44_flags_var_8(void)

{
  return 0;
}



undefined4 inst_44_values_var_9(void)

{
  return 0xfe000000;
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



int inst_79_values_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x5f74dc35;
  if (in_PF) {
    iVar1 = 0x5f74d0c9;
  }
  return iVar1 + -0x5f74d0c9;
}



undefined4 inst_79_flags_var_0(void)

{
  return 0;
}



int inst_79_values_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x54e50511;
  if (in_PF) {
    iVar1 = 0x54e5d975;
  }
  return iVar1 + -0x54e5d975;
}



undefined4 inst_79_flags_var_1(void)

{
  return 0;
}



int inst_79_values_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x555f2552;
  if (in_PF) {
    iVar1 = 0x555fe24d;
  }
  return iVar1 + -0x555f2552;
}



undefined4 inst_79_flags_var_2(void)

{
  return 0;
}



int inst_79_values_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x2a0ff3cc;
  if (in_PF) {
    iVar1 = -0x2a0f3b3c;
  }
  return iVar1 + 0x2a0ff3cc;
}



undefined4 inst_79_flags_var_3(void)

{
  return 0;
}



int inst_79_values_var_4(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x773da1e8;
  if (in_PF) {
    iVar1 = 0x773d642c;
  }
  return iVar1 + -0x773d642c;
}



undefined4 inst_79_flags_var_4(void)

{
  return 0;
}



int inst_79_values_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x9232cc4;
  if (in_PF) {
    iVar1 = 0x9236968;
  }
  return iVar1 + -0x9232cc4;
}



undefined4 inst_79_flags_var_5(void)

{
  return 0;
}



int inst_79_values_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x24fdd430;
  if (in_PF) {
    iVar1 = -0x24fd4c8e;
  }
  return iVar1 + 0x24fd4c8e;
}



undefined4 inst_79_flags_var_6(void)

{
  return 0;
}



int inst_79_values_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x1d44f4b5;
  if (in_PF) {
    iVar1 = -0x1d44048d;
  }
  return iVar1 + 0x1d44048d;
}



undefined4 inst_79_flags_var_7(void)

{
  return 0;
}



int inst_79_values_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x257e65b;
  if (in_PF) {
    iVar1 = 0x257579f;
  }
  return iVar1 + -0x257e65b;
}



undefined4 inst_79_flags_var_8(void)

{
  return 0;
}



int inst_79_values_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x3f117a25;
  if (in_PF) {
    iVar1 = 0x3f115d8a;
  }
  return iVar1 + -0x3f115d8a;
}



undefined4 inst_79_flags_var_9(void)

{
  return 0;
}



int inst_80_values_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x43b3a7c;
  if (in_PF) {
    iVar1 = -0x5e11e718;
  }
  return iVar1 + 0x5e11e718;
}



undefined4 inst_80_flags_var_0(void)

{
  return 0;
}



int inst_80_values_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x3a78ebdc;
  if (in_PF) {
    iVar1 = 0x13d3d619;
  }
  return iVar1 + -0x3a78ebdc;
}



undefined4 inst_80_flags_var_1(void)

{
  return 0;
}



int inst_80_values_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x3ac154c3;
  if (in_PF) {
    iVar1 = 0x39eaf1f4;
  }
  return iVar1 + -0x3ac154c3;
}



undefined4 inst_80_flags_var_2(void)

{
  return 0;
}



int inst_80_values_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x4fc4e9e8;
  if (in_PF) {
    iVar1 = -0x512757c7;
  }
  return iVar1 + 0x512757c7;
}



undefined4 inst_80_flags_var_3(void)

{
  return 0;
}



int inst_80_values_var_4(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x1530431d;
  if (in_PF) {
    iVar1 = -0x5636dd3a;
  }
  return iVar1 + 0x1530431d;
}



undefined4 inst_80_flags_var_4(void)

{
  return 0;
}



int inst_80_values_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x325806d8;
  if (in_PF) {
    iVar1 = -0x199ee988;
  }
  return iVar1 + -0x325806d8;
}



undefined4 inst_80_flags_var_5(void)

{
  return 0;
}



int inst_80_values_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x1aa7f361;
  if (in_PF) {
    iVar1 = 0xcbe517b;
  }
  return iVar1 + -0xcbe517b;
}



undefined4 inst_80_flags_var_6(void)

{
  return 0;
}



int inst_80_values_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x50f3e758;
  if (in_PF) {
    iVar1 = 0x7a34a36c;
  }
  return iVar1 + -0x7a34a36c;
}



undefined4 inst_80_flags_var_7(void)

{
  return 0;
}



int inst_80_values_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x670d7d1f;
  if (in_PF) {
    iVar1 = -0x7675fd24;
  }
  return iVar1 + 0x7675fd24;
}



undefined4 inst_80_flags_var_8(void)

{
  return 0;
}



int inst_80_values_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x7e9afbc4;
  if (in_PF) {
    iVar1 = -0x244b4c52;
  }
  return iVar1 + 0x244b4c52;
}



undefined4 inst_80_flags_var_9(void)

{
  return 0;
}



int inst_81_values_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x24574eb5;
  if (!in_PF) {
    iVar1 = 0x24571c73;
  }
  return iVar1 + -0x24571c73;
}



undefined4 inst_81_flags_var_0(void)

{
  return 0;
}



int inst_81_values_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x1e344b6;
  if (!in_PF) {
    iVar1 = 0x1e3dfc3;
  }
  return iVar1 + -0x1e3dfc3;
}



undefined4 inst_81_flags_var_1(void)

{
  return 0;
}



int inst_81_values_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x4e6b4dcc;
  if (!in_PF) {
    iVar1 = -0x4e6b169b;
  }
  return iVar1 + 0x4e6b169b;
}



undefined4 inst_81_flags_var_2(void)

{
  return 0;
}



int inst_81_values_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x36297e60;
  if (!in_PF) {
    iVar1 = 0x3629ac31;
  }
  return iVar1 + -0x36297e60;
}



undefined4 inst_81_flags_var_3(void)

{
  return 0;
}



int inst_81_values_var_4(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x4d386238;
  if (!in_PF) {
    iVar1 = 0x4d38350a;
  }
  return iVar1 + -0x4d386238;
}



undefined4 inst_81_flags_var_4(void)

{
  return 0;
}



undefined4 inst_81_values_var_5(void)

{
  return 0;
}



undefined4 inst_81_flags_var_5(void)

{
  return 0;
}



int inst_81_values_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x3289eb3c;
  if (!in_PF) {
    iVar1 = 0x3289a116;
  }
  return iVar1 + -0x3289a116;
}



undefined4 inst_81_flags_var_6(void)

{
  return 0;
}



int inst_81_values_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x71c93649;
  if (!in_PF) {
    iVar1 = -0x71c9176c;
  }
  return iVar1 + 0x71c93649;
}



undefined4 inst_81_flags_var_7(void)

{
  return 0;
}



int inst_81_values_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x1b0655b5;
  if (!in_PF) {
    iVar1 = -0x1b0660f3;
  }
  return iVar1 + 0x1b0655b5;
}



undefined4 inst_81_flags_var_8(void)

{
  return 0;
}



int inst_81_values_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x4e0b195b;
  if (!in_PF) {
    iVar1 = 0x4e0b6ec0;
  }
  return iVar1 + -0x4e0b6ec0;
}



undefined4 inst_81_flags_var_9(void)

{
  return 0;
}



int inst_82_values_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x5e26c9ca;
  if (!in_PF) {
    iVar1 = 0x49d6a70d;
  }
  return iVar1 + -0x49d6a70d;
}



undefined4 inst_82_flags_var_0(void)

{
  return 0;
}



int inst_82_values_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x735e8bc8;
  if (!in_PF) {
    iVar1 = -0xf868713;
  }
  return iVar1 + 0x735e8bc8;
}



undefined4 inst_82_flags_var_1(void)

{
  return 0;
}



int inst_82_values_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x1875d754;
  if (!in_PF) {
    iVar1 = 0x6cfbfc2b;
  }
  return iVar1 + 0x1875d754;
}



undefined4 inst_82_flags_var_2(void)

{
  return 0;
}



int inst_82_values_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x4a95e613;
  if (!in_PF) {
    iVar1 = 0x6413f485;
  }
  return iVar1 + -0x6413f485;
}



undefined4 inst_82_flags_var_3(void)

{
  return 0;
}



int inst_82_values_var_4(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x425c5912;
  if (!in_PF) {
    iVar1 = -0x6629c1ea;
  }
  return iVar1 + -0x425c5912;
}



undefined4 inst_82_flags_var_4(void)

{
  return 0;
}



int inst_82_values_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x2be4fcda;
  if (!in_PF) {
    iVar1 = 0x11ef1955;
  }
  return iVar1 + 0x2be4fcda;
}



undefined4 inst_82_flags_var_5(void)

{
  return 0;
}



int inst_82_values_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x151ecf42;
  if (!in_PF) {
    iVar1 = -0xd65d225;
  }
  return iVar1 + 0x151ecf42;
}



undefined4 inst_82_flags_var_6(void)

{
  return 0;
}



int inst_82_values_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x3f619a7d;
  if (!in_PF) {
    iVar1 = 0x5d08a48b;
  }
  return iVar1 + -0x3f619a7d;
}



undefined4 inst_82_flags_var_7(void)

{
  return 0;
}



int inst_82_values_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x9a9319c;
  if (!in_PF) {
    iVar1 = 0x44e856ea;
  }
  return iVar1 + -0x44e856ea;
}



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

int inst_91_flags_var_0(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_91_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807b30e)

int inst_91_flags_var_1(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_91_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807b3dc)

int inst_91_flags_var_2(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_91_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807b4aa)
// WARNING: Removing unreachable block (ram,0x0807b4c4)

int inst_91_flags_var_3(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_91_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807b578)
// WARNING: Removing unreachable block (ram,0x0807b56b)
// WARNING: Removing unreachable block (ram,0x0807b592)

int inst_91_flags_var_4(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_91_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807b638)
// WARNING: Removing unreachable block (ram,0x0807b645)

int inst_91_flags_var_5(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_91_values_var_6(void)

{
  return 0;
}



int inst_91_flags_var_6(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_91_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807b7d4)
// WARNING: Removing unreachable block (ram,0x0807b7e1)

int inst_91_flags_var_7(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_91_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807b8a2)
// WARNING: Removing unreachable block (ram,0x0807b8c9)

int inst_91_flags_var_8(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_91_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807b970)
// WARNING: Removing unreachable block (ram,0x0807b997)

int inst_91_flags_var_9(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_92_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807ba3c)
// WARNING: Removing unreachable block (ram,0x0807ba49)

int inst_92_flags_var_0(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_92_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807bb15)

int inst_92_flags_var_1(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_92_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807bbd4)
// WARNING: Removing unreachable block (ram,0x0807bbe1)

int inst_92_flags_var_2(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
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
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
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
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_92_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807be45)
// WARNING: Removing unreachable block (ram,0x0807be38)
// WARNING: Removing unreachable block (ram,0x0807be5f)

int inst_92_flags_var_5(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
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
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
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
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_92_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807c0a9)
// WARNING: Removing unreachable block (ram,0x0807c09c)
// WARNING: Removing unreachable block (ram,0x0807c0c3)

int inst_92_flags_var_8(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_92_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807c175)
// WARNING: Removing unreachable block (ram,0x0807c168)
// WARNING: Removing unreachable block (ram,0x0807c18f)

int inst_92_flags_var_9(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
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
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_93_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807c319)

int inst_93_flags_var_1(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_93_values_var_2(void)

{
  return 0;
}



int inst_93_flags_var_2(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_93_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807c4bd)
// WARNING: Removing unreachable block (ram,0x0807c4b0)
// WARNING: Removing unreachable block (ram,0x0807c4d7)

int inst_93_flags_var_3(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
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
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_93_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807c660)

int inst_93_flags_var_5(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_93_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807c731)

int inst_93_flags_var_6(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_93_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807c803)

int inst_93_flags_var_7(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_93_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807c8c8)
// WARNING: Removing unreachable block (ram,0x0807c8d5)

int inst_93_flags_var_8(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_93_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807c9a7)
// WARNING: Removing unreachable block (ram,0x0807c99a)
// WARNING: Removing unreachable block (ram,0x0807c9c1)

int inst_93_flags_var_9(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_94_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807ca75)
// WARNING: Removing unreachable block (ram,0x0807ca8f)

int inst_94_flags_var_0(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_94_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807cb43)

int inst_94_flags_var_1(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_94_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807cc11)
// WARNING: Removing unreachable block (ram,0x0807cc04)
// WARNING: Removing unreachable block (ram,0x0807cc2b)

int inst_94_flags_var_2(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_94_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807ccdf)
// WARNING: Removing unreachable block (ram,0x0807ccd2)
// WARNING: Removing unreachable block (ram,0x0807ccf9)

int inst_94_flags_var_3(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_94_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807cdad)

int inst_94_flags_var_4(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_94_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807ce7b)

int inst_94_flags_var_5(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_94_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807cf49)
// WARNING: Removing unreachable block (ram,0x0807cf3c)
// WARNING: Removing unreachable block (ram,0x0807cf63)

int inst_94_flags_var_6(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_94_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807d017)

int inst_94_flags_var_7(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_94_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807d0e5)
// WARNING: Removing unreachable block (ram,0x0807d0d8)
// WARNING: Removing unreachable block (ram,0x0807d0ff)

int inst_94_flags_var_8(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_94_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807d1b3)

int inst_94_flags_var_9(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_95_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807d286)
// WARNING: Removing unreachable block (ram,0x0807d2a0)

int inst_95_flags_var_0(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_95_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807d34c)
// WARNING: Removing unreachable block (ram,0x0807d359)

int inst_95_flags_var_1(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_95_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807d420)
// WARNING: Removing unreachable block (ram,0x0807d42d)

int inst_95_flags_var_2(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_95_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807d4f2)
// WARNING: Removing unreachable block (ram,0x0807d4ff)

int inst_95_flags_var_3(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_95_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807d5d2)

int inst_95_flags_var_4(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_95_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807d6a5)

int inst_95_flags_var_5(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
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
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_95_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807d84b)

int inst_95_flags_var_7(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_95_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807d91f)
// WARNING: Removing unreachable block (ram,0x0807d912)
// WARNING: Removing unreachable block (ram,0x0807d939)

int inst_95_flags_var_8(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_95_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807d9f2)

int inst_95_flags_var_9(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
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
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_96_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807db7d)
// WARNING: Removing unreachable block (ram,0x0807db8a)

int inst_96_flags_var_1(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_96_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807dc49)
// WARNING: Removing unreachable block (ram,0x0807dc70)

int inst_96_flags_var_2(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_96_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807dd22)
// WARNING: Removing unreachable block (ram,0x0807dd15)
// WARNING: Removing unreachable block (ram,0x0807dd3c)

int inst_96_flags_var_3(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
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
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_96_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807deba)

int inst_96_flags_var_5(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_96_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807df79)
// WARNING: Removing unreachable block (ram,0x0807df86)

int inst_96_flags_var_6(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_96_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807e052)

int inst_96_flags_var_7(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_96_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807e11e)

int inst_96_flags_var_8(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_96_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0807e1ea)
// WARNING: Removing unreachable block (ram,0x0807e1dd)
// WARNING: Removing unreachable block (ram,0x0807e204)

int inst_96_flags_var_9(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_97_values_var_0(void)

{
  return 0xffffff9c;
}



// WARNING: Removing unreachable block (ram,0x0807e2b8)
// WARNING: Removing unreachable block (ram,0x0807e2ab)
// WARNING: Removing unreachable block (ram,0x0807e2d2)

int inst_97_flags_var_0(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_97_values_var_1(void)

{
  return 0xd9;
}



// WARNING: Removing unreachable block (ram,0x0807e386)
// WARNING: Removing unreachable block (ram,0x0807e379)
// WARNING: Removing unreachable block (ram,0x0807e3a0)

int inst_97_flags_var_1(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_97_values_var_2(void)

{
  return 0xffffff58;
}



// WARNING: Removing unreachable block (ram,0x0807e454)

int inst_97_flags_var_2(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_97_values_var_3(void)

{
  return 0x2c;
}



// WARNING: Removing unreachable block (ram,0x0807e522)
// WARNING: Removing unreachable block (ram,0x0807e515)
// WARNING: Removing unreachable block (ram,0x0807e53c)

int inst_97_flags_var_3(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_97_values_var_4(void)

{
  return 0xffffffed;
}



// WARNING: Removing unreachable block (ram,0x0807e5f0)
// WARNING: Removing unreachable block (ram,0x0807e5e3)
// WARNING: Removing unreachable block (ram,0x0807e60a)

int inst_97_flags_var_4(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_97_values_var_5(void)

{
  return 0xffffff44;
}



// WARNING: Removing unreachable block (ram,0x0807e6b1)
// WARNING: Removing unreachable block (ram,0x0807e6d8)

int inst_97_flags_var_5(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_97_values_var_6(void)

{
  return 0x35;
}



// WARNING: Removing unreachable block (ram,0x0807e77f)
// WARNING: Removing unreachable block (ram,0x0807e7a6)

int inst_97_flags_var_6(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_97_values_var_7(void)

{
  return 0xffffffda;
}



int inst_97_flags_var_7(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_97_values_var_8(void)

{
  return 0xffffff4f;
}



// WARNING: Removing unreachable block (ram,0x0807e91b)
// WARNING: Removing unreachable block (ram,0x0807e942)

int inst_97_flags_var_8(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_97_values_var_9(void)

{
  return 0xffffffb2;
}



// WARNING: Removing unreachable block (ram,0x0807e9f6)
// WARNING: Removing unreachable block (ram,0x0807e9e9)
// WARNING: Removing unreachable block (ram,0x0807ea10)

int inst_97_flags_var_9(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_98_values_var_0(void)

{
  return 0xffff8114;
}



// WARNING: Removing unreachable block (ram,0x0807eac6)
// WARNING: Removing unreachable block (ram,0x0807eae0)

int inst_98_flags_var_0(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_98_values_var_1(void)

{
  return 0x8752;
}



// WARNING: Removing unreachable block (ram,0x0807eb96)

int inst_98_flags_var_1(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_98_values_var_2(void)

{
  return 0x3847;
}



// WARNING: Removing unreachable block (ram,0x0807ec66)
// WARNING: Removing unreachable block (ram,0x0807ec59)
// WARNING: Removing unreachable block (ram,0x0807ec80)

int inst_98_flags_var_2(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_98_values_var_3(void)

{
  return 0xffff7f6e;
}



// WARNING: Removing unreachable block (ram,0x0807ed29)
// WARNING: Removing unreachable block (ram,0x0807ed50)

int inst_98_flags_var_3(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_98_values_var_4(void)

{
  return 0x777e;
}



// WARNING: Removing unreachable block (ram,0x0807ee06)
// WARNING: Removing unreachable block (ram,0x0807edf9)
// WARNING: Removing unreachable block (ram,0x0807ee20)

int inst_98_flags_var_4(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_98_values_var_5(void)

{
  return 0xffffd9f8;
}



// WARNING: Removing unreachable block (ram,0x0807eed6)
// WARNING: Removing unreachable block (ram,0x0807eec9)
// WARNING: Removing unreachable block (ram,0x0807eef0)

int inst_98_flags_var_5(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_98_values_var_6(void)

{
  return 0xfffff141;
}



int inst_98_flags_var_6(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_98_values_var_7(void)

{
  return 0xffff5485;
}



// WARNING: Removing unreachable block (ram,0x0807f069)
// WARNING: Removing unreachable block (ram,0x0807f090)

int inst_98_flags_var_7(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_98_values_var_8(void)

{
  return 0xf72;
}



// WARNING: Removing unreachable block (ram,0x0807f139)
// WARNING: Removing unreachable block (ram,0x0807f146)

int inst_98_flags_var_8(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_98_values_var_9(void)

{
  return 0x3993;
}



// WARNING: Removing unreachable block (ram,0x0807f216)

int inst_98_flags_var_9(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_99_values_var_0(void)

{
  return 0x4d7ed367;
}



// WARNING: Removing unreachable block (ram,0x0807f2e4)

int inst_99_flags_var_0(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_99_values_var_1(void)

{
  return 0xb977b93c;
}



// WARNING: Removing unreachable block (ram,0x0807f3b2)

int inst_99_flags_var_1(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_99_values_var_2(void)

{
  return 0xa5ef604a;
}



int inst_99_flags_var_2(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_99_values_var_3(void)

{
  return 0xd7b6b76e;
}



// WARNING: Removing unreachable block (ram,0x0807f54e)
// WARNING: Removing unreachable block (ram,0x0807f541)
// WARNING: Removing unreachable block (ram,0x0807f568)

int inst_99_flags_var_3(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_99_values_var_4(void)

{
  return 0xe8527ac5;
}



// WARNING: Removing unreachable block (ram,0x0807f61c)
// WARNING: Removing unreachable block (ram,0x0807f60f)
// WARNING: Removing unreachable block (ram,0x0807f636)

int inst_99_flags_var_4(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_99_values_var_5(void)

{
  return 0xa807155f;
}



// WARNING: Removing unreachable block (ram,0x0807f6ea)

int inst_99_flags_var_5(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_99_values_var_6(void)

{
  return 0xc99f5f9b;
}



// WARNING: Removing unreachable block (ram,0x0807f7b8)
// WARNING: Removing unreachable block (ram,0x0807f7ab)
// WARNING: Removing unreachable block (ram,0x0807f7d2)

int inst_99_flags_var_6(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_99_values_var_7(void)

{
  return 0xe48782e8;
}



// WARNING: Removing unreachable block (ram,0x0807f886)
// WARNING: Removing unreachable block (ram,0x0807f879)
// WARNING: Removing unreachable block (ram,0x0807f8a0)

int inst_99_flags_var_7(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_99_values_var_8(void)

{
  return 0xa9128ed6;
}



// WARNING: Removing unreachable block (ram,0x0807f954)
// WARNING: Removing unreachable block (ram,0x0807f96e)

int inst_99_flags_var_8(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_99_values_var_9(void)

{
  return 0x4ea225af;
}



// WARNING: Removing unreachable block (ram,0x0807fa15)
// WARNING: Removing unreachable block (ram,0x0807fa3c)

int inst_99_flags_var_9(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
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
  int iVar3;
  bool in_PF;
  bool in_AF;
  
  bVar1 = in_AF * '\x06' + 0xb8;
  iVar3 = 0;
  if (in_PF) {
    iVar3 = 4;
  }
  iVar2 = 0;
  if (in_AF) {
    iVar2 = 0x10;
  }
  return (uint)(byte)(0x90 < (bVar1 & 0xf0) | in_AF * (0xf9 < bVar1) | 1U) + iVar3 + iVar2 + -0x15;
}



int inst_100_values_var_1(void)

{
  byte bVar1;
  char in_AF;
  
  bVar1 = in_AF * '\x06' + 0xb2;
  return CONCAT31(0x7ba08e,bVar1 + (0x90 < (bVar1 & 0xf0) | in_AF * (0xf9 < bVar1) | 1U) * '`') +
         -0x7ba08e18;
}



int inst_100_flags_var_1(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  bool in_PF;
  bool in_AF;
  
  bVar1 = in_AF * '\x06' - 0x3c;
  iVar3 = 0;
  if (in_PF) {
    iVar3 = 4;
  }
  iVar2 = 0;
  if (in_AF) {
    iVar2 = 0x10;
  }
  return (uint)(byte)(0x90 < (bVar1 & 0xf0) | in_AF * (0xf9 < bVar1) | 1U) + iVar3 + iVar2 + -9;
}



int inst_100_values_var_2(void)

{
  byte bVar1;
  char in_AF;
  
  bVar1 = in_AF * '\x06' - 0x1e;
  return CONCAT31(0xdc0d64,bVar1 + (0x90 < (bVar1 & 0xf0) | in_AF * (0xf9 < bVar1) | 1U) * '`') +
         0x23f29bb8;
}



// WARNING: Removing unreachable block (ram,0x0807fc82)

int inst_100_flags_var_2(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  bool in_PF;
  bool in_AF;
  
  bVar1 = in_AF * '\x06' + 0x40;
  iVar3 = 0;
  if (in_PF) {
    iVar3 = 4;
  }
  iVar2 = 0;
  if (in_AF) {
    iVar2 = 0x10;
  }
  return (uint)(byte)(0x90 < (bVar1 & 0xf0) | in_AF * (0xf9 < bVar1) | 1U) + iVar3 + iVar2 + -0xd;
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
  int iVar4;
  bool in_PF;
  byte in_AF;
  
  bVar1 = (bool)(in_AF | 1);
  bVar2 = bVar1 * '\x06' + 0x8b;
  iVar4 = 0;
  if (in_PF) {
    iVar4 = 4;
  }
  iVar3 = 0;
  if (bVar1) {
    iVar3 = 0x10;
  }
  return (uint)(byte)(0x90 < (bVar2 & 0xf0) | bVar1 * (0xf9 < bVar2) | 1U) + iVar4 + iVar3 + -0x11;
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
  int iVar4;
  bool in_PF;
  byte in_AF;
  
  bVar1 = (bool)(in_AF | 1);
  bVar2 = bVar1 * '\x06' - 0x36;
  iVar4 = 0;
  if (in_PF) {
    iVar4 = 4;
  }
  iVar3 = 0;
  if (bVar1) {
    iVar3 = 0x10;
  }
  return (uint)(byte)(0x90 < (bVar2 & 0xf0) | bVar1 * (0xf9 < bVar2) | 1U) + iVar4 + iVar3 + -0xd;
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
  int iVar4;
  bool in_PF;
  byte in_AF;
  
  bVar1 = (bool)(in_AF | 1);
  bVar2 = bVar1 * '\x06' + 0x3a;
  iVar4 = 0;
  if (in_PF) {
    iVar4 = 4;
  }
  iVar3 = 0;
  if (bVar1) {
    iVar3 = 0x10;
  }
  return (uint)(byte)(0x90 < (bVar2 & 0xf0) | bVar1 * (0xf9 < bVar2) | 1U) + iVar4 + iVar3 + -0x15;
}



int inst_100_values_var_6(void)

{
  byte bVar1;
  byte in_AF;
  
  bVar1 = (in_AF | 1) * '\x06' + 0x1e;
  return CONCAT31(0xe9b62f,bVar1 + (0x90 < (bVar1 & 0xf0) | (in_AF | 1) * (0xf9 < bVar1) | 1) * '`')
         + 0x1649d07c;
}



// WARNING: Removing unreachable block (ram,0x0807ff8a)

int inst_100_flags_var_6(void)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  bool in_PF;
  byte in_AF;
  
  bVar1 = (bool)(in_AF | 1);
  bVar2 = bVar1 * '\x06' + 0x8f;
  iVar4 = 0;
  if (in_PF) {
    iVar4 = 4;
  }
  iVar3 = 0;
  if (bVar1) {
    iVar3 = 0x10;
  }
  return (uint)(byte)(0x90 < (bVar2 & 0xf0) | bVar1 * (0xf9 < bVar2) | 1U) + iVar4 + iVar3 + -0x1d;
}



int inst_100_values_var_7(void)

{
  byte bVar1;
  char in_AF;
  
  bVar1 = in_AF * '\x06' + 0x34;
  return CONCAT31(0x142ac8,bVar1 + (0x90 < (bVar1 & 0xf0) | in_AF * (0xf9 < bVar1) | 1U) * '`') +
         -0x142ac89a;
}



// WARNING: Removing unreachable block (ram,0x0808004c)

int inst_100_flags_var_7(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  bool in_PF;
  bool in_AF;
  
  bVar1 = in_AF * '\x06' - 0x2a;
  iVar3 = 0;
  if (in_PF) {
    iVar3 = 4;
  }
  iVar2 = 0;
  if (in_AF) {
    iVar2 = 0x10;
  }
  return (uint)(byte)(0x90 < (bVar1 & 0xf0) | in_AF * (0xf9 < bVar1) | 1U) + iVar3 + iVar2 + -0x15;
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
  int iVar4;
  bool in_PF;
  byte in_AF;
  
  bVar1 = (bool)(in_AF | 1);
  bVar2 = bVar1 * '\x06' - 1;
  iVar4 = 0;
  if (in_PF) {
    iVar4 = 4;
  }
  iVar3 = 0;
  if (bVar1) {
    iVar3 = 0x10;
  }
  return (uint)(byte)(0x90 < (bVar2 & 0xf0) | bVar1 * (0xf9 < bVar2) | 1U) + iVar4 + iVar3 + -0xd;
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
  int iVar3;
  bool in_PF;
  bool in_AF;
  
  bVar1 = in_AF * '\x06' + 0x90;
  iVar3 = 0;
  if (in_PF) {
    iVar3 = 4;
  }
  iVar2 = 0;
  if (in_AF) {
    iVar2 = 0x10;
  }
  return (uint)(byte)(0x90 < (bVar1 & 0xf0) | in_AF * (0xf9 < bVar1) | 1U) + iVar3 + iVar2 + -0xd;
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
  int iVar4;
  bool in_PF;
  byte in_AF;
  
  bVar1 = (bool)(in_AF | 1);
  bVar2 = bVar1 * -6 - 0x36;
  iVar4 = 0;
  if (in_PF) {
    iVar4 = 4;
  }
  iVar3 = 0;
  if (bVar1) {
    iVar3 = 0x10;
  }
  return (uint)(byte)(0x9f < bVar2 | bVar1 * (bVar2 < 6) | 1U) + iVar4 + iVar3 + -9;
}



int inst_101_values_var_1(void)

{
  byte bVar1;
  char in_AF;
  
  bVar1 = in_AF * -6 - 0x3c;
  return CONCAT31(0x1673f9,bVar1 + (0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) * -0x60) + -0x1673f95e;
}



// WARNING: Removing unreachable block (ram,0x08080354)

int inst_101_flags_var_1(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  bool in_PF;
  bool in_AF;
  
  bVar1 = in_AF * -6 + 0x32;
  iVar3 = 0;
  if (in_PF) {
    iVar3 = 4;
  }
  iVar2 = 0;
  if (in_AF) {
    iVar2 = 0x10;
  }
  return (uint)(byte)(0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) + iVar3 + iVar2 + -0x1d;
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
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return (uint)(byte)(0x9f < (byte)(in_AF * -6) | in_AF * ((byte)(in_AF * -6) < 6) | 1U) + iVar2 +
         iVar1 + -0xd;
}



int inst_101_values_var_3(void)

{
  byte bVar1;
  byte in_AF;
  
  bVar1 = (in_AF | 1) * -6 + 0x2a;
  return CONCAT31(0x80317e,bVar1 + (0x9f < bVar1 | (in_AF | 1) * (bVar1 < 6) | 1) * -0x60) +
         0x7fce813c;
}



int inst_101_flags_var_3(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  bool in_PF;
  bool in_AF;
  
  bVar1 = in_AF * -6 + 0x29;
  iVar3 = 0;
  if (in_PF) {
    iVar3 = 4;
  }
  iVar2 = 0;
  if (in_AF) {
    iVar2 = 0x10;
  }
  return (uint)(byte)(0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) + iVar3 + iVar2 + -0x15;
}



int inst_101_values_var_4(void)

{
  byte bVar1;
  byte in_AF;
  
  bVar1 = (in_AF | 1) * -6 - 0x15;
  return CONCAT31(0x150215,bVar1 + (0x9f < bVar1 | (in_AF | 1) * (bVar1 < 6) | 1) * -0x60) +
         -0x15021585;
}



int inst_101_flags_var_4(void)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  bool in_PF;
  byte in_AF;
  
  bVar1 = (bool)(in_AF | 1);
  bVar2 = bVar1 * -6 + 0x6b;
  iVar4 = 0;
  if (in_PF) {
    iVar4 = 4;
  }
  iVar3 = 0;
  if (bVar1) {
    iVar3 = 0x10;
  }
  return (uint)(byte)(0x9f < bVar2 | bVar1 * (bVar2 < 6) | 1U) + iVar4 + iVar3 + -0xd;
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
  int iVar3;
  bool in_PF;
  bool in_AF;
  
  bVar1 = in_AF * -6 + 0xb7;
  iVar3 = 0;
  if (in_PF) {
    iVar3 = 4;
  }
  iVar2 = 0;
  if (in_AF) {
    iVar2 = 0x10;
  }
  return (uint)(byte)(0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) + iVar3 + iVar2 + -9;
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
  int iVar3;
  bool in_PF;
  bool in_AF;
  
  bVar1 = in_AF * -6 + 0x87;
  iVar3 = 0;
  if (in_PF) {
    iVar3 = 4;
  }
  iVar2 = 0;
  if (in_AF) {
    iVar2 = 0x10;
  }
  return (uint)(byte)(0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) + iVar3 + iVar2 + -0x15;
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
  int iVar3;
  bool in_PF;
  bool in_AF;
  
  bVar1 = in_AF * -6 - 0x1c;
  iVar3 = 0;
  if (in_PF) {
    iVar3 = 4;
  }
  iVar2 = 0;
  if (in_AF) {
    iVar2 = 0x10;
  }
  return (uint)(byte)(0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) + iVar3 + iVar2 + -0xd;
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
  int iVar3;
  bool in_PF;
  bool in_AF;
  
  bVar1 = in_AF * -6 - 0x10;
  iVar3 = 0;
  if (in_PF) {
    iVar3 = 4;
  }
  iVar2 = 0;
  if (in_AF) {
    iVar2 = 0x10;
  }
  return (uint)(byte)(0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) + iVar3 + iVar2 + -5;
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
  int iVar3;
  bool in_PF;
  bool in_AF;
  
  bVar1 = in_AF * -6 + 0xb7;
  iVar3 = 0;
  if (in_PF) {
    iVar3 = 4;
  }
  iVar2 = 0;
  if (in_AF) {
    iVar2 = 0x10;
  }
  return (uint)(byte)(0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) + iVar3 + iVar2 + -9;
}



undefined4 inst_102_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08080a0e)

int inst_102_flags_var_0(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_102_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08080ad2)

int inst_102_flags_var_1(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_102_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08080b96)
// WARNING: Removing unreachable block (ram,0x08080bb0)

int inst_102_flags_var_2(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_102_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08080c5a)
// WARNING: Removing unreachable block (ram,0x08080c74)

int inst_102_flags_var_3(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_102_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08080d1e)
// WARNING: Removing unreachable block (ram,0x08080d38)

int inst_102_flags_var_4(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_102_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08080de2)
// WARNING: Removing unreachable block (ram,0x08080dfc)

int inst_102_flags_var_5(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_102_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08080ea6)
// WARNING: Removing unreachable block (ram,0x08080ec0)

int inst_102_flags_var_6(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_102_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08080f6a)

int inst_102_flags_var_7(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_102_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808102e)

int inst_102_flags_var_8(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
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
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_103_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080811b6)

int inst_103_flags_var_0(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_103_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808127a)
// WARNING: Removing unreachable block (ram,0x08081294)

int inst_103_flags_var_1(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
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
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_103_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08081402)

int inst_103_flags_var_3(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_103_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080814c6)

int inst_103_flags_var_4(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_103_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808158a)
// WARNING: Removing unreachable block (ram,0x080815a4)

int inst_103_flags_var_5(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_103_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808164e)

int inst_103_flags_var_6(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_103_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08081712)
// WARNING: Removing unreachable block (ram,0x0808172c)

int inst_103_flags_var_7(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_103_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080817d6)

int inst_103_flags_var_8(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_103_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808189a)
// WARNING: Removing unreachable block (ram,0x080818b4)

int inst_103_flags_var_9(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_104_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808195c)

int inst_104_flags_var_0(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_104_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08081a1e)

int inst_104_flags_var_1(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_104_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08081ae0)
// WARNING: Removing unreachable block (ram,0x08081afa)

int inst_104_flags_var_2(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_104_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08081ba2)
// WARNING: Removing unreachable block (ram,0x08081bbc)

int inst_104_flags_var_3(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_104_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08081c64)

int inst_104_flags_var_4(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_104_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08081d26)
// WARNING: Removing unreachable block (ram,0x08081d40)

int inst_104_flags_var_5(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_104_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08081de8)
// WARNING: Removing unreachable block (ram,0x08081e02)

int inst_104_flags_var_6(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_104_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08081eaa)
// WARNING: Removing unreachable block (ram,0x08081ec4)

int inst_104_flags_var_7(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
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
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_104_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808202e)
// WARNING: Removing unreachable block (ram,0x08082048)

int inst_104_flags_var_9(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_105_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080820f2)

int inst_105_flags_var_0(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_105_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080821b6)

int inst_105_flags_var_1(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_105_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808227a)

int inst_105_flags_var_2(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_105_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808233e)
// WARNING: Removing unreachable block (ram,0x08082358)

int inst_105_flags_var_3(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_105_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08082402)
// WARNING: Removing unreachable block (ram,0x0808241c)

int inst_105_flags_var_4(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_105_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080824c6)

int inst_105_flags_var_5(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_105_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808258a)
// WARNING: Removing unreachable block (ram,0x080825a4)

int inst_105_flags_var_6(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_105_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808264e)
// WARNING: Removing unreachable block (ram,0x08082668)

int inst_105_flags_var_7(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_105_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08082712)

int inst_105_flags_var_8(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_105_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080827d6)
// WARNING: Removing unreachable block (ram,0x080827f0)

int inst_105_flags_var_9(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_106_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808289a)
// WARNING: Removing unreachable block (ram,0x080828b4)

int inst_106_flags_var_0(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_106_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808295e)
// WARNING: Removing unreachable block (ram,0x08082978)

int inst_106_flags_var_1(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_106_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08082a22)

int inst_106_flags_var_2(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_106_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08082ae6)
// WARNING: Removing unreachable block (ram,0x08082b00)

int inst_106_flags_var_3(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_106_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08082baa)

int inst_106_flags_var_4(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_106_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08082c6e)
// WARNING: Removing unreachable block (ram,0x08082c88)

int inst_106_flags_var_5(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_106_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08082d32)
// WARNING: Removing unreachable block (ram,0x08082d4c)

int inst_106_flags_var_6(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_106_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08082df6)

int inst_106_flags_var_7(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_106_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08082eba)

int inst_106_flags_var_8(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_106_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08082f7e)

int inst_106_flags_var_9(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_107_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08083040)

int inst_107_flags_var_0(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_107_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08083102)

int inst_107_flags_var_1(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_107_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080831c4)

int inst_107_flags_var_2(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_107_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08083286)
// WARNING: Removing unreachable block (ram,0x080832a0)

int inst_107_flags_var_3(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_107_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08083348)
// WARNING: Removing unreachable block (ram,0x08083362)

int inst_107_flags_var_4(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_107_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808340a)
// WARNING: Removing unreachable block (ram,0x08083424)

int inst_107_flags_var_5(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_107_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080834cc)
// WARNING: Removing unreachable block (ram,0x080834e6)

int inst_107_flags_var_6(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_107_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808358e)
// WARNING: Removing unreachable block (ram,0x080835a8)

int inst_107_flags_var_7(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_107_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08083650)

int inst_107_flags_var_8(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_107_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08083712)

int inst_107_flags_var_9(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
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
  char in_PF;
  char in_AF;
  
  return ((uint)(ushort)(CONCAT11(in_AF << 4 | 0x80U | in_PF << 2,0xf1) | 0x300) | 0xec290000) +
         0x13d66c0f;
}



undefined4 inst_121_flags_var_0(void)

{
  return 0;
}



int inst_121_values_var_1(void)

{
  char in_PF;
  char in_AF;
  
  return ((uint)(ushort)(CONCAT11(in_AF << 4 | in_PF << 2,0x4b) | 0x300) | 0x8e40000) + 0xf71be8b5;
}



undefined4 inst_121_flags_var_1(void)

{
  return 0;
}



int inst_121_values_var_2(void)

{
  char in_PF;
  char in_AF;
  
  return ((uint)(ushort)(CONCAT11(in_AF << 4 | 0x80U | in_PF << 2,4) | 0x300) | 0xa5430000) +
         0x5abc6cfc;
}



undefined4 inst_121_flags_var_2(void)

{
  return 0;
}



int inst_121_values_var_3(void)

{
  char in_PF;
  char in_AF;
  
  return ((uint)(ushort)(CONCAT11(in_AF << 4 | in_PF << 2,0xca) | 0x300) | 0x22860000) + 0xdd79e836;
}



undefined4 inst_121_flags_var_3(void)

{
  return 0;
}



int inst_121_values_var_4(void)

{
  char in_PF;
  char in_AF;
  
  return ((uint)(ushort)(CONCAT11(in_AF << 4 | in_PF << 2,0xc5) | 0x300) | 0x655d0000) + 0x9aa2e83b;
}



undefined4 inst_121_flags_var_4(void)

{
  return 0;
}



int inst_121_values_var_5(void)

{
  char in_PF;
  char in_AF;
  
  return ((uint)(ushort)(CONCAT11(in_AF << 4 | in_PF << 2,0xd5) | 0x300) | 0x70620000) + 0x8f9dec2b;
}



undefined4 inst_121_flags_var_5(void)

{
  return 0;
}



int inst_121_values_var_6(void)

{
  char in_PF;
  char in_AF;
  
  return ((uint)(ushort)(CONCAT11(in_AF << 4 | in_PF << 2,0xd1) | 0x300) | 0x54c20000) + 0xab3de82f;
}



undefined4 inst_121_flags_var_6(void)

{
  return 0;
}



int inst_121_values_var_7(void)

{
  char in_PF;
  char in_AF;
  
  return ((uint)(ushort)(CONCAT11(in_AF << 4 | 0x80U | in_PF << 2,0x3f) | 0x300) | 0x89990000) +
         0x766668c1;
}



undefined4 inst_121_flags_var_7(void)

{
  return 0;
}



int inst_121_values_var_8(void)

{
  char in_PF;
  char in_AF;
  
  return ((uint)(ushort)(CONCAT11(in_AF << 4 | 0x80U | in_PF << 2,0xf1) | 0x300) | 0xcc220000) +
         0x33dd6c0f;
}



undefined4 inst_121_flags_var_8(void)

{
  return 0;
}



int inst_121_values_var_9(void)

{
  char in_PF;
  char in_AF;
  
  return ((uint)(ushort)(CONCAT11(in_AF << 4 | 0x80U | in_PF << 2,0x3d) | 0x300) | 0x8d120000) +
         0x72ed6cc3;
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



// WARNING: Removing unreachable block (ram,0x0808f349)
// WARNING: Removing unreachable block (ram,0x0808f363)

int inst_136_flags_var_0(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_136_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808f415)

int inst_136_flags_var_1(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_136_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808f4e1)
// WARNING: Removing unreachable block (ram,0x0808f4fb)

int inst_136_flags_var_2(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_136_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808f5ad)

int inst_136_flags_var_3(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_136_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808f679)

int inst_136_flags_var_4(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_136_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808f745)

int inst_136_flags_var_5(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_136_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808f811)

int inst_136_flags_var_6(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_136_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808f8dd)

int inst_136_flags_var_7(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_136_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808f9a9)

int inst_136_flags_var_8(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_136_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808fa75)
// WARNING: Removing unreachable block (ram,0x0808fa8f)

int inst_136_flags_var_9(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_137_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808fb43)

int inst_137_flags_var_0(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_137_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808fc11)
// WARNING: Removing unreachable block (ram,0x0808fc2b)

int inst_137_flags_var_1(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_137_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808fcdf)

int inst_137_flags_var_2(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_137_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808fdad)

int inst_137_flags_var_3(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_137_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0808fe7b)

int inst_137_flags_var_4(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
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
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_137_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08090017)
// WARNING: Removing unreachable block (ram,0x08090031)

int inst_137_flags_var_6(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_137_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080900e5)
// WARNING: Removing unreachable block (ram,0x080900ff)

int inst_137_flags_var_7(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_137_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080901b3)
// WARNING: Removing unreachable block (ram,0x080901cd)

int inst_137_flags_var_8(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_137_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08090281)

int inst_137_flags_var_9(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_138_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809034d)

int inst_138_flags_var_0(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_138_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08090419)

int inst_138_flags_var_1(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_138_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080904e5)

int inst_138_flags_var_2(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
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
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
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
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_138_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08090749)

int inst_138_flags_var_5(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_138_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08090815)

int inst_138_flags_var_6(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_138_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080908e1)

int inst_138_flags_var_7(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_138_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080909ad)

int inst_138_flags_var_8(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_138_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08090a79)

int inst_138_flags_var_9(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
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



// WARNING: Removing unreachable block (ram,0x0809246f)
// WARNING: Removing unreachable block (ram,0x08092462)
// WARNING: Removing unreachable block (ram,0x08092489)

undefined4 inst_143_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_143_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08092525)
// WARNING: Removing unreachable block (ram,0x08092532)

undefined4 inst_143_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_143_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080925e7)
// WARNING: Removing unreachable block (ram,0x080925f4)

undefined4 inst_143_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_143_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080926b7)
// WARNING: Removing unreachable block (ram,0x080926aa)
// WARNING: Removing unreachable block (ram,0x080926d1)

undefined4 inst_143_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_143_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809276d)
// WARNING: Removing unreachable block (ram,0x0809277a)

undefined4 inst_143_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_143_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809282f)
// WARNING: Removing unreachable block (ram,0x0809283c)

undefined4 inst_143_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_143_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080928f1)
// WARNING: Removing unreachable block (ram,0x080928fe)

undefined4 inst_143_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_143_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080929b3)
// WARNING: Removing unreachable block (ram,0x080929c0)

int inst_143_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_143_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08092a76)
// WARNING: Removing unreachable block (ram,0x08092a83)

undefined4 inst_143_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_143_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08092b38)
// WARNING: Removing unreachable block (ram,0x08092b45)

undefined4 inst_143_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_144_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08092bf9)
// WARNING: Removing unreachable block (ram,0x08092c06)

undefined4 inst_144_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_144_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08092cc7)
// WARNING: Removing unreachable block (ram,0x08092cba)
// WARNING: Removing unreachable block (ram,0x08092ce1)

undefined4 inst_144_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_144_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08092d88)
// WARNING: Removing unreachable block (ram,0x08092d7b)
// WARNING: Removing unreachable block (ram,0x08092da2)

undefined4 inst_144_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_144_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08092e3c)
// WARNING: Removing unreachable block (ram,0x08092e49)

undefined4 inst_144_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_144_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08092efd)
// WARNING: Removing unreachable block (ram,0x08092f0a)

undefined4 inst_144_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_144_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08092fbe)
// WARNING: Removing unreachable block (ram,0x08092fcb)

undefined4 inst_144_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_144_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809307f)
// WARNING: Removing unreachable block (ram,0x0809308c)

int inst_144_flags_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_144_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08093140)
// WARNING: Removing unreachable block (ram,0x0809314d)

int inst_144_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_144_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08093201)
// WARNING: Removing unreachable block (ram,0x0809320e)

int inst_144_flags_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_144_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080932c2)
// WARNING: Removing unreachable block (ram,0x080932cf)

undefined4 inst_144_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_145_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08093389)
// WARNING: Removing unreachable block (ram,0x08093396)

undefined4 inst_145_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_145_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809345d)
// WARNING: Removing unreachable block (ram,0x08093450)
// WARNING: Removing unreachable block (ram,0x08093477)

int inst_145_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_145_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08093524)
// WARNING: Removing unreachable block (ram,0x08093517)
// WARNING: Removing unreachable block (ram,0x0809353e)

undefined4 inst_145_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_145_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080935de)
// WARNING: Removing unreachable block (ram,0x080935eb)

int inst_145_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_145_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080936a5)
// WARNING: Removing unreachable block (ram,0x080936b2)

int inst_145_flags_var_4(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_145_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809376c)
// WARNING: Removing unreachable block (ram,0x08093779)

undefined4 inst_145_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_145_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08093832)
// WARNING: Removing unreachable block (ram,0x0809383f)

int inst_145_flags_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_145_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08093906)
// WARNING: Removing unreachable block (ram,0x080938f9)
// WARNING: Removing unreachable block (ram,0x08093920)

int inst_145_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_145_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080939cd)
// WARNING: Removing unreachable block (ram,0x080939c0)
// WARNING: Removing unreachable block (ram,0x080939e7)

undefined4 inst_145_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_145_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08093a87)
// WARNING: Removing unreachable block (ram,0x08093a94)

undefined4 inst_145_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_146_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08093b57)
// WARNING: Removing unreachable block (ram,0x08093b4a)
// WARNING: Removing unreachable block (ram,0x08093b71)

undefined4 inst_146_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_146_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08093c0d)
// WARNING: Removing unreachable block (ram,0x08093c1a)

undefined4 inst_146_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_146_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08093cd0)
// WARNING: Removing unreachable block (ram,0x08093cdd)

int inst_146_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_146_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08093d93)
// WARNING: Removing unreachable block (ram,0x08093da0)

int inst_146_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_146_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08093e63)
// WARNING: Removing unreachable block (ram,0x08093e56)
// WARNING: Removing unreachable block (ram,0x08093e7d)

int inst_146_flags_var_4(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_146_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08093f19)
// WARNING: Removing unreachable block (ram,0x08093f26)

undefined4 inst_146_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_146_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08093fe9)
// WARNING: Removing unreachable block (ram,0x08093fdc)
// WARNING: Removing unreachable block (ram,0x08094003)

undefined4 inst_146_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_146_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080940ac)
// WARNING: Removing unreachable block (ram,0x0809409f)
// WARNING: Removing unreachable block (ram,0x080940c6)

int inst_146_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_146_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809416f)
// WARNING: Removing unreachable block (ram,0x08094162)
// WARNING: Removing unreachable block (ram,0x08094189)

undefined4 inst_146_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_146_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08094225)
// WARNING: Removing unreachable block (ram,0x08094232)

undefined4 inst_146_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_147_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080942ed)
// WARNING: Removing unreachable block (ram,0x080942fa)

int inst_147_flags_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_147_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080943b6)
// WARNING: Removing unreachable block (ram,0x080943c3)

undefined4 inst_147_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_147_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0809447f)
// WARNING: Removing unreachable block (ram,0x0809448c)

int inst_147_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_147_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08094548)
// WARNING: Removing unreachable block (ram,0x08094555)

int inst_147_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_147_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08094611)
// WARNING: Removing unreachable block (ram,0x0809461e)

undefined4 inst_147_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_147_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080946d9)
// WARNING: Removing unreachable block (ram,0x080946e6)

undefined4 inst_147_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_147_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080947a1)
// WARNING: Removing unreachable block (ram,0x080947ae)

int inst_147_flags_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_147_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08094869)
// WARNING: Removing unreachable block (ram,0x08094876)

undefined4 inst_147_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_147_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08094932)
// WARNING: Removing unreachable block (ram,0x0809493f)

undefined4 inst_147_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_147_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08094a08)
// WARNING: Removing unreachable block (ram,0x080949fb)
// WARNING: Removing unreachable block (ram,0x08094a22)

undefined4 inst_147_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_148_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08094abc)
// WARNING: Removing unreachable block (ram,0x08094ac9)

undefined4 inst_148_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_148_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08094b7d)
// WARNING: Removing unreachable block (ram,0x08094b8a)

undefined4 inst_148_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_148_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08094c3e)
// WARNING: Removing unreachable block (ram,0x08094c4b)

undefined4 inst_148_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_148_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08094d0c)
// WARNING: Removing unreachable block (ram,0x08094cff)
// WARNING: Removing unreachable block (ram,0x08094d26)

undefined4 inst_148_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_148_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08094dc0)
// WARNING: Removing unreachable block (ram,0x08094dcd)

undefined4 inst_148_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_148_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08094e81)
// WARNING: Removing unreachable block (ram,0x08094e8e)

int inst_148_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_148_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08094f42)
// WARNING: Removing unreachable block (ram,0x08094f4f)

undefined4 inst_148_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_148_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08095010)
// WARNING: Removing unreachable block (ram,0x08095003)
// WARNING: Removing unreachable block (ram,0x0809502a)

undefined4 inst_148_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_148_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080950d1)
// WARNING: Removing unreachable block (ram,0x080950c4)
// WARNING: Removing unreachable block (ram,0x080950eb)

int inst_148_flags_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_148_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08095185)
// WARNING: Removing unreachable block (ram,0x08095192)

undefined4 inst_148_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
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



// WARNING: Removing unreachable block (ram,0x080b4abd)
// WARNING: Removing unreachable block (ram,0x080b4ad7)

undefined4 inst_225_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_225_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b4b8b)
// WARNING: Removing unreachable block (ram,0x080b4bb5)

int inst_225_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_225_values_var_2(void)

{
  return 0;
}



int inst_225_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_225_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b4d41)
// WARNING: Removing unreachable block (ram,0x080b4d27)
// WARNING: Removing unreachable block (ram,0x080b4d51)

int inst_225_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_225_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b4df5)
// WARNING: Removing unreachable block (ram,0x080b4de8)
// WARNING: Removing unreachable block (ram,0x080b4e1f)

int inst_225_flags_var_4(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_225_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b4eb6)
// WARNING: Removing unreachable block (ram,0x080b4ec3)
// WARNING: Removing unreachable block (ram,0x080b4edd)

int inst_225_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_225_values_var_6(void)

{
  return 0;
}



undefined4 inst_225_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_225_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b505f)
// WARNING: Removing unreachable block (ram,0x080b5079)

undefined4 inst_225_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_225_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b5146)
// WARNING: Removing unreachable block (ram,0x080b511f)
// WARNING: Removing unreachable block (ram,0x080b512c)
// WARNING: Removing unreachable block (ram,0x080b5156)

undefined4 inst_225_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_225_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b5214)
// WARNING: Removing unreachable block (ram,0x080b51ed)
// WARNING: Removing unreachable block (ram,0x080b51fa)
// WARNING: Removing unreachable block (ram,0x080b5224)

undefined4 inst_225_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_226_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b52c6)
// WARNING: Removing unreachable block (ram,0x080b52f0)

int inst_226_flags_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_226_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b545e)
// WARNING: Removing unreachable block (ram,0x080b5488)

undefined4 inst_226_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_226_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b5554)

undefined4 inst_226_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_226_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b55f6)
// WARNING: Removing unreachable block (ram,0x080b5610)

undefined4 inst_226_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_226_values_var_5(void)

{
  return 0;
}



undefined4 inst_226_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_226_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b5874)
// WARNING: Removing unreachable block (ram,0x080b584d)
// WARNING: Removing unreachable block (ram,0x080b5884)

int inst_226_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_226_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b5919)
// WARNING: Removing unreachable block (ram,0x080b5940)

undefined4 inst_226_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_227_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b5ac4)

int inst_227_flags_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0x10;
}



undefined4 inst_227_values_var_1(void)

{
  return 0;
}



int inst_227_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_227_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b5c81)
// WARNING: Removing unreachable block (ram,0x080b5c5a)
// WARNING: Removing unreachable block (ram,0x080b5c91)

undefined4 inst_227_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_227_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b5d53)
// WARNING: Removing unreachable block (ram,0x080b5d2c)
// WARNING: Removing unreachable block (ram,0x080b5d39)
// WARNING: Removing unreachable block (ram,0x080b5d63)

int inst_227_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x14;
}



undefined4 inst_227_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b5e0b)

int inst_227_flags_var_4(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_227_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b5edc)
// WARNING: Removing unreachable block (ram,0x080b5f06)

int inst_227_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_227_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b5fc6)
// WARNING: Removing unreachable block (ram,0x080b5f9f)
// WARNING: Removing unreachable block (ram,0x080b5fac)
// WARNING: Removing unreachable block (ram,0x080b5fd6)

int inst_227_flags_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_227_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b607e)

undefined4 inst_227_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_227_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b616a)
// WARNING: Removing unreachable block (ram,0x080b6143)
// WARNING: Removing unreachable block (ram,0x080b617a)

int inst_227_flags_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x10;
}



undefined4 inst_227_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b6215)
// WARNING: Removing unreachable block (ram,0x080b6222)
// WARNING: Removing unreachable block (ram,0x080b623c)

int inst_227_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_228_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b62f0)
// WARNING: Removing unreachable block (ram,0x080b631a)

int inst_228_flags_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_228_values_var_1(void)

{
  return 0;
}



int inst_228_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_228_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b648c)

undefined4 inst_228_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_228_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b654d)
// WARNING: Removing unreachable block (ram,0x080b655a)
// WARNING: Removing unreachable block (ram,0x080b6574)

undefined4 inst_228_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_228_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b6628)
// WARNING: Removing unreachable block (ram,0x080b6652)

int inst_228_flags_var_4(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x10;
}



undefined4 inst_228_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b6710)
// WARNING: Removing unreachable block (ram,0x080b66f6)
// WARNING: Removing unreachable block (ram,0x080b6720)

undefined4 inst_228_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_228_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b67c4)

int inst_228_flags_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_228_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b68ac)
// WARNING: Removing unreachable block (ram,0x080b6885)
// WARNING: Removing unreachable block (ram,0x080b68bc)

int inst_228_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x14;
}



undefined4 inst_228_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b6960)
// WARNING: Removing unreachable block (ram,0x080b698a)

int inst_228_flags_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x10;
}



undefined4 inst_228_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b6a2e)

int inst_228_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0x10;
}



undefined4 inst_229_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b6af5)
// WARNING: Removing unreachable block (ram,0x080b6b02)

undefined4 inst_229_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_229_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b6bc9)
// WARNING: Removing unreachable block (ram,0x080b6bd6)
// WARNING: Removing unreachable block (ram,0x080b6bf0)

int inst_229_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0x10;
}



undefined4 inst_229_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b6caa)
// WARNING: Removing unreachable block (ram,0x080b6cd4)

int inst_229_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x14;
}



undefined4 inst_229_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b6d97)
// WARNING: Removing unreachable block (ram,0x080b6d70)
// WARNING: Removing unreachable block (ram,0x080b6d7d)
// WARNING: Removing unreachable block (ram,0x080b6da7)

int inst_229_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_229_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b6e43)
// WARNING: Removing unreachable block (ram,0x080b6e50)

undefined4 inst_229_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_229_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b6f24)

undefined4 inst_229_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_229_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b6feb)
// WARNING: Removing unreachable block (ram,0x080b6ff8)
// WARNING: Removing unreachable block (ram,0x080b7012)

int inst_229_flags_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_229_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b70cc)
// WARNING: Removing unreachable block (ram,0x080b70f6)

undefined4 inst_229_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_229_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b71a0)

int inst_229_flags_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_229_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b729e)

int inst_229_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x14;
}



undefined4 inst_230_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b7333)
// WARNING: Removing unreachable block (ram,0x080b735a)

undefined4 inst_230_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_230_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b73ff)
// WARNING: Removing unreachable block (ram,0x080b7426)

int inst_230_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_230_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b74f2)
// WARNING: Removing unreachable block (ram,0x080b74cb)
// WARNING: Removing unreachable block (ram,0x080b74d8)
// WARNING: Removing unreachable block (ram,0x080b7502)

int inst_230_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_230_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b75be)
// WARNING: Removing unreachable block (ram,0x080b7597)
// WARNING: Removing unreachable block (ram,0x080b75ce)

undefined4 inst_230_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_230_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b7766)

undefined4 inst_230_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_230_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b77fb)
// WARNING: Removing unreachable block (ram,0x080b7808)
// WARNING: Removing unreachable block (ram,0x080b7822)

int inst_230_flags_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_230_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b78ee)
// WARNING: Removing unreachable block (ram,0x080b78c7)
// WARNING: Removing unreachable block (ram,0x080b78d4)
// WARNING: Removing unreachable block (ram,0x080b78fe)

int inst_230_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_230_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b79a0)
// WARNING: Removing unreachable block (ram,0x080b79ca)

undefined4 inst_230_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_231_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b7b65)

undefined4 inst_231_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_231_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b7c24)
// WARNING: Removing unreachable block (ram,0x080b7bfd)
// WARNING: Removing unreachable block (ram,0x080b7c0a)
// WARNING: Removing unreachable block (ram,0x080b7c34)

int inst_231_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_231_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b7cd8)

undefined4 inst_231_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_231_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b7d9b)
// WARNING: Removing unreachable block (ram,0x080b7da8)
// WARNING: Removing unreachable block (ram,0x080b7dc2)

undefined4 inst_231_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_231_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b7f48)

undefined4 inst_231_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_231_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b800b)
// WARNING: Removing unreachable block (ram,0x080b8018)
// WARNING: Removing unreachable block (ram,0x080b8032)

int inst_231_flags_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_231_values_var_7(void)

{
  return 0;
}



undefined4 inst_231_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_231_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b81b6)
// WARNING: Removing unreachable block (ram,0x080b81a9)
// WARNING: Removing unreachable block (ram,0x080b81e0)

undefined4 inst_231_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_231_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b8286)
// WARNING: Removing unreachable block (ram,0x080b8279)
// WARNING: Removing unreachable block (ram,0x080b82b0)

int inst_231_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_232_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b8422)

int inst_232_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_232_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b851a)

int inst_232_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_232_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b85be)

undefined4 inst_232_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_232_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b86a6)
// WARNING: Removing unreachable block (ram,0x080b867f)
// WARNING: Removing unreachable block (ram,0x080b868c)
// WARNING: Removing unreachable block (ram,0x080b86b6)

undefined4 inst_232_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_232_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b875a)
// WARNING: Removing unreachable block (ram,0x080b8784)

int inst_232_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_232_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b881b)
// WARNING: Removing unreachable block (ram,0x080b8828)
// WARNING: Removing unreachable block (ram,0x080b8842)

undefined4 inst_232_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_232_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b88e9)
// WARNING: Removing unreachable block (ram,0x080b88f6)
// WARNING: Removing unreachable block (ram,0x080b8910)

undefined4 inst_232_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_232_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b89c4)

int inst_232_flags_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_232_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b8a92)
// WARNING: Removing unreachable block (ram,0x080b8abc)

undefined4 inst_232_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_233_values_var_0(void)

{
  return 0;
}



int inst_233_flags_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0x10;
}



undefined4 inst_233_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b8c64)

int inst_233_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_233_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b8d01)
// WARNING: Removing unreachable block (ram,0x080b8d0e)

undefined4 inst_233_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_233_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b8dfc)
// WARNING: Removing unreachable block (ram,0x080b8dd5)
// WARNING: Removing unreachable block (ram,0x080b8e0c)

int inst_233_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x14;
}



undefined4 inst_233_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b8eb6)
// WARNING: Removing unreachable block (ram,0x080b8ed0)

int inst_233_flags_var_4(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0x10;
}



undefined4 inst_233_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b8f7d)
// WARNING: Removing unreachable block (ram,0x080b8fa4)

undefined4 inst_233_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_233_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b9078)
// WARNING: Removing unreachable block (ram,0x080b9051)
// WARNING: Removing unreachable block (ram,0x080b905e)
// WARNING: Removing unreachable block (ram,0x080b9088)

undefined4 inst_233_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_233_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b9206)
// WARNING: Removing unreachable block (ram,0x080b91f9)
// WARNING: Removing unreachable block (ram,0x080b9230)

undefined4 inst_233_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_233_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b92f4)
// WARNING: Removing unreachable block (ram,0x080b92cd)
// WARNING: Removing unreachable block (ram,0x080b92da)
// WARNING: Removing unreachable block (ram,0x080b9304)

int inst_233_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x14;
}



undefined4 inst_234_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b93aa)
// WARNING: Removing unreachable block (ram,0x080b93d4)

int inst_234_flags_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_234_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b954a)

int inst_234_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_234_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b961a)

undefined4 inst_234_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_234_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b96ea)
// WARNING: Removing unreachable block (ram,0x080b9704)

undefined4 inst_234_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_234_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b97d4)
// WARNING: Removing unreachable block (ram,0x080b97ad)
// WARNING: Removing unreachable block (ram,0x080b97ba)
// WARNING: Removing unreachable block (ram,0x080b97e4)

int inst_234_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_234_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b987d)
// WARNING: Removing unreachable block (ram,0x080b98a4)

int inst_234_flags_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_234_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b995a)
// WARNING: Removing unreachable block (ram,0x080b9974)

int inst_234_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_234_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b9a2a)

int inst_234_flags_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0x10;
}



undefined4 inst_234_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b9afa)

int inst_234_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_235_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b9bea)
// WARNING: Removing unreachable block (ram,0x080b9bc3)
// WARNING: Removing unreachable block (ram,0x080b9bd0)
// WARNING: Removing unreachable block (ram,0x080b9bfa)

int inst_235_flags_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x14;
}



undefined4 inst_235_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b9ca4)

undefined4 inst_235_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_235_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080b9d79)

int inst_235_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_235_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ba014)
// WARNING: Removing unreachable block (ram,0x080b9fed)
// WARNING: Removing unreachable block (ram,0x080b9ffa)
// WARNING: Removing unreachable block (ram,0x080ba024)

int inst_235_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x14;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_235_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ba198)
// WARNING: Removing unreachable block (ram,0x080ba1a5)
// WARNING: Removing unreachable block (ram,0x080ba1bf)

int inst_235_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0x10;
}



undefined4 inst_235_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ba295)
// WARNING: Removing unreachable block (ram,0x080ba27b)
// WARNING: Removing unreachable block (ram,0x080ba2a5)

int inst_235_flags_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x10;
}



undefined4 inst_235_values_var_9(void)

{
  return 0;
}



int inst_235_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_236_values_var_1(void)

{
  return 0;
}



int inst_236_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_236_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ba5ae)
// WARNING: Removing unreachable block (ram,0x080ba5bb)

undefined4 inst_236_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_236_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ba689)
// WARNING: Removing unreachable block (ram,0x080ba6a3)

undefined4 inst_236_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_236_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ba757)

int inst_236_flags_var_4(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_236_values_var_5(void)

{
  return 0;
}



int inst_236_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_236_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ba9c1)

int inst_236_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_236_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080baa82)
// WARNING: Removing unreachable block (ram,0x080baa8f)
// WARNING: Removing unreachable block (ram,0x080baaa9)

int inst_236_flags_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_236_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bab77)
// WARNING: Removing unreachable block (ram,0x080bab50)
// WARNING: Removing unreachable block (ram,0x080bab5d)
// WARNING: Removing unreachable block (ram,0x080bab87)

int inst_236_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x10;
}



undefined4 inst_237_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bac20)
// WARNING: Removing unreachable block (ram,0x080bac2d)
// WARNING: Removing unreachable block (ram,0x080bac47)

undefined4 inst_237_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_237_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bacfc)
// WARNING: Removing unreachable block (ram,0x080bad26)

undefined4 inst_237_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_237_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080badbe)
// WARNING: Removing unreachable block (ram,0x080badcb)
// WARNING: Removing unreachable block (ram,0x080bade5)

int inst_237_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_237_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080baf94)

int inst_237_flags_var_4(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_237_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bb02d)
// WARNING: Removing unreachable block (ram,0x080bb03a)
// WARNING: Removing unreachable block (ram,0x080bb054)

int inst_237_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_237_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bb124)
// WARNING: Removing unreachable block (ram,0x080bb0fd)
// WARNING: Removing unreachable block (ram,0x080bb134)

int inst_237_flags_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_237_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bb1da)

int inst_237_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_237_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bb29d)
// WARNING: Removing unreachable block (ram,0x080bb2aa)

undefined4 inst_237_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_237_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bb36d)
// WARNING: Removing unreachable block (ram,0x080bb37a)

undefined4 inst_237_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_238_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bb462)
// WARNING: Removing unreachable block (ram,0x080bb43b)
// WARNING: Removing unreachable block (ram,0x080bb448)
// WARNING: Removing unreachable block (ram,0x080bb472)

int inst_238_flags_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_238_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bb516)
// WARNING: Removing unreachable block (ram,0x080bb540)

undefined4 inst_238_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_238_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bb5fe)
// WARNING: Removing unreachable block (ram,0x080bb5d7)
// WARNING: Removing unreachable block (ram,0x080bb5e4)
// WARNING: Removing unreachable block (ram,0x080bb60e)

undefined4 inst_238_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_238_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bb6b2)
// WARNING: Removing unreachable block (ram,0x080bb6dc)

int inst_238_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_238_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bb773)
// WARNING: Removing unreachable block (ram,0x080bb780)
// WARNING: Removing unreachable block (ram,0x080bb79a)

undefined4 inst_238_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_238_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bb841)
// WARNING: Removing unreachable block (ram,0x080bb84e)
// WARNING: Removing unreachable block (ram,0x080bb868)

int inst_238_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_238_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bb936)
// WARNING: Removing unreachable block (ram,0x080bb90f)
// WARNING: Removing unreachable block (ram,0x080bb91c)
// WARNING: Removing unreachable block (ram,0x080bb946)

int inst_238_flags_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_238_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bba04)
// WARNING: Removing unreachable block (ram,0x080bb9dd)
// WARNING: Removing unreachable block (ram,0x080bba14)

undefined4 inst_238_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_238_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bbad2)
// WARNING: Removing unreachable block (ram,0x080bbaab)
// WARNING: Removing unreachable block (ram,0x080bbab8)
// WARNING: Removing unreachable block (ram,0x080bbae2)

int inst_238_flags_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_238_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bbb79)
// WARNING: Removing unreachable block (ram,0x080bbb86)
// WARNING: Removing unreachable block (ram,0x080bbba0)

undefined4 inst_238_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_239_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bbc74)
// WARNING: Removing unreachable block (ram,0x080bbc4d)
// WARNING: Removing unreachable block (ram,0x080bbc5a)
// WARNING: Removing unreachable block (ram,0x080bbc84)

int inst_239_flags_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x10;
}



undefined4 inst_239_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bbd48)
// WARNING: Removing unreachable block (ram,0x080bbd2e)
// WARNING: Removing unreachable block (ram,0x080bbd58)

int inst_239_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x10;
}



undefined4 inst_239_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bbdf5)
// WARNING: Removing unreachable block (ram,0x080bbe02)

int inst_239_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_239_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bbec9)
// WARNING: Removing unreachable block (ram,0x080bbed6)
// WARNING: Removing unreachable block (ram,0x080bbef0)

int inst_239_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_239_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bbfaa)
// WARNING: Removing unreachable block (ram,0x080bbfd4)

undefined4 inst_239_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_239_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bc070)
// WARNING: Removing unreachable block (ram,0x080bc097)

int inst_239_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
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
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_239_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bc224)
// WARNING: Removing unreachable block (ram,0x080bc24e)

undefined4 inst_239_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_239_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bc2f8)
// WARNING: Removing unreachable block (ram,0x080bc322)

int inst_239_flags_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x14;
}



undefined4 inst_239_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bc3bf)
// WARNING: Removing unreachable block (ram,0x080bc3cc)

int inst_239_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_240_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bc49c)
// WARNING: Removing unreachable block (ram,0x080bc48f)
// WARNING: Removing unreachable block (ram,0x080bc4c6)

int inst_240_flags_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x10;
}



undefined4 inst_240_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bc586)
// WARNING: Removing unreachable block (ram,0x080bc55f)
// WARNING: Removing unreachable block (ram,0x080bc56c)
// WARNING: Removing unreachable block (ram,0x080bc596)

int inst_240_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_240_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bc656)
// WARNING: Removing unreachable block (ram,0x080bc62f)
// WARNING: Removing unreachable block (ram,0x080bc63c)
// WARNING: Removing unreachable block (ram,0x080bc666)

int inst_240_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_240_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bc70c)

int inst_240_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_240_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bc7f6)
// WARNING: Removing unreachable block (ram,0x080bc7cf)
// WARNING: Removing unreachable block (ram,0x080bc7dc)
// WARNING: Removing unreachable block (ram,0x080bc806)

int inst_240_flags_var_4(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_240_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bc8c6)
// WARNING: Removing unreachable block (ram,0x080bc8ac)
// WARNING: Removing unreachable block (ram,0x080bc8d6)

undefined4 inst_240_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_240_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bc96f)
// WARNING: Removing unreachable block (ram,0x080bc97c)

undefined4 inst_240_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_240_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bca66)
// WARNING: Removing unreachable block (ram,0x080bca4c)
// WARNING: Removing unreachable block (ram,0x080bca76)

int inst_240_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_240_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bcb36)
// WARNING: Removing unreachable block (ram,0x080bcb0f)
// WARNING: Removing unreachable block (ram,0x080bcb1c)
// WARNING: Removing unreachable block (ram,0x080bcb46)

int inst_240_flags_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_240_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bcbec)
// WARNING: Removing unreachable block (ram,0x080bcc06)

undefined4 inst_240_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_241_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bccc2)
// WARNING: Removing unreachable block (ram,0x080bccec)

undefined4 inst_241_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_241_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bcd8a)
// WARNING: Removing unreachable block (ram,0x080bcd97)

int inst_241_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0x10;
}



undefined4 inst_241_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bce5e)
// WARNING: Removing unreachable block (ram,0x080bce6b)
// WARNING: Removing unreachable block (ram,0x080bce85)

undefined4 inst_241_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_241_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bcf40)
// WARNING: Removing unreachable block (ram,0x080bcf6a)

int inst_241_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x10;
}



undefined4 inst_241_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bd030)
// WARNING: Removing unreachable block (ram,0x080bd009)
// WARNING: Removing unreachable block (ram,0x080bd016)
// WARNING: Removing unreachable block (ram,0x080bd040)

int inst_241_flags_var_4(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x10;
}



undefined4 inst_241_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bd0ec)
// WARNING: Removing unreachable block (ram,0x080bd116)

undefined4 inst_241_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_241_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bd1c2)
// WARNING: Removing unreachable block (ram,0x080bd1dc)

undefined4 inst_241_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_241_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bd298)

undefined4 inst_241_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_241_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bd386)
// WARNING: Removing unreachable block (ram,0x080bd36c)
// WARNING: Removing unreachable block (ram,0x080bd396)

int inst_241_flags_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x14;
}



undefined4 inst_241_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bd45c)
// WARNING: Removing unreachable block (ram,0x080bd435)
// WARNING: Removing unreachable block (ram,0x080bd46c)

int inst_241_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -0x14;
}



undefined4 inst_242_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bd510)

int inst_242_flags_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_242_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bd5d1)
// WARNING: Removing unreachable block (ram,0x080bd5de)

undefined4 inst_242_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_242_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bd69f)
// WARNING: Removing unreachable block (ram,0x080bd6c6)

int inst_242_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_242_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bd794)
// WARNING: Removing unreachable block (ram,0x080bd76d)
// WARNING: Removing unreachable block (ram,0x080bd77a)
// WARNING: Removing unreachable block (ram,0x080bd7a4)

int inst_242_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_242_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bd848)

int inst_242_flags_var_4(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_242_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bd916)

int inst_242_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0xc;
}



undefined4 inst_242_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bd9fe)
// WARNING: Removing unreachable block (ram,0x080bd9d7)
// WARNING: Removing unreachable block (ram,0x080bd9e4)
// WARNING: Removing unreachable block (ram,0x080bda0e)

int inst_242_flags_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_242_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bdacc)
// WARNING: Removing unreachable block (ram,0x080bdaa5)
// WARNING: Removing unreachable block (ram,0x080bdadc)

undefined4 inst_242_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_242_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bdb80)

int inst_242_flags_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0x10;
}



undefined4 inst_242_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080bdc41)
// WARNING: Removing unreachable block (ram,0x080bdc4e)
// WARNING: Removing unreachable block (ram,0x080bdc68)

int inst_242_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + 0x10;
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



int inst_253_values_var_0(void)

{
  undefined in_PF;
  
  return CONCAT31(0xf7845b,in_PF) + 0x87ba500;
}



undefined4 inst_253_flags_var_0(void)

{
  return 0;
}



int inst_253_values_var_1(void)

{
  byte in_PF;
  
  return ((uint)in_PF | 0x52ed7a00) + 0xad1285ff;
}



undefined4 inst_253_flags_var_1(void)

{
  return 0;
}



int inst_253_values_var_2(void)

{
  undefined in_PF;
  
  return CONCAT31(0xd26af2,in_PF) + 0x2d950dff;
}



undefined4 inst_253_flags_var_2(void)

{
  return 0;
}



int inst_253_values_var_3(void)

{
  byte in_PF;
  
  return ((uint)in_PF | 0xbc6bbb00) + 0x43944500;
}



undefined4 inst_253_flags_var_3(void)

{
  return 0;
}



int inst_253_values_var_4(void)

{
  undefined in_PF;
  
  return CONCAT31(0x68419e,in_PF) + -0x68419e01;
}



undefined4 inst_253_flags_var_4(void)

{
  return 0;
}



int inst_253_values_var_5(void)

{
  undefined in_PF;
  
  return ((uint)CONCAT11(in_PF,3) | 0xd2190000) + 0x2de6fefd;
}



undefined4 inst_253_flags_var_5(void)

{
  return 0;
}



int inst_253_values_var_6(void)

{
  undefined in_PF;
  
  return CONCAT31(0xbbb349,in_PF) + 0x444cb700;
}



undefined4 inst_253_flags_var_6(void)

{
  return 0;
}



int inst_253_values_var_7(void)

{
  undefined in_PF;
  
  return CONCAT31(0x8db577,in_PF) + 0x724a88ff;
}



undefined4 inst_253_flags_var_7(void)

{
  return 0;
}



int inst_253_values_var_8(void)

{
  undefined in_PF;
  
  return CONCAT22(0x179d,CONCAT11(in_PF,0xdd)) + -0x179d00dd;
}



undefined4 inst_253_flags_var_8(void)

{
  return 0;
}



int inst_253_values_var_9(void)

{
  byte in_PF;
  
  return ((uint)in_PF | 0xb7c85100) + 0x4837af00;
}



undefined4 inst_253_flags_var_9(void)

{
  return 0;
}



int inst_254_values_var_0(void)

{
  bool in_PF;
  
  return ((uint)!in_PF | 0xd7e72800) + 0x2818d7ff;
}



undefined4 inst_254_flags_var_0(void)

{
  return 0;
}



int inst_254_values_var_1(void)

{
  bool in_PF;
  
  return CONCAT31(0xefc884,!in_PF) + 0x10377bff;
}



undefined4 inst_254_flags_var_1(void)

{
  return 0;
}



int inst_254_values_var_2(void)

{
  bool in_PF;
  
  return CONCAT22(0x6155,CONCAT11(!in_PF,0x8d)) + -0x6155008d;
}



undefined4 inst_254_flags_var_2(void)

{
  return 0;
}



int inst_254_values_var_3(void)

{
  bool in_PF;
  
  return ((uint)!in_PF | 0x5b110d00) + 0xa4eef2ff;
}



undefined4 inst_254_flags_var_3(void)

{
  return 0;
}



int inst_254_values_var_4(void)

{
  bool in_PF;
  
  return CONCAT31(0x3a8a6f,!in_PF) + -0x3a8a6f00;
}



undefined4 inst_254_flags_var_4(void)

{
  return 0;
}



int inst_254_values_var_5(void)

{
  bool in_PF;
  
  return CONCAT22(0x449e,CONCAT11(!in_PF,0xa7)) + -0x449e00a7;
}



undefined4 inst_254_flags_var_5(void)

{
  return 0;
}



int inst_254_values_var_6(void)

{
  bool in_PF;
  
  return ((uint)!in_PF | 0x86c92e00) + 0x7936d200;
}



undefined4 inst_254_flags_var_6(void)

{
  return 0;
}



int inst_254_values_var_7(void)

{
  bool in_PF;
  
  return CONCAT22(0x3f25,CONCAT11(!in_PF,0x68)) + -0x3f250068;
}



undefined4 inst_254_flags_var_7(void)

{
  return 0;
}



int inst_254_values_var_8(void)

{
  bool in_PF;
  
  return CONCAT22(0x7373,CONCAT11(!in_PF,0x24)) + -0x73730024;
}



undefined4 inst_254_flags_var_8(void)

{
  return 0;
}



int inst_254_values_var_9(void)

{
  bool in_PF;
  
  return ((uint)!in_PF | 0x469d5c00) + 0xb962a3ff;
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

undefined4 inst_259_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_259_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c43ba)

int inst_259_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_259_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c448e)
// WARNING: Removing unreachable block (ram,0x080c4481)
// WARNING: Removing unreachable block (ram,0x080c44a8)

undefined4 inst_259_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_259_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c456f)

undefined4 inst_259_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_259_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c461c)

int inst_259_flags_var_4(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_259_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c46e3)
// WARNING: Removing unreachable block (ram,0x080c46d6)
// WARNING: Removing unreachable block (ram,0x080c46fd)

int inst_259_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_259_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c47c4)

int inst_259_flags_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_259_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c4871)

undefined4 inst_259_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_259_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c4938)

undefined4 inst_259_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_259_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c49ff)

int inst_259_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_260_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c4ac4)

undefined4 inst_260_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_260_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c4ba3)

undefined4 inst_260_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_260_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c4c4e)

int inst_260_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_260_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c4d06)

undefined4 inst_260_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_260_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c4dd8)
// WARNING: Removing unreachable block (ram,0x080c4dcb)
// WARNING: Removing unreachable block (ram,0x080c4df2)

int inst_260_flags_var_4(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_260_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c4e90)

undefined4 inst_260_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_260_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c4f7c)

undefined4 inst_260_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_260_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c5027)

int inst_260_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_260_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c50ec)

undefined4 inst_260_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_260_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c51b1)
// WARNING: Removing unreachable block (ram,0x080c51a4)
// WARNING: Removing unreachable block (ram,0x080c51cb)

int inst_260_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_261_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c526b)

int inst_261_flags_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_261_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c5332)

int inst_261_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_261_values_var_2(void)

{
  return 0;
}



undefined4 inst_261_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_261_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c54c0)
// WARNING: Removing unreachable block (ram,0x080c54cd)

int inst_261_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_261_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c5594)
// WARNING: Removing unreachable block (ram,0x080c5587)
// WARNING: Removing unreachable block (ram,0x080c55ae)

undefined4 inst_261_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_261_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c564e)
// WARNING: Removing unreachable block (ram,0x080c5675)

undefined4 inst_261_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_261_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c5715)
// WARNING: Removing unreachable block (ram,0x080c573c)

undefined4 inst_261_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_261_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c57e9)
// WARNING: Removing unreachable block (ram,0x080c5803)

int inst_261_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_261_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c58b0)
// WARNING: Removing unreachable block (ram,0x080c58a3)
// WARNING: Removing unreachable block (ram,0x080c58ca)

undefined4 inst_261_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_261_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c5977)
// WARNING: Removing unreachable block (ram,0x080c596a)
// WARNING: Removing unreachable block (ram,0x080c5991)

undefined4 inst_261_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_262_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c5a2f)
// WARNING: Removing unreachable block (ram,0x080c5a3c)

undefined4 inst_262_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_262_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c5af4)
// WARNING: Removing unreachable block (ram,0x080c5b1b)

undefined4 inst_262_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_262_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c5bb9)

int inst_262_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_262_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c5c7e)

undefined4 inst_262_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_262_values_var_4(void)

{
  return 0;
}



undefined4 inst_262_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_262_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c5e08)
// WARNING: Removing unreachable block (ram,0x080c5e2f)

undefined4 inst_262_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_262_values_var_6(void)

{
  return 0;
}



int inst_262_flags_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_262_values_var_7(void)

{
  return 0;
}



int inst_262_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_262_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c6064)
// WARNING: Removing unreachable block (ram,0x080c6057)
// WARNING: Removing unreachable block (ram,0x080c607e)

undefined4 inst_262_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_262_values_var_9(void)

{
  return 0;
}



int inst_262_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
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



int inst_271_flags_var_0(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_271_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c96c2)

int inst_271_flags_var_1(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_271_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c978f)

int inst_271_flags_var_2(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_271_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c9850)
// WARNING: Removing unreachable block (ram,0x080c985d)

int inst_271_flags_var_3(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_271_values_var_4(void)

{
  return 0;
}



int inst_271_flags_var_4(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_271_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c99eb)
// WARNING: Removing unreachable block (ram,0x080c9a12)

int inst_271_flags_var_5(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_271_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c9ac6)

int inst_271_flags_var_6(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_271_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c9b87)
// WARNING: Removing unreachable block (ram,0x080c9b94)

int inst_271_flags_var_7(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_271_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c9c61)
// WARNING: Removing unreachable block (ram,0x080c9c7b)

int inst_271_flags_var_8(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_271_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c9d2f)

int inst_271_flags_var_9(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_272_values_var_0(void)

{
  return 0;
}



int inst_272_flags_var_0(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_272_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c9eba)
// WARNING: Removing unreachable block (ram,0x080c9ec7)

int inst_272_flags_var_1(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_272_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080c9f93)

int inst_272_flags_var_2(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_272_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ca05f)
// WARNING: Removing unreachable block (ram,0x080ca079)

int inst_272_flags_var_3(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_272_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ca12b)

int inst_272_flags_var_4(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_272_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ca1f7)
// WARNING: Removing unreachable block (ram,0x080ca1ea)
// WARNING: Removing unreachable block (ram,0x080ca211)

int inst_272_flags_var_5(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_272_values_var_6(void)

{
  return 0;
}



int inst_272_flags_var_6(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_272_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ca38f)

int inst_272_flags_var_7(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_272_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ca44e)
// WARNING: Removing unreachable block (ram,0x080ca475)

int inst_272_flags_var_8(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
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
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_273_values_var_0(void)

{
  return 0;
}



int inst_273_flags_var_0(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_273_values_var_1(void)

{
  return 0;
}



int inst_273_flags_var_1(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_273_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ca79c)

int inst_273_flags_var_2(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_273_values_var_3(void)

{
  return 0;
}



int inst_273_flags_var_3(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_273_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ca940)

int inst_273_flags_var_4(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_273_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080caa12)

int inst_273_flags_var_5(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
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
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_273_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080caba8)
// WARNING: Removing unreachable block (ram,0x080cabb5)

int inst_273_flags_var_7(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
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
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_273_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cad59)
// WARNING: Removing unreachable block (ram,0x080cad73)

int inst_273_flags_var_9(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_274_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cae27)

int inst_274_flags_var_0(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_274_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080caef5)

int inst_274_flags_var_1(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_274_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cafc3)
// WARNING: Removing unreachable block (ram,0x080cafb6)
// WARNING: Removing unreachable block (ram,0x080cafdd)

int inst_274_flags_var_2(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_274_values_var_3(void)

{
  return 0;
}



int inst_274_flags_var_3(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_274_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cb15f)
// WARNING: Removing unreachable block (ram,0x080cb152)
// WARNING: Removing unreachable block (ram,0x080cb179)

int inst_274_flags_var_4(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_274_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cb22d)
// WARNING: Removing unreachable block (ram,0x080cb247)

int inst_274_flags_var_5(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_274_values_var_6(void)

{
  return 0;
}



int inst_274_flags_var_6(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
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
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_274_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cb497)
// WARNING: Removing unreachable block (ram,0x080cb48a)
// WARNING: Removing unreachable block (ram,0x080cb4b1)

int inst_274_flags_var_8(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
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
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_275_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cb639)
// WARNING: Removing unreachable block (ram,0x080cb62c)
// WARNING: Removing unreachable block (ram,0x080cb653)

int inst_275_flags_var_0(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_275_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cb700)
// WARNING: Removing unreachable block (ram,0x080cb70d)

int inst_275_flags_var_1(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_275_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cb7e0)
// WARNING: Removing unreachable block (ram,0x080cb7d3)
// WARNING: Removing unreachable block (ram,0x080cb7fa)

int inst_275_flags_var_2(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_275_values_var_3(void)

{
  return 0;
}



int inst_275_flags_var_3(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_275_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cb988)
// WARNING: Removing unreachable block (ram,0x080cb97b)
// WARNING: Removing unreachable block (ram,0x080cb9a2)

int inst_275_flags_var_4(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_275_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cba5b)
// WARNING: Removing unreachable block (ram,0x080cba4e)
// WARNING: Removing unreachable block (ram,0x080cba75)

int inst_275_flags_var_5(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_275_values_var_6(void)

{
  return 0;
}



int inst_275_flags_var_6(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_275_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cbbf5)
// WARNING: Removing unreachable block (ram,0x080cbc02)

int inst_275_flags_var_7(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_275_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cbcd6)
// WARNING: Removing unreachable block (ram,0x080cbcc9)
// WARNING: Removing unreachable block (ram,0x080cbcf0)

int inst_275_flags_var_8(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_275_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cbda9)
// WARNING: Removing unreachable block (ram,0x080cbdc3)

int inst_275_flags_var_9(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_276_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cbe75)
// WARNING: Removing unreachable block (ram,0x080cbe68)
// WARNING: Removing unreachable block (ram,0x080cbe8f)

int inst_276_flags_var_0(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
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
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
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
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_276_values_var_3(void)

{
  return 0;
}



int inst_276_flags_var_3(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_276_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cc1a5)
// WARNING: Removing unreachable block (ram,0x080cc198)
// WARNING: Removing unreachable block (ram,0x080cc1bf)

int inst_276_flags_var_4(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_276_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cc271)
// WARNING: Removing unreachable block (ram,0x080cc264)
// WARNING: Removing unreachable block (ram,0x080cc28b)

int inst_276_flags_var_5(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_276_values_var_6(void)

{
  return 0;
}



int inst_276_flags_var_6(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_276_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cc409)

int inst_276_flags_var_7(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_276_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cc4d5)
// WARNING: Removing unreachable block (ram,0x080cc4c8)
// WARNING: Removing unreachable block (ram,0x080cc4ef)

int inst_276_flags_var_8(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_276_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cc594)
// WARNING: Removing unreachable block (ram,0x080cc5a1)

int inst_276_flags_var_9(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_277_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cc66e)
// WARNING: Removing unreachable block (ram,0x080cc661)
// WARNING: Removing unreachable block (ram,0x080cc688)

undefined4 inst_277_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_277_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cc724)
// WARNING: Removing unreachable block (ram,0x080cc731)

undefined4 inst_277_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_277_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cc7f4)
// WARNING: Removing unreachable block (ram,0x080cc7e7)
// WARNING: Removing unreachable block (ram,0x080cc80e)

int inst_277_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_277_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cc8b7)
// WARNING: Removing unreachable block (ram,0x080cc8aa)
// WARNING: Removing unreachable block (ram,0x080cc8d1)

undefined4 inst_277_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_277_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cc97a)
// WARNING: Removing unreachable block (ram,0x080cc96d)
// WARNING: Removing unreachable block (ram,0x080cc994)

int inst_277_flags_var_4(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_277_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cca2f)
// WARNING: Removing unreachable block (ram,0x080cca3c)

undefined4 inst_277_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_277_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ccafe)
// WARNING: Removing unreachable block (ram,0x080ccaf1)
// WARNING: Removing unreachable block (ram,0x080ccb18)

undefined4 inst_277_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_277_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ccbc1)
// WARNING: Removing unreachable block (ram,0x080ccbb4)
// WARNING: Removing unreachable block (ram,0x080ccbdb)

int inst_277_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_277_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ccc76)
// WARNING: Removing unreachable block (ram,0x080ccc83)

int inst_277_flags_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_277_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ccd46)
// WARNING: Removing unreachable block (ram,0x080ccd39)
// WARNING: Removing unreachable block (ram,0x080ccd60)

undefined4 inst_277_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_278_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cce07)
// WARNING: Removing unreachable block (ram,0x080ccdfa)
// WARNING: Removing unreachable block (ram,0x080cce21)

int inst_278_flags_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_278_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ccebb)
// WARNING: Removing unreachable block (ram,0x080ccec8)

undefined4 inst_278_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_278_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ccf89)
// WARNING: Removing unreachable block (ram,0x080ccf7c)
// WARNING: Removing unreachable block (ram,0x080ccfa3)

int inst_278_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_278_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cd03d)
// WARNING: Removing unreachable block (ram,0x080cd04a)

undefined4 inst_278_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_278_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cd0fe)
// WARNING: Removing unreachable block (ram,0x080cd10b)

undefined4 inst_278_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_278_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cd1cc)
// WARNING: Removing unreachable block (ram,0x080cd1bf)
// WARNING: Removing unreachable block (ram,0x080cd1e6)

undefined4 inst_278_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_278_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cd28d)
// WARNING: Removing unreachable block (ram,0x080cd280)
// WARNING: Removing unreachable block (ram,0x080cd2a7)

undefined4 inst_278_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_278_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cd34e)
// WARNING: Removing unreachable block (ram,0x080cd341)
// WARNING: Removing unreachable block (ram,0x080cd368)

int inst_278_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_278_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cd40f)
// WARNING: Removing unreachable block (ram,0x080cd402)
// WARNING: Removing unreachable block (ram,0x080cd429)

undefined4 inst_278_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_278_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cd4c3)
// WARNING: Removing unreachable block (ram,0x080cd4d0)

int inst_278_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_279_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cd597)
// WARNING: Removing unreachable block (ram,0x080cd58a)
// WARNING: Removing unreachable block (ram,0x080cd5b1)

undefined4 inst_279_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_279_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cd65e)
// WARNING: Removing unreachable block (ram,0x080cd651)
// WARNING: Removing unreachable block (ram,0x080cd678)

int inst_279_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_279_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cd725)
// WARNING: Removing unreachable block (ram,0x080cd718)
// WARNING: Removing unreachable block (ram,0x080cd73f)

int inst_279_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_279_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cd7df)
// WARNING: Removing unreachable block (ram,0x080cd7ec)

undefined4 inst_279_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_279_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cd8b3)
// WARNING: Removing unreachable block (ram,0x080cd8a6)
// WARNING: Removing unreachable block (ram,0x080cd8cd)

undefined4 inst_279_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_279_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cd97a)
// WARNING: Removing unreachable block (ram,0x080cd96d)
// WARNING: Removing unreachable block (ram,0x080cd994)

int inst_279_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_279_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cda41)
// WARNING: Removing unreachable block (ram,0x080cda34)
// WARNING: Removing unreachable block (ram,0x080cda5b)

undefined4 inst_279_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_279_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cdb08)
// WARNING: Removing unreachable block (ram,0x080cdafb)
// WARNING: Removing unreachable block (ram,0x080cdb22)

undefined4 inst_279_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_279_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cdbc2)
// WARNING: Removing unreachable block (ram,0x080cdbcf)

undefined4 inst_279_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_279_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cdc95)
// WARNING: Removing unreachable block (ram,0x080cdc88)
// WARNING: Removing unreachable block (ram,0x080cdcaf)

int inst_279_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_280_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cdd58)
// WARNING: Removing unreachable block (ram,0x080cdd4b)
// WARNING: Removing unreachable block (ram,0x080cdd72)

int inst_280_flags_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_280_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cde1b)
// WARNING: Removing unreachable block (ram,0x080cde0e)
// WARNING: Removing unreachable block (ram,0x080cde35)

undefined4 inst_280_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_280_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cdede)
// WARNING: Removing unreachable block (ram,0x080cded1)
// WARNING: Removing unreachable block (ram,0x080cdef8)

undefined4 inst_280_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_280_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cdfa1)
// WARNING: Removing unreachable block (ram,0x080cdf94)
// WARNING: Removing unreachable block (ram,0x080cdfbb)

int inst_280_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_280_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ce064)
// WARNING: Removing unreachable block (ram,0x080ce057)
// WARNING: Removing unreachable block (ram,0x080ce07e)

int inst_280_flags_var_4(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_280_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ce11a)
// WARNING: Removing unreachable block (ram,0x080ce127)

int inst_280_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_280_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ce1dd)
// WARNING: Removing unreachable block (ram,0x080ce1ea)

int inst_280_flags_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_280_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ce2ad)
// WARNING: Removing unreachable block (ram,0x080ce2a0)
// WARNING: Removing unreachable block (ram,0x080ce2c7)

int inst_280_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_280_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ce370)
// WARNING: Removing unreachable block (ram,0x080ce363)
// WARNING: Removing unreachable block (ram,0x080ce38a)

int inst_280_flags_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_280_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ce433)
// WARNING: Removing unreachable block (ram,0x080ce426)
// WARNING: Removing unreachable block (ram,0x080ce44d)

undefined4 inst_280_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_281_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ce4ef)
// WARNING: Removing unreachable block (ram,0x080ce4fc)

undefined4 inst_281_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_281_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ce5c4)
// WARNING: Removing unreachable block (ram,0x080ce5b7)
// WARNING: Removing unreachable block (ram,0x080ce5de)

int inst_281_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_281_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ce68c)
// WARNING: Removing unreachable block (ram,0x080ce67f)
// WARNING: Removing unreachable block (ram,0x080ce6a6)

undefined4 inst_281_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_281_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ce755)
// WARNING: Removing unreachable block (ram,0x080ce748)
// WARNING: Removing unreachable block (ram,0x080ce76f)

int inst_281_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_281_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ce81d)
// WARNING: Removing unreachable block (ram,0x080ce810)
// WARNING: Removing unreachable block (ram,0x080ce837)

undefined4 inst_281_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_281_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ce8e6)
// WARNING: Removing unreachable block (ram,0x080ce8d9)
// WARNING: Removing unreachable block (ram,0x080ce900)

int inst_281_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_281_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ce9a2)
// WARNING: Removing unreachable block (ram,0x080ce9af)

undefined4 inst_281_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_281_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cea78)
// WARNING: Removing unreachable block (ram,0x080cea6b)
// WARNING: Removing unreachable block (ram,0x080cea92)

int inst_281_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_281_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ceb41)
// WARNING: Removing unreachable block (ram,0x080ceb34)
// WARNING: Removing unreachable block (ram,0x080ceb5b)

int inst_281_flags_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_281_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cec0a)
// WARNING: Removing unreachable block (ram,0x080cebfd)
// WARNING: Removing unreachable block (ram,0x080cec24)

undefined4 inst_281_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_282_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ceccb)
// WARNING: Removing unreachable block (ram,0x080cecbe)
// WARNING: Removing unreachable block (ram,0x080cece5)

undefined4 inst_282_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_282_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080ced8c)
// WARNING: Removing unreachable block (ram,0x080ced7f)
// WARNING: Removing unreachable block (ram,0x080ceda6)

int inst_282_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_282_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cee4d)
// WARNING: Removing unreachable block (ram,0x080cee40)
// WARNING: Removing unreachable block (ram,0x080cee67)

int inst_282_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_282_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cef0e)
// WARNING: Removing unreachable block (ram,0x080cef01)
// WARNING: Removing unreachable block (ram,0x080cef28)

int inst_282_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_282_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cefcf)
// WARNING: Removing unreachable block (ram,0x080cefc2)
// WARNING: Removing unreachable block (ram,0x080cefe9)

undefined4 inst_282_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_282_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cf090)
// WARNING: Removing unreachable block (ram,0x080cf083)
// WARNING: Removing unreachable block (ram,0x080cf0aa)

undefined4 inst_282_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_282_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cf151)
// WARNING: Removing unreachable block (ram,0x080cf144)
// WARNING: Removing unreachable block (ram,0x080cf16b)

int inst_282_flags_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_282_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cf212)
// WARNING: Removing unreachable block (ram,0x080cf205)
// WARNING: Removing unreachable block (ram,0x080cf22c)

undefined4 inst_282_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_282_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cf2c6)
// WARNING: Removing unreachable block (ram,0x080cf2d3)

int inst_282_flags_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_282_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cf394)
// WARNING: Removing unreachable block (ram,0x080cf387)
// WARNING: Removing unreachable block (ram,0x080cf3ae)

int inst_282_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_283_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cf44a)
// WARNING: Removing unreachable block (ram,0x080cf457)

int inst_283_flags_var_0(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_283_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cf518)

int inst_283_flags_var_1(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_283_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cf5e6)

int inst_283_flags_var_2(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_283_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cf6b4)
// WARNING: Removing unreachable block (ram,0x080cf6c1)

int inst_283_flags_var_3(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_283_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cf782)
// WARNING: Removing unreachable block (ram,0x080cf78f)

int inst_283_flags_var_4(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_283_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cf85d)
// WARNING: Removing unreachable block (ram,0x080cf877)

int inst_283_flags_var_5(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
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
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_283_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cf9f9)
// WARNING: Removing unreachable block (ram,0x080cfa13)

int inst_283_flags_var_7(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_283_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cfac7)
// WARNING: Removing unreachable block (ram,0x080cfae1)

int inst_283_flags_var_8(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
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
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_284_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cfc58)
// WARNING: Removing unreachable block (ram,0x080cfc65)

int inst_284_flags_var_0(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_284_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cfd35)

int inst_284_flags_var_1(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_284_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cfe05)
// WARNING: Removing unreachable block (ram,0x080cfe1f)

int inst_284_flags_var_2(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_284_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cfed5)
// WARNING: Removing unreachable block (ram,0x080cfeef)

int inst_284_flags_var_3(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_284_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080cff98)
// WARNING: Removing unreachable block (ram,0x080cffa5)

int inst_284_flags_var_4(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_284_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d0068)
// WARNING: Removing unreachable block (ram,0x080d0075)

int inst_284_flags_var_5(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_284_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d0145)
// WARNING: Removing unreachable block (ram,0x080d015f)

int inst_284_flags_var_6(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
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
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x14;
}



undefined4 inst_284_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d02e5)
// WARNING: Removing unreachable block (ram,0x080d02d8)
// WARNING: Removing unreachable block (ram,0x080d02ff)

int inst_284_flags_var_8(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_284_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d03b5)

int inst_284_flags_var_9(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_285_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d0483)
// WARNING: Removing unreachable block (ram,0x080d0476)
// WARNING: Removing unreachable block (ram,0x080d049d)

int inst_285_flags_var_0(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_285_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d0544)

int inst_285_flags_var_1(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_285_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d061f)
// WARNING: Removing unreachable block (ram,0x080d0612)
// WARNING: Removing unreachable block (ram,0x080d0639)

int inst_285_flags_var_2(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_285_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d06ed)
// WARNING: Removing unreachable block (ram,0x080d0707)

int inst_285_flags_var_3(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
}



undefined4 inst_285_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d07bb)
// WARNING: Removing unreachable block (ram,0x080d07ae)
// WARNING: Removing unreachable block (ram,0x080d07d5)

int inst_285_flags_var_4(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_285_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d087c)
// WARNING: Removing unreachable block (ram,0x080d0889)

int inst_285_flags_var_5(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_285_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d094a)
// WARNING: Removing unreachable block (ram,0x080d0957)

int inst_285_flags_var_6(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_285_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d0a18)
// WARNING: Removing unreachable block (ram,0x080d0a25)

int inst_285_flags_var_7(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -0x10;
}



undefined4 inst_285_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d0af3)

int inst_285_flags_var_8(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1 + -4;
}



undefined4 inst_285_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d0bc1)
// WARNING: Removing unreachable block (ram,0x080d0bb4)
// WARNING: Removing unreachable block (ram,0x080d0bdb)

int inst_285_flags_var_9(void)

{
  int iVar1;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return iVar2 + iVar1;
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

int inst_289_flags_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_289_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d202a)
// WARNING: Removing unreachable block (ram,0x080d2037)

int inst_289_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_289_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d20ed)
// WARNING: Removing unreachable block (ram,0x080d20fa)

int inst_289_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_289_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d21ae)
// WARNING: Removing unreachable block (ram,0x080d21bb)

int inst_289_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_289_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d2271)
// WARNING: Removing unreachable block (ram,0x080d227e)

undefined4 inst_289_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_289_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d2340)
// WARNING: Removing unreachable block (ram,0x080d2333)
// WARNING: Removing unreachable block (ram,0x080d235a)

undefined4 inst_289_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_289_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d23f6)
// WARNING: Removing unreachable block (ram,0x080d2403)

int inst_289_flags_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_289_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d24c6)
// WARNING: Removing unreachable block (ram,0x080d24b9)
// WARNING: Removing unreachable block (ram,0x080d24e0)

int inst_289_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_289_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d257c)
// WARNING: Removing unreachable block (ram,0x080d2589)

int inst_289_flags_var_8(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_289_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d263f)
// WARNING: Removing unreachable block (ram,0x080d264c)

int inst_289_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_290_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d2700)
// WARNING: Removing unreachable block (ram,0x080d270d)

undefined4 inst_290_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_290_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d27ce)
// WARNING: Removing unreachable block (ram,0x080d27c1)
// WARNING: Removing unreachable block (ram,0x080d27e8)

undefined4 inst_290_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_290_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d2882)
// WARNING: Removing unreachable block (ram,0x080d288f)

int inst_290_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_290_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d2943)
// WARNING: Removing unreachable block (ram,0x080d2950)

undefined4 inst_290_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_290_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d2a11)
// WARNING: Removing unreachable block (ram,0x080d2a04)
// WARNING: Removing unreachable block (ram,0x080d2a2b)

undefined4 inst_290_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_290_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d2ad2)
// WARNING: Removing unreachable block (ram,0x080d2ac5)
// WARNING: Removing unreachable block (ram,0x080d2aec)

int inst_290_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_290_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d2b93)
// WARNING: Removing unreachable block (ram,0x080d2b86)
// WARNING: Removing unreachable block (ram,0x080d2bad)

int inst_290_flags_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_290_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d2c47)
// WARNING: Removing unreachable block (ram,0x080d2c54)

undefined4 inst_290_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_290_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d2d08)
// WARNING: Removing unreachable block (ram,0x080d2d15)

undefined4 inst_290_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_290_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d2dc9)
// WARNING: Removing unreachable block (ram,0x080d2dd6)

undefined4 inst_290_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_291_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d2e8f)
// WARNING: Removing unreachable block (ram,0x080d2e9c)

int inst_291_flags_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_291_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d2f56)
// WARNING: Removing unreachable block (ram,0x080d2f63)

int inst_291_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_291_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d301c)
// WARNING: Removing unreachable block (ram,0x080d3029)

undefined4 inst_291_flags_var_2(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_291_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d30f0)
// WARNING: Removing unreachable block (ram,0x080d30e3)
// WARNING: Removing unreachable block (ram,0x080d310a)

undefined4 inst_291_flags_var_3(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_291_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d31b7)
// WARNING: Removing unreachable block (ram,0x080d31aa)
// WARNING: Removing unreachable block (ram,0x080d31d1)

undefined4 inst_291_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_291_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d327e)
// WARNING: Removing unreachable block (ram,0x080d3271)
// WARNING: Removing unreachable block (ram,0x080d3298)

undefined4 inst_291_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_291_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d3344)
// WARNING: Removing unreachable block (ram,0x080d3337)
// WARNING: Removing unreachable block (ram,0x080d335e)

undefined4 inst_291_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_291_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d340a)
// WARNING: Removing unreachable block (ram,0x080d33fd)
// WARNING: Removing unreachable block (ram,0x080d3424)

undefined4 inst_291_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_291_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d34d1)
// WARNING: Removing unreachable block (ram,0x080d34c4)
// WARNING: Removing unreachable block (ram,0x080d34eb)

undefined4 inst_291_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_291_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d3598)
// WARNING: Removing unreachable block (ram,0x080d358b)
// WARNING: Removing unreachable block (ram,0x080d35b2)

undefined4 inst_291_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_292_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d364e)
// WARNING: Removing unreachable block (ram,0x080d365b)

undefined4 inst_292_flags_var_0(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_292_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d371e)
// WARNING: Removing unreachable block (ram,0x080d3711)
// WARNING: Removing unreachable block (ram,0x080d3738)

int inst_292_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_292_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d37e1)
// WARNING: Removing unreachable block (ram,0x080d37d4)
// WARNING: Removing unreachable block (ram,0x080d37fb)

int inst_292_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_292_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d38a4)
// WARNING: Removing unreachable block (ram,0x080d3897)
// WARNING: Removing unreachable block (ram,0x080d38be)

int inst_292_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_292_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d395a)
// WARNING: Removing unreachable block (ram,0x080d3967)

undefined4 inst_292_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_292_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d3a1d)
// WARNING: Removing unreachable block (ram,0x080d3a2a)

int inst_292_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_292_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d3aed)
// WARNING: Removing unreachable block (ram,0x080d3ae0)
// WARNING: Removing unreachable block (ram,0x080d3b07)

int inst_292_flags_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_292_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d3ba3)
// WARNING: Removing unreachable block (ram,0x080d3bb0)

int inst_292_flags_var_7(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_292_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d3c73)
// WARNING: Removing unreachable block (ram,0x080d3c66)
// WARNING: Removing unreachable block (ram,0x080d3c8d)

undefined4 inst_292_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_292_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d3d29)
// WARNING: Removing unreachable block (ram,0x080d3d36)

undefined4 inst_292_flags_var_9(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_293_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d3df1)
// WARNING: Removing unreachable block (ram,0x080d3dfe)

int inst_293_flags_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_293_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d3eb8)
// WARNING: Removing unreachable block (ram,0x080d3ec5)

undefined4 inst_293_flags_var_1(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_293_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d3f8e)
// WARNING: Removing unreachable block (ram,0x080d3f81)
// WARNING: Removing unreachable block (ram,0x080d3fa8)

int inst_293_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_293_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d4049)
// WARNING: Removing unreachable block (ram,0x080d4056)

int inst_293_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_293_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d411f)
// WARNING: Removing unreachable block (ram,0x080d4112)
// WARNING: Removing unreachable block (ram,0x080d4139)

undefined4 inst_293_flags_var_4(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_293_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d41db)
// WARNING: Removing unreachable block (ram,0x080d41e8)

undefined4 inst_293_flags_var_5(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_293_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d42a4)
// WARNING: Removing unreachable block (ram,0x080d42b1)

int inst_293_flags_var_6(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_293_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d437a)
// WARNING: Removing unreachable block (ram,0x080d436d)
// WARNING: Removing unreachable block (ram,0x080d4394)

undefined4 inst_293_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_293_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d4443)
// WARNING: Removing unreachable block (ram,0x080d4436)
// WARNING: Removing unreachable block (ram,0x080d445d)

undefined4 inst_293_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_293_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d44ff)
// WARNING: Removing unreachable block (ram,0x080d450c)

int inst_293_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_294_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d45c0)
// WARNING: Removing unreachable block (ram,0x080d45cd)

int inst_294_flags_var_0(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_294_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d468e)
// WARNING: Removing unreachable block (ram,0x080d4681)
// WARNING: Removing unreachable block (ram,0x080d46a8)

int inst_294_flags_var_1(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_294_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d4742)
// WARNING: Removing unreachable block (ram,0x080d474f)

int inst_294_flags_var_2(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_294_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d4810)
// WARNING: Removing unreachable block (ram,0x080d4803)
// WARNING: Removing unreachable block (ram,0x080d482a)

int inst_294_flags_var_3(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_294_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d48d1)
// WARNING: Removing unreachable block (ram,0x080d48c4)
// WARNING: Removing unreachable block (ram,0x080d48eb)

int inst_294_flags_var_4(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_294_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d4992)
// WARNING: Removing unreachable block (ram,0x080d4985)
// WARNING: Removing unreachable block (ram,0x080d49ac)

int inst_294_flags_var_5(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
}



undefined4 inst_294_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d4a53)
// WARNING: Removing unreachable block (ram,0x080d4a46)
// WARNING: Removing unreachable block (ram,0x080d4a6d)

undefined4 inst_294_flags_var_6(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_294_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d4b14)
// WARNING: Removing unreachable block (ram,0x080d4b07)
// WARNING: Removing unreachable block (ram,0x080d4b2e)

undefined4 inst_294_flags_var_7(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_294_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d4bc8)
// WARNING: Removing unreachable block (ram,0x080d4bd5)

undefined4 inst_294_flags_var_8(void)

{
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 inst_294_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080d4c89)
// WARNING: Removing unreachable block (ram,0x080d4c96)

int inst_294_flags_var_9(void)

{
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return iVar1 + -4;
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


