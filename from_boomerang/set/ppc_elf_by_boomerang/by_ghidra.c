typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    word;
typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

typedef enum Elf_SectionHeaderType_PPC {
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
} Elf_SectionHeaderType_PPC;

struct Elf32_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_PPC sh_type;
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

typedef enum Elf_ProgramHeaderType_PPC {
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
} Elf_ProgramHeaderType_PPC;

struct Elf32_Phdr {
    enum Elf_ProgramHeaderType_PPC p_type;
    dword p_offset;
    dword p_vaddr;
    dword p_paddr;
    dword p_filesz;
    dword p_memsz;
    dword p_flags;
    dword p_align;
};

typedef struct Elf32_Dyn_PPC Elf32_Dyn_PPC, *PElf32_Dyn_PPC;

typedef enum Elf32_DynTag_PPC {
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
    DT_PPC_GOT=1879048192,
    DT_PPC_OPT=1879048193,
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
} Elf32_DynTag_PPC;

struct Elf32_Dyn_PPC {
    enum Elf32_DynTag_PPC d_tag;
    dword d_val;
};

typedef struct Elf32_Rela Elf32_Rela, *PElf32_Rela;

struct Elf32_Rela {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
    dword r_addend; // a constant addend used to compute the relocatable field value
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



void _start(void)

{
  __libc_start_main();
  return;
}



void call_gmon_start(void)

{
  int iVar1;
  
  iVar1 = 0x100002f8;
  func_0x1001093c();
  if (*(code **)(iVar1 + 0xc) != (code *)0x0) {
    (**(code **)(iVar1 + 0xc))();
  }
  return;
}



void __do_global_dtors_aux(void)

{
  code *pcVar1;
  
  if (completed_1 == '\0') {
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



void call___do_global_dtors_aux(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x100003e8)

void frame_dummy(void)

{
  return;
}



void call_frame_dummy(void)

{
  return;
}



bool main(int param_1)

{
  printf("Result is %d\n",1 < param_1);
  return 1 < param_1;
}



// WARNING: Removing unreachable block (ram,0x100004e4)
// WARNING: Removing unreachable block (ram,0x100004e0)

void __libc_csu_fini(void)

{
  _fini();
  return;
}



// WARNING: Removing unreachable block (ram,0x10000574)
// WARNING: Removing unreachable block (ram,0x10000578)

void __libc_csu_init(EVP_PKEY_CTX *param_1)

{
  _init(param_1);
  return;
}



void _savefpr_14(void)

{
  int in_r11;
  undefined8 in_f14;
  undefined8 in_f15;
  undefined8 in_f16;
  undefined8 in_f17;
  undefined8 in_f18;
  undefined8 in_f19;
  undefined8 in_f20;
  undefined8 in_f21;
  undefined8 in_f22;
  undefined8 in_f23;
  undefined8 in_f24;
  undefined8 in_f25;
  undefined8 in_f26;
  undefined8 in_f27;
  undefined8 in_f28;
  undefined8 in_f29;
  undefined8 in_f30;
  undefined8 in_f31;
  
  *(undefined8 *)(in_r11 + -0x90) = in_f14;
  *(undefined8 *)(in_r11 + -0x88) = in_f15;
  *(undefined8 *)(in_r11 + -0x80) = in_f16;
  *(undefined8 *)(in_r11 + -0x78) = in_f17;
  *(undefined8 *)(in_r11 + -0x70) = in_f18;
  *(undefined8 *)(in_r11 + -0x68) = in_f19;
  *(undefined8 *)(in_r11 + -0x60) = in_f20;
  *(undefined8 *)(in_r11 + -0x58) = in_f21;
  *(undefined8 *)(in_r11 + -0x50) = in_f22;
  *(undefined8 *)(in_r11 + -0x48) = in_f23;
  *(undefined8 *)(in_r11 + -0x40) = in_f24;
  *(undefined8 *)(in_r11 + -0x38) = in_f25;
  *(undefined8 *)(in_r11 + -0x30) = in_f26;
  *(undefined8 *)(in_r11 + -0x28) = in_f27;
  *(undefined8 *)(in_r11 + -0x20) = in_f28;
  *(undefined8 *)(in_r11 + -0x18) = in_f29;
  *(undefined8 *)(in_r11 + -0x10) = in_f30;
  *(undefined8 *)(in_r11 + -8) = in_f31;
  return;
}



void _savefpr_15(void)

{
  int in_r11;
  undefined8 in_f15;
  undefined8 in_f16;
  undefined8 in_f17;
  undefined8 in_f18;
  undefined8 in_f19;
  undefined8 in_f20;
  undefined8 in_f21;
  undefined8 in_f22;
  undefined8 in_f23;
  undefined8 in_f24;
  undefined8 in_f25;
  undefined8 in_f26;
  undefined8 in_f27;
  undefined8 in_f28;
  undefined8 in_f29;
  undefined8 in_f30;
  undefined8 in_f31;
  
  *(undefined8 *)(in_r11 + -0x88) = in_f15;
  *(undefined8 *)(in_r11 + -0x80) = in_f16;
  *(undefined8 *)(in_r11 + -0x78) = in_f17;
  *(undefined8 *)(in_r11 + -0x70) = in_f18;
  *(undefined8 *)(in_r11 + -0x68) = in_f19;
  *(undefined8 *)(in_r11 + -0x60) = in_f20;
  *(undefined8 *)(in_r11 + -0x58) = in_f21;
  *(undefined8 *)(in_r11 + -0x50) = in_f22;
  *(undefined8 *)(in_r11 + -0x48) = in_f23;
  *(undefined8 *)(in_r11 + -0x40) = in_f24;
  *(undefined8 *)(in_r11 + -0x38) = in_f25;
  *(undefined8 *)(in_r11 + -0x30) = in_f26;
  *(undefined8 *)(in_r11 + -0x28) = in_f27;
  *(undefined8 *)(in_r11 + -0x20) = in_f28;
  *(undefined8 *)(in_r11 + -0x18) = in_f29;
  *(undefined8 *)(in_r11 + -0x10) = in_f30;
  *(undefined8 *)(in_r11 + -8) = in_f31;
  return;
}



void _savefpr_16(void)

{
  int in_r11;
  undefined8 in_f16;
  undefined8 in_f17;
  undefined8 in_f18;
  undefined8 in_f19;
  undefined8 in_f20;
  undefined8 in_f21;
  undefined8 in_f22;
  undefined8 in_f23;
  undefined8 in_f24;
  undefined8 in_f25;
  undefined8 in_f26;
  undefined8 in_f27;
  undefined8 in_f28;
  undefined8 in_f29;
  undefined8 in_f30;
  undefined8 in_f31;
  
  *(undefined8 *)(in_r11 + -0x80) = in_f16;
  *(undefined8 *)(in_r11 + -0x78) = in_f17;
  *(undefined8 *)(in_r11 + -0x70) = in_f18;
  *(undefined8 *)(in_r11 + -0x68) = in_f19;
  *(undefined8 *)(in_r11 + -0x60) = in_f20;
  *(undefined8 *)(in_r11 + -0x58) = in_f21;
  *(undefined8 *)(in_r11 + -0x50) = in_f22;
  *(undefined8 *)(in_r11 + -0x48) = in_f23;
  *(undefined8 *)(in_r11 + -0x40) = in_f24;
  *(undefined8 *)(in_r11 + -0x38) = in_f25;
  *(undefined8 *)(in_r11 + -0x30) = in_f26;
  *(undefined8 *)(in_r11 + -0x28) = in_f27;
  *(undefined8 *)(in_r11 + -0x20) = in_f28;
  *(undefined8 *)(in_r11 + -0x18) = in_f29;
  *(undefined8 *)(in_r11 + -0x10) = in_f30;
  *(undefined8 *)(in_r11 + -8) = in_f31;
  return;
}



void _savefpr_17(void)

{
  int in_r11;
  undefined8 in_f17;
  undefined8 in_f18;
  undefined8 in_f19;
  undefined8 in_f20;
  undefined8 in_f21;
  undefined8 in_f22;
  undefined8 in_f23;
  undefined8 in_f24;
  undefined8 in_f25;
  undefined8 in_f26;
  undefined8 in_f27;
  undefined8 in_f28;
  undefined8 in_f29;
  undefined8 in_f30;
  undefined8 in_f31;
  
  *(undefined8 *)(in_r11 + -0x78) = in_f17;
  *(undefined8 *)(in_r11 + -0x70) = in_f18;
  *(undefined8 *)(in_r11 + -0x68) = in_f19;
  *(undefined8 *)(in_r11 + -0x60) = in_f20;
  *(undefined8 *)(in_r11 + -0x58) = in_f21;
  *(undefined8 *)(in_r11 + -0x50) = in_f22;
  *(undefined8 *)(in_r11 + -0x48) = in_f23;
  *(undefined8 *)(in_r11 + -0x40) = in_f24;
  *(undefined8 *)(in_r11 + -0x38) = in_f25;
  *(undefined8 *)(in_r11 + -0x30) = in_f26;
  *(undefined8 *)(in_r11 + -0x28) = in_f27;
  *(undefined8 *)(in_r11 + -0x20) = in_f28;
  *(undefined8 *)(in_r11 + -0x18) = in_f29;
  *(undefined8 *)(in_r11 + -0x10) = in_f30;
  *(undefined8 *)(in_r11 + -8) = in_f31;
  return;
}



void _savefpr_18(void)

{
  int in_r11;
  undefined8 in_f18;
  undefined8 in_f19;
  undefined8 in_f20;
  undefined8 in_f21;
  undefined8 in_f22;
  undefined8 in_f23;
  undefined8 in_f24;
  undefined8 in_f25;
  undefined8 in_f26;
  undefined8 in_f27;
  undefined8 in_f28;
  undefined8 in_f29;
  undefined8 in_f30;
  undefined8 in_f31;
  
  *(undefined8 *)(in_r11 + -0x70) = in_f18;
  *(undefined8 *)(in_r11 + -0x68) = in_f19;
  *(undefined8 *)(in_r11 + -0x60) = in_f20;
  *(undefined8 *)(in_r11 + -0x58) = in_f21;
  *(undefined8 *)(in_r11 + -0x50) = in_f22;
  *(undefined8 *)(in_r11 + -0x48) = in_f23;
  *(undefined8 *)(in_r11 + -0x40) = in_f24;
  *(undefined8 *)(in_r11 + -0x38) = in_f25;
  *(undefined8 *)(in_r11 + -0x30) = in_f26;
  *(undefined8 *)(in_r11 + -0x28) = in_f27;
  *(undefined8 *)(in_r11 + -0x20) = in_f28;
  *(undefined8 *)(in_r11 + -0x18) = in_f29;
  *(undefined8 *)(in_r11 + -0x10) = in_f30;
  *(undefined8 *)(in_r11 + -8) = in_f31;
  return;
}



void _savefpr_19(void)

{
  int in_r11;
  undefined8 in_f19;
  undefined8 in_f20;
  undefined8 in_f21;
  undefined8 in_f22;
  undefined8 in_f23;
  undefined8 in_f24;
  undefined8 in_f25;
  undefined8 in_f26;
  undefined8 in_f27;
  undefined8 in_f28;
  undefined8 in_f29;
  undefined8 in_f30;
  undefined8 in_f31;
  
  *(undefined8 *)(in_r11 + -0x68) = in_f19;
  *(undefined8 *)(in_r11 + -0x60) = in_f20;
  *(undefined8 *)(in_r11 + -0x58) = in_f21;
  *(undefined8 *)(in_r11 + -0x50) = in_f22;
  *(undefined8 *)(in_r11 + -0x48) = in_f23;
  *(undefined8 *)(in_r11 + -0x40) = in_f24;
  *(undefined8 *)(in_r11 + -0x38) = in_f25;
  *(undefined8 *)(in_r11 + -0x30) = in_f26;
  *(undefined8 *)(in_r11 + -0x28) = in_f27;
  *(undefined8 *)(in_r11 + -0x20) = in_f28;
  *(undefined8 *)(in_r11 + -0x18) = in_f29;
  *(undefined8 *)(in_r11 + -0x10) = in_f30;
  *(undefined8 *)(in_r11 + -8) = in_f31;
  return;
}



void _savefpr_20(void)

{
  int in_r11;
  undefined8 in_f20;
  undefined8 in_f21;
  undefined8 in_f22;
  undefined8 in_f23;
  undefined8 in_f24;
  undefined8 in_f25;
  undefined8 in_f26;
  undefined8 in_f27;
  undefined8 in_f28;
  undefined8 in_f29;
  undefined8 in_f30;
  undefined8 in_f31;
  
  *(undefined8 *)(in_r11 + -0x60) = in_f20;
  *(undefined8 *)(in_r11 + -0x58) = in_f21;
  *(undefined8 *)(in_r11 + -0x50) = in_f22;
  *(undefined8 *)(in_r11 + -0x48) = in_f23;
  *(undefined8 *)(in_r11 + -0x40) = in_f24;
  *(undefined8 *)(in_r11 + -0x38) = in_f25;
  *(undefined8 *)(in_r11 + -0x30) = in_f26;
  *(undefined8 *)(in_r11 + -0x28) = in_f27;
  *(undefined8 *)(in_r11 + -0x20) = in_f28;
  *(undefined8 *)(in_r11 + -0x18) = in_f29;
  *(undefined8 *)(in_r11 + -0x10) = in_f30;
  *(undefined8 *)(in_r11 + -8) = in_f31;
  return;
}



void _savefpr_21(void)

{
  int in_r11;
  undefined8 in_f21;
  undefined8 in_f22;
  undefined8 in_f23;
  undefined8 in_f24;
  undefined8 in_f25;
  undefined8 in_f26;
  undefined8 in_f27;
  undefined8 in_f28;
  undefined8 in_f29;
  undefined8 in_f30;
  undefined8 in_f31;
  
  *(undefined8 *)(in_r11 + -0x58) = in_f21;
  *(undefined8 *)(in_r11 + -0x50) = in_f22;
  *(undefined8 *)(in_r11 + -0x48) = in_f23;
  *(undefined8 *)(in_r11 + -0x40) = in_f24;
  *(undefined8 *)(in_r11 + -0x38) = in_f25;
  *(undefined8 *)(in_r11 + -0x30) = in_f26;
  *(undefined8 *)(in_r11 + -0x28) = in_f27;
  *(undefined8 *)(in_r11 + -0x20) = in_f28;
  *(undefined8 *)(in_r11 + -0x18) = in_f29;
  *(undefined8 *)(in_r11 + -0x10) = in_f30;
  *(undefined8 *)(in_r11 + -8) = in_f31;
  return;
}



void _savefpr_22(void)

{
  int in_r11;
  undefined8 in_f22;
  undefined8 in_f23;
  undefined8 in_f24;
  undefined8 in_f25;
  undefined8 in_f26;
  undefined8 in_f27;
  undefined8 in_f28;
  undefined8 in_f29;
  undefined8 in_f30;
  undefined8 in_f31;
  
  *(undefined8 *)(in_r11 + -0x50) = in_f22;
  *(undefined8 *)(in_r11 + -0x48) = in_f23;
  *(undefined8 *)(in_r11 + -0x40) = in_f24;
  *(undefined8 *)(in_r11 + -0x38) = in_f25;
  *(undefined8 *)(in_r11 + -0x30) = in_f26;
  *(undefined8 *)(in_r11 + -0x28) = in_f27;
  *(undefined8 *)(in_r11 + -0x20) = in_f28;
  *(undefined8 *)(in_r11 + -0x18) = in_f29;
  *(undefined8 *)(in_r11 + -0x10) = in_f30;
  *(undefined8 *)(in_r11 + -8) = in_f31;
  return;
}



void _savefpr_23(void)

{
  int in_r11;
  undefined8 in_f23;
  undefined8 in_f24;
  undefined8 in_f25;
  undefined8 in_f26;
  undefined8 in_f27;
  undefined8 in_f28;
  undefined8 in_f29;
  undefined8 in_f30;
  undefined8 in_f31;
  
  *(undefined8 *)(in_r11 + -0x48) = in_f23;
  *(undefined8 *)(in_r11 + -0x40) = in_f24;
  *(undefined8 *)(in_r11 + -0x38) = in_f25;
  *(undefined8 *)(in_r11 + -0x30) = in_f26;
  *(undefined8 *)(in_r11 + -0x28) = in_f27;
  *(undefined8 *)(in_r11 + -0x20) = in_f28;
  *(undefined8 *)(in_r11 + -0x18) = in_f29;
  *(undefined8 *)(in_r11 + -0x10) = in_f30;
  *(undefined8 *)(in_r11 + -8) = in_f31;
  return;
}



void _savefpr_24(void)

{
  int in_r11;
  undefined8 in_f24;
  undefined8 in_f25;
  undefined8 in_f26;
  undefined8 in_f27;
  undefined8 in_f28;
  undefined8 in_f29;
  undefined8 in_f30;
  undefined8 in_f31;
  
  *(undefined8 *)(in_r11 + -0x40) = in_f24;
  *(undefined8 *)(in_r11 + -0x38) = in_f25;
  *(undefined8 *)(in_r11 + -0x30) = in_f26;
  *(undefined8 *)(in_r11 + -0x28) = in_f27;
  *(undefined8 *)(in_r11 + -0x20) = in_f28;
  *(undefined8 *)(in_r11 + -0x18) = in_f29;
  *(undefined8 *)(in_r11 + -0x10) = in_f30;
  *(undefined8 *)(in_r11 + -8) = in_f31;
  return;
}



void _savefpr_25(void)

{
  int in_r11;
  undefined8 in_f25;
  undefined8 in_f26;
  undefined8 in_f27;
  undefined8 in_f28;
  undefined8 in_f29;
  undefined8 in_f30;
  undefined8 in_f31;
  
  *(undefined8 *)(in_r11 + -0x38) = in_f25;
  *(undefined8 *)(in_r11 + -0x30) = in_f26;
  *(undefined8 *)(in_r11 + -0x28) = in_f27;
  *(undefined8 *)(in_r11 + -0x20) = in_f28;
  *(undefined8 *)(in_r11 + -0x18) = in_f29;
  *(undefined8 *)(in_r11 + -0x10) = in_f30;
  *(undefined8 *)(in_r11 + -8) = in_f31;
  return;
}



void _savefpr_26(void)

{
  int in_r11;
  undefined8 in_f26;
  undefined8 in_f27;
  undefined8 in_f28;
  undefined8 in_f29;
  undefined8 in_f30;
  undefined8 in_f31;
  
  *(undefined8 *)(in_r11 + -0x30) = in_f26;
  *(undefined8 *)(in_r11 + -0x28) = in_f27;
  *(undefined8 *)(in_r11 + -0x20) = in_f28;
  *(undefined8 *)(in_r11 + -0x18) = in_f29;
  *(undefined8 *)(in_r11 + -0x10) = in_f30;
  *(undefined8 *)(in_r11 + -8) = in_f31;
  return;
}



void _savefpr_27(void)

{
  int in_r11;
  undefined8 in_f27;
  undefined8 in_f28;
  undefined8 in_f29;
  undefined8 in_f30;
  undefined8 in_f31;
  
  *(undefined8 *)(in_r11 + -0x28) = in_f27;
  *(undefined8 *)(in_r11 + -0x20) = in_f28;
  *(undefined8 *)(in_r11 + -0x18) = in_f29;
  *(undefined8 *)(in_r11 + -0x10) = in_f30;
  *(undefined8 *)(in_r11 + -8) = in_f31;
  return;
}



void _savefpr_28(void)

{
  int in_r11;
  undefined8 in_f28;
  undefined8 in_f29;
  undefined8 in_f30;
  undefined8 in_f31;
  
  *(undefined8 *)(in_r11 + -0x20) = in_f28;
  *(undefined8 *)(in_r11 + -0x18) = in_f29;
  *(undefined8 *)(in_r11 + -0x10) = in_f30;
  *(undefined8 *)(in_r11 + -8) = in_f31;
  return;
}



void _savefpr_29(void)

{
  int in_r11;
  undefined8 in_f29;
  undefined8 in_f30;
  undefined8 in_f31;
  
  *(undefined8 *)(in_r11 + -0x18) = in_f29;
  *(undefined8 *)(in_r11 + -0x10) = in_f30;
  *(undefined8 *)(in_r11 + -8) = in_f31;
  return;
}



void _savefpr_30(void)

{
  int in_r11;
  undefined8 in_f30;
  undefined8 in_f31;
  
  *(undefined8 *)(in_r11 + -0x10) = in_f30;
  *(undefined8 *)(in_r11 + -8) = in_f31;
  return;
}



void _savefpr_31(void)

{
  int in_r11;
  undefined8 in_f31;
  
  *(undefined8 *)(in_r11 + -8) = in_f31;
  return;
}



void _savegpr_14(void)

{
  int in_r11;
  undefined4 unaff_r14;
  undefined4 unaff_r15;
  undefined4 unaff_r16;
  undefined4 unaff_r17;
  undefined4 unaff_r18;
  undefined4 unaff_r19;
  undefined4 unaff_r20;
  undefined4 unaff_r21;
  undefined4 unaff_r22;
  undefined4 unaff_r23;
  undefined4 unaff_r24;
  undefined4 unaff_r25;
  undefined4 unaff_r26;
  undefined4 unaff_r27;
  undefined4 unaff_r28;
  undefined4 unaff_r29;
  undefined4 unaff_r30;
  undefined4 unaff_r31;
  
  *(undefined4 *)(in_r11 + -0x48) = unaff_r14;
  *(undefined4 *)(in_r11 + -0x44) = unaff_r15;
  *(undefined4 *)(in_r11 + -0x40) = unaff_r16;
  *(undefined4 *)(in_r11 + -0x3c) = unaff_r17;
  *(undefined4 *)(in_r11 + -0x38) = unaff_r18;
  *(undefined4 *)(in_r11 + -0x34) = unaff_r19;
  *(undefined4 *)(in_r11 + -0x30) = unaff_r20;
  *(undefined4 *)(in_r11 + -0x2c) = unaff_r21;
  *(undefined4 *)(in_r11 + -0x28) = unaff_r22;
  *(undefined4 *)(in_r11 + -0x24) = unaff_r23;
  *(undefined4 *)(in_r11 + -0x20) = unaff_r24;
  *(undefined4 *)(in_r11 + -0x1c) = unaff_r25;
  *(undefined4 *)(in_r11 + -0x18) = unaff_r26;
  *(undefined4 *)(in_r11 + -0x14) = unaff_r27;
  *(undefined4 *)(in_r11 + -0x10) = unaff_r28;
  *(undefined4 *)(in_r11 + -0xc) = unaff_r29;
  *(undefined4 *)(in_r11 + -8) = unaff_r30;
  *(undefined4 *)(in_r11 + -4) = unaff_r31;
  return;
}



void _savegpr_15(void)

{
  int in_r11;
  undefined4 unaff_r15;
  undefined4 unaff_r16;
  undefined4 unaff_r17;
  undefined4 unaff_r18;
  undefined4 unaff_r19;
  undefined4 unaff_r20;
  undefined4 unaff_r21;
  undefined4 unaff_r22;
  undefined4 unaff_r23;
  undefined4 unaff_r24;
  undefined4 unaff_r25;
  undefined4 unaff_r26;
  undefined4 unaff_r27;
  undefined4 unaff_r28;
  undefined4 unaff_r29;
  undefined4 unaff_r30;
  undefined4 unaff_r31;
  
  *(undefined4 *)(in_r11 + -0x44) = unaff_r15;
  *(undefined4 *)(in_r11 + -0x40) = unaff_r16;
  *(undefined4 *)(in_r11 + -0x3c) = unaff_r17;
  *(undefined4 *)(in_r11 + -0x38) = unaff_r18;
  *(undefined4 *)(in_r11 + -0x34) = unaff_r19;
  *(undefined4 *)(in_r11 + -0x30) = unaff_r20;
  *(undefined4 *)(in_r11 + -0x2c) = unaff_r21;
  *(undefined4 *)(in_r11 + -0x28) = unaff_r22;
  *(undefined4 *)(in_r11 + -0x24) = unaff_r23;
  *(undefined4 *)(in_r11 + -0x20) = unaff_r24;
  *(undefined4 *)(in_r11 + -0x1c) = unaff_r25;
  *(undefined4 *)(in_r11 + -0x18) = unaff_r26;
  *(undefined4 *)(in_r11 + -0x14) = unaff_r27;
  *(undefined4 *)(in_r11 + -0x10) = unaff_r28;
  *(undefined4 *)(in_r11 + -0xc) = unaff_r29;
  *(undefined4 *)(in_r11 + -8) = unaff_r30;
  *(undefined4 *)(in_r11 + -4) = unaff_r31;
  return;
}



void _savegpr_16(void)

{
  int in_r11;
  undefined4 unaff_r16;
  undefined4 unaff_r17;
  undefined4 unaff_r18;
  undefined4 unaff_r19;
  undefined4 unaff_r20;
  undefined4 unaff_r21;
  undefined4 unaff_r22;
  undefined4 unaff_r23;
  undefined4 unaff_r24;
  undefined4 unaff_r25;
  undefined4 unaff_r26;
  undefined4 unaff_r27;
  undefined4 unaff_r28;
  undefined4 unaff_r29;
  undefined4 unaff_r30;
  undefined4 unaff_r31;
  
  *(undefined4 *)(in_r11 + -0x40) = unaff_r16;
  *(undefined4 *)(in_r11 + -0x3c) = unaff_r17;
  *(undefined4 *)(in_r11 + -0x38) = unaff_r18;
  *(undefined4 *)(in_r11 + -0x34) = unaff_r19;
  *(undefined4 *)(in_r11 + -0x30) = unaff_r20;
  *(undefined4 *)(in_r11 + -0x2c) = unaff_r21;
  *(undefined4 *)(in_r11 + -0x28) = unaff_r22;
  *(undefined4 *)(in_r11 + -0x24) = unaff_r23;
  *(undefined4 *)(in_r11 + -0x20) = unaff_r24;
  *(undefined4 *)(in_r11 + -0x1c) = unaff_r25;
  *(undefined4 *)(in_r11 + -0x18) = unaff_r26;
  *(undefined4 *)(in_r11 + -0x14) = unaff_r27;
  *(undefined4 *)(in_r11 + -0x10) = unaff_r28;
  *(undefined4 *)(in_r11 + -0xc) = unaff_r29;
  *(undefined4 *)(in_r11 + -8) = unaff_r30;
  *(undefined4 *)(in_r11 + -4) = unaff_r31;
  return;
}



void _savegpr_17(void)

{
  int in_r11;
  undefined4 unaff_r17;
  undefined4 unaff_r18;
  undefined4 unaff_r19;
  undefined4 unaff_r20;
  undefined4 unaff_r21;
  undefined4 unaff_r22;
  undefined4 unaff_r23;
  undefined4 unaff_r24;
  undefined4 unaff_r25;
  undefined4 unaff_r26;
  undefined4 unaff_r27;
  undefined4 unaff_r28;
  undefined4 unaff_r29;
  undefined4 unaff_r30;
  undefined4 unaff_r31;
  
  *(undefined4 *)(in_r11 + -0x3c) = unaff_r17;
  *(undefined4 *)(in_r11 + -0x38) = unaff_r18;
  *(undefined4 *)(in_r11 + -0x34) = unaff_r19;
  *(undefined4 *)(in_r11 + -0x30) = unaff_r20;
  *(undefined4 *)(in_r11 + -0x2c) = unaff_r21;
  *(undefined4 *)(in_r11 + -0x28) = unaff_r22;
  *(undefined4 *)(in_r11 + -0x24) = unaff_r23;
  *(undefined4 *)(in_r11 + -0x20) = unaff_r24;
  *(undefined4 *)(in_r11 + -0x1c) = unaff_r25;
  *(undefined4 *)(in_r11 + -0x18) = unaff_r26;
  *(undefined4 *)(in_r11 + -0x14) = unaff_r27;
  *(undefined4 *)(in_r11 + -0x10) = unaff_r28;
  *(undefined4 *)(in_r11 + -0xc) = unaff_r29;
  *(undefined4 *)(in_r11 + -8) = unaff_r30;
  *(undefined4 *)(in_r11 + -4) = unaff_r31;
  return;
}



void _savegpr_18(void)

{
  int in_r11;
  undefined4 unaff_r18;
  undefined4 unaff_r19;
  undefined4 unaff_r20;
  undefined4 unaff_r21;
  undefined4 unaff_r22;
  undefined4 unaff_r23;
  undefined4 unaff_r24;
  undefined4 unaff_r25;
  undefined4 unaff_r26;
  undefined4 unaff_r27;
  undefined4 unaff_r28;
  undefined4 unaff_r29;
  undefined4 unaff_r30;
  undefined4 unaff_r31;
  
  *(undefined4 *)(in_r11 + -0x38) = unaff_r18;
  *(undefined4 *)(in_r11 + -0x34) = unaff_r19;
  *(undefined4 *)(in_r11 + -0x30) = unaff_r20;
  *(undefined4 *)(in_r11 + -0x2c) = unaff_r21;
  *(undefined4 *)(in_r11 + -0x28) = unaff_r22;
  *(undefined4 *)(in_r11 + -0x24) = unaff_r23;
  *(undefined4 *)(in_r11 + -0x20) = unaff_r24;
  *(undefined4 *)(in_r11 + -0x1c) = unaff_r25;
  *(undefined4 *)(in_r11 + -0x18) = unaff_r26;
  *(undefined4 *)(in_r11 + -0x14) = unaff_r27;
  *(undefined4 *)(in_r11 + -0x10) = unaff_r28;
  *(undefined4 *)(in_r11 + -0xc) = unaff_r29;
  *(undefined4 *)(in_r11 + -8) = unaff_r30;
  *(undefined4 *)(in_r11 + -4) = unaff_r31;
  return;
}



void _savegpr_19(void)

{
  int in_r11;
  undefined4 unaff_r19;
  undefined4 unaff_r20;
  undefined4 unaff_r21;
  undefined4 unaff_r22;
  undefined4 unaff_r23;
  undefined4 unaff_r24;
  undefined4 unaff_r25;
  undefined4 unaff_r26;
  undefined4 unaff_r27;
  undefined4 unaff_r28;
  undefined4 unaff_r29;
  undefined4 unaff_r30;
  undefined4 unaff_r31;
  
  *(undefined4 *)(in_r11 + -0x34) = unaff_r19;
  *(undefined4 *)(in_r11 + -0x30) = unaff_r20;
  *(undefined4 *)(in_r11 + -0x2c) = unaff_r21;
  *(undefined4 *)(in_r11 + -0x28) = unaff_r22;
  *(undefined4 *)(in_r11 + -0x24) = unaff_r23;
  *(undefined4 *)(in_r11 + -0x20) = unaff_r24;
  *(undefined4 *)(in_r11 + -0x1c) = unaff_r25;
  *(undefined4 *)(in_r11 + -0x18) = unaff_r26;
  *(undefined4 *)(in_r11 + -0x14) = unaff_r27;
  *(undefined4 *)(in_r11 + -0x10) = unaff_r28;
  *(undefined4 *)(in_r11 + -0xc) = unaff_r29;
  *(undefined4 *)(in_r11 + -8) = unaff_r30;
  *(undefined4 *)(in_r11 + -4) = unaff_r31;
  return;
}



void _savegpr_20(void)

{
  int in_r11;
  undefined4 unaff_r20;
  undefined4 unaff_r21;
  undefined4 unaff_r22;
  undefined4 unaff_r23;
  undefined4 unaff_r24;
  undefined4 unaff_r25;
  undefined4 unaff_r26;
  undefined4 unaff_r27;
  undefined4 unaff_r28;
  undefined4 unaff_r29;
  undefined4 unaff_r30;
  undefined4 unaff_r31;
  
  *(undefined4 *)(in_r11 + -0x30) = unaff_r20;
  *(undefined4 *)(in_r11 + -0x2c) = unaff_r21;
  *(undefined4 *)(in_r11 + -0x28) = unaff_r22;
  *(undefined4 *)(in_r11 + -0x24) = unaff_r23;
  *(undefined4 *)(in_r11 + -0x20) = unaff_r24;
  *(undefined4 *)(in_r11 + -0x1c) = unaff_r25;
  *(undefined4 *)(in_r11 + -0x18) = unaff_r26;
  *(undefined4 *)(in_r11 + -0x14) = unaff_r27;
  *(undefined4 *)(in_r11 + -0x10) = unaff_r28;
  *(undefined4 *)(in_r11 + -0xc) = unaff_r29;
  *(undefined4 *)(in_r11 + -8) = unaff_r30;
  *(undefined4 *)(in_r11 + -4) = unaff_r31;
  return;
}



void _savegpr_21(void)

{
  int in_r11;
  undefined4 unaff_r21;
  undefined4 unaff_r22;
  undefined4 unaff_r23;
  undefined4 unaff_r24;
  undefined4 unaff_r25;
  undefined4 unaff_r26;
  undefined4 unaff_r27;
  undefined4 unaff_r28;
  undefined4 unaff_r29;
  undefined4 unaff_r30;
  undefined4 unaff_r31;
  
  *(undefined4 *)(in_r11 + -0x2c) = unaff_r21;
  *(undefined4 *)(in_r11 + -0x28) = unaff_r22;
  *(undefined4 *)(in_r11 + -0x24) = unaff_r23;
  *(undefined4 *)(in_r11 + -0x20) = unaff_r24;
  *(undefined4 *)(in_r11 + -0x1c) = unaff_r25;
  *(undefined4 *)(in_r11 + -0x18) = unaff_r26;
  *(undefined4 *)(in_r11 + -0x14) = unaff_r27;
  *(undefined4 *)(in_r11 + -0x10) = unaff_r28;
  *(undefined4 *)(in_r11 + -0xc) = unaff_r29;
  *(undefined4 *)(in_r11 + -8) = unaff_r30;
  *(undefined4 *)(in_r11 + -4) = unaff_r31;
  return;
}



void _savegpr_22(void)

{
  int in_r11;
  undefined4 unaff_r22;
  undefined4 unaff_r23;
  undefined4 unaff_r24;
  undefined4 unaff_r25;
  undefined4 unaff_r26;
  undefined4 unaff_r27;
  undefined4 unaff_r28;
  undefined4 unaff_r29;
  undefined4 unaff_r30;
  undefined4 unaff_r31;
  
  *(undefined4 *)(in_r11 + -0x28) = unaff_r22;
  *(undefined4 *)(in_r11 + -0x24) = unaff_r23;
  *(undefined4 *)(in_r11 + -0x20) = unaff_r24;
  *(undefined4 *)(in_r11 + -0x1c) = unaff_r25;
  *(undefined4 *)(in_r11 + -0x18) = unaff_r26;
  *(undefined4 *)(in_r11 + -0x14) = unaff_r27;
  *(undefined4 *)(in_r11 + -0x10) = unaff_r28;
  *(undefined4 *)(in_r11 + -0xc) = unaff_r29;
  *(undefined4 *)(in_r11 + -8) = unaff_r30;
  *(undefined4 *)(in_r11 + -4) = unaff_r31;
  return;
}



void _savegpr_23(void)

{
  int in_r11;
  undefined4 unaff_r23;
  undefined4 unaff_r24;
  undefined4 unaff_r25;
  undefined4 unaff_r26;
  undefined4 unaff_r27;
  undefined4 unaff_r28;
  undefined4 unaff_r29;
  undefined4 unaff_r30;
  undefined4 unaff_r31;
  
  *(undefined4 *)(in_r11 + -0x24) = unaff_r23;
  *(undefined4 *)(in_r11 + -0x20) = unaff_r24;
  *(undefined4 *)(in_r11 + -0x1c) = unaff_r25;
  *(undefined4 *)(in_r11 + -0x18) = unaff_r26;
  *(undefined4 *)(in_r11 + -0x14) = unaff_r27;
  *(undefined4 *)(in_r11 + -0x10) = unaff_r28;
  *(undefined4 *)(in_r11 + -0xc) = unaff_r29;
  *(undefined4 *)(in_r11 + -8) = unaff_r30;
  *(undefined4 *)(in_r11 + -4) = unaff_r31;
  return;
}



void _savegpr_24(void)

{
  int in_r11;
  undefined4 unaff_r24;
  undefined4 unaff_r25;
  undefined4 unaff_r26;
  undefined4 unaff_r27;
  undefined4 unaff_r28;
  undefined4 unaff_r29;
  undefined4 unaff_r30;
  undefined4 unaff_r31;
  
  *(undefined4 *)(in_r11 + -0x20) = unaff_r24;
  *(undefined4 *)(in_r11 + -0x1c) = unaff_r25;
  *(undefined4 *)(in_r11 + -0x18) = unaff_r26;
  *(undefined4 *)(in_r11 + -0x14) = unaff_r27;
  *(undefined4 *)(in_r11 + -0x10) = unaff_r28;
  *(undefined4 *)(in_r11 + -0xc) = unaff_r29;
  *(undefined4 *)(in_r11 + -8) = unaff_r30;
  *(undefined4 *)(in_r11 + -4) = unaff_r31;
  return;
}



void _savegpr_25(void)

{
  int in_r11;
  undefined4 unaff_r25;
  undefined4 unaff_r26;
  undefined4 unaff_r27;
  undefined4 unaff_r28;
  undefined4 unaff_r29;
  undefined4 unaff_r30;
  undefined4 unaff_r31;
  
  *(undefined4 *)(in_r11 + -0x1c) = unaff_r25;
  *(undefined4 *)(in_r11 + -0x18) = unaff_r26;
  *(undefined4 *)(in_r11 + -0x14) = unaff_r27;
  *(undefined4 *)(in_r11 + -0x10) = unaff_r28;
  *(undefined4 *)(in_r11 + -0xc) = unaff_r29;
  *(undefined4 *)(in_r11 + -8) = unaff_r30;
  *(undefined4 *)(in_r11 + -4) = unaff_r31;
  return;
}



void _savegpr_26(void)

{
  int in_r11;
  undefined4 unaff_r26;
  undefined4 unaff_r27;
  undefined4 unaff_r28;
  undefined4 unaff_r29;
  undefined4 unaff_r30;
  undefined4 unaff_r31;
  
  *(undefined4 *)(in_r11 + -0x18) = unaff_r26;
  *(undefined4 *)(in_r11 + -0x14) = unaff_r27;
  *(undefined4 *)(in_r11 + -0x10) = unaff_r28;
  *(undefined4 *)(in_r11 + -0xc) = unaff_r29;
  *(undefined4 *)(in_r11 + -8) = unaff_r30;
  *(undefined4 *)(in_r11 + -4) = unaff_r31;
  return;
}



void _savegpr_27(void)

{
  int in_r11;
  undefined4 unaff_r27;
  undefined4 unaff_r28;
  undefined4 unaff_r29;
  undefined4 unaff_r30;
  undefined4 unaff_r31;
  
  *(undefined4 *)(in_r11 + -0x14) = unaff_r27;
  *(undefined4 *)(in_r11 + -0x10) = unaff_r28;
  *(undefined4 *)(in_r11 + -0xc) = unaff_r29;
  *(undefined4 *)(in_r11 + -8) = unaff_r30;
  *(undefined4 *)(in_r11 + -4) = unaff_r31;
  return;
}



void _savegpr_28(void)

{
  int in_r11;
  undefined4 unaff_r28;
  undefined4 unaff_r29;
  undefined4 unaff_r30;
  undefined4 unaff_r31;
  
  *(undefined4 *)(in_r11 + -0x10) = unaff_r28;
  *(undefined4 *)(in_r11 + -0xc) = unaff_r29;
  *(undefined4 *)(in_r11 + -8) = unaff_r30;
  *(undefined4 *)(in_r11 + -4) = unaff_r31;
  return;
}



void _savegpr_29(void)

{
  int in_r11;
  undefined4 unaff_r29;
  undefined4 unaff_r30;
  undefined4 unaff_r31;
  
  *(undefined4 *)(in_r11 + -0xc) = unaff_r29;
  *(undefined4 *)(in_r11 + -8) = unaff_r30;
  *(undefined4 *)(in_r11 + -4) = unaff_r31;
  return;
}



void _savegpr_30(void)

{
  int in_r11;
  undefined4 unaff_r30;
  undefined4 unaff_r31;
  
  *(undefined4 *)(in_r11 + -8) = unaff_r30;
  *(undefined4 *)(in_r11 + -4) = unaff_r31;
  return;
}



void _savegpr_31(void)

{
  int in_r11;
  undefined4 unaff_r31;
  
  *(undefined4 *)(in_r11 + -4) = unaff_r31;
  return;
}



void _restfpr_14(void)

{
  return;
}



void _restfpr_15(void)

{
  return;
}



void _restfpr_16(void)

{
  return;
}



void _restfpr_17(void)

{
  return;
}



void _restfpr_18(void)

{
  return;
}



void _restfpr_19(void)

{
  return;
}



void _restfpr_20(void)

{
  return;
}



void _restfpr_21(void)

{
  return;
}



void _restfpr_22(void)

{
  return;
}



void _restfpr_23(void)

{
  return;
}



void _restfpr_24(void)

{
  return;
}



void _restfpr_25(void)

{
  return;
}



void _restfpr_26(void)

{
  return;
}



void _restfpr_27(void)

{
  return;
}



void _restfpr_28(void)

{
  return;
}



void _restfpr_29(void)

{
  return;
}



void _restfpr_30(void)

{
  return;
}



void _restfpr_31(void)

{
  return;
}



void _restgpr_14(void)

{
  return;
}



void _restgpr_15(void)

{
  return;
}



void _restgpr_16(void)

{
  return;
}



void _restgpr_17(void)

{
  return;
}



void _restgpr_18(void)

{
  return;
}



void _restgpr_19(void)

{
  return;
}



void _restgpr_20(void)

{
  return;
}



void _restgpr_21(void)

{
  return;
}



void _restgpr_22(void)

{
  return;
}



void _restgpr_23(void)

{
  return;
}



void _restgpr_24(void)

{
  return;
}



void _restgpr_25(void)

{
  return;
}



void _restgpr_26(void)

{
  return;
}



void _restgpr_27(void)

{
  return;
}



void _restgpr_28(void)

{
  return;
}



void _restgpr_29(void)

{
  return;
}



void _restgpr_30(void)

{
  return;
}



void _restgpr_31(void)

{
  return;
}



void _restfpr_14_x(void)

{
  return;
}



void _restfpr_15_x(void)

{
  return;
}



void _restfpr_16_x(void)

{
  return;
}



void _restfpr_17_x(void)

{
  return;
}



void _restfpr_18_x(void)

{
  return;
}



void _restfpr_19_x(void)

{
  return;
}



void _restfpr_20_x(void)

{
  return;
}



void _restfpr_21_x(void)

{
  return;
}



void _restfpr_22_x(void)

{
  return;
}



void _restfpr_23_x(void)

{
  return;
}



void _restfpr_24_x(void)

{
  return;
}



void _restfpr_25_x(void)

{
  return;
}



void _restfpr_26_x(void)

{
  return;
}



void _restfpr_27_x(void)

{
  return;
}



void _restfpr_28_x(void)

{
  return;
}



void _restfpr_29_x(void)

{
  return;
}



void _restfpr_30_x(void)

{
  return;
}



void _restfpr_31_x(void)

{
  return;
}



void _restgpr_14_x(void)

{
  return;
}



void _restgpr_15_x(void)

{
  return;
}



void _restgpr_16_x(void)

{
  return;
}



void _restgpr_17_x(void)

{
  return;
}



void _restgpr_18_x(void)

{
  return;
}



void _restgpr_19_x(void)

{
  return;
}



void _restgpr_20_x(void)

{
  return;
}



void _restgpr_21_x(void)

{
  return;
}



void _restgpr_22_x(void)

{
  return;
}



void _restgpr_23_x(void)

{
  return;
}



void _restgpr_24_x(void)

{
  return;
}



void _restgpr_25_x(void)

{
  return;
}



void _restgpr_26_x(void)

{
  return;
}



void _restgpr_27_x(void)

{
  return;
}



void _restgpr_28_x(void)

{
  return;
}



void _restgpr_29_x(void)

{
  return;
}



void _restgpr_30_x(void)

{
  return;
}



void _restgpr_31_x(void)

{
  return;
}



void __do_global_ctors_aux(void)

{
  code *pcVar1;
  code **ppcVar2;
  
  ppcVar2 = &__CTOR_LIST__;
  pcVar1 = __CTOR_LIST__;
  if (__CTOR_LIST__ != (code *)0xffffffff) {
    do {
      (*pcVar1)();
      ppcVar2 = ppcVar2 + -1;
      pcVar1 = *ppcVar2;
    } while (pcVar1 != (code *)0xffffffff);
  }
  return;
}



void call___do_global_ctors_aux(void)

{
  return;
}



void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



void __libc_start_main(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}


