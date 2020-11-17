typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    word;
typedef enum Elf_ProgramHeaderType {
    PT_GNU_STACK=1685382481,
    PT_NOTE=4,
    PT_INTERP=3,
    PT_PHDR=6,
    PT_LOAD=1,
    PT_NULL=0,
    PT_DYNAMIC=2,
    PT_SHLIB=5,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_RELRO=1685382482,
    PT_TLS=7
} Elf_ProgramHeaderType;

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

typedef enum Elf_SectionHeaderType {
    SHT_SYMTAB=2,
    SHT_GNU_versym=1879048191,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_LIBLIST=1879048183,
    SHT_FINI_ARRAY=15,
    SHT_GROUP=17,
    SHT_CHECKSUM=1879048184,
    SHT_SHLIB=10,
    SHT_ANDROID_RELA=1610612738,
    SHT_NOBITS=8,
    SHT_GNU_HASH=1879048182,
    SHT_REL=9,
    SHT_SYMTAB_SHNDX=18,
    SHT_HASH=5,
    SHT_PROGBITS=1,
    SHT_ANDROID_REL=1610612737,
    SHT_NULL=0,
    SHT_GNU_verneed=1879048190,
    SHT_INIT_ARRAY=14,
    SHT_NOTE=7,
    SHT_PREINIT_ARRAY=16,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_SUNW_COMDAT=1879048187,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_DYNSYM=11,
    SHT_SUNW_syminfo=1879048188,
    SHT_DYNAMIC=6,
    SHT_SUNW_move=1879048186
} Elf_SectionHeaderType;

struct Elf32_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType sh_type;
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

struct Elf32_Phdr {
    enum Elf_ProgramHeaderType p_type;
    dword p_offset;
    dword p_vaddr;
    dword p_paddr;
    dword p_filesz;
    dword p_memsz;
    dword p_flags;
    dword p_align;
};

typedef enum Elf32_DynTag {
    DT_INIT_ARRAY=25,
    DT_CONFIG=1879047930,
    DT_RELASZ=8,
    DT_INIT=12,
    DT_HASH=4,
    DT_NULL=0,
    DT_GNU_CONFLICT=1879047928,
    DT_FLAGS=30,
    DT_AUXILIARY=2147483645,
    DT_GNU_HASH=1879047925,
    DT_DEBUG=21,
    DT_RELCOUNT=1879048186,
    DT_RELR=36,
    DT_FEATURE_1=1879047676,
    DT_FILTER=2147483647,
    DT_RELENT=19,
    DT_REL=17,
    DT_DEPAUDIT=1879047931,
    DT_RUNPATH=29,
    DT_GNU_PRELINKED=1879047669,
    DT_POSFLAG_1=1879047677,
    DT_VERDEF=1879048188,
    DT_ANDROID_RELRENT=1879040003,
    DT_MOVETAB=1879047934,
    DT_RPATH=15,
    DT_RELACOUNT=1879048185,
    DT_RELSZ=18,
    DT_SYMINSZ=1879047678,
    DT_VERNEED=1879048190,
    DT_ANDROID_RELASZ=1610612754,
    DT_FINI_ARRAY=26,
    DT_TEXTREL=22,
    DT_ANDROID_RELSZ=1610612752,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_VERNEEDNUM=1879048191,
    DT_STRTAB=5,
    DT_NEEDED=1,
    DT_PLTPADSZ=1879047673,
    DT_ANDROID_REL=1610612751,
    DT_FLAGS_1=1879048187,
    DT_ANDROID_RELR=1879040000,
    DT_SYMINFO=1879047935,
    DT_SYMTAB=6,
    DT_TLSDESC_GOT=1879047927,
    DT_JMPREL=23,
    DT_ANDROID_RELA=1610612753,
    DT_SYMINENT=1879047679,
    DT_SONAME=14,
    DT_FINI=13,
    DT_MOVEENT=1879047674,
    DT_RELRENT=37,
    DT_FINI_ARRAYSZ=28,
    DT_PREINIT_ARRAYSZ=33,
    DT_VERSYM=1879048176,
    DT_MOVESZ=1879047675,
    DT_RELAENT=9,
    DT_PLTRELSZ=2,
    DT_RELA=7,
    DT_VERDEFNUM=1879048189,
    DT_PLTREL=20,
    DT_CHECKSUM=1879047672,
    DT_TLSDESC_PLT=1879047926,
    DT_PLTPAD=1879047933,
    DT_RELRSZ=35,
    DT_BIND_NOW=24,
    DT_PREINIT_ARRAY=32,
    DT_SYMBOLIC=16,
    DT_GNU_LIBLIST=1879047929,
    DT_PLTGOT=3,
    DT_STRSZ=10,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_INIT_ARRAYSZ=27,
    DT_AUDIT=1879047932,
    DT_SYMENT=11,
    DT_ANDROID_RELRSZ=1879040001
} Elf32_DynTag;

typedef struct Elf32_Dyn Elf32_Dyn, *PElf32_Dyn;

struct Elf32_Dyn {
    enum Elf32_DynTag d_tag;
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




// WARNING: Removing unreachable block (ram,0x000105cc)
// WARNING: Removing unreachable block (ram,0x000105ec)
// WARNING: Removing unreachable block (ram,0x00010570)
// WARNING: Removing unreachable block (ram,0x000105d4)
// WARNING: Removing unreachable block (ram,0x000105c0)

void _start(void)

{
  __func *unaff_g1;
  EVP_PKEY_CTX *ctx;
  int __status;
  undefined *puVar1;
  int local_res40;
  undefined auStackX68 [4];
  undefined auStackX72 [20];
  
  puVar1 = auStackX68 + local_res40 * 4 + 4;
  environ = puVar1;
  ___Argv = auStackX68;
  if (unaff_g1 != (__func *)0x0) {
    atexit(unaff_g1);
  }
  ctx = (EVP_PKEY_CTX *)atexit(_fini);
  _init(ctx);
  __status = main(local_res40,auStackX68,puVar1,0x20800);
                    // WARNING: Subroutine does not return
  exit(__status);
}



// WARNING: Removing unreachable block (ram,0x00010604)
// WARNING: Removing unreachable block (ram,0x0001063c)

undefined4 main(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = -(-param_1 - 2 & (-1 - ((int)param_1 >> 0x1f)) - (uint)(0xfffffffe < param_1));
  uVar2 = iVar1 - 2;
  printf("MinMax adjusted number of arguments is %d\n",
         (iVar1 - 5U & ((int)uVar2 >> 0x1f) - (uint)(uVar2 < 3)) + 3);
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0001064c)
// WARNING: Removing unreachable block (ram,0x00010650)

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = FUN_0001065c(ctx);
  IllegalInstructionTrap(0x10200);
  return iVar1;
}



void FUN_0001065c(void)

{
  int iVar1;
  int in_o7;
  code *pcVar2;
  code *pcVar3;
  
  iVar1 = in_o7 + *(int *)(in_o7 + 8);
  pcVar2 = *(code **)(iVar1 + -8);
  pcVar3 = *(code **)(iVar1 + -0x10);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)();
  }
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001069c)
// WARNING: Removing unreachable block (ram,0x000106a0)

void _fini(void)

{
  FUN_000106ac();
  IllegalInstructionTrap(0x101b0);
  return;
}



void FUN_000106ac(void)

{
  int iVar1;
  int in_o7;
  code *pcVar2;
  code *pcVar3;
  
  iVar1 = in_o7 + *(int *)(in_o7 + 8);
  pcVar2 = *(code **)(iVar1 + -4);
  pcVar3 = *(code **)(iVar1 + -0xc);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)();
  }
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int atexit(__func *__func)

{
  IllegalInstructionTrap(0x20754);
  return (int)__func;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void exit(int __status)

{
  IllegalInstructionTrap(0x20760);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void _exit(int __status)

{
  IllegalInstructionTrap(0x2076c);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  IllegalInstructionTrap(0x20778);
  return (int)__format;
}


