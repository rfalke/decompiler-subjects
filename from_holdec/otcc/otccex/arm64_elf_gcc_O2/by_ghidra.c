typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef long __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char * _IO_read_ptr;
    char * _IO_read_end;
    char * _IO_read_base;
    char * _IO_write_base;
    char * _IO_write_ptr;
    char * _IO_write_end;
    char * _IO_buf_base;
    char * _IO_buf_end;
    char * _IO_save_base;
    char * _IO_backup_base;
    char * _IO_save_end;
    struct _IO_marker * _markers;
    struct _IO_FILE * _chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t * _lock;
    __off64_t _offset;
    void * __pad1;
    void * __pad2;
    void * __pad3;
    void * __pad4;
    size_t __pad5;
    int _mode;
    char _unused2[15];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct _IO_FILE FILE;

typedef ulong sizetype;


// WARNING! conflicting data type names: /DWARF/libio.h/_IO_marker - /libio.h/_IO_marker


// WARNING! conflicting data type names: /DWARF/libio.h/_IO_FILE - /stdio.h/_IO_FILE

typedef struct _IO_FILE_plus _IO_FILE_plus, *P_IO_FILE_plus;

struct _IO_FILE_plus {
};

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType_AARCH64 {
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
    SHT_AARCH64_ATTRIBUTES=1879048195,
    SHT_DYNSYM=11,
    SHT_SUNW_syminfo=1879048188,
    SHT_DYNAMIC=6,
    SHT_SUNW_move=1879048186
} Elf_SectionHeaderType_AARCH64;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_AARCH64 sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

typedef enum Elf_ProgramHeaderType_AARCH64 {
    PT_GNU_STACK=1685382481,
    PT_NOTE=4,
    PT_INTERP=3,
    PT_PHDR=6,
    PT_LOAD=1,
    PT_AARCH64_ARCHEXT=1879048192,
    PT_NULL=0,
    PT_DYNAMIC=2,
    PT_SHLIB=5,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_RELRO=1685382482,
    PT_TLS=7
} Elf_ProgramHeaderType_AARCH64;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType_AARCH64 p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef struct Elf64_Dyn_AARCH64 Elf64_Dyn_AARCH64, *PElf64_Dyn_AARCH64;

typedef enum Elf64_DynTag_AARCH64 {
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
} Elf64_DynTag_AARCH64;

struct Elf64_Dyn_AARCH64 {
    enum Elf64_DynTag_AARCH64 d_tag;
    qword d_val;
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
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
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};




int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



void FUN_00100850(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = atoi(__nptr);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void abort(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Unknown calling convention yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = fwrite(__ptr,__size,__n,__s);
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

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = putchar(__c);
  return iVar1;
}



int main(int argc,int argv)

{
  uint n;
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  if (1 < argc - 2U) {
    printf("usage: %s n [base]\n",(ulong)*(uint *)(long)argv);
    puts("Compute fib(n) and fact(n) and output the result in base \'base\'");
    return 1;
  }
  n = atoi((char *)(ulong)*(uint *)(long)(argv + 4));
  base = 10;
  if ((argc == 3) && (base = atoi((char *)(ulong)*(uint *)(long)(argv + 8)), 0x22 < base - 2U)) {
    fwrite("Invalid base\n",1,0xd,stderr);
    return 1;
  }
  printf("fib(%d) = ",(ulong)n);
  if ((int)n < 3) {
    print_num(1,base);
    putchar(10);
    printf("fact(%d) = ",(ulong)n);
  }
  else {
    uVar3 = (ulong)n;
    iVar2 = 0;
    do {
      iVar1 = (int)uVar3;
      uVar3 = (ulong)(iVar1 - 2);
      iVar1 = fib(iVar1 + -1);
      iVar2 = iVar2 + iVar1;
    } while (2 < (int)uVar3);
    print_num(iVar2 + 1,base);
    putchar(10);
    printf("fact(%d) = ",(ulong)n);
    if (0xc < (int)n) {
      printf("Overflow");
      goto LAB_00100a1c;
    }
  }
  iVar2 = fact(n);
  print_num(iVar2,base);
LAB_00100a1c:
  putchar(10);
  return 0;
}



void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1)
  ;
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x00100b08)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x00100b30)
// WARNING: Removing unreachable block (ram,0x00100b3c)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00100b6c)
// WARNING: Removing unreachable block (ram,0x00100b78)

void register_tm_clones(void)

{
  return;
}



void FUN_00100b84(void)

{
  if (completed_7433 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_7433 = '\x01';
  }
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_7433 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_7433 = '\x01';
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void frame_dummy(void)

{
  if (___JCR_END__ == 0) {
    register_tm_clones();
    return;
  }
  _Jv_RegisterClasses();
  register_tm_clones();
  return;
}



int fact(int n)

{
  int iVar1;
  int iVar2;
  
  if (1 < n) {
    iVar2 = 2;
    iVar1 = 1;
    do {
      iVar1 = iVar1 * iVar2;
      iVar2 = iVar2 + 1;
    } while (iVar2 != n + 1);
    return iVar1;
  }
  return 1;
}



int fib(int n)

{
  int iVar1;
  int iVar2;
  
  if (2 < n) {
    iVar2 = 0;
    do {
      iVar1 = n + -1;
      n = n + -2;
      iVar1 = fib(iVar1);
      iVar2 = iVar2 + iVar1;
    } while (2 < n);
    return iVar2 + 1;
  }
  return 1;
}



undefined8 FUN_00100c84(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  pvVar6 = malloc(0x100);
  uVar4 = (uint)pvVar6;
  lVar7 = (long)(int)(uVar4 + 1);
  do {
    iVar2 = 0;
    if (param_2 != 0) {
      iVar2 = param_1 / param_2;
    }
    uVar5 = (uint)lVar7;
    param_1 = param_1 - iVar2 * param_2;
    cVar3 = (char)param_1;
    cVar1 = cVar3 + '0';
    if (9 < param_1) {
      cVar1 = cVar3 + 'W';
    }
    *(char *)(lVar7 + -1) = cVar1;
    lVar7 = lVar7 + 1;
    param_1 = iVar2;
  } while (iVar2 != 0);
  if (uVar4 != uVar5) {
    pbVar9 = (byte *)((long)(int)uVar5 + -1);
    do {
      pbVar8 = pbVar9 + -1;
      putchar((uint)*pbVar9);
      pbVar9 = pbVar8;
    } while (pbVar8 != (byte *)(((long)(int)uVar5 + -2) - (ulong)(~uVar4 + uVar5)));
  }
  free((void *)(long)(int)uVar4);
  return 0;
}



int print_num(int n,int b)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  pvVar7 = malloc(0x100);
  uVar5 = (uint)pvVar7;
  lVar8 = (long)(int)(uVar5 + 1);
  do {
    iVar3 = 0;
    if (b != 0) {
      iVar3 = n / b;
    }
    uVar6 = (uint)lVar8;
    iVar2 = n - iVar3 * b;
    cVar4 = (char)iVar2;
    cVar1 = cVar4 + '0';
    if (9 < iVar2) {
      cVar1 = cVar4 + 'W';
    }
    *(char *)(lVar8 + -1) = cVar1;
    lVar8 = lVar8 + 1;
    n = iVar3;
  } while (iVar3 != 0);
  if (uVar5 != uVar6) {
    pbVar10 = (byte *)((long)(int)uVar6 + -1);
    do {
      pbVar9 = pbVar10 + -1;
      putchar((uint)*pbVar10);
      pbVar10 = pbVar9;
    } while (pbVar9 != (byte *)(((long)(int)uVar6 + -2) - (ulong)(~uVar5 + uVar6)));
  }
  free((void *)(long)(int)uVar5);
  return 0;
}



int help(int name)

{
  int iVar1;
  
  printf("usage: %s n [base]\n",(ulong)(uint)name);
  iVar1 = puts("Compute fib(n) and fact(n) and output the result in base \'base\'");
  return iVar1;
}



undefined8 __libc_csu_init(EVP_PKEY_CTX *param_1,undefined8 param_2,undefined8 param_3)

{
  code **ppcVar1;
  undefined8 uVar2;
  long lVar3;
  
  _init(param_1);
  lVar3 = 0;
  do {
    ppcVar1 = (code **)(&__frame_dummy_init_array_entry + lVar3);
    lVar3 = lVar3 + 1;
    uVar2 = (**ppcVar1)((ulong)param_1 & 0xffffffff,param_2,param_3);
  } while (lVar3 != 1);
  return uVar2;
}



void __libc_csu_fini(void)

{
  return;
}



void _fini(void)

{
  return;
}


