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



// WARNING: Removing unreachable block (ram,0x080532ec)
// WARNING: Removing unreachable block (ram,0x080532f5)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x08053338)
// WARNING: Removing unreachable block (ram,0x08053341)

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



undefined8 inst_0_values_var_0(void)

{
  undefined4 in_EDX;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(CONCAT11(in_AF + 'O',in_AF * '\x06' + '\x12') & 0xff0f) |
                         0xc6d40000) + 0x392baff8);
}



undefined8 inst_0_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  byte in_AF;
  
  iVar1 = 0;
  if ((bool)(in_AF | 1)) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)(in_AF | 1) + iVar1 + -0x11);
}



undefined8 inst_0_values_var_1(void)

{
  undefined4 in_EDX;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(CONCAT11(in_AF + 'q',in_AF * '\x06' + -0x77) & 0xff0f) | 0x20030000
                         ) + 0xdffc8df1);
}



undefined8 inst_0_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)in_AF + iVar1 + -0x11);
}



undefined8 inst_0_values_var_2(void)

{
  undefined4 in_EDX;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(CONCAT11(in_AF + -0x1b,in_AF * '\x06' + 'E') & 0xff0f) | 0xbac20000
                         ) + 0x453d19f5);
}



undefined8 inst_0_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)in_AF + iVar1 + -0x11);
}



undefined8 inst_0_values_var_3(void)

{
  undefined4 in_EDX;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(CONCAT11(in_AF + -10,in_AF * '\x06' + -0x4a) & 0xff0f) | 0xc8cd0000
                         ) + 0x373208f4);
}



undefined8 inst_0_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  byte in_AF;
  
  iVar1 = 0;
  if ((bool)(in_AF | 1)) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)(in_AF | 1) + iVar1 + -0x11);
}



undefined8 inst_0_values_var_4(void)

{
  undefined4 in_EDX;
  byte in_AF;
  
  return CONCAT44(in_EDX,((uint)(CONCAT11((in_AF | 1) + 0xb2,(in_AF | 1) * '\x06' + ';') & 0xff0f) |
                         0x1ceb0000) + 0xe3144cff);
}



undefined8 inst_0_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)in_AF + iVar1 + -0x11);
}



undefined8 inst_0_values_var_5(void)

{
  undefined4 in_EDX;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(CONCAT11(in_AF + 'Q',in_AF * '\x06' + 'X') & 0xff0f) | 0x26f00000)
                         + 0xd90fadf2);
}



undefined8 inst_0_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  byte in_AF;
  
  iVar1 = 0;
  if ((bool)(in_AF | 1)) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)(in_AF | 1) + iVar1 + -0x11);
}



undefined8 inst_0_values_var_6(void)

{
  undefined4 in_EDX;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(CONCAT11(in_AF + -0x7e,in_AF * '\x06' + -0x69) & 0xff0f) |
                         0x15380000) + 0xeac77cf3);
}



undefined8 inst_0_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  byte in_AF;
  
  iVar1 = 0;
  if ((bool)(in_AF | 1)) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)(in_AF | 1) + iVar1 + -0x11);
}



undefined8 inst_0_values_var_7(void)

{
  undefined4 in_EDX;
  byte in_AF;
  
  return CONCAT44(in_EDX,((uint)(CONCAT11((in_AF | 1) - 0x32,(in_AF | 1) * '\x06' + '\x0e') & 0xff0f
                                ) | 0xc6980000) + 0x396730fc);
}



undefined8 inst_0_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)in_AF + iVar1 + -0x11);
}



undefined8 inst_0_values_var_8(void)

{
  undefined4 in_EDX;
  byte in_AF;
  
  return CONCAT44(in_EDX,((uint)(CONCAT11((in_AF | 1) - 3,(in_AF | 1) * '\x06' + '*') & 0xff0f) |
                         0x5fab0000) + 0xa0540200);
}



undefined8 inst_0_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  byte in_AF;
  
  iVar1 = 0;
  if ((bool)(in_AF | 1)) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)(in_AF | 1) + iVar1 + -0x11);
}



undefined8 inst_0_values_var_9(void)

{
  undefined4 in_EDX;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(CONCAT11(in_AF + 'o',in_AF * '\x06' + '\x14') & 0xff0f) |
                         0x48e70000) + 0xb7188ff6);
}



undefined8 inst_0_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)in_AF + iVar1 + -0x11);
}



longlong inst_1_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08053b48)

undefined8 inst_1_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_1_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08053bfd)

undefined8 inst_1_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -8);
}



longlong inst_1_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08053cb2)

undefined8 inst_1_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -8);
}



longlong inst_1_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08053d67)

undefined8 inst_1_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_1_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08053e1c)

undefined8 inst_1_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_1_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08053ed1)

undefined8 inst_1_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -8);
}



longlong inst_1_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08053f86)

undefined8 inst_1_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_1_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805403b)

undefined8 inst_1_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_1_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080540f0)

undefined8 inst_1_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -8);
}



longlong inst_1_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080541a5)

undefined8 inst_1_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_2_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805425a)

undefined8 inst_2_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0xc);
}



longlong inst_2_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805430f)

undefined8 inst_2_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -8);
}



longlong inst_2_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080543c4)

undefined8 inst_2_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_2_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08054479)

undefined8 inst_2_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_2_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805452e)

undefined8 inst_2_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_2_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080545e3)

undefined8 inst_2_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -8);
}



longlong inst_2_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08054698)

undefined8 inst_2_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_2_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805474d)

undefined8 inst_2_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_2_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08054802)

undefined8 inst_2_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_2_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080548b7)

undefined8 inst_2_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



undefined8 inst_3_values_var_0(void)

{
  undefined4 in_EDX;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(CONCAT11(-6 - in_AF,in_AF * -6 + -0x2e) & 0xff0f) | 0x45920000) +
                         0xba6d06f4);
}



undefined8 inst_3_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  byte in_AF;
  
  iVar1 = 0;
  if ((bool)(in_AF | 1)) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)(in_AF | 1) + iVar1 + -0x11);
}



undefined8 inst_3_values_var_1(void)

{
  undefined4 in_EDX;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(CONCAT11('w' - in_AF,in_AF * -6 + '\b') & 0xff0f) | 0x6fdd0000) +
                         0x902289fe);
}



undefined8 inst_3_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  byte in_AF;
  
  iVar1 = 0;
  if ((bool)(in_AF | 1)) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)(in_AF | 1) + iVar1 + -0x11);
}



undefined8 inst_3_values_var_2(void)

{
  undefined4 in_EDX;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(CONCAT11(-0x56 - in_AF,in_AF * -6 + '!') & 0xff0f) | 0x311d0000) +
                         0xcee256f5);
}



undefined8 inst_3_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)in_AF + iVar1 + -0x11);
}



undefined8 inst_3_values_var_3(void)

{
  undefined4 in_EDX;
  byte in_AF;
  
  return CONCAT44(in_EDX,((uint)(CONCAT11(-0x14 - (in_AF | 1),(in_AF | 1) * -6 + -2) & 0xff0f) |
                         0x7f370000) + 0x80c814f8);
}



undefined8 inst_3_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)in_AF + iVar1 + -0x11);
}



undefined8 inst_3_values_var_4(void)

{
  undefined4 in_EDX;
  byte in_AF;
  
  return CONCAT44(in_EDX,((uint)(CONCAT11(-0x6a - (in_AF | 1),(in_AF | 1) * -6 + '\x1b') & 0xff0f) |
                         0x78b90000) + 0x87466afb);
}



undefined8 inst_3_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  byte in_AF;
  
  iVar1 = 0;
  if ((bool)(in_AF | 1)) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)(in_AF | 1) + iVar1 + -0x11);
}



undefined8 inst_3_values_var_5(void)

{
  undefined4 in_EDX;
  byte in_AF;
  
  return CONCAT44(in_EDX,((uint)(CONCAT11(-0x5d - (in_AF | 1),(in_AF | 1) * -6 + -0x46) & 0xff0f) |
                         0x3cfa0000) + 0xc3055dfc);
}



undefined8 inst_3_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)in_AF + iVar1 + -0x11);
}



undefined8 inst_3_values_var_6(void)

{
  undefined4 in_EDX;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(CONCAT11(-0x69 - in_AF,in_AF * -6 + -10) & 0xff0f) | 0xcde0000) +
                         0xf3216a00);
}



undefined8 inst_3_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)in_AF + iVar1 + -0x11);
}



undefined8 inst_3_values_var_7(void)

{
  undefined4 in_EDX;
  byte in_AF;
  
  return CONCAT44(in_EDX,((uint)(CONCAT11(-0x1e - (in_AF | 1),(in_AF | 1) * -6 + '\x1a') & 0xff0f) |
                         0x87a50000) + 0x785a1efc);
}



undefined8 inst_3_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  byte in_AF;
  
  iVar1 = 0;
  if ((bool)(in_AF | 1)) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)(in_AF | 1) + iVar1 + -0x11);
}



undefined8 inst_3_values_var_8(void)

{
  undefined4 in_EDX;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(CONCAT11('p' - in_AF,in_AF * -6 + -0x7f) & 0xff0f) | 0x61740000) +
                         0x9e8b90f5);
}



undefined8 inst_3_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  bool in_AF;
  
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)in_AF + iVar1 + -0x11);
}



undefined8 inst_3_values_var_9(void)

{
  undefined4 in_EDX;
  byte in_AF;
  
  return CONCAT44(in_EDX,((uint)(CONCAT11(-0x34 - (in_AF | 1),(in_AF | 1) * -6 + '<') & 0xff0f) |
                         0xbcc00000) + 0x433f34fa);
}



undefined8 inst_3_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  byte in_AF;
  
  iVar1 = 0;
  if ((bool)(in_AF | 1)) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)(in_AF | 1) + iVar1 + -0x11);
}



longlong inst_4_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08055080)

undefined8 inst_4_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_4_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805516c)
// WARNING: Removing unreachable block (ram,0x08055152)
// WARNING: Removing unreachable block (ram,0x0805517c)

undefined8 inst_4_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_4_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08055217)
// WARNING: Removing unreachable block (ram,0x08055224)

undefined8 inst_4_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_4_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080552e8)
// WARNING: Removing unreachable block (ram,0x080552f5)

undefined8 inst_4_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_4_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080553c6)
// WARNING: Removing unreachable block (ram,0x080553b9)
// WARNING: Removing unreachable block (ram,0x080553f0)

undefined8 inst_4_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_4_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805548a)

undefined8 inst_4_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_4_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805555c)
// WARNING: Removing unreachable block (ram,0x08055569)
// WARNING: Removing unreachable block (ram,0x08055583)

undefined8 inst_4_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_4_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805562e)
// WARNING: Removing unreachable block (ram,0x0805563b)

undefined8 inst_4_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_4_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805570d)
// WARNING: Removing unreachable block (ram,0x08055737)

undefined8 inst_4_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_4_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080557df)
// WARNING: Removing unreachable block (ram,0x080557d2)
// WARNING: Removing unreachable block (ram,0x08055809)

undefined8 inst_4_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_5_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080558c9)

undefined8 inst_5_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_5_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805597f)
// WARNING: Removing unreachable block (ram,0x08055972)
// WARNING: Removing unreachable block (ram,0x080559a9)

undefined8 inst_5_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_5_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08055a69)
// WARNING: Removing unreachable block (ram,0x08055a79)

undefined8 inst_5_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_5_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08055b39)
// WARNING: Removing unreachable block (ram,0x08055b49)

undefined8 inst_5_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_5_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08055c09)
// WARNING: Removing unreachable block (ram,0x08055c19)

undefined8 inst_5_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_5_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08055cd9)
// WARNING: Removing unreachable block (ram,0x08055cbf)
// WARNING: Removing unreachable block (ram,0x08055ce9)

undefined8 inst_5_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_5_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08055d82)

undefined8 inst_5_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_5_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08055e5f)
// WARNING: Removing unreachable block (ram,0x08055e52)
// WARNING: Removing unreachable block (ram,0x08055e89)

undefined8 inst_5_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_5_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08055f49)
// WARNING: Removing unreachable block (ram,0x08055f59)

undefined8 inst_5_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_5_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08055fff)
// WARNING: Removing unreachable block (ram,0x08055ff2)
// WARNING: Removing unreachable block (ram,0x08056029)

undefined8 inst_5_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_6_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080560c8)

undefined8 inst_6_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_6_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805619e)
// WARNING: Removing unreachable block (ram,0x080561d5)

undefined8 inst_6_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_6_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08056280)
// WARNING: Removing unreachable block (ram,0x0805629a)

undefined8 inst_6_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_6_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08056370)
// WARNING: Removing unreachable block (ram,0x08056380)

undefined8 inst_6_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x14);
}



longlong inst_6_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805642c)

undefined8 inst_6_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_6_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805651c)
// WARNING: Removing unreachable block (ram,0x080564f5)
// WARNING: Removing unreachable block (ram,0x08056502)
// WARNING: Removing unreachable block (ram,0x0805652c)

undefined8 inst_6_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_6_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080565d8)
// WARNING: Removing unreachable block (ram,0x080565f2)

undefined8 inst_6_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0x10);
}



longlong inst_6_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080566c8)
// WARNING: Removing unreachable block (ram,0x080566ae)
// WARNING: Removing unreachable block (ram,0x080566d8)

undefined8 inst_6_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_6_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805679e)
// WARNING: Removing unreachable block (ram,0x08056784)
// WARNING: Removing unreachable block (ram,0x080567ae)

undefined8 inst_6_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_6_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08056859)
// WARNING: Removing unreachable block (ram,0x08056873)

undefined8 inst_6_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_7_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08056945)
// WARNING: Removing unreachable block (ram,0x08056955)

undefined8 inst_7_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_7_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080569f0)

undefined8 inst_7_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0x10);
}



longlong inst_7_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08056ae9)
// WARNING: Removing unreachable block (ram,0x08056af9)

undefined8 inst_7_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_7_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08056b94)

undefined8 inst_7_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_7_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08056c73)

undefined8 inst_7_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_7_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08056d45)

undefined8 inst_7_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_7_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08056e0a)
// WARNING: Removing unreachable block (ram,0x08056e17)

undefined8 inst_7_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0xc);
}



longlong inst_7_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08056edc)

undefined8 inst_7_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_7_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08056fbb)

undefined8 inst_7_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_7_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08057080)
// WARNING: Removing unreachable block (ram,0x0805708d)

undefined8 inst_7_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0x10);
}



longlong inst_8_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08057164)
// WARNING: Removing unreachable block (ram,0x0805717e)

undefined8 inst_8_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0xc);
}



longlong inst_8_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805723c)
// WARNING: Removing unreachable block (ram,0x0805722f)
// WARNING: Removing unreachable block (ram,0x08057266)

undefined8 inst_8_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x14);
}



longlong inst_8_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08057314)
// WARNING: Removing unreachable block (ram,0x0805732e)

undefined8 inst_8_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0x10);
}



longlong inst_8_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08057406)
// WARNING: Removing unreachable block (ram,0x08057416)

undefined8 inst_8_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_8_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080574b7)
// WARNING: Removing unreachable block (ram,0x080574c4)

undefined8 inst_8_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_8_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080575b5)
// WARNING: Removing unreachable block (ram,0x0805758e)
// WARNING: Removing unreachable block (ram,0x0805759b)
// WARNING: Removing unreachable block (ram,0x080575c5)

undefined8 inst_8_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x14);
}



longlong inst_8_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08057673)
// WARNING: Removing unreachable block (ram,0x0805769d)

undefined8 inst_8_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_8_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08057765)

undefined8 inst_8_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_8_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08057823)
// WARNING: Removing unreachable block (ram,0x08057816)
// WARNING: Removing unreachable block (ram,0x0805784d)

undefined8 inst_8_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_8_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080578ed)
// WARNING: Removing unreachable block (ram,0x080578fa)

undefined8 inst_8_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0x10);
}



longlong inst_9_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080579e4)
// WARNING: Removing unreachable block (ram,0x080579f4)

undefined8 inst_9_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_9_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08057a8d)
// WARNING: Removing unreachable block (ram,0x08057a9a)
// WARNING: Removing unreachable block (ram,0x08057ab4)

undefined8 inst_9_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_9_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08057b6a)

undefined8 inst_9_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0xc);
}



longlong inst_9_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08057c54)
// WARNING: Removing unreachable block (ram,0x08057c64)

undefined8 inst_9_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_9_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08057d24)
// WARNING: Removing unreachable block (ram,0x08057cfd)
// WARNING: Removing unreachable block (ram,0x08057d0a)
// WARNING: Removing unreachable block (ram,0x08057d34)

undefined8 inst_9_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_9_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08057df4)
// WARNING: Removing unreachable block (ram,0x08057dcd)
// WARNING: Removing unreachable block (ram,0x08057dda)
// WARNING: Removing unreachable block (ram,0x08057e04)

undefined8 inst_9_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x14);
}



longlong inst_9_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08057e9d)
// WARNING: Removing unreachable block (ram,0x08057ed4)

undefined8 inst_9_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_9_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08057f6d)
// WARNING: Removing unreachable block (ram,0x08057fa4)

undefined8 inst_9_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_9_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08058064)
// WARNING: Removing unreachable block (ram,0x0805803d)
// WARNING: Removing unreachable block (ram,0x0805804a)
// WARNING: Removing unreachable block (ram,0x08058074)

undefined8 inst_9_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x14);
}



longlong inst_9_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805810d)
// WARNING: Removing unreachable block (ram,0x0805811a)
// WARNING: Removing unreachable block (ram,0x08058134)

undefined8 inst_9_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0x10);
}



longlong inst_10_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08058208)

undefined8 inst_10_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_10_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080582b5)

undefined8 inst_10_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_10_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080583b0)
// WARNING: Removing unreachable block (ram,0x080583c0)

undefined8 inst_10_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_10_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08058469)
// WARNING: Removing unreachable block (ram,0x08058483)

undefined8 inst_10_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_10_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805853d)
// WARNING: Removing unreachable block (ram,0x08058530)
// WARNING: Removing unreachable block (ram,0x08058567)

undefined8 inst_10_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_10_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805862b)
// WARNING: Removing unreachable block (ram,0x08058604)
// WARNING: Removing unreachable block (ram,0x08058611)
// WARNING: Removing unreachable block (ram,0x0805863b)

undefined8 inst_10_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_10_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080586ff)

undefined8 inst_10_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_10_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080587ac)
// WARNING: Removing unreachable block (ram,0x080587b9)

undefined8 inst_10_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_10_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805888d)

undefined8 inst_10_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_10_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08058960)
// WARNING: Removing unreachable block (ram,0x0805897a)

undefined8 inst_10_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_11_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08058a4c)
// WARNING: Removing unreachable block (ram,0x08058a25)
// WARNING: Removing unreachable block (ram,0x08058a32)
// WARNING: Removing unreachable block (ram,0x08058a5c)

undefined8 inst_11_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_11_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08058af7)
// WARNING: Removing unreachable block (ram,0x08058b2e)

undefined8 inst_11_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_11_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08058bc9)
// WARNING: Removing unreachable block (ram,0x08058bd6)

undefined8 inst_11_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_11_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08058c9b)
// WARNING: Removing unreachable block (ram,0x08058cd2)

undefined8 inst_11_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_11_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08058d6d)
// WARNING: Removing unreachable block (ram,0x08058d7a)
// WARNING: Removing unreachable block (ram,0x08058d94)

undefined8 inst_11_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_11_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08058e66)
// WARNING: Removing unreachable block (ram,0x08058e76)

undefined8 inst_11_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_11_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08058f1e)
// WARNING: Removing unreachable block (ram,0x08058f48)

undefined8 inst_11_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_11_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08058fe3)
// WARNING: Removing unreachable block (ram,0x08058ff0)

undefined8 inst_11_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_11_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080590c2)
// WARNING: Removing unreachable block (ram,0x080590b5)
// WARNING: Removing unreachable block (ram,0x080590ec)

undefined8 inst_11_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_11_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08059194)
// WARNING: Removing unreachable block (ram,0x080591be)

undefined8 inst_11_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_12_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08059285)
// WARNING: Removing unreachable block (ram,0x0805925e)
// WARNING: Removing unreachable block (ram,0x0805926b)
// WARNING: Removing unreachable block (ram,0x08059295)

undefined8 inst_12_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_12_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08059343)
// WARNING: Removing unreachable block (ram,0x08059336)
// WARNING: Removing unreachable block (ram,0x0805936d)

undefined8 inst_12_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_12_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08059435)
// WARNING: Removing unreachable block (ram,0x0805941b)
// WARNING: Removing unreachable block (ram,0x08059445)

undefined8 inst_12_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_12_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080594f2)
// WARNING: Removing unreachable block (ram,0x0805950c)

undefined8 inst_12_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_12_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080595bd)

undefined8 inst_12_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_12_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080596a2)

undefined8 inst_12_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0xc);
}



longlong inst_12_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805976d)

undefined8 inst_12_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0xc);
}



longlong inst_12_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805986c)
// WARNING: Removing unreachable block (ram,0x08059845)
// WARNING: Removing unreachable block (ram,0x08059852)
// WARNING: Removing unreachable block (ram,0x0805987c)

undefined8 inst_12_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x14);
}



longlong inst_12_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805992a)
// WARNING: Removing unreachable block (ram,0x08059944)

undefined8 inst_12_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_12_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080599f4)
// WARNING: Removing unreachable block (ram,0x08059a01)

undefined8 inst_12_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0x10);
}



longlong inst_13_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08059ad5)
// WARNING: Removing unreachable block (ram,0x08059ac8)
// WARNING: Removing unreachable block (ram,0x08059aff)

undefined8 inst_13_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_13_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08059bc3)
// WARNING: Removing unreachable block (ram,0x08059ba9)
// WARNING: Removing unreachable block (ram,0x08059bd3)

undefined8 inst_13_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_13_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08059c70)
// WARNING: Removing unreachable block (ram,0x08059ca7)

undefined8 inst_13_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x14);
}



longlong inst_13_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08059d6b)

undefined8 inst_13_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_13_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08059e25)

undefined8 inst_13_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0x10);
}



longlong inst_13_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08059f13)
// WARNING: Removing unreachable block (ram,0x08059eec)
// WARNING: Removing unreachable block (ram,0x08059ef9)
// WARNING: Removing unreachable block (ram,0x08059f23)

undefined8 inst_13_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_13_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08059fc0)
// WARNING: Removing unreachable block (ram,0x08059fcd)

undefined8 inst_13_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_13_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805a0bb)
// WARNING: Removing unreachable block (ram,0x0805a0a1)
// WARNING: Removing unreachable block (ram,0x0805a0cb)

undefined8 inst_13_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_13_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805a18f)
// WARNING: Removing unreachable block (ram,0x0805a168)
// WARNING: Removing unreachable block (ram,0x0805a175)
// WARNING: Removing unreachable block (ram,0x0805a19f)

undefined8 inst_13_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x14);
}



longlong inst_13_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805a249)
// WARNING: Removing unreachable block (ram,0x0805a23c)
// WARNING: Removing unreachable block (ram,0x0805a273)

undefined8 inst_13_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_14_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805a315)
// WARNING: Removing unreachable block (ram,0x0805a322)
// WARNING: Removing unreachable block (ram,0x0805a33c)

undefined8 inst_14_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_14_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805a416)
// WARNING: Removing unreachable block (ram,0x0805a3ef)
// WARNING: Removing unreachable block (ram,0x0805a3fc)
// WARNING: Removing unreachable block (ram,0x0805a426)

undefined8 inst_14_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x14);
}



longlong inst_14_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805a4c8)
// WARNING: Removing unreachable block (ram,0x0805a4ff)

undefined8 inst_14_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_14_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805a5ae)
// WARNING: Removing unreachable block (ram,0x0805a5a1)
// WARNING: Removing unreachable block (ram,0x0805a5d8)

undefined8 inst_14_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x14);
}



longlong inst_14_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805a6a0)
// WARNING: Removing unreachable block (ram,0x0805a686)
// WARNING: Removing unreachable block (ram,0x0805a6b0)

undefined8 inst_14_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_14_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805a760)

undefined8 inst_14_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_14_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805a854)
// WARNING: Removing unreachable block (ram,0x0805a864)

undefined8 inst_14_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_14_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805a906)
// WARNING: Removing unreachable block (ram,0x0805a913)

undefined8 inst_14_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0xc);
}



longlong inst_14_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805a9e0)
// WARNING: Removing unreachable block (ram,0x0805a9ed)
// WARNING: Removing unreachable block (ram,0x0805aa07)

undefined8 inst_14_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_14_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805aac7)
// WARNING: Removing unreachable block (ram,0x0805aae1)

undefined8 inst_14_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0xc);
}



longlong inst_15_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805ab99)
// WARNING: Removing unreachable block (ram,0x0805abc3)

undefined8 inst_15_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x14);
}



longlong inst_15_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805ac6b)
// WARNING: Removing unreachable block (ram,0x0805ac95)

undefined8 inst_15_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_15_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805ad3d)
// WARNING: Removing unreachable block (ram,0x0805ad30)
// WARNING: Removing unreachable block (ram,0x0805ad67)

undefined8 inst_15_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x14);
}



longlong inst_15_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805ae29)
// WARNING: Removing unreachable block (ram,0x0805ae39)

undefined8 inst_15_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_15_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805aed4)
// WARNING: Removing unreachable block (ram,0x0805aee1)

undefined8 inst_15_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_15_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805afcd)

undefined8 inst_15_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0x10);
}



longlong inst_15_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805b09f)

undefined8 inst_15_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0x10);
}



longlong inst_15_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805b157)
// WARNING: Removing unreachable block (ram,0x0805b181)

undefined8 inst_15_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_15_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805b229)
// WARNING: Removing unreachable block (ram,0x0805b253)

undefined8 inst_15_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_15_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805b2fb)
// WARNING: Removing unreachable block (ram,0x0805b2ee)
// WARNING: Removing unreachable block (ram,0x0805b325)

undefined8 inst_15_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x14);
}



longlong inst_16_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805b3e9)
// WARNING: Removing unreachable block (ram,0x0805b3c2)
// WARNING: Removing unreachable block (ram,0x0805b3cf)
// WARNING: Removing unreachable block (ram,0x0805b3f9)

undefined8 inst_16_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_16_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805b4a2)

undefined8 inst_16_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_16_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805b569)

undefined8 inst_16_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_16_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805b64a)
// WARNING: Removing unreachable block (ram,0x0805b63d)
// WARNING: Removing unreachable block (ram,0x0805b674)

undefined8 inst_16_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_16_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805b711)
// WARNING: Removing unreachable block (ram,0x0805b71e)
// WARNING: Removing unreachable block (ram,0x0805b738)

undefined8 inst_16_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_16_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805b7e5)
// WARNING: Removing unreachable block (ram,0x0805b81c)

undefined8 inst_16_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_16_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805b8c6)
// WARNING: Removing unreachable block (ram,0x0805b8e0)

undefined8 inst_16_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_16_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805b98d)
// WARNING: Removing unreachable block (ram,0x0805b99a)

undefined8 inst_16_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_16_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805ba88)
// WARNING: Removing unreachable block (ram,0x0805ba6e)
// WARNING: Removing unreachable block (ram,0x0805ba98)

undefined8 inst_16_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_16_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805bb42)
// WARNING: Removing unreachable block (ram,0x0805bb35)
// WARNING: Removing unreachable block (ram,0x0805bb6c)

undefined8 inst_16_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_17_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805bc14)
// WARNING: Removing unreachable block (ram,0x0805bc07)
// WARNING: Removing unreachable block (ram,0x0805bc3e)

undefined8 inst_17_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_17_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805bcd9)

undefined8 inst_17_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_17_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805bdab)
// WARNING: Removing unreachable block (ram,0x0805bde2)

undefined8 inst_17_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_17_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805bea4)
// WARNING: Removing unreachable block (ram,0x0805be7d)
// WARNING: Removing unreachable block (ram,0x0805be8a)
// WARNING: Removing unreachable block (ram,0x0805beb4)

undefined8 inst_17_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_17_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805bf5c)
// WARNING: Removing unreachable block (ram,0x0805bf4f)
// WARNING: Removing unreachable block (ram,0x0805bf86)

undefined8 inst_17_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_17_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805c02e)
// WARNING: Removing unreachable block (ram,0x0805c048)

undefined8 inst_17_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_17_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805c100)

undefined8 inst_17_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_17_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805c1c5)
// WARNING: Removing unreachable block (ram,0x0805c1d2)

undefined8 inst_17_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_17_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805c2be)
// WARNING: Removing unreachable block (ram,0x0805c2a4)
// WARNING: Removing unreachable block (ram,0x0805c2ce)

undefined8 inst_17_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_17_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805c390)
// WARNING: Removing unreachable block (ram,0x0805c376)
// WARNING: Removing unreachable block (ram,0x0805c3a0)

undefined8 inst_17_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_18_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805c43f)
// WARNING: Removing unreachable block (ram,0x0805c476)

undefined8 inst_18_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x14);
}



longlong inst_18_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805c53d)

undefined8 inst_18_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_18_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805c5ee)
// WARNING: Removing unreachable block (ram,0x0805c5fb)
// WARNING: Removing unreachable block (ram,0x0805c615)

undefined8 inst_18_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_18_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805c6d3)
// WARNING: Removing unreachable block (ram,0x0805c6fd)

undefined8 inst_18_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_18_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805c7c5)
// WARNING: Removing unreachable block (ram,0x0805c7ab)
// WARNING: Removing unreachable block (ram,0x0805c7d5)

undefined8 inst_18_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_18_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805c876)
// WARNING: Removing unreachable block (ram,0x0805c883)

undefined8 inst_18_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0x10);
}



longlong inst_18_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805c975)
// WARNING: Removing unreachable block (ram,0x0805c985)

undefined8 inst_18_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x14);
}



longlong inst_18_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805ca4d)

undefined8 inst_18_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_18_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805cb0a)
// WARNING: Removing unreachable block (ram,0x0805cb34)

undefined8 inst_18_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_18_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805cbe2)
// WARNING: Removing unreachable block (ram,0x0805cbd5)
// WARNING: Removing unreachable block (ram,0x0805cc0c)

undefined8 inst_18_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_19_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805cca9)
// WARNING: Removing unreachable block (ram,0x0805ccb6)
// WARNING: Removing unreachable block (ram,0x0805ccd0)

undefined8 inst_19_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_19_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805cd8a)
// WARNING: Removing unreachable block (ram,0x0805cd7d)
// WARNING: Removing unreachable block (ram,0x0805cdb4)

undefined8 inst_19_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_19_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805ce51)
// WARNING: Removing unreachable block (ram,0x0805ce5e)

undefined8 inst_19_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0xc);
}



longlong inst_19_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805cf32)
// WARNING: Removing unreachable block (ram,0x0805cf4c)

undefined8 inst_19_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_19_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805cff9)
// WARNING: Removing unreachable block (ram,0x0805d030)

undefined8 inst_19_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x14);
}



longlong inst_19_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805d0da)

undefined8 inst_19_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0x10);
}



longlong inst_19_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805d1a1)
// WARNING: Removing unreachable block (ram,0x0805d1ae)

undefined8 inst_19_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0xc);
}



longlong inst_19_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805d275)
// WARNING: Removing unreachable block (ram,0x0805d2ac)

undefined8 inst_19_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_19_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805d356)
// WARNING: Removing unreachable block (ram,0x0805d380)

undefined8 inst_19_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_19_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805d42a)
// WARNING: Removing unreachable block (ram,0x0805d444)

undefined8 inst_19_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_20_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805d504)
// WARNING: Removing unreachable block (ram,0x0805d51e)

undefined8 inst_20_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_20_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805d5f8)
// WARNING: Removing unreachable block (ram,0x0805d608)

undefined8 inst_20_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_20_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805d6b8)
// WARNING: Removing unreachable block (ram,0x0805d6e2)

undefined8 inst_20_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_20_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805d792)
// WARNING: Removing unreachable block (ram,0x0805d7ac)

undefined8 inst_20_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_20_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805d86c)
// WARNING: Removing unreachable block (ram,0x0805d85f)
// WARNING: Removing unreachable block (ram,0x0805d896)

undefined8 inst_20_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_20_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805d946)
// WARNING: Removing unreachable block (ram,0x0805d939)
// WARNING: Removing unreachable block (ram,0x0805d970)

undefined8 inst_20_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_20_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805da20)
// WARNING: Removing unreachable block (ram,0x0805da4a)

undefined8 inst_20_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_20_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805daec)
// WARNING: Removing unreachable block (ram,0x0805daf9)

undefined8 inst_20_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0xc);
}



longlong inst_20_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805dbd3)
// WARNING: Removing unreachable block (ram,0x0805dbc6)
// WARNING: Removing unreachable block (ram,0x0805dbfd)

undefined8 inst_20_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x14);
}



longlong inst_20_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805dc9f)
// WARNING: Removing unreachable block (ram,0x0805dcac)

undefined8 inst_20_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0x10);
}



longlong inst_21_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805dd7e)

undefined8 inst_21_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0xc);
}



longlong inst_21_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805de50)
// WARNING: Removing unreachable block (ram,0x0805de6a)

undefined8 inst_21_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_21_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805df3c)

undefined8 inst_21_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_21_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805dfe7)
// WARNING: Removing unreachable block (ram,0x0805dff4)

undefined8 inst_21_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_21_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805e0c6)
// WARNING: Removing unreachable block (ram,0x0805e0b9)
// WARNING: Removing unreachable block (ram,0x0805e0f0)

undefined8 inst_21_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_21_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805e1b2)
// WARNING: Removing unreachable block (ram,0x0805e1c2)

undefined8 inst_21_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_21_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805e284)
// WARNING: Removing unreachable block (ram,0x0805e26a)
// WARNING: Removing unreachable block (ram,0x0805e294)

undefined8 inst_21_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_21_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805e33c)
// WARNING: Removing unreachable block (ram,0x0805e356)

undefined8 inst_21_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_21_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805e428)
// WARNING: Removing unreachable block (ram,0x0805e40e)
// WARNING: Removing unreachable block (ram,0x0805e438)

undefined8 inst_21_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_21_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805e4e0)
// WARNING: Removing unreachable block (ram,0x0805e4fa)

undefined8 inst_21_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0x10);
}



longlong inst_22_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805e5a5)

undefined8 inst_22_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_22_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805e684)
// WARNING: Removing unreachable block (ram,0x0805e677)
// WARNING: Removing unreachable block (ram,0x0805e69e)

undefined8 inst_22_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_22_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805e756)
// WARNING: Removing unreachable block (ram,0x0805e770)

undefined8 inst_22_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_22_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805e841)

undefined8 inst_22_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_22_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805e8f8)
// WARNING: Removing unreachable block (ram,0x0805e912)

undefined8 inst_22_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_22_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805e9bd)
// WARNING: Removing unreachable block (ram,0x0805e9ca)

undefined8 inst_22_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_22_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805ea9c)
// WARNING: Removing unreachable block (ram,0x0805eab6)

undefined8 inst_22_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_22_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805eb88)

undefined8 inst_22_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_22_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805ec40)
// WARNING: Removing unreachable block (ram,0x0805ec5a)

undefined8 inst_22_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_22_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805ed12)

undefined8 inst_22_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_23_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805ede2)
// WARNING: Removing unreachable block (ram,0x0805edfc)

undefined8 inst_23_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_23_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805eea5)
// WARNING: Removing unreachable block (ram,0x0805eeb2)

undefined8 inst_23_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_23_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805ef75)
// WARNING: Removing unreachable block (ram,0x0805ef82)

undefined8 inst_23_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_23_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805f045)
// WARNING: Removing unreachable block (ram,0x0805f052)

undefined8 inst_23_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_23_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805f13c)

undefined8 inst_23_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_23_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805f1e5)

undefined8 inst_23_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_23_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805f2c2)
// WARNING: Removing unreachable block (ram,0x0805f2b5)
// WARNING: Removing unreachable block (ram,0x0805f2dc)

undefined8 inst_23_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_23_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805f392)
// WARNING: Removing unreachable block (ram,0x0805f385)
// WARNING: Removing unreachable block (ram,0x0805f3ac)

undefined8 inst_23_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_23_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805f462)
// WARNING: Removing unreachable block (ram,0x0805f455)
// WARNING: Removing unreachable block (ram,0x0805f47c)

undefined8 inst_23_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_23_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805f532)
// WARNING: Removing unreachable block (ram,0x0805f54c)

undefined8 inst_23_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_24_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805f5fa)

undefined8 inst_24_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_24_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805f6f7)

undefined8 inst_24_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_24_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805f7b2)
// WARNING: Removing unreachable block (ram,0x0805f7cc)

undefined8 inst_24_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_24_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805f87a)
// WARNING: Removing unreachable block (ram,0x0805f887)

undefined8 inst_24_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_24_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805f95c)

undefined8 inst_24_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_24_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805fa4b)

undefined8 inst_24_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_24_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805fafa)
// WARNING: Removing unreachable block (ram,0x0805fb07)

undefined8 inst_24_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_24_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805fbdd)
// WARNING: Removing unreachable block (ram,0x0805fbd0)
// WARNING: Removing unreachable block (ram,0x0805fbf7)

undefined8 inst_24_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_24_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805fca6)
// WARNING: Removing unreachable block (ram,0x0805fcb3)

undefined8 inst_24_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_24_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805fd87)
// WARNING: Removing unreachable block (ram,0x0805fd7a)
// WARNING: Removing unreachable block (ram,0x0805fda1)

undefined8 inst_24_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_25_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805fe59)
// WARNING: Removing unreachable block (ram,0x0805fe73)

undefined8 inst_25_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_25_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805ff1e)
// WARNING: Removing unreachable block (ram,0x0805ff2b)

undefined8 inst_25_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_25_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805fffd)
// WARNING: Removing unreachable block (ram,0x08060017)

undefined8 inst_25_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_25_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080600e9)

undefined8 inst_25_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_25_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08060194)

undefined8 inst_25_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_25_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08060266)

undefined8 inst_25_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_25_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806035f)

undefined8 inst_25_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_25_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08060417)

undefined8 inst_25_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_25_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080604dc)
// WARNING: Removing unreachable block (ram,0x080604e9)

undefined8 inst_25_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_25_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080605bb)

undefined8 inst_25_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_26_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08060686)
// WARNING: Removing unreachable block (ram,0x08060693)

undefined8 inst_26_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_26_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806076b)
// WARNING: Removing unreachable block (ram,0x08060785)

undefined8 inst_26_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_26_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806085d)

undefined8 inst_26_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_26_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806091a)
// WARNING: Removing unreachable block (ram,0x08060934)

undefined8 inst_26_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_26_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080609e4)

undefined8 inst_26_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_26_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08060aba)

undefined8 inst_26_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_26_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08060b9e)
// WARNING: Removing unreachable block (ram,0x08060b91)
// WARNING: Removing unreachable block (ram,0x08060bb8)

undefined8 inst_26_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_26_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08060c69)

undefined8 inst_26_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_26_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08060d4e)
// WARNING: Removing unreachable block (ram,0x08060d68)

undefined8 inst_26_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_26_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08060e26)
// WARNING: Removing unreachable block (ram,0x08060e40)

undefined8 inst_26_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_27_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08060ef6)

undefined8 inst_27_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_27_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08060fc6)
// WARNING: Removing unreachable block (ram,0x08060fb9)
// WARNING: Removing unreachable block (ram,0x08060fe0)

undefined8 inst_27_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_27_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08061096)
// WARNING: Removing unreachable block (ram,0x080610b0)

undefined8 inst_27_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_27_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08061166)
// WARNING: Removing unreachable block (ram,0x08061180)

undefined8 inst_27_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_27_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08061236)
// WARNING: Removing unreachable block (ram,0x08061250)

undefined8 inst_27_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_27_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080612f9)

undefined8 inst_27_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_27_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080613c9)
// WARNING: Removing unreachable block (ram,0x080613d6)

undefined8 inst_27_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_27_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080614a6)

undefined8 inst_27_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_27_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08061569)

undefined8 inst_27_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_27_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08061639)
// WARNING: Removing unreachable block (ram,0x08061646)

undefined8 inst_27_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_28_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08061718)
// WARNING: Removing unreachable block (ram,0x0806170b)
// WARNING: Removing unreachable block (ram,0x08061732)

undefined8 inst_28_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_28_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080617d1)
// WARNING: Removing unreachable block (ram,0x080617de)

undefined8 inst_28_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_28_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080618a5)
// WARNING: Removing unreachable block (ram,0x08061898)
// WARNING: Removing unreachable block (ram,0x080618bf)

undefined8 inst_28_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_28_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806196c)
// WARNING: Removing unreachable block (ram,0x0806195f)
// WARNING: Removing unreachable block (ram,0x08061986)

undefined8 inst_28_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_28_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08061a33)
// WARNING: Removing unreachable block (ram,0x08061a26)
// WARNING: Removing unreachable block (ram,0x08061a4d)

undefined8 inst_28_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_28_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08061aed)
// WARNING: Removing unreachable block (ram,0x08061afa)

undefined8 inst_28_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_28_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08061bc1)
// WARNING: Removing unreachable block (ram,0x08061bb4)
// WARNING: Removing unreachable block (ram,0x08061bdb)

undefined8 inst_28_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_28_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08061c87)
// WARNING: Removing unreachable block (ram,0x08061c7a)
// WARNING: Removing unreachable block (ram,0x08061ca1)

undefined8 inst_28_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_28_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08061d4e)
// WARNING: Removing unreachable block (ram,0x08061d41)
// WARNING: Removing unreachable block (ram,0x08061d68)

undefined8 inst_28_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_28_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08061e15)
// WARNING: Removing unreachable block (ram,0x08061e08)
// WARNING: Removing unreachable block (ram,0x08061e2f)

undefined8 inst_28_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_29_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08061ecd)
// WARNING: Removing unreachable block (ram,0x08061eda)

undefined8 inst_29_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_29_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08061f92)
// WARNING: Removing unreachable block (ram,0x08061f9f)

undefined8 inst_29_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_29_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08062064)
// WARNING: Removing unreachable block (ram,0x08062057)
// WARNING: Removing unreachable block (ram,0x0806207e)

undefined8 inst_29_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_29_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08062129)
// WARNING: Removing unreachable block (ram,0x0806211c)
// WARNING: Removing unreachable block (ram,0x08062143)

undefined8 inst_29_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_29_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080621ee)
// WARNING: Removing unreachable block (ram,0x080621e1)
// WARNING: Removing unreachable block (ram,0x08062208)

undefined8 inst_29_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_29_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080622b3)
// WARNING: Removing unreachable block (ram,0x080622a6)
// WARNING: Removing unreachable block (ram,0x080622cd)

undefined8 inst_29_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_29_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08062378)
// WARNING: Removing unreachable block (ram,0x0806236b)
// WARNING: Removing unreachable block (ram,0x08062392)

undefined8 inst_29_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_29_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08062430)
// WARNING: Removing unreachable block (ram,0x0806243d)

undefined8 inst_29_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_29_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08062502)
// WARNING: Removing unreachable block (ram,0x080624f5)
// WARNING: Removing unreachable block (ram,0x0806251c)

undefined8 inst_29_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_29_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080625c7)
// WARNING: Removing unreachable block (ram,0x080625ba)
// WARNING: Removing unreachable block (ram,0x080625e1)

undefined8 inst_29_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_30_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08062692)
// WARNING: Removing unreachable block (ram,0x08062685)
// WARNING: Removing unreachable block (ram,0x080626ac)

undefined8 inst_30_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_30_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806275d)
// WARNING: Removing unreachable block (ram,0x08062750)
// WARNING: Removing unreachable block (ram,0x08062777)

undefined8 inst_30_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_30_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08062827)
// WARNING: Removing unreachable block (ram,0x0806281a)
// WARNING: Removing unreachable block (ram,0x08062841)

undefined8 inst_30_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_30_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080628f1)
// WARNING: Removing unreachable block (ram,0x080628e4)
// WARNING: Removing unreachable block (ram,0x0806290b)

undefined8 inst_30_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_30_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080629bc)
// WARNING: Removing unreachable block (ram,0x080629af)
// WARNING: Removing unreachable block (ram,0x080629d6)

undefined8 inst_30_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_30_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08062a87)
// WARNING: Removing unreachable block (ram,0x08062a7a)
// WARNING: Removing unreachable block (ram,0x08062aa1)

undefined8 inst_30_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_30_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08062b45)
// WARNING: Removing unreachable block (ram,0x08062b52)

undefined8 inst_30_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_30_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08062c10)
// WARNING: Removing unreachable block (ram,0x08062c1d)

undefined8 inst_30_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_30_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08062cdb)
// WARNING: Removing unreachable block (ram,0x08062ce8)

undefined8 inst_30_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_30_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08062db2)
// WARNING: Removing unreachable block (ram,0x08062da5)
// WARNING: Removing unreachable block (ram,0x08062dcc)

undefined8 inst_30_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_31_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08062e79)
// WARNING: Removing unreachable block (ram,0x08062e6c)
// WARNING: Removing unreachable block (ram,0x08062e93)

undefined8 inst_31_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_31_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08062f33)
// WARNING: Removing unreachable block (ram,0x08062f40)

undefined8 inst_31_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_31_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08063007)
// WARNING: Removing unreachable block (ram,0x08062ffa)
// WARNING: Removing unreachable block (ram,0x08063021)

undefined8 inst_31_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_31_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080630ce)
// WARNING: Removing unreachable block (ram,0x080630c1)
// WARNING: Removing unreachable block (ram,0x080630e8)

undefined8 inst_31_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_31_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08063195)
// WARNING: Removing unreachable block (ram,0x08063188)
// WARNING: Removing unreachable block (ram,0x080631af)

undefined8 inst_31_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_31_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806325c)
// WARNING: Removing unreachable block (ram,0x0806324f)
// WARNING: Removing unreachable block (ram,0x08063276)

undefined8 inst_31_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_31_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08063323)
// WARNING: Removing unreachable block (ram,0x08063316)
// WARNING: Removing unreachable block (ram,0x0806333d)

undefined8 inst_31_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_31_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080633ea)
// WARNING: Removing unreachable block (ram,0x080633dd)
// WARNING: Removing unreachable block (ram,0x08063404)

undefined8 inst_31_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_31_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080634b1)
// WARNING: Removing unreachable block (ram,0x080634a4)
// WARNING: Removing unreachable block (ram,0x080634cb)

undefined8 inst_31_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_31_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08063578)
// WARNING: Removing unreachable block (ram,0x0806356b)
// WARNING: Removing unreachable block (ram,0x08063592)

undefined8 inst_31_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_32_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08063644)
// WARNING: Removing unreachable block (ram,0x08063637)
// WARNING: Removing unreachable block (ram,0x0806365e)

undefined8 inst_32_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_32_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08063711)
// WARNING: Removing unreachable block (ram,0x08063704)
// WARNING: Removing unreachable block (ram,0x0806372b)

undefined8 inst_32_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_32_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080637de)
// WARNING: Removing unreachable block (ram,0x080637d1)
// WARNING: Removing unreachable block (ram,0x080637f8)

undefined8 inst_32_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_32_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080638aa)
// WARNING: Removing unreachable block (ram,0x0806389d)
// WARNING: Removing unreachable block (ram,0x080638c4)

undefined8 inst_32_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_32_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08063977)
// WARNING: Removing unreachable block (ram,0x0806396a)
// WARNING: Removing unreachable block (ram,0x08063991)

undefined8 inst_32_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_32_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08063a44)
// WARNING: Removing unreachable block (ram,0x08063a37)
// WARNING: Removing unreachable block (ram,0x08063a5e)

undefined8 inst_32_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_32_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08063b11)
// WARNING: Removing unreachable block (ram,0x08063b04)
// WARNING: Removing unreachable block (ram,0x08063b2b)

undefined8 inst_32_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_32_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08063bde)
// WARNING: Removing unreachable block (ram,0x08063bd1)
// WARNING: Removing unreachable block (ram,0x08063bf8)

undefined8 inst_32_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_32_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08063c9e)
// WARNING: Removing unreachable block (ram,0x08063cab)

undefined8 inst_32_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_32_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08063d77)
// WARNING: Removing unreachable block (ram,0x08063d6a)
// WARNING: Removing unreachable block (ram,0x08063d91)

undefined8 inst_32_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_33_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08063e3c)
// WARNING: Removing unreachable block (ram,0x08063e2f)
// WARNING: Removing unreachable block (ram,0x08063e56)

undefined8 inst_33_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_33_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08063ef4)
// WARNING: Removing unreachable block (ram,0x08063f01)

undefined8 inst_33_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_33_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08063fc6)
// WARNING: Removing unreachable block (ram,0x08063fb9)
// WARNING: Removing unreachable block (ram,0x08063fe0)

undefined8 inst_33_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_33_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806407e)
// WARNING: Removing unreachable block (ram,0x0806408b)

undefined8 inst_33_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_33_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08064150)
// WARNING: Removing unreachable block (ram,0x08064143)
// WARNING: Removing unreachable block (ram,0x0806416a)

undefined8 inst_33_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_33_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08064215)
// WARNING: Removing unreachable block (ram,0x08064208)
// WARNING: Removing unreachable block (ram,0x0806422f)

undefined8 inst_33_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_33_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080642da)
// WARNING: Removing unreachable block (ram,0x080642cd)
// WARNING: Removing unreachable block (ram,0x080642f4)

undefined8 inst_33_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_33_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806439f)
// WARNING: Removing unreachable block (ram,0x08064392)
// WARNING: Removing unreachable block (ram,0x080643b9)

undefined8 inst_33_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_33_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08064457)
// WARNING: Removing unreachable block (ram,0x08064464)

undefined8 inst_33_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_33_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806451c)
// WARNING: Removing unreachable block (ram,0x08064529)

undefined8 inst_33_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



undefined8 inst_34_values_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0;
  while ((0x281d4df7U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return CONCAT44(in_EDX,iVar1);
}



longlong inst_34_flags_var_0(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0;
  while ((0xac958ed8U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_34_values_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0;
  while ((0x2cd6e381U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return CONCAT44(in_EDX,iVar1);
}



longlong inst_34_flags_var_1(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0;
  while ((0x644912a1U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_34_values_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0;
  while ((0x7ee69511U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return CONCAT44(in_EDX,iVar1);
}



longlong inst_34_flags_var_2(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0;
  while ((0x76432bafU >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_34_values_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0;
  while ((0x1e684836U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return CONCAT44(in_EDX,iVar1 + -1);
}



longlong inst_34_flags_var_3(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0;
  while ((0x907dc7cbU >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_34_values_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0;
  while ((0x3091c520U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return CONCAT44(in_EDX,iVar1 + -5);
}



longlong inst_34_flags_var_4(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0;
  while ((0xdac445c1U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_34_values_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0;
  while ((0xfcc33d40U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return CONCAT44(in_EDX,iVar1 + -6);
}



longlong inst_34_flags_var_5(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0;
  while ((0xfd6bcc82U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_34_values_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0;
  while ((0xc36233d7U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return CONCAT44(in_EDX,iVar1);
}



longlong inst_34_flags_var_6(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0;
  while ((0x76255d69U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_34_values_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0;
  while ((0x9c943cc4U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return CONCAT44(in_EDX,iVar1 + -2);
}



longlong inst_34_flags_var_7(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0;
  while ((0xaaa487f5U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_34_values_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0;
  while ((0xa505645aU >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return CONCAT44(in_EDX,iVar1 + -1);
}



longlong inst_34_flags_var_8(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0;
  while ((0x21482232U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_34_values_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0;
  while ((0xcf02e4bdU >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return CONCAT44(in_EDX,iVar1);
}



longlong inst_34_flags_var_9(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0;
  while ((0xd852f3baU >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_35_values_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0x1f;
  while (0xf9252439U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return CONCAT44(in_EDX,iVar1 + -0x1f);
}



longlong inst_35_flags_var_0(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0x1f;
  while (0x77824975U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_35_values_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0x1f;
  while (0x9c133af1U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return CONCAT44(in_EDX,iVar1 + -0x1f);
}



longlong inst_35_flags_var_1(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0x1f;
  while (0xfe2eaabcU >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_35_values_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0x1f;
  while (0xa11a84aU >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return CONCAT44(in_EDX,iVar1 + -0x1b);
}



longlong inst_35_flags_var_2(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0x1f;
  while (0xbd9d92ddU >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_35_values_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0x1f;
  while (0x8c513377U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return CONCAT44(in_EDX,iVar1 + -0x1f);
}



longlong inst_35_flags_var_3(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0x1f;
  while (0x90b091afU >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_35_values_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0x1f;
  while (0x9aa25433U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return CONCAT44(in_EDX,iVar1 + -0x1f);
}



longlong inst_35_flags_var_4(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0x1f;
  while (0xdcd4cd3U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_35_values_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0x1f;
  while (0xf19f18cdU >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return CONCAT44(in_EDX,iVar1 + -0x1f);
}



longlong inst_35_flags_var_5(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0x1f;
  while (0x63e4ec52U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_35_values_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0x1f;
  while (0xf0dde55eU >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return CONCAT44(in_EDX,iVar1 + -0x1f);
}



longlong inst_35_flags_var_6(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0x1f;
  while (0x3e86e3baU >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_35_values_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0x1f;
  while (0xb80325ffU >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return CONCAT44(in_EDX,iVar1 + -0x1f);
}



longlong inst_35_flags_var_7(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0x1f;
  while (0xcb80de65U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_35_values_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0x1f;
  while (0x341ab7a7U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return CONCAT44(in_EDX,iVar1 + -0x1d);
}



longlong inst_35_flags_var_8(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0x1f;
  while (0xac1d25b1U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_35_values_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0x1f;
  while (0xa8c222cbU >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return CONCAT44(in_EDX,iVar1 + -0x1f);
}



longlong inst_35_flags_var_9(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0x1f;
  while (0x6e1c1e0U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_36_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_36_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_36_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_36_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_36_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_36_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_36_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_36_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_36_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_36_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_36_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_36_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_36_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_36_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_36_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_36_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_36_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_36_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_36_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_36_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_37_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_37_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_37_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_37_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_37_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_37_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_37_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_37_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_37_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_37_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_37_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_37_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_37_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_37_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_37_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_37_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_37_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_37_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_37_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_37_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_38_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08065fad)

longlong inst_38_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_38_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806605e)

longlong inst_38_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_38_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806610f)

longlong inst_38_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_38_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080661c0)

longlong inst_38_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_38_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08066271)

longlong inst_38_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_38_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08066322)

longlong inst_38_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_38_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_38_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_38_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_38_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_38_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08066535)

longlong inst_38_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_38_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080665e6)

longlong inst_38_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_39_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08066695)

longlong inst_39_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_39_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08066744)

longlong inst_39_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_39_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_39_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_39_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080668a2)

longlong inst_39_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_39_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08066951)

longlong inst_39_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_39_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08066a00)

longlong inst_39_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_39_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08066aaf)

longlong inst_39_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_39_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08066b5e)

longlong inst_39_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_39_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_39_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_39_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_39_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_40_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_40_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_40_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_40_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_40_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08066ed5)

longlong inst_40_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_40_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_40_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_40_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806703b)

longlong inst_40_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_40_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080670ee)

longlong inst_40_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_40_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_40_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_40_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_40_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_40_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_40_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_40_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080673ba)

longlong inst_40_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_41_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_41_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_41_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_41_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_41_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_41_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_41_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_41_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_41_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806772f)

longlong inst_41_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_41_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_41_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_41_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08067891)

longlong inst_41_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_41_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_41_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_41_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080679f3)

longlong inst_41_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_41_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_41_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_42_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08067b55)

longlong inst_42_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_42_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_42_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_42_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_42_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_42_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_42_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_42_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_42_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_42_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08067eca)

longlong inst_42_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_42_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08067f7b)

longlong inst_42_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_42_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_42_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_42_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080680dd)

longlong inst_42_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_42_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_42_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_43_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806823d)

longlong inst_43_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_43_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080682ec)

longlong inst_43_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_43_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_43_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_43_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806844a)

longlong inst_43_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_43_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080684f9)

longlong inst_43_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_43_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080685a8)

longlong inst_43_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_43_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08068657)

longlong inst_43_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_43_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_43_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_43_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080687b5)

longlong inst_43_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_43_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_43_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_44_values_var_0(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffffff);
}



longlong inst_44_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_44_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_44_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_44_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_44_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_44_values_var_3(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffe000);
}



// WARNING: Removing unreachable block (ram,0x08068b30)

longlong inst_44_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_44_values_var_4(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffffc0);
}



longlong inst_44_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_44_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08068c96)

longlong inst_44_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_44_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08068d49)

longlong inst_44_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_44_values_var_7(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffffc0);
}



longlong inst_44_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_44_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_44_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_44_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_44_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_45_values_var_0(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffffc0);
}



// WARNING: Removing unreachable block (ram,0x08069013)

longlong inst_45_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_45_values_var_1(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffff800);
}



longlong inst_45_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_45_values_var_2(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffc000);
}



// WARNING: Removing unreachable block (ram,0x08069175)

longlong inst_45_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_45_values_var_3(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffff0);
}



// WARNING: Removing unreachable block (ram,0x08069226)

longlong inst_45_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_45_values_var_4(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xff000000);
}



// WARNING: Removing unreachable block (ram,0x080692d7)

longlong inst_45_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_45_values_var_5(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffc);
}



longlong inst_45_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_45_values_var_6(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffffe0);
}



longlong inst_45_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_45_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080694ea)

longlong inst_45_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_45_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806959b)

longlong inst_45_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_45_values_var_9(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffe000);
}



longlong inst_45_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_46_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_46_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_46_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080697ae)

longlong inst_46_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_46_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806985f)

longlong inst_46_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_46_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_46_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_46_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_46_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_46_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_46_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_46_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08069b23)

longlong inst_46_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_46_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08069bd4)

longlong inst_46_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_46_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08069c85)

longlong inst_46_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_46_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_46_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_47_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08069de5)

longlong inst_47_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_47_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08069e94)

longlong inst_47_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_47_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_47_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_47_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_47_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_47_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_47_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_47_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_47_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_47_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806a1ff)

longlong inst_47_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_47_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806a2ae)

longlong inst_47_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_47_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_47_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_47_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806a40c)

longlong inst_47_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_48_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806a4bf)

longlong inst_48_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_48_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806a572)

longlong inst_48_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_48_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806a625)

longlong inst_48_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_48_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_48_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_48_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806a78b)

longlong inst_48_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_48_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806a83e)

longlong inst_48_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_48_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806a8f1)

longlong inst_48_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_48_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_48_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_48_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_48_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_48_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_48_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_49_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_49_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_49_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806ac6c)

longlong inst_49_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_49_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_49_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_49_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806adce)

longlong inst_49_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_49_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_49_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_49_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_49_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_49_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_49_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_49_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_49_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_49_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806b143)

longlong inst_49_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_49_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_49_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_50_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806b2a5)

longlong inst_50_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_50_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_50_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_50_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_50_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_50_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_50_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_50_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_50_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_50_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806b61a)

longlong inst_50_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_50_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_50_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_50_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806b77c)

longlong inst_50_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_50_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806b82d)

longlong inst_50_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_50_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806b8de)

longlong inst_50_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_51_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_51_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_51_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_51_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_51_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_51_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_51_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806bb9a)

longlong inst_51_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_51_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_51_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_51_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806bcf8)

longlong inst_51_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_51_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_51_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_51_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806be56)

longlong inst_51_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_51_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806bf05)

longlong inst_51_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_51_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_51_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_52_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_52_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_52_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_52_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_52_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_52_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_52_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806c280)

longlong inst_52_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_52_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_52_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_52_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_52_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_52_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_52_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_52_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806c54c)

longlong inst_52_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_52_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806c5ff)

longlong inst_52_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_52_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806c6b2)

longlong inst_52_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_53_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806c763)

longlong inst_53_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_53_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_53_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_53_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_53_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_53_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_53_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_53_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_53_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_53_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_53_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_53_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_53_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_53_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_53_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_53_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806cceb)

longlong inst_53_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_53_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_53_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_54_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_54_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_54_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_54_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_54_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_54_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_54_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_54_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_54_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_54_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_54_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_54_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_54_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_54_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_54_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_54_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_54_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_54_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_54_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_54_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_55_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_55_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_55_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_55_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_55_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_55_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_55_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_55_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_55_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_55_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_55_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_55_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_55_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_55_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_55_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_55_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_55_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_55_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_55_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_55_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_56_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_56_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_56_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_56_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_56_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_56_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_56_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_56_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_56_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_56_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_56_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_56_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_56_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_56_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_56_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_56_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_56_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_56_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_56_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_56_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_57_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_57_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_57_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_57_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_57_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_57_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_57_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_57_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_57_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_57_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_57_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_57_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_57_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_57_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_57_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_57_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_57_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_57_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_57_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_57_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_58_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806e7e7)

longlong inst_58_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_58_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806e892)

longlong inst_58_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_58_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806e93d)

longlong inst_58_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_58_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806e9e8)

longlong inst_58_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_58_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806ea93)

longlong inst_58_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_58_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806eb3e)

longlong inst_58_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_58_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806ebe9)

longlong inst_58_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_58_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806ec94)

longlong inst_58_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_58_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806ed3f)

longlong inst_58_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_58_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806edea)

longlong inst_58_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_59_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806ee95)

longlong inst_59_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_59_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806ef40)

longlong inst_59_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_59_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806efeb)

longlong inst_59_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_59_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f096)

longlong inst_59_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_59_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f141)

longlong inst_59_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_59_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f1ec)

longlong inst_59_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_59_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f297)

longlong inst_59_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_59_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f342)

longlong inst_59_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_59_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f3ed)

longlong inst_59_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_59_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f498)

longlong inst_59_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f4f2)

longlong inst_60_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f53b)

longlong inst_60_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f59b)

longlong inst_60_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f5e4)

longlong inst_60_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f644)

longlong inst_60_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f68d)

longlong inst_60_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f6ed)

longlong inst_60_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f736)

longlong inst_60_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f796)

longlong inst_60_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f7df)

longlong inst_60_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f83f)

longlong inst_60_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f888)

longlong inst_60_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f8e8)

longlong inst_60_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f931)

longlong inst_60_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f991)

longlong inst_60_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f9da)

longlong inst_60_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806fa3a)

longlong inst_60_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806fa83)

longlong inst_60_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806fae3)

longlong inst_60_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806fb2c)

longlong inst_60_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806fb8c)

longlong inst_61_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806fbd4)

longlong inst_61_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806fc33)

longlong inst_61_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806fc7b)

longlong inst_61_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806fcda)

longlong inst_61_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806fd22)

longlong inst_61_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806fd81)

longlong inst_61_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806fdc9)

longlong inst_61_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806fe28)

longlong inst_61_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806fe70)

longlong inst_61_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806fecf)

longlong inst_61_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806ff17)

longlong inst_61_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806ff76)

longlong inst_61_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806ffbe)

longlong inst_61_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807001d)

longlong inst_61_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08070065)

longlong inst_61_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080700c4)

longlong inst_61_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807010c)

longlong inst_61_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807016b)

longlong inst_61_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080701b3)

longlong inst_61_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_62_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_62_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_62_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_62_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_62_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_62_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_62_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_62_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_62_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_62_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_62_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_62_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_62_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_62_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_62_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_62_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_62_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_62_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_62_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_62_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_63_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_63_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_63_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_63_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_63_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_63_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_63_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_63_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_63_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_63_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_63_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_63_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_63_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_63_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_63_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_63_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_63_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_63_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_63_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_63_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_64_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_64_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_64_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_64_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_64_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_64_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_64_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_64_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_64_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_64_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_64_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_64_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_64_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_64_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_64_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_64_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_64_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_64_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_64_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_64_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_65_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_65_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_65_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_65_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_65_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_65_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_65_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_65_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_65_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_65_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_65_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_65_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_65_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_65_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_65_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_65_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_65_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_65_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_65_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_65_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08071c52)

longlong inst_66_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08071c9b)

longlong inst_66_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08071cfb)

longlong inst_66_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08071d44)

longlong inst_66_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08071da4)

longlong inst_66_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08071ded)

longlong inst_66_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08071e4d)

longlong inst_66_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08071e96)

longlong inst_66_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08071ef6)

longlong inst_66_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08071f3f)

longlong inst_66_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08071f9f)

longlong inst_66_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08071fe8)

longlong inst_66_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072048)

longlong inst_66_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072091)

longlong inst_66_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080720f1)

longlong inst_66_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807213a)

longlong inst_66_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807219a)

longlong inst_66_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080721e3)

longlong inst_66_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072243)

longlong inst_66_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807228c)

longlong inst_66_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080722ec)

longlong inst_67_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072334)

longlong inst_67_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072393)

longlong inst_67_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080723db)

longlong inst_67_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807243a)

longlong inst_67_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072482)

longlong inst_67_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080724e1)

longlong inst_67_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072529)

longlong inst_67_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072588)

longlong inst_67_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080725d0)

longlong inst_67_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807262f)

longlong inst_67_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072677)

longlong inst_67_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080726d6)

longlong inst_67_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807271e)

longlong inst_67_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807277d)

longlong inst_67_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080727c5)

longlong inst_67_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072824)

longlong inst_67_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807286c)

longlong inst_67_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080728cb)

longlong inst_67_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072913)

longlong inst_67_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072972)

longlong inst_68_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080729bb)

longlong inst_68_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072a1b)

longlong inst_68_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072a64)

longlong inst_68_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072ac4)

longlong inst_68_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072b0d)

longlong inst_68_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072b6d)

longlong inst_68_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072bb6)

longlong inst_68_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072c16)

longlong inst_68_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072c5f)

longlong inst_68_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072cbf)

longlong inst_68_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072d08)

longlong inst_68_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072d68)

longlong inst_68_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072db1)

longlong inst_68_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072e11)

longlong inst_68_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072e5a)

longlong inst_68_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072eba)

longlong inst_68_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072f03)

longlong inst_68_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072f63)

longlong inst_68_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072fac)

longlong inst_68_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807300c)

longlong inst_69_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08073054)

longlong inst_69_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080730b3)

longlong inst_69_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080730fb)

longlong inst_69_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807315a)

longlong inst_69_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080731a2)

longlong inst_69_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08073201)

longlong inst_69_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08073249)

longlong inst_69_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080732a8)

longlong inst_69_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080732f0)

longlong inst_69_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807334f)

longlong inst_69_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08073397)

longlong inst_69_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080733f6)

longlong inst_69_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807343e)

longlong inst_69_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807349d)

longlong inst_69_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080734e5)

longlong inst_69_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08073544)

longlong inst_69_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807358c)

longlong inst_69_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080735eb)

longlong inst_69_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08073633)

longlong inst_69_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_70_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_70_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_70_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_70_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_70_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_70_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_70_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_70_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_70_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_70_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_70_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_70_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_70_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_70_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_70_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_70_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_70_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_70_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_70_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_70_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_71_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_71_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_71_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_71_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_71_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_71_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_71_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_71_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_71_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_71_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_71_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_71_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_71_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_71_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_71_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_71_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_71_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_71_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_71_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_71_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_72_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_72_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_72_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_72_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_72_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_72_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_72_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_72_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_72_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_72_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_72_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_72_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_72_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_72_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_72_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_72_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_72_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_72_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_72_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_72_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_73_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_73_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_73_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_73_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_73_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_73_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_73_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_73_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_73_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_73_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_73_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_73_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_73_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_73_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_73_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_73_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_73_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_73_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_73_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_73_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080750d2)

longlong inst_74_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807511b)

longlong inst_74_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807517b)

longlong inst_74_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080751c4)

longlong inst_74_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08075224)

longlong inst_74_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807526d)

longlong inst_74_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080752cd)

longlong inst_74_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08075316)

longlong inst_74_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08075376)

longlong inst_74_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080753bf)

longlong inst_74_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807541f)

longlong inst_74_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08075468)

longlong inst_74_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080754c8)

longlong inst_74_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08075511)

longlong inst_74_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08075571)

longlong inst_74_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080755ba)

longlong inst_74_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807561a)

longlong inst_74_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08075663)

longlong inst_74_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080756c3)

longlong inst_74_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807570c)

longlong inst_74_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807576c)

longlong inst_75_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080757b4)

longlong inst_75_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08075813)

longlong inst_75_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807585b)

longlong inst_75_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080758ba)

longlong inst_75_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08075902)

longlong inst_75_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08075961)

longlong inst_75_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080759a9)

longlong inst_75_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08075a08)

longlong inst_75_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08075a50)

longlong inst_75_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08075aaf)

longlong inst_75_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08075af7)

longlong inst_75_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08075b56)

longlong inst_75_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08075b9e)

longlong inst_75_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08075bfd)

longlong inst_75_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08075c45)

longlong inst_75_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08075ca4)

longlong inst_75_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08075cec)

longlong inst_75_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08075d4b)

longlong inst_75_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08075d93)

longlong inst_75_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_76_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_76_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08075e9b)

longlong inst_76_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_76_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08075f44)

longlong inst_76_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_76_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_76_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08076036)

longlong inst_76_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_76_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_76_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807613f)

longlong inst_76_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_76_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_76_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_76_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08076291)

longlong inst_76_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080762da)

longlong inst_76_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_76_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_76_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_76_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807642c)

longlong inst_76_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807648c)

longlong inst_77_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_77_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08076533)

longlong inst_77_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807657b)

longlong inst_77_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080765da)

longlong inst_77_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08076622)

longlong inst_77_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_77_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080766c9)

longlong inst_77_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_77_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_77_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080767cf)

longlong inst_77_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08076817)

longlong inst_77_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_77_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_77_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_77_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_77_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080769c4)

longlong inst_77_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_77_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_77_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_77_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_78_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08076b5b)

longlong inst_78_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_78_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08076c04)

longlong inst_78_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08076c64)

longlong inst_78_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08076cad)

longlong inst_78_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_78_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08076d56)

longlong inst_78_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_78_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08076dff)

longlong inst_78_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08076e5f)

longlong inst_78_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08076ea8)

longlong inst_78_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_78_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08076f51)

longlong inst_78_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_78_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_78_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_78_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_78_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_78_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807714c)

longlong inst_78_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_79_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_79_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_79_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807729b)

longlong inst_79_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080772fa)

longlong inst_79_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_79_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080773a1)

longlong inst_79_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_79_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08077448)

longlong inst_79_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08077490)

longlong inst_79_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080774ef)

longlong inst_79_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08077537)

longlong inst_79_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08077596)

longlong inst_79_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080775de)

longlong inst_79_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807763d)

longlong inst_79_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08077685)

longlong inst_79_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080776e4)

longlong inst_79_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807772c)

longlong inst_79_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807778b)

longlong inst_79_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_79_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_80_values_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x79f49025;
  if (in_PF) {
    iVar1 = 0x79f4f654;
  }
  return CONCAT44(in_EDX,iVar1 + -0x79f4f654);
}



longlong inst_80_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_80_values_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x1ff45cc5;
  if (in_PF) {
    iVar1 = -0x1ff4a954;
  }
  return CONCAT44(in_EDX,iVar1 + 0x1ff45cc5);
}



longlong inst_80_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_80_values_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0xde0358e;
  if (in_PF) {
    iVar1 = 0xde04260;
  }
  return CONCAT44(in_EDX,iVar1 + -0xde04260);
}



longlong inst_80_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_80_values_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x71c0f141;
  if (in_PF) {
    iVar1 = 0x71c0598c;
  }
  return CONCAT44(in_EDX,iVar1 + -0x71c0598c);
}



longlong inst_80_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_80_values_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  bool in_PF;
  
  iVar1 = 0x2d08827d;
  if (in_PF) {
    iVar1 = 0x2d08aa64;
  }
  return CONCAT44(in_EDX,iVar1 + -0x2d08aa64);
}



longlong inst_80_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_80_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_80_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_80_values_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x62d7f4bc;
  if (in_PF) {
    iVar1 = 0x62d75592;
  }
  return CONCAT44(in_EDX,iVar1 + -0x62d7f4bc);
}



longlong inst_80_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_80_values_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  bool in_PF;
  
  iVar1 = -0xc9a494;
  if (in_PF) {
    iVar1 = -0xc952d6;
  }
  return CONCAT44(in_EDX,iVar1 + 0xc952d6);
}



longlong inst_80_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_80_values_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x7c73e1d;
  if (in_PF) {
    iVar1 = -0x7c7f3a3;
  }
  return CONCAT44(in_EDX,iVar1 + 0x7c7f3a3);
}



longlong inst_80_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_80_values_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  bool in_PF;
  
  iVar1 = 0x7a39371e;
  if (in_PF) {
    iVar1 = 0x7a39d3bf;
  }
  return CONCAT44(in_EDX,iVar1 + -0x7a39d3bf);
}



longlong inst_80_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_81_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_81_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_81_values_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x2699ec09;
  if (in_PF) {
    iVar1 = 0xf6839f5;
  }
  return CONCAT44(in_EDX,iVar1 + -0x2699ec09);
}



longlong inst_81_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_81_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_81_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_81_values_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x500497a1;
  if (in_PF) {
    iVar1 = -0x12d09f3b;
  }
  return CONCAT44(in_EDX,iVar1 + 0x500497a1);
}



longlong inst_81_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_81_values_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x12152abb;
  if (in_PF) {
    iVar1 = 0x594a78eb;
  }
  return CONCAT44(in_EDX,iVar1 + -0x594a78eb);
}



longlong inst_81_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_81_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_81_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_81_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_81_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_81_values_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x3f1c2f3;
  if (in_PF) {
    iVar1 = -0x6e687dc2;
  }
  return CONCAT44(in_EDX,iVar1 + -0x3f1c2f3);
}



longlong inst_81_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_81_values_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  bool in_PF;
  
  iVar1 = 0x4676730b;
  if (in_PF) {
    iVar1 = -0x211a9c8d;
  }
  return CONCAT44(in_EDX,iVar1 + -0x4676730b);
}



longlong inst_81_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_81_values_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x5ae3b7c6;
  if (in_PF) {
    iVar1 = -0x6eaa5cd9;
  }
  return CONCAT44(in_EDX,iVar1 + 0x6eaa5cd9);
}



longlong inst_81_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_82_values_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  bool in_PF;
  
  iVar1 = -0x689f2b8c;
  if (!in_PF) {
    iVar1 = -0x689fa8f0;
  }
  return CONCAT44(in_EDX,iVar1 + 0x689f2b8c);
}



longlong inst_82_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_82_values_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x19678b13;
  if (!in_PF) {
    iVar1 = -0x19674faa;
  }
  return CONCAT44(in_EDX,iVar1 + 0x19674faa);
}



longlong inst_82_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_82_values_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x3ec9b08e;
  if (!in_PF) {
    iVar1 = 0x3ec9cae9;
  }
  return CONCAT44(in_EDX,iVar1 + -0x3ec9b08e);
}



longlong inst_82_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_82_values_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x7cc54a7c;
  if (!in_PF) {
    iVar1 = 0x7cc57767;
  }
  return CONCAT44(in_EDX,iVar1 + -0x7cc57767);
}



longlong inst_82_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_82_values_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x6b21ad2c;
  if (!in_PF) {
    iVar1 = -0x6b21baf1;
  }
  return CONCAT44(in_EDX,iVar1 + 0x6b21ad2c);
}



longlong inst_82_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_82_values_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x17cb12d2;
  if (!in_PF) {
    iVar1 = -0x17cb68ef;
  }
  return CONCAT44(in_EDX,iVar1 + 0x17cb12d2);
}



longlong inst_82_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_82_values_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x53facb39;
  if (!in_PF) {
    iVar1 = 0x53fa18da;
  }
  return CONCAT44(in_EDX,iVar1 + -0x53facb39);
}



longlong inst_82_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_82_values_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x7c907a00;
  if (!in_PF) {
    iVar1 = 0x7c90f68a;
  }
  return CONCAT44(in_EDX,iVar1 + -0x7c907a00);
}



longlong inst_82_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_82_values_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x6c8c9e12;
  if (!in_PF) {
    iVar1 = 0x6c8ca5e6;
  }
  return CONCAT44(in_EDX,iVar1 + -0x6c8c9e12);
}



longlong inst_82_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_82_values_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x37f380d;
  if (!in_PF) {
    iVar1 = 0x37fabf9;
  }
  return CONCAT44(in_EDX,iVar1 + -0x37f380d);
}



longlong inst_82_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_83_values_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x65cc972;
  if (!in_PF) {
    iVar1 = 0x61b6c150;
  }
  return CONCAT44(in_EDX,iVar1 + 0x65cc972);
}



longlong inst_83_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_83_values_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  bool in_PF;
  
  iVar1 = -0x301771a7;
  if (!in_PF) {
    iVar1 = 0x8b43844;
  }
  return CONCAT44(in_EDX,iVar1 + -0x8b43844);
}



longlong inst_83_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_83_values_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x48aeca3;
  if (!in_PF) {
    iVar1 = -0x18cc8438;
  }
  return CONCAT44(in_EDX,iVar1 + -0x48aeca3);
}



longlong inst_83_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_83_values_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x2a43739;
  if (!in_PF) {
    iVar1 = -0x7f4a585;
  }
  return CONCAT44(in_EDX,iVar1 + 0x7f4a585);
}



longlong inst_83_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_83_values_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  bool in_PF;
  
  iVar1 = 0x1ccdc119;
  if (!in_PF) {
    iVar1 = -0x20eed1e1;
  }
  return CONCAT44(in_EDX,iVar1 + 0x20eed1e1);
}



longlong inst_83_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_83_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_83_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_83_values_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x438ce9ad;
  if (!in_PF) {
    iVar1 = -0x3a0a11c1;
  }
  return CONCAT44(in_EDX,iVar1 + 0x438ce9ad);
}



longlong inst_83_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_83_values_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x6d67291b;
  if (!in_PF) {
    iVar1 = 0x14714b87;
  }
  return CONCAT44(in_EDX,iVar1 + -0x6d67291b);
}



longlong inst_83_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_83_values_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x4ff13717;
  if (!in_PF) {
    iVar1 = 0x1afc6672;
  }
  return CONCAT44(in_EDX,iVar1 + 0x4ff13717);
}



longlong inst_83_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_83_values_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x35a0d61e;
  if (!in_PF) {
    iVar1 = -0x1c7ffe35;
  }
  return CONCAT44(in_EDX,iVar1 + -0x35a0d61e);
}



longlong inst_83_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08079272)

longlong inst_84_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_84_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_84_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_84_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_84_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807940d)

longlong inst_84_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_84_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_84_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_84_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_84_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_84_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_84_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_84_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_84_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08079711)

longlong inst_84_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_84_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080797ba)

longlong inst_84_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_84_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08079863)

longlong inst_84_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_84_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807990c)

longlong inst_85_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_85_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_85_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_85_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08079a5a)

longlong inst_85_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08079aa2)

longlong inst_85_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08079b01)

longlong inst_85_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08079b49)

longlong inst_85_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_85_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_85_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08079c4f)

longlong inst_85_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_85_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08079cf6)

longlong inst_85_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_85_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_85_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_85_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08079e44)

longlong inst_85_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08079e8c)

longlong inst_85_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_85_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08079f33)

longlong inst_85_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08079f92)

longlong inst_86_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08079fdb)

longlong inst_86_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807a03b)

longlong inst_86_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807a084)

longlong inst_86_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_86_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807a12d)

longlong inst_86_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_86_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_86_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807a236)

longlong inst_86_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_86_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_86_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_86_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807a388)

longlong inst_86_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_86_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_86_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807a47a)

longlong inst_86_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_86_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807a523)

longlong inst_86_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807a583)

longlong inst_86_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_86_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_87_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_87_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_87_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807a71b)

longlong inst_87_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_87_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_87_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_87_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807a869)

longlong inst_87_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807a8c8)

longlong inst_87_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807a910)

longlong inst_87_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807a96f)

longlong inst_87_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807a9b7)

longlong inst_87_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807aa16)

longlong inst_87_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_87_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807aabd)

longlong inst_87_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807ab05)

longlong inst_87_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_87_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_87_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_87_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_87_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_88_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807acfb)

longlong inst_88_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_88_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_88_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_88_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_88_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_88_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_88_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_88_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_88_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_88_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807b048)

longlong inst_88_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807b0a8)

longlong inst_88_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_88_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_88_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807b19a)

longlong inst_88_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_88_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_88_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_88_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807b2ec)

longlong inst_88_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807b34c)

longlong inst_89_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_89_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_89_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_89_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_89_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_89_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807b541)

longlong inst_89_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807b589)

longlong inst_89_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_89_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807b630)

longlong inst_89_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_89_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_89_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_89_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807b77e)

longlong inst_89_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_89_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_89_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_89_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807b8cc)

longlong inst_89_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_89_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807b973)

longlong inst_89_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807b9d2)

longlong inst_90_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807ba1b)

longlong inst_90_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_90_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_90_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_90_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_90_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807bbcd)

longlong inst_90_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807bc16)

longlong inst_90_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807bc76)

longlong inst_90_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_90_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_90_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_90_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_90_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_90_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807be71)

longlong inst_90_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_90_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_90_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807bf63)

longlong inst_90_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807bfc3)

longlong inst_90_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807c00c)

longlong inst_90_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807c06c)

longlong inst_91_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_91_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_91_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_91_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807c1ba)

longlong inst_91_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_91_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807c261)

longlong inst_91_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807c2a9)

longlong inst_91_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_91_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807c350)

longlong inst_91_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807c3af)

longlong inst_91_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807c3f7)

longlong inst_91_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807c456)

longlong inst_91_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807c49e)

longlong inst_91_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_91_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_91_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_91_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807c5ec)

longlong inst_91_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_91_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_91_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_92_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807c754)
// WARNING: Removing unreachable block (ram,0x0807c747)
// WARNING: Removing unreachable block (ram,0x0807c76e)

undefined8 inst_92_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_92_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807c826)
// WARNING: Removing unreachable block (ram,0x0807c819)
// WARNING: Removing unreachable block (ram,0x0807c840)

undefined8 inst_92_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_92_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807c8f8)
// WARNING: Removing unreachable block (ram,0x0807c8eb)
// WARNING: Removing unreachable block (ram,0x0807c912)

undefined8 inst_92_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_92_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807c9ca)

undefined8 inst_92_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_92_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_92_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_92_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807cb6d)

undefined8 inst_92_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_92_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807cc3f)

undefined8 inst_92_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_92_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807cd04)
// WARNING: Removing unreachable block (ram,0x0807cd2b)

undefined8 inst_92_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_92_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807cdd6)
// WARNING: Removing unreachable block (ram,0x0807cdfd)

undefined8 inst_92_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_92_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807ceb5)

undefined8 inst_92_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_93_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807cf85)
// WARNING: Removing unreachable block (ram,0x0807cf9f)

undefined8 inst_93_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_93_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807d055)
// WARNING: Removing unreachable block (ram,0x0807d048)
// WARNING: Removing unreachable block (ram,0x0807d06f)

undefined8 inst_93_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_93_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807d118)
// WARNING: Removing unreachable block (ram,0x0807d13f)

undefined8 inst_93_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_93_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807d1f5)

undefined8 inst_93_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_93_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807d2c5)

undefined8 inst_93_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_93_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807d395)
// WARNING: Removing unreachable block (ram,0x0807d388)
// WARNING: Removing unreachable block (ram,0x0807d3af)

undefined8 inst_93_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_93_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807d465)
// WARNING: Removing unreachable block (ram,0x0807d458)
// WARNING: Removing unreachable block (ram,0x0807d47f)

undefined8 inst_93_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_93_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807d535)

undefined8 inst_93_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_93_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807d605)
// WARNING: Removing unreachable block (ram,0x0807d61f)

undefined8 inst_93_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_93_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807d6d5)
// WARNING: Removing unreachable block (ram,0x0807d6c8)
// WARNING: Removing unreachable block (ram,0x0807d6ef)

undefined8 inst_93_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_94_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807d79e)
// WARNING: Removing unreachable block (ram,0x0807d7ab)

undefined8 inst_94_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_94_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807d881)
// WARNING: Removing unreachable block (ram,0x0807d874)
// WARNING: Removing unreachable block (ram,0x0807d89b)

undefined8 inst_94_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_94_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807d94a)
// WARNING: Removing unreachable block (ram,0x0807d971)

undefined8 inst_94_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_94_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807da20)
// WARNING: Removing unreachable block (ram,0x0807da2d)

undefined8 inst_94_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_94_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_94_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_94_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807dbd8)
// WARNING: Removing unreachable block (ram,0x0807dbf2)

undefined8 inst_94_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_94_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807dca1)
// WARNING: Removing unreachable block (ram,0x0807dcae)

undefined8 inst_94_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_94_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807dd84)
// WARNING: Removing unreachable block (ram,0x0807dd77)
// WARNING: Removing unreachable block (ram,0x0807dd9e)

undefined8 inst_94_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_94_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807de5a)
// WARNING: Removing unreachable block (ram,0x0807de4d)
// WARNING: Removing unreachable block (ram,0x0807de74)

undefined8 inst_94_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_94_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807df30)

undefined8 inst_94_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_95_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807e002)
// WARNING: Removing unreachable block (ram,0x0807dff5)
// WARNING: Removing unreachable block (ram,0x0807e01c)

undefined8 inst_95_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_95_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807e0d4)

undefined8 inst_95_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_95_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807e1a6)
// WARNING: Removing unreachable block (ram,0x0807e199)
// WARNING: Removing unreachable block (ram,0x0807e1c0)

undefined8 inst_95_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_95_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807e278)
// WARNING: Removing unreachable block (ram,0x0807e26b)
// WARNING: Removing unreachable block (ram,0x0807e292)

undefined8 inst_95_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_95_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807e34a)

undefined8 inst_95_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_95_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807e41c)
// WARNING: Removing unreachable block (ram,0x0807e436)

undefined8 inst_95_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_95_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807e4ee)

undefined8 inst_95_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_95_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807e5c0)
// WARNING: Removing unreachable block (ram,0x0807e5da)

undefined8 inst_95_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_95_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807e692)
// WARNING: Removing unreachable block (ram,0x0807e685)
// WARNING: Removing unreachable block (ram,0x0807e6ac)

undefined8 inst_95_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_95_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807e764)
// WARNING: Removing unreachable block (ram,0x0807e757)
// WARNING: Removing unreachable block (ram,0x0807e77e)

undefined8 inst_95_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_96_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807e83c)
// WARNING: Removing unreachable block (ram,0x0807e856)

undefined8 inst_96_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_96_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807e914)

undefined8 inst_96_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_96_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807e9ec)
// WARNING: Removing unreachable block (ram,0x0807ea06)

undefined8 inst_96_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_96_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807eac3)

undefined8 inst_96_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_96_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807eb9b)
// WARNING: Removing unreachable block (ram,0x0807ebb5)

undefined8 inst_96_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_96_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807ec72)

undefined8 inst_96_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_96_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_96_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_96_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807ee14)
// WARNING: Removing unreachable block (ram,0x0807ee3b)

undefined8 inst_96_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_96_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807eef9)

undefined8 inst_96_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_96_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807efd1)
// WARNING: Removing unreachable block (ram,0x0807efeb)

undefined8 inst_96_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_97_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807f094)
// WARNING: Removing unreachable block (ram,0x0807f0bb)

undefined8 inst_97_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_97_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807f171)

undefined8 inst_97_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_97_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807f241)
// WARNING: Removing unreachable block (ram,0x0807f25b)

undefined8 inst_97_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_97_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807f304)
// WARNING: Removing unreachable block (ram,0x0807f32b)

undefined8 inst_97_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_97_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807f3d4)
// WARNING: Removing unreachable block (ram,0x0807f3fb)

undefined8 inst_97_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_97_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807f4b1)
// WARNING: Removing unreachable block (ram,0x0807f4a4)
// WARNING: Removing unreachable block (ram,0x0807f4cb)

undefined8 inst_97_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_97_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807f581)
// WARNING: Removing unreachable block (ram,0x0807f59b)

undefined8 inst_97_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_97_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807f651)
// WARNING: Removing unreachable block (ram,0x0807f644)
// WARNING: Removing unreachable block (ram,0x0807f66b)

undefined8 inst_97_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_97_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807f714)
// WARNING: Removing unreachable block (ram,0x0807f721)

undefined8 inst_97_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_97_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_97_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



undefined8 inst_98_values_var_0(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x89);
}



undefined8 inst_98_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



undefined8 inst_98_values_var_1(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffff9a);
}



// WARNING: Removing unreachable block (ram,0x0807f995)

undefined8 inst_98_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



undefined8 inst_98_values_var_2(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x7a);
}



// WARNING: Removing unreachable block (ram,0x0807fa67)

undefined8 inst_98_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



undefined8 inst_98_values_var_3(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x49);
}



// WARNING: Removing unreachable block (ram,0x0807fb39)
// WARNING: Removing unreachable block (ram,0x0807fb53)

undefined8 inst_98_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



undefined8 inst_98_values_var_4(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffff68);
}



// WARNING: Removing unreachable block (ram,0x0807fc0b)
// WARNING: Removing unreachable block (ram,0x0807fbfe)
// WARNING: Removing unreachable block (ram,0x0807fc25)

undefined8 inst_98_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



undefined8 inst_98_values_var_5(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffff15);
}



// WARNING: Removing unreachable block (ram,0x0807fcdd)
// WARNING: Removing unreachable block (ram,0x0807fcd0)
// WARNING: Removing unreachable block (ram,0x0807fcf7)

undefined8 inst_98_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



undefined8 inst_98_values_var_6(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffffe0);
}



// WARNING: Removing unreachable block (ram,0x0807fdaf)
// WARNING: Removing unreachable block (ram,0x0807fda2)
// WARNING: Removing unreachable block (ram,0x0807fdc9)

undefined8 inst_98_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



undefined8 inst_98_values_var_7(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffff66);
}



// WARNING: Removing unreachable block (ram,0x0807fe74)
// WARNING: Removing unreachable block (ram,0x0807fe81)

undefined8 inst_98_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



undefined8 inst_98_values_var_8(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffff7b);
}



// WARNING: Removing unreachable block (ram,0x0807ff53)
// WARNING: Removing unreachable block (ram,0x0807ff6d)

undefined8 inst_98_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



undefined8 inst_98_values_var_9(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xe);
}



// WARNING: Removing unreachable block (ram,0x08080025)
// WARNING: Removing unreachable block (ram,0x0808003f)

undefined8 inst_98_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



undefined8 inst_99_values_var_0(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffff3fbc);
}



// WARNING: Removing unreachable block (ram,0x080800f9)

undefined8 inst_99_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



undefined8 inst_99_values_var_1(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x5bb5);
}



// WARNING: Removing unreachable block (ram,0x080801cd)
// WARNING: Removing unreachable block (ram,0x080801c0)
// WARNING: Removing unreachable block (ram,0x080801e7)

undefined8 inst_99_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



undefined8 inst_99_values_var_2(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x2a92);
}



// WARNING: Removing unreachable block (ram,0x080802a1)

undefined8 inst_99_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



undefined8 inst_99_values_var_3(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffff4686);
}



// WARNING: Removing unreachable block (ram,0x08080375)
// WARNING: Removing unreachable block (ram,0x0808038f)

undefined8 inst_99_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



undefined8 inst_99_values_var_4(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffe3ff);
}



// WARNING: Removing unreachable block (ram,0x08080449)
// WARNING: Removing unreachable block (ram,0x0808043c)
// WARNING: Removing unreachable block (ram,0x08080463)

undefined8 inst_99_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



undefined8 inst_99_values_var_5(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffc264);
}



undefined8 inst_99_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



undefined8 inst_99_values_var_6(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffa0bf);
}



// WARNING: Removing unreachable block (ram,0x080805f1)
// WARNING: Removing unreachable block (ram,0x080805e4)
// WARNING: Removing unreachable block (ram,0x0808060b)

undefined8 inst_99_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



undefined8 inst_99_values_var_7(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffca20);
}



// WARNING: Removing unreachable block (ram,0x080806c5)

undefined8 inst_99_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



undefined8 inst_99_values_var_8(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffff1b7d);
}



// WARNING: Removing unreachable block (ram,0x08080799)

undefined8 inst_99_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



undefined8 inst_99_values_var_9(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffc208);
}



undefined8 inst_99_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



undefined8 inst_100_values_var_0(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xdf32b4f4);
}



// WARNING: Removing unreachable block (ram,0x0808093f)
// WARNING: Removing unreachable block (ram,0x08080959)

undefined8 inst_100_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



undefined8 inst_100_values_var_1(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x4cb13b1b);
}



// WARNING: Removing unreachable block (ram,0x08080a11)
// WARNING: Removing unreachable block (ram,0x08080a2b)

undefined8 inst_100_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



undefined8 inst_100_values_var_2(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x345b421a);
}



// WARNING: Removing unreachable block (ram,0x08080ad6)
// WARNING: Removing unreachable block (ram,0x08080ae3)

undefined8 inst_100_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



undefined8 inst_100_values_var_3(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xb44ef7b1);
}



// WARNING: Removing unreachable block (ram,0x08080ba8)
// WARNING: Removing unreachable block (ram,0x08080bcf)

undefined8 inst_100_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



undefined8 inst_100_values_var_4(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x81c46f47);
}



// WARNING: Removing unreachable block (ram,0x08080c87)

undefined8 inst_100_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



undefined8 inst_100_values_var_5(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x3b16bff9);
}



// WARNING: Removing unreachable block (ram,0x08080d59)
// WARNING: Removing unreachable block (ram,0x08080d4c)
// WARNING: Removing unreachable block (ram,0x08080d73)

undefined8 inst_100_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



undefined8 inst_100_values_var_6(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x473d88e5);
}



// WARNING: Removing unreachable block (ram,0x08080e2b)

undefined8 inst_100_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



undefined8 inst_100_values_var_7(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x64256d06);
}



// WARNING: Removing unreachable block (ram,0x08080efd)
// WARNING: Removing unreachable block (ram,0x08080ef0)
// WARNING: Removing unreachable block (ram,0x08080f17)

undefined8 inst_100_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



undefined8 inst_100_values_var_8(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x41043fce);
}



// WARNING: Removing unreachable block (ram,0x08080fcf)
// WARNING: Removing unreachable block (ram,0x08080fe9)

undefined8 inst_100_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



undefined8 inst_100_values_var_9(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xa5605250);
}



// WARNING: Removing unreachable block (ram,0x080810a1)
// WARNING: Removing unreachable block (ram,0x080810bb)

undefined8 inst_100_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



undefined8 inst_101_values_var_0(void)

{
  byte bVar1;
  undefined4 in_EDX;
  byte in_AF;
  
  bVar1 = (in_AF | 1) * '\x06' + 0x5a;
  return CONCAT44(in_EDX,CONCAT31(0xfb64b1,bVar1 + (0x90 < (bVar1 & 0xf0) |
                                                   (in_AF | 1) * (0xf9 < bVar1) | 1) * '`') +
                         0x49b4e40);
}



undefined8 inst_101_flags_var_0(void)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_EDX;
  int iVar4;
  bool in_PF;
  byte in_AF;
  
  bVar1 = (bool)(in_AF | 1);
  bVar2 = bVar1 * '\x06' - 0x24;
  iVar4 = 0;
  if (in_PF) {
    iVar4 = 4;
  }
  iVar3 = 0;
  if (bVar1) {
    iVar3 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)(byte)(0x90 < (bVar2 & 0xf0) | bVar1 * (0xf9 < bVar2) | 1U) + iVar4 +
                         iVar3 + -0xd);
}



undefined8 inst_101_values_var_1(void)

{
  byte bVar1;
  undefined4 in_EDX;
  char in_AF;
  
  bVar1 = in_AF * '\x06' - 0x2d;
  return CONCAT44(in_EDX,CONCAT31(0x67e1b1,bVar1 + (0x90 < (bVar1 & 0xf0) |
                                                   in_AF * (0xf9 < bVar1) | 1U) * '`') + -0x67e1b139
                 );
}



undefined8 inst_101_flags_var_1(void)

{
  byte bVar1;
  int iVar2;
  undefined4 in_EDX;
  int iVar3;
  bool in_PF;
  bool in_AF;
  
  bVar1 = in_AF * '\x06' + 0x67;
  iVar3 = 0;
  if (in_PF) {
    iVar3 = 4;
  }
  iVar2 = 0;
  if (in_AF) {
    iVar2 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)(byte)(0x90 < (bVar1 & 0xf0) | in_AF * (0xf9 < bVar1) | 1U) + iVar3 +
                         iVar2 + -0x11);
}



undefined8 inst_101_values_var_2(void)

{
  byte bVar1;
  undefined4 in_EDX;
  char in_AF;
  
  bVar1 = in_AF * '\x06' + 0xb1;
  return CONCAT44(in_EDX,CONCAT31(0x6901b5,bVar1 + (0x90 < (bVar1 & 0xf0) |
                                                   in_AF * (0xf9 < bVar1) | 1U) * '`') + -0x6901b517
                 );
}



// WARNING: Removing unreachable block (ram,0x0808130d)

undefined8 inst_101_flags_var_2(void)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_EDX;
  int iVar4;
  bool in_PF;
  byte in_AF;
  
  bVar1 = (bool)(in_AF | 1);
  bVar2 = bVar1 * '\x06' + 0x5a;
  iVar4 = 0;
  if (in_PF) {
    iVar4 = 4;
  }
  iVar3 = 0;
  if (bVar1) {
    iVar3 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)(byte)(0x90 < (bVar2 & 0xf0) | bVar1 * (0xf9 < bVar2) | 1U) + iVar4 +
                         iVar3 + -0x1d);
}



undefined8 inst_101_values_var_3(void)

{
  byte bVar1;
  undefined4 in_EDX;
  char in_AF;
  
  bVar1 = in_AF * '\x06' - 0x1b;
  return CONCAT44(in_EDX,CONCAT31(0xdac66a,bVar1 + (0x90 < (bVar1 & 0xf0) |
                                                   in_AF * (0xf9 < bVar1) | 1U) * '`') + 0x253995b5)
  ;
}



// WARNING: Removing unreachable block (ram,0x080813d3)

undefined8 inst_101_flags_var_3(void)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_EDX;
  int iVar4;
  bool in_PF;
  byte in_AF;
  
  bVar1 = (bool)(in_AF | 1);
  bVar2 = bVar1 * '\x06' + 0x3c;
  iVar4 = 0;
  if (in_PF) {
    iVar4 = 4;
  }
  iVar3 = 0;
  if (bVar1) {
    iVar3 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)(byte)(0x90 < (bVar2 & 0xf0) | bVar1 * (0xf9 < bVar2) | 1U) + iVar4 +
                         iVar3 + -0x19);
}



undefined8 inst_101_values_var_4(void)

{
  byte bVar1;
  undefined4 in_EDX;
  char in_AF;
  
  bVar1 = in_AF * '\x06' - 7;
  return CONCAT44(in_EDX,CONCAT31(0x3b668b,bVar1 + (0x90 < (bVar1 & 0xf0) |
                                                   in_AF * (0xf9 < bVar1) | 1U) * '`') + -0x3b668b5f
                 );
}



undefined8 inst_101_flags_var_4(void)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_EDX;
  int iVar4;
  bool in_PF;
  byte in_AF;
  
  bVar1 = (bool)(in_AF | 1);
  bVar2 = bVar1 * '\x06' + 0x6b;
  iVar4 = 0;
  if (in_PF) {
    iVar4 = 4;
  }
  iVar3 = 0;
  if (bVar1) {
    iVar3 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)(byte)(0x90 < (bVar2 & 0xf0) | bVar1 * (0xf9 < bVar2) | 1U) + iVar4 +
                         iVar3 + -0x15);
}



undefined8 inst_101_values_var_5(void)

{
  byte bVar1;
  undefined4 in_EDX;
  char in_AF;
  
  bVar1 = in_AF * '\x06' + 0x69;
  return CONCAT44(in_EDX,CONCAT31(0xd89c3d,bVar1 + (0x90 < (bVar1 & 0xf0) |
                                                   in_AF * (0xf9 < bVar1) | 1U) * '`') + 0x2763c231)
  ;
}



undefined8 inst_101_flags_var_5(void)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_EDX;
  int iVar4;
  bool in_PF;
  byte in_AF;
  
  bVar1 = (bool)(in_AF | 1);
  bVar2 = bVar1 * '\x06' + 0x4a;
  iVar4 = 0;
  if (in_PF) {
    iVar4 = 4;
  }
  iVar3 = 0;
  if (bVar1) {
    iVar3 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)(byte)(0x90 < (bVar2 & 0xf0) | bVar1 * (0xf9 < bVar2) | 1U) + iVar4 +
                         iVar3 + -0x11);
}



undefined8 inst_101_values_var_6(void)

{
  byte bVar1;
  undefined4 in_EDX;
  char in_AF;
  
  bVar1 = in_AF * '\x06' + 0x22;
  return CONCAT44(in_EDX,CONCAT31(0xfe6839,bVar1 + (0x90 < (bVar1 & 0xf0) |
                                                   in_AF * (0xf9 < bVar1) | 1U) * '`') + 0x197c678);
}



undefined8 inst_101_flags_var_6(void)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_EDX;
  int iVar4;
  bool in_PF;
  byte in_AF;
  
  bVar1 = (bool)(in_AF | 1);
  bVar2 = bVar1 * '\x06' - 3;
  iVar4 = 0;
  if (in_PF) {
    iVar4 = 4;
  }
  iVar3 = 0;
  if (bVar1) {
    iVar3 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)(byte)(0x90 < (bVar2 & 0xf0) | bVar1 * (0xf9 < bVar2) | 1U) + iVar4 +
                         iVar3 + -0xd);
}



undefined8 inst_101_values_var_7(void)

{
  byte bVar1;
  undefined4 in_EDX;
  char in_AF;
  
  bVar1 = in_AF * '\x06' - 0x3c;
  return CONCAT44(in_EDX,CONCAT31(0x9e8191,bVar1 + (0x90 < (bVar1 & 0xf0) |
                                                   in_AF * (0xf9 < bVar1) | 1U) * '`') + 0x617e6ed6)
  ;
}



undefined8 inst_101_flags_var_7(void)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_EDX;
  int iVar4;
  bool in_PF;
  byte in_AF;
  
  bVar1 = (bool)(in_AF | 1);
  bVar2 = bVar1 * '\x06' + 0x6e;
  iVar4 = 0;
  if (in_PF) {
    iVar4 = 4;
  }
  iVar3 = 0;
  if (bVar1) {
    iVar3 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)(byte)(0x90 < (bVar2 & 0xf0) | bVar1 * (0xf9 < bVar2) | 1U) + iVar4 +
                         iVar3 + -0x15);
}



undefined8 inst_101_values_var_8(void)

{
  byte bVar1;
  undefined4 in_EDX;
  char in_AF;
  
  bVar1 = in_AF * '\x06' + 0x26;
  return CONCAT44(in_EDX,CONCAT31(0x41b49c,bVar1 + (0x90 < (bVar1 & 0xf0) |
                                                   in_AF * (0xf9 < bVar1) | 1U) * '`') + -0x41b49c8c
                 );
}



undefined8 inst_101_flags_var_8(void)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_EDX;
  int iVar4;
  bool in_PF;
  byte in_AF;
  
  bVar1 = (bool)(in_AF | 1);
  bVar2 = bVar1 * '\x06' + 0x8a;
  iVar4 = 0;
  if (in_PF) {
    iVar4 = 4;
  }
  iVar3 = 0;
  if (bVar1) {
    iVar3 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)(byte)(0x90 < (bVar2 & 0xf0) | bVar1 * (0xf9 < bVar2) | 1U) + iVar4 +
                         iVar3 + -0x15);
}



undefined8 inst_101_values_var_9(void)

{
  byte bVar1;
  undefined4 in_EDX;
  byte in_AF;
  
  bVar1 = (in_AF | 1) * '\x06' + 0xbd;
  return CONCAT44(in_EDX,CONCAT31(0x1ed8f1,bVar1 + (0x90 < (bVar1 & 0xf0) |
                                                   (in_AF | 1) * (0xf9 < bVar1) | 1) * '`') +
                         -0x1ed8f123);
}



undefined8 inst_101_flags_var_9(void)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_EDX;
  int iVar4;
  bool in_PF;
  byte in_AF;
  
  bVar1 = (bool)(in_AF | 1);
  bVar2 = bVar1 * '\x06' + 0x2a;
  iVar4 = 0;
  if (in_PF) {
    iVar4 = 4;
  }
  iVar3 = 0;
  if (bVar1) {
    iVar3 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)(byte)(0x90 < (bVar2 & 0xf0) | bVar1 * (0xf9 < bVar2) | 1U) + iVar4 +
                         iVar3 + -0x15);
}



undefined8 inst_102_values_var_0(void)

{
  byte bVar1;
  undefined4 in_EDX;
  char in_AF;
  
  bVar1 = in_AF * -6;
  return CONCAT44(in_EDX,CONCAT31(0x2a9c88,bVar1 + (0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) * -0x60
                                 ) + -0x2a9c88a0);
}



undefined8 inst_102_flags_var_0(void)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_EDX;
  int iVar4;
  bool in_PF;
  byte in_AF;
  
  bVar1 = (bool)(in_AF | 1);
  bVar2 = bVar1 * -6 + 0x2a;
  iVar4 = 0;
  if (in_PF) {
    iVar4 = 4;
  }
  iVar3 = 0;
  if (bVar1) {
    iVar3 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)(byte)(0x9f < bVar2 | bVar1 * (bVar2 < 6) | 1U) + iVar4 + iVar3 +
                         -0x11);
}



undefined8 inst_102_values_var_1(void)

{
  byte bVar1;
  undefined4 in_EDX;
  char in_AF;
  
  bVar1 = in_AF * -6 + 0x95;
  return CONCAT44(in_EDX,CONCAT31(0xb887e7,bVar1 + (0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) * -0x60
                                 ) + 0x477818d1);
}



// WARNING: Removing unreachable block (ram,0x08081a03)

undefined8 inst_102_flags_var_1(void)

{
  byte bVar1;
  int iVar2;
  undefined4 in_EDX;
  int iVar3;
  bool in_PF;
  bool in_AF;
  
  bVar1 = in_AF * -6 + 0xa0;
  iVar3 = 0;
  if (in_PF) {
    iVar3 = 4;
  }
  iVar2 = 0;
  if (in_AF) {
    iVar2 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)(byte)(0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) + iVar3 + iVar2 + -1)
  ;
}



undefined8 inst_102_values_var_2(void)

{
  byte bVar1;
  undefined4 in_EDX;
  char in_AF;
  
  bVar1 = in_AF * -6 + 0x24;
  return CONCAT44(in_EDX,CONCAT31(0x620522,bVar1 + (0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) * -0x60
                                 ) + -0x620522be);
}



undefined8 inst_102_flags_var_2(void)

{
  byte bVar1;
  int iVar2;
  undefined4 in_EDX;
  int iVar3;
  bool in_PF;
  bool in_AF;
  
  bVar1 = in_AF * -6 - 0xb;
  iVar3 = 0;
  if (in_PF) {
    iVar3 = 4;
  }
  iVar2 = 0;
  if (in_AF) {
    iVar2 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)(byte)(0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) + iVar3 + iVar2 +
                         -0x11);
}



undefined8 inst_102_values_var_3(void)

{
  byte bVar1;
  undefined4 in_EDX;
  char in_AF;
  
  bVar1 = in_AF * -6 + 6;
  return CONCAT44(in_EDX,CONCAT31(0x90eb6,bVar1 + (0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) * -0x60)
                         + -0x90eb6a0);
}



// WARNING: Removing unreachable block (ram,0x08081b8f)

undefined8 inst_102_flags_var_3(void)

{
  byte bVar1;
  int iVar2;
  undefined4 in_EDX;
  int iVar3;
  bool in_PF;
  bool in_AF;
  
  bVar1 = in_AF * -6 - 0x2b;
  iVar3 = 0;
  if (in_PF) {
    iVar3 = 4;
  }
  iVar2 = 0;
  if (in_AF) {
    iVar2 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)(byte)(0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) + iVar3 + iVar2 +
                         -0x15);
}



undefined8 inst_102_values_var_4(void)

{
  byte bVar1;
  undefined4 in_EDX;
  byte in_AF;
  
  bVar1 = (in_AF | 1) * -6 + 0x7a;
  return CONCAT44(in_EDX,CONCAT31(0xdd4af8,bVar1 + (0x9f < bVar1 | (in_AF | 1) * (bVar1 < 6) | 1) *
                                                   -0x60) + 0x22b507ec);
}



undefined8 inst_102_flags_var_4(void)

{
  byte bVar1;
  int iVar2;
  undefined4 in_EDX;
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
  return CONCAT44(in_EDX,(uint)(byte)(0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) + iVar3 + iVar2 + -5)
  ;
}



undefined8 inst_102_values_var_5(void)

{
  byte bVar1;
  undefined4 in_EDX;
  byte in_AF;
  
  bVar1 = (in_AF | 1) * -6 + 0xba;
  return CONCAT44(in_EDX,CONCAT31(0x97f60f,bVar1 + (0x9f < bVar1 | (in_AF | 1) * (bVar1 < 6) | 1) *
                                                   -0x60) + 0x6809f0ac);
}



undefined8 inst_102_flags_var_5(void)

{
  byte bVar1;
  int iVar2;
  undefined4 in_EDX;
  int iVar3;
  bool in_PF;
  bool in_AF;
  
  bVar1 = in_AF * -6 + 0xb5;
  iVar3 = 0;
  if (in_PF) {
    iVar3 = 4;
  }
  iVar2 = 0;
  if (in_AF) {
    iVar2 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)(byte)(0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) + iVar3 + iVar2 + -9)
  ;
}



undefined8 inst_102_values_var_6(void)

{
  byte bVar1;
  undefined4 in_EDX;
  byte in_AF;
  
  bVar1 = (in_AF | 1) * -6 + 0x3d;
  return CONCAT44(in_EDX,CONCAT31(0x9accf3,bVar1 + (0x9f < bVar1 | (in_AF | 1) * (bVar1 < 6) | 1) *
                                                   -0x60) + 0x65330c29);
}



undefined8 inst_102_flags_var_6(void)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_EDX;
  int iVar4;
  bool in_PF;
  byte in_AF;
  
  bVar1 = (bool)(in_AF | 1);
  bVar2 = bVar1 * -6 + 0x9c;
  iVar4 = 0;
  if (in_PF) {
    iVar4 = 4;
  }
  iVar3 = 0;
  if (bVar1) {
    iVar3 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)(byte)(0x9f < bVar2 | bVar1 * (bVar2 < 6) | 1U) + iVar4 + iVar3 +
                         -0xd);
}



undefined8 inst_102_values_var_7(void)

{
  byte bVar1;
  undefined4 in_EDX;
  byte in_AF;
  
  bVar1 = (in_AF | 1) * -6 + 0x7f;
  return CONCAT44(in_EDX,CONCAT31(0x7b78b9,bVar1 + (0x9f < bVar1 | (in_AF | 1) * (bVar1 < 6) | 1) *
                                                   -0x60) + -0x7b78b919);
}



// WARNING: Removing unreachable block (ram,0x08081ea7)

undefined8 inst_102_flags_var_7(void)

{
  byte bVar1;
  int iVar2;
  undefined4 in_EDX;
  int iVar3;
  bool in_PF;
  bool in_AF;
  
  bVar1 = in_AF * -6 - 0x38;
  iVar3 = 0;
  if (in_PF) {
    iVar3 = 4;
  }
  iVar2 = 0;
  if (in_AF) {
    iVar2 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)(byte)(0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) + iVar3 + iVar2 +
                         -0x11);
}



undefined8 inst_102_values_var_8(void)

{
  byte bVar1;
  undefined4 in_EDX;
  char in_AF;
  
  bVar1 = in_AF * -6 - 0x20;
  return CONCAT44(in_EDX,CONCAT31(0xa6aa11,bVar1 + (0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) * -0x60
                                 ) + 0x5955ee80);
}



// WARNING: Removing unreachable block (ram,0x08081f6d)

undefined8 inst_102_flags_var_8(void)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_EDX;
  int iVar4;
  bool in_PF;
  byte in_AF;
  
  bVar1 = (bool)(in_AF | 1);
  bVar2 = bVar1 * -6 + 0x4e;
  iVar4 = 0;
  if (in_PF) {
    iVar4 = 4;
  }
  iVar3 = 0;
  if (bVar1) {
    iVar3 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)(byte)(0x9f < bVar2 | bVar1 * (bVar2 < 6) | 1U) + iVar4 + iVar3 +
                         -0x1d);
}



undefined8 inst_102_values_var_9(void)

{
  byte bVar1;
  undefined4 in_EDX;
  char in_AF;
  
  bVar1 = in_AF * -6 - 0x2d;
  return CONCAT44(in_EDX,CONCAT31(0xd6dd07,bVar1 + (0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) * -0x60
                                 ) + 0x2922f893);
}



// WARNING: Removing unreachable block (ram,0x08082033)

undefined8 inst_102_flags_var_9(void)

{
  byte bVar1;
  int iVar2;
  undefined4 in_EDX;
  int iVar3;
  bool in_PF;
  bool in_AF;
  
  bVar1 = in_AF * -6 + 0x38;
  iVar3 = 0;
  if (in_PF) {
    iVar3 = 4;
  }
  iVar2 = 0;
  if (in_AF) {
    iVar2 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)(byte)(0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) + iVar3 + iVar2 +
                         -0x1d);
}



longlong inst_103_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080820e1)

undefined8 inst_103_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_103_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080821a9)

undefined8 inst_103_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_103_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08082271)

undefined8 inst_103_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_103_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08082339)
// WARNING: Removing unreachable block (ram,0x08082353)

undefined8 inst_103_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_103_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08082401)

undefined8 inst_103_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_103_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080824c9)
// WARNING: Removing unreachable block (ram,0x080824e3)

undefined8 inst_103_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_103_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08082591)
// WARNING: Removing unreachable block (ram,0x080825ab)

undefined8 inst_103_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_103_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08082659)
// WARNING: Removing unreachable block (ram,0x08082673)

undefined8 inst_103_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_103_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08082721)

undefined8 inst_103_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_103_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080827e9)
// WARNING: Removing unreachable block (ram,0x08082803)

undefined8 inst_103_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_104_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080828b1)

undefined8 inst_104_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_104_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08082979)
// WARNING: Removing unreachable block (ram,0x08082993)

undefined8 inst_104_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_104_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08082a41)
// WARNING: Removing unreachable block (ram,0x08082a5b)

undefined8 inst_104_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_104_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08082b09)
// WARNING: Removing unreachable block (ram,0x08082b23)

undefined8 inst_104_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_104_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08082bd1)
// WARNING: Removing unreachable block (ram,0x08082beb)

undefined8 inst_104_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_104_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08082c99)
// WARNING: Removing unreachable block (ram,0x08082cb3)

undefined8 inst_104_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_104_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08082d61)
// WARNING: Removing unreachable block (ram,0x08082d7b)

undefined8 inst_104_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_104_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08082e29)

undefined8 inst_104_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_104_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08082ef1)
// WARNING: Removing unreachable block (ram,0x08082f0b)

undefined8 inst_104_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_104_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08082fb9)

undefined8 inst_104_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_105_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808307f)

undefined8 inst_105_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_105_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08083145)

undefined8 inst_105_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_105_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808320b)
// WARNING: Removing unreachable block (ram,0x08083225)

undefined8 inst_105_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_105_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080832d1)
// WARNING: Removing unreachable block (ram,0x080832eb)

undefined8 inst_105_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_105_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08083397)

undefined8 inst_105_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_105_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808345d)
// WARNING: Removing unreachable block (ram,0x08083477)

undefined8 inst_105_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_105_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08083523)

undefined8 inst_105_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_105_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080835e9)
// WARNING: Removing unreachable block (ram,0x08083603)

undefined8 inst_105_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_105_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080836af)

undefined8 inst_105_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_105_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08083775)
// WARNING: Removing unreachable block (ram,0x0808378f)

undefined8 inst_105_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_106_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808383d)

undefined8 inst_106_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_106_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08083905)

undefined8 inst_106_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_106_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080839cd)
// WARNING: Removing unreachable block (ram,0x080839e7)

undefined8 inst_106_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_106_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08083a95)
// WARNING: Removing unreachable block (ram,0x08083aaf)

undefined8 inst_106_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_106_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08083b5d)
// WARNING: Removing unreachable block (ram,0x08083b77)

undefined8 inst_106_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_106_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08083c25)

undefined8 inst_106_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_106_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08083ced)

undefined8 inst_106_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_106_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08083db5)
// WARNING: Removing unreachable block (ram,0x08083dcf)

undefined8 inst_106_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_106_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08083e7d)
// WARNING: Removing unreachable block (ram,0x08083e97)

undefined8 inst_106_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_106_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08083f45)

undefined8 inst_106_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_107_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808400d)
// WARNING: Removing unreachable block (ram,0x08084027)

undefined8 inst_107_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_107_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080840d5)
// WARNING: Removing unreachable block (ram,0x080840ef)

undefined8 inst_107_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_107_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808419d)
// WARNING: Removing unreachable block (ram,0x080841b7)

undefined8 inst_107_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_107_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08084265)
// WARNING: Removing unreachable block (ram,0x0808427f)

undefined8 inst_107_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_107_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808432d)

undefined8 inst_107_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_107_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080843f5)

undefined8 inst_107_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_107_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080844bd)
// WARNING: Removing unreachable block (ram,0x080844d7)

undefined8 inst_107_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_107_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08084585)

undefined8 inst_107_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_107_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808464d)
// WARNING: Removing unreachable block (ram,0x08084667)

undefined8 inst_107_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_107_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08084715)

undefined8 inst_107_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_108_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080847db)

undefined8 inst_108_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_108_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080848a1)
// WARNING: Removing unreachable block (ram,0x080848bb)

undefined8 inst_108_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_108_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08084967)

undefined8 inst_108_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_108_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08084a2d)
// WARNING: Removing unreachable block (ram,0x08084a47)

undefined8 inst_108_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_108_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08084af3)
// WARNING: Removing unreachable block (ram,0x08084b0d)

undefined8 inst_108_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_108_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08084bb9)
// WARNING: Removing unreachable block (ram,0x08084bd3)

undefined8 inst_108_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_108_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08084c7f)

undefined8 inst_108_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_108_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08084d45)
// WARNING: Removing unreachable block (ram,0x08084d5f)

undefined8 inst_108_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_108_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08084e0b)
// WARNING: Removing unreachable block (ram,0x08084e25)

undefined8 inst_108_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_108_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08084ed1)
// WARNING: Removing unreachable block (ram,0x08084eeb)

undefined8 inst_108_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_109_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_109_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_109_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_109_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_109_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_109_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_109_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_109_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_109_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_109_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_109_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_109_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_109_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_109_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_109_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_109_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_109_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_109_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_109_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_109_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_110_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_110_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_110_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_110_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_110_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_110_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_110_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_110_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_110_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_110_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_110_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_110_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_110_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_110_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_110_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_110_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_110_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_110_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_110_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_110_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_111_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_111_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_111_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_111_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_111_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_111_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_111_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_111_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_111_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_111_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_111_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_111_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_111_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_111_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_111_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_111_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_111_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_111_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_111_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_111_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_112_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_112_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_112_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_112_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_112_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_112_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_112_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_112_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_112_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_112_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_112_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_112_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_112_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_112_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_112_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_112_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_112_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_112_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_112_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_112_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_113_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_113_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_113_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_113_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_113_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_113_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_113_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_113_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_113_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_113_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_113_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_113_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_113_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_113_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_113_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_113_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_113_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_113_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_113_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_113_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_114_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_114_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_114_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_114_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_114_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_114_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_114_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_114_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_114_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_114_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_114_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_114_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_114_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_114_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_114_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_114_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_114_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_114_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_114_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_114_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_115_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_115_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_115_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_115_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_115_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_115_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_115_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_115_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_115_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_115_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_115_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_115_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_115_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_115_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_115_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_115_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_115_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_115_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_115_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_115_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_116_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_116_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_116_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_116_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_116_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_116_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_116_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_116_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_116_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_116_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_116_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_116_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_116_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_116_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_116_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_116_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_116_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_116_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_116_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_116_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_117_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_117_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_117_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_117_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_117_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_117_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_117_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_117_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_117_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_117_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_117_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_117_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_117_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_117_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_117_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_117_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_117_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_117_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_117_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_117_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_118_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_118_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_118_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_118_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_118_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_118_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_118_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_118_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_118_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_118_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_118_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_118_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_118_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_118_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_118_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_118_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_118_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_118_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_118_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_118_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_119_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_119_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_119_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_119_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_119_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_119_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_119_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_119_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_119_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_119_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_119_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_119_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_119_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_119_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_119_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_119_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_119_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_119_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_119_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_119_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_120_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_120_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_120_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_120_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_120_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_120_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_120_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_120_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_120_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_120_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_120_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_120_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_120_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_120_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_120_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_120_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_120_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_120_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_120_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_120_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_121_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_121_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_121_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_121_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_121_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_121_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_121_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_121_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_121_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_121_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_121_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_121_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_121_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_121_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_121_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_121_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_121_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_121_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_121_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_121_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_122_values_var_0(void)

{
  undefined4 in_EDX;
  char in_PF;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(ushort)(CONCAT11(in_AF << 4 | 0x80U | in_PF << 2,0x6b) | 0x300) |
                         0xead10000) + 0x152e6c95);
}



longlong inst_122_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_122_values_var_1(void)

{
  undefined4 in_EDX;
  char in_PF;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(ushort)(CONCAT11(in_AF << 4 | in_PF << 2,0xb) | 0x300) | 0x65310000
                         ) + 0x9aceecf5);
}



longlong inst_122_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_122_values_var_2(void)

{
  undefined4 in_EDX;
  char in_PF;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(ushort)(CONCAT11(in_AF << 4 | 0x80U | in_PF << 2,0xf9) | 0x300) |
                         0x8e210000) + 0x71de6807);
}



longlong inst_122_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_122_values_var_3(void)

{
  undefined4 in_EDX;
  char in_PF;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(ushort)(CONCAT11(in_AF << 4 | in_PF << 2,7) | 0x300) | 0x1de90000)
                         + 0xe216ecf9);
}



longlong inst_122_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_122_values_var_4(void)

{
  undefined4 in_EDX;
  char in_PF;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(ushort)(CONCAT11(in_AF << 4 | in_PF << 2,0xcb) | 0x300) |
                         0x46650000) + 0xb99aec35);
}



longlong inst_122_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_122_values_var_5(void)

{
  undefined4 in_EDX;
  char in_PF;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(ushort)(CONCAT11(in_AF << 4 | 0x80U | in_PF << 2,0x8f) | 0x300) |
                         0xafef0000) + 0x50106c71);
}



longlong inst_122_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_122_values_var_6(void)

{
  undefined4 in_EDX;
  char in_PF;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(ushort)(CONCAT11(in_AF << 4 | 0x80U | in_PF << 2,0x18) | 0x300) |
                         0xeeee0000) + 0x111168e8);
}



longlong inst_122_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_122_values_var_7(void)

{
  undefined4 in_EDX;
  char in_PF;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(ushort)(CONCAT11(in_AF << 4 | in_PF << 2,0x88) | 0x300) |
                         0x360c0000) + 0xc9f3e878);
}



longlong inst_122_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_122_values_var_8(void)

{
  undefined4 in_EDX;
  char in_PF;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(ushort)(CONCAT11(in_AF << 4 | 0x80U | in_PF << 2,0x29) | 0x300) |
                         0x8d780000) + 0x72876cd7);
}



longlong inst_122_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_122_values_var_9(void)

{
  undefined4 in_EDX;
  char in_PF;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(ushort)(CONCAT11(in_AF << 4 | in_PF << 2,0x6e) | 0x300) |
                         0x128b0000) + 0xed74ec92);
}



longlong inst_122_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_123_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_123_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_123_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_123_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_123_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_123_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_123_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_123_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_123_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_123_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_123_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_123_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_123_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_123_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_123_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_123_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_123_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_123_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_123_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_123_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_124_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_124_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_124_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_124_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_124_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_124_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_124_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_124_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_124_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_124_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_124_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_124_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_124_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_124_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_124_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_124_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_124_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_124_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_124_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_124_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_125_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_125_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_125_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_125_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_125_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_125_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_125_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_125_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_125_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_125_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_125_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_125_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_125_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_125_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_125_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_125_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_125_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_125_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_125_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_125_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_126_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_126_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_126_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_126_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_126_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_126_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_126_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_126_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_126_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_126_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_126_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_126_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_126_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_126_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_126_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_126_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_126_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_126_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_126_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_126_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_127_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_127_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_127_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_127_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_127_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_127_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_127_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_127_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_127_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_127_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_127_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_127_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_127_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_127_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_127_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_127_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_127_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_127_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_127_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_127_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_128_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_128_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_128_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_128_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_128_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_128_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_128_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_128_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_128_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_128_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_128_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_128_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_128_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_128_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_128_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_128_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_128_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_128_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_128_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_128_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_129_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_129_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_129_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_129_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_129_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_129_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_129_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_129_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_129_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_129_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_129_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_129_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_129_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_129_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_129_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_129_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_129_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_129_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_129_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_129_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_130_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_130_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_130_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_130_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_130_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_130_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_130_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_130_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_130_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_130_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_130_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_130_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_130_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_130_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_130_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_130_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_130_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_130_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_130_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_130_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_131_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_131_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_131_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_131_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_131_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_131_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_131_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_131_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_131_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_131_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_131_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_131_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_131_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_131_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_131_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_131_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_131_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_131_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_131_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_131_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_132_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_132_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_132_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_132_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_132_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_132_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_132_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_132_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_132_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_132_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_132_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_132_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_132_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_132_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_132_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_132_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_132_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_132_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_132_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_132_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_133_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_133_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_133_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_133_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_133_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_133_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_133_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_133_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_133_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_133_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_133_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_133_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_133_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_133_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_133_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_133_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_133_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_133_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_133_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_133_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_134_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_134_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_134_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_134_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_134_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_134_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_134_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_134_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_134_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_134_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_134_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_134_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_134_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_134_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_134_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_134_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_134_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_134_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_134_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_134_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_135_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_135_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_135_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_135_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_135_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_135_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_135_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_135_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_135_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_135_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_135_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_135_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_135_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_135_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_135_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_135_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_135_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_135_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_135_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_135_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_136_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_136_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_136_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_136_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_136_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_136_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_136_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_136_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_136_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_136_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_136_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_136_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_136_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_136_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_136_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_136_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_136_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_136_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_136_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_136_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_137_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08090f79)
// WARNING: Removing unreachable block (ram,0x08090f93)

undefined8 inst_137_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_137_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08091049)
// WARNING: Removing unreachable block (ram,0x08091063)

undefined8 inst_137_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_137_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08091119)
// WARNING: Removing unreachable block (ram,0x08091133)

undefined8 inst_137_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_137_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080911e9)
// WARNING: Removing unreachable block (ram,0x08091203)

undefined8 inst_137_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_137_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080912b9)
// WARNING: Removing unreachable block (ram,0x080912d3)

undefined8 inst_137_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_137_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08091389)

undefined8 inst_137_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_137_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08091459)
// WARNING: Removing unreachable block (ram,0x08091473)

undefined8 inst_137_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_137_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08091529)

undefined8 inst_137_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_137_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080915f9)

undefined8 inst_137_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_137_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080916c9)
// WARNING: Removing unreachable block (ram,0x080916e3)

undefined8 inst_137_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_138_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809179b)

undefined8 inst_138_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_138_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809186d)
// WARNING: Removing unreachable block (ram,0x08091887)

undefined8 inst_138_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_138_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809193f)

undefined8 inst_138_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_138_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08091a11)
// WARNING: Removing unreachable block (ram,0x08091a2b)

undefined8 inst_138_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_138_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08091ae3)

undefined8 inst_138_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_138_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08091bb5)
// WARNING: Removing unreachable block (ram,0x08091bcf)

undefined8 inst_138_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_138_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08091c87)

undefined8 inst_138_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_138_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08091d59)
// WARNING: Removing unreachable block (ram,0x08091d73)

undefined8 inst_138_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_138_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08091e2b)
// WARNING: Removing unreachable block (ram,0x08091e45)

undefined8 inst_138_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_138_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08091efd)

undefined8 inst_138_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_139_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08091fcd)

undefined8 inst_139_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_139_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809209d)

undefined8 inst_139_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_139_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809216d)

undefined8 inst_139_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_139_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809223d)
// WARNING: Removing unreachable block (ram,0x08092257)

undefined8 inst_139_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_139_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809230d)

undefined8 inst_139_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_139_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080923dd)
// WARNING: Removing unreachable block (ram,0x080923f7)

undefined8 inst_139_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_139_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080924ad)
// WARNING: Removing unreachable block (ram,0x080924c7)

undefined8 inst_139_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_139_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809257d)
// WARNING: Removing unreachable block (ram,0x08092597)

undefined8 inst_139_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_139_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809264d)

undefined8 inst_139_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_139_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809271d)
// WARNING: Removing unreachable block (ram,0x08092737)

undefined8 inst_139_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_140_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_140_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_140_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_140_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_140_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_140_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_140_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_140_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_140_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_140_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_140_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_140_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_140_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_140_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_140_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_140_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_140_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_140_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_140_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_140_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_141_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_141_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_141_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_141_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_141_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_141_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_141_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_141_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_141_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_141_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_141_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_141_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_141_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_141_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_141_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_141_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_141_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_141_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_141_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_141_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_142_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_142_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_142_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_142_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_142_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_142_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_142_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_142_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_142_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_142_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_142_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_142_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_142_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_142_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_142_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_142_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_142_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_142_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_142_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_142_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_143_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_143_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_143_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_143_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_143_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_143_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_143_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_143_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_143_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_143_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_143_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_143_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_143_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_143_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_143_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_143_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_143_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_143_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_143_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_143_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_144_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080941aa)
// WARNING: Removing unreachable block (ram,0x080941b7)

undefined8 inst_144_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_144_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809427e)
// WARNING: Removing unreachable block (ram,0x08094271)
// WARNING: Removing unreachable block (ram,0x08094298)

undefined8 inst_144_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_144_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08094345)
// WARNING: Removing unreachable block (ram,0x08094338)
// WARNING: Removing unreachable block (ram,0x0809435f)

undefined8 inst_144_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_144_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080943fe)
// WARNING: Removing unreachable block (ram,0x0809440b)

undefined8 inst_144_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_144_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080944c5)
// WARNING: Removing unreachable block (ram,0x080944d2)

undefined8 inst_144_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_144_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809458c)
// WARNING: Removing unreachable block (ram,0x08094599)

undefined8 inst_144_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_144_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08094660)
// WARNING: Removing unreachable block (ram,0x08094653)
// WARNING: Removing unreachable block (ram,0x0809467a)

undefined8 inst_144_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_144_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08094727)
// WARNING: Removing unreachable block (ram,0x0809471a)
// WARNING: Removing unreachable block (ram,0x08094741)

undefined8 inst_144_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_144_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080947ee)
// WARNING: Removing unreachable block (ram,0x080947e1)
// WARNING: Removing unreachable block (ram,0x08094808)

undefined8 inst_144_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_144_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080948a8)
// WARNING: Removing unreachable block (ram,0x080948b5)

undefined8 inst_144_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_145_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809497a)
// WARNING: Removing unreachable block (ram,0x0809496d)
// WARNING: Removing unreachable block (ram,0x08094994)

undefined8 inst_145_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_145_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08094a32)
// WARNING: Removing unreachable block (ram,0x08094a3f)

undefined8 inst_145_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_145_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08094b04)
// WARNING: Removing unreachable block (ram,0x08094af7)
// WARNING: Removing unreachable block (ram,0x08094b1e)

undefined8 inst_145_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_145_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08094bbc)
// WARNING: Removing unreachable block (ram,0x08094bc9)

undefined8 inst_145_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_145_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08094c8e)
// WARNING: Removing unreachable block (ram,0x08094c81)
// WARNING: Removing unreachable block (ram,0x08094ca8)

undefined8 inst_145_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_145_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08094d46)
// WARNING: Removing unreachable block (ram,0x08094d53)

undefined8 inst_145_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_145_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08094e0b)
// WARNING: Removing unreachable block (ram,0x08094e18)

undefined8 inst_145_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_145_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08094ed0)
// WARNING: Removing unreachable block (ram,0x08094edd)

undefined8 inst_145_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_145_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08094f95)
// WARNING: Removing unreachable block (ram,0x08094fa2)

undefined8 inst_145_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_145_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809505a)
// WARNING: Removing unreachable block (ram,0x08095067)

undefined8 inst_145_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_146_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08095125)
// WARNING: Removing unreachable block (ram,0x08095132)

undefined8 inst_146_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_146_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080951fd)
// WARNING: Removing unreachable block (ram,0x080951f0)
// WARNING: Removing unreachable block (ram,0x08095217)

undefined8 inst_146_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_146_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080952bb)
// WARNING: Removing unreachable block (ram,0x080952c8)

undefined8 inst_146_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_146_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08095386)
// WARNING: Removing unreachable block (ram,0x08095393)

undefined8 inst_146_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_146_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809545e)
// WARNING: Removing unreachable block (ram,0x08095451)
// WARNING: Removing unreachable block (ram,0x08095478)

undefined8 inst_146_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_146_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809551c)
// WARNING: Removing unreachable block (ram,0x08095529)

undefined8 inst_146_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_146_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080955f4)
// WARNING: Removing unreachable block (ram,0x080955e7)
// WARNING: Removing unreachable block (ram,0x0809560e)

undefined8 inst_146_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_146_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080956bf)
// WARNING: Removing unreachable block (ram,0x080956b2)
// WARNING: Removing unreachable block (ram,0x080956d9)

undefined8 inst_146_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_146_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809577d)
// WARNING: Removing unreachable block (ram,0x0809578a)

undefined8 inst_146_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_146_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08095855)
// WARNING: Removing unreachable block (ram,0x08095848)
// WARNING: Removing unreachable block (ram,0x0809586f)

undefined8 inst_146_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_147_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809590f)
// WARNING: Removing unreachable block (ram,0x0809591c)

undefined8 inst_147_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_147_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080959d6)
// WARNING: Removing unreachable block (ram,0x080959e3)

undefined8 inst_147_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_147_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08095a9d)
// WARNING: Removing unreachable block (ram,0x08095aaa)

undefined8 inst_147_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_147_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08095b71)
// WARNING: Removing unreachable block (ram,0x08095b64)
// WARNING: Removing unreachable block (ram,0x08095b8b)

undefined8 inst_147_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_147_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08095c2b)
// WARNING: Removing unreachable block (ram,0x08095c38)

undefined8 inst_147_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_147_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08095cf2)
// WARNING: Removing unreachable block (ram,0x08095cff)

undefined8 inst_147_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_147_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08095db9)
// WARNING: Removing unreachable block (ram,0x08095dc6)

undefined8 inst_147_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_147_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08095e80)
// WARNING: Removing unreachable block (ram,0x08095e8d)

undefined8 inst_147_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_147_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08095f54)
// WARNING: Removing unreachable block (ram,0x08095f47)
// WARNING: Removing unreachable block (ram,0x08095f6e)

undefined8 inst_147_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_147_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809601b)
// WARNING: Removing unreachable block (ram,0x0809600e)
// WARNING: Removing unreachable block (ram,0x08096035)

undefined8 inst_147_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_148_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080960e8)
// WARNING: Removing unreachable block (ram,0x080960db)
// WARNING: Removing unreachable block (ram,0x08096102)

undefined8 inst_148_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_148_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080961b5)
// WARNING: Removing unreachable block (ram,0x080961a8)
// WARNING: Removing unreachable block (ram,0x080961cf)

undefined8 inst_148_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_148_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08096274)
// WARNING: Removing unreachable block (ram,0x08096281)

undefined8 inst_148_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_148_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08096341)
// WARNING: Removing unreachable block (ram,0x0809634e)

undefined8 inst_148_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_148_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809640c)
// WARNING: Removing unreachable block (ram,0x08096419)

undefined8 inst_148_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_148_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080964d9)
// WARNING: Removing unreachable block (ram,0x080964e6)

undefined8 inst_148_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_148_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080965a5)
// WARNING: Removing unreachable block (ram,0x080965b2)

undefined8 inst_148_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_148_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08096672)
// WARNING: Removing unreachable block (ram,0x0809667f)

undefined8 inst_148_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_148_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809673e)
// WARNING: Removing unreachable block (ram,0x0809674b)

undefined8 inst_148_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_148_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809680b)
// WARNING: Removing unreachable block (ram,0x08096818)

undefined8 inst_148_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_149_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080968d0)
// WARNING: Removing unreachable block (ram,0x080968dd)

undefined8 inst_149_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_149_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08096995)
// WARNING: Removing unreachable block (ram,0x080969a2)

undefined8 inst_149_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_149_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08096a67)
// WARNING: Removing unreachable block (ram,0x08096a5a)
// WARNING: Removing unreachable block (ram,0x08096a81)

undefined8 inst_149_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_149_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08096b1f)
// WARNING: Removing unreachable block (ram,0x08096b2c)

undefined8 inst_149_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_149_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08096be4)
// WARNING: Removing unreachable block (ram,0x08096bf1)

undefined8 inst_149_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_149_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08096ca9)
// WARNING: Removing unreachable block (ram,0x08096cb6)

undefined8 inst_149_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_149_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08096d7b)
// WARNING: Removing unreachable block (ram,0x08096d6e)
// WARNING: Removing unreachable block (ram,0x08096d95)

undefined8 inst_149_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_149_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08096e33)
// WARNING: Removing unreachable block (ram,0x08096e40)

undefined8 inst_149_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_149_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08096ef8)
// WARNING: Removing unreachable block (ram,0x08096f05)

undefined8 inst_149_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_149_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08096fbd)
// WARNING: Removing unreachable block (ram,0x08096fca)

undefined8 inst_149_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_150_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_150_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_150_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08097137)

longlong inst_150_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_150_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_150_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_150_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080972ae)

longlong inst_150_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_150_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08097356)

longlong inst_150_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_150_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_150_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_150_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080974cd)

longlong inst_150_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_150_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08097582)

longlong inst_150_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_150_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809762a)

longlong inst_150_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_150_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080976ec)

longlong inst_150_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_151_values_var_0(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffff86);
}



// WARNING: Removing unreachable block (ram,0x08097794)

longlong inst_151_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_151_values_var_1(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffff8400);
}



// WARNING: Removing unreachable block (ram,0x08097849)

longlong inst_151_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_151_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080978fe)

longlong inst_151_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_151_values_var_3(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffffbe);
}



// WARNING: Removing unreachable block (ram,0x080979b3)
// WARNING: Removing unreachable block (ram,0x080979c0)

longlong inst_151_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_151_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08097a68)

longlong inst_151_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_151_values_var_5(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffffab);
}



// WARNING: Removing unreachable block (ram,0x08097b1d)

longlong inst_151_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_151_values_var_6(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffffa6);
}



longlong inst_151_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_151_values_var_7(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffb600);
}



longlong inst_151_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_151_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_151_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_151_values_var_9(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffffca);
}



// WARNING: Removing unreachable block (ram,0x08097df1)
// WARNING: Removing unreachable block (ram,0x08097dfe)

longlong inst_151_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_152_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08097eb3)

longlong inst_152_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_152_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08097f5b)
// WARNING: Removing unreachable block (ram,0x08097f68)

longlong inst_152_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_152_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08098010)
// WARNING: Removing unreachable block (ram,0x0809801d)

longlong inst_152_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_152_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080980c5)
// WARNING: Removing unreachable block (ram,0x080980d2)

longlong inst_152_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_152_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08098187)

longlong inst_152_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_152_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809822f)
// WARNING: Removing unreachable block (ram,0x0809823c)

longlong inst_152_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_152_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080982e4)
// WARNING: Removing unreachable block (ram,0x080982f1)

longlong inst_152_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_152_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08098399)
// WARNING: Removing unreachable block (ram,0x080983a6)

longlong inst_152_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_152_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809845b)

longlong inst_152_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_152_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08098510)

longlong inst_152_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_153_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080985c5)

longlong inst_153_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_153_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809867a)

longlong inst_153_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_153_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08098722)
// WARNING: Removing unreachable block (ram,0x0809872f)

longlong inst_153_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_153_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080987e4)

longlong inst_153_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_153_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08098899)

longlong inst_153_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_153_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08098941)

longlong inst_153_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_153_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08098a03)

longlong inst_153_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_153_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_153_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_153_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08098b60)

longlong inst_153_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_153_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08098c22)

longlong inst_153_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_154_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08098cd7)

longlong inst_154_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_154_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08098d8c)

longlong inst_154_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_154_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08098e34)
// WARNING: Removing unreachable block (ram,0x08098e41)

longlong inst_154_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_154_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08098ef6)

longlong inst_154_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_154_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08098fab)

longlong inst_154_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_154_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08099060)

undefined8 inst_154_flags_var_5(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffe);
}



longlong inst_154_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08099115)

longlong inst_154_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_154_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080991ca)

longlong inst_154_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_154_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809927f)

longlong inst_154_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_154_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08099327)
// WARNING: Removing unreachable block (ram,0x08099334)

undefined8 inst_154_flags_var_9(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffe);
}



longlong inst_155_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080993de)

longlong inst_155_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_155_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080994a2)

longlong inst_155_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_155_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809954c)
// WARNING: Removing unreachable block (ram,0x08099559)

longlong inst_155_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_155_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08099603)

longlong inst_155_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_155_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080996ba)

longlong inst_155_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_155_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_155_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_155_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08099828)
// WARNING: Removing unreachable block (ram,0x08099835)

longlong inst_155_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_155_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080998df)

longlong inst_155_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_155_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08099996)

longlong inst_155_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_155_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08099a5a)

longlong inst_155_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_156_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08099b04)

longlong inst_156_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_156_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_156_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_156_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_156_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_156_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08099d29)

longlong inst_156_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_156_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08099de0)
// WARNING: Removing unreachable block (ram,0x08099ded)

longlong inst_156_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_156_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08099ea4)

longlong inst_156_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_156_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08099f5b)

longlong inst_156_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_156_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_156_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_156_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809a0bc)

longlong inst_156_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_156_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809a173)
// WARNING: Removing unreachable block (ram,0x0809a180)

longlong inst_156_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_157_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809a237)

longlong inst_157_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_157_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809a2ee)

longlong inst_157_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_157_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809a398)
// WARNING: Removing unreachable block (ram,0x0809a3a5)

longlong inst_157_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_157_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809a44f)
// WARNING: Removing unreachable block (ram,0x0809a45c)

longlong inst_157_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_157_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809a513)

longlong inst_157_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_157_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809a5bd)
// WARNING: Removing unreachable block (ram,0x0809a5ca)

longlong inst_157_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_157_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809a681)

longlong inst_157_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_157_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809a738)

longlong inst_157_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_157_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809a7e2)
// WARNING: Removing unreachable block (ram,0x0809a7ef)

longlong inst_157_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_157_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809a8a6)

longlong inst_157_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_158_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809a950)
// WARNING: Removing unreachable block (ram,0x0809a95d)

longlong inst_158_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_158_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809aa07)
// WARNING: Removing unreachable block (ram,0x0809aa14)

longlong inst_158_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_158_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809aabe)

longlong inst_158_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_158_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809ab82)

longlong inst_158_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_158_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809ac2c)

longlong inst_158_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_158_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809ace3)
// WARNING: Removing unreachable block (ram,0x0809acf0)

longlong inst_158_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_158_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809ad9a)

longlong inst_158_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_158_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_158_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_158_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809af15)

longlong inst_158_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_158_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809afbf)

longlong inst_158_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_159_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809b083)

longlong inst_159_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_159_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809b13a)

undefined8 inst_159_flags_var_1(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffe);
}



longlong inst_159_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809b1f1)

undefined8 inst_159_flags_var_2(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffe);
}



longlong inst_159_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809b29b)
// WARNING: Removing unreachable block (ram,0x0809b2a8)

undefined8 inst_159_flags_var_3(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffe);
}



longlong inst_159_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809b35f)

longlong inst_159_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_159_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809b409)
// WARNING: Removing unreachable block (ram,0x0809b416)

undefined8 inst_159_flags_var_5(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffe);
}



longlong inst_159_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809b4cd)

longlong inst_159_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_159_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809b577)
// WARNING: Removing unreachable block (ram,0x0809b584)

undefined8 inst_159_flags_var_7(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffe);
}



longlong inst_159_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809b62e)
// WARNING: Removing unreachable block (ram,0x0809b63b)

longlong inst_159_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_159_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809b6e5)
// WARNING: Removing unreachable block (ram,0x0809b6f2)

undefined8 inst_159_flags_var_9(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffe);
}



longlong inst_160_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809b7a7)

longlong inst_160_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_160_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809b85c)

longlong inst_160_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_160_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809b904)
// WARNING: Removing unreachable block (ram,0x0809b911)

longlong inst_160_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_160_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809b9c6)

longlong inst_160_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_160_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809ba6e)
// WARNING: Removing unreachable block (ram,0x0809ba7b)

longlong inst_160_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_160_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_160_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_160_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809bbe5)

longlong inst_160_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_160_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809bc8d)

longlong inst_160_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_160_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809bd42)
// WARNING: Removing unreachable block (ram,0x0809bd4f)

longlong inst_160_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_160_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809bdf7)

longlong inst_160_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_161_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809beac)
// WARNING: Removing unreachable block (ram,0x0809beb9)

longlong inst_161_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_161_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809bf61)

longlong inst_161_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_161_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809c016)
// WARNING: Removing unreachable block (ram,0x0809c023)

longlong inst_161_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_161_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809c0d8)

longlong inst_161_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_161_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809c18d)

longlong inst_161_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_161_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809c242)

longlong inst_161_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_161_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809c2ea)
// WARNING: Removing unreachable block (ram,0x0809c2f7)

longlong inst_161_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_161_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809c3ac)

longlong inst_161_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_161_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809c454)

longlong inst_161_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_161_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809c509)

longlong inst_161_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_162_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809c5cb)

longlong inst_162_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_162_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809c673)
// WARNING: Removing unreachable block (ram,0x0809c680)

longlong inst_162_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_162_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809c728)
// WARNING: Removing unreachable block (ram,0x0809c735)

longlong inst_162_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_162_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809c7dd)
// WARNING: Removing unreachable block (ram,0x0809c7ea)

longlong inst_162_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_162_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809c89f)

longlong inst_162_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_162_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809c947)
// WARNING: Removing unreachable block (ram,0x0809c954)

longlong inst_162_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_162_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809ca09)

longlong inst_162_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_162_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809cab1)
// WARNING: Removing unreachable block (ram,0x0809cabe)

longlong inst_162_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_162_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809cb73)

longlong inst_162_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_162_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809cc28)

longlong inst_162_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_163_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809ccdd)

longlong inst_163_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_163_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809cd85)
// WARNING: Removing unreachable block (ram,0x0809cd92)

longlong inst_163_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_163_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809ce47)

longlong inst_163_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_163_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809cefc)

longlong inst_163_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_163_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809cfb1)

longlong inst_163_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_163_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809d059)

longlong inst_163_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_163_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_163_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_163_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809d1c3)
// WARNING: Removing unreachable block (ram,0x0809d1d0)

longlong inst_163_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_163_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_163_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_163_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_163_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_164_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809d3ef)

undefined8 inst_164_flags_var_0(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffe);
}



longlong inst_164_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809d497)
// WARNING: Removing unreachable block (ram,0x0809d4a4)

undefined8 inst_164_flags_var_1(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffe);
}



longlong inst_164_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809d54c)
// WARNING: Removing unreachable block (ram,0x0809d559)

undefined8 inst_164_flags_var_2(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffe);
}



longlong inst_164_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809d601)
// WARNING: Removing unreachable block (ram,0x0809d60e)

undefined8 inst_164_flags_var_3(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffe);
}



longlong inst_164_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809d6b6)
// WARNING: Removing unreachable block (ram,0x0809d6c3)

longlong inst_164_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_164_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809d76b)
// WARNING: Removing unreachable block (ram,0x0809d778)

longlong inst_164_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_164_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809d82d)

undefined8 inst_164_flags_var_6(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffe);
}



longlong inst_164_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809d8e2)

undefined8 inst_164_flags_var_7(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffe);
}



longlong inst_164_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809d997)

undefined8 inst_164_flags_var_8(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffe);
}



longlong inst_164_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809da4c)

longlong inst_164_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_165_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_165_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_165_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_165_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_165_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_165_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_165_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_165_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_165_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_165_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_165_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_165_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_165_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_165_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_165_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_165_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_165_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_165_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_165_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_165_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_166_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_166_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_166_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_166_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_166_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_166_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_166_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_166_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_166_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_166_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_166_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_166_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_166_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_166_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_166_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_166_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_166_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_166_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_166_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_166_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_167_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_167_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_167_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_167_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_167_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_167_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_167_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_167_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_167_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_167_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_167_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_167_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_167_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_167_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_167_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_167_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_167_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_167_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_167_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_167_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_168_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_168_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_168_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_168_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_168_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_168_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_168_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_168_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_168_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_168_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_168_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_168_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_168_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_168_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_168_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_168_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_168_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_168_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_168_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_168_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_169_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_169_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_169_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_169_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_169_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_169_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_169_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_169_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_169_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_169_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_169_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_169_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_169_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_169_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_169_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_169_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_169_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_169_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_169_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_169_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_170_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_170_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_170_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_170_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_170_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_170_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_170_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_170_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_170_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_170_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_170_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_170_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_170_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_170_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_170_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_170_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_170_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_170_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_170_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_170_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_171_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_171_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_171_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_171_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_171_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_171_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_171_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_171_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_171_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_171_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_171_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_171_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_171_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_171_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_171_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_171_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_171_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_171_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_171_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_171_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_172_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_172_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_172_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_172_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_172_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_172_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_172_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_172_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_172_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_172_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_172_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_172_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_172_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_172_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_172_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_172_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_172_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_172_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_172_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_172_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_173_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_173_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_173_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_173_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_173_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_173_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_173_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_173_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_173_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_173_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_173_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_173_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_173_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_173_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_173_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_173_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_173_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_173_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_173_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_173_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_174_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_174_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_174_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_174_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_174_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_174_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_174_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_174_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_174_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_174_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_174_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_174_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_174_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_174_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_174_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_174_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_174_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_174_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_174_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_174_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_175_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_175_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_175_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_175_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_175_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_175_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_175_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_175_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_175_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_175_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_175_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_175_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_175_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_175_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_175_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_175_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_175_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_175_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_175_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_175_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_176_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_176_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_176_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_176_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_176_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_176_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_176_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_176_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_176_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_176_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_176_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_176_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_176_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_176_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_176_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_176_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_176_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_176_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_176_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_176_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_177_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_177_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_177_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_177_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_177_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_177_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_177_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_177_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_177_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_177_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_177_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_177_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_177_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_177_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_177_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_177_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_177_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_177_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_177_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_177_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_178_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_178_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_178_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_178_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_178_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_178_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_178_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_178_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_178_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_178_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_178_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_178_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_178_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_178_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_178_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_178_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_178_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_178_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_178_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_178_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_179_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_179_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_179_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_179_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_179_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_179_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_179_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_179_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_179_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_179_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_179_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_179_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_179_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_179_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_179_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_179_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_179_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_179_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_179_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_179_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_180_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_180_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_180_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_180_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_180_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_180_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_180_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_180_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_180_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_180_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_180_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_180_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_180_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_180_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_180_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_180_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_180_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_180_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_180_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_180_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_181_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_181_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_181_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_181_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_181_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_181_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_181_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_181_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_181_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_181_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_181_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_181_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_181_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_181_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_181_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_181_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_181_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_181_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_181_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_181_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_182_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_182_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_182_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_182_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_182_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_182_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_182_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_182_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_182_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_182_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_182_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_182_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_182_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_182_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_182_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_182_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_182_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_182_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_182_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_182_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_183_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_183_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_183_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_183_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_183_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_183_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_183_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_183_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_183_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_183_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_183_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_183_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_183_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_183_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_183_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_183_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_183_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_183_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_183_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_183_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_184_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_184_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_184_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_184_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_184_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_184_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_184_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_184_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_184_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_184_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_184_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_184_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_184_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_184_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_184_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_184_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_184_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_184_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_184_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_184_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_185_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_185_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_185_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_185_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_185_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_185_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_185_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_185_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_185_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_185_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_185_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_185_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_185_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_185_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_185_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_185_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_185_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_185_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_185_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_185_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_186_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_186_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_186_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_186_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_186_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_186_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_186_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_186_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_186_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_186_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_186_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_186_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_186_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_186_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_186_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_186_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_186_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_186_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_186_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_186_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_187_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_187_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_187_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_187_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_187_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_187_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_187_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_187_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_187_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_187_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_187_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_187_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_187_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_187_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_187_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_187_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_187_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_187_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_187_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_187_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_188_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_188_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_188_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_188_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_188_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_188_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_188_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_188_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_188_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_188_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_188_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_188_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_188_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_188_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_188_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_188_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_188_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_188_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_188_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_188_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_189_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_189_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_189_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_189_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_189_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_189_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_189_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_189_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_189_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_189_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_189_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_189_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_189_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_189_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_189_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_189_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_189_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_189_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_189_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_189_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_190_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_190_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_190_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_190_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_190_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_190_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_190_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_190_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_190_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_190_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_190_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_190_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_190_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_190_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_190_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_190_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_190_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_190_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_190_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_190_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_191_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_191_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_191_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_191_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_191_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_191_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_191_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_191_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_191_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_191_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_191_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_191_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_191_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_191_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_191_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_191_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_191_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_191_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_191_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_191_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_192_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_192_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_192_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_192_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_192_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_192_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_192_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_192_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_192_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_192_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_192_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_192_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_192_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_192_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_192_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_192_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_192_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_192_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_192_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_192_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_193_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_193_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_193_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_193_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_193_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_193_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_193_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_193_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_193_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_193_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_193_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_193_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_193_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_193_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_193_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_193_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_193_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_193_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_193_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_193_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_194_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_194_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_194_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_194_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_194_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_194_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_194_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_194_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_194_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_194_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_194_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_194_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_194_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_194_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_194_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_194_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_194_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_194_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_194_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_194_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_195_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080a9e43)
// WARNING: Removing unreachable block (ram,0x080a9e50)

longlong inst_195_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_195_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080a9ef8)

longlong inst_195_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_195_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080a9fad)

longlong inst_195_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_195_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080aa062)
// WARNING: Removing unreachable block (ram,0x080aa06f)

longlong inst_195_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_195_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080aa117)

longlong inst_195_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_195_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080aa1cc)
// WARNING: Removing unreachable block (ram,0x080aa1d9)

longlong inst_195_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_195_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080aa281)
// WARNING: Removing unreachable block (ram,0x080aa28e)

longlong inst_195_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_195_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080aa336)

longlong inst_195_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_195_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080aa3eb)
// WARNING: Removing unreachable block (ram,0x080aa3f8)

longlong inst_195_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_195_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080aa4a0)
// WARNING: Removing unreachable block (ram,0x080aa4ad)

longlong inst_195_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_196_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080aa555)
// WARNING: Removing unreachable block (ram,0x080aa562)

longlong inst_196_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_196_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080aa60a)
// WARNING: Removing unreachable block (ram,0x080aa617)

longlong inst_196_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_196_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_196_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_196_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080aa781)

longlong inst_196_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_196_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080aa829)

longlong inst_196_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_196_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080aa8de)
// WARNING: Removing unreachable block (ram,0x080aa8eb)

longlong inst_196_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_196_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_196_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_196_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_196_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_196_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080aaafd)
// WARNING: Removing unreachable block (ram,0x080aab0a)

longlong inst_196_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_196_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_196_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_197_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080aac69)
// WARNING: Removing unreachable block (ram,0x080aac76)

longlong inst_197_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_197_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080aad20)
// WARNING: Removing unreachable block (ram,0x080aad2d)

longlong inst_197_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_197_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_197_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_197_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080aae8e)
// WARNING: Removing unreachable block (ram,0x080aae9b)

longlong inst_197_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_197_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080aaf52)

longlong inst_197_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_197_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_197_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_197_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ab0c0)

longlong inst_197_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_197_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_197_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_197_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ab221)
// WARNING: Removing unreachable block (ram,0x080ab22e)

longlong inst_197_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_197_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ab2d8)
// WARNING: Removing unreachable block (ram,0x080ab2e5)

longlong inst_197_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_198_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ab38f)
// WARNING: Removing unreachable block (ram,0x080ab39c)

longlong inst_198_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_198_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ab453)

longlong inst_198_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_198_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ab50a)

longlong inst_198_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_198_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ab5b4)

longlong inst_198_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_198_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ab66b)

longlong inst_198_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_198_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ab72f)

longlong inst_198_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_198_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_198_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_198_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_198_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_198_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_198_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_198_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ab9fe)
// WARNING: Removing unreachable block (ram,0x080aba0b)

longlong inst_198_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_199_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_199_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_199_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_199_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_199_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080abc1d)
// WARNING: Removing unreachable block (ram,0x080abc2a)

longlong inst_199_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_199_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_199_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_199_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080abd94)

longlong inst_199_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_199_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080abe49)

longlong inst_199_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_199_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080abef1)

longlong inst_199_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_199_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080abfb3)

longlong inst_199_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_199_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ac068)

longlong inst_199_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_199_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ac110)

longlong inst_199_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_200_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ac1c5)
// WARNING: Removing unreachable block (ram,0x080ac1d2)

longlong inst_200_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_200_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ac27a)

longlong inst_200_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_200_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ac32f)

longlong inst_200_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_200_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ac3f1)

longlong inst_200_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_200_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ac499)
// WARNING: Removing unreachable block (ram,0x080ac4a6)

longlong inst_200_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_200_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ac54e)

longlong inst_200_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_200_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ac603)

longlong inst_200_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_200_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ac6b8)

longlong inst_200_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_200_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ac76d)

longlong inst_200_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_200_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ac82f)

longlong inst_200_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_201_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_201_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_201_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ac990)
// WARNING: Removing unreachable block (ram,0x080ac99d)

longlong inst_201_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_201_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080aca47)

longlong inst_201_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_201_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_201_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_201_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080acbb5)

longlong inst_201_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_201_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080acc6c)
// WARNING: Removing unreachable block (ram,0x080acc79)

longlong inst_201_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_201_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080acd23)
// WARNING: Removing unreachable block (ram,0x080acd30)

longlong inst_201_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_201_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080acdda)

longlong inst_201_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_201_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ace91)
// WARNING: Removing unreachable block (ram,0x080ace9e)

longlong inst_201_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_201_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080acf55)

longlong inst_201_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_202_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080acfff)

longlong inst_202_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_202_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ad0c3)

longlong inst_202_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_202_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_202_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_202_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_202_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_202_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ad2db)

longlong inst_202_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_202_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ad392)

longlong inst_202_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_202_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ad456)

longlong inst_202_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_202_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ad50d)

longlong inst_202_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_202_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ad5b7)
// WARNING: Removing unreachable block (ram,0x080ad5c4)

longlong inst_202_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_202_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_202_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_203_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ad727)
// WARNING: Removing unreachable block (ram,0x080ad734)

longlong inst_203_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_203_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ad7e0)

longlong inst_203_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_203_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ad899)
// WARNING: Removing unreachable block (ram,0x080ad8a6)

longlong inst_203_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_203_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_203_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_203_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ada18)

longlong inst_203_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_203_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080adac4)

longlong inst_203_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_203_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080adb7d)
// WARNING: Removing unreachable block (ram,0x080adb8a)

longlong inst_203_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_203_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080adc36)
// WARNING: Removing unreachable block (ram,0x080adc43)

longlong inst_203_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_203_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_203_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_203_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080adda8)
// WARNING: Removing unreachable block (ram,0x080addb5)

longlong inst_203_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_204_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ade61)
// WARNING: Removing unreachable block (ram,0x080ade6e)

longlong inst_204_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_204_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080adf1a)

longlong inst_204_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_204_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080adfe0)

longlong inst_204_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_204_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ae08c)

longlong inst_204_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_204_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ae145)
// WARNING: Removing unreachable block (ram,0x080ae152)

longlong inst_204_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_204_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_204_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_204_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ae2b7)
// WARNING: Removing unreachable block (ram,0x080ae2c4)

longlong inst_204_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_204_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_204_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_204_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_204_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_204_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ae4ef)

longlong inst_204_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_205_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ae599)

longlong inst_205_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_205_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_205_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_205_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ae707)

longlong inst_205_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_205_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ae7be)

longlong inst_205_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_205_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_205_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_205_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ae92c)
// WARNING: Removing unreachable block (ram,0x080ae939)

longlong inst_205_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_205_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ae9e3)
// WARNING: Removing unreachable block (ram,0x080ae9f0)

longlong inst_205_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_205_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_205_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_205_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_205_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_205_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080aec08)
// WARNING: Removing unreachable block (ram,0x080aec15)

longlong inst_205_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_206_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080aeccc)

longlong inst_206_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_206_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_206_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_206_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080aee3a)

longlong inst_206_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_206_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080aeee4)
// WARNING: Removing unreachable block (ram,0x080aeef1)

longlong inst_206_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_206_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080aef9b)

longlong inst_206_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_206_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080af05f)

longlong inst_206_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_206_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_206_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_206_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080af1c0)
// WARNING: Removing unreachable block (ram,0x080af1cd)

longlong inst_206_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_206_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_206_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_206_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080af33b)

longlong inst_206_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_207_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080af3e5)
// WARNING: Removing unreachable block (ram,0x080af3f2)

longlong inst_207_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_207_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080af49c)
// WARNING: Removing unreachable block (ram,0x080af4a9)

longlong inst_207_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_207_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_207_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_207_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080af60a)
// WARNING: Removing unreachable block (ram,0x080af617)

longlong inst_207_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_207_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080af6c1)

longlong inst_207_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_207_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080af778)
// WARNING: Removing unreachable block (ram,0x080af785)

longlong inst_207_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_207_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080af83c)

longlong inst_207_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_207_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080af8f3)

longlong inst_207_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_207_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_207_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_207_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_207_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_208_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080afb0b)

longlong inst_208_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_208_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_208_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_208_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080afc79)
// WARNING: Removing unreachable block (ram,0x080afc86)

longlong inst_208_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_208_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080afd3d)

longlong inst_208_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_208_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080afde7)
// WARNING: Removing unreachable block (ram,0x080afdf4)

longlong inst_208_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_208_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080afe9e)
// WARNING: Removing unreachable block (ram,0x080afeab)

longlong inst_208_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_208_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080aff55)

longlong inst_208_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_208_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b000c)
// WARNING: Removing unreachable block (ram,0x080b0019)

longlong inst_208_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_208_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b00c3)
// WARNING: Removing unreachable block (ram,0x080b00d0)

longlong inst_208_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_208_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b017a)

longlong inst_208_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_209_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b0240)

longlong inst_209_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_209_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b02ec)

longlong inst_209_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_209_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b03b2)

longlong inst_209_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_209_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_209_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_209_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b0524)

longlong inst_209_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_209_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_209_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_209_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b0689)

longlong inst_209_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_209_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b0742)
// WARNING: Removing unreachable block (ram,0x080b074f)

longlong inst_209_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_209_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_209_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_209_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b08b4)

longlong inst_209_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_210_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b096d)
// WARNING: Removing unreachable block (ram,0x080b097a)

longlong inst_210_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_210_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_210_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_210_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b0adf)

longlong inst_210_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_210_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_210_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_210_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_210_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_210_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b0d0a)
// WARNING: Removing unreachable block (ram,0x080b0d17)

longlong inst_210_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_210_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b0dc3)
// WARNING: Removing unreachable block (ram,0x080b0dd0)

longlong inst_210_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_210_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_210_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_210_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_210_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_210_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b0fee)
// WARNING: Removing unreachable block (ram,0x080b0ffb)

longlong inst_210_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_211_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b10a5)
// WARNING: Removing unreachable block (ram,0x080b10b2)

longlong inst_211_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_211_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b115c)

longlong inst_211_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_211_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b1213)

longlong inst_211_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_211_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b12d7)

longlong inst_211_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_211_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b1381)
// WARNING: Removing unreachable block (ram,0x080b138e)

longlong inst_211_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_211_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b1438)
// WARNING: Removing unreachable block (ram,0x080b1445)

longlong inst_211_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_211_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b14ef)
// WARNING: Removing unreachable block (ram,0x080b14fc)

longlong inst_211_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_211_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b15b3)

longlong inst_211_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_211_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b165d)
// WARNING: Removing unreachable block (ram,0x080b166a)

longlong inst_211_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_211_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b1714)

longlong inst_211_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_212_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b17cb)
// WARNING: Removing unreachable block (ram,0x080b17d8)

longlong inst_212_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_212_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b1882)
// WARNING: Removing unreachable block (ram,0x080b188f)

longlong inst_212_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_212_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b1946)

longlong inst_212_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_212_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b19f0)
// WARNING: Removing unreachable block (ram,0x080b19fd)

longlong inst_212_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_212_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b1aa7)
// WARNING: Removing unreachable block (ram,0x080b1ab4)

longlong inst_212_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_212_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b1b5e)
// WARNING: Removing unreachable block (ram,0x080b1b6b)

longlong inst_212_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_212_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b1c15)

longlong inst_212_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_212_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b1cd9)

longlong inst_212_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_212_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_212_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_212_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_212_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_213_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_213_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_213_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_213_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_213_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_213_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_213_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_213_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_213_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_213_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_213_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_213_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_213_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_213_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_213_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_213_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_213_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_213_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_213_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_213_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_214_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_214_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_214_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_214_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_214_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_214_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_214_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_214_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_214_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_214_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_214_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_214_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_214_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_214_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_214_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_214_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_214_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_214_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_214_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_214_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_215_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_215_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_215_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_215_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_215_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_215_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_215_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_215_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_215_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_215_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_215_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_215_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_215_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_215_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_215_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_215_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_215_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_215_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_215_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_215_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_216_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_216_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_216_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_216_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_216_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_216_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_216_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_216_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_216_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_216_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_216_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_216_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_216_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_216_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_216_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_216_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_216_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_216_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_216_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_216_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_217_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_217_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_217_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_217_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_217_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_217_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_217_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_217_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_217_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_217_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_217_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_217_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_217_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_217_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_217_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_217_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_217_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_217_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_217_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_217_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_218_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_218_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_218_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_218_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_218_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_218_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_218_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_218_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_218_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_218_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_218_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_218_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_218_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_218_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_218_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_218_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_218_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_218_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_218_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_218_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_219_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_219_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_219_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_219_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_219_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_219_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_219_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_219_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_219_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_219_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_219_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_219_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_219_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_219_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_219_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_219_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_219_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_219_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_219_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_219_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_220_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_220_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_220_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_220_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_220_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_220_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_220_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_220_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_220_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_220_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_220_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_220_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_220_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_220_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_220_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_220_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_220_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_220_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_220_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_220_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_221_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_221_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_221_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_221_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_221_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_221_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_221_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_221_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_221_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_221_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_221_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_221_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_221_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_221_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_221_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_221_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_221_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_221_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_221_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_221_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_222_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_222_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_222_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_222_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_222_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_222_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_222_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_222_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_222_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_222_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_222_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_222_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_222_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_222_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_222_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_222_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_222_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_222_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_222_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_222_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_223_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_223_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_223_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_223_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_223_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_223_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_223_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_223_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_223_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_223_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_223_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_223_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_223_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_223_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_223_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_223_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_223_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_223_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_223_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_223_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_224_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_224_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_224_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_224_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_224_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_224_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_224_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_224_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_224_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_224_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_224_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_224_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_224_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_224_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_224_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_224_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_224_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_224_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_224_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_224_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_225_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b6d2b)
// WARNING: Removing unreachable block (ram,0x080b6d3b)

longlong inst_225_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_225_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b6dd2)

longlong inst_225_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_225_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b6eaa)
// WARNING: Removing unreachable block (ram,0x080b6ec7)

longlong inst_225_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_225_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b6f7d)

longlong inst_225_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_225_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b7043)
// WARNING: Removing unreachable block (ram,0x080b7024)
// WARNING: Removing unreachable block (ram,0x080b7036)
// WARNING: Removing unreachable block (ram,0x080b7053)

longlong inst_225_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_225_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b70fc)
// WARNING: Removing unreachable block (ram,0x080b7109)

longlong inst_225_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_225_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b71cf)
// WARNING: Removing unreachable block (ram,0x080b71b0)
// WARNING: Removing unreachable block (ram,0x080b71df)

longlong inst_225_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_225_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b7288)
// WARNING: Removing unreachable block (ram,0x080b7276)
// WARNING: Removing unreachable block (ram,0x080b72a5)

longlong inst_225_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_225_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b735b)
// WARNING: Removing unreachable block (ram,0x080b736b)

longlong inst_225_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_225_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b7414)
// WARNING: Removing unreachable block (ram,0x080b7431)

longlong inst_225_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_226_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b74f3)
// WARNING: Removing unreachable block (ram,0x080b74cc)
// WARNING: Removing unreachable block (ram,0x080b7503)

undefined8 inst_226_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_226_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b759e)
// WARNING: Removing unreachable block (ram,0x080b75ab)
// WARNING: Removing unreachable block (ram,0x080b75c5)

undefined8 inst_226_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_226_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b7670)
// WARNING: Removing unreachable block (ram,0x080b767d)

undefined8 inst_226_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_226_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b7779)

undefined8 inst_226_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_226_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b7814)
// WARNING: Removing unreachable block (ram,0x080b7821)
// WARNING: Removing unreachable block (ram,0x080b783b)

undefined8 inst_226_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_226_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b78f3)

undefined8 inst_226_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_226_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b79b8)
// WARNING: Removing unreachable block (ram,0x080b79c5)

undefined8 inst_226_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_226_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b7ab1)
// WARNING: Removing unreachable block (ram,0x080b7a8a)
// WARNING: Removing unreachable block (ram,0x080b7a97)
// WARNING: Removing unreachable block (ram,0x080b7ac1)

undefined8 inst_226_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_226_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b7b69)
// WARNING: Removing unreachable block (ram,0x080b7b5c)
// WARNING: Removing unreachable block (ram,0x080b7b93)

undefined8 inst_226_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_226_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b7c65)

undefined8 inst_226_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_227_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b7d0b)
// WARNING: Removing unreachable block (ram,0x080b7cfe)
// WARNING: Removing unreachable block (ram,0x080b7d35)

undefined8 inst_227_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_227_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b7ddb)

undefined8 inst_227_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_227_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b7e9e)
// WARNING: Removing unreachable block (ram,0x080b7eab)

undefined8 inst_227_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_227_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b7f7b)

undefined8 inst_227_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_227_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b8065)
// WARNING: Removing unreachable block (ram,0x080b804b)
// WARNING: Removing unreachable block (ram,0x080b8075)

undefined8 inst_227_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_227_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b8135)
// WARNING: Removing unreachable block (ram,0x080b810e)
// WARNING: Removing unreachable block (ram,0x080b811b)
// WARNING: Removing unreachable block (ram,0x080b8145)

undefined8 inst_227_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_227_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b8205)
// WARNING: Removing unreachable block (ram,0x080b81de)
// WARNING: Removing unreachable block (ram,0x080b81eb)
// WARNING: Removing unreachable block (ram,0x080b8215)

undefined8 inst_227_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_227_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b82d5)
// WARNING: Removing unreachable block (ram,0x080b82ae)
// WARNING: Removing unreachable block (ram,0x080b82bb)
// WARNING: Removing unreachable block (ram,0x080b82e5)

undefined8 inst_227_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_227_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b838b)

undefined8 inst_227_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_227_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b845b)
// WARNING: Removing unreachable block (ram,0x080b8475)

undefined8 inst_227_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_228_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b8531)

undefined8 inst_228_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_228_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b8620)
// WARNING: Removing unreachable block (ram,0x080b85f9)
// WARNING: Removing unreachable block (ram,0x080b8606)
// WARNING: Removing unreachable block (ram,0x080b8630)

undefined8 inst_228_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_228_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b86cf)
// WARNING: Removing unreachable block (ram,0x080b86f6)

undefined8 inst_228_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_228_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b87a5)
// WARNING: Removing unreachable block (ram,0x080b87b2)

undefined8 inst_228_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0x10);
}



longlong inst_228_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b887a)
// WARNING: Removing unreachable block (ram,0x080b8887)
// WARNING: Removing unreachable block (ram,0x080b88a1)

undefined8 inst_228_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_228_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b895c)

undefined8 inst_228_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0xc);
}



longlong inst_228_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b8a24)
// WARNING: Removing unreachable block (ram,0x080b8a4b)

undefined8 inst_228_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_228_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b8b06)
// WARNING: Removing unreachable block (ram,0x080b8b30)

undefined8 inst_228_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_228_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b8bcf)
// WARNING: Removing unreachable block (ram,0x080b8bf6)

undefined8 inst_228_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0xc);
}



longlong inst_228_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b8ccb)
// WARNING: Removing unreachable block (ram,0x080b8cb1)
// WARNING: Removing unreachable block (ram,0x080b8cdb)

undefined8 inst_228_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_229_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b8d9d)
// WARNING: Removing unreachable block (ram,0x080b8d76)
// WARNING: Removing unreachable block (ram,0x080b8d83)
// WARNING: Removing unreachable block (ram,0x080b8dad)

undefined8 inst_229_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_229_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b8e6f)
// WARNING: Removing unreachable block (ram,0x080b8e48)
// WARNING: Removing unreachable block (ram,0x080b8e55)
// WARNING: Removing unreachable block (ram,0x080b8e7f)

undefined8 inst_229_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_229_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_229_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0xc);
}



longlong inst_229_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b9013)
// WARNING: Removing unreachable block (ram,0x080b8fec)
// WARNING: Removing unreachable block (ram,0x080b8ff9)
// WARNING: Removing unreachable block (ram,0x080b9023)

undefined8 inst_229_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_229_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b90be)
// WARNING: Removing unreachable block (ram,0x080b90cb)
// WARNING: Removing unreachable block (ram,0x080b90e5)

undefined8 inst_229_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0x10);
}



longlong inst_229_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b91c7)

undefined8 inst_229_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_229_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b9289)
// WARNING: Removing unreachable block (ram,0x080b9262)
// WARNING: Removing unreachable block (ram,0x080b926f)
// WARNING: Removing unreachable block (ram,0x080b9299)

undefined8 inst_229_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_229_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b9341)

undefined8 inst_229_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_229_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b9413)
// WARNING: Removing unreachable block (ram,0x080b942d)

undefined8 inst_229_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_229_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b94ff)
// WARNING: Removing unreachable block (ram,0x080b94d8)
// WARNING: Removing unreachable block (ram,0x080b94e5)
// WARNING: Removing unreachable block (ram,0x080b950f)

undefined8 inst_229_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_230_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b95d7)
// WARNING: Removing unreachable block (ram,0x080b95b0)
// WARNING: Removing unreachable block (ram,0x080b95bd)
// WARNING: Removing unreachable block (ram,0x080b95e7)

undefined8 inst_230_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_230_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b9695)
// WARNING: Removing unreachable block (ram,0x080b9688)
// WARNING: Removing unreachable block (ram,0x080b96bf)

undefined8 inst_230_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x14);
}



longlong inst_230_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b9787)
// WARNING: Removing unreachable block (ram,0x080b976d)
// WARNING: Removing unreachable block (ram,0x080b9797)

undefined8 inst_230_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_230_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b9845)
// WARNING: Removing unreachable block (ram,0x080b986f)

undefined8 inst_230_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_230_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b991c)
// WARNING: Removing unreachable block (ram,0x080b990f)
// WARNING: Removing unreachable block (ram,0x080b9946)

undefined8 inst_230_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_230_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b99f4)
// WARNING: Removing unreachable block (ram,0x080b99e7)
// WARNING: Removing unreachable block (ram,0x080b9a1e)

undefined8 inst_230_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x14);
}



longlong inst_230_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_230_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_230_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b9ba4)

undefined8 inst_230_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0x10);
}



longlong inst_230_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b9c6f)
// WARNING: Removing unreachable block (ram,0x080b9c7c)
// WARNING: Removing unreachable block (ram,0x080b9c96)

undefined8 inst_230_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0x10);
}



longlong inst_230_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b9d6e)
// WARNING: Removing unreachable block (ram,0x080b9d47)
// WARNING: Removing unreachable block (ram,0x080b9d54)
// WARNING: Removing unreachable block (ram,0x080b9d7e)

undefined8 inst_230_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x14);
}



longlong inst_231_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b9e24)

undefined8 inst_231_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_231_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b9ef4)

undefined8 inst_231_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_231_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b9fb7)
// WARNING: Removing unreachable block (ram,0x080b9fc4)

undefined8 inst_231_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_231_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ba087)
// WARNING: Removing unreachable block (ram,0x080ba0ae)

undefined8 inst_231_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_231_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ba164)
// WARNING: Removing unreachable block (ram,0x080ba18e)

undefined8 inst_231_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_231_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_231_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_231_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ba304)

undefined8 inst_231_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_231_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ba3ee)
// WARNING: Removing unreachable block (ram,0x080ba3c7)
// WARNING: Removing unreachable block (ram,0x080ba3d4)
// WARNING: Removing unreachable block (ram,0x080ba3fe)

undefined8 inst_231_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_231_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ba497)
// WARNING: Removing unreachable block (ram,0x080ba4be)

undefined8 inst_231_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_231_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ba58e)
// WARNING: Removing unreachable block (ram,0x080ba567)
// WARNING: Removing unreachable block (ram,0x080ba59e)

undefined8 inst_231_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_232_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ba672)

undefined8 inst_232_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_232_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ba71c)
// WARNING: Removing unreachable block (ram,0x080ba70f)
// WARNING: Removing unreachable block (ram,0x080ba746)

undefined8 inst_232_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_232_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ba7e3)
// WARNING: Removing unreachable block (ram,0x080ba7f0)
// WARNING: Removing unreachable block (ram,0x080ba80a)

undefined8 inst_232_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_232_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ba8b7)
// WARNING: Removing unreachable block (ram,0x080ba8c4)
// WARNING: Removing unreachable block (ram,0x080ba8de)

undefined8 inst_232_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_232_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ba997)

undefined8 inst_232_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_232_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080baa6b)

undefined8 inst_232_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_232_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bab32)
// WARNING: Removing unreachable block (ram,0x080bab3f)

undefined8 inst_232_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_232_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bac2d)
// WARNING: Removing unreachable block (ram,0x080bac06)
// WARNING: Removing unreachable block (ram,0x080bac13)
// WARNING: Removing unreachable block (ram,0x080bac3d)

undefined8 inst_232_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_232_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bacda)
// WARNING: Removing unreachable block (ram,0x080bace7)

undefined8 inst_232_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_232_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080badd3)
// WARNING: Removing unreachable block (ram,0x080badac)
// WARNING: Removing unreachable block (ram,0x080badb9)
// WARNING: Removing unreachable block (ram,0x080bade3)

undefined8 inst_232_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_233_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bae8b)

undefined8 inst_233_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_233_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080baf5d)

undefined8 inst_233_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_233_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bb02f)
// WARNING: Removing unreachable block (ram,0x080bb059)

undefined8 inst_233_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_233_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bb101)

undefined8 inst_233_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_233_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bb1c6)
// WARNING: Removing unreachable block (ram,0x080bb1d3)
// WARNING: Removing unreachable block (ram,0x080bb1ed)

undefined8 inst_233_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_233_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bb298)
// WARNING: Removing unreachable block (ram,0x080bb2a5)

undefined8 inst_233_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_233_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bb377)

undefined8 inst_233_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_233_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bb449)
// WARNING: Removing unreachable block (ram,0x080bb43c)
// WARNING: Removing unreachable block (ram,0x080bb473)

undefined8 inst_233_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_233_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bb51b)
// WARNING: Removing unreachable block (ram,0x080bb545)

undefined8 inst_233_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_233_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bb5e0)
// WARNING: Removing unreachable block (ram,0x080bb607)

undefined8 inst_233_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_234_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bb6df)
// WARNING: Removing unreachable block (ram,0x080bb6b8)
// WARNING: Removing unreachable block (ram,0x080bb6ef)

undefined8 inst_234_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_234_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bb79d)
// WARNING: Removing unreachable block (ram,0x080bb7c7)

undefined8 inst_234_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x14);
}



longlong inst_234_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bb874)
// WARNING: Removing unreachable block (ram,0x080bb88e)

undefined8 inst_234_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_234_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bb966)
// WARNING: Removing unreachable block (ram,0x080bb93f)
// WARNING: Removing unreachable block (ram,0x080bb976)

undefined8 inst_234_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_234_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bba17)
// WARNING: Removing unreachable block (ram,0x080bba24)

undefined8 inst_234_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_234_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bbafc)
// WARNING: Removing unreachable block (ram,0x080bbaef)
// WARNING: Removing unreachable block (ram,0x080bbb26)

undefined8 inst_234_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_234_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bbbd4)
// WARNING: Removing unreachable block (ram,0x080bbbee)

undefined8 inst_234_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0xc);
}



longlong inst_234_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bbcc6)
// WARNING: Removing unreachable block (ram,0x080bbc9f)
// WARNING: Removing unreachable block (ram,0x080bbcac)
// WARNING: Removing unreachable block (ram,0x080bbcd6)

undefined8 inst_234_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_234_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bbd77)
// WARNING: Removing unreachable block (ram,0x080bbd84)
// WARNING: Removing unreachable block (ram,0x080bbd9e)

undefined8 inst_234_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_234_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bbe5c)
// WARNING: Removing unreachable block (ram,0x080bbe76)

undefined8 inst_234_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0x10);
}



longlong inst_235_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bbf23)
// WARNING: Removing unreachable block (ram,0x080bbf30)
// WARNING: Removing unreachable block (ram,0x080bbf4a)

undefined8 inst_235_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0xc);
}



longlong inst_235_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bc004)
// WARNING: Removing unreachable block (ram,0x080bbff7)
// WARNING: Removing unreachable block (ram,0x080bc02e)

undefined8 inst_235_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_235_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bc0d8)
// WARNING: Removing unreachable block (ram,0x080bc0f2)

undefined8 inst_235_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0x10);
}



longlong inst_235_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bc1ac)

undefined8 inst_235_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_235_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bc280)
// WARNING: Removing unreachable block (ram,0x080bc273)
// WARNING: Removing unreachable block (ram,0x080bc2aa)

undefined8 inst_235_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_235_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bc354)
// WARNING: Removing unreachable block (ram,0x080bc37e)

undefined8 inst_235_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_235_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bc41b)
// WARNING: Removing unreachable block (ram,0x080bc428)

undefined8 inst_235_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_235_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bc4fc)

undefined8 inst_235_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_235_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bc5d0)
// WARNING: Removing unreachable block (ram,0x080bc5c3)
// WARNING: Removing unreachable block (ram,0x080bc5fa)

undefined8 inst_235_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_235_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bc6a4)

undefined8 inst_235_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_236_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bc797)
// WARNING: Removing unreachable block (ram,0x080bc77d)
// WARNING: Removing unreachable block (ram,0x080bc7a7)

undefined8 inst_236_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_236_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bc857)
// WARNING: Removing unreachable block (ram,0x080bc881)

undefined8 inst_236_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x14);
}



longlong inst_236_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bc94b)
// WARNING: Removing unreachable block (ram,0x080bc924)
// WARNING: Removing unreachable block (ram,0x080bc931)
// WARNING: Removing unreachable block (ram,0x080bc95b)

undefined8 inst_236_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_236_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bc9fe)
// WARNING: Removing unreachable block (ram,0x080bca0b)
// WARNING: Removing unreachable block (ram,0x080bca25)

undefined8 inst_236_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0x10);
}



longlong inst_236_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bcae5)
// WARNING: Removing unreachable block (ram,0x080bcaff)

undefined8 inst_236_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0x10);
}



longlong inst_236_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bcbb1)
// WARNING: Removing unreachable block (ram,0x080bcbd8)

undefined8 inst_236_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0x10);
}



longlong inst_236_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bccc2)

undefined8 inst_236_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_236_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bcd8b)
// WARNING: Removing unreachable block (ram,0x080bcd64)
// WARNING: Removing unreachable block (ram,0x080bcd71)
// WARNING: Removing unreachable block (ram,0x080bcd9b)

undefined8 inst_236_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x14);
}



longlong inst_236_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bce4b)
// WARNING: Removing unreachable block (ram,0x080bce65)

undefined8 inst_236_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_236_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bcf3f)
// WARNING: Removing unreachable block (ram,0x080bcf18)
// WARNING: Removing unreachable block (ram,0x080bcf25)
// WARNING: Removing unreachable block (ram,0x080bcf4f)

undefined8 inst_236_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x14);
}



longlong inst_237_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bcfea)
// WARNING: Removing unreachable block (ram,0x080bcff7)
// WARNING: Removing unreachable block (ram,0x080bd011)

undefined8 inst_237_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_237_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bd0c9)
// WARNING: Removing unreachable block (ram,0x080bd0f3)

undefined8 inst_237_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_237_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bd18e)
// WARNING: Removing unreachable block (ram,0x080bd19b)
// WARNING: Removing unreachable block (ram,0x080bd1b5)

undefined8 inst_237_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_237_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bd260)
// WARNING: Removing unreachable block (ram,0x080bd26d)
// WARNING: Removing unreachable block (ram,0x080bd287)

undefined8 inst_237_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_237_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bd332)
// WARNING: Removing unreachable block (ram,0x080bd359)

undefined8 inst_237_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0xc);
}



longlong inst_237_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bd42b)
// WARNING: Removing unreachable block (ram,0x080bd411)
// WARNING: Removing unreachable block (ram,0x080bd43b)

undefined8 inst_237_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_237_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bd4e3)
// WARNING: Removing unreachable block (ram,0x080bd4fd)

undefined8 inst_237_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0xc);
}



longlong inst_237_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bd5b5)

undefined8 inst_237_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_237_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bd67a)
// WARNING: Removing unreachable block (ram,0x080bd687)
// WARNING: Removing unreachable block (ram,0x080bd6a1)

undefined8 inst_237_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_237_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bd773)
// WARNING: Removing unreachable block (ram,0x080bd74c)
// WARNING: Removing unreachable block (ram,0x080bd759)
// WARNING: Removing unreachable block (ram,0x080bd783)

undefined8 inst_237_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_238_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bd857)

undefined8 inst_238_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_238_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bd91b)
// WARNING: Removing unreachable block (ram,0x080bd8f4)
// WARNING: Removing unreachable block (ram,0x080bd901)
// WARNING: Removing unreachable block (ram,0x080bd92b)

undefined8 inst_238_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_238_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bd9c8)
// WARNING: Removing unreachable block (ram,0x080bd9d5)

undefined8 inst_238_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_238_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bda9c)
// WARNING: Removing unreachable block (ram,0x080bdac3)

undefined8 inst_238_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_238_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bdba7)

undefined8 inst_238_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_238_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bdc50)
// WARNING: Removing unreachable block (ram,0x080bdc7a)

undefined8 inst_238_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_238_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bdd24)
// WARNING: Removing unreachable block (ram,0x080bdd3e)

undefined8 inst_238_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_238_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bddeb)
// WARNING: Removing unreachable block (ram,0x080bddf8)

undefined8 inst_238_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_238_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bdee6)
// WARNING: Removing unreachable block (ram,0x080bdebf)
// WARNING: Removing unreachable block (ram,0x080bdef6)

undefined8 inst_238_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_238_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bdfa0)

undefined8 inst_238_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_239_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080be065)
// WARNING: Removing unreachable block (ram,0x080be072)
// WARNING: Removing unreachable block (ram,0x080be08c)

undefined8 inst_239_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_239_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080be15e)
// WARNING: Removing unreachable block (ram,0x080be137)
// WARNING: Removing unreachable block (ram,0x080be144)
// WARNING: Removing unreachable block (ram,0x080be16e)

undefined8 inst_239_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_239_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080be209)
// WARNING: Removing unreachable block (ram,0x080be216)
// WARNING: Removing unreachable block (ram,0x080be230)

undefined8 inst_239_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_239_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080be312)

undefined8 inst_239_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_239_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080be3d4)
// WARNING: Removing unreachable block (ram,0x080be3ad)
// WARNING: Removing unreachable block (ram,0x080be3ba)
// WARNING: Removing unreachable block (ram,0x080be3e4)

undefined8 inst_239_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_239_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080be48c)
// WARNING: Removing unreachable block (ram,0x080be4a6)

undefined8 inst_239_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_239_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080be578)
// WARNING: Removing unreachable block (ram,0x080be551)
// WARNING: Removing unreachable block (ram,0x080be55e)
// WARNING: Removing unreachable block (ram,0x080be588)

undefined8 inst_239_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_239_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080be623)
// WARNING: Removing unreachable block (ram,0x080be64a)

undefined8 inst_239_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_239_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080be72c)

undefined8 inst_239_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_239_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080be7ee)
// WARNING: Removing unreachable block (ram,0x080be7c7)
// WARNING: Removing unreachable block (ram,0x080be7fe)

undefined8 inst_239_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_240_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080be8c6)
// WARNING: Removing unreachable block (ram,0x080be89f)
// WARNING: Removing unreachable block (ram,0x080be8d6)

undefined8 inst_240_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_240_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080be984)
// WARNING: Removing unreachable block (ram,0x080be9ae)

undefined8 inst_240_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_240_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bea86)

undefined8 inst_240_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x14);
}



longlong inst_240_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080beb34)

undefined8 inst_240_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_240_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bec26)
// WARNING: Removing unreachable block (ram,0x080bebff)
// WARNING: Removing unreachable block (ram,0x080bec36)

undefined8 inst_240_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_240_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_240_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0x10);
}



longlong inst_240_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bedaf)
// WARNING: Removing unreachable block (ram,0x080bedbc)
// WARNING: Removing unreachable block (ram,0x080bedd6)

undefined8 inst_240_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_240_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bee93)
// WARNING: Removing unreachable block (ram,0x080beead)

undefined8 inst_240_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_240_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bef5d)
// WARNING: Removing unreachable block (ram,0x080bef6a)
// WARNING: Removing unreachable block (ram,0x080bef84)

undefined8 inst_240_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0x10);
}



longlong inst_240_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bf035)
// WARNING: Removing unreachable block (ram,0x080bf042)
// WARNING: Removing unreachable block (ram,0x080bf05c)

undefined8 inst_240_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0x10);
}



longlong inst_241_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bf130)
// WARNING: Removing unreachable block (ram,0x080bf109)
// WARNING: Removing unreachable block (ram,0x080bf140)

undefined8 inst_241_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_241_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bf204)
// WARNING: Removing unreachable block (ram,0x080bf1dd)
// WARNING: Removing unreachable block (ram,0x080bf1ea)
// WARNING: Removing unreachable block (ram,0x080bf214)

undefined8 inst_241_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_241_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bf2be)
// WARNING: Removing unreachable block (ram,0x080bf2b1)
// WARNING: Removing unreachable block (ram,0x080bf2e8)

undefined8 inst_241_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x14);
}



longlong inst_241_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bf392)
// WARNING: Removing unreachable block (ram,0x080bf385)
// WARNING: Removing unreachable block (ram,0x080bf3bc)

undefined8 inst_241_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_241_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bf480)
// WARNING: Removing unreachable block (ram,0x080bf459)
// WARNING: Removing unreachable block (ram,0x080bf466)
// WARNING: Removing unreachable block (ram,0x080bf490)

undefined8 inst_241_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_241_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bf554)
// WARNING: Removing unreachable block (ram,0x080bf52d)
// WARNING: Removing unreachable block (ram,0x080bf53a)
// WARNING: Removing unreachable block (ram,0x080bf564)

undefined8 inst_241_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_241_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bf601)
// WARNING: Removing unreachable block (ram,0x080bf628)

undefined8 inst_241_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_241_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bf6e2)
// WARNING: Removing unreachable block (ram,0x080bf70c)

undefined8 inst_241_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_241_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bf7d0)
// WARNING: Removing unreachable block (ram,0x080bf7a9)
// WARNING: Removing unreachable block (ram,0x080bf7b6)
// WARNING: Removing unreachable block (ram,0x080bf7e0)

undefined8 inst_241_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_241_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bf88a)

undefined8 inst_241_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0xc);
}



longlong inst_242_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bf97e)
// WARNING: Removing unreachable block (ram,0x080bf957)
// WARNING: Removing unreachable block (ram,0x080bf98e)

undefined8 inst_242_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_242_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bfa31)
// WARNING: Removing unreachable block (ram,0x080bfa3e)

undefined8 inst_242_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_242_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bfb18)
// WARNING: Removing unreachable block (ram,0x080bfb0b)
// WARNING: Removing unreachable block (ram,0x080bfb42)

undefined8 inst_242_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_242_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bfbf2)
// WARNING: Removing unreachable block (ram,0x080bfc1c)

undefined8 inst_242_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_242_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bfccb)
// WARNING: Removing unreachable block (ram,0x080bfcbe)
// WARNING: Removing unreachable block (ram,0x080bfcf5)

undefined8 inst_242_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x14);
}



longlong inst_242_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bfda5)
// WARNING: Removing unreachable block (ram,0x080bfd98)
// WARNING: Removing unreachable block (ram,0x080bfdcf)

undefined8 inst_242_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_242_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_242_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_242_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bff59)
// WARNING: Removing unreachable block (ram,0x080bff4c)
// WARNING: Removing unreachable block (ram,0x080bff83)

undefined8 inst_242_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_242_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_242_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_242_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c010d)

undefined8 inst_242_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_243_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c01df)
// WARNING: Removing unreachable block (ram,0x080c01d2)
// WARNING: Removing unreachable block (ram,0x080c0209)

undefined8 inst_243_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_243_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c02cb)
// WARNING: Removing unreachable block (ram,0x080c02a4)
// WARNING: Removing unreachable block (ram,0x080c02db)

undefined8 inst_243_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_243_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c0376)
// WARNING: Removing unreachable block (ram,0x080c039d)

undefined8 inst_243_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0x10);
}



longlong inst_243_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c046f)
// WARNING: Removing unreachable block (ram,0x080c0448)
// WARNING: Removing unreachable block (ram,0x080c0455)
// WARNING: Removing unreachable block (ram,0x080c047f)

undefined8 inst_243_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_243_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c0527)

undefined8 inst_243_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_243_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c05f9)

undefined8 inst_243_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_243_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c06be)
// WARNING: Removing unreachable block (ram,0x080c06cb)
// WARNING: Removing unreachable block (ram,0x080c06e5)

undefined8 inst_243_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_243_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c07b7)
// WARNING: Removing unreachable block (ram,0x080c0790)
// WARNING: Removing unreachable block (ram,0x080c079d)
// WARNING: Removing unreachable block (ram,0x080c07c7)

undefined8 inst_243_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_243_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c0862)
// WARNING: Removing unreachable block (ram,0x080c086f)
// WARNING: Removing unreachable block (ram,0x080c0889)

undefined8 inst_243_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0xc);
}



longlong inst_243_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c0934)
// WARNING: Removing unreachable block (ram,0x080c095b)

undefined8 inst_243_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0x10);
}



longlong inst_244_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_244_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_244_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_244_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_244_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_244_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_244_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_244_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_244_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_244_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_244_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_244_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_244_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_244_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_244_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_244_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_244_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_244_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_244_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_244_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_245_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_245_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_245_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_245_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_245_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_245_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_245_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_245_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_245_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_245_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_245_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_245_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_245_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_245_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_245_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_245_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_245_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_245_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_245_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_245_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_246_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_246_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_246_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_246_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_246_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_246_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_246_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_246_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_246_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_246_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_246_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_246_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_246_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_246_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_246_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_246_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_246_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_246_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_246_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_246_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_247_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_247_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_247_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_247_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_247_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_247_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_247_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_247_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_247_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_247_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_247_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_247_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_247_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_247_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_247_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_247_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_247_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_247_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_247_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_247_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_248_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_248_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_248_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_248_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_248_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_248_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_248_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_248_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_248_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_248_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_248_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_248_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_248_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_248_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_248_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_248_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_248_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_248_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_248_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_248_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_249_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_249_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_249_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_249_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_249_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_249_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_249_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_249_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_249_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_249_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_249_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_249_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_249_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_249_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_249_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_249_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_249_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_249_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_249_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_249_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_250_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_250_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_250_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_250_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_250_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_250_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_250_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_250_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_250_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_250_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_250_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_250_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_250_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_250_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_250_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_250_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_250_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_250_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_250_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_250_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_251_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_251_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_251_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_251_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_251_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_251_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_251_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_251_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_251_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_251_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_251_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_251_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_251_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_251_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_251_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_251_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_251_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_251_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_251_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_251_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_252_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_252_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_252_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_252_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_252_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_252_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_252_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_252_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_252_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_252_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_252_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_252_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_252_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_252_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_252_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_252_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_252_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_252_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_252_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_252_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_253_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_253_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_253_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_253_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_253_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_253_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_253_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_253_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_253_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_253_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_253_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_253_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_253_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_253_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_253_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_253_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_253_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_253_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_253_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_253_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_254_values_var_0(void)

{
  undefined4 in_EDX;
  undefined in_PF;
  
  return CONCAT44(in_EDX,((uint)CONCAT11(in_PF,7) | 0x6d040000) + 0x92fbfff9);
}



longlong inst_254_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_254_values_var_1(void)

{
  undefined4 in_EDX;
  undefined in_PF;
  
  return CONCAT44(in_EDX,CONCAT22(0x8ed5,CONCAT11(in_PF,0x65)) + 0x712aff9b);
}



longlong inst_254_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_254_values_var_2(void)

{
  undefined4 in_EDX;
  undefined in_PF;
  
  return CONCAT44(in_EDX,CONCAT31(0x995733,in_PF) + 0x66a8ccff);
}



longlong inst_254_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_254_values_var_3(void)

{
  undefined4 in_EDX;
  undefined in_PF;
  
  return CONCAT44(in_EDX,CONCAT31(0x661853,in_PF) + -0x66185300);
}



longlong inst_254_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_254_values_var_4(void)

{
  undefined4 in_EDX;
  undefined in_PF;
  
  return CONCAT44(in_EDX,CONCAT31(0x893791,in_PF) + 0x76c86f00);
}



longlong inst_254_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_254_values_var_5(void)

{
  undefined4 in_EDX;
  undefined in_PF;
  
  return CONCAT44(in_EDX,CONCAT22(0x3e25,CONCAT11(in_PF,0xaf)) + -0x3e2501af);
}



longlong inst_254_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_254_values_var_6(void)

{
  undefined4 in_EDX;
  undefined in_PF;
  
  return CONCAT44(in_EDX,CONCAT22(0xeab1,CONCAT11(in_PF,0x71)) + 0x154eff8f);
}



longlong inst_254_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_254_values_var_7(void)

{
  undefined4 in_EDX;
  undefined in_PF;
  
  return CONCAT44(in_EDX,CONCAT22(0xcedc,CONCAT11(in_PF,0x92)) + 0x3123fe6e);
}



longlong inst_254_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_254_values_var_8(void)

{
  undefined4 in_EDX;
  undefined in_PF;
  
  return CONCAT44(in_EDX,CONCAT31(0x713e57,in_PF) + -0x713e5700);
}



longlong inst_254_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_254_values_var_9(void)

{
  undefined4 in_EDX;
  undefined in_PF;
  
  return CONCAT44(in_EDX,CONCAT22(0x9cf4,CONCAT11(in_PF,0x8c)) + 0x630bff74);
}



longlong inst_254_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_255_values_var_0(void)

{
  undefined4 in_EDX;
  bool in_PF;
  
  return CONCAT44(in_EDX,CONCAT22(0x8e7e,CONCAT11(!in_PF,0xa5)) + 0x7181ff5b);
}



longlong inst_255_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_255_values_var_1(void)

{
  undefined4 in_EDX;
  bool in_PF;
  
  return CONCAT44(in_EDX,CONCAT31(0x1e529,!in_PF) + -0x1e52901);
}



longlong inst_255_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_255_values_var_2(void)

{
  undefined4 in_EDX;
  bool in_PF;
  
  return CONCAT44(in_EDX,CONCAT31(0xb860f8,!in_PF) + 0x479f0800);
}



longlong inst_255_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_255_values_var_3(void)

{
  undefined4 in_EDX;
  bool in_PF;
  
  return CONCAT44(in_EDX,((uint)CONCAT11(!in_PF,0x96) | 0x1efa0000) + 0xe105ff6a);
}



longlong inst_255_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_255_values_var_4(void)

{
  undefined4 in_EDX;
  bool in_PF;
  
  return CONCAT44(in_EDX,CONCAT31(0xb53150,!in_PF) + 0x4aceb000);
}



longlong inst_255_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_255_values_var_5(void)

{
  undefined4 in_EDX;
  bool in_PF;
  
  return CONCAT44(in_EDX,((uint)CONCAT11(!in_PF,0xda) | 0x703d0000) + 0x8fc2fe26);
}



longlong inst_255_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_255_values_var_6(void)

{
  undefined4 in_EDX;
  bool in_PF;
  
  return CONCAT44(in_EDX,((uint)CONCAT11(!in_PF,0x41) | 0x6dcc0000) + 0x9233ffbf);
}



longlong inst_255_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_255_values_var_7(void)

{
  undefined4 in_EDX;
  bool in_PF;
  
  return CONCAT44(in_EDX,((uint)!in_PF | 0x6a966600) + 0x95699a00);
}



longlong inst_255_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_255_values_var_8(void)

{
  undefined4 in_EDX;
  bool in_PF;
  
  return CONCAT44(in_EDX,CONCAT31(0xd8ef55,!in_PF) + 0x2710ab00);
}



longlong inst_255_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_255_values_var_9(void)

{
  undefined4 in_EDX;
  bool in_PF;
  
  return CONCAT44(in_EDX,CONCAT22(0x4da,CONCAT11(!in_PF,0xb2)) + -0x4da00b2);
}



longlong inst_255_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_256_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_256_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_256_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_256_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_256_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_256_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_256_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_256_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_256_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_256_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_256_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_256_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_256_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_256_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_256_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_256_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_256_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_256_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_256_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_256_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_257_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_257_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_257_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_257_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_257_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_257_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_257_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_257_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_257_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_257_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_257_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_257_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_257_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_257_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_257_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_257_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_257_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_257_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_257_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_257_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_258_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_258_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_258_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_258_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_258_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_258_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_258_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_258_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_258_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_258_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_258_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_258_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_258_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_258_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_258_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_258_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_258_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_258_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_258_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_258_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_259_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_259_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_259_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_259_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_259_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_259_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_259_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_259_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_259_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_259_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_259_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_259_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_259_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_259_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_259_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_259_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_259_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_259_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_259_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_259_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_260_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c7291)

undefined8 inst_260_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_260_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c735c)

undefined8 inst_260_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_260_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c7400)

undefined8 inst_260_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_260_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c74cb)

undefined8 inst_260_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_260_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c7596)

undefined8 inst_260_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_260_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c766e)

undefined8 inst_260_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_260_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c7739)
// WARNING: Removing unreachable block (ram,0x080c772c)
// WARNING: Removing unreachable block (ram,0x080c7753)

undefined8 inst_260_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_260_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c77f7)

undefined8 inst_260_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_260_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c78c2)

undefined8 inst_260_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_260_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c798d)

undefined8 inst_260_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_261_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c7a63)
// WARNING: Removing unreachable block (ram,0x080c7a56)
// WARNING: Removing unreachable block (ram,0x080c7a7d)

undefined8 inst_261_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_261_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c7b2c)

undefined8 inst_261_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_261_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c7bf5)
// WARNING: Removing unreachable block (ram,0x080c7be8)
// WARNING: Removing unreachable block (ram,0x080c7c0f)

undefined8 inst_261_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_261_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c7cbe)
// WARNING: Removing unreachable block (ram,0x080c7cb1)
// WARNING: Removing unreachable block (ram,0x080c7cd8)

undefined8 inst_261_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_261_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c7da1)

undefined8 inst_261_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_261_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c7e43)

undefined8 inst_261_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_261_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c7f19)
// WARNING: Removing unreachable block (ram,0x080c7f0c)
// WARNING: Removing unreachable block (ram,0x080c7f33)

undefined8 inst_261_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_261_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c7ffc)

undefined8 inst_261_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_261_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c80ab)
// WARNING: Removing unreachable block (ram,0x080c809e)
// WARNING: Removing unreachable block (ram,0x080c80c5)

undefined8 inst_261_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_261_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c8167)

undefined8 inst_261_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_262_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c823f)
// WARNING: Removing unreachable block (ram,0x080c8259)

undefined8 inst_262_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_262_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c830a)
// WARNING: Removing unreachable block (ram,0x080c82fd)
// WARNING: Removing unreachable block (ram,0x080c8324)

undefined8 inst_262_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_262_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c83d5)

undefined8 inst_262_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_262_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c8493)

undefined8 inst_262_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_262_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c855e)
// WARNING: Removing unreachable block (ram,0x080c8585)

undefined8 inst_262_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_262_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c8629)
// WARNING: Removing unreachable block (ram,0x080c8636)

undefined8 inst_262_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_262_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c8701)
// WARNING: Removing unreachable block (ram,0x080c86f4)
// WARNING: Removing unreachable block (ram,0x080c871b)

undefined8 inst_262_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_262_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c87bf)
// WARNING: Removing unreachable block (ram,0x080c87e6)

undefined8 inst_262_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_262_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c8897)
// WARNING: Removing unreachable block (ram,0x080c888a)
// WARNING: Removing unreachable block (ram,0x080c88b1)

undefined8 inst_262_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_262_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_262_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_263_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c8a2b)

undefined8 inst_263_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_263_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c8af4)
// WARNING: Removing unreachable block (ram,0x080c8ae7)
// WARNING: Removing unreachable block (ram,0x080c8b0e)

undefined8 inst_263_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_263_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c8bbd)

undefined8 inst_263_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_263_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c8ca0)

undefined8 inst_263_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_263_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_263_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_263_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c8e0b)
// WARNING: Removing unreachable block (ram,0x080c8e18)

undefined8 inst_263_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_263_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c8ed4)
// WARNING: Removing unreachable block (ram,0x080c8ee1)

undefined8 inst_263_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_263_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c8faa)

undefined8 inst_263_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_263_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c9066)

undefined8 inst_263_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_263_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c9156)

undefined8 inst_263_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_264_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_264_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_264_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_264_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_264_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_264_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_264_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_264_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_264_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_264_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_264_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_264_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_264_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_264_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_264_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_264_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_264_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_264_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_264_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_264_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_265_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_265_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_265_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_265_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_265_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_265_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_265_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_265_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_265_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_265_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_265_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_265_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_265_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_265_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_265_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_265_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_265_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_265_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_265_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_265_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_266_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_266_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_266_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_266_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_266_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_266_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_266_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_266_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_266_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_266_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_266_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_266_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_266_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_266_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_266_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_266_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_266_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_266_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_266_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_266_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_267_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_267_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_267_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_267_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_267_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_267_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_267_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_267_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_267_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_267_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_267_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_267_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_267_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_267_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_267_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_267_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_267_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_267_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_267_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_267_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_268_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_268_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_268_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_268_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_268_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_268_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_268_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_268_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_268_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_268_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_268_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_268_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_268_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_268_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_268_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_268_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_268_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_268_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_268_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_268_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_269_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_269_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_269_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_269_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_269_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_269_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_269_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_269_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_269_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_269_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_269_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_269_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_269_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_269_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_269_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_269_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_269_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_269_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_269_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_269_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_270_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_270_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_270_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_270_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_270_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_270_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_270_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_270_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_270_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_270_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_270_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_270_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_270_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_270_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_270_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_270_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_270_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_270_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_270_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_270_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_271_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_271_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_271_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_271_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_271_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_271_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_271_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_271_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_271_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_271_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_271_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_271_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_271_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_271_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_271_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_271_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_271_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_271_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_271_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_271_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_272_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cc74b)

undefined8 inst_272_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_272_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cc81d)
// WARNING: Removing unreachable block (ram,0x080cc837)

undefined8 inst_272_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_272_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cc8ef)

undefined8 inst_272_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_272_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cc9c1)

undefined8 inst_272_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_272_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cca86)
// WARNING: Removing unreachable block (ram,0x080cca93)

undefined8 inst_272_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_272_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ccb65)

undefined8 inst_272_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_272_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_272_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_272_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ccd08)
// WARNING: Removing unreachable block (ram,0x080cccfb)
// WARNING: Removing unreachable block (ram,0x080ccd22)

undefined8 inst_272_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_272_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ccdda)

undefined8 inst_272_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_272_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cceac)

undefined8 inst_272_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_273_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ccf7c)
// WARNING: Removing unreachable block (ram,0x080ccf6f)
// WARNING: Removing unreachable block (ram,0x080ccf96)

undefined8 inst_273_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_273_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cd04c)
// WARNING: Removing unreachable block (ram,0x080cd03f)
// WARNING: Removing unreachable block (ram,0x080cd066)

undefined8 inst_273_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_273_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cd11c)
// WARNING: Removing unreachable block (ram,0x080cd10f)
// WARNING: Removing unreachable block (ram,0x080cd136)

undefined8 inst_273_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_273_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cd1ec)

undefined8 inst_273_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_273_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cd2bc)
// WARNING: Removing unreachable block (ram,0x080cd2d6)

undefined8 inst_273_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_273_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cd37f)
// WARNING: Removing unreachable block (ram,0x080cd38c)

undefined8 inst_273_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_273_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cd45c)
// WARNING: Removing unreachable block (ram,0x080cd44f)
// WARNING: Removing unreachable block (ram,0x080cd476)

undefined8 inst_273_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_273_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cd51f)
// WARNING: Removing unreachable block (ram,0x080cd546)

undefined8 inst_273_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_273_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cd5fc)

undefined8 inst_273_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_273_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cd6bf)
// WARNING: Removing unreachable block (ram,0x080cd6e6)

undefined8 inst_273_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_274_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cd7a2)
// WARNING: Removing unreachable block (ram,0x080cd7bc)

undefined8 inst_274_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_274_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cd878)
// WARNING: Removing unreachable block (ram,0x080cd86b)
// WARNING: Removing unreachable block (ram,0x080cd892)

undefined8 inst_274_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_274_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cd94e)
// WARNING: Removing unreachable block (ram,0x080cd941)
// WARNING: Removing unreachable block (ram,0x080cd968)

undefined8 inst_274_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_274_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cda24)

undefined8 inst_274_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_274_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cdafa)

undefined8 inst_274_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_274_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cdbd0)
// WARNING: Removing unreachable block (ram,0x080cdbea)

undefined8 inst_274_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_274_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_274_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_274_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_274_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_274_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cde45)
// WARNING: Removing unreachable block (ram,0x080cde52)

undefined8 inst_274_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_274_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cdf27)
// WARNING: Removing unreachable block (ram,0x080cdf1a)
// WARNING: Removing unreachable block (ram,0x080cdf41)

undefined8 inst_274_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_275_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cdff9)

undefined8 inst_275_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_275_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ce0cb)
// WARNING: Removing unreachable block (ram,0x080ce0be)
// WARNING: Removing unreachable block (ram,0x080ce0e5)

undefined8 inst_275_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_275_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_275_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_275_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ce26f)

undefined8 inst_275_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_275_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ce341)

undefined8 inst_275_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_275_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ce413)
// WARNING: Removing unreachable block (ram,0x080ce406)
// WARNING: Removing unreachable block (ram,0x080ce42d)

undefined8 inst_275_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_275_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ce4d8)
// WARNING: Removing unreachable block (ram,0x080ce4ff)

undefined8 inst_275_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_275_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ce5aa)
// WARNING: Removing unreachable block (ram,0x080ce5b7)

undefined8 inst_275_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_275_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ce67c)
// WARNING: Removing unreachable block (ram,0x080ce689)

undefined8 inst_275_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_275_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ce75b)
// WARNING: Removing unreachable block (ram,0x080ce74e)
// WARNING: Removing unreachable block (ram,0x080ce775)

undefined8 inst_275_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_276_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ce826)
// WARNING: Removing unreachable block (ram,0x080ce84d)

undefined8 inst_276_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_276_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ce90b)

undefined8 inst_276_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_276_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ce9e3)
// WARNING: Removing unreachable block (ram,0x080ce9d6)
// WARNING: Removing unreachable block (ram,0x080ce9fd)

undefined8 inst_276_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_276_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ceaba)
// WARNING: Removing unreachable block (ram,0x080cead4)

undefined8 inst_276_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_276_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ceb85)
// WARNING: Removing unreachable block (ram,0x080ceb92)

undefined8 inst_276_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_276_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cec5c)
// WARNING: Removing unreachable block (ram,0x080cec69)

undefined8 inst_276_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_276_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ced40)
// WARNING: Removing unreachable block (ram,0x080ced5a)

undefined8 inst_276_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_276_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cee18)

undefined8 inst_276_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_276_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_276_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_276_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_276_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_277_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cf098)
// WARNING: Removing unreachable block (ram,0x080cf08b)
// WARNING: Removing unreachable block (ram,0x080cf0b2)

undefined8 inst_277_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_277_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cf15b)
// WARNING: Removing unreachable block (ram,0x080cf182)

undefined8 inst_277_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_277_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cf238)

undefined8 inst_277_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_277_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cf308)
// WARNING: Removing unreachable block (ram,0x080cf2fb)
// WARNING: Removing unreachable block (ram,0x080cf322)

undefined8 inst_277_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_277_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cf3cb)
// WARNING: Removing unreachable block (ram,0x080cf3f2)

undefined8 inst_277_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_277_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cf4a8)

undefined8 inst_277_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_277_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cf578)

undefined8 inst_277_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_277_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cf648)

undefined8 inst_277_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_277_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cf718)

undefined8 inst_277_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_277_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cf7db)
// WARNING: Removing unreachable block (ram,0x080cf7e8)

undefined8 inst_277_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_278_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cf8ba)
// WARNING: Removing unreachable block (ram,0x080cf8ad)
// WARNING: Removing unreachable block (ram,0x080cf8d4)

undefined8 inst_278_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_278_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cf981)
// WARNING: Removing unreachable block (ram,0x080cf974)
// WARNING: Removing unreachable block (ram,0x080cf99b)

undefined8 inst_278_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_278_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cfa48)
// WARNING: Removing unreachable block (ram,0x080cfa3b)
// WARNING: Removing unreachable block (ram,0x080cfa62)

undefined8 inst_278_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_278_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cfb0f)
// WARNING: Removing unreachable block (ram,0x080cfb02)
// WARNING: Removing unreachable block (ram,0x080cfb29)

undefined8 inst_278_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_278_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cfbd6)
// WARNING: Removing unreachable block (ram,0x080cfbc9)
// WARNING: Removing unreachable block (ram,0x080cfbf0)

undefined8 inst_278_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_278_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cfc9d)
// WARNING: Removing unreachable block (ram,0x080cfc90)
// WARNING: Removing unreachable block (ram,0x080cfcb7)

undefined8 inst_278_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_278_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cfd64)
// WARNING: Removing unreachable block (ram,0x080cfd57)
// WARNING: Removing unreachable block (ram,0x080cfd7e)

undefined8 inst_278_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_278_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cfe2a)
// WARNING: Removing unreachable block (ram,0x080cfe1d)
// WARNING: Removing unreachable block (ram,0x080cfe44)

undefined8 inst_278_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_278_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cfee4)
// WARNING: Removing unreachable block (ram,0x080cfef1)

undefined8 inst_278_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_278_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cffb8)
// WARNING: Removing unreachable block (ram,0x080cffab)
// WARNING: Removing unreachable block (ram,0x080cffd2)

undefined8 inst_278_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_279_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d0070)
// WARNING: Removing unreachable block (ram,0x080d007d)

undefined8 inst_279_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_279_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d0142)
// WARNING: Removing unreachable block (ram,0x080d0135)
// WARNING: Removing unreachable block (ram,0x080d015c)

undefined8 inst_279_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_279_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d01fa)
// WARNING: Removing unreachable block (ram,0x080d0207)

undefined8 inst_279_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_279_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d02bf)
// WARNING: Removing unreachable block (ram,0x080d02cc)

undefined8 inst_279_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_279_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d0391)
// WARNING: Removing unreachable block (ram,0x080d0384)
// WARNING: Removing unreachable block (ram,0x080d03ab)

undefined8 inst_279_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_279_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d0456)
// WARNING: Removing unreachable block (ram,0x080d0449)
// WARNING: Removing unreachable block (ram,0x080d0470)

undefined8 inst_279_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_279_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d051b)
// WARNING: Removing unreachable block (ram,0x080d050e)
// WARNING: Removing unreachable block (ram,0x080d0535)

undefined8 inst_279_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_279_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d05e0)
// WARNING: Removing unreachable block (ram,0x080d05d3)
// WARNING: Removing unreachable block (ram,0x080d05fa)

undefined8 inst_279_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_279_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d06a5)
// WARNING: Removing unreachable block (ram,0x080d0698)
// WARNING: Removing unreachable block (ram,0x080d06bf)

undefined8 inst_279_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_279_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d076a)
// WARNING: Removing unreachable block (ram,0x080d075d)
// WARNING: Removing unreachable block (ram,0x080d0784)

undefined8 inst_279_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_280_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d0828)
// WARNING: Removing unreachable block (ram,0x080d0835)

undefined8 inst_280_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_280_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d08f3)
// WARNING: Removing unreachable block (ram,0x080d0900)

undefined8 inst_280_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_280_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d09ca)
// WARNING: Removing unreachable block (ram,0x080d09bd)
// WARNING: Removing unreachable block (ram,0x080d09e4)

undefined8 inst_280_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_280_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d0a87)
// WARNING: Removing unreachable block (ram,0x080d0a94)

undefined8 inst_280_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_280_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d0b5f)
// WARNING: Removing unreachable block (ram,0x080d0b52)
// WARNING: Removing unreachable block (ram,0x080d0b79)

undefined8 inst_280_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_280_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d0c2a)
// WARNING: Removing unreachable block (ram,0x080d0c1d)
// WARNING: Removing unreachable block (ram,0x080d0c44)

undefined8 inst_280_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_280_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d0cf5)
// WARNING: Removing unreachable block (ram,0x080d0ce8)
// WARNING: Removing unreachable block (ram,0x080d0d0f)

undefined8 inst_280_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_280_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d0dc0)
// WARNING: Removing unreachable block (ram,0x080d0db3)
// WARNING: Removing unreachable block (ram,0x080d0dda)

undefined8 inst_280_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_280_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d0e8b)
// WARNING: Removing unreachable block (ram,0x080d0e7e)
// WARNING: Removing unreachable block (ram,0x080d0ea5)

undefined8 inst_280_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_280_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d0f49)
// WARNING: Removing unreachable block (ram,0x080d0f56)

undefined8 inst_280_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_281_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d1010)
// WARNING: Removing unreachable block (ram,0x080d101d)

undefined8 inst_281_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_281_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d10e4)
// WARNING: Removing unreachable block (ram,0x080d10d7)
// WARNING: Removing unreachable block (ram,0x080d10fe)

undefined8 inst_281_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_281_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d119e)
// WARNING: Removing unreachable block (ram,0x080d11ab)

undefined8 inst_281_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_281_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d1272)
// WARNING: Removing unreachable block (ram,0x080d1265)
// WARNING: Removing unreachable block (ram,0x080d128c)

undefined8 inst_281_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_281_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d132c)
// WARNING: Removing unreachable block (ram,0x080d1339)

undefined8 inst_281_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_281_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d1400)
// WARNING: Removing unreachable block (ram,0x080d13f3)
// WARNING: Removing unreachable block (ram,0x080d141a)

undefined8 inst_281_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_281_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d14ba)
// WARNING: Removing unreachable block (ram,0x080d14c7)

undefined8 inst_281_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_281_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d158e)
// WARNING: Removing unreachable block (ram,0x080d1581)
// WARNING: Removing unreachable block (ram,0x080d15a8)

undefined8 inst_281_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_281_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d1655)
// WARNING: Removing unreachable block (ram,0x080d1648)
// WARNING: Removing unreachable block (ram,0x080d166f)

undefined8 inst_281_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_281_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d171c)
// WARNING: Removing unreachable block (ram,0x080d170f)
// WARNING: Removing unreachable block (ram,0x080d1736)

undefined8 inst_281_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_282_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d17e9)
// WARNING: Removing unreachable block (ram,0x080d17dc)
// WARNING: Removing unreachable block (ram,0x080d1803)

undefined8 inst_282_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_282_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d18a8)
// WARNING: Removing unreachable block (ram,0x080d18b5)

undefined8 inst_282_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_282_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d1981)
// WARNING: Removing unreachable block (ram,0x080d1974)
// WARNING: Removing unreachable block (ram,0x080d199b)

undefined8 inst_282_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_282_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d1a4d)
// WARNING: Removing unreachable block (ram,0x080d1a40)
// WARNING: Removing unreachable block (ram,0x080d1a67)

undefined8 inst_282_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_282_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d1b0d)
// WARNING: Removing unreachable block (ram,0x080d1b1a)

undefined8 inst_282_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_282_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d1bda)
// WARNING: Removing unreachable block (ram,0x080d1be7)

undefined8 inst_282_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_282_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d1cb4)
// WARNING: Removing unreachable block (ram,0x080d1ca7)
// WARNING: Removing unreachable block (ram,0x080d1cce)

undefined8 inst_282_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_282_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d1d81)
// WARNING: Removing unreachable block (ram,0x080d1d74)
// WARNING: Removing unreachable block (ram,0x080d1d9b)

undefined8 inst_282_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_282_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d1e4e)
// WARNING: Removing unreachable block (ram,0x080d1e41)
// WARNING: Removing unreachable block (ram,0x080d1e68)

undefined8 inst_282_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_282_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d1f1b)
// WARNING: Removing unreachable block (ram,0x080d1f0e)
// WARNING: Removing unreachable block (ram,0x080d1f35)

undefined8 inst_282_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_283_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d1fe0)
// WARNING: Removing unreachable block (ram,0x080d1fd3)
// WARNING: Removing unreachable block (ram,0x080d1ffa)

undefined8 inst_283_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_283_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d20a5)
// WARNING: Removing unreachable block (ram,0x080d2098)
// WARNING: Removing unreachable block (ram,0x080d20bf)

undefined8 inst_283_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_283_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d216a)
// WARNING: Removing unreachable block (ram,0x080d215d)
// WARNING: Removing unreachable block (ram,0x080d2184)

undefined8 inst_283_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_283_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d222f)
// WARNING: Removing unreachable block (ram,0x080d2222)
// WARNING: Removing unreachable block (ram,0x080d2249)

undefined8 inst_283_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_283_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d22f4)
// WARNING: Removing unreachable block (ram,0x080d22e7)
// WARNING: Removing unreachable block (ram,0x080d230e)

undefined8 inst_283_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_283_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d23b9)
// WARNING: Removing unreachable block (ram,0x080d23ac)
// WARNING: Removing unreachable block (ram,0x080d23d3)

undefined8 inst_283_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_283_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d247e)
// WARNING: Removing unreachable block (ram,0x080d2471)
// WARNING: Removing unreachable block (ram,0x080d2498)

undefined8 inst_283_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_283_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d2543)
// WARNING: Removing unreachable block (ram,0x080d2536)
// WARNING: Removing unreachable block (ram,0x080d255d)

undefined8 inst_283_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_283_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d2608)
// WARNING: Removing unreachable block (ram,0x080d25fb)
// WARNING: Removing unreachable block (ram,0x080d2622)

undefined8 inst_283_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_283_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d26cd)
// WARNING: Removing unreachable block (ram,0x080d26c0)
// WARNING: Removing unreachable block (ram,0x080d26e7)

undefined8 inst_283_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_284_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d2794)
// WARNING: Removing unreachable block (ram,0x080d27ae)

undefined8 inst_284_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_284_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d2866)

undefined8 inst_284_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_284_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d292b)
// WARNING: Removing unreachable block (ram,0x080d2938)

undefined8 inst_284_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_284_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d2a24)

undefined8 inst_284_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_284_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d2adc)
// WARNING: Removing unreachable block (ram,0x080d2acf)
// WARNING: Removing unreachable block (ram,0x080d2af6)

undefined8 inst_284_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_284_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d2ba1)

undefined8 inst_284_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_284_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d2c73)
// WARNING: Removing unreachable block (ram,0x080d2c80)

undefined8 inst_284_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_284_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d2d52)
// WARNING: Removing unreachable block (ram,0x080d2d6c)

undefined8 inst_284_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_284_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d2e3e)

undefined8 inst_284_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_284_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d2ee9)
// WARNING: Removing unreachable block (ram,0x080d2ef6)

undefined8 inst_284_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_285_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d2fbd)
// WARNING: Removing unreachable block (ram,0x080d2fca)

undefined8 inst_285_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_285_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d309e)

undefined8 inst_285_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_285_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d3172)
// WARNING: Removing unreachable block (ram,0x080d3165)
// WARNING: Removing unreachable block (ram,0x080d318c)

undefined8 inst_285_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_285_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d3260)

undefined8 inst_285_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_285_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d330d)
// WARNING: Removing unreachable block (ram,0x080d331a)

undefined8 inst_285_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_285_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d33e1)
// WARNING: Removing unreachable block (ram,0x080d33ee)

undefined8 inst_285_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_285_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d34c2)

undefined8 inst_285_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_285_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d3589)
// WARNING: Removing unreachable block (ram,0x080d3596)

undefined8 inst_285_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_285_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d365d)

undefined8 inst_285_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_285_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d373e)

undefined8 inst_285_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_286_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d382a)

undefined8 inst_286_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_286_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d38e2)

undefined8 inst_286_flags_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_286_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d39a7)

undefined8 inst_286_flags_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_286_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d3a86)
// WARNING: Removing unreachable block (ram,0x080d3aa0)

undefined8 inst_286_flags_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_286_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d3b4b)

undefined8 inst_286_flags_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_286_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d3c2a)
// WARNING: Removing unreachable block (ram,0x080d3c44)

undefined8 inst_286_flags_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_286_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d3cef)
// WARNING: Removing unreachable block (ram,0x080d3cfc)

undefined8 inst_286_flags_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_286_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d3dc1)
// WARNING: Removing unreachable block (ram,0x080d3dce)

undefined8 inst_286_flags_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_286_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d3ea0)
// WARNING: Removing unreachable block (ram,0x080d3e93)
// WARNING: Removing unreachable block (ram,0x080d3eba)

undefined8 inst_286_flags_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_286_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d3f72)

undefined8 inst_286_flags_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_287_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_287_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_287_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_287_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_287_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_287_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_287_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_287_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_287_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_287_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_287_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_287_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_287_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_287_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_287_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_287_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_287_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_287_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_287_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_287_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_288_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_288_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_288_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_288_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_288_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_288_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_288_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_288_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_288_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_288_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_288_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_288_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_288_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_288_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_288_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_288_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_288_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_288_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_288_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_288_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_289_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_289_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_289_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_289_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_289_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_289_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_289_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_289_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_289_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_289_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_289_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_289_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_289_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_289_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_289_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_289_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_289_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_289_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_289_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_289_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_290_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d539f)
// WARNING: Removing unreachable block (ram,0x080d5392)
// WARNING: Removing unreachable block (ram,0x080d53b9)

undefined8 inst_290_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_290_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d5459)
// WARNING: Removing unreachable block (ram,0x080d5466)

undefined8 inst_290_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_290_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d551f)
// WARNING: Removing unreachable block (ram,0x080d552c)

undefined8 inst_290_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_290_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d55f3)
// WARNING: Removing unreachable block (ram,0x080d55e6)
// WARNING: Removing unreachable block (ram,0x080d560d)

undefined8 inst_290_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_290_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d56b9)
// WARNING: Removing unreachable block (ram,0x080d56ac)
// WARNING: Removing unreachable block (ram,0x080d56d3)

undefined8 inst_290_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_290_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d577f)
// WARNING: Removing unreachable block (ram,0x080d5772)
// WARNING: Removing unreachable block (ram,0x080d5799)

undefined8 inst_290_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_290_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d5839)
// WARNING: Removing unreachable block (ram,0x080d5846)

undefined8 inst_290_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_290_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d5900)
// WARNING: Removing unreachable block (ram,0x080d590d)

undefined8 inst_290_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_290_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d59c7)
// WARNING: Removing unreachable block (ram,0x080d59d4)

undefined8 inst_290_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_290_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d5a8e)
// WARNING: Removing unreachable block (ram,0x080d5a9b)

undefined8 inst_290_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_291_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d5b60)
// WARNING: Removing unreachable block (ram,0x080d5b53)
// WARNING: Removing unreachable block (ram,0x080d5b7a)

undefined8 inst_291_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_291_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d5c25)
// WARNING: Removing unreachable block (ram,0x080d5c18)
// WARNING: Removing unreachable block (ram,0x080d5c3f)

undefined8 inst_291_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_291_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d5cea)
// WARNING: Removing unreachable block (ram,0x080d5cdd)
// WARNING: Removing unreachable block (ram,0x080d5d04)

undefined8 inst_291_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_291_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d5daf)
// WARNING: Removing unreachable block (ram,0x080d5da2)
// WARNING: Removing unreachable block (ram,0x080d5dc9)

undefined8 inst_291_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_291_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d5e74)
// WARNING: Removing unreachable block (ram,0x080d5e67)
// WARNING: Removing unreachable block (ram,0x080d5e8e)

undefined8 inst_291_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_291_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d5f39)
// WARNING: Removing unreachable block (ram,0x080d5f2c)
// WARNING: Removing unreachable block (ram,0x080d5f53)

undefined8 inst_291_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_291_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d5ff1)
// WARNING: Removing unreachable block (ram,0x080d5ffe)

undefined8 inst_291_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_291_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d60b6)
// WARNING: Removing unreachable block (ram,0x080d60c3)

undefined8 inst_291_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_291_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d6188)
// WARNING: Removing unreachable block (ram,0x080d617b)
// WARNING: Removing unreachable block (ram,0x080d61a2)

undefined8 inst_291_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_291_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d6240)
// WARNING: Removing unreachable block (ram,0x080d624d)

undefined8 inst_291_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_292_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d630b)
// WARNING: Removing unreachable block (ram,0x080d6318)

undefined8 inst_292_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_292_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d63d6)
// WARNING: Removing unreachable block (ram,0x080d63e3)

undefined8 inst_292_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_292_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d64ae)
// WARNING: Removing unreachable block (ram,0x080d64a1)
// WARNING: Removing unreachable block (ram,0x080d64c8)

undefined8 inst_292_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_292_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d6578)
// WARNING: Removing unreachable block (ram,0x080d656b)
// WARNING: Removing unreachable block (ram,0x080d6592)

undefined8 inst_292_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_292_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d6643)
// WARNING: Removing unreachable block (ram,0x080d6636)
// WARNING: Removing unreachable block (ram,0x080d665d)

undefined8 inst_292_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_292_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d670e)
// WARNING: Removing unreachable block (ram,0x080d6701)
// WARNING: Removing unreachable block (ram,0x080d6728)

undefined8 inst_292_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_292_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d67d8)
// WARNING: Removing unreachable block (ram,0x080d67cb)
// WARNING: Removing unreachable block (ram,0x080d67f2)

undefined8 inst_292_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_292_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d6895)
// WARNING: Removing unreachable block (ram,0x080d68a2)

undefined8 inst_292_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_292_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d696c)
// WARNING: Removing unreachable block (ram,0x080d695f)
// WARNING: Removing unreachable block (ram,0x080d6986)

undefined8 inst_292_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_292_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d6a29)
// WARNING: Removing unreachable block (ram,0x080d6a36)

undefined8 inst_292_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_293_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d6afd)
// WARNING: Removing unreachable block (ram,0x080d6af0)
// WARNING: Removing unreachable block (ram,0x080d6b17)

undefined8 inst_293_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_293_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d6bc4)
// WARNING: Removing unreachable block (ram,0x080d6bb7)
// WARNING: Removing unreachable block (ram,0x080d6bde)

undefined8 inst_293_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_293_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d6c7e)
// WARNING: Removing unreachable block (ram,0x080d6c8b)

undefined8 inst_293_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_293_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d6d52)
// WARNING: Removing unreachable block (ram,0x080d6d45)
// WARNING: Removing unreachable block (ram,0x080d6d6c)

undefined8 inst_293_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_293_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d6e19)
// WARNING: Removing unreachable block (ram,0x080d6e0c)
// WARNING: Removing unreachable block (ram,0x080d6e33)

undefined8 inst_293_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_293_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d6ee0)
// WARNING: Removing unreachable block (ram,0x080d6ed3)
// WARNING: Removing unreachable block (ram,0x080d6efa)

undefined8 inst_293_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_293_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d6f9a)
// WARNING: Removing unreachable block (ram,0x080d6fa7)

undefined8 inst_293_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_293_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d7061)
// WARNING: Removing unreachable block (ram,0x080d706e)

undefined8 inst_293_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_293_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d7128)
// WARNING: Removing unreachable block (ram,0x080d7135)

undefined8 inst_293_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_293_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d71ef)
// WARNING: Removing unreachable block (ram,0x080d71fc)

undefined8 inst_293_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_294_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d72c9)
// WARNING: Removing unreachable block (ram,0x080d72bc)
// WARNING: Removing unreachable block (ram,0x080d72e3)

undefined8 inst_294_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_294_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d7389)
// WARNING: Removing unreachable block (ram,0x080d7396)

undefined8 inst_294_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_294_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d7456)
// WARNING: Removing unreachable block (ram,0x080d7463)

undefined8 inst_294_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_294_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d7523)
// WARNING: Removing unreachable block (ram,0x080d7530)

undefined8 inst_294_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_294_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d75fd)
// WARNING: Removing unreachable block (ram,0x080d75f0)
// WARNING: Removing unreachable block (ram,0x080d7617)

undefined8 inst_294_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_294_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d76bd)
// WARNING: Removing unreachable block (ram,0x080d76ca)

undefined8 inst_294_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_294_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d778a)
// WARNING: Removing unreachable block (ram,0x080d7797)

undefined8 inst_294_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_294_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d7857)
// WARNING: Removing unreachable block (ram,0x080d7864)

undefined8 inst_294_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_294_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d7931)
// WARNING: Removing unreachable block (ram,0x080d7924)
// WARNING: Removing unreachable block (ram,0x080d794b)

undefined8 inst_294_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_294_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d79fe)
// WARNING: Removing unreachable block (ram,0x080d79f1)
// WARNING: Removing unreachable block (ram,0x080d7a18)

undefined8 inst_294_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_295_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d7ac3)
// WARNING: Removing unreachable block (ram,0x080d7ab6)
// WARNING: Removing unreachable block (ram,0x080d7add)

undefined8 inst_295_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_295_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d7b88)
// WARNING: Removing unreachable block (ram,0x080d7b7b)
// WARNING: Removing unreachable block (ram,0x080d7ba2)

undefined8 inst_295_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_295_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d7c4d)
// WARNING: Removing unreachable block (ram,0x080d7c40)
// WARNING: Removing unreachable block (ram,0x080d7c67)

undefined8 inst_295_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_295_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d7d12)
// WARNING: Removing unreachable block (ram,0x080d7d05)
// WARNING: Removing unreachable block (ram,0x080d7d2c)

undefined8 inst_295_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_295_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d7dd7)
// WARNING: Removing unreachable block (ram,0x080d7dca)
// WARNING: Removing unreachable block (ram,0x080d7df1)

undefined8 inst_295_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_295_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d7e8f)
// WARNING: Removing unreachable block (ram,0x080d7e9c)

undefined8 inst_295_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_295_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d7f61)
// WARNING: Removing unreachable block (ram,0x080d7f54)
// WARNING: Removing unreachable block (ram,0x080d7f7b)

undefined8 inst_295_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_295_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d8019)
// WARNING: Removing unreachable block (ram,0x080d8026)

undefined8 inst_295_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_295_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d80eb)
// WARNING: Removing unreachable block (ram,0x080d80de)
// WARNING: Removing unreachable block (ram,0x080d8105)

undefined8 inst_295_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_295_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d81b0)
// WARNING: Removing unreachable block (ram,0x080d81a3)
// WARNING: Removing unreachable block (ram,0x080d81ca)

undefined8 inst_295_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
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


