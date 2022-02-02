typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    word;
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



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



void _start(void)

{
  __libc_start_main(main);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



undefined4 call_gmon_start(void)

{
  undefined4 in_ECX;
  
  __gmon_start__();
  return in_ECX;
}



void __do_global_dtors_aux(void)

{
  code *pcVar1;
  
  if (completed_4583 == '\0') {
    while (pcVar1 = *(code **)p_4582, pcVar1 != (code *)0x0) {
      p_4582 = p_4582 + 4;
      (*pcVar1)();
    }
    completed_4583 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0804836c)

void frame_dummy(void)

{
  return;
}



undefined4 main(int param_1)

{
  printf("a(%d)\n",param_1);
  b(param_1 * 3);
  return 0;
}



void b(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  printf("b(%d)\n");
  c((void *)((int)param_1 + -1),pvVar1);
  return;
}



int c(void *param_1,void *param_2)

{
  undefined *puVar1;
  
  printf("c(%d)\n",param_1);
  puVar1 = (&switchD_0804841d::switchdataD_080486c4)[(int)param_1];
  switch(param_1) {
  case (void *)0x2:
    puVar1 = (undefined *)d(2);
    break;
  case (void *)0x3:
    puVar1 = (undefined *)f(3);
    break;
  case (void *)0x4:
    puVar1 = (undefined *)h(4);
    break;
  case (void *)0x5:
    puVar1 = (undefined *)j(5);
    break;
  case (void *)0x6:
    puVar1 = (undefined *)l(6);
  }
  return (int)puVar1;
}



void d(int param_1)

{
  printf("d(%d)\n",param_1);
  if (1 < param_1) {
    e(param_1 + -1);
  }
  return;
}



void e(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  printf("e(%d)\n");
  c((void *)((int)param_1 >> 1),pvVar1);
  return;
}



void f(int param_1)

{
  printf("f(%d)\n",param_1);
  if (1 < param_1) {
    g(param_1 + -1);
  }
  return;
}



void g(int param_1)

{
  printf("g(%d)\n",param_1);
  if (1 < param_1) {
    f(param_1 + -1);
  }
  return;
}



void h(int param_1)

{
  printf("h(%d)\n",param_1);
  if (0 < param_1) {
    i(param_1 + -1);
  }
  return;
}



void i(undefined4 param_1)

{
  printf("i(%d)\n",param_1);
  return;
}



void j(int param_1)

{
  printf("j(%d)\n",param_1);
  if (1 < param_1) {
    k(param_1);
  }
  return;
}



void k(int param_1)

{
  printf("k(%d)\n",param_1);
  if (1 < param_1) {
    e(param_1 + -1);
  }
  return;
}



void l(int param_1)

{
  printf("l(%d)\n",param_1);
  if (1 < param_1) {
    b(param_1 + 2);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x08048640)
// WARNING: Removing unreachable block (ram,0x08048644)
// WARNING: Removing unreachable block (ram,0x0804864f)

void __libc_csu_init(void)

{
  EVP_PKEY_CTX *in_stack_ffffffe4;
  
  _init(in_stack_ffffffe4);
  return;
}



void __libc_csu_fini(void)

{
  return;
}



undefined4 __regparm3 __do_global_ctors_aux(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  
  if (__CTOR_LIST__ != (code *)0xffffffff) {
    puVar2 = &__CTOR_LIST__;
    pcVar1 = __CTOR_LIST__;
    do {
      (*pcVar1)();
      pcVar1 = (code *)puVar2[-1];
      puVar2 = puVar2 + -1;
    } while (pcVar1 != (code *)0xffffffff);
  }
  return param_2;
}



undefined4 __regparm3 _fini(undefined4 param_1)

{
  __do_global_dtors_aux();
  return param_1;
}


