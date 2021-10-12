typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    word;
typedef ulong size_t;

typedef struct Elf32_Dyn_x86 Elf32_Dyn_x86, *PElf32_Dyn_x86;

typedef enum Elf32_DynTag_x86 {
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

typedef enum Elf_SectionHeaderType_x86 {
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
} Elf_SectionHeaderType_x86;

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

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
  
  FUN_08048424();
  frame_dummy();
  iVar1 = __do_global_ctors_aux();
  return iVar1;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int scanf(char *__format,...)

{
  int iVar1;
  
  iVar1 = scanf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = sscanf(__s,__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = strncmp(__s1,__s2,__n);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void exit(int __status)

{
                    // WARNING: Subroutine does not return
  exit(__status);
}



void _start(void)

{
  __libc_start_main(main);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



undefined4 __regparm3 FUN_08048424(undefined4 param_1,undefined4 param_2)

{
  __gmon_start__();
  return param_2;
}



void __do_global_dtors_aux(void)

{
  code *pcVar1;
  
  if (completed_1 == '\0') {
    while (pcVar1 = *(code **)p_0, pcVar1 != (code *)0x0) {
      p_0 = p_0 + 4;
      (*pcVar1)();
    }
    completed_1 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x08048498)

void frame_dummy(void)

{
  return;
}



undefined4 dummy(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  do {
    if (*(int *)(local_8 * 4 + param_2) == 0) {
      return 0;
    }
    iVar1 = local_8 * 4;
    local_8 = local_8 + 1;
    iVar1 = strncmp(*(char **)(iVar1 + param_2),"LOLO",3);
  } while (iVar1 != 0);
  LOL = 1;
  return 1;
}



void che(void)

{
  printf("Password Incorrect!\n");
                    // WARNING: Subroutine does not return
  exit(0);
}



void parell(char *param_1,undefined4 param_2)

{
  int iVar1;
  int local_c;
  uint local_8;
  
  sscanf(param_1,"%d",&local_8);
  iVar1 = dummy(local_8,param_2);
  if (iVar1 != 0) {
    for (local_c = 0; local_c < 10; local_c = local_c + 1) {
      if ((local_8 & 1) == 0) {
        if (LOL == 1) {
          printf("Password OK!\n");
        }
                    // WARNING: Subroutine does not return
        exit(0);
      }
    }
  }
  return;
}



void check(char *param_1,undefined4 param_2)

{
  size_t sVar1;
  int iVar2;
  char local_11;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_c = 0;
  local_10 = 0;
  while( true ) {
    sVar1 = strlen(param_1);
    if (sVar1 <= local_10) break;
    local_11 = param_1[local_10];
    sscanf(&local_11,"%d",&local_8);
    local_c = local_c + local_8;
    if (local_c == 0x10) {
      parell(param_1,param_2);
    }
    local_10 = local_10 + 1;
  }
  che();
  iVar2 = dummy(local_8,param_2);
  if (iVar2 != 0) {
    for (local_10 = 0; (int)local_10 < 10; local_10 = local_10 + 1) {
      if ((local_8 & 1) == 0) {
        printf("wtf?\n");
                    // WARNING: Subroutine does not return
        exit(0);
      }
    }
  }
  return;
}



undefined4 main(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined local_7c [120];
  
  printf("IOLI Crackme Level 0x08\n");
  printf("Password: ");
  scanf("%s",local_7c);
  check(local_7c,param_3);
  return 0;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx
// WARNING: Removing unreachable block (ram,0x08048713)
// WARNING: Removing unreachable block (ram,0x08048715)

void __libc_csu_init(void)

{
  EVP_PKEY_CTX *in_stack_ffffffd4;
  
  _init(in_stack_ffffffd4);
  return;
}



void __libc_csu_fini(void)

{
  return;
}



// WARNING: This is an inlined function

void __i686_get_pc_thunk_bx(void)

{
  return;
}



undefined4 __do_global_ctors_aux(void)

{
  code *pcVar1;
  code **ppcVar2;
  undefined4 uStack12;
  
  ppcVar2 = &__CTOR_LIST__;
  pcVar1 = __CTOR_LIST__;
  while (pcVar1 != (code *)0xffffffff) {
    ppcVar2 = ppcVar2 + -1;
    (*pcVar1)();
    pcVar1 = *ppcVar2;
  }
  return uStack12;
}



void __regparm3 _fini(undefined4 param_1)

{
  __do_global_dtors_aux(param_1);
  return;
}


