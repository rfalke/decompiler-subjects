typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
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

typedef longlong long int;

typedef ulonglong sizetype;


// WARNING! conflicting data type names: /DWARF/libio.h/_IO_marker - /libio.h/_IO_marker


// WARNING! conflicting data type names: /DWARF/libio.h/_IO_FILE - /stdio.h/_IO_FILE


// WARNING! conflicting data type names: /DWARF/stddef.h/size_t - /stddef.h/size_t


// WARNING! conflicting data type names: /DWARF/types.h/__off_t - /types.h/__off_t


// WARNING! conflicting data type names: /DWARF/types.h/__off64_t - /types.h/__off64_t

typedef struct _IO_FILE_plus _IO_FILE_plus, *P_IO_FILE_plus;

struct _IO_FILE_plus {
};

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType_AARCH64 {
    SHT_AARCH64_ATTRIBUTES=1879048195,
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
    PT_AARCH64_ARCHEXT=1879048192,
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
} Elf64_DynTag_AARCH64;

struct Elf64_Dyn_AARCH64 {
    enum Elf64_DynTag_AARCH64 d_tag;
    qword d_val;
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
    byte e_ident_pad[9];
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



void FUN_00100c30(void)

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

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = fopen(__filename,__modes);
  return pFVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int isspace(int param_1)

{
  int iVar1;
  
  iVar1 = isspace(param_1);
  return iVar1;
}



void dlsym(void)

{
  dlsym();
  return;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fgetc(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fgetc(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = calloc(__nmemb,__size);
  return pvVar1;
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

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = strtol(__nptr,__endptr,__base);
  return lVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = strstr(__haystack,__needle);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int isalnum(int param_1)

{
  int iVar1;
  
  iVar1 = isalnum(param_1);
  return iVar1;
}



int main(int g,int e)

{
  int iVar1;
  FILE *pFVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  Q = (int)stdin;
  if (1 < g) {
    e = e + 4;
    pFVar2 = fopen((char *)(longlong)*(int *)(longlong)e,"r");
    Q = (int)pFVar2;
  }
  pvVar3 = calloc(1,99999);
  R = (int)pvVar3;
  puVar4 = (undefined8 *)(longlong)R;
  *puVar4 = 0x20666920746e6920;
  puVar4[1] = 0x6968772065736c65;
  puVar4[4] = 0x6966656420726f66;
  puVar4[5] = 0x206e69616d20656e;
  puVar4[2] = 0x6b6165726220656c;
  puVar4[3] = 0x206e727574657220;
  *(char *)(puVar4 + 6) = '\0';
  D = (int)(puVar4 + 6);
  pvVar3 = calloc(1,99999);
  v = (int)pvVar3;
  pvVar3 = calloc(1,99999);
  ac = (int)pvVar3;
  q = ac;
  pvVar3 = calloc(1,99999);
  P = (int)pvVar3;
  o();
  ad();
  ab(0);
                    // WARNING: Could not recover jumptable at 0x00100e54. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)(longlong)*(int *)(longlong)(P + 0x250))((ulonglong)(g - 1),(ulonglong)(uint)e);
  return iVar1;
}



void _start(undefined8 param_1)

{
  undefined8 param_9;
  
  __libc_start_main(main,param_9,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1);
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x00100ea0)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x00100ec8)
// WARNING: Removing unreachable block (ram,0x00100ed4)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00100f04)
// WARNING: Removing unreachable block (ram,0x00100f10)

void register_tm_clones(void)

{
  return;
}



void FUN_00100f1c(void)

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



int E(int e)

{
  undefined *puVar1;
  int in_w3;
  
  puVar1 = (undefined *)(longlong)D;
  D = D + 1;
  *puVar1 = (char)e;
  return in_w3;
}



int o(void)

{
  if (L == 0) {
    h = fgetc((FILE *)(longlong)Q);
    return h;
  }
  if (*(byte *)(longlong)L != 2) {
    h = (uint)*(byte *)(longlong)L;
    L = L + 1;
    return 0x11308c;
  }
  h = W;
  L = 0;
  return W;
}



int Y(void)

{
  o();
  if (h == 0x6e) {
    h = 10;
  }
  return 0x113084;
}



int X(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = h;
  uVar2 = isalnum(h);
  return (int)(iVar1 == 0x5f | uVar2);
}



int Y(void)

{
  int iVar1;
  
  if (h != 0x5c) {
    return h;
  }
  iVar1 = Y();
  return iVar1;
}



byte * FUN_001010cc(void)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  char *pcVar5;
  undefined *puVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  
  while( true ) {
    while( true ) {
      iVar8 = h;
      uVar4 = isspace(h);
      bVar3 = iVar8 == 0x23;
      uVar4 = bVar3 | uVar4;
      while (uVar4 != 0) {
        if (bVar3) {
          o();
          ad();
          if (d == 0x218) {
            ad();
            puVar6 = (undefined *)(longlong)D;
            D = D + 1;
            *puVar6 = 0x20;
            *(undefined4 *)(longlong)d = 1;
            *(int *)(longlong)(d + 4) = D;
          }
          while (h != 10) {
            puVar6 = (undefined *)(longlong)D;
            D = D + 1;
            *puVar6 = (char)h;
            o();
          }
          puVar6 = (undefined *)(longlong)D;
          D = D + 1;
          *puVar6 = 10;
          puVar6 = (undefined *)(longlong)D;
          D = D + 1;
          *puVar6 = 2;
          o();
        }
        else {
          o();
        }
        iVar8 = h;
        uVar4 = isspace(h);
        bVar3 = iVar8 == 0x23;
        uVar4 = bVar3 | uVar4;
      }
      C = 0;
      d = iVar8;
      uVar4 = isalnum(iVar8);
      if ((iVar8 == 0x5f | uVar4) == 0) break;
      puVar6 = (undefined *)(longlong)D;
      D = D + 1;
      *puVar6 = 0x20;
      M = D;
      while (iVar8 = h, uVar4 = isalnum(h), (iVar8 == 0x5f | uVar4) != 0) {
        puVar6 = (undefined *)(longlong)D;
        D = D + 1;
        *puVar6 = (char)iVar8;
        o();
      }
      if (d - 0x30U < 10) {
        z = strtol((char *)(ulonglong)(uint)M,(char **)0x0,0);
        d = 2;
        return (byte *)(ulonglong)(uint)z;
      }
      *(undefined *)(longlong)D = 0x20;
      iVar8 = R;
      pcVar5 = strstr((char *)(longlong)R,(char *)(longlong)(M + -1));
      d = (int)pcVar5 - iVar8;
      *(undefined *)(longlong)D = 0;
      d = (d + 0x20) * 8;
      if (d < 0x219) {
        return (byte *)(ulonglong)(uint)d;
      }
      d = d + P;
      if (*(int *)(longlong)d != 1) {
        return (byte *)(ulonglong)(uint)d;
      }
      L = *(int *)(longlong)(int)(d + 4);
      W = h;
      o();
    }
    o();
    if (d == 0x27) {
      d = 2;
      if (h == 0x5c) {
        Y();
      }
      z = h;
      o();
      uVar4 = o();
      return (byte *)(ulonglong)uVar4;
    }
    if (d != 0x2f || h != 0x2a) break;
    o();
    do {
      if (h == 0) goto LAB_00101394;
      while (h != 0x2a) {
        o();
      }
      o();
    } while (h != 0x2f);
    h = 0;
LAB_00101394:
    o();
  }
  iVar8 = 0x102980;
  do {
    while( true ) {
      bVar1 = *(byte *)(longlong)iVar8;
      if (bVar1 == 0) {
        return (byte *)(longlong)iVar8;
      }
      bVar2 = *(byte *)(longlong)(iVar8 + 1);
      z = 0;
      C = (uint)*(byte *)(longlong)(iVar8 + 2) - 0x62;
      uVar7 = (ulonglong)(uint)C;
      if (-1 < C) break;
      z = 0;
      lVar9 = (longlong)(iVar8 + 4);
      do {
        iVar8 = (int)lVar9;
        z = (int)uVar7 + z * 0x40 + 0x40;
        C = (uint)*(byte *)(lVar9 + -1) - 0x62;
        uVar7 = (ulonglong)(uint)C;
        lVar9 = lVar9 + 1;
      } while (C < 0);
      if ((bVar2 == 0x40 || h == (uint)bVar2) && d == (uint)bVar1) goto LAB_001013f0;
    }
    iVar8 = iVar8 + 3;
  } while (bVar2 != 0x40 && h != (uint)bVar2 || d != (uint)bVar1);
LAB_001013f0:
  if (h == (uint)bVar2) {
    o();
    uVar7 = 1;
    d = 1;
  }
  return (byte *)uVar7;
}



int ad(void)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined *puVar8;
  longlong lVar9;
  
  while( true ) {
    while( true ) {
      iVar6 = h;
      uVar4 = isspace(h);
      bVar3 = iVar6 == 0x23;
      uVar4 = bVar3 | uVar4;
      while (uVar4 != 0) {
        if (bVar3) {
          o();
          ad();
          if (d == 0x218) {
            ad();
            puVar8 = (undefined *)(longlong)D;
            D = D + 1;
            *puVar8 = 0x20;
            *(undefined4 *)(longlong)d = 1;
            *(int *)(longlong)(d + 4) = D;
          }
          while (h != 10) {
            puVar8 = (undefined *)(longlong)D;
            D = D + 1;
            *puVar8 = (char)h;
            o();
          }
          puVar8 = (undefined *)(longlong)D;
          D = D + 1;
          *puVar8 = 10;
          puVar8 = (undefined *)(longlong)D;
          D = D + 1;
          *puVar8 = 2;
          o();
        }
        else {
          o();
        }
        iVar6 = h;
        uVar4 = isspace(h);
        bVar3 = iVar6 == 0x23;
        uVar4 = bVar3 | uVar4;
      }
      C = 0;
      d = iVar6;
      uVar4 = isalnum(iVar6);
      if ((iVar6 == 0x5f | uVar4) == 0) break;
      puVar8 = (undefined *)(longlong)D;
      D = D + 1;
      *puVar8 = 0x20;
      M = D;
      while (iVar6 = h, uVar4 = isalnum(h), (iVar6 == 0x5f | uVar4) != 0) {
        puVar8 = (undefined *)(longlong)D;
        D = D + 1;
        *puVar8 = (char)iVar6;
        o();
      }
      if (d - 0x30U < 10) {
        z = strtol((char *)(ulonglong)(uint)M,(char **)0x0,0);
        d = 2;
        return z;
      }
      *(undefined *)(longlong)D = 0x20;
      iVar6 = R;
      pcVar7 = strstr((char *)(longlong)R,(char *)(longlong)(M + -1));
      d = (int)pcVar7 - iVar6;
      *(undefined *)(longlong)D = 0;
      d = (d + 0x20) * 8;
      if (d < 0x219) {
        return d;
      }
      d = d + P;
      if (*(int *)(longlong)d != 1) {
        return d;
      }
      L = *(int *)(longlong)(d + 4);
      W = h;
      o();
    }
    o();
    if (d == 0x27) {
      d = 2;
      if (h == 0x5c) {
        Y();
      }
      z = h;
      o();
      iVar6 = o();
      return iVar6;
    }
    if (d != 0x2f || h != 0x2a) break;
    o();
    do {
      if (h == 0) goto LAB_00101394;
      while (h != 0x2a) {
        o();
      }
      o();
    } while (h != 0x2f);
    h = 0;
LAB_00101394:
    o();
  }
  iVar6 = 0x102980;
  do {
    while( true ) {
      bVar1 = *(byte *)(longlong)iVar6;
      if (bVar1 == 0) {
        return iVar6;
      }
      bVar2 = *(byte *)(longlong)(iVar6 + 1);
      z = 0;
      iVar5 = (uint)*(byte *)(longlong)(iVar6 + 2) - 0x62;
      if (-1 < iVar5) break;
      z = 0;
      lVar9 = (longlong)(iVar6 + 4);
      do {
        iVar6 = (int)lVar9;
        z = iVar5 + z * 0x40 + 0x40;
        iVar5 = (uint)*(byte *)(lVar9 + -1) - 0x62;
        lVar9 = lVar9 + 1;
      } while (iVar5 < 0);
      C = iVar5;
      if ((bVar2 == 0x40 || h == (uint)bVar2) && d == (uint)bVar1) goto LAB_001013f0;
    }
    iVar6 = iVar6 + 3;
    C = iVar5;
  } while (bVar2 != 0x40 && h != (uint)bVar2 || d != (uint)bVar1);
LAB_001013f0:
  C = iVar5;
  if (h == (uint)bVar2) {
    o();
    iVar5 = 1;
    d = 1;
  }
  return iVar5;
}



int ae(int g)

{
  uint uVar1;
  undefined *puVar2;
  
  uVar1 = g + 1;
  while (1 < uVar1) {
    puVar2 = (undefined *)(longlong)q;
    q = q + 1;
    *puVar2 = (char)g;
    g = g >> 8;
    uVar1 = g + 1;
  }
  return 0;
}



int A(int e)

{
  int iVar1;
  int *piVar2;
  
  if (e != 0) {
    do {
      piVar2 = (int *)(longlong)e;
      iVar1 = q - e;
      e = *piVar2;
      *piVar2 = iVar1 + -4;
    } while (e != 0);
  }
  return 0;
}



int s(int g,int e)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  
  uVar1 = g + 1;
  while (1 < uVar1) {
    puVar3 = (undefined *)(longlong)q;
    q = q + 1;
    *puVar3 = (char)g;
    g = g >> 8;
    uVar1 = g + 1;
  }
  *(int *)(longlong)q = e;
  iVar2 = q;
  q = q + 4;
  return iVar2;
}



int H(int e)

{
  undefined *puVar1;
  int in_w3;
  
  puVar1 = (undefined *)(longlong)q;
  q = q + 1;
  *puVar1 = 0xb8;
  *(int *)(longlong)q = e;
  q = q + 4;
  return in_w3;
}



int B(int e)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)(longlong)q;
  q = q + 1;
  *puVar2 = 0xe9;
  *(int *)(longlong)q = e;
  iVar1 = q;
  q = q + 4;
  return iVar1;
}



int S(int j,int e)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  
  iVar4 = 3;
  iVar2 = 0xfc085;
  do {
    iVar4 = iVar4 + -1;
    puVar3 = (undefined *)(longlong)q;
    q = q + 1;
    *puVar3 = (char)iVar2;
    iVar2 = iVar2 >> 8;
  } while (iVar4 != 0);
  uVar1 = j + 0x85;
  j = j + 0x84;
  while (1 < uVar1) {
    puVar3 = (undefined *)(longlong)q;
    q = q + 1;
    *puVar3 = (char)j;
    j = j >> 8;
    uVar1 = j + 1;
  }
  *(int *)(longlong)q = e;
  iVar2 = q;
  q = q + 4;
  return iVar2;
}



int Z(int e)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  
  uVar1 = e + 0x91;
  e = e + 0x90;
  puVar3 = (undefined *)(longlong)q;
  q = q + 1;
  *puVar3 = 0x39;
  puVar3 = (undefined *)(longlong)q;
  q = q + 1;
  *puVar3 = 0xc1;
  puVar3 = (undefined *)(longlong)q;
  q = q + 1;
  *puVar3 = 0xb8;
  *(undefined4 *)(longlong)q = 0;
  iVar2 = q + 4;
  q = q + 5;
  *(undefined *)(longlong)iVar2 = 0xf;
  while (1 < uVar1) {
    puVar3 = (undefined *)(longlong)q;
    q = q + 1;
    *puVar3 = (char)e;
    e = e >> 8;
    uVar1 = e + 1;
  }
  puVar3 = (undefined *)(longlong)q;
  q = q + 1;
  *puVar3 = 0xc0;
  return 0;
}



int N(int j,int e)

{
  uint uVar1;
  undefined uVar2;
  undefined *puVar3;
  
  uVar1 = j + 0x84;
  j = j + 0x83;
  while (1 < uVar1) {
    puVar3 = (undefined *)(longlong)q;
    q = q + 1;
    *puVar3 = (char)j;
    j = j >> 8;
    uVar1 = j + 1;
  }
  uVar2 = 5;
  if (e < 0x200) {
    uVar2 = 0x85;
  }
  puVar3 = (undefined *)(longlong)q;
  q = q + 1;
  *puVar3 = uVar2;
  *(int *)(longlong)q = e;
  q = q + 4;
  return 0x85;
}



int O(int j)

{
  int j_00;
  int iVar1;
  bool bVar2;
  bool bVar3;
  int e;
  int j_01;
  undefined *puVar4;
  int *piVar5;
  uint unaff_w20;
  
  if (j == 1) {
    j_01 = T(1);
    return j_01;
  }
  j_01 = j + -1;
  e = 0;
  O(j_01);
  while (j_00 = z, iVar1 = d, j_01 == C) {
    ad();
    unaff_w20 = j_00;
    if (j_01 < 9) {
      puVar4 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar4 = 0x50;
      O(j_01);
      puVar4 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar4 = 0x59;
      if (j - 5U < 2) {
        Z(j_00);
      }
      else {
        while (1 < j_00 + 1U) {
          puVar4 = (undefined *)(longlong)q;
          q = q + 1;
          *puVar4 = (char)j_00;
          j_00 = j_00 >> 8;
        }
        if (iVar1 == 0x25) {
          puVar4 = (undefined *)(longlong)q;
          q = q + 1;
          *puVar4 = 0x92;
        }
      }
    }
    else {
      e = S(j_00,e);
      O(j_01);
    }
  }
  bVar3 = e != 0;
  bVar2 = false;
  if (bVar3) {
    bVar2 = j + -9 < 0;
  }
  if ((bVar3 && j_01 != 8) && bVar2 == (bVar3 && SBORROW4(j_01,8))) {
    e = S(unaff_w20,e);
    puVar4 = (undefined *)(longlong)q;
    q = q + 1;
    *puVar4 = 0xb8;
    *(uint *)(longlong)q = unaff_w20 ^ 1;
    j_01 = q + 4;
    q = q + 5;
    *(undefined *)(longlong)j_01 = 0xe9;
    *(undefined4 *)(longlong)q = 5;
    q = q + 4;
    while (e != 0) {
      piVar5 = (int *)(longlong)e;
      j_01 = q - e;
      e = *piVar5;
      *piVar5 = j_01 + -4;
    }
    puVar4 = (undefined *)(longlong)q;
    q = q + 1;
    *puVar4 = 0xb8;
    *(uint *)(longlong)q = unaff_w20;
    q = q + 4;
    return q;
  }
  return C;
}



undefined8 FUN_00101acc(byte param_1)

{
  uint uVar1;
  int iVar2;
  int e;
  int iVar3;
  undefined uVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = C;
  e = z;
  iVar8 = v;
  iVar7 = d;
  if (d == 0x22) {
    puVar6 = (undefined *)(longlong)q;
    q = q + 1;
    *puVar6 = 0xb8;
    *(int *)(longlong)q = iVar8;
    q = q + 4;
    while (h != 0x22) {
      if (h == 0x5c) {
        Y();
      }
      puVar6 = (undefined *)(longlong)v;
      v = v + 1;
      *puVar6 = (char)h;
      o();
    }
    *(undefined *)(longlong)v = 0;
    v = v + 4U & 0xfffffffc;
    o();
    ad();
joined_r0x00101e4c:
    if (d != 0x28) {
      return 0;
    }
LAB_00101e50:
    e = 1;
    puVar6 = (undefined *)(longlong)q;
    q = q + 1;
    *puVar6 = 0x50;
  }
  else {
    ad();
    if (iVar7 == 2) {
      puVar6 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar6 = 0xb8;
      *(int *)(longlong)q = e;
      q = q + 4;
      goto joined_r0x00101e4c;
    }
    if (iVar2 == 2) {
      T(0);
      puVar6 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar6 = 0xb9;
      *(undefined4 *)(longlong)q = 0;
      q = q + 4;
      if (iVar7 == 0x21) {
        Z(e);
      }
      else {
        uVar1 = e + 1;
        while (1 < uVar1) {
          puVar6 = (undefined *)(longlong)q;
          q = q + 1;
          *puVar6 = (char)e;
          e = e >> 8;
          uVar1 = e + 1;
        }
      }
      goto joined_r0x00101e4c;
    }
    if (iVar7 == 0x28) {
      O(0xb);
      ad();
      goto joined_r0x00101e4c;
    }
    if (iVar7 == 0x2a) {
      ad();
      iVar7 = d;
      ad();
      ad();
      if (d == 0x2a) {
        ad();
        iVar7 = 0;
        ad();
        ad();
        ad();
        ad();
        T(0);
        if (d == 0x3d) goto LAB_00102138;
      }
      else {
        ad();
        T(0);
        if (d == 0x3d) {
LAB_00102138:
          ad();
          puVar6 = (undefined *)(longlong)q;
          q = q + 1;
          *puVar6 = 0x50;
          O(0xb);
          e = (uint)(iVar7 == 0x100) + 0x188;
          puVar6 = (undefined *)(longlong)q;
          q = q + 1;
          *puVar6 = 0x59;
          do {
            puVar6 = (undefined *)(longlong)q;
            q = q + 1;
            *puVar6 = (char)e;
            e = e >> 8;
          } while (e == 1);
        }
        else {
          if (iVar7 != 0) {
            if (iVar7 == 0x100) {
              uVar4 = 0x8b;
            }
            else {
              uVar4 = 0xbe;
              puVar6 = (undefined *)(longlong)q;
              q = q + 1;
              *puVar6 = 0xf;
            }
            puVar6 = (undefined *)(longlong)q;
            q = q + 1;
            *puVar6 = uVar4;
            q = q + 1;
          }
        }
      }
      goto joined_r0x00101e4c;
    }
    if (iVar7 == 0x26) {
      N(10,*(int *)(longlong)d);
      ad();
      goto joined_r0x00101e4c;
    }
    e = *(int *)(longlong)iVar7;
    if (e == 0) {
      e = dlsym(0,(ulonglong)(uint)M);
    }
    if ((d == 0x3d & param_1) == 0) {
      if (d != 0x28) {
        N(8,e);
        if (C == 0xb) {
          N(0,e);
          iVar8 = z;
          while (1 < iVar8 + 1U) {
            puVar6 = (undefined *)(longlong)q;
            q = q + 1;
            *puVar6 = (char)iVar8;
            iVar8 = iVar8 >> 8;
          }
          ad();
        }
        goto LAB_00101b8c;
      }
    }
    else {
      ad();
      O(0xb);
      N(6,e);
LAB_00101b8c:
      if (d != 0x28) {
        return 0;
      }
    }
    if (e == 1) goto LAB_00101e50;
  }
  iVar8 = 0;
  puVar6 = (undefined *)(longlong)q;
  q = q + 1;
  *puVar6 = 0x81;
  puVar6 = (undefined *)(longlong)q;
  q = q + 1;
  *puVar6 = 0xec;
  *(undefined4 *)(longlong)q = 0;
  iVar2 = q;
  q = q + 4;
  ad();
  while (d != 0x29) {
    O(0xb);
    iVar5 = 3;
    iVar3 = 0x248489;
    do {
      iVar5 = iVar5 + -1;
      puVar6 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar6 = (char)iVar3;
      iVar3 = iVar3 >> 8;
    } while (iVar5 != 0);
    *(int *)(longlong)q = iVar8;
    q = q + 4;
    if (d == 0x2c) {
      ad();
    }
    iVar8 = iVar8 + 4;
  }
  *(int *)(longlong)iVar2 = iVar8;
  ad();
  if (e == 0) {
    e = *(int *)(longlong)(iVar7 + 4);
    puVar6 = (undefined *)(longlong)q;
    q = q + 1;
    *puVar6 = 0xe8;
    *(int *)(longlong)q = e;
    e = q + 4;
    *(int *)(longlong)(iVar7 + 4) = q;
    q = e;
  }
  else {
    if (e == 1) {
      iVar7 = 3;
      e = 0x2494ff;
      do {
        iVar7 = iVar7 + -1;
        puVar6 = (undefined *)(longlong)q;
        q = q + 1;
        *puVar6 = (char)e;
        e = e >> 8;
      } while (iVar7 != 0);
      *(int *)(longlong)q = iVar8;
      iVar8 = iVar8 + 4;
      q = q + 4;
      goto LAB_00101cc4;
    }
    e = e - q;
    puVar6 = (undefined *)(longlong)q;
    q = q + 1;
    *puVar6 = 0xe8;
    *(int *)(longlong)q = e + -5;
    q = q + 4;
  }
  if (iVar8 == 0) {
    return 0;
  }
LAB_00101cc4:
  puVar6 = (undefined *)(longlong)q;
  q = q + 1;
  *puVar6 = 0x81;
  puVar6 = (undefined *)(longlong)q;
  q = q + 1;
  *puVar6 = 0xc4;
  *(int *)(longlong)q = iVar8;
  q = q + 4;
  return 0;
}



int T(int j)

{
  uint uVar1;
  int iVar2;
  int e;
  int iVar3;
  undefined uVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = C;
  e = z;
  iVar8 = v;
  iVar7 = d;
  if (d == 0x22) {
    puVar6 = (undefined *)(longlong)q;
    q = q + 1;
    *puVar6 = 0xb8;
    *(int *)(longlong)q = iVar8;
    q = q + 4;
    while (h != 0x22) {
      if (h == 0x5c) {
        Y();
      }
      puVar6 = (undefined *)(longlong)v;
      v = v + 1;
      *puVar6 = (char)h;
      o();
    }
    *(undefined *)(longlong)v = 0;
    v = v + 4U & 0xfffffffc;
    o();
    ad();
joined_r0x00101e4c:
    if (d != 0x28) {
      return 0;
    }
LAB_00101e50:
    e = 1;
    puVar6 = (undefined *)(longlong)q;
    q = q + 1;
    *puVar6 = 0x50;
  }
  else {
    ad();
    if (iVar7 == 2) {
      puVar6 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar6 = 0xb8;
      *(int *)(longlong)q = e;
      q = q + 4;
      goto joined_r0x00101e4c;
    }
    if (iVar2 == 2) {
      T(0);
      puVar6 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar6 = 0xb9;
      *(undefined4 *)(longlong)q = 0;
      q = q + 4;
      if (iVar7 == 0x21) {
        Z(e);
      }
      else {
        uVar1 = e + 1;
        while (1 < uVar1) {
          puVar6 = (undefined *)(longlong)q;
          q = q + 1;
          *puVar6 = (char)e;
          e = e >> 8;
          uVar1 = e + 1;
        }
      }
      goto joined_r0x00101e4c;
    }
    if (iVar7 == 0x28) {
      O(0xb);
      ad();
      goto joined_r0x00101e4c;
    }
    if (iVar7 == 0x2a) {
      ad();
      iVar7 = d;
      ad();
      ad();
      if (d == 0x2a) {
        ad();
        iVar7 = 0;
        ad();
        ad();
        ad();
        ad();
        T(0);
        if (d == 0x3d) goto LAB_00102138;
      }
      else {
        ad();
        T(0);
        if (d == 0x3d) {
LAB_00102138:
          ad();
          puVar6 = (undefined *)(longlong)q;
          q = q + 1;
          *puVar6 = 0x50;
          O(0xb);
          e = (uint)(iVar7 == 0x100) + 0x188;
          puVar6 = (undefined *)(longlong)q;
          q = q + 1;
          *puVar6 = 0x59;
          do {
            puVar6 = (undefined *)(longlong)q;
            q = q + 1;
            *puVar6 = (char)e;
            e = e >> 8;
          } while (e == 1);
        }
        else {
          if (iVar7 != 0) {
            if (iVar7 == 0x100) {
              uVar4 = 0x8b;
            }
            else {
              uVar4 = 0xbe;
              puVar6 = (undefined *)(longlong)q;
              q = q + 1;
              *puVar6 = 0xf;
            }
            puVar6 = (undefined *)(longlong)q;
            q = q + 1;
            *puVar6 = uVar4;
            q = q + 1;
          }
        }
      }
      goto joined_r0x00101e4c;
    }
    if (iVar7 == 0x26) {
      N(10,*(int *)(longlong)d);
      ad();
      goto joined_r0x00101e4c;
    }
    e = *(int *)(longlong)iVar7;
    if (e == 0) {
      e = dlsym(0,(ulonglong)(uint)M);
    }
    if (((uint)(d == 0x3d) & j) == 0) {
      if (d != 0x28) {
        N(8,e);
        if (C == 0xb) {
          N(0,e);
          iVar8 = z;
          while (1 < iVar8 + 1U) {
            puVar6 = (undefined *)(longlong)q;
            q = q + 1;
            *puVar6 = (char)iVar8;
            iVar8 = iVar8 >> 8;
          }
          ad();
        }
        goto LAB_00101b8c;
      }
    }
    else {
      ad();
      O(0xb);
      N(6,e);
LAB_00101b8c:
      if (d != 0x28) {
        return 0;
      }
    }
    if (e == 1) goto LAB_00101e50;
  }
  iVar8 = 0;
  puVar6 = (undefined *)(longlong)q;
  q = q + 1;
  *puVar6 = 0x81;
  puVar6 = (undefined *)(longlong)q;
  q = q + 1;
  *puVar6 = 0xec;
  *(undefined4 *)(longlong)q = 0;
  iVar2 = q;
  q = q + 4;
  ad();
  while (d != 0x29) {
    O(0xb);
    iVar5 = 3;
    iVar3 = 0x248489;
    do {
      iVar5 = iVar5 + -1;
      puVar6 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar6 = (char)iVar3;
      iVar3 = iVar3 >> 8;
    } while (iVar5 != 0);
    *(int *)(longlong)q = iVar8;
    q = q + 4;
    if (d == 0x2c) {
      ad();
    }
    iVar8 = iVar8 + 4;
  }
  *(int *)(longlong)iVar2 = iVar8;
  ad();
  if (e == 0) {
    e = *(int *)(longlong)(iVar7 + 4);
    puVar6 = (undefined *)(longlong)q;
    q = q + 1;
    *puVar6 = 0xe8;
    *(int *)(longlong)q = e;
    e = q + 4;
    *(int *)(longlong)(iVar7 + 4) = q;
    q = e;
  }
  else {
    if (e == 1) {
      iVar7 = 3;
      e = 0x2494ff;
      do {
        iVar7 = iVar7 + -1;
        puVar6 = (undefined *)(longlong)q;
        q = q + 1;
        *puVar6 = (char)e;
        e = e >> 8;
      } while (iVar7 != 0);
      *(int *)(longlong)q = iVar8;
      iVar8 = iVar8 + 4;
      q = q + 4;
      goto LAB_00101cc4;
    }
    e = e - q;
    puVar6 = (undefined *)(longlong)q;
    q = q + 1;
    *puVar6 = 0xe8;
    *(int *)(longlong)q = e + -5;
    q = q + 4;
  }
  if (iVar8 == 0) {
    return 0;
  }
LAB_00101cc4:
  puVar6 = (undefined *)(longlong)q;
  q = q + 1;
  *puVar6 = 0x81;
  puVar6 = (undefined *)(longlong)q;
  q = q + 1;
  *puVar6 = 0xc4;
  *(int *)(longlong)q = iVar8;
  q = q + 4;
  return 0;
}



int w(void)

{
  int iVar1;
  
  iVar1 = O(0xb);
  return iVar1;
}



int U(void)

{
  int iVar1;
  
  O(0xb);
  iVar1 = S(0,0);
  return iVar1;
}



int ab(int j)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  bVar3 = j == 0;
  while( true ) {
    bVar4 = d == 0x100;
    bVar2 = bVar4 || bVar3 && d != -1;
    if (!bVar4 && (!bVar3 || d == -1)) break;
    while (!bVar4) {
      iVar8 = *(int *)(longlong)(d + 4);
      while (iVar8 != 0) {
        piVar6 = (int *)(longlong)iVar8;
        iVar7 = q - iVar8;
        iVar8 = *piVar6;
        *piVar6 = iVar7 + -4;
      }
      iVar8 = 8;
      *(int *)(longlong)d = q;
      ad();
      ad();
      while (d != 0x29) {
        while( true ) {
          *(int *)(longlong)d = iVar8;
          iVar8 = iVar8 + 4;
          ad();
          if (d != 0x2c) break;
          ad();
          if (d == 0x29) goto LAB_001022d0;
        }
      }
LAB_001022d0:
      ad();
      iVar7 = 3;
      iVar8 = 0xe58955;
      G = 0;
      K = 0;
      do {
        iVar7 = iVar7 + -1;
        puVar5 = (undefined *)(longlong)q;
        q = q + 1;
        *puVar5 = (char)iVar8;
        iVar8 = iVar8 >> 8;
      } while (iVar7 != 0);
      puVar5 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar5 = 0x81;
      puVar5 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar5 = 0xec;
      *(undefined4 *)(longlong)q = 0;
      iVar7 = q;
      q = q + 4;
      I(0);
      iVar8 = K;
      while (iVar8 != 0) {
        piVar6 = (int *)(longlong)iVar8;
        iVar1 = q - iVar8;
        iVar8 = *piVar6;
        *piVar6 = iVar1 + -4;
      }
      puVar5 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar5 = 0xc9;
      puVar5 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar5 = 0xc3;
      *(int *)(longlong)iVar7 = G;
      bVar4 = d == 0x100;
      bVar2 = bVar4 || bVar3 && d != -1;
      if (!bVar4 && (!bVar3 || d == -1)) goto LAB_001023f8;
    }
    ad();
    while (d != 0x3b) {
      if (j == 0) {
        *(int *)(longlong)d = v;
        v = v + 4;
        ad();
      }
      else {
        iVar8 = -4 - G;
        G = G + 4;
        *(int *)(longlong)d = iVar8;
        ad();
      }
      if (d == 0x2c) {
        ad();
      }
    }
    ad();
  }
LAB_001023f8:
  return (int)(uint)bVar2;
}



int I(int j)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int m;
  
  iVar1 = d;
  if (d == 0x120) {
    ad();
    ad();
    O(0xb);
    iVar1 = S(0,0);
    ad();
    I(j);
    if (d == 0x138) {
      ad();
      puVar2 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar2 = 0xe9;
      *(undefined4 *)(longlong)q = 0;
      iVar5 = q;
      q = q + 4;
      while (iVar1 != 0) {
        piVar3 = (int *)(longlong)iVar1;
        iVar4 = q - iVar1;
        iVar1 = *piVar3;
        *piVar3 = iVar4 + -4;
      }
      iVar1 = I(j);
      while (iVar5 != 0) {
        piVar3 = (int *)(longlong)iVar5;
        iVar1 = q - iVar5;
        iVar5 = *piVar3;
        iVar1 = iVar1 + -4;
        *piVar3 = iVar1;
      }
    }
    else {
      if (iVar1 != 0) {
        do {
          piVar3 = (int *)(longlong)iVar1;
          iVar5 = q - iVar1;
          iVar1 = *piVar3;
          *piVar3 = iVar5 + -4;
        } while (iVar1 != 0);
        return 0;
      }
    }
  }
  else {
    if (d == 0x160 || d == 0x1f8) {
      ad();
      ad();
      iVar5 = q;
      if (iVar1 == 0x160) {
        O(0xb);
        m = S(0,0);
      }
      else {
        if (d != 0x3b) {
          O(0xb);
        }
        ad();
        iVar5 = q;
        m = 0;
        if (d != 0x3b) {
          O(0xb);
          m = S(0,0);
        }
        ad();
        if (d != 0x29) {
          puVar2 = (undefined *)(longlong)q;
          q = q + 1;
          *puVar2 = 0xe9;
          *(undefined4 *)(longlong)q = 0;
          iVar4 = q;
          iVar1 = q + 4;
          q = iVar1;
          O(0xb);
          iVar5 = iVar5 - q;
          puVar2 = (undefined *)(longlong)q;
          q = q + 1;
          *puVar2 = 0xe9;
          *(int *)(longlong)q = iVar5 + -5;
          q = q + 4;
          if (iVar4 == 0) {
            iVar5 = 4;
          }
          else {
            do {
              piVar3 = (int *)(longlong)iVar4;
              iVar5 = q - iVar4;
              iVar4 = *piVar3;
              *piVar3 = iVar5 + -4;
              iVar5 = iVar1;
            } while (iVar4 != 0);
          }
        }
      }
      ad();
      I((int)register0x00000008 + -4);
      iVar5 = iVar5 - q;
      puVar2 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar2 = 0xe9;
      *(int *)(longlong)q = iVar5 + -5;
      iVar1 = q + 4;
      q = iVar1;
      if (m != 0) {
        do {
          piVar3 = (int *)(longlong)m;
          iVar1 = (q - m) + -4;
          m = *piVar3;
          *piVar3 = iVar1;
        } while (m != 0);
        return iVar1;
      }
    }
    else {
      if (d == 0x7b) {
        ad();
        ab(1);
        while (d != 0x7d) {
          I(j);
        }
      }
      else {
        if (d == 0x1c0) {
          ad();
          if (d != 0x3b) {
            O(0xb);
          }
          puVar2 = (undefined *)(longlong)q;
          q = q + 1;
          *puVar2 = 0xe9;
          *(int *)(longlong)q = K;
          K = q;
          q = q + 4;
        }
        else {
          if (d == 400) {
            ad();
            iVar1 = *(int *)(longlong)j;
            puVar2 = (undefined *)(longlong)q;
            q = q + 1;
            *puVar2 = 0xe9;
            *(int *)(longlong)q = iVar1;
            iVar1 = q + 4;
            *(int *)(longlong)j = q;
            q = iVar1;
          }
          else {
            if (d != 0x3b) {
              O(0xb);
            }
          }
        }
      }
      iVar1 = ad();
    }
  }
  return iVar1;
}



undefined8 __libc_csu_init(EVP_PKEY_CTX *param_1,undefined8 param_2,undefined8 param_3)

{
  code **ppcVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  _init(param_1);
  lVar3 = 0;
  do {
    ppcVar1 = (code **)(&__frame_dummy_init_array_entry + lVar3);
    lVar3 = lVar3 + 1;
    uVar2 = (**ppcVar1)((ulonglong)param_1 & 0xffffffff,param_2,param_3);
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


