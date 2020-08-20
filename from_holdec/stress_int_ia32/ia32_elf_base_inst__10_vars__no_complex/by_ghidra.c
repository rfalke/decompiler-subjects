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



// WARNING: Removing unreachable block (ram,0x08052f9c)
// WARNING: Removing unreachable block (ram,0x08052fa5)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x08052fe8)
// WARNING: Removing unreachable block (ram,0x08052ff1)

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



longlong inst_0_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080530c7)

undefined8 inst_0_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_0_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080531b4)

undefined8 inst_0_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_0_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08053261)
// WARNING: Removing unreachable block (ram,0x0805327b)

undefined8 inst_0_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_0_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08053328)
// WARNING: Removing unreachable block (ram,0x08053342)

undefined8 inst_0_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_0_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080533ef)

undefined8 inst_0_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_0_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080534b6)
// WARNING: Removing unreachable block (ram,0x080534d0)

undefined8 inst_0_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_0_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08053570)
// WARNING: Removing unreachable block (ram,0x0805357d)

undefined8 inst_0_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_0_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08053644)

undefined8 inst_0_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_0_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08053724)

undefined8 inst_0_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_0_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080537c4)
// WARNING: Removing unreachable block (ram,0x080537d1)

undefined8 inst_0_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_1_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08053896)
// WARNING: Removing unreachable block (ram,0x080538b0)

undefined8 inst_1_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_1_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805395b)

undefined8 inst_1_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_1_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08053a20)
// WARNING: Removing unreachable block (ram,0x08053a13)
// WARNING: Removing unreachable block (ram,0x08053a3a)

undefined8 inst_1_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_1_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08053ad8)
// WARNING: Removing unreachable block (ram,0x08053ae5)

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



// WARNING: Removing unreachable block (ram,0x08053bc4)

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



// WARNING: Removing unreachable block (ram,0x08053c6f)
// WARNING: Removing unreachable block (ram,0x08053c89)

undefined8 inst_1_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_1_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08053d34)
// WARNING: Removing unreachable block (ram,0x08053d4e)

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



// WARNING: Removing unreachable block (ram,0x08053df9)
// WARNING: Removing unreachable block (ram,0x08053dec)
// WARNING: Removing unreachable block (ram,0x08053e13)

undefined8 inst_1_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_1_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08053eb1)
// WARNING: Removing unreachable block (ram,0x08053ebe)

undefined8 inst_1_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_1_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08053f76)
// WARNING: Removing unreachable block (ram,0x08053f83)

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



// WARNING: Removing unreachable block (ram,0x0805404e)

undefined8 inst_2_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_2_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805410c)
// WARNING: Removing unreachable block (ram,0x08054119)

undefined8 inst_2_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_2_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080541e4)
// WARNING: Removing unreachable block (ram,0x080541fe)

undefined8 inst_2_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_2_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080542c9)

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



// WARNING: Removing unreachable block (ram,0x0805436d)

undefined8 inst_2_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_2_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805445f)

undefined8 inst_2_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_2_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08054510)

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



// WARNING: Removing unreachable block (ram,0x080545ce)
// WARNING: Removing unreachable block (ram,0x080545db)

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



// WARNING: Removing unreachable block (ram,0x080546a5)
// WARNING: Removing unreachable block (ram,0x08054698)
// WARNING: Removing unreachable block (ram,0x080546bf)

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



// WARNING: Removing unreachable block (ram,0x0805476f)
// WARNING: Removing unreachable block (ram,0x08054762)
// WARNING: Removing unreachable block (ram,0x08054789)

undefined8 inst_2_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_3_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08054836)
// WARNING: Removing unreachable block (ram,0x08054829)
// WARNING: Removing unreachable block (ram,0x08054850)

undefined8 inst_3_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_3_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08054917)

undefined8 inst_3_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_3_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080549c4)

undefined8 inst_3_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_3_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08054a8b)
// WARNING: Removing unreachable block (ram,0x08054a7e)
// WARNING: Removing unreachable block (ram,0x08054aa5)

undefined8 inst_3_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_3_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08054b52)

undefined8 inst_3_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_3_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08054c33)

undefined8 inst_3_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_3_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08054ce0)
// WARNING: Removing unreachable block (ram,0x08054cfa)

undefined8 inst_3_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_3_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08054d9a)

undefined8 inst_3_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_3_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08054e88)

undefined8 inst_3_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_3_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08054f35)
// WARNING: Removing unreachable block (ram,0x08054f4f)

undefined8 inst_3_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_4_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08054ff5)
// WARNING: Removing unreachable block (ram,0x08055002)

undefined8 inst_4_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_4_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080550e9)

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



// WARNING: Removing unreachable block (ram,0x0805519c)

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



// WARNING: Removing unreachable block (ram,0x08055269)

undefined8 inst_4_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_4_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08055329)
// WARNING: Removing unreachable block (ram,0x08055336)

undefined8 inst_4_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_4_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080553f6)
// WARNING: Removing unreachable block (ram,0x08055403)

undefined8 inst_4_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_4_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080554d0)

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



// WARNING: Removing unreachable block (ram,0x08055590)
// WARNING: Removing unreachable block (ram,0x0805559d)

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



// WARNING: Removing unreachable block (ram,0x0805565d)
// WARNING: Removing unreachable block (ram,0x0805566a)

undefined8 inst_4_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_4_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08055729)

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



// WARNING: Removing unreachable block (ram,0x08055815)

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



// WARNING: Removing unreachable block (ram,0x080558c0)
// WARNING: Removing unreachable block (ram,0x080558da)

undefined8 inst_5_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_5_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08055985)

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



// WARNING: Removing unreachable block (ram,0x08055a4a)

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



// WARNING: Removing unreachable block (ram,0x08055b0f)

undefined8 inst_5_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_5_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08055bd4)
// WARNING: Removing unreachable block (ram,0x08055bee)

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



// WARNING: Removing unreachable block (ram,0x08055cb3)

undefined8 inst_5_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_5_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08055d5e)

undefined8 inst_5_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_5_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08055e16)

undefined8 inst_5_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_5_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08055f02)

undefined8 inst_5_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_6_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08055fa4)
// WARNING: Removing unreachable block (ram,0x08055fb1)

undefined8 inst_6_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_6_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805606d)
// WARNING: Removing unreachable block (ram,0x0805607a)

undefined8 inst_6_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_6_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08056135)

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



// WARNING: Removing unreachable block (ram,0x0805620b)

undefined8 inst_6_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_6_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080562d3)
// WARNING: Removing unreachable block (ram,0x080562ed)

undefined8 inst_6_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_6_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805638f)

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



// WARNING: Removing unreachable block (ram,0x08056458)
// WARNING: Removing unreachable block (ram,0x08056465)

undefined8 inst_6_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_6_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08056521)
// WARNING: Removing unreachable block (ram,0x0805652e)

undefined8 inst_6_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_6_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080565f7)

undefined8 inst_6_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_6_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080566b3)
// WARNING: Removing unreachable block (ram,0x080566c0)

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



// WARNING: Removing unreachable block (ram,0x08056787)

undefined8 inst_7_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_7_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805684e)
// WARNING: Removing unreachable block (ram,0x08056841)
// WARNING: Removing unreachable block (ram,0x08056868)

undefined8 inst_7_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_7_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08056915)

undefined8 inst_7_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_7_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080569cf)
// WARNING: Removing unreachable block (ram,0x080569dc)

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



// WARNING: Removing unreachable block (ram,0x08056a96)
// WARNING: Removing unreachable block (ram,0x08056aa3)

undefined8 inst_7_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_7_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08056b5d)

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



// WARNING: Removing unreachable block (ram,0x08056c31)
// WARNING: Removing unreachable block (ram,0x08056c24)
// WARNING: Removing unreachable block (ram,0x08056c4b)

undefined8 inst_7_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_7_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08056cf8)
// WARNING: Removing unreachable block (ram,0x08056ceb)
// WARNING: Removing unreachable block (ram,0x08056d12)

undefined8 inst_7_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_7_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08056dbf)
// WARNING: Removing unreachable block (ram,0x08056dd9)

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



// WARNING: Removing unreachable block (ram,0x08056e79)

undefined8 inst_7_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_8_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08056f53)
// WARNING: Removing unreachable block (ram,0x08056f6d)

undefined8 inst_8_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_8_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08057020)
// WARNING: Removing unreachable block (ram,0x0805703a)

undefined8 inst_8_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_8_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080570ed)

undefined8 inst_8_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_8_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080571d4)

undefined8 inst_8_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_8_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08057287)
// WARNING: Removing unreachable block (ram,0x080572a1)

undefined8 inst_8_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_8_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08057354)
// WARNING: Removing unreachable block (ram,0x0805736e)

undefined8 inst_8_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_8_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805743b)

undefined8 inst_8_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_8_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080574e1)
// WARNING: Removing unreachable block (ram,0x080574ee)

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



// WARNING: Removing unreachable block (ram,0x080575ba)
// WARNING: Removing unreachable block (ram,0x080575d4)

undefined8 inst_8_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_8_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080576a1)

undefined8 inst_8_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_9_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08057743)

undefined8 inst_9_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_9_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08057819)

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



// WARNING: Removing unreachable block (ram,0x080578d5)
// WARNING: Removing unreachable block (ram,0x080578e2)

undefined8 inst_9_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_9_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080579ab)

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



// WARNING: Removing unreachable block (ram,0x08057a67)

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



// WARNING: Removing unreachable block (ram,0x08057b30)

undefined8 inst_9_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_9_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08057c06)

undefined8 inst_9_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_9_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08057cc2)

undefined8 inst_9_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_9_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08057d98)

undefined8 inst_9_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_9_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08057e61)
// WARNING: Removing unreachable block (ram,0x08057e7b)

undefined8 inst_9_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_10_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08057f23)

undefined8 inst_10_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_10_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08057fff)
// WARNING: Removing unreachable block (ram,0x08058019)

undefined8 inst_10_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_10_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080580ce)

undefined8 inst_10_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_10_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805819c)
// WARNING: Removing unreachable block (ram,0x080581b6)

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



// WARNING: Removing unreachable block (ram,0x0805825c)
// WARNING: Removing unreachable block (ram,0x08058269)

undefined8 inst_10_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_10_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08058337)
// WARNING: Removing unreachable block (ram,0x08058351)

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



// WARNING: Removing unreachable block (ram,0x080583f9)

undefined8 inst_10_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_10_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080584d5)
// WARNING: Removing unreachable block (ram,0x080584c8)
// WARNING: Removing unreachable block (ram,0x080584ef)

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



// WARNING: Removing unreachable block (ram,0x08058596)
// WARNING: Removing unreachable block (ram,0x080585a3)

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



// WARNING: Removing unreachable block (ram,0x08058672)
// WARNING: Removing unreachable block (ram,0x08058665)
// WARNING: Removing unreachable block (ram,0x0805868c)

undefined8 inst_10_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_11_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08058753)

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



// WARNING: Removing unreachable block (ram,0x080587f3)

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



// WARNING: Removing unreachable block (ram,0x080588c7)

undefined8 inst_11_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_11_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805898e)
// WARNING: Removing unreachable block (ram,0x08058981)
// WARNING: Removing unreachable block (ram,0x080589a8)

undefined8 inst_11_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_11_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08058a55)
// WARNING: Removing unreachable block (ram,0x08058a6f)

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



// WARNING: Removing unreachable block (ram,0x08058b1c)
// WARNING: Removing unreachable block (ram,0x08058b36)

undefined8 inst_11_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_11_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08058be3)
// WARNING: Removing unreachable block (ram,0x08058bd6)
// WARNING: Removing unreachable block (ram,0x08058bfd)

undefined8 inst_11_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_11_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08058c9d)
// WARNING: Removing unreachable block (ram,0x08058caa)

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



// WARNING: Removing unreachable block (ram,0x08058d64)

undefined8 inst_11_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_11_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08058e38)
// WARNING: Removing unreachable block (ram,0x08058e52)

undefined8 inst_11_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_12_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08058ef4)

undefined8 inst_12_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_12_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08058fca)
// WARNING: Removing unreachable block (ram,0x08058fbd)
// WARNING: Removing unreachable block (ram,0x08058fe4)

undefined8 inst_12_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_12_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08059086)
// WARNING: Removing unreachable block (ram,0x08059093)

undefined8 inst_12_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_12_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805915c)

undefined8 inst_12_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_12_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08059225)

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



// WARNING: Removing unreachable block (ram,0x080592ee)

undefined8 inst_12_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_12_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080593aa)

undefined8 inst_12_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_12_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08059480)
// WARNING: Removing unreachable block (ram,0x08059473)
// WARNING: Removing unreachable block (ram,0x0805949a)

undefined8 inst_12_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_12_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08059548)
// WARNING: Removing unreachable block (ram,0x08059562)

undefined8 inst_12_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_12_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08059611)

undefined8 inst_12_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_13_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080596f2)

undefined8 inst_13_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_13_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805979f)
// WARNING: Removing unreachable block (ram,0x08059792)
// WARNING: Removing unreachable block (ram,0x080597b9)

undefined8 inst_13_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_13_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08059880)

undefined8 inst_13_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_13_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805992d)
// WARNING: Removing unreachable block (ram,0x08059920)
// WARNING: Removing unreachable block (ram,0x08059947)

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



// WARNING: Removing unreachable block (ram,0x080599f4)
// WARNING: Removing unreachable block (ram,0x080599e7)
// WARNING: Removing unreachable block (ram,0x08059a0e)

undefined8 inst_13_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_13_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08059aae)
// WARNING: Removing unreachable block (ram,0x08059abb)

undefined8 inst_13_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_13_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08059b82)

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



// WARNING: Removing unreachable block (ram,0x08059c49)
// WARNING: Removing unreachable block (ram,0x08059c3c)
// WARNING: Removing unreachable block (ram,0x08059c63)

undefined8 inst_13_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_13_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08059d10)
// WARNING: Removing unreachable block (ram,0x08059d2a)

undefined8 inst_13_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_13_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08059dd7)
// WARNING: Removing unreachable block (ram,0x08059dca)
// WARNING: Removing unreachable block (ram,0x08059df1)

undefined8 inst_13_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_14_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08059ea4)
// WARNING: Removing unreachable block (ram,0x08059ebe)

undefined8 inst_14_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_14_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08059f6f)

undefined8 inst_14_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_14_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805a02f)
// WARNING: Removing unreachable block (ram,0x0805a03c)

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



// WARNING: Removing unreachable block (ram,0x0805a0fb)

undefined8 inst_14_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_14_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805a1d5)
// WARNING: Removing unreachable block (ram,0x0805a1c8)
// WARNING: Removing unreachable block (ram,0x0805a1ef)

undefined8 inst_14_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_14_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805a295)
// WARNING: Removing unreachable block (ram,0x0805a2a2)

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



// WARNING: Removing unreachable block (ram,0x0805a36f)

undefined8 inst_14_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_14_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805a42f)
// WARNING: Removing unreachable block (ram,0x0805a43c)

undefined8 inst_14_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_14_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805a4fc)

undefined8 inst_14_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_14_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805a5c9)
// WARNING: Removing unreachable block (ram,0x0805a5d6)

undefined8 inst_14_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_15_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805a692)

undefined8 inst_15_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_15_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805a768)
// WARNING: Removing unreachable block (ram,0x0805a782)

undefined8 inst_15_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_15_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805a84b)

undefined8 inst_15_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_15_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805a8fa)

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



// WARNING: Removing unreachable block (ram,0x0805a9c3)
// WARNING: Removing unreachable block (ram,0x0805a9b6)
// WARNING: Removing unreachable block (ram,0x0805a9dd)

undefined8 inst_15_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_15_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805aa7f)
// WARNING: Removing unreachable block (ram,0x0805aa8c)

undefined8 inst_15_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_15_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805ab55)
// WARNING: Removing unreachable block (ram,0x0805ab6f)

undefined8 inst_15_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_15_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805ac1e)

undefined8 inst_15_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_15_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805ace7)

undefined8 inst_15_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_15_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805adb0)

undefined8 inst_15_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_16_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805ae99)

undefined8 inst_16_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_16_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805af40)
// WARNING: Removing unreachable block (ram,0x0805af4d)

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



// WARNING: Removing unreachable block (ram,0x0805b01c)
// WARNING: Removing unreachable block (ram,0x0805b036)

undefined8 inst_16_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_16_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805b0de)
// WARNING: Removing unreachable block (ram,0x0805b0eb)

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



// WARNING: Removing unreachable block (ram,0x0805b1ba)
// WARNING: Removing unreachable block (ram,0x0805b1d4)

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



// WARNING: Removing unreachable block (ram,0x0805b289)
// WARNING: Removing unreachable block (ram,0x0805b2a3)

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



// WARNING: Removing unreachable block (ram,0x0805b34a)
// WARNING: Removing unreachable block (ram,0x0805b357)

undefined8 inst_16_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_16_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805b426)
// WARNING: Removing unreachable block (ram,0x0805b440)

undefined8 inst_16_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_16_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805b4e8)
// WARNING: Removing unreachable block (ram,0x0805b4f5)

undefined8 inst_16_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_16_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805b5b6)

undefined8 inst_16_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_17_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805b68a)
// WARNING: Removing unreachable block (ram,0x0805b6a4)

undefined8 inst_17_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_17_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805b751)
// WARNING: Removing unreachable block (ram,0x0805b76b)

undefined8 inst_17_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_17_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805b818)
// WARNING: Removing unreachable block (ram,0x0805b832)

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



// WARNING: Removing unreachable block (ram,0x0805b8df)
// WARNING: Removing unreachable block (ram,0x0805b8f9)

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



// WARNING: Removing unreachable block (ram,0x0805b9c0)

undefined8 inst_17_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_17_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805ba6d)

undefined8 inst_17_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_17_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805bb34)
// WARNING: Removing unreachable block (ram,0x0805bb4e)

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



// WARNING: Removing unreachable block (ram,0x0805bc15)

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



// WARNING: Removing unreachable block (ram,0x0805bcb5)

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



// WARNING: Removing unreachable block (ram,0x0805bda3)

undefined8 inst_17_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_18_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805be50)

undefined8 inst_18_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_18_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805bf17)

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



// WARNING: Removing unreachable block (ram,0x0805bfd1)

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



// WARNING: Removing unreachable block (ram,0x0805c0a4)

undefined8 inst_18_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_18_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805c16b)

undefined8 inst_18_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_18_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805c232)
// WARNING: Removing unreachable block (ram,0x0805c24c)

undefined8 inst_18_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_18_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805c313)

undefined8 inst_18_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_18_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805c3da)

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



// WARNING: Removing unreachable block (ram,0x0805c4a1)

undefined8 inst_18_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_18_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805c54d)
// WARNING: Removing unreachable block (ram,0x0805c540)
// WARNING: Removing unreachable block (ram,0x0805c567)

undefined8 inst_18_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_19_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805c605)

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



// WARNING: Removing unreachable block (ram,0x0805c6ca)

undefined8 inst_19_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_19_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805c79c)

undefined8 inst_19_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_19_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805c854)
// WARNING: Removing unreachable block (ram,0x0805c861)

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



// WARNING: Removing unreachable block (ram,0x0805c926)
// WARNING: Removing unreachable block (ram,0x0805c919)
// WARNING: Removing unreachable block (ram,0x0805c940)

undefined8 inst_19_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_19_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805c9eb)

undefined8 inst_19_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_19_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805cab0)

undefined8 inst_19_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_19_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805cb75)
// WARNING: Removing unreachable block (ram,0x0805cb8f)

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



// WARNING: Removing unreachable block (ram,0x0805cc3a)

undefined8 inst_19_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_19_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805cd19)

undefined8 inst_19_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_20_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805cdbc)
// WARNING: Removing unreachable block (ram,0x0805cdc9)

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



// WARNING: Removing unreachable block (ram,0x0805ce87)
// WARNING: Removing unreachable block (ram,0x0805ce94)

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



// WARNING: Removing unreachable block (ram,0x0805cf78)

undefined8 inst_20_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_20_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805d028)
// WARNING: Removing unreachable block (ram,0x0805d01b)
// WARNING: Removing unreachable block (ram,0x0805d042)

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



// WARNING: Removing unreachable block (ram,0x0805d0f2)
// WARNING: Removing unreachable block (ram,0x0805d10c)

undefined8 inst_20_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_20_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805d1bd)
// WARNING: Removing unreachable block (ram,0x0805d1d7)

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



// WARNING: Removing unreachable block (ram,0x0805d288)
// WARNING: Removing unreachable block (ram,0x0805d2a2)

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



// WARNING: Removing unreachable block (ram,0x0805d353)
// WARNING: Removing unreachable block (ram,0x0805d36d)

undefined8 inst_20_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_20_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805d41e)
// WARNING: Removing unreachable block (ram,0x0805d438)

undefined8 inst_20_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_20_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805d4e8)
// WARNING: Removing unreachable block (ram,0x0805d502)

undefined8 inst_20_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_21_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805d5af)
// WARNING: Removing unreachable block (ram,0x0805d5c9)

undefined8 inst_21_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_21_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805d676)
// WARNING: Removing unreachable block (ram,0x0805d669)
// WARNING: Removing unreachable block (ram,0x0805d690)

undefined8 inst_21_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_21_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805d757)

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



// WARNING: Removing unreachable block (ram,0x0805d804)

undefined8 inst_21_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_21_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805d8e5)

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



// WARNING: Removing unreachable block (ram,0x0805d992)
// WARNING: Removing unreachable block (ram,0x0805d985)
// WARNING: Removing unreachable block (ram,0x0805d9ac)

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



// WARNING: Removing unreachable block (ram,0x0805da73)

undefined8 inst_21_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_21_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805db13)

undefined8 inst_21_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_21_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805dbe7)
// WARNING: Removing unreachable block (ram,0x0805dbda)
// WARNING: Removing unreachable block (ram,0x0805dc01)

undefined8 inst_21_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_21_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805dca1)

undefined8 inst_21_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_22_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805dd7b)
// WARNING: Removing unreachable block (ram,0x0805dd95)

undefined8 inst_22_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_22_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805de3b)
// WARNING: Removing unreachable block (ram,0x0805de48)

undefined8 inst_22_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_22_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805df2e)

undefined8 inst_22_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_22_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805dfe1)
// WARNING: Removing unreachable block (ram,0x0805dffb)

undefined8 inst_22_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_22_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805e0a0)
// WARNING: Removing unreachable block (ram,0x0805e0ad)

undefined8 inst_22_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_22_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805e17a)
// WARNING: Removing unreachable block (ram,0x0805e194)

undefined8 inst_22_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_22_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805e247)
// WARNING: Removing unreachable block (ram,0x0805e261)

undefined8 inst_22_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_22_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805e307)
// WARNING: Removing unreachable block (ram,0x0805e314)

undefined8 inst_22_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_22_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805e3d4)

undefined8 inst_22_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_22_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805e4ad)
// WARNING: Removing unreachable block (ram,0x0805e4c7)

undefined8 inst_22_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_23_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805e565)

undefined8 inst_23_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_23_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805e651)

undefined8 inst_23_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_23_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805e716)

undefined8 inst_23_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_23_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805e7b4)

undefined8 inst_23_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_23_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805e8a0)

undefined8 inst_23_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_23_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805e93e)
// WARNING: Removing unreachable block (ram,0x0805e94b)

undefined8 inst_23_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_23_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805ea03)
// WARNING: Removing unreachable block (ram,0x0805ea10)

undefined8 inst_23_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_23_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805eac8)

undefined8 inst_23_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_23_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805ebb4)

undefined8 inst_23_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_23_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805ec5f)

undefined8 inst_23_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_24_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805ed19)
// WARNING: Removing unreachable block (ram,0x0805ed26)

undefined8 inst_24_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_24_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805eded)
// WARNING: Removing unreachable block (ram,0x0805ede0)
// WARNING: Removing unreachable block (ram,0x0805ee07)

undefined8 inst_24_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_24_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805eeb4)
// WARNING: Removing unreachable block (ram,0x0805eea7)
// WARNING: Removing unreachable block (ram,0x0805eece)

undefined8 inst_24_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_24_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805ef7b)
// WARNING: Removing unreachable block (ram,0x0805ef6e)
// WARNING: Removing unreachable block (ram,0x0805ef95)

undefined8 inst_24_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_24_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805f042)
// WARNING: Removing unreachable block (ram,0x0805f035)
// WARNING: Removing unreachable block (ram,0x0805f05c)

undefined8 inst_24_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_24_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805f109)
// WARNING: Removing unreachable block (ram,0x0805f0fc)
// WARNING: Removing unreachable block (ram,0x0805f123)

undefined8 inst_24_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_24_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805f1d0)
// WARNING: Removing unreachable block (ram,0x0805f1c3)
// WARNING: Removing unreachable block (ram,0x0805f1ea)

undefined8 inst_24_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_24_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805f297)
// WARNING: Removing unreachable block (ram,0x0805f28a)
// WARNING: Removing unreachable block (ram,0x0805f2b1)

undefined8 inst_24_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_24_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805f35d)
// WARNING: Removing unreachable block (ram,0x0805f350)
// WARNING: Removing unreachable block (ram,0x0805f377)

undefined8 inst_24_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_24_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805f424)
// WARNING: Removing unreachable block (ram,0x0805f417)
// WARNING: Removing unreachable block (ram,0x0805f43e)

undefined8 inst_24_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_25_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805f4e9)
// WARNING: Removing unreachable block (ram,0x0805f4dc)
// WARNING: Removing unreachable block (ram,0x0805f503)

undefined8 inst_25_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_25_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805f5a1)
// WARNING: Removing unreachable block (ram,0x0805f5ae)

undefined8 inst_25_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_25_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805f673)
// WARNING: Removing unreachable block (ram,0x0805f666)
// WARNING: Removing unreachable block (ram,0x0805f68d)

undefined8 inst_25_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_25_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805f72b)
// WARNING: Removing unreachable block (ram,0x0805f738)

undefined8 inst_25_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_25_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805f7fd)
// WARNING: Removing unreachable block (ram,0x0805f7f0)
// WARNING: Removing unreachable block (ram,0x0805f817)

undefined8 inst_25_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_25_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805f8c2)
// WARNING: Removing unreachable block (ram,0x0805f8b5)
// WARNING: Removing unreachable block (ram,0x0805f8dc)

undefined8 inst_25_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_25_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805f987)
// WARNING: Removing unreachable block (ram,0x0805f97a)
// WARNING: Removing unreachable block (ram,0x0805f9a1)

undefined8 inst_25_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_25_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805fa3f)
// WARNING: Removing unreachable block (ram,0x0805fa4c)

undefined8 inst_25_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_25_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805fb11)
// WARNING: Removing unreachable block (ram,0x0805fb04)
// WARNING: Removing unreachable block (ram,0x0805fb2b)

undefined8 inst_25_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_25_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805fbd6)
// WARNING: Removing unreachable block (ram,0x0805fbc9)
// WARNING: Removing unreachable block (ram,0x0805fbf0)

undefined8 inst_25_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_26_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805fca0)
// WARNING: Removing unreachable block (ram,0x0805fc93)
// WARNING: Removing unreachable block (ram,0x0805fcba)

undefined8 inst_26_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_26_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805fd6a)
// WARNING: Removing unreachable block (ram,0x0805fd5d)
// WARNING: Removing unreachable block (ram,0x0805fd84)

undefined8 inst_26_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_26_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805fe28)
// WARNING: Removing unreachable block (ram,0x0805fe35)

undefined8 inst_26_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_26_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805ff00)
// WARNING: Removing unreachable block (ram,0x0805fef3)
// WARNING: Removing unreachable block (ram,0x0805ff1a)

undefined8 inst_26_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_26_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805ffcb)
// WARNING: Removing unreachable block (ram,0x0805ffbe)
// WARNING: Removing unreachable block (ram,0x0805ffe5)

undefined8 inst_26_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_26_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08060095)
// WARNING: Removing unreachable block (ram,0x08060088)
// WARNING: Removing unreachable block (ram,0x080600af)

undefined8 inst_26_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_26_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08060153)
// WARNING: Removing unreachable block (ram,0x08060160)

undefined8 inst_26_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_26_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806022b)
// WARNING: Removing unreachable block (ram,0x0806021e)
// WARNING: Removing unreachable block (ram,0x08060245)

undefined8 inst_26_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_26_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080602f5)
// WARNING: Removing unreachable block (ram,0x080602e8)
// WARNING: Removing unreachable block (ram,0x0806030f)

undefined8 inst_26_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_26_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080603bf)
// WARNING: Removing unreachable block (ram,0x080603b2)
// WARNING: Removing unreachable block (ram,0x080603d9)

undefined8 inst_26_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_27_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08060486)
// WARNING: Removing unreachable block (ram,0x08060479)
// WARNING: Removing unreachable block (ram,0x080604a0)

undefined8 inst_27_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_27_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806054d)
// WARNING: Removing unreachable block (ram,0x08060540)
// WARNING: Removing unreachable block (ram,0x08060567)

undefined8 inst_27_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_27_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08060614)
// WARNING: Removing unreachable block (ram,0x08060607)
// WARNING: Removing unreachable block (ram,0x0806062e)

undefined8 inst_27_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_27_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080606db)
// WARNING: Removing unreachable block (ram,0x080606ce)
// WARNING: Removing unreachable block (ram,0x080606f5)

undefined8 inst_27_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_27_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080607a2)
// WARNING: Removing unreachable block (ram,0x08060795)
// WARNING: Removing unreachable block (ram,0x080607bc)

undefined8 inst_27_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_27_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08060869)
// WARNING: Removing unreachable block (ram,0x0806085c)
// WARNING: Removing unreachable block (ram,0x08060883)

undefined8 inst_27_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_27_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08060930)
// WARNING: Removing unreachable block (ram,0x08060923)
// WARNING: Removing unreachable block (ram,0x0806094a)

undefined8 inst_27_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_27_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080609f7)
// WARNING: Removing unreachable block (ram,0x080609ea)
// WARNING: Removing unreachable block (ram,0x08060a11)

undefined8 inst_27_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_27_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08060ab1)
// WARNING: Removing unreachable block (ram,0x08060abe)

undefined8 inst_27_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_27_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08060b85)
// WARNING: Removing unreachable block (ram,0x08060b78)
// WARNING: Removing unreachable block (ram,0x08060b9f)

undefined8 inst_27_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_28_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08060c52)
// WARNING: Removing unreachable block (ram,0x08060c45)
// WARNING: Removing unreachable block (ram,0x08060c6c)

undefined8 inst_28_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_28_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08060d1e)
// WARNING: Removing unreachable block (ram,0x08060d11)
// WARNING: Removing unreachable block (ram,0x08060d38)

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



// WARNING: Removing unreachable block (ram,0x08060deb)
// WARNING: Removing unreachable block (ram,0x08060dde)
// WARNING: Removing unreachable block (ram,0x08060e05)

undefined8 inst_28_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_28_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08060eb8)
// WARNING: Removing unreachable block (ram,0x08060eab)
// WARNING: Removing unreachable block (ram,0x08060ed2)

undefined8 inst_28_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_28_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08060f78)
// WARNING: Removing unreachable block (ram,0x08060f85)

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



// WARNING: Removing unreachable block (ram,0x08061052)
// WARNING: Removing unreachable block (ram,0x08061045)
// WARNING: Removing unreachable block (ram,0x0806106c)

undefined8 inst_28_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_28_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806111e)
// WARNING: Removing unreachable block (ram,0x08061111)
// WARNING: Removing unreachable block (ram,0x08061138)

undefined8 inst_28_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_28_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080611eb)
// WARNING: Removing unreachable block (ram,0x080611de)
// WARNING: Removing unreachable block (ram,0x08061205)

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



// WARNING: Removing unreachable block (ram,0x080612b8)
// WARNING: Removing unreachable block (ram,0x080612ab)
// WARNING: Removing unreachable block (ram,0x080612d2)

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



// WARNING: Removing unreachable block (ram,0x08061385)
// WARNING: Removing unreachable block (ram,0x08061378)
// WARNING: Removing unreachable block (ram,0x0806139f)

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



// WARNING: Removing unreachable block (ram,0x0806144a)
// WARNING: Removing unreachable block (ram,0x0806143d)
// WARNING: Removing unreachable block (ram,0x08061464)

undefined8 inst_29_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_29_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806150f)
// WARNING: Removing unreachable block (ram,0x08061502)
// WARNING: Removing unreachable block (ram,0x08061529)

undefined8 inst_29_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_29_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080615d4)
// WARNING: Removing unreachable block (ram,0x080615c7)
// WARNING: Removing unreachable block (ram,0x080615ee)

undefined8 inst_29_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_29_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08061699)
// WARNING: Removing unreachable block (ram,0x0806168c)
// WARNING: Removing unreachable block (ram,0x080616b3)

undefined8 inst_29_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_29_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806175e)
// WARNING: Removing unreachable block (ram,0x08061751)
// WARNING: Removing unreachable block (ram,0x08061778)

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



// WARNING: Removing unreachable block (ram,0x08061823)
// WARNING: Removing unreachable block (ram,0x08061816)
// WARNING: Removing unreachable block (ram,0x0806183d)

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



// WARNING: Removing unreachable block (ram,0x080618e8)
// WARNING: Removing unreachable block (ram,0x080618db)
// WARNING: Removing unreachable block (ram,0x08061902)

undefined8 inst_29_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_29_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080619ad)
// WARNING: Removing unreachable block (ram,0x080619a0)
// WARNING: Removing unreachable block (ram,0x080619c7)

undefined8 inst_29_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_29_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08061a72)
// WARNING: Removing unreachable block (ram,0x08061a65)
// WARNING: Removing unreachable block (ram,0x08061a8c)

undefined8 inst_29_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_29_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08061b37)
// WARNING: Removing unreachable block (ram,0x08061b2a)
// WARNING: Removing unreachable block (ram,0x08061b51)

undefined8 inst_29_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



undefined8 inst_30_values_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0;
  while ((0x1dcc5e0aU >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return CONCAT44(in_EDX,iVar1 + -1);
}



longlong inst_30_flags_var_0(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0;
  while ((0xb858bde9U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_30_values_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0;
  while ((0xc9f02a97U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return CONCAT44(in_EDX,iVar1);
}



longlong inst_30_flags_var_1(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0;
  while ((0x3b0a8463U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_30_values_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0;
  while ((0x75f58690U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_30_flags_var_2(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0;
  while ((0x7a7d85f5U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_30_values_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0;
  while ((0x97750e86U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return CONCAT44(in_EDX,iVar1 + -1);
}



longlong inst_30_flags_var_3(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0;
  while ((0x3d0e5a83U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_30_values_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0;
  while ((0xee69df40U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return CONCAT44(in_EDX,iVar1 + -6);
}



longlong inst_30_flags_var_4(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0;
  while ((0x5fe3b13fU >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_30_values_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0;
  while ((0x8689b31dU >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return CONCAT44(in_EDX,iVar1);
}



longlong inst_30_flags_var_5(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0;
  while ((0x142b13a9U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_30_values_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0;
  while ((0x869c7f2bU >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return CONCAT44(in_EDX,iVar1);
}



longlong inst_30_flags_var_6(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0;
  while ((0x554d1c8cU >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_30_values_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0;
  while ((0x87c6470U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_30_flags_var_7(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0;
  while ((0xa18c7302U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_30_values_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0;
  while ((0xf48dd40U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return CONCAT44(in_EDX,iVar1 + -6);
}



longlong inst_30_flags_var_8(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0;
  while ((0x5b9bfb52U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_30_values_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0;
  while ((0x65271bdbU >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return CONCAT44(in_EDX,iVar1);
}



longlong inst_30_flags_var_9(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0;
  while ((0xaf61419dU >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_31_values_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0x1f;
  while (0x3b482107U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return CONCAT44(in_EDX,iVar1 + -0x1d);
}



longlong inst_31_flags_var_0(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0x1f;
  while (0xcef90ddaU >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_31_values_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0x1f;
  while (0xbc1a944aU >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return CONCAT44(in_EDX,iVar1 + -0x1f);
}



longlong inst_31_flags_var_1(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0x1f;
  while (0xdd25b45aU >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_31_values_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0x1f;
  while (0x90cc1effU >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return CONCAT44(in_EDX,iVar1 + -0x1f);
}



longlong inst_31_flags_var_2(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0x1f;
  while (0x7c792aefU >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_31_values_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0x1f;
  while (0xde26b815U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return CONCAT44(in_EDX,iVar1 + -0x1f);
}



longlong inst_31_flags_var_3(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0x1f;
  while (0x132f7c71U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_31_values_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0x1f;
  while (0x1036b9a3U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return CONCAT44(in_EDX,iVar1 + -0x1c);
}



longlong inst_31_flags_var_4(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0x1f;
  while (0xeb325ff4U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_31_values_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0x1f;
  while (0x7b0425fbU >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return CONCAT44(in_EDX,iVar1 + -0x1e);
}



longlong inst_31_flags_var_5(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0x1f;
  while (0xc11e77f2U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_31_values_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0x1f;
  while (0x29c41dc4U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return CONCAT44(in_EDX,iVar1 + -0x1d);
}



longlong inst_31_flags_var_6(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0x1f;
  while (0xd0f3e45eU >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_31_values_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0x1f;
  while (0xaedb4f90U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return CONCAT44(in_EDX,iVar1 + -0x1f);
}



longlong inst_31_flags_var_7(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0x1f;
  while (0x2e786c99U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_31_values_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0x1f;
  while (0x847aa2fdU >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return CONCAT44(in_EDX,iVar1 + -0x1f);
}



longlong inst_31_flags_var_8(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0x1f;
  while (0x735d2511U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_31_values_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0x1f;
  while (0xd1ddac4cU >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return CONCAT44(in_EDX,iVar1 + -0x1f);
}



longlong inst_31_flags_var_9(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0x1f;
  while (0xf7c36285U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_32_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_32_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_32_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_32_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_32_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_32_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_32_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_32_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_32_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_32_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_32_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_32_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_32_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_32_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_32_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_32_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_32_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_32_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_32_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_32_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_33_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_33_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_33_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_33_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_33_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_33_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_33_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_33_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_33_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_33_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_33_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_33_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_33_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_33_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_33_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_33_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_33_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_33_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_33_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_33_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_34_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080635bb)

longlong inst_34_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_34_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806366c)

longlong inst_34_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_34_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806371d)

longlong inst_34_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_34_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_34_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_34_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806387f)

longlong inst_34_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_34_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_34_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_34_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080639e1)

longlong inst_34_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_34_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08063a92)

longlong inst_34_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_34_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_34_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_34_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_34_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_35_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_35_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_35_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08063d52)

longlong inst_35_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_35_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08063e01)

longlong inst_35_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_35_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_35_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_35_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_35_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_35_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_35_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_35_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_35_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_35_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806416c)

longlong inst_35_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_35_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806421b)

longlong inst_35_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_35_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_35_flags_var_9(void)

{
  uint in_EDX;
  
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



// WARNING: Removing unreachable block (ram,0x08064430)

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



// WARNING: Removing unreachable block (ram,0x08064596)

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



// WARNING: Removing unreachable block (ram,0x08064649)

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



// WARNING: Removing unreachable block (ram,0x080646fc)

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



// WARNING: Removing unreachable block (ram,0x08064915)

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



// WARNING: Removing unreachable block (ram,0x08064c8c)

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



// WARNING: Removing unreachable block (ram,0x08064d3d)

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



// WARNING: Removing unreachable block (ram,0x08064e9f)

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



// WARNING: Removing unreachable block (ram,0x08064f50)

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



// WARNING: Removing unreachable block (ram,0x080650b2)

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



// WARNING: Removing unreachable block (ram,0x08065163)

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



// WARNING: Removing unreachable block (ram,0x0806563a)

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



// WARNING: Removing unreachable block (ram,0x080656eb)

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



// WARNING: Removing unreachable block (ram,0x0806584b)

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



// WARNING: Removing unreachable block (ram,0x080658fa)

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



// WARNING: Removing unreachable block (ram,0x08065b07)

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



// WARNING: Removing unreachable block (ram,0x08065bb6)

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



// WARNING: Removing unreachable block (ram,0x08065d14)

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



// WARNING: Removing unreachable block (ram,0x08065e72)

longlong inst_39_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_40_values_var_0(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffc);
}



// WARNING: Removing unreachable block (ram,0x08065f25)

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



// WARNING: Removing unreachable block (ram,0x08065fd8)

longlong inst_40_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_40_values_var_2(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffc);
}



longlong inst_40_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_40_values_var_3(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffc000);
}



// WARNING: Removing unreachable block (ram,0x0806613e)

longlong inst_40_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_40_values_var_4(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffe00);
}



longlong inst_40_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_40_values_var_5(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffffe0);
}



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



// WARNING: Removing unreachable block (ram,0x08066357)

longlong inst_40_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_40_values_var_7(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffff8000);
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



undefined8 inst_40_values_var_9(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffc000);
}



// WARNING: Removing unreachable block (ram,0x08066570)

longlong inst_40_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_41_values_var_0(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xf0000000);
}



// WARNING: Removing unreachable block (ram,0x08066621)

longlong inst_41_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_41_values_var_1(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffff00);
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



// WARNING: Removing unreachable block (ram,0x08066783)

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



// WARNING: Removing unreachable block (ram,0x08066834)

longlong inst_41_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_41_values_var_4(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffff8);
}



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



undefined8 inst_41_values_var_6(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffc);
}



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



// WARNING: Removing unreachable block (ram,0x08066af8)

longlong inst_41_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_41_values_var_8(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffff0);
}



// WARNING: Removing unreachable block (ram,0x08066ba9)

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



// WARNING: Removing unreachable block (ram,0x08066d0b)

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



// WARNING: Removing unreachable block (ram,0x08066e6d)

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



// WARNING: Removing unreachable block (ram,0x08066f1e)

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



// WARNING: Removing unreachable block (ram,0x08067080)

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



// WARNING: Removing unreachable block (ram,0x080671e2)

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



// WARNING: Removing unreachable block (ram,0x08067293)

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



// WARNING: Removing unreachable block (ram,0x080673f3)

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



// WARNING: Removing unreachable block (ram,0x080674a2)

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



// WARNING: Removing unreachable block (ram,0x08067600)

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



// WARNING: Removing unreachable block (ram,0x0806775e)

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



// WARNING: Removing unreachable block (ram,0x0806780d)

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



// WARNING: Removing unreachable block (ram,0x080678bc)

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



// WARNING: Removing unreachable block (ram,0x0806796b)

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



longlong inst_44_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
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



// WARNING: Removing unreachable block (ram,0x08067b80)

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



// WARNING: Removing unreachable block (ram,0x08067c33)

longlong inst_44_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_44_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_44_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_44_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08067d99)

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



// WARNING: Removing unreachable block (ram,0x08067e4c)

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



longlong inst_44_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_44_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
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



// WARNING: Removing unreachable block (ram,0x08068118)

longlong inst_44_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_45_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_45_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_45_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_45_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_45_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806832b)

longlong inst_45_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_45_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_45_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_45_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_45_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_45_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_45_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_45_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
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



longlong inst_45_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_45_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08068802)

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



// WARNING: Removing unreachable block (ram,0x08068a15)

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



// WARNING: Removing unreachable block (ram,0x08068ac6)

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



// WARNING: Removing unreachable block (ram,0x08068c28)

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



// WARNING: Removing unreachable block (ram,0x08068cd9)

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



// WARNING: Removing unreachable block (ram,0x08068e3b)

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



// WARNING: Removing unreachable block (ram,0x08068eec)

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



// WARNING: Removing unreachable block (ram,0x08068f9b)

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



// WARNING: Removing unreachable block (ram,0x080690f9)

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



// WARNING: Removing unreachable block (ram,0x08069728)

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



// WARNING: Removing unreachable block (ram,0x080697db)

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



// WARNING: Removing unreachable block (ram,0x0806988e)

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



// WARNING: Removing unreachable block (ram,0x08069941)

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



// WARNING: Removing unreachable block (ram,0x080699f4)

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



// WARNING: Removing unreachable block (ram,0x08069aa7)

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



// WARNING: Removing unreachable block (ram,0x08069b5a)

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



// WARNING: Removing unreachable block (ram,0x08069cc0)

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



// WARNING: Removing unreachable block (ram,0x08069d71)

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



// WARNING: Removing unreachable block (ram,0x08069e22)

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



// WARNING: Removing unreachable block (ram,0x08069ed3)

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



// WARNING: Removing unreachable block (ram,0x0806a035)

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



// WARNING: Removing unreachable block (ram,0x0806a0e6)

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



// WARNING: Removing unreachable block (ram,0x0806a197)

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



// WARNING: Removing unreachable block (ram,0x0806a2f9)

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



// WARNING: Removing unreachable block (ram,0x0806bdf5)

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



// WARNING: Removing unreachable block (ram,0x0806bea0)

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



// WARNING: Removing unreachable block (ram,0x0806bf4b)

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



// WARNING: Removing unreachable block (ram,0x0806bff6)

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



// WARNING: Removing unreachable block (ram,0x0806c0a1)

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



// WARNING: Removing unreachable block (ram,0x0806c14c)

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



// WARNING: Removing unreachable block (ram,0x0806c1f7)

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



// WARNING: Removing unreachable block (ram,0x0806c2a2)

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



// WARNING: Removing unreachable block (ram,0x0806c34d)

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



// WARNING: Removing unreachable block (ram,0x0806c3f8)

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



// WARNING: Removing unreachable block (ram,0x0806c4a3)

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



// WARNING: Removing unreachable block (ram,0x0806c54e)

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



// WARNING: Removing unreachable block (ram,0x0806c5f9)

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



// WARNING: Removing unreachable block (ram,0x0806c6a4)

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



// WARNING: Removing unreachable block (ram,0x0806c74f)

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



// WARNING: Removing unreachable block (ram,0x0806c7fa)

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



// WARNING: Removing unreachable block (ram,0x0806c8a5)

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



// WARNING: Removing unreachable block (ram,0x0806c950)

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



// WARNING: Removing unreachable block (ram,0x0806c9fb)

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



// WARNING: Removing unreachable block (ram,0x0806caa6)

longlong inst_55_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806cb00)

longlong inst_56_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806cb49)

longlong inst_56_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806cba9)

longlong inst_56_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806cbf2)

longlong inst_56_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806cc52)

longlong inst_56_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806cc9b)

longlong inst_56_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806ccfb)

longlong inst_56_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806cd44)

longlong inst_56_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806cda4)

longlong inst_56_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806cded)

longlong inst_56_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806ce4d)

longlong inst_56_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806ce96)

longlong inst_56_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806cef6)

longlong inst_56_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806cf3f)

longlong inst_56_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806cf9f)

longlong inst_56_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806cfe8)

longlong inst_56_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806d048)

longlong inst_56_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806d091)

longlong inst_56_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806d0f1)

longlong inst_56_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806d13a)

longlong inst_56_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806d19a)

longlong inst_57_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806d1e2)

longlong inst_57_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806d241)

longlong inst_57_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806d289)

longlong inst_57_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806d2e8)

longlong inst_57_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806d330)

longlong inst_57_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806d38f)

longlong inst_57_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806d3d7)

longlong inst_57_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806d436)

longlong inst_57_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806d47e)

longlong inst_57_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806d4dd)

longlong inst_57_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806d525)

longlong inst_57_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806d584)

longlong inst_57_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806d5cc)

longlong inst_57_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806d62b)

longlong inst_57_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806d673)

longlong inst_57_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806d6d2)

longlong inst_57_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806d71a)

longlong inst_57_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806d779)

longlong inst_57_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806d7c1)

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



longlong inst_59_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_60_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_60_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_60_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_60_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_60_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_60_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_60_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_60_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_60_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_60_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_60_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_60_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_60_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_60_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_60_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_60_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_60_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_60_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_60_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_60_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_61_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_61_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_61_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_61_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_61_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_61_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_61_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_61_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_61_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_61_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_61_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_61_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_61_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_61_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_61_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_61_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_61_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_61_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_61_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_61_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f260)

longlong inst_62_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f2a9)

longlong inst_62_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f309)

longlong inst_62_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f352)

longlong inst_62_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f3b2)

longlong inst_62_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f3fb)

longlong inst_62_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f45b)

longlong inst_62_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f4a4)

longlong inst_62_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f504)

longlong inst_62_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f54d)

longlong inst_62_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f5ad)

longlong inst_62_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f5f6)

longlong inst_62_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f656)

longlong inst_62_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f69f)

longlong inst_62_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f6ff)

longlong inst_62_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f748)

longlong inst_62_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f7a8)

longlong inst_62_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f7f1)

longlong inst_62_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f851)

longlong inst_62_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f89a)

longlong inst_62_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f8fa)

longlong inst_63_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f942)

longlong inst_63_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f9a1)

longlong inst_63_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806f9e9)

longlong inst_63_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806fa48)

longlong inst_63_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806fa90)

longlong inst_63_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806faef)

longlong inst_63_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806fb37)

longlong inst_63_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806fb96)

longlong inst_63_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806fbde)

longlong inst_63_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806fc3d)

longlong inst_63_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806fc85)

longlong inst_63_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806fce4)

longlong inst_63_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806fd2c)

longlong inst_63_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806fd8b)

longlong inst_63_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806fdd3)

longlong inst_63_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806fe32)

longlong inst_63_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806fe7a)

longlong inst_63_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806fed9)

longlong inst_63_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806ff21)

longlong inst_63_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806ff80)

longlong inst_64_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0806ffc9)

longlong inst_64_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08070029)

longlong inst_64_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08070072)

longlong inst_64_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080700d2)

longlong inst_64_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807011b)

longlong inst_64_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807017b)

longlong inst_64_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080701c4)

longlong inst_64_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08070224)

longlong inst_64_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807026d)

longlong inst_64_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080702cd)

longlong inst_64_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08070316)

longlong inst_64_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08070376)

longlong inst_64_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080703bf)

longlong inst_64_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807041f)

longlong inst_64_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08070468)

longlong inst_64_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080704c8)

longlong inst_64_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08070511)

longlong inst_64_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08070571)

longlong inst_64_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080705ba)

longlong inst_64_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807061a)

longlong inst_65_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08070662)

longlong inst_65_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080706c1)

longlong inst_65_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08070709)

longlong inst_65_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08070768)

longlong inst_65_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080707b0)

longlong inst_65_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807080f)

longlong inst_65_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08070857)

longlong inst_65_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080708b6)

longlong inst_65_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080708fe)

longlong inst_65_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807095d)

longlong inst_65_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080709a5)

longlong inst_65_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08070a04)

longlong inst_65_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08070a4c)

longlong inst_65_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08070aab)

longlong inst_65_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08070af3)

longlong inst_65_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08070b52)

longlong inst_65_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08070b9a)

longlong inst_65_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08070bf9)

longlong inst_65_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08070c41)

longlong inst_65_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_66_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_66_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_66_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_66_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_66_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_66_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_66_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_66_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_66_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_66_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_66_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_66_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_66_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_66_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_66_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_66_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_66_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_66_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_66_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_66_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_67_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_67_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_67_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_67_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_67_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_67_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_67_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_67_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_67_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_67_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_67_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_67_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_67_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_67_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_67_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_67_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_67_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_67_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_67_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_67_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_68_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_68_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_68_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_68_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_68_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_68_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_68_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_68_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_68_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_68_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_68_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_68_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_68_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_68_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_68_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_68_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_68_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_68_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_68_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_68_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_69_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_69_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_69_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_69_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_69_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_69_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_69_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_69_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_69_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_69_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_69_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_69_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_69_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_69_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_69_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_69_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_69_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_69_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_69_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_69_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080726e0)

longlong inst_70_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072729)

longlong inst_70_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072789)

longlong inst_70_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080727d2)

longlong inst_70_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072832)

longlong inst_70_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807287b)

longlong inst_70_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080728db)

longlong inst_70_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072924)

longlong inst_70_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072984)

longlong inst_70_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080729cd)

longlong inst_70_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072a2d)

longlong inst_70_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072a76)

longlong inst_70_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072ad6)

longlong inst_70_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072b1f)

longlong inst_70_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072b7f)

longlong inst_70_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072bc8)

longlong inst_70_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072c28)

longlong inst_70_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072c71)

longlong inst_70_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072cd1)

longlong inst_70_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072d1a)

longlong inst_70_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072d7a)

longlong inst_71_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072dc2)

longlong inst_71_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072e21)

longlong inst_71_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072e69)

longlong inst_71_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072ec8)

longlong inst_71_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072f10)

longlong inst_71_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072f6f)

longlong inst_71_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08072fb7)

longlong inst_71_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08073016)

longlong inst_71_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807305e)

longlong inst_71_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080730bd)

longlong inst_71_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08073105)

longlong inst_71_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08073164)

longlong inst_71_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080731ac)

longlong inst_71_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807320b)

longlong inst_71_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08073253)

longlong inst_71_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080732b2)

longlong inst_71_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080732fa)

longlong inst_71_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08073359)

longlong inst_71_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080733a1)

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



// WARNING: Removing unreachable block (ram,0x080734a9)

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



// WARNING: Removing unreachable block (ram,0x08073552)

longlong inst_72_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807359b)

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



// WARNING: Removing unreachable block (ram,0x08073644)

longlong inst_72_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080736a4)

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



// WARNING: Removing unreachable block (ram,0x0807374d)

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



// WARNING: Removing unreachable block (ram,0x080737f6)

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



// WARNING: Removing unreachable block (ram,0x0807389f)

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



// WARNING: Removing unreachable block (ram,0x08073948)

longlong inst_72_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08073991)

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



// WARNING: Removing unreachable block (ram,0x08073a3a)

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



// WARNING: Removing unreachable block (ram,0x08073ae2)

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



// WARNING: Removing unreachable block (ram,0x08073be8)

longlong inst_73_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08073c30)

longlong inst_73_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08073c8f)

longlong inst_73_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08073cd7)

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



// WARNING: Removing unreachable block (ram,0x08073d7e)

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



// WARNING: Removing unreachable block (ram,0x08073f2b)

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



// WARNING: Removing unreachable block (ram,0x0807401a)

longlong inst_73_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08074079)

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



longlong inst_74_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08074169)

longlong inst_74_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_74_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08074212)

longlong inst_74_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08074272)

longlong inst_74_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_74_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_74_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_74_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_74_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_74_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_74_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080744b6)

longlong inst_74_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_74_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_74_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_74_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08074608)

longlong inst_74_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_74_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080746b1)

longlong inst_74_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08074711)

longlong inst_74_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_74_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080747ba)

longlong inst_75_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_75_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_75_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_75_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08074908)

longlong inst_75_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_75_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080749af)

longlong inst_75_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_75_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08074a56)

longlong inst_75_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_75_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_75_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08074b45)

longlong inst_75_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08074ba4)

longlong inst_75_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_75_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08074c4b)

longlong inst_75_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08074c93)

longlong inst_75_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_75_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08074d3a)

longlong inst_75_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_75_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08074de1)

longlong inst_75_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_76_values_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x577ffa6f;
  if (in_PF) {
    iVar1 = 0x577fca0a;
  }
  return CONCAT44(in_EDX,iVar1 + -0x577fca0a);
}



longlong inst_76_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_76_values_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  bool in_PF;
  
  iVar1 = -0x27b53a0a;
  if (in_PF) {
    iVar1 = -0x27b5ec94;
  }
  return CONCAT44(in_EDX,iVar1 + 0x27b53a0a);
}



longlong inst_76_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_76_values_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x315271af;
  if (in_PF) {
    iVar1 = -0x3152c555;
  }
  return CONCAT44(in_EDX,iVar1 + 0x315271af);
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



longlong inst_76_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_76_values_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x66a1c5ba;
  if (in_PF) {
    iVar1 = -0x66a1d00e;
  }
  return CONCAT44(in_EDX,iVar1 + 0x66a1d00e);
}



longlong inst_76_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_76_values_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x56299c5d;
  if (in_PF) {
    iVar1 = 0x56299fdc;
  }
  return CONCAT44(in_EDX,iVar1 + -0x56299fdc);
}



longlong inst_76_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_76_values_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = -0xa5a09f7;
  if (in_PF) {
    iVar1 = -0xa5a9915;
  }
  return CONCAT44(in_EDX,iVar1 + 0xa5a9915);
}



longlong inst_76_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_76_values_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x953d263;
  if (in_PF) {
    iVar1 = 0x953a74f;
  }
  return CONCAT44(in_EDX,iVar1 + -0x953a74f);
}



longlong inst_76_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_76_values_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x2efc9de0;
  if (in_PF) {
    iVar1 = 0x2efce2ec;
  }
  return CONCAT44(in_EDX,iVar1 + -0x2efc9de0);
}



longlong inst_76_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_76_values_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x42ec1310;
  if (in_PF) {
    iVar1 = -0x42ecee99;
  }
  return CONCAT44(in_EDX,iVar1 + 0x42ecee99);
}



longlong inst_76_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



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



undefined8 inst_77_values_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = -0xca3899a;
  if (in_PF) {
    iVar1 = -0x60323b0c;
  }
  return CONCAT44(in_EDX,iVar1 + 0xca3899a);
}



longlong inst_77_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_77_values_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x2f262df1;
  if (in_PF) {
    iVar1 = -0xa1e456f;
  }
  return CONCAT44(in_EDX,iVar1 + -0x2f262df1);
}



longlong inst_77_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_77_values_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x7225917c;
  if (in_PF) {
    iVar1 = -0x268f8440;
  }
  return CONCAT44(in_EDX,iVar1 + -0x7225917c);
}



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



undefined8 inst_77_values_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x52f4fa3b;
  if (in_PF) {
    iVar1 = -0xa7f40f8;
  }
  return CONCAT44(in_EDX,iVar1 + 0xa7f40f8);
}



longlong inst_77_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_77_values_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x2098047b;
  if (in_PF) {
    iVar1 = -0x1494c7f9;
  }
  return CONCAT44(in_EDX,iVar1 + 0x1494c7f9);
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



undefined8 inst_77_values_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  bool in_PF;
  
  iVar1 = 0x1ffbb346;
  if (in_PF) {
    iVar1 = -0x23436e51;
  }
  return CONCAT44(in_EDX,iVar1 + 0x23436e51);
}



longlong inst_77_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_77_values_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x6df05678;
  if (in_PF) {
    iVar1 = 0x6105f7;
  }
  return CONCAT44(in_EDX,iVar1 + 0x6df05678);
}



longlong inst_77_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_78_values_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x7947841d;
  if (!in_PF) {
    iVar1 = -0x7947c417;
  }
  return CONCAT44(in_EDX,iVar1 + 0x7947c417);
}



longlong inst_78_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_78_values_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x28c29f4c;
  if (!in_PF) {
    iVar1 = -0x28c2dc06;
  }
  return CONCAT44(in_EDX,iVar1 + 0x28c29f4c);
}



longlong inst_78_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_78_values_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0xa46989d;
  if (!in_PF) {
    iVar1 = 0xa46a215;
  }
  return CONCAT44(in_EDX,iVar1 + -0xa46989d);
}



longlong inst_78_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_78_values_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  bool in_PF;
  
  iVar1 = 0x23582ffc;
  if (!in_PF) {
    iVar1 = 0x23583681;
  }
  return CONCAT44(in_EDX,iVar1 + -0x23582ffc);
}



longlong inst_78_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_78_values_var_4(void)

{
  int iVar1;
  undefined4 in_EDX;
  bool in_PF;
  
  iVar1 = -0x39c19993;
  if (!in_PF) {
    iVar1 = -0x39c19495;
  }
  return CONCAT44(in_EDX,iVar1 + 0x39c19993);
}



longlong inst_78_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_78_values_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x683828e1;
  if (!in_PF) {
    iVar1 = -0x683823cd;
  }
  return CONCAT44(in_EDX,iVar1 + 0x683823cd);
}



longlong inst_78_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_78_values_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x9ea6918;
  if (!in_PF) {
    iVar1 = 0x9ea0a44;
  }
  return CONCAT44(in_EDX,iVar1 + -0x9ea0a44);
}



longlong inst_78_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_78_values_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0xad5c547;
  if (!in_PF) {
    iVar1 = 0xad50baa;
  }
  return CONCAT44(in_EDX,iVar1 + -0xad5c547);
}



longlong inst_78_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_78_values_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x33dda235;
  if (!in_PF) {
    iVar1 = 0x33ddae1b;
  }
  return CONCAT44(in_EDX,iVar1 + -0x33ddae1b);
}



longlong inst_78_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_78_values_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x58c869e0;
  if (!in_PF) {
    iVar1 = 0x58c8c336;
  }
  return CONCAT44(in_EDX,iVar1 + -0x58c869e0);
}



longlong inst_78_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_79_values_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  bool in_PF;
  
  iVar1 = 0x79ead411;
  if (!in_PF) {
    iVar1 = 0x629bec81;
  }
  return CONCAT44(in_EDX,iVar1 + -0x79ead411);
}



longlong inst_79_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_79_values_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  bool in_PF;
  
  iVar1 = 0x732c813d;
  if (!in_PF) {
    iVar1 = 0x53835cc8;
  }
  return CONCAT44(in_EDX,iVar1 + -0x53835cc8);
}



longlong inst_79_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_79_values_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x6e796145;
  if (!in_PF) {
    iVar1 = 0x52b4584f;
  }
  return CONCAT44(in_EDX,iVar1 + 0x6e796145);
}



longlong inst_79_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_79_values_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  bool in_PF;
  
  iVar1 = 0x6a7218d8;
  if (!in_PF) {
    iVar1 = -0x66411666;
  }
  return CONCAT44(in_EDX,iVar1 + -0x6a7218d8);
}



longlong inst_79_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_79_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_79_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_79_values_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x233e09f4;
  if (!in_PF) {
    iVar1 = -0x2c5b4f1d;
  }
  return CONCAT44(in_EDX,iVar1 + 0x2c5b4f1d);
}



longlong inst_79_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_79_values_var_6(void)

{
  int iVar1;
  undefined4 in_EDX;
  bool in_PF;
  
  iVar1 = -0x1c19a306;
  if (!in_PF) {
    iVar1 = 0x65ac47f3;
  }
  return CONCAT44(in_EDX,iVar1 + -0x65ac47f3);
}



longlong inst_79_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_79_values_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  bool in_PF;
  
  iVar1 = 0xfad0d9c;
  if (!in_PF) {
    iVar1 = 0x78645d31;
  }
  return CONCAT44(in_EDX,iVar1 + -0xfad0d9c);
}



longlong inst_79_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_79_values_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x7e0a685d;
  if (!in_PF) {
    iVar1 = -0x3c078195;
  }
  return CONCAT44(in_EDX,iVar1 + 0x3c078195);
}



longlong inst_79_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_79_values_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x1c459468;
  if (!in_PF) {
    iVar1 = 0x14d094f8;
  }
  return CONCAT44(in_EDX,iVar1 + 0x1c459468);
}



longlong inst_79_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_80_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080768c9)

longlong inst_80_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08076929)

longlong inst_80_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_80_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080769d2)

longlong inst_80_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08076a1b)

longlong inst_80_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08076a7b)

longlong inst_80_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_80_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_80_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_80_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08076bcd)

longlong inst_80_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08076c16)

longlong inst_80_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08076c76)

longlong inst_80_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08076cbf)

longlong inst_80_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08076d1f)

longlong inst_80_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08076d68)

longlong inst_80_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_80_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08076e11)

longlong inst_80_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_80_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08076eba)

longlong inst_80_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08076f1a)

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



longlong inst_81_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_81_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08077068)

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



// WARNING: Removing unreachable block (ram,0x0807710f)

longlong inst_81_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08077157)

longlong inst_81_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_81_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
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



// WARNING: Removing unreachable block (ram,0x080773ab)

longlong inst_81_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080773f3)

longlong inst_81_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08077452)

longlong inst_81_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_81_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_81_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08077541)

longlong inst_81_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080775a0)

longlong inst_82_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_82_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_82_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_82_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_82_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_82_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807779b)

longlong inst_82_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_82_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_82_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_82_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080778ed)

longlong inst_82_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_82_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_82_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_82_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08077a3f)

longlong inst_82_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08077a88)

longlong inst_82_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08077ae8)

longlong inst_82_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08077b31)

longlong inst_82_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08077b91)

longlong inst_82_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_82_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08077c3a)

longlong inst_83_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08077c82)

longlong inst_83_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08077ce1)

longlong inst_83_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08077d29)

longlong inst_83_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08077d88)

longlong inst_83_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_83_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08077e2f)

longlong inst_83_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_83_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08077ed6)

longlong inst_83_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
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



// WARNING: Removing unreachable block (ram,0x08078024)

longlong inst_83_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807806c)

longlong inst_83_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080780cb)

longlong inst_83_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_83_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_83_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_83_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_83_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08078261)

longlong inst_83_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



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



// WARNING: Removing unreachable block (ram,0x08078369)

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



// WARNING: Removing unreachable block (ram,0x0807845b)

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



// WARNING: Removing unreachable block (ram,0x08078564)

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



// WARNING: Removing unreachable block (ram,0x080786b6)

longlong inst_84_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080786ff)

longlong inst_84_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_84_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080787a8)

longlong inst_84_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08078808)

longlong inst_84_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08078851)

longlong inst_84_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080788b1)

longlong inst_84_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080788fa)

longlong inst_84_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807895a)

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



// WARNING: Removing unreachable block (ram,0x08078aa8)

longlong inst_85_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_85_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_85_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



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



// WARNING: Removing unreachable block (ram,0x08078c3e)

longlong inst_85_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08078c9d)

longlong inst_85_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08078ce5)

longlong inst_85_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



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



// WARNING: Removing unreachable block (ram,0x08078deb)

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



// WARNING: Removing unreachable block (ram,0x08078e92)

longlong inst_85_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



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



// WARNING: Removing unreachable block (ram,0x08078f81)

longlong inst_85_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08078fe0)

longlong inst_86_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_86_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08079089)

longlong inst_86_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080790d2)

longlong inst_86_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08079132)

longlong inst_86_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_86_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080791db)

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



longlong inst_86_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080792cd)

longlong inst_86_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807932d)

longlong inst_86_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08079376)

longlong inst_86_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_86_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807941f)

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



// WARNING: Removing unreachable block (ram,0x08079571)

longlong inst_86_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



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



// WARNING: Removing unreachable block (ram,0x0807967a)

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



// WARNING: Removing unreachable block (ram,0x08079721)

longlong inst_87_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08079769)

longlong inst_87_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080797c8)

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



// WARNING: Removing unreachable block (ram,0x080798b7)

longlong inst_87_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_87_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_87_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080799bd)

longlong inst_87_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08079a05)

longlong inst_87_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_87_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08079aac)

longlong inst_87_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08079b0b)

longlong inst_87_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_87_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08079bb2)

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



// WARNING: Removing unreachable block (ram,0x08079c59)

longlong inst_87_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08079ca1)

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



// WARNING: Removing unreachable block (ram,0x08079d62)
// WARNING: Removing unreachable block (ram,0x08079d55)
// WARNING: Removing unreachable block (ram,0x08079d7c)

undefined8 inst_88_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_88_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08079e29)

undefined8 inst_88_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_88_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08079ee2)
// WARNING: Removing unreachable block (ram,0x08079f09)

undefined8 inst_88_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_88_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08079fa9)
// WARNING: Removing unreachable block (ram,0x08079fb6)

undefined8 inst_88_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_88_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807a07c)

undefined8 inst_88_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_88_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807a143)

undefined8 inst_88_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_88_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807a20a)

undefined8 inst_88_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_88_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807a2d1)

undefined8 inst_88_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_88_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807a398)
// WARNING: Removing unreachable block (ram,0x0807a38b)
// WARNING: Removing unreachable block (ram,0x0807a3b2)

undefined8 inst_88_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_88_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807a45f)
// WARNING: Removing unreachable block (ram,0x0807a452)
// WARNING: Removing unreachable block (ram,0x0807a479)

undefined8 inst_88_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_89_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_89_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_89_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807a5e9)
// WARNING: Removing unreachable block (ram,0x0807a5dc)
// WARNING: Removing unreachable block (ram,0x0807a603)

undefined8 inst_89_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_89_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807a6ae)

undefined8 inst_89_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_89_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_89_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_89_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_89_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_89_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807a8f0)
// WARNING: Removing unreachable block (ram,0x0807a8fd)

undefined8 inst_89_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_89_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807a9b5)
// WARNING: Removing unreachable block (ram,0x0807a9c2)

undefined8 inst_89_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_89_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807aa87)

undefined8 inst_89_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_89_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807ab3f)
// WARNING: Removing unreachable block (ram,0x0807ab4c)

undefined8 inst_89_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_89_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_89_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_90_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807acdc)
// WARNING: Removing unreachable block (ram,0x0807acf6)

undefined8 inst_90_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_90_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807ada7)

undefined8 inst_90_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_90_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807ae72)
// WARNING: Removing unreachable block (ram,0x0807ae65)
// WARNING: Removing unreachable block (ram,0x0807ae8c)

undefined8 inst_90_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_90_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_90_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_90_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807b008)
// WARNING: Removing unreachable block (ram,0x0807b022)

undefined8 inst_90_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_90_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807b0d3)
// WARNING: Removing unreachable block (ram,0x0807b0ed)

undefined8 inst_90_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_90_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807b19d)
// WARNING: Removing unreachable block (ram,0x0807b1b7)

undefined8 inst_90_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_90_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807b268)

undefined8 inst_90_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_90_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807b332)

undefined8 inst_90_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_90_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_90_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_91_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807b4c4)
// WARNING: Removing unreachable block (ram,0x0807b4b7)
// WARNING: Removing unreachable block (ram,0x0807b4de)

undefined8 inst_91_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_91_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807b58b)
// WARNING: Removing unreachable block (ram,0x0807b57e)
// WARNING: Removing unreachable block (ram,0x0807b5a5)

undefined8 inst_91_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_91_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807b645)
// WARNING: Removing unreachable block (ram,0x0807b66c)

undefined8 inst_91_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_91_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807b719)
// WARNING: Removing unreachable block (ram,0x0807b70c)
// WARNING: Removing unreachable block (ram,0x0807b733)

undefined8 inst_91_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_91_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807b7e0)
// WARNING: Removing unreachable block (ram,0x0807b7d3)
// WARNING: Removing unreachable block (ram,0x0807b7fa)

undefined8 inst_91_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_91_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807b89a)
// WARNING: Removing unreachable block (ram,0x0807b8c1)

undefined8 inst_91_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_91_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807b961)
// WARNING: Removing unreachable block (ram,0x0807b96e)

undefined8 inst_91_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_91_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_91_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_91_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807bafc)

undefined8 inst_91_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_91_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807bbc3)
// WARNING: Removing unreachable block (ram,0x0807bbb6)
// WARNING: Removing unreachable block (ram,0x0807bbdd)

undefined8 inst_91_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_92_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807bc90)
// WARNING: Removing unreachable block (ram,0x0807bc83)
// WARNING: Removing unreachable block (ram,0x0807bcaa)

undefined8 inst_92_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_92_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807bd5c)

undefined8 inst_92_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_92_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807be1c)
// WARNING: Removing unreachable block (ram,0x0807be29)

undefined8 inst_92_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_92_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807bef6)

undefined8 inst_92_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_92_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_92_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_92_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807c090)
// WARNING: Removing unreachable block (ram,0x0807c083)
// WARNING: Removing unreachable block (ram,0x0807c0aa)

undefined8 inst_92_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_92_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807c15d)

undefined8 inst_92_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_92_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807c21d)
// WARNING: Removing unreachable block (ram,0x0807c244)

undefined8 inst_92_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_92_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_92_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_92_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807c3c3)
// WARNING: Removing unreachable block (ram,0x0807c3b6)
// WARNING: Removing unreachable block (ram,0x0807c3dd)

undefined8 inst_92_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_93_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807c488)
// WARNING: Removing unreachable block (ram,0x0807c47b)
// WARNING: Removing unreachable block (ram,0x0807c4a2)

undefined8 inst_93_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_93_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807c54d)
// WARNING: Removing unreachable block (ram,0x0807c540)
// WARNING: Removing unreachable block (ram,0x0807c567)

undefined8 inst_93_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_93_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807c612)

undefined8 inst_93_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_93_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807c6d7)
// WARNING: Removing unreachable block (ram,0x0807c6ca)
// WARNING: Removing unreachable block (ram,0x0807c6f1)

undefined8 inst_93_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_93_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807c79c)

undefined8 inst_93_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_93_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807c861)
// WARNING: Removing unreachable block (ram,0x0807c87b)

undefined8 inst_93_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_93_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807c926)
// WARNING: Removing unreachable block (ram,0x0807c940)

undefined8 inst_93_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_93_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807c9de)
// WARNING: Removing unreachable block (ram,0x0807c9eb)

undefined8 inst_93_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_93_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807cab0)
// WARNING: Removing unreachable block (ram,0x0807caca)

undefined8 inst_93_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_93_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807cb75)

undefined8 inst_93_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



undefined8 inst_94_values_var_0(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffff77);
}



// WARNING: Removing unreachable block (ram,0x0807cc3c)
// WARNING: Removing unreachable block (ram,0x0807cc56)

undefined8 inst_94_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



undefined8 inst_94_values_var_1(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x58);
}



// WARNING: Removing unreachable block (ram,0x0807ccf6)
// WARNING: Removing unreachable block (ram,0x0807cd03)

undefined8 inst_94_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



undefined8 inst_94_values_var_2(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x7b);
}



// WARNING: Removing unreachable block (ram,0x0807cdca)
// WARNING: Removing unreachable block (ram,0x0807cde4)

undefined8 inst_94_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



undefined8 inst_94_values_var_3(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xc);
}



// WARNING: Removing unreachable block (ram,0x0807ce91)
// WARNING: Removing unreachable block (ram,0x0807ce84)
// WARNING: Removing unreachable block (ram,0x0807ceab)

undefined8 inst_94_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



undefined8 inst_94_values_var_4(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xdb);
}



// WARNING: Removing unreachable block (ram,0x0807cf58)
// WARNING: Removing unreachable block (ram,0x0807cf4b)
// WARNING: Removing unreachable block (ram,0x0807cf72)

undefined8 inst_94_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



undefined8 inst_94_values_var_5(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x19);
}



// WARNING: Removing unreachable block (ram,0x0807d01f)
// WARNING: Removing unreachable block (ram,0x0807d012)
// WARNING: Removing unreachable block (ram,0x0807d039)

undefined8 inst_94_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



undefined8 inst_94_values_var_6(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffffad);
}



// WARNING: Removing unreachable block (ram,0x0807d0e6)
// WARNING: Removing unreachable block (ram,0x0807d0d9)
// WARNING: Removing unreachable block (ram,0x0807d100)

undefined8 inst_94_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



undefined8 inst_94_values_var_7(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x87);
}



// WARNING: Removing unreachable block (ram,0x0807d1ad)
// WARNING: Removing unreachable block (ram,0x0807d1a0)
// WARNING: Removing unreachable block (ram,0x0807d1c7)

undefined8 inst_94_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



undefined8 inst_94_values_var_8(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x45);
}



// WARNING: Removing unreachable block (ram,0x0807d274)
// WARNING: Removing unreachable block (ram,0x0807d267)
// WARNING: Removing unreachable block (ram,0x0807d28e)

undefined8 inst_94_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



undefined8 inst_94_values_var_9(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x30);
}



undefined8 inst_94_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



undefined8 inst_95_values_var_0(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffff2e2);
}



// WARNING: Removing unreachable block (ram,0x0807d3f7)
// WARNING: Removing unreachable block (ram,0x0807d404)

undefined8 inst_95_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



undefined8 inst_95_values_var_1(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffc666);
}



// WARNING: Removing unreachable block (ram,0x0807d4cd)
// WARNING: Removing unreachable block (ram,0x0807d4e7)

undefined8 inst_95_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



undefined8 inst_95_values_var_2(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xf7b);
}



// WARNING: Removing unreachable block (ram,0x0807d589)
// WARNING: Removing unreachable block (ram,0x0807d596)

undefined8 inst_95_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



undefined8 inst_95_values_var_3(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffff6bf9);
}



// WARNING: Removing unreachable block (ram,0x0807d65f)

undefined8 inst_95_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



undefined8 inst_95_values_var_4(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffff65c3);
}



undefined8 inst_95_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



undefined8 inst_95_values_var_5(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xc669);
}



// WARNING: Removing unreachable block (ram,0x0807d7e4)
// WARNING: Removing unreachable block (ram,0x0807d7f1)

undefined8 inst_95_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



undefined8 inst_95_values_var_6(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x9ed5);
}



undefined8 inst_95_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



undefined8 inst_95_values_var_7(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x3c25);
}



// WARNING: Removing unreachable block (ram,0x0807d983)

undefined8 inst_95_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



undefined8 inst_95_values_var_8(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffff3914);
}



// WARNING: Removing unreachable block (ram,0x0807da4c)
// WARNING: Removing unreachable block (ram,0x0807da66)

undefined8 inst_95_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



undefined8 inst_95_values_var_9(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x211c);
}



// WARNING: Removing unreachable block (ram,0x0807db08)
// WARNING: Removing unreachable block (ram,0x0807db15)

undefined8 inst_95_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



undefined8 inst_96_values_var_0(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x395b5ef6);
}



// WARNING: Removing unreachable block (ram,0x0807dbdc)
// WARNING: Removing unreachable block (ram,0x0807dbf6)

undefined8 inst_96_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



undefined8 inst_96_values_var_1(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x6b1ab978);
}



// WARNING: Removing unreachable block (ram,0x0807dca3)

undefined8 inst_96_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



undefined8 inst_96_values_var_2(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xd6ec3e8c);
}



// WARNING: Removing unreachable block (ram,0x0807dd5d)
// WARNING: Removing unreachable block (ram,0x0807dd84)

undefined8 inst_96_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



undefined8 inst_96_values_var_3(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x88882254);
}



// WARNING: Removing unreachable block (ram,0x0807de31)

undefined8 inst_96_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



undefined8 inst_96_values_var_4(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xa306554e);
}



// WARNING: Removing unreachable block (ram,0x0807def8)

undefined8 inst_96_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



undefined8 inst_96_values_var_5(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xb3fe16c1);
}



// WARNING: Removing unreachable block (ram,0x0807dfbf)

undefined8 inst_96_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



undefined8 inst_96_values_var_6(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xb5158432);
}



// WARNING: Removing unreachable block (ram,0x0807e079)
// WARNING: Removing unreachable block (ram,0x0807e086)

undefined8 inst_96_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



undefined8 inst_96_values_var_7(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x614a0c8);
}



// WARNING: Removing unreachable block (ram,0x0807e140)
// WARNING: Removing unreachable block (ram,0x0807e14d)

undefined8 inst_96_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



undefined8 inst_96_values_var_8(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xc6496452);
}



undefined8 inst_96_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



undefined8 inst_96_values_var_9(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x336e74f8);
}



// WARNING: Removing unreachable block (ram,0x0807e2db)

undefined8 inst_96_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_97_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807e398)

undefined8 inst_97_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_97_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807e455)

undefined8 inst_97_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_97_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807e512)
// WARNING: Removing unreachable block (ram,0x0807e52c)

undefined8 inst_97_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_97_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807e5cf)

undefined8 inst_97_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_97_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807e68c)

undefined8 inst_97_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_97_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807e749)

undefined8 inst_97_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_97_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807e806)
// WARNING: Removing unreachable block (ram,0x0807e820)

undefined8 inst_97_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_97_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807e8c3)
// WARNING: Removing unreachable block (ram,0x0807e8dd)

undefined8 inst_97_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_97_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807e980)

undefined8 inst_97_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_97_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807ea3d)
// WARNING: Removing unreachable block (ram,0x0807ea57)

undefined8 inst_97_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_98_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807eafa)
// WARNING: Removing unreachable block (ram,0x0807eb14)

undefined8 inst_98_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_98_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807ebb7)

undefined8 inst_98_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_98_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807ec74)

undefined8 inst_98_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_98_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807ed31)
// WARNING: Removing unreachable block (ram,0x0807ed4b)

undefined8 inst_98_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_98_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807edee)

undefined8 inst_98_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_98_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807eeab)
// WARNING: Removing unreachable block (ram,0x0807eec5)

undefined8 inst_98_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_98_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807ef68)
// WARNING: Removing unreachable block (ram,0x0807ef82)

undefined8 inst_98_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_98_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807f025)

undefined8 inst_98_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_98_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807f0e2)

undefined8 inst_98_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_98_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807f19f)
// WARNING: Removing unreachable block (ram,0x0807f1b9)

undefined8 inst_98_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_99_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807f25a)

undefined8 inst_99_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_99_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807f315)

undefined8 inst_99_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_99_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807f3d0)

undefined8 inst_99_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_99_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807f48b)
// WARNING: Removing unreachable block (ram,0x0807f4a5)

undefined8 inst_99_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_99_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807f546)

undefined8 inst_99_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_99_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807f601)

undefined8 inst_99_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_99_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807f6bc)

undefined8 inst_99_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_99_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807f777)

undefined8 inst_99_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_99_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807f832)

undefined8 inst_99_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_99_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807f8ed)
// WARNING: Removing unreachable block (ram,0x0807f907)

undefined8 inst_99_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_100_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807f9aa)
// WARNING: Removing unreachable block (ram,0x0807f9c4)

undefined8 inst_100_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_100_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807fa67)
// WARNING: Removing unreachable block (ram,0x0807fa81)

undefined8 inst_100_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_100_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807fb24)
// WARNING: Removing unreachable block (ram,0x0807fb3e)

undefined8 inst_100_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_100_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807fbe1)
// WARNING: Removing unreachable block (ram,0x0807fbfb)

undefined8 inst_100_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_100_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807fc9e)
// WARNING: Removing unreachable block (ram,0x0807fcb8)

undefined8 inst_100_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_100_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807fd5b)

undefined8 inst_100_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_100_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807fe18)

undefined8 inst_100_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_100_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807fed5)

undefined8 inst_100_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_100_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0807ff92)
// WARNING: Removing unreachable block (ram,0x0807ffac)

undefined8 inst_100_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_100_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808004f)

undefined8 inst_100_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_101_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808010c)
// WARNING: Removing unreachable block (ram,0x08080126)

undefined8 inst_101_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_101_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080801c9)

undefined8 inst_101_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_101_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08080286)
// WARNING: Removing unreachable block (ram,0x080802a0)

undefined8 inst_101_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_101_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08080343)

undefined8 inst_101_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_101_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08080400)

undefined8 inst_101_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_101_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080804bd)
// WARNING: Removing unreachable block (ram,0x080804d7)

undefined8 inst_101_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_101_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808057a)

undefined8 inst_101_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_101_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08080637)
// WARNING: Removing unreachable block (ram,0x08080651)

undefined8 inst_101_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_101_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080806f4)
// WARNING: Removing unreachable block (ram,0x0808070e)

undefined8 inst_101_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_101_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080807b1)

undefined8 inst_101_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_102_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808086c)
// WARNING: Removing unreachable block (ram,0x08080886)

undefined8 inst_102_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_102_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08080927)

undefined8 inst_102_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_102_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080809e2)
// WARNING: Removing unreachable block (ram,0x080809fc)

undefined8 inst_102_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_102_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08080a9d)
// WARNING: Removing unreachable block (ram,0x08080ab7)

undefined8 inst_102_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_102_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08080b58)
// WARNING: Removing unreachable block (ram,0x08080b72)

undefined8 inst_102_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_102_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08080c13)

undefined8 inst_102_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_102_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08080cce)
// WARNING: Removing unreachable block (ram,0x08080ce8)

undefined8 inst_102_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_102_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08080d89)

undefined8 inst_102_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_102_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08080e44)

undefined8 inst_102_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_102_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08080eff)
// WARNING: Removing unreachable block (ram,0x08080f19)

undefined8 inst_102_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_103_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_103_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_103_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_103_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_103_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_103_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_103_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_103_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_103_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_103_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_103_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_103_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_103_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_103_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_103_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_103_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_103_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_103_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_103_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_103_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_104_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_104_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_104_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_104_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_104_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_104_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_104_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_104_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_104_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_104_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_104_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_104_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_104_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_104_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_104_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_104_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_104_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_104_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_104_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_104_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_105_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_105_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_105_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_105_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_105_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_105_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_105_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_105_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_105_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_105_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_105_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_105_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_105_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_105_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_105_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_105_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_105_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_105_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_105_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_105_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_106_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_106_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_106_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_106_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_106_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_106_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_106_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_106_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_106_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_106_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_106_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_106_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_106_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_106_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_106_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08082a50)
// WARNING: Removing unreachable block (ram,0x08082a5d)

longlong inst_106_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_106_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_106_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_106_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_106_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_107_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_107_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_107_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_107_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_107_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_107_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_107_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_107_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_107_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_107_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_107_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_107_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_107_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_107_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_107_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_107_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_107_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_107_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_107_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_107_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_108_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_108_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_108_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_108_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_108_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_108_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_108_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_108_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_108_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_108_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_108_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_108_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_108_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_108_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_108_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_108_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_108_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_108_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_108_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_108_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
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



// WARNING: Removing unreachable block (ram,0x08085adb)
// WARNING: Removing unreachable block (ram,0x08085ae8)

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



undefined8 inst_116_values_var_0(void)

{
  undefined4 in_EDX;
  char in_PF;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(ushort)(CONCAT11(in_AF << 4 | in_PF << 2,0xdb) | 0x300) |
                         0x4c1b0000) + 0xb3e4e825);
}



longlong inst_116_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_116_values_var_1(void)

{
  undefined4 in_EDX;
  char in_PF;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(ushort)(CONCAT11(in_AF << 4 | 0x80U | in_PF << 2,0x33) | 0x300) |
                         0xece60000) + 0x131968cd);
}



longlong inst_116_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_116_values_var_2(void)

{
  undefined4 in_EDX;
  char in_PF;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(ushort)(CONCAT11(in_AF << 4 | 0x80U | in_PF << 2,0x95) | 0x300) |
                         0x97090000) + 0x68f6686b);
}



longlong inst_116_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_116_values_var_3(void)

{
  undefined4 in_EDX;
  char in_PF;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(ushort)(CONCAT11(in_AF << 4 | in_PF << 2,0x4c) | 0x300) |
                         0x5ce90000) + 0xa316ecb4);
}



longlong inst_116_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_116_values_var_4(void)

{
  undefined4 in_EDX;
  char in_PF;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(ushort)(CONCAT11(in_AF << 4 | 0x80U | in_PF << 2,0xd6) | 0x300) |
                         0xb6460000) + 0x49b96c2a);
}



longlong inst_116_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_116_values_var_5(void)

{
  undefined4 in_EDX;
  char in_PF;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(ushort)(CONCAT11(in_AF << 4 | in_PF << 2,100) | 0x300) | 0x16b20000
                         ) + 0xe94dec9c);
}



longlong inst_116_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_116_values_var_6(void)

{
  undefined4 in_EDX;
  char in_PF;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(ushort)(CONCAT11(in_AF << 4 | in_PF << 2,0x85) | 0x300) |
                         0x74530000) + 0x8bacec7b);
}



longlong inst_116_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_116_values_var_7(void)

{
  undefined4 in_EDX;
  char in_PF;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(ushort)(CONCAT11(in_AF << 4 | 0x80U | in_PF << 2,0x85) | 0x300) |
                         0xf9eb0000) + 0x6146c7b);
}



longlong inst_116_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_116_values_var_8(void)

{
  undefined4 in_EDX;
  char in_PF;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(ushort)(CONCAT11(in_AF << 4 | 0x80U | in_PF << 2,0x4e) | 0x300) |
                         0xb6d10000) + 0x492e68b2);
}



longlong inst_116_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_116_values_var_9(void)

{
  undefined4 in_EDX;
  char in_PF;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(ushort)(CONCAT11(in_AF << 4 | in_PF << 2,0x30) | 0x300) | 0x4bc0000
                         ) + 0xfb43f8d0);
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



longlong inst_122_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_122_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_122_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_122_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_122_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_122_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_122_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_122_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_122_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_122_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_122_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_122_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_122_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_122_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_122_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_122_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_122_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_122_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_122_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
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



// WARNING: Removing unreachable block (ram,0x0808cf94)

undefined8 inst_131_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_131_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808d059)

undefined8 inst_131_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_131_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808d11e)
// WARNING: Removing unreachable block (ram,0x0808d138)

undefined8 inst_131_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_131_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808d1e3)
// WARNING: Removing unreachable block (ram,0x0808d1fd)

undefined8 inst_131_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_131_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808d2a8)
// WARNING: Removing unreachable block (ram,0x0808d2c2)

undefined8 inst_131_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_131_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808d36d)
// WARNING: Removing unreachable block (ram,0x0808d387)

undefined8 inst_131_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_131_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808d432)
// WARNING: Removing unreachable block (ram,0x0808d44c)

undefined8 inst_131_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_131_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808d4f7)
// WARNING: Removing unreachable block (ram,0x0808d511)

undefined8 inst_131_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_131_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808d5bc)

undefined8 inst_131_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_131_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808d681)
// WARNING: Removing unreachable block (ram,0x0808d69b)

undefined8 inst_131_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_132_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808d748)

undefined8 inst_132_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_132_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808d80f)

undefined8 inst_132_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_132_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808d8d6)
// WARNING: Removing unreachable block (ram,0x0808d8f0)

undefined8 inst_132_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_132_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808d99d)
// WARNING: Removing unreachable block (ram,0x0808d9b7)

undefined8 inst_132_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_132_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808da64)

undefined8 inst_132_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_132_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808db2b)
// WARNING: Removing unreachable block (ram,0x0808db45)

undefined8 inst_132_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_132_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808dbf2)

undefined8 inst_132_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_132_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808dcb9)
// WARNING: Removing unreachable block (ram,0x0808dcd3)

undefined8 inst_132_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_132_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808dd80)
// WARNING: Removing unreachable block (ram,0x0808dd9a)

undefined8 inst_132_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_132_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808de47)

undefined8 inst_132_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_133_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808df0c)
// WARNING: Removing unreachable block (ram,0x0808df26)

undefined8 inst_133_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_133_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808dfd1)
// WARNING: Removing unreachable block (ram,0x0808dfeb)

undefined8 inst_133_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_133_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808e096)

undefined8 inst_133_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_133_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808e15b)
// WARNING: Removing unreachable block (ram,0x0808e175)

undefined8 inst_133_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_133_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808e220)
// WARNING: Removing unreachable block (ram,0x0808e23a)

undefined8 inst_133_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_133_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808e2e5)
// WARNING: Removing unreachable block (ram,0x0808e2ff)

undefined8 inst_133_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_133_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808e3aa)

undefined8 inst_133_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_133_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808e46f)
// WARNING: Removing unreachable block (ram,0x0808e489)

undefined8 inst_133_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_133_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808e534)
// WARNING: Removing unreachable block (ram,0x0808e54e)

undefined8 inst_133_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_133_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0808e5f9)

undefined8 inst_133_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
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



longlong inst_137_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_137_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_137_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_137_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_137_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_137_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_137_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_137_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_137_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_137_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_137_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_137_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_137_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_137_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_137_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_137_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_137_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_137_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_137_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_138_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809007a)
// WARNING: Removing unreachable block (ram,0x08090087)

undefined8 inst_138_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_138_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08090141)
// WARNING: Removing unreachable block (ram,0x0809014e)

undefined8 inst_138_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_138_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08090207)
// WARNING: Removing unreachable block (ram,0x08090214)

undefined8 inst_138_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_138_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080902ce)
// WARNING: Removing unreachable block (ram,0x080902db)

undefined8 inst_138_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_138_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08090395)
// WARNING: Removing unreachable block (ram,0x080903a2)

undefined8 inst_138_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_138_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08090468)
// WARNING: Removing unreachable block (ram,0x0809045b)
// WARNING: Removing unreachable block (ram,0x08090482)

undefined8 inst_138_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_138_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809052f)
// WARNING: Removing unreachable block (ram,0x08090522)
// WARNING: Removing unreachable block (ram,0x08090549)

undefined8 inst_138_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_138_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080905e9)
// WARNING: Removing unreachable block (ram,0x080905f6)

undefined8 inst_138_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_138_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080906af)
// WARNING: Removing unreachable block (ram,0x080906bc)

undefined8 inst_138_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_138_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08090776)
// WARNING: Removing unreachable block (ram,0x08090783)

undefined8 inst_138_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_139_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809083b)
// WARNING: Removing unreachable block (ram,0x08090848)

undefined8 inst_139_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_139_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08090900)
// WARNING: Removing unreachable block (ram,0x0809090d)

undefined8 inst_139_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_139_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080909c5)
// WARNING: Removing unreachable block (ram,0x080909d2)

undefined8 inst_139_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_139_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08090a8a)
// WARNING: Removing unreachable block (ram,0x08090a97)

undefined8 inst_139_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_139_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08090b5c)
// WARNING: Removing unreachable block (ram,0x08090b4f)
// WARNING: Removing unreachable block (ram,0x08090b76)

undefined8 inst_139_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_139_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08090c14)
// WARNING: Removing unreachable block (ram,0x08090c21)

undefined8 inst_139_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_139_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08090cd9)
// WARNING: Removing unreachable block (ram,0x08090ce6)

undefined8 inst_139_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_139_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08090d9e)
// WARNING: Removing unreachable block (ram,0x08090dab)

undefined8 inst_139_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_139_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08090e63)
// WARNING: Removing unreachable block (ram,0x08090e70)

undefined8 inst_139_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_139_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08090f35)
// WARNING: Removing unreachable block (ram,0x08090f28)
// WARNING: Removing unreachable block (ram,0x08090f4f)

undefined8 inst_139_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_140_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08090ff3)
// WARNING: Removing unreachable block (ram,0x08091000)

undefined8 inst_140_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_140_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080910be)
// WARNING: Removing unreachable block (ram,0x080910cb)

undefined8 inst_140_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_140_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08091189)
// WARNING: Removing unreachable block (ram,0x08091196)

undefined8 inst_140_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_140_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08091253)
// WARNING: Removing unreachable block (ram,0x08091260)

undefined8 inst_140_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_140_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809131e)
// WARNING: Removing unreachable block (ram,0x0809132b)

undefined8 inst_140_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_140_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080913e8)
// WARNING: Removing unreachable block (ram,0x080913f5)

undefined8 inst_140_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_140_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080914b3)
// WARNING: Removing unreachable block (ram,0x080914c0)

undefined8 inst_140_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_140_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809158a)
// WARNING: Removing unreachable block (ram,0x0809157d)
// WARNING: Removing unreachable block (ram,0x080915a4)

undefined8 inst_140_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_140_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08091654)
// WARNING: Removing unreachable block (ram,0x08091647)
// WARNING: Removing unreachable block (ram,0x0809166e)

undefined8 inst_140_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_140_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08091712)
// WARNING: Removing unreachable block (ram,0x0809171f)

undefined8 inst_140_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_141_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080917d9)
// WARNING: Removing unreachable block (ram,0x080917e6)

undefined8 inst_141_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_141_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080918a0)
// WARNING: Removing unreachable block (ram,0x080918ad)

undefined8 inst_141_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_141_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08091967)
// WARNING: Removing unreachable block (ram,0x08091974)

undefined8 inst_141_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_141_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08091a3b)
// WARNING: Removing unreachable block (ram,0x08091a2e)
// WARNING: Removing unreachable block (ram,0x08091a55)

undefined8 inst_141_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_141_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08091b02)
// WARNING: Removing unreachable block (ram,0x08091af5)
// WARNING: Removing unreachable block (ram,0x08091b1c)

undefined8 inst_141_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_141_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08091bbc)
// WARNING: Removing unreachable block (ram,0x08091bc9)

undefined8 inst_141_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_141_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08091c83)
// WARNING: Removing unreachable block (ram,0x08091c90)

undefined8 inst_141_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_141_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08091d57)
// WARNING: Removing unreachable block (ram,0x08091d4a)
// WARNING: Removing unreachable block (ram,0x08091d71)

undefined8 inst_141_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_141_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08091e11)
// WARNING: Removing unreachable block (ram,0x08091e1e)

undefined8 inst_141_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_141_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08091ed8)
// WARNING: Removing unreachable block (ram,0x08091ee5)

undefined8 inst_141_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_142_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08091fa5)
// WARNING: Removing unreachable block (ram,0x08091fb2)

undefined8 inst_142_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_142_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08092072)
// WARNING: Removing unreachable block (ram,0x0809207f)

undefined8 inst_142_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_142_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809213f)
// WARNING: Removing unreachable block (ram,0x0809214c)

undefined8 inst_142_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_142_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809220c)
// WARNING: Removing unreachable block (ram,0x08092219)

undefined8 inst_142_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_142_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080922d9)
// WARNING: Removing unreachable block (ram,0x080922e6)

undefined8 inst_142_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_142_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080923a6)
// WARNING: Removing unreachable block (ram,0x080923b3)

undefined8 inst_142_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_142_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08092480)
// WARNING: Removing unreachable block (ram,0x08092473)
// WARNING: Removing unreachable block (ram,0x0809249a)

undefined8 inst_142_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_142_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809254d)
// WARNING: Removing unreachable block (ram,0x08092540)
// WARNING: Removing unreachable block (ram,0x08092567)

undefined8 inst_142_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_142_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809260c)
// WARNING: Removing unreachable block (ram,0x08092619)

undefined8 inst_142_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_142_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080926d9)
// WARNING: Removing unreachable block (ram,0x080926e6)

undefined8 inst_142_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_143_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809279e)
// WARNING: Removing unreachable block (ram,0x080927ab)

undefined8 inst_143_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_143_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08092870)
// WARNING: Removing unreachable block (ram,0x08092863)
// WARNING: Removing unreachable block (ram,0x0809288a)

undefined8 inst_143_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_143_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08092928)
// WARNING: Removing unreachable block (ram,0x08092935)

undefined8 inst_143_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_143_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080929ed)
// WARNING: Removing unreachable block (ram,0x080929fa)

undefined8 inst_143_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_143_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08092ab2)
// WARNING: Removing unreachable block (ram,0x08092abf)

undefined8 inst_143_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_143_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08092b77)
// WARNING: Removing unreachable block (ram,0x08092b84)

undefined8 inst_143_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_143_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08092c3c)
// WARNING: Removing unreachable block (ram,0x08092c49)

undefined8 inst_143_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_143_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08092d0e)
// WARNING: Removing unreachable block (ram,0x08092d01)
// WARNING: Removing unreachable block (ram,0x08092d28)

undefined8 inst_143_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_143_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08092dd3)
// WARNING: Removing unreachable block (ram,0x08092dc6)
// WARNING: Removing unreachable block (ram,0x08092ded)

undefined8 inst_143_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_143_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08092e8b)
// WARNING: Removing unreachable block (ram,0x08092e98)

undefined8 inst_143_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_144_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08092f50)

longlong inst_144_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_144_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08093012)

longlong inst_144_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_144_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080930c7)

longlong inst_144_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_144_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809317c)

longlong inst_144_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_144_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08093224)
// WARNING: Removing unreachable block (ram,0x08093231)

longlong inst_144_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_144_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080932e6)

longlong inst_144_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_144_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809338e)

longlong inst_144_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_144_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_144_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_144_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08093505)

longlong inst_144_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_144_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080935ba)

longlong inst_144_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_145_values_var_0(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffb000);
}



// WARNING: Removing unreachable block (ram,0x0809366f)

longlong inst_145_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_145_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08093724)

longlong inst_145_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_145_values_var_2(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffffca);
}



// WARNING: Removing unreachable block (ram,0x080937d9)

longlong inst_145_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_145_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08093881)

longlong inst_145_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_145_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08093936)
// WARNING: Removing unreachable block (ram,0x08093943)

longlong inst_145_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_145_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080939eb)
// WARNING: Removing unreachable block (ram,0x080939f8)

longlong inst_145_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_145_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_145_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_145_values_var_7(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffff9200);
}



// WARNING: Removing unreachable block (ram,0x08093b55)
// WARNING: Removing unreachable block (ram,0x08093b62)

longlong inst_145_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_145_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08093c0a)
// WARNING: Removing unreachable block (ram,0x08093c17)

longlong inst_145_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_145_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08093cbf)

longlong inst_145_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_146_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08093d81)

longlong inst_146_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_146_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08093e36)

longlong inst_146_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_146_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08093eeb)

longlong inst_146_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_146_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08093fa0)

longlong inst_146_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_146_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08094055)

longlong inst_146_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_146_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080940fd)
// WARNING: Removing unreachable block (ram,0x0809410a)

longlong inst_146_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_146_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080941b2)
// WARNING: Removing unreachable block (ram,0x080941bf)

longlong inst_146_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_146_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08094267)
// WARNING: Removing unreachable block (ram,0x08094274)

longlong inst_146_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_146_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08094329)

longlong inst_146_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_146_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080943d1)
// WARNING: Removing unreachable block (ram,0x080943de)

longlong inst_146_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_147_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_147_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_147_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809453b)

longlong inst_147_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_147_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_147_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_147_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080946b2)

longlong inst_147_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_147_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809475a)

longlong inst_147_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_147_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809480f)
// WARNING: Removing unreachable block (ram,0x0809481c)

longlong inst_147_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_147_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080948c4)

longlong inst_147_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_147_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08094986)

longlong inst_147_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_147_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08094a2e)

longlong inst_147_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_147_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_147_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_148_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08094ba5)

undefined8 inst_148_flags_var_0(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffe);
}



longlong inst_148_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08094c4d)
// WARNING: Removing unreachable block (ram,0x08094c5a)

longlong inst_148_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_148_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08094d0f)

longlong inst_148_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_148_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08094db7)
// WARNING: Removing unreachable block (ram,0x08094dc4)

undefined8 inst_148_flags_var_3(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffe);
}



longlong inst_148_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08094e79)

longlong inst_148_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_148_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08094f2e)

undefined8 inst_148_flags_var_5(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffe);
}



longlong inst_148_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08094fe3)

undefined8 inst_148_flags_var_6(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffe);
}



longlong inst_148_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08095098)

longlong inst_148_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_148_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809514d)

longlong inst_148_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_148_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080951f5)
// WARNING: Removing unreachable block (ram,0x08095202)

undefined8 inst_148_flags_var_9(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffe);
}



longlong inst_149_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080952ac)

longlong inst_149_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_149_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08095363)

longlong inst_149_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_149_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809541a)

longlong inst_149_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_149_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_149_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_149_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08095588)
// WARNING: Removing unreachable block (ram,0x08095595)

longlong inst_149_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_149_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809563f)
// WARNING: Removing unreachable block (ram,0x0809564c)

longlong inst_149_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_149_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08095703)

longlong inst_149_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_149_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_149_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_149_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08095871)

longlong inst_149_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_149_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809591b)
// WARNING: Removing unreachable block (ram,0x08095928)

longlong inst_149_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_150_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080959d2)
// WARNING: Removing unreachable block (ram,0x080959df)

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



// WARNING: Removing unreachable block (ram,0x08095a89)

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



// WARNING: Removing unreachable block (ram,0x08095b40)

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



// WARNING: Removing unreachable block (ram,0x08095bf7)
// WARNING: Removing unreachable block (ram,0x08095c04)

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



// WARNING: Removing unreachable block (ram,0x08095d65)

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



// WARNING: Removing unreachable block (ram,0x08095e29)

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



// WARNING: Removing unreachable block (ram,0x08095f97)

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



// WARNING: Removing unreachable block (ram,0x0809604e)

longlong inst_150_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_151_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080960f8)
// WARNING: Removing unreachable block (ram,0x08096105)

longlong inst_151_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_151_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080961af)
// WARNING: Removing unreachable block (ram,0x080961bc)

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



// WARNING: Removing unreachable block (ram,0x08096273)

longlong inst_151_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_151_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809632a)

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



// WARNING: Removing unreachable block (ram,0x080963d4)
// WARNING: Removing unreachable block (ram,0x080963e1)

longlong inst_151_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_151_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08096498)

longlong inst_151_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_151_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809654f)

longlong inst_151_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_151_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080965f9)
// WARNING: Removing unreachable block (ram,0x08096606)

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



// WARNING: Removing unreachable block (ram,0x080966b0)
// WARNING: Removing unreachable block (ram,0x080966bd)

longlong inst_151_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_151_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08096774)

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



// WARNING: Removing unreachable block (ram,0x0809681e)

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



// WARNING: Removing unreachable block (ram,0x080968e2)

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



// WARNING: Removing unreachable block (ram,0x08096999)

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



// WARNING: Removing unreachable block (ram,0x08096a50)

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



// WARNING: Removing unreachable block (ram,0x08096bb1)
// WARNING: Removing unreachable block (ram,0x08096bbe)

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



// WARNING: Removing unreachable block (ram,0x08096de3)

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



// WARNING: Removing unreachable block (ram,0x08096e8d)
// WARNING: Removing unreachable block (ram,0x08096e9a)

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



// WARNING: Removing unreachable block (ram,0x08096f44)
// WARNING: Removing unreachable block (ram,0x08096f51)

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



// WARNING: Removing unreachable block (ram,0x08096ffb)
// WARNING: Removing unreachable block (ram,0x08097008)

undefined8 inst_153_flags_var_1(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffe);
}



longlong inst_153_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080970b2)
// WARNING: Removing unreachable block (ram,0x080970bf)

undefined8 inst_153_flags_var_2(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffe);
}



longlong inst_153_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08097176)

undefined8 inst_153_flags_var_3(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffe);
}



longlong inst_153_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08097220)
// WARNING: Removing unreachable block (ram,0x0809722d)

undefined8 inst_153_flags_var_4(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffe);
}



longlong inst_153_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080972e4)

undefined8 inst_153_flags_var_5(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffe);
}



longlong inst_153_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809738e)
// WARNING: Removing unreachable block (ram,0x0809739b)

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



// WARNING: Removing unreachable block (ram,0x08097452)

undefined8 inst_153_flags_var_7(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffe);
}



longlong inst_153_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08097509)

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



// WARNING: Removing unreachable block (ram,0x080975b3)
// WARNING: Removing unreachable block (ram,0x080975c0)

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



// WARNING: Removing unreachable block (ram,0x08097668)

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



// WARNING: Removing unreachable block (ram,0x080977df)

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



// WARNING: Removing unreachable block (ram,0x08097887)

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



// WARNING: Removing unreachable block (ram,0x0809793c)

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



longlong inst_154_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_154_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08097aa6)
// WARNING: Removing unreachable block (ram,0x08097ab3)

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



// WARNING: Removing unreachable block (ram,0x08097b5b)

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



// WARNING: Removing unreachable block (ram,0x08097c10)
// WARNING: Removing unreachable block (ram,0x08097c1d)

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



// WARNING: Removing unreachable block (ram,0x08097cc5)

longlong inst_154_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_155_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08097d7a)

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



// WARNING: Removing unreachable block (ram,0x08097ee4)

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



// WARNING: Removing unreachable block (ram,0x0809805b)

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



// WARNING: Removing unreachable block (ram,0x0809826d)
// WARNING: Removing unreachable block (ram,0x0809827a)

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



// WARNING: Removing unreachable block (ram,0x080983e4)

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



// WARNING: Removing unreachable block (ram,0x0809848c)
// WARNING: Removing unreachable block (ram,0x08098499)

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



// WARNING: Removing unreachable block (ram,0x08098541)
// WARNING: Removing unreachable block (ram,0x0809854e)

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



// WARNING: Removing unreachable block (ram,0x080985f6)
// WARNING: Removing unreachable block (ram,0x08098603)

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



// WARNING: Removing unreachable block (ram,0x080986ab)
// WARNING: Removing unreachable block (ram,0x080986b8)

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



// WARNING: Removing unreachable block (ram,0x0809876d)

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



// WARNING: Removing unreachable block (ram,0x08098815)
// WARNING: Removing unreachable block (ram,0x08098822)

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



// WARNING: Removing unreachable block (ram,0x080988d7)

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



// WARNING: Removing unreachable block (ram,0x0809897f)
// WARNING: Removing unreachable block (ram,0x0809898c)

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



// WARNING: Removing unreachable block (ram,0x08098a41)

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



// WARNING: Removing unreachable block (ram,0x08098af6)

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



// WARNING: Removing unreachable block (ram,0x08098c53)
// WARNING: Removing unreachable block (ram,0x08098c60)

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



// WARNING: Removing unreachable block (ram,0x08098dca)

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



// WARNING: Removing unreachable block (ram,0x08098e7f)

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



// WARNING: Removing unreachable block (ram,0x0809909e)

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



// WARNING: Removing unreachable block (ram,0x08099153)

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



// WARNING: Removing unreachable block (ram,0x080992bd)

undefined8 inst_158_flags_var_0(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffe);
}



longlong inst_158_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08099365)
// WARNING: Removing unreachable block (ram,0x08099372)

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



// WARNING: Removing unreachable block (ram,0x0809941a)
// WARNING: Removing unreachable block (ram,0x08099427)

undefined8 inst_158_flags_var_2(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffe);
}



longlong inst_158_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080994cf)
// WARNING: Removing unreachable block (ram,0x080994dc)

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



// WARNING: Removing unreachable block (ram,0x08099591)

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



// WARNING: Removing unreachable block (ram,0x08099646)

undefined8 inst_158_flags_var_5(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffe);
}



longlong inst_158_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080996fb)

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



// WARNING: Removing unreachable block (ram,0x080997b0)

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



// WARNING: Removing unreachable block (ram,0x08099858)
// WARNING: Removing unreachable block (ram,0x08099865)

undefined8 inst_158_flags_var_8(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffe);
}



longlong inst_158_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0809991a)

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



longlong inst_159_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_159_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_159_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_159_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_159_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_159_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



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



longlong inst_159_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_159_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



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



longlong inst_159_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_159_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



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



longlong inst_159_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_160_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



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



longlong inst_164_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_164_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_164_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_164_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_164_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_164_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_164_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_164_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



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



longlong inst_164_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_164_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_164_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_164_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_164_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_164_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



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



// WARNING: Removing unreachable block (ram,0x080a5d10)

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



// WARNING: Removing unreachable block (ram,0x080a5e87)

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



// WARNING: Removing unreachable block (ram,0x080a5f3c)

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



// WARNING: Removing unreachable block (ram,0x080a5ff1)

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



// WARNING: Removing unreachable block (ram,0x080a6099)

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



// WARNING: Removing unreachable block (ram,0x080a614e)

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



// WARNING: Removing unreachable block (ram,0x080a6210)

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



// WARNING: Removing unreachable block (ram,0x080a62b8)

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



// WARNING: Removing unreachable block (ram,0x080a636d)

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



// WARNING: Removing unreachable block (ram,0x080a6422)

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



// WARNING: Removing unreachable block (ram,0x080a6641)
// WARNING: Removing unreachable block (ram,0x080a664e)

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



// WARNING: Removing unreachable block (ram,0x080a6703)

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



// WARNING: Removing unreachable block (ram,0x080a67ab)
// WARNING: Removing unreachable block (ram,0x080a67b8)

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



// WARNING: Removing unreachable block (ram,0x080a6860)
// WARNING: Removing unreachable block (ram,0x080a686d)

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



// WARNING: Removing unreachable block (ram,0x080a6915)
// WARNING: Removing unreachable block (ram,0x080a6922)

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



// WARNING: Removing unreachable block (ram,0x080a69ca)

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



// WARNING: Removing unreachable block (ram,0x080a6a8c)

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



// WARNING: Removing unreachable block (ram,0x080a6b36)

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



// WARNING: Removing unreachable block (ram,0x080a6cb1)

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



// WARNING: Removing unreachable block (ram,0x080a6d68)

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



// WARNING: Removing unreachable block (ram,0x080a6e12)

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



// WARNING: Removing unreachable block (ram,0x080a6ed6)

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



// WARNING: Removing unreachable block (ram,0x080a7037)

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



// WARNING: Removing unreachable block (ram,0x080a70ee)

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



// WARNING: Removing unreachable block (ram,0x080a71a5)
// WARNING: Removing unreachable block (ram,0x080a71b2)

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



// WARNING: Removing unreachable block (ram,0x080a725c)

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



// WARNING: Removing unreachable block (ram,0x080a7313)

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



// WARNING: Removing unreachable block (ram,0x080a73ca)

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



// WARNING: Removing unreachable block (ram,0x080a75ef)
// WARNING: Removing unreachable block (ram,0x080a75fc)

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



// WARNING: Removing unreachable block (ram,0x080a76a6)

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



// WARNING: Removing unreachable block (ram,0x080a775d)
// WARNING: Removing unreachable block (ram,0x080a776a)

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



// WARNING: Removing unreachable block (ram,0x080a7814)
// WARNING: Removing unreachable block (ram,0x080a7821)

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



// WARNING: Removing unreachable block (ram,0x080a78cb)

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



// WARNING: Removing unreachable block (ram,0x080a7980)
// WARNING: Removing unreachable block (ram,0x080a798d)

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



// WARNING: Removing unreachable block (ram,0x080a7a35)

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



// WARNING: Removing unreachable block (ram,0x080a7b9f)
// WARNING: Removing unreachable block (ram,0x080a7bac)

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



// WARNING: Removing unreachable block (ram,0x080a7c61)

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



// WARNING: Removing unreachable block (ram,0x080a7d16)

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



// WARNING: Removing unreachable block (ram,0x080a7dcb)

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



// WARNING: Removing unreachable block (ram,0x080a7f35)

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



// WARNING: Removing unreachable block (ram,0x080a7fea)

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



// WARNING: Removing unreachable block (ram,0x080a809f)

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



// WARNING: Removing unreachable block (ram,0x080a8147)
// WARNING: Removing unreachable block (ram,0x080a8154)

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



// WARNING: Removing unreachable block (ram,0x080a8209)

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



// WARNING: Removing unreachable block (ram,0x080a82b1)

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



// WARNING: Removing unreachable block (ram,0x080a8373)

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



// WARNING: Removing unreachable block (ram,0x080a841b)

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



// WARNING: Removing unreachable block (ram,0x080a84d0)
// WARNING: Removing unreachable block (ram,0x080a84dd)

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



// WARNING: Removing unreachable block (ram,0x080a8592)

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



// WARNING: Removing unreachable block (ram,0x080a863a)
// WARNING: Removing unreachable block (ram,0x080a8647)

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



// WARNING: Removing unreachable block (ram,0x080a87a6)
// WARNING: Removing unreachable block (ram,0x080a87b3)

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



// WARNING: Removing unreachable block (ram,0x080a886a)

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



// WARNING: Removing unreachable block (ram,0x080a8921)

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



// WARNING: Removing unreachable block (ram,0x080a8a82)
// WARNING: Removing unreachable block (ram,0x080a8a8f)

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



// WARNING: Removing unreachable block (ram,0x080a8b46)

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



// WARNING: Removing unreachable block (ram,0x080a8cb4)

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



// WARNING: Removing unreachable block (ram,0x080a8d5e)

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



// WARNING: Removing unreachable block (ram,0x080a8e15)
// WARNING: Removing unreachable block (ram,0x080a8e22)

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



// WARNING: Removing unreachable block (ram,0x080a8ecc)
// WARNING: Removing unreachable block (ram,0x080a8ed9)

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



// WARNING: Removing unreachable block (ram,0x080a9047)

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



// WARNING: Removing unreachable block (ram,0x080a90f1)
// WARNING: Removing unreachable block (ram,0x080a90fe)

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



// WARNING: Removing unreachable block (ram,0x080a91a8)

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



// WARNING: Removing unreachable block (ram,0x080a926c)

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



// WARNING: Removing unreachable block (ram,0x080a9316)
// WARNING: Removing unreachable block (ram,0x080a9323)

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



// WARNING: Removing unreachable block (ram,0x080a93cd)

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



// WARNING: Removing unreachable block (ram,0x080a9484)
// WARNING: Removing unreachable block (ram,0x080a9491)

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



// WARNING: Removing unreachable block (ram,0x080a953b)

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



// WARNING: Removing unreachable block (ram,0x080a96ad)

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



// WARNING: Removing unreachable block (ram,0x080a9766)
// WARNING: Removing unreachable block (ram,0x080a9773)

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



// WARNING: Removing unreachable block (ram,0x080a9a4a)

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



// WARNING: Removing unreachable block (ram,0x080a9b03)

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



// WARNING: Removing unreachable block (ram,0x080a9d2e)
// WARNING: Removing unreachable block (ram,0x080a9d3b)

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



// WARNING: Removing unreachable block (ram,0x080a9df4)

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



// WARNING: Removing unreachable block (ram,0x080a9ea0)

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



// WARNING: Removing unreachable block (ram,0x080a9f59)
// WARNING: Removing unreachable block (ram,0x080a9f66)

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



// WARNING: Removing unreachable block (ram,0x080aa012)
// WARNING: Removing unreachable block (ram,0x080aa01f)

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



// WARNING: Removing unreachable block (ram,0x080aa0cb)
// WARNING: Removing unreachable block (ram,0x080aa0d8)

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



// WARNING: Removing unreachable block (ram,0x080aa191)

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



// WARNING: Removing unreachable block (ram,0x080aa303)

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



// WARNING: Removing unreachable block (ram,0x080aa466)
// WARNING: Removing unreachable block (ram,0x080aa473)

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



// WARNING: Removing unreachable block (ram,0x080aa51d)
// WARNING: Removing unreachable block (ram,0x080aa52a)

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



// WARNING: Removing unreachable block (ram,0x080aa5e1)

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



// WARNING: Removing unreachable block (ram,0x080aa68b)
// WARNING: Removing unreachable block (ram,0x080aa698)

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



// WARNING: Removing unreachable block (ram,0x080aa7f9)

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



// WARNING: Removing unreachable block (ram,0x080aa8bd)

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



// WARNING: Removing unreachable block (ram,0x080aa974)

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



// WARNING: Removing unreachable block (ram,0x080aaa1e)
// WARNING: Removing unreachable block (ram,0x080aaa2b)

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



// WARNING: Removing unreachable block (ram,0x080aaad5)

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



// WARNING: Removing unreachable block (ram,0x080aab8c)

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



// WARNING: Removing unreachable block (ram,0x080aac43)

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



// WARNING: Removing unreachable block (ram,0x080aacfa)
// WARNING: Removing unreachable block (ram,0x080aad07)

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



// WARNING: Removing unreachable block (ram,0x080aaf1f)

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



// WARNING: Removing unreachable block (ram,0x080aafe3)

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



// WARNING: Removing unreachable block (ram,0x080ab08d)

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



// WARNING: Removing unreachable block (ram,0x080ab144)
// WARNING: Removing unreachable block (ram,0x080ab151)

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



// WARNING: Removing unreachable block (ram,0x080ab2b2)
// WARNING: Removing unreachable block (ram,0x080ab2bf)

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



// WARNING: Removing unreachable block (ram,0x080ab369)

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



// WARNING: Removing unreachable block (ram,0x080ab420)
// WARNING: Removing unreachable block (ram,0x080ab42d)

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



// WARNING: Removing unreachable block (ram,0x080ab4d7)
// WARNING: Removing unreachable block (ram,0x080ab4e4)

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



// WARNING: Removing unreachable block (ram,0x080ab58e)
// WARNING: Removing unreachable block (ram,0x080ab59b)

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



// WARNING: Removing unreachable block (ram,0x080ab645)
// WARNING: Removing unreachable block (ram,0x080ab652)

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



// WARNING: Removing unreachable block (ram,0x080ab921)
// WARNING: Removing unreachable block (ram,0x080ab92e)

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



// WARNING: Removing unreachable block (ram,0x080ab9d8)

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



// WARNING: Removing unreachable block (ram,0x080abb53)

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



// WARNING: Removing unreachable block (ram,0x080abcc1)

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



// WARNING: Removing unreachable block (ram,0x080abd6b)
// WARNING: Removing unreachable block (ram,0x080abd78)

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



// WARNING: Removing unreachable block (ram,0x080abe22)

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



// WARNING: Removing unreachable block (ram,0x080abee6)

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



// WARNING: Removing unreachable block (ram,0x080abf9d)

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



// WARNING: Removing unreachable block (ram,0x080ac054)

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



// WARNING: Removing unreachable block (ram,0x080ac100)

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



// WARNING: Removing unreachable block (ram,0x080ac1b9)
// WARNING: Removing unreachable block (ram,0x080ac1c6)

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



// WARNING: Removing unreachable block (ram,0x080ac27f)

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



// WARNING: Removing unreachable block (ram,0x080ac3e4)
// WARNING: Removing unreachable block (ram,0x080ac3f1)

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



// WARNING: Removing unreachable block (ram,0x080ac49d)
// WARNING: Removing unreachable block (ram,0x080ac4aa)

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



// WARNING: Removing unreachable block (ram,0x080ac60f)
// WARNING: Removing unreachable block (ram,0x080ac61c)

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



// WARNING: Removing unreachable block (ram,0x080ac6c8)
// WARNING: Removing unreachable block (ram,0x080ac6d5)

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



// WARNING: Removing unreachable block (ram,0x080ac781)
// WARNING: Removing unreachable block (ram,0x080ac78e)

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



// WARNING: Removing unreachable block (ram,0x080ac83a)

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



// WARNING: Removing unreachable block (ram,0x080ac8f3)

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



// WARNING: Removing unreachable block (ram,0x080ac9ac)
// WARNING: Removing unreachable block (ram,0x080ac9b9)

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



// WARNING: Removing unreachable block (ram,0x080acb1e)

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



// WARNING: Removing unreachable block (ram,0x080acbd7)
// WARNING: Removing unreachable block (ram,0x080acbe4)

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



// WARNING: Removing unreachable block (ram,0x080acc90)
// WARNING: Removing unreachable block (ram,0x080acc9d)

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



// WARNING: Removing unreachable block (ram,0x080ace0f)

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



// WARNING: Removing unreachable block (ram,0x080acebb)
// WARNING: Removing unreachable block (ram,0x080acec8)

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



// WARNING: Removing unreachable block (ram,0x080ad029)

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



// WARNING: Removing unreachable block (ram,0x080ad0ed)

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



// WARNING: Removing unreachable block (ram,0x080ad197)

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



// WARNING: Removing unreachable block (ram,0x080ad25b)

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



// WARNING: Removing unreachable block (ram,0x080ad312)

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



// WARNING: Removing unreachable block (ram,0x080ad537)

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



// WARNING: Removing unreachable block (ram,0x080ad5e1)
// WARNING: Removing unreachable block (ram,0x080ad5ee)

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



// WARNING: Removing unreachable block (ram,0x080ad74f)

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



// WARNING: Removing unreachable block (ram,0x080ad806)
// WARNING: Removing unreachable block (ram,0x080ad813)

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



// WARNING: Removing unreachable block (ram,0x080ad8ca)

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



// WARNING: Removing unreachable block (ram,0x080ad981)

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



// WARNING: Removing unreachable block (ram,0x080ada2b)

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



// WARNING: Removing unreachable block (ram,0x080adba6)

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



// WARNING: Removing unreachable block (ram,0x080adc5d)

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



// WARNING: Removing unreachable block (ram,0x080add07)
// WARNING: Removing unreachable block (ram,0x080add14)

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



// WARNING: Removing unreachable block (ram,0x080b2c95)
// WARNING: Removing unreachable block (ram,0x080b2cb4)

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



// WARNING: Removing unreachable block (ram,0x080b2d50)

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



// WARNING: Removing unreachable block (ram,0x080b2e1d)

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



// WARNING: Removing unreachable block (ram,0x080b2ed8)

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



// WARNING: Removing unreachable block (ram,0x080b2f81)
// WARNING: Removing unreachable block (ram,0x080b2f93)

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



// WARNING: Removing unreachable block (ram,0x080b304e)

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



// WARNING: Removing unreachable block (ram,0x080b3109)
// WARNING: Removing unreachable block (ram,0x080b30f7)
// WARNING: Removing unreachable block (ram,0x080b3116)

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



// WARNING: Removing unreachable block (ram,0x080b31b2)
// WARNING: Removing unreachable block (ram,0x080b31d1)

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



// WARNING: Removing unreachable block (ram,0x080b3338)
// WARNING: Removing unreachable block (ram,0x080b332b)
// WARNING: Removing unreachable block (ram,0x080b3352)

undefined8 inst_220_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_220_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b33ff)

undefined8 inst_220_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_220_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_220_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_220_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b358d)
// WARNING: Removing unreachable block (ram,0x080b3580)
// WARNING: Removing unreachable block (ram,0x080b35a7)

undefined8 inst_220_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_220_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b3647)
// WARNING: Removing unreachable block (ram,0x080b366e)

undefined8 inst_220_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_220_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b371a)
// WARNING: Removing unreachable block (ram,0x080b3734)

undefined8 inst_220_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_220_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b37e1)

undefined8 inst_220_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_220_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b38a8)

undefined8 inst_220_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_220_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b3962)
// WARNING: Removing unreachable block (ram,0x080b3989)

undefined8 inst_220_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_220_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b3a36)

undefined8 inst_220_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_221_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b3afb)
// WARNING: Removing unreachable block (ram,0x080b3aee)
// WARNING: Removing unreachable block (ram,0x080b3b15)

undefined8 inst_221_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_221_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b3bb3)
// WARNING: Removing unreachable block (ram,0x080b3bda)

undefined8 inst_221_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_221_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b3c85)

undefined8 inst_221_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_221_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b3d4a)

undefined8 inst_221_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_221_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b3e0f)

undefined8 inst_221_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_221_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b3ed4)

undefined8 inst_221_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_221_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b3f99)

undefined8 inst_221_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_221_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b405e)

undefined8 inst_221_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_221_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b4123)

undefined8 inst_221_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_221_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b41e8)

undefined8 inst_221_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_222_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b42a6)
// WARNING: Removing unreachable block (ram,0x080b42cd)

undefined8 inst_222_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_222_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b437e)
// WARNING: Removing unreachable block (ram,0x080b4398)

undefined8 inst_222_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_222_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b4449)

undefined8 inst_222_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_222_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b4514)
// WARNING: Removing unreachable block (ram,0x080b4507)
// WARNING: Removing unreachable block (ram,0x080b452e)

undefined8 inst_222_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_222_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_222_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_222_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b46aa)
// WARNING: Removing unreachable block (ram,0x080b46c4)

undefined8 inst_222_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_222_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b4773)

undefined8 inst_222_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_222_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b4830)
// WARNING: Removing unreachable block (ram,0x080b4857)

undefined8 inst_222_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_222_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b4908)
// WARNING: Removing unreachable block (ram,0x080b4922)

undefined8 inst_222_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_222_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_222_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_223_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b4a9a)

undefined8 inst_223_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_223_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b4b54)
// WARNING: Removing unreachable block (ram,0x080b4b61)

undefined8 inst_223_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_223_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_223_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_223_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b4cef)

undefined8 inst_223_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_223_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b4db6)
// WARNING: Removing unreachable block (ram,0x080b4dd0)

undefined8 inst_223_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_223_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_223_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_223_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b4f44)

undefined8 inst_223_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_223_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b500b)
// WARNING: Removing unreachable block (ram,0x080b4ffe)
// WARNING: Removing unreachable block (ram,0x080b5025)

undefined8 inst_223_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_223_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b50d2)

undefined8 inst_223_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_223_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b5199)

undefined8 inst_223_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_224_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b5259)
// WARNING: Removing unreachable block (ram,0x080b5266)

undefined8 inst_224_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_224_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_224_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_224_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b53ff)
// WARNING: Removing unreachable block (ram,0x080b5419)

undefined8 inst_224_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_224_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b54cb)

undefined8 inst_224_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_224_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b5597)

undefined8 inst_224_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_224_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b5664)
// WARNING: Removing unreachable block (ram,0x080b5657)
// WARNING: Removing unreachable block (ram,0x080b567e)

undefined8 inst_224_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_224_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b5731)
// WARNING: Removing unreachable block (ram,0x080b5724)
// WARNING: Removing unreachable block (ram,0x080b574b)

undefined8 inst_224_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_224_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b57fd)
// WARNING: Removing unreachable block (ram,0x080b57f0)
// WARNING: Removing unreachable block (ram,0x080b5817)

undefined8 inst_224_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_224_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b58ca)
// WARNING: Removing unreachable block (ram,0x080b58e4)

undefined8 inst_224_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_224_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b5997)
// WARNING: Removing unreachable block (ram,0x080b59b1)

undefined8 inst_224_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_225_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_225_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_225_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_225_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_225_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b5be6)

undefined8 inst_225_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_225_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b5cab)
// WARNING: Removing unreachable block (ram,0x080b5c9e)
// WARNING: Removing unreachable block (ram,0x080b5cc5)

undefined8 inst_225_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_225_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b5d63)
// WARNING: Removing unreachable block (ram,0x080b5d8a)

undefined8 inst_225_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_225_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b5e28)
// WARNING: Removing unreachable block (ram,0x080b5e4f)

undefined8 inst_225_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_225_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b5eed)
// WARNING: Removing unreachable block (ram,0x080b5efa)

undefined8 inst_225_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_225_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b5fbf)
// WARNING: Removing unreachable block (ram,0x080b5fd9)

undefined8 inst_225_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_225_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b6084)

undefined8 inst_225_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_225_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_225_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_226_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b6211)
// WARNING: Removing unreachable block (ram,0x080b6204)
// WARNING: Removing unreachable block (ram,0x080b622b)

undefined8 inst_226_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_226_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b62cd)
// WARNING: Removing unreachable block (ram,0x080b62da)

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



// WARNING: Removing unreachable block (ram,0x080b63a3)
// WARNING: Removing unreachable block (ram,0x080b63bd)

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



// WARNING: Removing unreachable block (ram,0x080b6533)
// WARNING: Removing unreachable block (ram,0x080b6526)
// WARNING: Removing unreachable block (ram,0x080b654d)

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



// WARNING: Removing unreachable block (ram,0x080b65fb)
// WARNING: Removing unreachable block (ram,0x080b65ee)
// WARNING: Removing unreachable block (ram,0x080b6615)

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



// WARNING: Removing unreachable block (ram,0x080b66c3)

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



// WARNING: Removing unreachable block (ram,0x080b678c)

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



// WARNING: Removing unreachable block (ram,0x080b6848)
// WARNING: Removing unreachable block (ram,0x080b6855)

undefined8 inst_226_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_226_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b691e)
// WARNING: Removing unreachable block (ram,0x080b6911)
// WARNING: Removing unreachable block (ram,0x080b6938)

undefined8 inst_226_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_227_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b69e5)
// WARNING: Removing unreachable block (ram,0x080b69d8)
// WARNING: Removing unreachable block (ram,0x080b69ff)

undefined8 inst_227_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_227_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b6aac)

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



undefined8 inst_227_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_227_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b6c3a)

undefined8 inst_227_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_227_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b6d01)

undefined8 inst_227_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_227_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b6dc8)

undefined8 inst_227_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_227_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b6e8f)
// WARNING: Removing unreachable block (ram,0x080b6e82)
// WARNING: Removing unreachable block (ram,0x080b6ea9)

undefined8 inst_227_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_227_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b6f56)

undefined8 inst_227_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_227_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



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



// WARNING: Removing unreachable block (ram,0x080b70e4)

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



// WARNING: Removing unreachable block (ram,0x080b71b1)

undefined8 inst_228_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_228_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b727e)
// WARNING: Removing unreachable block (ram,0x080b7298)

undefined8 inst_228_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_228_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



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



// WARNING: Removing unreachable block (ram,0x080b7418)
// WARNING: Removing unreachable block (ram,0x080b740b)
// WARNING: Removing unreachable block (ram,0x080b7432)

undefined8 inst_228_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_228_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b74e5)
// WARNING: Removing unreachable block (ram,0x080b74ff)

undefined8 inst_228_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_228_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b75b2)
// WARNING: Removing unreachable block (ram,0x080b75a5)
// WARNING: Removing unreachable block (ram,0x080b75cc)

undefined8 inst_228_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_228_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b767f)

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



// WARNING: Removing unreachable block (ram,0x080b773d)
// WARNING: Removing unreachable block (ram,0x080b774a)

undefined8 inst_228_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_228_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b7816)
// WARNING: Removing unreachable block (ram,0x080b7830)

undefined8 inst_228_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_228_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b78e2)

undefined8 inst_228_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_229_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b79ab)
// WARNING: Removing unreachable block (ram,0x080b799e)
// WARNING: Removing unreachable block (ram,0x080b79c5)

undefined8 inst_229_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_229_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b7a74)
// WARNING: Removing unreachable block (ram,0x080b7a67)
// WARNING: Removing unreachable block (ram,0x080b7a8e)

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



// WARNING: Removing unreachable block (ram,0x080b7b3d)
// WARNING: Removing unreachable block (ram,0x080b7b30)
// WARNING: Removing unreachable block (ram,0x080b7b57)

undefined8 inst_229_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_229_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



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



// WARNING: Removing unreachable block (ram,0x080b7cc2)
// WARNING: Removing unreachable block (ram,0x080b7ce9)

undefined8 inst_229_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_229_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b7d98)

undefined8 inst_229_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_229_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b7e61)

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



// WARNING: Removing unreachable block (ram,0x080b7f2a)

undefined8 inst_229_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_229_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b7ff3)
// WARNING: Removing unreachable block (ram,0x080b7fe6)
// WARNING: Removing unreachable block (ram,0x080b800d)

undefined8 inst_229_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_229_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b80af)
// WARNING: Removing unreachable block (ram,0x080b80bc)

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



// WARNING: Removing unreachable block (ram,0x080b818a)

undefined8 inst_230_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_230_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b8259)
// WARNING: Removing unreachable block (ram,0x080b8273)

undefined8 inst_230_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_230_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b8328)

undefined8 inst_230_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_230_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



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



// WARNING: Removing unreachable block (ram,0x080b84b8)
// WARNING: Removing unreachable block (ram,0x080b84df)

undefined8 inst_230_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_230_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b8587)
// WARNING: Removing unreachable block (ram,0x080b85ae)

undefined8 inst_230_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_230_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b8662)
// WARNING: Removing unreachable block (ram,0x080b867c)

undefined8 inst_230_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_230_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b8724)
// WARNING: Removing unreachable block (ram,0x080b874b)

undefined8 inst_230_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_230_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b87ff)
// WARNING: Removing unreachable block (ram,0x080b87f2)
// WARNING: Removing unreachable block (ram,0x080b8819)

undefined8 inst_230_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_230_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b88cd)
// WARNING: Removing unreachable block (ram,0x080b88c0)
// WARNING: Removing unreachable block (ram,0x080b88e7)

undefined8 inst_230_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_231_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_231_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_231_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b8a5b)
// WARNING: Removing unreachable block (ram,0x080b8a4e)
// WARNING: Removing unreachable block (ram,0x080b8a75)

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



// WARNING: Removing unreachable block (ram,0x080b8b22)
// WARNING: Removing unreachable block (ram,0x080b8b15)
// WARNING: Removing unreachable block (ram,0x080b8b3c)

undefined8 inst_231_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_231_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b8be9)
// WARNING: Removing unreachable block (ram,0x080b8c03)

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



// WARNING: Removing unreachable block (ram,0x080b8cb0)
// WARNING: Removing unreachable block (ram,0x080b8ca3)
// WARNING: Removing unreachable block (ram,0x080b8cca)

undefined8 inst_231_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_231_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b8d77)
// WARNING: Removing unreachable block (ram,0x080b8d6a)
// WARNING: Removing unreachable block (ram,0x080b8d91)

undefined8 inst_231_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_231_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b8e3e)

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



// WARNING: Removing unreachable block (ram,0x080b8f05)
// WARNING: Removing unreachable block (ram,0x080b8f1f)

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



// WARNING: Removing unreachable block (ram,0x080b8fbf)
// WARNING: Removing unreachable block (ram,0x080b8fe6)

undefined8 inst_231_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_231_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



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



// WARNING: Removing unreachable block (ram,0x080b915c)

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



// WARNING: Removing unreachable block (ram,0x080b92e1)
// WARNING: Removing unreachable block (ram,0x080b92ee)

undefined8 inst_232_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_232_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b93aa)
// WARNING: Removing unreachable block (ram,0x080b93b7)

undefined8 inst_232_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_232_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



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



// WARNING: Removing unreachable block (ram,0x080b9549)
// WARNING: Removing unreachable block (ram,0x080b9563)

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



undefined8 inst_232_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_232_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b96cd)
// WARNING: Removing unreachable block (ram,0x080b96da)

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



// WARNING: Removing unreachable block (ram,0x080b97a3)
// WARNING: Removing unreachable block (ram,0x080b9796)
// WARNING: Removing unreachable block (ram,0x080b97bd)

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



// WARNING: Removing unreachable block (ram,0x080b9933)

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



// WARNING: Removing unreachable block (ram,0x080b99fa)

undefined8 inst_233_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_233_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b9ac1)
// WARNING: Removing unreachable block (ram,0x080b9ab4)
// WARNING: Removing unreachable block (ram,0x080b9adb)

undefined8 inst_233_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_233_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b9b88)
// WARNING: Removing unreachable block (ram,0x080b9b7b)
// WARNING: Removing unreachable block (ram,0x080b9ba2)

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



// WARNING: Removing unreachable block (ram,0x080b9c42)
// WARNING: Removing unreachable block (ram,0x080b9c4f)

undefined8 inst_233_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_233_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b9d16)
// WARNING: Removing unreachable block (ram,0x080b9d30)

undefined8 inst_233_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_233_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b9ddd)
// WARNING: Removing unreachable block (ram,0x080b9dd0)
// WARNING: Removing unreachable block (ram,0x080b9df7)

undefined8 inst_233_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_233_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080b9ea4)
// WARNING: Removing unreachable block (ram,0x080b9ebe)

undefined8 inst_233_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_233_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



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



// WARNING: Removing unreachable block (ram,0x080ba032)
// WARNING: Removing unreachable block (ram,0x080ba025)
// WARNING: Removing unreachable block (ram,0x080ba04c)

undefined8 inst_233_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_234_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ba0ff)
// WARNING: Removing unreachable block (ram,0x080ba0f2)
// WARNING: Removing unreachable block (ram,0x080ba119)

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



// WARNING: Removing unreachable block (ram,0x080ba1cc)
// WARNING: Removing unreachable block (ram,0x080ba1e6)

undefined8 inst_234_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_234_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ba299)

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



// WARNING: Removing unreachable block (ram,0x080ba359)
// WARNING: Removing unreachable block (ram,0x080ba380)

undefined8 inst_234_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_234_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ba433)

undefined8 inst_234_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_234_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_234_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_234_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ba5cd)

undefined8 inst_234_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_234_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ba68c)
// WARNING: Removing unreachable block (ram,0x080ba6b3)

undefined8 inst_234_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_234_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ba759)
// WARNING: Removing unreachable block (ram,0x080ba766)

undefined8 inst_234_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_234_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ba833)
// WARNING: Removing unreachable block (ram,0x080ba826)
// WARNING: Removing unreachable block (ram,0x080ba84d)

undefined8 inst_234_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_235_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ba8fc)
// WARNING: Removing unreachable block (ram,0x080ba8ef)
// WARNING: Removing unreachable block (ram,0x080ba916)

undefined8 inst_235_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_235_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ba9c5)
// WARNING: Removing unreachable block (ram,0x080ba9df)

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



// WARNING: Removing unreachable block (ram,0x080baa81)
// WARNING: Removing unreachable block (ram,0x080baaa8)

undefined8 inst_235_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_235_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bab57)
// WARNING: Removing unreachable block (ram,0x080bab4a)
// WARNING: Removing unreachable block (ram,0x080bab71)

undefined8 inst_235_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_235_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bac20)
// WARNING: Removing unreachable block (ram,0x080bac3a)

undefined8 inst_235_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_235_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bace9)
// WARNING: Removing unreachable block (ram,0x080bacdc)
// WARNING: Removing unreachable block (ram,0x080bad03)

undefined8 inst_235_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_235_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080badb2)
// WARNING: Removing unreachable block (ram,0x080badcc)

undefined8 inst_235_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_235_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bae7b)
// WARNING: Removing unreachable block (ram,0x080bae95)

undefined8 inst_235_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_235_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080baf44)
// WARNING: Removing unreachable block (ram,0x080baf5e)

undefined8 inst_235_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_235_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bb000)
// WARNING: Removing unreachable block (ram,0x080bb027)

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



undefined8 inst_236_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_236_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bb19d)
// WARNING: Removing unreachable block (ram,0x080bb1aa)

undefined8 inst_236_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_236_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_236_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_236_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bb347)
// WARNING: Removing unreachable block (ram,0x080bb33a)
// WARNING: Removing unreachable block (ram,0x080bb361)

undefined8 inst_236_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_236_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bb415)

undefined8 inst_236_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_236_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bb4d7)
// WARNING: Removing unreachable block (ram,0x080bb4fe)

undefined8 inst_236_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_236_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bb5b3)

undefined8 inst_236_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_236_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bb682)

undefined8 inst_236_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_236_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bb751)
// WARNING: Removing unreachable block (ram,0x080bb744)
// WARNING: Removing unreachable block (ram,0x080bb76b)

undefined8 inst_236_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_236_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bb820)

undefined8 inst_236_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_237_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bb8e7)

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



// WARNING: Removing unreachable block (ram,0x080bb9ae)
// WARNING: Removing unreachable block (ram,0x080bb9c8)

undefined8 inst_237_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_237_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bba75)
// WARNING: Removing unreachable block (ram,0x080bba68)
// WARNING: Removing unreachable block (ram,0x080bba8f)

undefined8 inst_237_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_237_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_237_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_237_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_237_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_237_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



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



// WARNING: Removing unreachable block (ram,0x080bbd91)

undefined8 inst_237_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_237_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080bbe58)
// WARNING: Removing unreachable block (ram,0x080bbe4b)
// WARNING: Removing unreachable block (ram,0x080bbe72)

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



// WARNING: Removing unreachable block (ram,0x080bbf12)
// WARNING: Removing unreachable block (ram,0x080bbf1f)

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



// WARNING: Removing unreachable block (ram,0x080bbfd9)
// WARNING: Removing unreachable block (ram,0x080bc000)

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



longlong inst_238_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_238_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_238_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_238_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_238_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_238_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_238_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_238_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_238_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_238_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_238_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_238_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_238_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_238_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_238_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_238_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_238_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_238_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_238_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_239_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_239_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_239_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_239_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_239_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_239_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_239_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_239_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_239_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_239_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_239_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_239_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_239_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_239_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_239_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_239_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_239_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_239_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_239_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_239_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_240_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_240_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_240_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_240_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_240_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_240_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_240_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_240_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_240_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_240_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_240_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_240_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_240_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_240_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_240_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_240_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_240_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_240_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_240_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_240_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_241_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_241_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_241_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_241_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_241_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_241_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_241_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_241_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_241_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_241_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_241_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_241_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_241_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_241_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_241_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_241_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_241_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_241_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_241_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_241_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_242_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_242_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_242_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_242_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_242_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_242_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_242_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_242_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_242_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_242_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_242_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_242_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_242_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_242_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_242_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_242_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_242_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_242_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_242_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_242_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_243_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_243_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_243_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_243_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_243_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_243_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_243_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_243_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_243_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_243_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_243_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_243_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_243_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_243_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_243_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_243_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_243_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_243_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_243_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_243_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
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



undefined8 inst_248_values_var_0(void)

{
  undefined4 in_EDX;
  undefined in_PF;
  
  return CONCAT44(in_EDX,CONCAT22(0xcea4,CONCAT11(in_PF,0x77)) + 0x315bff89);
}



longlong inst_248_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_248_values_var_1(void)

{
  undefined4 in_EDX;
  undefined in_PF;
  
  return CONCAT44(in_EDX,CONCAT22(0xb066,CONCAT11(in_PF,0xb2)) + 0x4f99ff4e);
}



longlong inst_248_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_248_values_var_2(void)

{
  undefined4 in_EDX;
  undefined in_PF;
  
  return CONCAT44(in_EDX,CONCAT31(0xcd4b00,in_PF) + 0x32b4ffff);
}



longlong inst_248_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_248_values_var_3(void)

{
  undefined4 in_EDX;
  undefined in_PF;
  
  return CONCAT44(in_EDX,CONCAT22(0x16d4,CONCAT11(in_PF,0xff)) + -0x16d400ff);
}



longlong inst_248_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_248_values_var_4(void)

{
  undefined4 in_EDX;
  undefined in_PF;
  
  return CONCAT44(in_EDX,((uint)CONCAT11(in_PF,0xd7) | 0xcd530000) + 0x32acfe29);
}



longlong inst_248_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_248_values_var_5(void)

{
  undefined4 in_EDX;
  undefined in_PF;
  
  return CONCAT44(in_EDX,CONCAT22(0x1a6b,CONCAT11(in_PF,0xb3)) + -0x1a6b01b3);
}



longlong inst_248_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_248_values_var_6(void)

{
  undefined4 in_EDX;
  undefined in_PF;
  
  return CONCAT44(in_EDX,CONCAT31(0x6653c3,in_PF) + -0x6653c300);
}



longlong inst_248_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_248_values_var_7(void)

{
  undefined4 in_EDX;
  undefined in_PF;
  
  return CONCAT44(in_EDX,CONCAT31(0xbc3128,in_PF) + 0x43ced7ff);
}



longlong inst_248_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_248_values_var_8(void)

{
  undefined4 in_EDX;
  byte in_PF;
  
  return CONCAT44(in_EDX,((uint)in_PF | 0x54c60d00) + 0xab39f2ff);
}



longlong inst_248_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_248_values_var_9(void)

{
  undefined4 in_EDX;
  undefined in_PF;
  
  return CONCAT44(in_EDX,CONCAT31(0xc8aa6c,in_PF) + 0x37559400);
}



longlong inst_248_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_249_values_var_0(void)

{
  undefined4 in_EDX;
  bool in_PF;
  
  return CONCAT44(in_EDX,CONCAT31(0x6d4aaa,!in_PF) + -0x6d4aaa01);
}



longlong inst_249_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_249_values_var_1(void)

{
  undefined4 in_EDX;
  bool in_PF;
  
  return CONCAT44(in_EDX,((uint)CONCAT11(!in_PF,0x74) | 0x5d050000) + 0xa2faff8c);
}



longlong inst_249_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_249_values_var_2(void)

{
  undefined4 in_EDX;
  bool in_PF;
  
  return CONCAT44(in_EDX,CONCAT22(0x43f5,CONCAT11(!in_PF,0x83)) + -0x43f50183);
}



longlong inst_249_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_249_values_var_3(void)

{
  undefined4 in_EDX;
  bool in_PF;
  
  return CONCAT44(in_EDX,CONCAT31(0x5b554f,!in_PF) + -0x5b554f01);
}



longlong inst_249_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_249_values_var_4(void)

{
  undefined4 in_EDX;
  bool in_PF;
  
  return CONCAT44(in_EDX,CONCAT22(0x168d,CONCAT11(!in_PF,0x1a)) + -0x168d011a);
}



longlong inst_249_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_249_values_var_5(void)

{
  undefined4 in_EDX;
  bool in_PF;
  
  return CONCAT44(in_EDX,CONCAT31(0xcb2424,!in_PF) + 0x34dbdbff);
}



longlong inst_249_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_249_values_var_6(void)

{
  undefined4 in_EDX;
  bool in_PF;
  
  return CONCAT44(in_EDX,CONCAT31(0x8882db,!in_PF) + 0x777d2500);
}



longlong inst_249_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_249_values_var_7(void)

{
  undefined4 in_EDX;
  bool in_PF;
  
  return CONCAT44(in_EDX,CONCAT22(0x86cd,CONCAT11(!in_PF,0xff)) + 0x7932fe01);
}



longlong inst_249_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_249_values_var_8(void)

{
  undefined4 in_EDX;
  bool in_PF;
  
  return CONCAT44(in_EDX,((uint)!in_PF | 0xb7fbf00) + 0xf4804100);
}



longlong inst_249_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_249_values_var_9(void)

{
  undefined4 in_EDX;
  bool in_PF;
  
  return CONCAT44(in_EDX,((uint)CONCAT11(!in_PF,0x17) | 0xaa7a0000) + 0x5585ffe9);
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



longlong inst_254_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c292b)

undefined8 inst_254_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_254_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c29f6)

undefined8 inst_254_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_254_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c2aa7)
// WARNING: Removing unreachable block (ram,0x080c2a9a)
// WARNING: Removing unreachable block (ram,0x080c2ac1)

undefined8 inst_254_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_254_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c2b72)
// WARNING: Removing unreachable block (ram,0x080c2b65)
// WARNING: Removing unreachable block (ram,0x080c2b8c)

undefined8 inst_254_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_254_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c2c30)

undefined8 inst_254_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_254_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c2d08)
// WARNING: Removing unreachable block (ram,0x080c2cfb)
// WARNING: Removing unreachable block (ram,0x080c2d22)

undefined8 inst_254_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_254_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c2dd3)
// WARNING: Removing unreachable block (ram,0x080c2dc6)
// WARNING: Removing unreachable block (ram,0x080c2ded)

undefined8 inst_254_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_254_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c2e9e)

undefined8 inst_254_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_254_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c2f69)

undefined8 inst_254_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_254_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c304e)

undefined8 inst_254_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_255_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c3117)

undefined8 inst_255_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_255_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c31c6)
// WARNING: Removing unreachable block (ram,0x080c31b9)
// WARNING: Removing unreachable block (ram,0x080c31e0)

undefined8 inst_255_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_255_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c328f)
// WARNING: Removing unreachable block (ram,0x080c3282)
// WARNING: Removing unreachable block (ram,0x080c32a9)

undefined8 inst_255_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_255_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c3372)

undefined8 inst_255_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_255_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c343b)

undefined8 inst_255_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_255_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c3504)

undefined8 inst_255_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_255_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c35cd)

undefined8 inst_255_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_255_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c366f)

undefined8 inst_255_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_255_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c3745)

undefined8 inst_255_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_255_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c3801)

undefined8 inst_255_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_256_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c38d9)
// WARNING: Removing unreachable block (ram,0x080c38cc)
// WARNING: Removing unreachable block (ram,0x080c38f3)

undefined8 inst_256_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_256_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c39a4)

undefined8 inst_256_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_256_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c3a6f)
// WARNING: Removing unreachable block (ram,0x080c3a62)
// WARNING: Removing unreachable block (ram,0x080c3a89)

undefined8 inst_256_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_256_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c3b54)

undefined8 inst_256_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_256_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c3bf8)
// WARNING: Removing unreachable block (ram,0x080c3c1f)

undefined8 inst_256_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_256_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c3cc3)
// WARNING: Removing unreachable block (ram,0x080c3cea)

undefined8 inst_256_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_256_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_256_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_256_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c3e59)
// WARNING: Removing unreachable block (ram,0x080c3e66)

undefined8 inst_256_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_256_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c3f31)

undefined8 inst_256_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_256_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c3fef)
// WARNING: Removing unreachable block (ram,0x080c4016)

undefined8 inst_256_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_257_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c40c5)
// WARNING: Removing unreachable block (ram,0x080c40b8)
// WARNING: Removing unreachable block (ram,0x080c40df)

undefined8 inst_257_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_257_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c4181)
// WARNING: Removing unreachable block (ram,0x080c41a8)

undefined8 inst_257_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_257_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c424a)
// WARNING: Removing unreachable block (ram,0x080c4257)

undefined8 inst_257_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_257_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_257_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_257_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c4403)

undefined8 inst_257_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_257_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c44a5)
// WARNING: Removing unreachable block (ram,0x080c44cc)

undefined8 inst_257_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_257_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c457b)

undefined8 inst_257_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_257_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c4644)
// WARNING: Removing unreachable block (ram,0x080c465e)

undefined8 inst_257_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_257_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c4727)

undefined8 inst_257_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_257_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_257_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
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



longlong inst_260_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_260_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_260_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_260_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_260_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_260_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_260_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_260_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_260_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_260_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_260_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_260_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_260_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_260_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_260_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_260_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_260_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_260_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_260_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_261_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_261_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_261_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_261_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_261_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_261_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_261_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_261_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_261_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_261_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_261_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_261_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_261_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_261_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_261_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_261_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_261_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_261_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_261_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_261_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_262_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_262_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_262_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_262_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_262_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_262_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_262_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_262_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_262_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_262_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_262_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_262_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_262_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_262_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_262_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_262_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_262_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_262_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_262_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_262_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_263_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_263_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_263_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_263_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_263_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_263_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_263_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_263_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_263_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_263_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_263_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_263_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_263_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_263_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_263_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_263_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_263_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_263_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_263_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_263_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
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



// WARNING: Removing unreachable block (ram,0x080c7dd8)
// WARNING: Removing unreachable block (ram,0x080c7dff)

undefined8 inst_266_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_266_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c7eac)

undefined8 inst_266_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_266_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c7f73)

undefined8 inst_266_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_266_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_266_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_266_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c80fe)
// WARNING: Removing unreachable block (ram,0x080c80f1)
// WARNING: Removing unreachable block (ram,0x080c8118)

undefined8 inst_266_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_266_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_266_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_266_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c827f)
// WARNING: Removing unreachable block (ram,0x080c828c)

undefined8 inst_266_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_266_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c8352)

undefined8 inst_266_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_266_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c8419)
// WARNING: Removing unreachable block (ram,0x080c840c)
// WARNING: Removing unreachable block (ram,0x080c8433)

undefined8 inst_266_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_266_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c84df)

undefined8 inst_266_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_267_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c85a4)

undefined8 inst_267_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_267_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_267_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_267_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c872e)
// WARNING: Removing unreachable block (ram,0x080c8721)
// WARNING: Removing unreachable block (ram,0x080c8748)

undefined8 inst_267_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_267_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c87e6)
// WARNING: Removing unreachable block (ram,0x080c880d)

undefined8 inst_267_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_267_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c88b8)
// WARNING: Removing unreachable block (ram,0x080c88ab)
// WARNING: Removing unreachable block (ram,0x080c88d2)

undefined8 inst_267_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_267_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c8970)
// WARNING: Removing unreachable block (ram,0x080c897d)

undefined8 inst_267_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_267_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c8a42)
// WARNING: Removing unreachable block (ram,0x080c8a35)
// WARNING: Removing unreachable block (ram,0x080c8a5c)

undefined8 inst_267_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_267_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c8b07)

undefined8 inst_267_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_267_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c8bcc)
// WARNING: Removing unreachable block (ram,0x080c8be6)

undefined8 inst_267_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_267_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c8c91)
// WARNING: Removing unreachable block (ram,0x080c8cab)

undefined8 inst_267_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_268_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c8d5c)
// WARNING: Removing unreachable block (ram,0x080c8d4f)
// WARNING: Removing unreachable block (ram,0x080c8d76)

undefined8 inst_268_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_268_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c8e27)

undefined8 inst_268_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_268_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c8ef2)
// WARNING: Removing unreachable block (ram,0x080c8ee5)
// WARNING: Removing unreachable block (ram,0x080c8f0c)

undefined8 inst_268_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_268_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_268_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_268_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c9087)

undefined8 inst_268_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_268_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c9151)
// WARNING: Removing unreachable block (ram,0x080c916b)

undefined8 inst_268_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_268_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c921b)
// WARNING: Removing unreachable block (ram,0x080c920e)
// WARNING: Removing unreachable block (ram,0x080c9235)

undefined8 inst_268_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_268_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_268_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_268_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c93b0)
// WARNING: Removing unreachable block (ram,0x080c93ca)

undefined8 inst_268_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_268_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c947b)
// WARNING: Removing unreachable block (ram,0x080c9495)

undefined8 inst_268_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_269_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c9542)
// WARNING: Removing unreachable block (ram,0x080c9535)
// WARNING: Removing unreachable block (ram,0x080c955c)

undefined8 inst_269_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_269_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c9609)
// WARNING: Removing unreachable block (ram,0x080c9623)

undefined8 inst_269_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_269_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c96d0)

undefined8 inst_269_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_269_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c9797)
// WARNING: Removing unreachable block (ram,0x080c97b1)

undefined8 inst_269_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_269_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c985e)

undefined8 inst_269_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_269_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c9925)
// WARNING: Removing unreachable block (ram,0x080c9918)
// WARNING: Removing unreachable block (ram,0x080c993f)

undefined8 inst_269_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_269_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c99ec)
// WARNING: Removing unreachable block (ram,0x080c99df)
// WARNING: Removing unreachable block (ram,0x080c9a06)

undefined8 inst_269_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_269_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_269_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_269_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c9b7a)

undefined8 inst_269_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_269_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c9c34)
// WARNING: Removing unreachable block (ram,0x080c9c5b)

undefined8 inst_269_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_270_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c9d0e)
// WARNING: Removing unreachable block (ram,0x080c9d01)
// WARNING: Removing unreachable block (ram,0x080c9d28)

undefined8 inst_270_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_270_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c9dda)
// WARNING: Removing unreachable block (ram,0x080c9dcd)
// WARNING: Removing unreachable block (ram,0x080c9df4)

undefined8 inst_270_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_270_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c9ea6)

undefined8 inst_270_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_270_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080c9f73)

undefined8 inst_270_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_270_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ca040)

undefined8 inst_270_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_270_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ca100)
// WARNING: Removing unreachable block (ram,0x080ca10d)

undefined8 inst_270_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_270_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ca1cd)
// WARNING: Removing unreachable block (ram,0x080ca1da)

undefined8 inst_270_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_270_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ca29a)
// WARNING: Removing unreachable block (ram,0x080ca2a7)

undefined8 inst_270_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_270_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ca373)

undefined8 inst_270_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_270_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ca433)
// WARNING: Removing unreachable block (ram,0x080ca45a)

undefined8 inst_270_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_271_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ca4f8)
// WARNING: Removing unreachable block (ram,0x080ca51f)

undefined8 inst_271_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_271_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ca5ca)
// WARNING: Removing unreachable block (ram,0x080ca5bd)
// WARNING: Removing unreachable block (ram,0x080ca5e4)

undefined8 inst_271_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_271_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ca68f)

undefined8 inst_271_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_271_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ca754)

undefined8 inst_271_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_271_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ca819)

undefined8 inst_271_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_271_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ca8de)
// WARNING: Removing unreachable block (ram,0x080ca8f8)

undefined8 inst_271_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_271_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ca996)
// WARNING: Removing unreachable block (ram,0x080ca9bd)

undefined8 inst_271_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_271_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080caa68)
// WARNING: Removing unreachable block (ram,0x080caa5b)
// WARNING: Removing unreachable block (ram,0x080caa82)

undefined8 inst_271_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_271_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cab20)
// WARNING: Removing unreachable block (ram,0x080cab2d)

undefined8 inst_271_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_271_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cabf2)

undefined8 inst_271_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_272_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cacb8)
// WARNING: Removing unreachable block (ram,0x080cacab)
// WARNING: Removing unreachable block (ram,0x080cacd2)

undefined8 inst_272_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_272_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cad72)
// WARNING: Removing unreachable block (ram,0x080cad7f)

undefined8 inst_272_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_272_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cae46)
// WARNING: Removing unreachable block (ram,0x080cae39)
// WARNING: Removing unreachable block (ram,0x080cae60)

undefined8 inst_272_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_272_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080caeff)
// WARNING: Removing unreachable block (ram,0x080caf0c)

undefined8 inst_272_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_272_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cafd3)
// WARNING: Removing unreachable block (ram,0x080cafc6)
// WARNING: Removing unreachable block (ram,0x080cafed)

undefined8 inst_272_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_272_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cb09a)
// WARNING: Removing unreachable block (ram,0x080cb08d)
// WARNING: Removing unreachable block (ram,0x080cb0b4)

undefined8 inst_272_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_272_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cb161)
// WARNING: Removing unreachable block (ram,0x080cb154)
// WARNING: Removing unreachable block (ram,0x080cb17b)

undefined8 inst_272_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_272_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cb227)
// WARNING: Removing unreachable block (ram,0x080cb21a)
// WARNING: Removing unreachable block (ram,0x080cb241)

undefined8 inst_272_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_272_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cb2ee)
// WARNING: Removing unreachable block (ram,0x080cb2e1)
// WARNING: Removing unreachable block (ram,0x080cb308)

undefined8 inst_272_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_272_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cb3a8)
// WARNING: Removing unreachable block (ram,0x080cb3b5)

undefined8 inst_272_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_273_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cb47a)
// WARNING: Removing unreachable block (ram,0x080cb46d)
// WARNING: Removing unreachable block (ram,0x080cb494)

undefined8 inst_273_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_273_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cb53f)
// WARNING: Removing unreachable block (ram,0x080cb532)
// WARNING: Removing unreachable block (ram,0x080cb559)

undefined8 inst_273_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_273_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cb604)
// WARNING: Removing unreachable block (ram,0x080cb5f7)
// WARNING: Removing unreachable block (ram,0x080cb61e)

undefined8 inst_273_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_273_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cb6c9)
// WARNING: Removing unreachable block (ram,0x080cb6bc)
// WARNING: Removing unreachable block (ram,0x080cb6e3)

undefined8 inst_273_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_273_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cb78e)
// WARNING: Removing unreachable block (ram,0x080cb781)
// WARNING: Removing unreachable block (ram,0x080cb7a8)

undefined8 inst_273_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_273_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cb853)
// WARNING: Removing unreachable block (ram,0x080cb846)
// WARNING: Removing unreachable block (ram,0x080cb86d)

undefined8 inst_273_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_273_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cb918)
// WARNING: Removing unreachable block (ram,0x080cb90b)
// WARNING: Removing unreachable block (ram,0x080cb932)

undefined8 inst_273_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_273_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cb9dd)
// WARNING: Removing unreachable block (ram,0x080cb9d0)
// WARNING: Removing unreachable block (ram,0x080cb9f7)

undefined8 inst_273_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_273_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cbaa2)
// WARNING: Removing unreachable block (ram,0x080cba95)
// WARNING: Removing unreachable block (ram,0x080cbabc)

undefined8 inst_273_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_273_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cbb67)
// WARNING: Removing unreachable block (ram,0x080cbb5a)
// WARNING: Removing unreachable block (ram,0x080cbb81)

undefined8 inst_273_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_274_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cbc32)
// WARNING: Removing unreachable block (ram,0x080cbc25)
// WARNING: Removing unreachable block (ram,0x080cbc4c)

undefined8 inst_274_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_274_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cbcfd)
// WARNING: Removing unreachable block (ram,0x080cbcf0)
// WARNING: Removing unreachable block (ram,0x080cbd17)

undefined8 inst_274_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_274_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cbdc8)
// WARNING: Removing unreachable block (ram,0x080cbdbb)
// WARNING: Removing unreachable block (ram,0x080cbde2)

undefined8 inst_274_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_274_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cbe93)
// WARNING: Removing unreachable block (ram,0x080cbe86)
// WARNING: Removing unreachable block (ram,0x080cbead)

undefined8 inst_274_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_274_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cbf5e)
// WARNING: Removing unreachable block (ram,0x080cbf51)
// WARNING: Removing unreachable block (ram,0x080cbf78)

undefined8 inst_274_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_274_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cc029)
// WARNING: Removing unreachable block (ram,0x080cc01c)
// WARNING: Removing unreachable block (ram,0x080cc043)

undefined8 inst_274_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_274_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cc0f4)
// WARNING: Removing unreachable block (ram,0x080cc0e7)
// WARNING: Removing unreachable block (ram,0x080cc10e)

undefined8 inst_274_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_274_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cc1b1)
// WARNING: Removing unreachable block (ram,0x080cc1be)

undefined8 inst_274_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_274_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cc288)
// WARNING: Removing unreachable block (ram,0x080cc27b)
// WARNING: Removing unreachable block (ram,0x080cc2a2)

undefined8 inst_274_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_274_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cc353)
// WARNING: Removing unreachable block (ram,0x080cc346)
// WARNING: Removing unreachable block (ram,0x080cc36d)

undefined8 inst_274_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_275_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cc40d)
// WARNING: Removing unreachable block (ram,0x080cc41a)

undefined8 inst_275_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_275_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cc4e1)
// WARNING: Removing unreachable block (ram,0x080cc4d4)
// WARNING: Removing unreachable block (ram,0x080cc4fb)

undefined8 inst_275_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_275_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cc5a8)
// WARNING: Removing unreachable block (ram,0x080cc59b)
// WARNING: Removing unreachable block (ram,0x080cc5c2)

undefined8 inst_275_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_275_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cc662)
// WARNING: Removing unreachable block (ram,0x080cc66f)

undefined8 inst_275_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_275_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cc736)
// WARNING: Removing unreachable block (ram,0x080cc729)
// WARNING: Removing unreachable block (ram,0x080cc750)

undefined8 inst_275_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_275_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cc7f0)
// WARNING: Removing unreachable block (ram,0x080cc7fd)

undefined8 inst_275_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_275_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cc8c4)
// WARNING: Removing unreachable block (ram,0x080cc8b7)
// WARNING: Removing unreachable block (ram,0x080cc8de)

undefined8 inst_275_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_275_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cc97e)
// WARNING: Removing unreachable block (ram,0x080cc98b)

undefined8 inst_275_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_275_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cca52)
// WARNING: Removing unreachable block (ram,0x080cca45)
// WARNING: Removing unreachable block (ram,0x080cca6c)

undefined8 inst_275_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_275_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ccb0c)
// WARNING: Removing unreachable block (ram,0x080ccb19)

undefined8 inst_275_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_276_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ccbe6)
// WARNING: Removing unreachable block (ram,0x080ccbd9)
// WARNING: Removing unreachable block (ram,0x080ccc00)

undefined8 inst_276_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_276_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cccb3)
// WARNING: Removing unreachable block (ram,0x080ccca6)
// WARNING: Removing unreachable block (ram,0x080ccccd)

undefined8 inst_276_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_276_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ccd73)
// WARNING: Removing unreachable block (ram,0x080ccd80)

undefined8 inst_276_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_276_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cce4d)
// WARNING: Removing unreachable block (ram,0x080cce40)
// WARNING: Removing unreachable block (ram,0x080cce67)

undefined8 inst_276_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_276_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ccf1a)
// WARNING: Removing unreachable block (ram,0x080ccf0d)
// WARNING: Removing unreachable block (ram,0x080ccf34)

undefined8 inst_276_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_276_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ccfda)
// WARNING: Removing unreachable block (ram,0x080ccfe7)

undefined8 inst_276_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_276_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cd0b4)
// WARNING: Removing unreachable block (ram,0x080cd0a7)
// WARNING: Removing unreachable block (ram,0x080cd0ce)

undefined8 inst_276_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_276_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cd180)
// WARNING: Removing unreachable block (ram,0x080cd173)
// WARNING: Removing unreachable block (ram,0x080cd19a)

undefined8 inst_276_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_276_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cd24d)
// WARNING: Removing unreachable block (ram,0x080cd240)
// WARNING: Removing unreachable block (ram,0x080cd267)

undefined8 inst_276_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_276_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cd31a)
// WARNING: Removing unreachable block (ram,0x080cd30d)
// WARNING: Removing unreachable block (ram,0x080cd334)

undefined8 inst_276_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_277_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cd3d2)
// WARNING: Removing unreachable block (ram,0x080cd3df)

undefined8 inst_277_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_277_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cd497)
// WARNING: Removing unreachable block (ram,0x080cd4a4)

undefined8 inst_277_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_277_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cd569)
// WARNING: Removing unreachable block (ram,0x080cd55c)
// WARNING: Removing unreachable block (ram,0x080cd583)

undefined8 inst_277_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_277_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cd62e)
// WARNING: Removing unreachable block (ram,0x080cd621)
// WARNING: Removing unreachable block (ram,0x080cd648)

undefined8 inst_277_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_277_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cd6f3)
// WARNING: Removing unreachable block (ram,0x080cd6e6)
// WARNING: Removing unreachable block (ram,0x080cd70d)

undefined8 inst_277_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_277_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cd7b8)
// WARNING: Removing unreachable block (ram,0x080cd7ab)
// WARNING: Removing unreachable block (ram,0x080cd7d2)

undefined8 inst_277_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_277_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cd87d)
// WARNING: Removing unreachable block (ram,0x080cd870)
// WARNING: Removing unreachable block (ram,0x080cd897)

undefined8 inst_277_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_277_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cd942)
// WARNING: Removing unreachable block (ram,0x080cd935)
// WARNING: Removing unreachable block (ram,0x080cd95c)

undefined8 inst_277_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_277_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cda07)
// WARNING: Removing unreachable block (ram,0x080cd9fa)
// WARNING: Removing unreachable block (ram,0x080cda21)

undefined8 inst_277_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_277_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cdacc)
// WARNING: Removing unreachable block (ram,0x080cdabf)
// WARNING: Removing unreachable block (ram,0x080cdae6)

undefined8 inst_277_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_278_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cdb93)
// WARNING: Removing unreachable block (ram,0x080cdb86)
// WARNING: Removing unreachable block (ram,0x080cdbad)

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



// WARNING: Removing unreachable block (ram,0x080cdc5a)
// WARNING: Removing unreachable block (ram,0x080cdc74)

undefined8 inst_278_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_278_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cdd14)
// WARNING: Removing unreachable block (ram,0x080cdd21)

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



// WARNING: Removing unreachable block (ram,0x080cdde8)
// WARNING: Removing unreachable block (ram,0x080cde02)

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



// WARNING: Removing unreachable block (ram,0x080cdec9)

undefined8 inst_278_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_278_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cdf76)

undefined8 inst_278_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_278_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ce03d)
// WARNING: Removing unreachable block (ram,0x080ce030)
// WARNING: Removing unreachable block (ram,0x080ce057)

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



// WARNING: Removing unreachable block (ram,0x080ce0f7)

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



// WARNING: Removing unreachable block (ram,0x080ce1cb)
// WARNING: Removing unreachable block (ram,0x080ce1e5)

undefined8 inst_278_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_278_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ce2ac)

undefined8 inst_278_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_279_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ce35b)
// WARNING: Removing unreachable block (ram,0x080ce34e)
// WARNING: Removing unreachable block (ram,0x080ce375)

undefined8 inst_279_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_279_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ce417)
// WARNING: Removing unreachable block (ram,0x080ce424)

undefined8 inst_279_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_279_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ce4ed)
// WARNING: Removing unreachable block (ram,0x080ce4e0)
// WARNING: Removing unreachable block (ram,0x080ce507)

undefined8 inst_279_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_279_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ce5b6)
// WARNING: Removing unreachable block (ram,0x080ce5a9)
// WARNING: Removing unreachable block (ram,0x080ce5d0)

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



// WARNING: Removing unreachable block (ram,0x080ce672)
// WARNING: Removing unreachable block (ram,0x080ce67f)

undefined8 inst_279_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_279_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080ce73b)

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



// WARNING: Removing unreachable block (ram,0x080ce811)
// WARNING: Removing unreachable block (ram,0x080ce82b)

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



// WARNING: Removing unreachable block (ram,0x080ce8f4)

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



// WARNING: Removing unreachable block (ram,0x080ce9a3)
// WARNING: Removing unreachable block (ram,0x080ce9bd)

undefined8 inst_279_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_279_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cea6c)
// WARNING: Removing unreachable block (ram,0x080cea5f)
// WARNING: Removing unreachable block (ram,0x080cea86)

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



// WARNING: Removing unreachable block (ram,0x080ceb26)

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



// WARNING: Removing unreachable block (ram,0x080cec14)

undefined8 inst_280_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_280_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cecc1)
// WARNING: Removing unreachable block (ram,0x080cecdb)

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



// WARNING: Removing unreachable block (ram,0x080ced88)
// WARNING: Removing unreachable block (ram,0x080ceda2)

undefined8 inst_280_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_280_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cee4f)
// WARNING: Removing unreachable block (ram,0x080cee69)

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



// WARNING: Removing unreachable block (ram,0x080cef16)
// WARNING: Removing unreachable block (ram,0x080cef30)

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



// WARNING: Removing unreachable block (ram,0x080cefd0)

undefined8 inst_280_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_280_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cf0a4)

undefined8 inst_280_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_280_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cf15e)

undefined8 inst_280_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_280_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080cf225)
// WARNING: Removing unreachable block (ram,0x080cf232)

undefined8 inst_280_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_281_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_281_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_281_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_281_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_281_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_281_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_281_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_281_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_281_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_281_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_281_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_281_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_281_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_281_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_281_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_281_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_281_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_281_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_281_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_281_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_282_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_282_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_282_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_282_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_282_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_282_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_282_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_282_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_282_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_282_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_282_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_282_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_282_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_282_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_282_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_282_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_282_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_282_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_282_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_282_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_283_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_283_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_283_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_283_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_283_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_283_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_283_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_283_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_283_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_283_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_283_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_283_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_283_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_283_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_283_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_283_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_283_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_283_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_283_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_283_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_284_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d064b)
// WARNING: Removing unreachable block (ram,0x080d0658)

undefined8 inst_284_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_284_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d0710)
// WARNING: Removing unreachable block (ram,0x080d071d)

undefined8 inst_284_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_284_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d07d7)
// WARNING: Removing unreachable block (ram,0x080d07e4)

undefined8 inst_284_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_284_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d08aa)
// WARNING: Removing unreachable block (ram,0x080d089d)
// WARNING: Removing unreachable block (ram,0x080d08c4)

undefined8 inst_284_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_284_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d0963)
// WARNING: Removing unreachable block (ram,0x080d0970)

undefined8 inst_284_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_284_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d0a2a)
// WARNING: Removing unreachable block (ram,0x080d0a37)

undefined8 inst_284_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_284_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d0afe)
// WARNING: Removing unreachable block (ram,0x080d0af1)
// WARNING: Removing unreachable block (ram,0x080d0b18)

undefined8 inst_284_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_284_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d0bc5)
// WARNING: Removing unreachable block (ram,0x080d0bb8)
// WARNING: Removing unreachable block (ram,0x080d0bdf)

undefined8 inst_284_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_284_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d0c7f)
// WARNING: Removing unreachable block (ram,0x080d0c8c)

undefined8 inst_284_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_284_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d0d46)
// WARNING: Removing unreachable block (ram,0x080d0d53)

undefined8 inst_284_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_285_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d0e18)
// WARNING: Removing unreachable block (ram,0x080d0e0b)
// WARNING: Removing unreachable block (ram,0x080d0e32)

undefined8 inst_285_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_285_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d0edd)
// WARNING: Removing unreachable block (ram,0x080d0ed0)
// WARNING: Removing unreachable block (ram,0x080d0ef7)

undefined8 inst_285_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_285_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d0f95)
// WARNING: Removing unreachable block (ram,0x080d0fa2)

undefined8 inst_285_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_285_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d1067)
// WARNING: Removing unreachable block (ram,0x080d105a)
// WARNING: Removing unreachable block (ram,0x080d1081)

undefined8 inst_285_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_285_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d112c)
// WARNING: Removing unreachable block (ram,0x080d111f)
// WARNING: Removing unreachable block (ram,0x080d1146)

undefined8 inst_285_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_285_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d11f1)
// WARNING: Removing unreachable block (ram,0x080d11e4)
// WARNING: Removing unreachable block (ram,0x080d120b)

undefined8 inst_285_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_285_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d12b6)
// WARNING: Removing unreachable block (ram,0x080d12a9)
// WARNING: Removing unreachable block (ram,0x080d12d0)

undefined8 inst_285_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_285_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d136e)
// WARNING: Removing unreachable block (ram,0x080d137b)

undefined8 inst_285_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_285_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d1440)
// WARNING: Removing unreachable block (ram,0x080d1433)
// WARNING: Removing unreachable block (ram,0x080d145a)

undefined8 inst_285_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_285_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d1505)
// WARNING: Removing unreachable block (ram,0x080d14f8)
// WARNING: Removing unreachable block (ram,0x080d151f)

undefined8 inst_285_flags_var_9(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_286_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d15cf)
// WARNING: Removing unreachable block (ram,0x080d15c2)
// WARNING: Removing unreachable block (ram,0x080d15e9)

undefined8 inst_286_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_286_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d169a)
// WARNING: Removing unreachable block (ram,0x080d168d)
// WARNING: Removing unreachable block (ram,0x080d16b4)

undefined8 inst_286_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_286_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d1765)
// WARNING: Removing unreachable block (ram,0x080d1758)
// WARNING: Removing unreachable block (ram,0x080d177f)

undefined8 inst_286_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_286_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d1823)
// WARNING: Removing unreachable block (ram,0x080d1830)

undefined8 inst_286_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_286_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d18ed)
// WARNING: Removing unreachable block (ram,0x080d18fa)

undefined8 inst_286_flags_var_4(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_286_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d19c5)
// WARNING: Removing unreachable block (ram,0x080d19b8)
// WARNING: Removing unreachable block (ram,0x080d19df)

undefined8 inst_286_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_286_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d1a82)
// WARNING: Removing unreachable block (ram,0x080d1a8f)

undefined8 inst_286_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_286_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d1b5a)
// WARNING: Removing unreachable block (ram,0x080d1b4d)
// WARNING: Removing unreachable block (ram,0x080d1b74)

undefined8 inst_286_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_286_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d1c18)
// WARNING: Removing unreachable block (ram,0x080d1c25)

undefined8 inst_286_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_286_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d1ce2)
// WARNING: Removing unreachable block (ram,0x080d1cef)

undefined8 inst_286_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_287_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d1db6)
// WARNING: Removing unreachable block (ram,0x080d1da9)
// WARNING: Removing unreachable block (ram,0x080d1dd0)

undefined8 inst_287_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_287_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d1e70)
// WARNING: Removing unreachable block (ram,0x080d1e7d)

undefined8 inst_287_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_287_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d1f37)
// WARNING: Removing unreachable block (ram,0x080d1f44)

undefined8 inst_287_flags_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_287_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d200b)
// WARNING: Removing unreachable block (ram,0x080d1ffe)
// WARNING: Removing unreachable block (ram,0x080d2025)

undefined8 inst_287_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_287_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d20d2)
// WARNING: Removing unreachable block (ram,0x080d20c5)
// WARNING: Removing unreachable block (ram,0x080d20ec)

undefined8 inst_287_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_287_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d2199)
// WARNING: Removing unreachable block (ram,0x080d218c)
// WARNING: Removing unreachable block (ram,0x080d21b3)

undefined8 inst_287_flags_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_287_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d2260)
// WARNING: Removing unreachable block (ram,0x080d2253)
// WARNING: Removing unreachable block (ram,0x080d227a)

undefined8 inst_287_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_287_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d2327)
// WARNING: Removing unreachable block (ram,0x080d231a)
// WARNING: Removing unreachable block (ram,0x080d2341)

undefined8 inst_287_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_287_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d23ee)
// WARNING: Removing unreachable block (ram,0x080d23e1)
// WARNING: Removing unreachable block (ram,0x080d2408)

undefined8 inst_287_flags_var_8(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_287_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d24a8)
// WARNING: Removing unreachable block (ram,0x080d24b5)

undefined8 inst_287_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_288_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d2582)
// WARNING: Removing unreachable block (ram,0x080d2575)
// WARNING: Removing unreachable block (ram,0x080d259c)

undefined8 inst_288_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_288_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d264f)
// WARNING: Removing unreachable block (ram,0x080d2642)
// WARNING: Removing unreachable block (ram,0x080d2669)

undefined8 inst_288_flags_var_1(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_288_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d270f)
// WARNING: Removing unreachable block (ram,0x080d271c)

undefined8 inst_288_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_288_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d27dc)
// WARNING: Removing unreachable block (ram,0x080d27e9)

undefined8 inst_288_flags_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_288_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d28b6)
// WARNING: Removing unreachable block (ram,0x080d28a9)
// WARNING: Removing unreachable block (ram,0x080d28d0)

undefined8 inst_288_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_288_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d2983)
// WARNING: Removing unreachable block (ram,0x080d2976)
// WARNING: Removing unreachable block (ram,0x080d299d)

undefined8 inst_288_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_288_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d2a50)
// WARNING: Removing unreachable block (ram,0x080d2a43)
// WARNING: Removing unreachable block (ram,0x080d2a6a)

undefined8 inst_288_flags_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_288_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d2b10)
// WARNING: Removing unreachable block (ram,0x080d2b1d)

undefined8 inst_288_flags_var_7(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_288_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d2bea)
// WARNING: Removing unreachable block (ram,0x080d2bdd)
// WARNING: Removing unreachable block (ram,0x080d2c04)

undefined8 inst_288_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_288_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d2cb7)
// WARNING: Removing unreachable block (ram,0x080d2caa)
// WARNING: Removing unreachable block (ram,0x080d2cd1)

undefined8 inst_288_flags_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_289_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d2d7c)
// WARNING: Removing unreachable block (ram,0x080d2d6f)
// WARNING: Removing unreachable block (ram,0x080d2d96)

undefined8 inst_289_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_289_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d2e41)
// WARNING: Removing unreachable block (ram,0x080d2e34)
// WARNING: Removing unreachable block (ram,0x080d2e5b)

undefined8 inst_289_flags_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_289_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d2f06)
// WARNING: Removing unreachable block (ram,0x080d2ef9)
// WARNING: Removing unreachable block (ram,0x080d2f20)

undefined8 inst_289_flags_var_2(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_289_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d2fbe)
// WARNING: Removing unreachable block (ram,0x080d2fcb)

undefined8 inst_289_flags_var_3(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_289_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d3090)
// WARNING: Removing unreachable block (ram,0x080d3083)
// WARNING: Removing unreachable block (ram,0x080d30aa)

undefined8 inst_289_flags_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_289_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d3148)
// WARNING: Removing unreachable block (ram,0x080d3155)

undefined8 inst_289_flags_var_5(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_289_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d321a)
// WARNING: Removing unreachable block (ram,0x080d320d)
// WARNING: Removing unreachable block (ram,0x080d3234)

undefined8 inst_289_flags_var_6(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_289_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d32df)
// WARNING: Removing unreachable block (ram,0x080d32d2)
// WARNING: Removing unreachable block (ram,0x080d32f9)

undefined8 inst_289_flags_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_289_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d3397)
// WARNING: Removing unreachable block (ram,0x080d33a4)

undefined8 inst_289_flags_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_289_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080d3469)
// WARNING: Removing unreachable block (ram,0x080d345c)
// WARNING: Removing unreachable block (ram,0x080d3483)

undefined8 inst_289_flags_var_9(void)

{
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


