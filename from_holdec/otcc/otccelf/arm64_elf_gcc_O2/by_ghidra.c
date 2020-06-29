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
typedef unsigned short    undefined2;
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

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
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



void FUN_00100d20(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fclose(__stream);
  return iVar1;
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

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = strtol(__nptr,__endptr,__base);
  return lVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
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



int main(int d,int a)

{
  void *pvVar1;
  FILE *pFVar2;
  undefined8 *puVar3;
  
  if (d < 3) {
    puts("usage: otccelf file.c outfile");
  }
  else {
    pvVar1 = calloc(1,99999);
    Q = (int)pvVar1;
    puVar3 = (undefined8 *)(longlong)Q;
    *puVar3 = 0x20666920746e6920;
    puVar3[1] = 0x6968772065736c65;
    puVar3[4] = 0x6966656420726f66;
    puVar3[5] = 0x206e69616d20656e;
    puVar3[2] = 0x6b6165726220656c;
    puVar3[3] = 0x206e727574657220;
    *(char *)(puVar3 + 6) = '\0';
    D = (int)(puVar3 + 6);
    pvVar1 = calloc(1,99999);
    G = (int)pvVar1;
    i = G;
    pvVar1 = calloc(1,99999);
    v = (int)pvVar1;
    K = v;
    pvVar1 = calloc(1,99999);
    T = (int)pvVar1;
    pFVar2 = fopen((char *)(longlong)*(int *)(longlong)(a + 4),"r");
    y = 0x8048000 - G;
    v = v + 0x11;
    i = i + 0xfc;
    ak = (int)pFVar2;
    w();
    av();
    ar(0);
    au(*(int *)(longlong)(a + 8));
  }
  return 0;
}



void _start(undefined8 param_1)

{
  undefined8 param_9;
  
  __libc_start_main(main,param_9,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1);
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x00100ffc)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x00101020)
// WARNING: Removing unreachable block (ram,0x0010102c)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0010105c)
// WARNING: Removing unreachable block (ram,0x00101068)

void register_tm_clones(void)

{
  return;
}



void FUN_00101074(void)

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



int L(int a)

{
  undefined *puVar1;
  int in_w3;
  
  puVar1 = (undefined *)(longlong)D;
  D = D + 1;
  *puVar1 = (char)a;
  return in_w3;
}



int w(void)

{
  byte *pbVar1;
  
  if (V == 0) {
    m = fgetc((FILE *)(longlong)ak);
    return m;
  }
  pbVar1 = (byte *)(longlong)V;
  if (*pbVar1 != 2) {
    V = V + 1;
    m = (uint)*pbVar1;
    return 0x11509c;
  }
  V = 0;
  m = al;
  return al;
}



int an(void)

{
  w();
  if (m == 0x6e) {
    m = 10;
  }
  return 0x1150cc;
}



int am(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = m;
  uVar2 = isalnum(m);
  return (int)(iVar1 == 0x5f | uVar2);
}



int an(void)

{
  int iVar1;
  
  if (m != 0x5c) {
    return m;
  }
  iVar1 = an();
  return iVar1;
}



byte * FUN_00101224(void)

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
      iVar8 = m;
      uVar4 = isspace(m);
      bVar3 = iVar8 == 0x23;
      uVar4 = bVar3 | uVar4;
      while (uVar4 != 0) {
        if (bVar3) {
          w();
          av();
          if (e == 0x218) {
            av();
            puVar6 = (undefined *)(longlong)D;
            D = D + 1;
            *puVar6 = 0x20;
            *(undefined4 *)(longlong)e = 1;
            *(int *)(longlong)(e + 4) = D;
          }
          while (m != 10) {
            puVar6 = (undefined *)(longlong)D;
            D = D + 1;
            *puVar6 = (char)m;
            w();
          }
          puVar6 = (undefined *)(longlong)D;
          D = D + 1;
          *puVar6 = 10;
          puVar6 = (undefined *)(longlong)D;
          D = D + 1;
          *puVar6 = 2;
          w();
        }
        else {
          w();
        }
        iVar8 = m;
        uVar4 = isspace(m);
        bVar3 = iVar8 == 0x23;
        uVar4 = bVar3 | uVar4;
      }
      J = 0;
      e = iVar8;
      uVar4 = isalnum(iVar8);
      if ((iVar8 == 0x5f | uVar4) == 0) break;
      puVar6 = (undefined *)(longlong)D;
      D = D + 1;
      *puVar6 = 0x20;
      Z = D;
      while (iVar8 = m, uVar4 = isalnum(m), (iVar8 == 0x5f | uVar4) != 0) {
        puVar6 = (undefined *)(longlong)D;
        D = D + 1;
        *puVar6 = (char)iVar8;
        w();
      }
      if (e - 0x30U < 10) {
        C = strtol((char *)(ulonglong)(uint)Z,(char **)0x0,0);
        e = 2;
        return (byte *)(ulonglong)(uint)C;
      }
      *(undefined *)(longlong)D = 0x20;
      iVar8 = Q;
      pcVar5 = strstr((char *)(longlong)Q,(char *)(longlong)(Z + -1));
      e = (int)pcVar5 - iVar8;
      *(undefined *)(longlong)D = 0;
      e = (e + 0x20) * 8;
      if (e < 0x219) {
        return (byte *)(ulonglong)(uint)e;
      }
      e = e + T;
      if (*(int *)(longlong)e != 1) {
        return (byte *)(ulonglong)(uint)e;
      }
      V = *(int *)(longlong)(int)(e + 4);
      al = m;
      w();
    }
    w();
    if (e == 0x27) {
      e = 2;
      if (m == 0x5c) {
        an();
      }
      C = m;
      w();
      uVar4 = w();
      return (byte *)(ulonglong)uVar4;
    }
    if (e != 0x2f || m != 0x2a) break;
    w();
    do {
      if (m == 0) goto LAB_001014ec;
      while (m != 0x2a) {
        w();
      }
      w();
    } while (m != 0x2f);
    m = 0;
LAB_001014ec:
    w();
  }
  iVar8 = 0x103d38;
  do {
    while( true ) {
      bVar1 = *(byte *)(longlong)iVar8;
      if (bVar1 == 0) {
        return (byte *)(longlong)iVar8;
      }
      bVar2 = *(byte *)(longlong)(iVar8 + 1);
      C = 0;
      J = (uint)*(byte *)(longlong)(iVar8 + 2) - 0x62;
      uVar7 = (ulonglong)(uint)J;
      if (-1 < J) break;
      C = 0;
      lVar9 = (longlong)(iVar8 + 4);
      do {
        iVar8 = (int)lVar9;
        C = (int)uVar7 + C * 0x40 + 0x40;
        J = (uint)*(byte *)(lVar9 + -1) - 0x62;
        uVar7 = (ulonglong)(uint)J;
        lVar9 = lVar9 + 1;
      } while (J < 0);
      if ((bVar2 == 0x40 || m == (uint)bVar2) && e == (uint)bVar1) goto LAB_00101548;
    }
    iVar8 = iVar8 + 3;
  } while (bVar2 != 0x40 && m != (uint)bVar2 || e != (uint)bVar1);
LAB_00101548:
  if (m == (uint)bVar2) {
    w();
    uVar7 = 1;
    e = 1;
  }
  return (byte *)uVar7;
}



int av(void)

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
      iVar6 = m;
      uVar4 = isspace(m);
      bVar3 = iVar6 == 0x23;
      uVar4 = bVar3 | uVar4;
      while (uVar4 != 0) {
        if (bVar3) {
          w();
          av();
          if (e == 0x218) {
            av();
            puVar8 = (undefined *)(longlong)D;
            D = D + 1;
            *puVar8 = 0x20;
            *(undefined4 *)(longlong)e = 1;
            *(int *)(longlong)(e + 4) = D;
          }
          while (m != 10) {
            puVar8 = (undefined *)(longlong)D;
            D = D + 1;
            *puVar8 = (char)m;
            w();
          }
          puVar8 = (undefined *)(longlong)D;
          D = D + 1;
          *puVar8 = 10;
          puVar8 = (undefined *)(longlong)D;
          D = D + 1;
          *puVar8 = 2;
          w();
        }
        else {
          w();
        }
        iVar6 = m;
        uVar4 = isspace(m);
        bVar3 = iVar6 == 0x23;
        uVar4 = bVar3 | uVar4;
      }
      J = 0;
      e = iVar6;
      uVar4 = isalnum(iVar6);
      if ((iVar6 == 0x5f | uVar4) == 0) break;
      puVar8 = (undefined *)(longlong)D;
      D = D + 1;
      *puVar8 = 0x20;
      Z = D;
      while (iVar6 = m, uVar4 = isalnum(m), (iVar6 == 0x5f | uVar4) != 0) {
        puVar8 = (undefined *)(longlong)D;
        D = D + 1;
        *puVar8 = (char)iVar6;
        w();
      }
      if (e - 0x30U < 10) {
        C = strtol((char *)(ulonglong)(uint)Z,(char **)0x0,0);
        e = 2;
        return C;
      }
      *(undefined *)(longlong)D = 0x20;
      iVar6 = Q;
      pcVar7 = strstr((char *)(longlong)Q,(char *)(longlong)(Z + -1));
      e = (int)pcVar7 - iVar6;
      *(undefined *)(longlong)D = 0;
      e = (e + 0x20) * 8;
      if (e < 0x219) {
        return e;
      }
      e = e + T;
      if (*(int *)(longlong)e != 1) {
        return e;
      }
      V = *(int *)(longlong)(e + 4);
      al = m;
      w();
    }
    w();
    if (e == 0x27) {
      e = 2;
      if (m == 0x5c) {
        an();
      }
      C = m;
      w();
      iVar6 = w();
      return iVar6;
    }
    if (e != 0x2f || m != 0x2a) break;
    w();
    do {
      if (m == 0) goto LAB_001014ec;
      while (m != 0x2a) {
        w();
      }
      w();
    } while (m != 0x2f);
    m = 0;
LAB_001014ec:
    w();
  }
  iVar6 = 0x103d38;
  do {
    while( true ) {
      bVar1 = *(byte *)(longlong)iVar6;
      if (bVar1 == 0) {
        return iVar6;
      }
      bVar2 = *(byte *)(longlong)(iVar6 + 1);
      C = 0;
      iVar5 = (uint)*(byte *)(longlong)(iVar6 + 2) - 0x62;
      if (-1 < iVar5) break;
      C = 0;
      lVar9 = (longlong)(iVar6 + 4);
      do {
        iVar6 = (int)lVar9;
        C = iVar5 + C * 0x40 + 0x40;
        iVar5 = (uint)*(byte *)(lVar9 + -1) - 0x62;
        lVar9 = lVar9 + 1;
      } while (iVar5 < 0);
      J = iVar5;
      if ((bVar2 == 0x40 || m == (uint)bVar2) && e == (uint)bVar1) goto LAB_00101548;
    }
    iVar6 = iVar6 + 3;
    J = iVar5;
  } while (bVar2 != 0x40 && m != (uint)bVar2 || e != (uint)bVar1);
LAB_00101548:
  J = iVar5;
  if (m == (uint)bVar2) {
    w();
    iVar5 = 1;
    e = 1;
  }
  return iVar5;
}



int aw(int d)

{
  uint uVar1;
  undefined *puVar2;
  
  uVar1 = d + 1;
  while (1 < uVar1) {
    puVar2 = (undefined *)(longlong)v;
    v = v + 1;
    *puVar2 = (char)d;
    d = d >> 8;
    uVar1 = d + 1;
  }
  return 0;
}



int E(int a,int d)

{
  *(undefined *)(longlong)a = (char)d;
  *(undefined *)(longlong)(a + 1) = (char)((uint)d >> 8);
  *(undefined *)(longlong)(a + 2) = (char)((uint)d >> 0x10);
  *(undefined *)(longlong)(a + 3) = (char)((uint)d >> 0x18);
  return a + 3;
}



int ao(int a)

{
  return (int)((uint)*(byte *)(longlong)(a + 2) << 0x10 | (uint)*(byte *)(longlong)(a + 1) << 8 |
              (uint)*(byte *)(longlong)a | (uint)*(byte *)(longlong)(a + 3) << 0x18);
}



int ap(int a,int z)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  if (a == 0) {
    return 0;
  }
  do {
    while( true ) {
      iVar1 = a - 1;
      pbVar4 = (byte *)(longlong)(int)(a + 2);
      pbVar6 = (byte *)(longlong)a;
      pbVar5 = (byte *)(longlong)(int)(a + 1);
      pbVar3 = (byte *)(longlong)(int)(a + 3);
      iVar2 = (z - a) + -4;
      a = (uint)*pbVar4 << 0x10 | (uint)*pbVar5 << 8 | (uint)*pbVar6 | (uint)*pbVar3 << 0x18;
      if (*(char *)(longlong)iVar1 == '\x05') break;
      *pbVar6 = (byte)iVar2;
      *pbVar5 = (byte)((uint)iVar2 >> 8);
      *pbVar4 = (byte)((uint)iVar2 >> 0x10);
      *pbVar3 = (byte)((uint)iVar2 >> 0x18);
joined_r0x00101864:
      if (a == 0) {
        return 0;
      }
    }
    if ((G <= z) && (z < i)) {
      iVar1 = z + y;
      *pbVar6 = (byte)iVar1;
      *pbVar5 = (byte)((uint)iVar1 >> 8);
      *pbVar4 = (byte)((uint)iVar1 >> 0x10);
      *pbVar3 = (byte)((uint)iVar1 >> 0x18);
      goto joined_r0x00101864;
    }
    iVar1 = (z - K) + R + y;
    *pbVar6 = (byte)iVar1;
    *pbVar5 = (byte)((uint)iVar1 >> 8);
    *pbVar4 = (byte)((uint)iVar1 >> 0x10);
    *pbVar3 = (byte)((uint)iVar1 >> 0x18);
    if (a == 0) {
      return 0;
    }
  } while( true );
}



int H(int a)

{
  int iVar1;
  
  iVar1 = ap(a,v);
  return iVar1;
}



int x(int d,int a)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  
  uVar1 = d + 1;
  while (1 < uVar1) {
    puVar5 = (undefined *)(longlong)v;
    v = v + 1;
    *puVar5 = (char)d;
    d = d >> 8;
    uVar1 = d + 1;
  }
  iVar4 = v + 1;
  iVar2 = v + 2;
  iVar3 = v + 3;
  *(undefined *)(longlong)v = (char)a;
  *(undefined *)(longlong)iVar4 = (char)((uint)a >> 8);
  *(undefined *)(longlong)iVar2 = (char)((uint)a >> 0x10);
  *(undefined *)(longlong)iVar3 = (char)((uint)a >> 0x18);
  iVar4 = v;
  v = v + 4;
  return iVar4;
}



int M(int a)

{
  int iVar1;
  
  iVar1 = x(0xb8,a);
  return iVar1;
}



int I(int a)

{
  int iVar1;
  
  iVar1 = x(0xe9,a);
  return iVar1;
}



int aa(int s,int a)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar3 = 3;
  iVar1 = 0xfc085;
  do {
    iVar3 = iVar3 + -1;
    puVar2 = (undefined *)(longlong)v;
    v = v + 1;
    *puVar2 = (char)iVar1;
    iVar1 = iVar1 >> 8;
  } while (iVar3 != 0);
  iVar1 = x(s + 0x84,a);
  return iVar1;
}



int aq(int a)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int extraout_w9;
  int *extraout_x10;
  longlong extraout_x11;
  
  puVar3 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar3 = 0x39;
  puVar3 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar3 = 0xc1;
  x(0xb8,0);
  iVar2 = *extraout_x10;
  *extraout_x10 = iVar2 + 1;
  *(undefined *)(longlong)iVar2 = 0xf;
  if (1 < extraout_w9 + 0x91U) {
    iVar2 = extraout_w9 + 0x90;
    do {
      iVar1 = *extraout_x10;
      *extraout_x10 = iVar1 + 1;
      *(undefined *)(longlong)iVar1 = (char)iVar2;
      iVar2 = iVar2 >> 8;
    } while (1 < iVar2 + 1U);
  }
  iVar2 = **(int **)(extraout_x11 + 0xf60);
  **(int **)(extraout_x11 + 0xf60) = iVar2 + 1;
  *(undefined *)(longlong)iVar2 = 0xc0;
  return 0;
}



int W(int s,int a)

{
  uint uVar1;
  int iVar2;
  int a_00;
  undefined *puVar3;
  int *extraout_x9;
  
  uVar1 = s + 0x84;
  s = s + 0x83;
  while (1 < uVar1) {
    puVar3 = (undefined *)(longlong)v;
    v = v + 1;
    *puVar3 = (char)s;
    s = s >> 8;
    uVar1 = s + 1;
  }
  a_00 = *(int *)(longlong)a;
  if (a_00 < 0x200 && a_00 != 0) {
    a_00 = x(0x85,a_00);
    return a_00;
  }
  a_00 = *(int *)(longlong)(a + 4);
  iVar2 = x(5,a_00);
  *extraout_x9 = iVar2;
  return a_00;
}



int X(int s)

{
  int s_00;
  int iVar1;
  bool bVar2;
  bool bVar3;
  int a;
  int s_01;
  undefined *puVar4;
  int a_00;
  uint unaff_w20;
  
  if (s == 1) {
    s_01 = ab(1);
    return s_01;
  }
  s_01 = s + -1;
  a = 0;
  X(s_01);
  while (iVar1 = e, s_00 = C, s_01 == J) {
    av();
    unaff_w20 = s_00;
    if (s_01 < 9) {
      puVar4 = (undefined *)(longlong)v;
      v = v + 1;
      *puVar4 = 0x50;
      X(s_01);
      puVar4 = (undefined *)(longlong)v;
      v = v + 1;
      *puVar4 = 0x59;
      if (s - 5U < 2) {
        aq(s_00);
      }
      else {
        while (1 < s_00 + 1U) {
          puVar4 = (undefined *)(longlong)v;
          v = v + 1;
          *puVar4 = (char)s_00;
          s_00 = s_00 >> 8;
        }
        if (iVar1 == 0x25) {
          puVar4 = (undefined *)(longlong)v;
          v = v + 1;
          *puVar4 = 0x92;
        }
      }
    }
    else {
      a = aa(s_00,a);
      X(s_01);
    }
  }
  bVar3 = a != 0;
  bVar2 = false;
  if (bVar3) {
    bVar2 = s + -9 < 0;
  }
  if ((!bVar3 || s_01 == 8) || bVar2 != (bVar3 && SBORROW4(s_01,8))) {
    return J;
  }
  aa(unaff_w20,a);
  x(0xb8,unaff_w20 ^ 1);
  x(0xe9,5);
  ap(a_00,v);
  s_01 = x(0xb8,unaff_w20);
  return s_01;
}



int ab(int s)

{
  int a;
  undefined *puVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  undefined uVar5;
  int a_00;
  int a_01;
  int a_02;
  uint uVar6;
  
  a_02 = e;
  a = C;
  a_01 = J;
  if (e == 0x22) {
    x(0xb8,i + y);
    while (m != 0x22) {
      if (m == 0x5c) {
        an();
      }
      puVar1 = (undefined *)(longlong)i;
      i = i + 1;
      *puVar1 = (char)m;
      w();
    }
    *(undefined *)(longlong)i = 0;
    i = i + 4U & 0xfffffffc;
    w();
    av();
  }
  else {
    av();
    if (a_02 == 2) {
      x(0xb8,a);
    }
    else {
      if (a_01 == 2) {
        ab(0);
        x(0xb9,0);
        if (a_02 == 0x21) {
          aq(a);
        }
        else {
          uVar6 = a + 1;
          a_01 = v;
          while (v = a_01, 1 < uVar6) {
            v = a_01 + 1;
            *(undefined *)(longlong)a_01 = (char)a;
            a = a >> 8;
            uVar6 = a + 1;
            a_01 = v;
          }
        }
      }
      else {
        if (a_02 == 0x28) {
          X(0xb);
          av();
        }
        else {
          if (a_02 == 0x2a) {
            av();
            a_02 = e;
            av();
            av();
            if (e == 0x2a) {
              av();
              a_02 = 0;
              av();
              av();
              av();
              av();
              ab(0);
              if (e == 0x3d) goto LAB_0010214c;
            }
            else {
              av();
              ab(0);
              if (e == 0x3d) {
LAB_0010214c:
                av();
                puVar1 = (undefined *)(longlong)v;
                v = v + 1;
                *puVar1 = 0x50;
                X(0xb);
                a = (uint)(a_02 == 0x100) + 0x188;
                puVar1 = (undefined *)(longlong)v;
                v = v + 1;
                *puVar1 = 0x59;
                do {
                  puVar1 = (undefined *)(longlong)v;
                  v = v + 1;
                  *puVar1 = (char)a;
                  a = a >> 8;
                } while (a == 1);
              }
              else {
                if (a_02 != 0) {
                  if (a_02 == 0x100) {
                    uVar5 = 0x8b;
                  }
                  else {
                    uVar5 = 0xbe;
                    puVar1 = (undefined *)(longlong)v;
                    v = v + 1;
                    *puVar1 = 0xf;
                  }
                  puVar1 = (undefined *)(longlong)v;
                  v = v + 1;
                  *puVar1 = uVar5;
                  v = v + 1;
                }
              }
            }
          }
          else {
            if (a_02 != 0x26) {
              uVar6 = (uint)(e == 0x3d) & s;
              if (uVar6 == 0) {
                if (e == 0x28) goto LAB_00101da4;
                W(8,a_02);
                if (J == 0xb) {
                  W(0,a_02);
                  a = C;
                  while (1 < a + 1U) {
                    puVar1 = (undefined *)(longlong)v;
                    v = v + 1;
                    *puVar1 = (char)a;
                    a = a >> 8;
                  }
                  av();
                }
              }
              else {
                av();
                X(0xb);
                W(6,a_02);
              }
              if (e != 0x28) {
                return 0;
              }
              uVar6 = 0;
              goto LAB_00101da4;
            }
            W(10,e);
            av();
          }
        }
      }
    }
  }
  if (e != 0x28) {
    return 0;
  }
  uVar6 = 1;
  puVar1 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar1 = 0x50;
LAB_00101da4:
  a = x(0xec81,0);
  av();
  if (e == 0x29) {
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    a_01 = 0;
  }
  else {
    a_00 = 0;
    do {
      while( true ) {
        X(0xb);
        a_01 = a_00 + 4;
        x(0x248489,a_00);
        a_00 = a_01;
        if (e != 0x2c) break;
        av();
        if (e == 0x29) goto LAB_00101e14;
      }
    } while (e != 0x29);
LAB_00101e14:
    uVar5 = (undefined)a_01;
    uVar4 = (undefined)((uint)a_01 >> 8);
    uVar3 = (undefined)((uint)a_01 >> 0x10);
    uVar2 = (undefined)((uint)a_01 >> 0x18);
  }
  *(undefined *)(longlong)a = uVar5;
  *(undefined *)(longlong)(a + 1) = uVar4;
  *(undefined *)(longlong)(a + 2) = uVar3;
  *(undefined *)(longlong)(a + 3) = uVar2;
  av();
  if (uVar6 == 0) {
    a = x(0xe8,*(int *)(longlong)(a_02 + 4));
    *(int *)(longlong)(a_02 + 4) = a;
    if (a_01 == 0) {
      return 0;
    }
  }
  else {
    x(0x2494ff,a_01);
    a_01 = a_01 + 4;
  }
  a = x(0xc481,a_01);
  return a;
}



int B(void)

{
  int iVar1;
  
  iVar1 = X(0xb);
  return iVar1;
}



int ac(void)

{
  int iVar1;
  
  X(0xb);
  iVar1 = aa(0,0);
  return iVar1;
}



int ar(int s)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  
  do {
    bVar1 = e == 0x100;
    if (!bVar1 && (s != 0 || e == -1)) {
      return e;
    }
    while (!bVar1) {
      iVar4 = 8;
      *(int *)(longlong)e = v;
      av();
      av();
      while (e != 0x29) {
        while( true ) {
          *(int *)(longlong)e = iVar4;
          iVar4 = iVar4 + 4;
          av();
          if (e != 0x2c) break;
          av();
          if (e == 0x29) goto LAB_00102334;
        }
      }
LAB_00102334:
      av();
      iVar2 = 3;
      iVar4 = 0xe58955;
      P = 0;
      U = 0;
      do {
        iVar2 = iVar2 + -1;
        puVar3 = (undefined *)(longlong)v;
        v = v + 1;
        *puVar3 = (char)iVar4;
        iVar4 = iVar4 >> 8;
      } while (iVar2 != 0);
      iVar2 = x(0xec81,0);
      S(0);
      ap(U,v);
      puVar3 = (undefined *)(longlong)v;
      v = v + 1;
      *puVar3 = 0xc9;
      puVar3 = (undefined *)(longlong)v;
      v = v + 1;
      *puVar3 = 0xc3;
      iVar4 = P;
      *(undefined *)(longlong)iVar2 = (char)P;
      *(undefined *)(longlong)(iVar2 + 1) = (char)((uint)iVar4 >> 8);
      *(undefined *)(longlong)(iVar2 + 2) = (char)((uint)iVar4 >> 0x10);
      *(undefined *)(longlong)(iVar2 + 3) = (char)((uint)iVar4 >> 0x18);
      bVar1 = e == 0x100;
      if (!bVar1 && (s != 0 || e == -1)) {
        return e;
      }
    }
    av();
    while (e != 0x3b) {
      if (s == 0) {
        *(int *)(longlong)e = i;
        i = i + 4;
        av();
      }
      else {
        iVar4 = -4 - P;
        P = P + 4;
        *(int *)(longlong)e = iVar4;
        av();
      }
      if (e == 0x2c) {
        av();
      }
    }
    av();
  } while( true );
}



int S(int s)

{
  int a;
  int a_00;
  int a_01;
  int *extraout_x9;
  int *extraout_x9_00;
  int h;
  
  a = e;
  if (e == 0x120) {
    av();
    av();
    X(0xb);
    a = aa(0,0);
    av();
    S(s);
    if (e == 0x138) {
      av();
      a_01 = x(0xe9,0);
      ap(a,v);
      S(s);
      a = ap(a_01,v);
    }
    else {
      a = ap(a,v);
    }
  }
  else {
    if (e == 0x160 || e == 0x1f8) {
      av();
      av();
      a_01 = v;
      if (a == 0x160) {
        X(0xb);
        h = aa(0,0);
      }
      else {
        if (e != 0x3b) {
          X(0xb);
        }
        av();
        a_01 = v;
        h = 0;
        if (e != 0x3b) {
          X(0xb);
          h = aa(0,0);
        }
        av();
        if (e != 0x29) {
          a_00 = x(0xe9,0);
          X(0xb);
          a = a_01 - v;
          a_01 = a_00 + 4;
          x(0xe9,a + -5);
          ap(a_00,*extraout_x9);
        }
      }
      av();
      S((int)register0x00000008 + -4);
      x(0xe9,(a_01 - v) + -5);
      a = ap(h,v);
      return a;
    }
    if (e == 0x7b) {
      av();
      ar(1);
      while (e != 0x7d) {
        S(s);
      }
    }
    else {
      if (e == 0x1c0) {
        av();
        if (e != 0x3b) {
          X(0xb);
        }
        a = x(0xe9,U);
        *extraout_x9_00 = a;
      }
      else {
        if (e == 400) {
          av();
          a = x(0xe9,*(int *)(longlong)s);
          *(int *)(longlong)s = a;
        }
        else {
          if (e != 0x3b) {
            X(0xb);
          }
        }
      }
    }
    a = av();
  }
  return a;
}



int ax(int d)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_w1;
  
  iVar1 = i + 1;
  iVar2 = i + 2;
  iVar3 = i + 3;
  *(undefined *)(longlong)i = (char)d;
  *(undefined *)(longlong)iVar1 = (char)((uint)d >> 8);
  *(undefined *)(longlong)iVar2 = (char)((uint)d >> 0x10);
  *(undefined *)(longlong)iVar3 = (char)((uint)d >> 0x18);
  i = i + 4;
  return in_w1;
}



int ad(int d,int a)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined uVar5;
  undefined uVar6;
  undefined uVar7;
  undefined uVar8;
  
  iVar2 = i;
  iVar4 = d + 0x8048000;
  uVar5 = (undefined)((uint)iVar4 >> 8);
  uVar6 = (undefined)((uint)iVar4 >> 0x10);
  uVar7 = (undefined)((uint)iVar4 >> 0x18);
  iVar1 = i + 1;
  *(undefined *)(longlong)i = (char)d;
  *(undefined *)(longlong)iVar1 = (char)((uint)d >> 8);
  *(undefined *)(longlong)(iVar2 + 2) = (char)((uint)d >> 0x10);
  *(undefined *)(longlong)(iVar2 + 3) = (char)((uint)d >> 0x18);
  iVar3 = i;
  iVar1 = i + 4;
  iVar2 = i + 5;
  i = iVar1;
  *(undefined *)(longlong)iVar1 = (char)iVar4;
  *(undefined *)(longlong)iVar2 = uVar5;
  *(undefined *)(longlong)(iVar3 + 6) = uVar6;
  *(undefined *)(longlong)(iVar3 + 7) = uVar7;
  iVar3 = i;
  iVar1 = i + 4;
  iVar2 = i + 5;
  i = iVar1;
  *(undefined *)(longlong)iVar1 = (char)iVar4;
  *(undefined *)(longlong)iVar2 = uVar5;
  uVar8 = (undefined)((uint)a >> 0x10);
  *(undefined *)(longlong)(iVar3 + 6) = uVar6;
  uVar5 = (undefined)((uint)a >> 8);
  *(undefined *)(longlong)(iVar3 + 7) = uVar7;
  uVar6 = (undefined)((uint)a >> 0x18);
  iVar1 = i + 4;
  iVar2 = i + 5;
  iVar4 = i + 6;
  iVar3 = i + 7;
  i = iVar1;
  *(undefined *)(longlong)iVar1 = (char)a;
  *(undefined *)(longlong)iVar2 = uVar5;
  *(undefined *)(longlong)iVar4 = uVar8;
  *(undefined *)(longlong)iVar3 = uVar6;
  iVar1 = i + 4;
  iVar2 = i + 5;
  iVar4 = i + 6;
  iVar3 = i + 7;
  i = iVar1;
  *(undefined *)(longlong)iVar1 = (char)a;
  *(undefined *)(longlong)iVar2 = uVar5;
  *(undefined *)(longlong)iVar4 = uVar8;
  *(undefined *)(longlong)iVar3 = uVar6;
  i = i + 4;
  return d;
}



void FUN_00102964(int param_1)

{
  int iVar1;
  int z;
  int iVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  uint a;
  char *__src;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar13 = 0;
  iVar12 = Q;
  iVar11 = D;
LAB_001029b8:
  iVar1 = iVar12 + 1;
  __src = (char *)(longlong)iVar1;
  cVar3 = *__src;
  iVar8 = i;
  do {
    iVar12 = iVar1;
    if ((cVar3 != ' ') && (pcVar9 = __src, iVar1 < iVar11)) {
      while( true ) {
        iVar12 = iVar12 + 1;
        if (pcVar9[1] == ' ') break;
        pcVar9 = pcVar9 + 1;
        if (iVar12 == iVar11) {
          i = iVar8;
          return;
        }
      }
    }
    if (iVar12 == iVar11) {
      i = iVar8;
      return;
    }
    z = T + (iVar1 - Q) * 8;
    e = z + 0xf8;
    a = *(uint *)(longlong)(z + 0xfc);
    z = *(int *)(longlong)e;
    i = iVar8;
    if (a == 0 || z == 1) goto LAB_001029b8;
    if (z == 0) {
      if (param_1 == 0) {
        memcpy((void *)(longlong)iVar8,__src,iVar12 - iVar1);
        iVar11 = D;
        i = ((iVar12 + i) - iVar1) + 1;
        goto LAB_001029b8;
      }
      if (param_1 == 1) {
        iVar11 = iVar13 + 0x16;
        iVar13 = ((iVar13 + iVar12) - iVar1) + 1;
        *(undefined *)(longlong)iVar8 = (char)iVar11;
        *(undefined *)(longlong)(iVar8 + 1) = (char)((uint)iVar11 >> 8);
        *(undefined *)(longlong)(iVar8 + 2) = (char)((uint)iVar11 >> 0x10);
        *(undefined *)(longlong)(iVar8 + 3) = (char)((uint)iVar11 >> 0x18);
        iVar11 = i;
        i = i + 4;
        *(undefined *)(longlong)i = 0;
        *(undefined *)(longlong)(iVar11 + 5) = 0;
        *(undefined *)(longlong)(iVar11 + 6) = 0;
        *(undefined *)(longlong)(iVar11 + 7) = 0;
        iVar11 = i;
        i = i + 4;
        *(undefined *)(longlong)i = 0;
        *(undefined *)(longlong)(iVar11 + 5) = 0;
        *(undefined *)(longlong)(iVar11 + 6) = 0;
        *(undefined *)(longlong)(iVar11 + 7) = 0;
        iVar11 = i;
        i = i + 4;
        *(undefined *)(longlong)i = 0x10;
        *(undefined *)(longlong)(iVar11 + 5) = 0;
        *(undefined *)(longlong)(iVar11 + 6) = 0;
        *(undefined *)(longlong)(iVar11 + 7) = 0;
        iVar11 = D;
        i = i + 4;
        goto LAB_001029b8;
      }
      iVar13 = iVar13 + 1;
      do {
        bVar4 = *(byte *)(longlong)(int)(a + 2);
        bVar5 = *(byte *)(longlong)(int)(a + 3);
        bVar6 = *(byte *)(longlong)(int)a;
        uVar10 = (uint)(*(char *)(longlong)(int)(a - 1) != '\x05');
        bVar7 = *(byte *)(longlong)(int)(a + 1);
        iVar11 = uVar10 + iVar13 * 0x100 + 1;
        iVar1 = uVar10 * -4;
        *(byte *)(longlong)(int)a = (byte)iVar1;
        *(byte *)(longlong)(int)(a + 1) = (byte)((uint)iVar1 >> 8);
        *(byte *)(longlong)(int)(a + 2) = (byte)((uint)iVar1 >> 0x10);
        *(byte *)(longlong)(int)(a + 3) = (byte)((uint)iVar1 >> 0x18);
        iVar8 = a - K;
        a = (uint)bVar4 << 0x10 | (uint)bVar7 << 8 | (uint)bVar6 | (uint)bVar5 << 0x18;
        iVar1 = i + 1;
        iVar2 = iVar8 + R + y;
        iVar8 = i + 2;
        z = i + 3;
        *(undefined *)(longlong)i = (char)iVar2;
        *(undefined *)(longlong)iVar1 = (char)((uint)iVar2 >> 8);
        *(undefined *)(longlong)iVar8 = (char)((uint)iVar2 >> 0x10);
        *(undefined *)(longlong)z = (char)((uint)iVar2 >> 0x18);
        iVar1 = i + 4;
        iVar8 = i + 5;
        z = i + 6;
        iVar2 = i + 7;
        i = iVar1;
        *(undefined *)(longlong)iVar1 = (char)iVar11;
        *(undefined *)(longlong)iVar8 = (char)((uint)iVar11 >> 8);
        *(undefined *)(longlong)z = (char)((uint)iVar11 >> 0x10);
        *(undefined *)(longlong)iVar2 = (char)((uint)iVar11 >> 0x18);
        i = i + 4;
      } while (a != 0);
    }
    else {
      if (param_1 != 0) goto LAB_001029b8;
      ap(a,z);
    }
    iVar1 = iVar12 + 1;
    __src = (char *)(longlong)iVar1;
    cVar3 = *__src;
    iVar11 = D;
    iVar8 = i;
  } while( true );
}



int ae(int s)

{
  int iVar1;
  int z;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint a;
  byte *pbVar8;
  byte *__src;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar12 = 0;
  iVar11 = Q;
  iVar10 = D;
LAB_001029b8:
  iVar1 = iVar11 + 1;
  __src = (byte *)(longlong)iVar1;
  bVar3 = *__src;
  iVar7 = i;
  do {
    a = (uint)bVar3;
    iVar11 = iVar1;
    if ((bVar3 != 0x20) && (iVar1 < iVar10)) {
      pbVar8 = __src + 1;
      while( true ) {
        bVar3 = *pbVar8;
        iVar11 = iVar11 + 1;
        pbVar8 = pbVar8 + 1;
        a = (uint)pbVar8;
        if (bVar3 == 0x20) break;
        if (iVar11 == iVar10) {
          i = iVar7;
          return a;
        }
      }
    }
    if (iVar11 == iVar10) {
      i = iVar7;
      return (int)a;
    }
    z = T + (iVar1 - Q) * 8;
    e = z + 0xf8;
    a = *(uint *)(longlong)(z + 0xfc);
    z = *(int *)(longlong)e;
    i = iVar7;
    if (a == 0 || z == 1) goto LAB_001029b8;
    if (z == 0) {
      if (s == 0) {
        memcpy((void *)(longlong)iVar7,__src,iVar11 - iVar1);
        iVar10 = D;
        i = ((iVar11 + i) - iVar1) + 1;
        goto LAB_001029b8;
      }
      if (s == 1) {
        iVar10 = iVar12 + 0x16;
        iVar12 = ((iVar12 + iVar11) - iVar1) + 1;
        *(undefined *)(longlong)iVar7 = (char)iVar10;
        *(undefined *)(longlong)(iVar7 + 1) = (char)((uint)iVar10 >> 8);
        *(undefined *)(longlong)(iVar7 + 2) = (char)((uint)iVar10 >> 0x10);
        *(undefined *)(longlong)(iVar7 + 3) = (char)((uint)iVar10 >> 0x18);
        iVar10 = i;
        i = i + 4;
        *(undefined *)(longlong)i = 0;
        *(undefined *)(longlong)(iVar10 + 5) = 0;
        *(undefined *)(longlong)(iVar10 + 6) = 0;
        *(undefined *)(longlong)(iVar10 + 7) = 0;
        iVar10 = i;
        i = i + 4;
        *(undefined *)(longlong)i = 0;
        *(undefined *)(longlong)(iVar10 + 5) = 0;
        *(undefined *)(longlong)(iVar10 + 6) = 0;
        *(undefined *)(longlong)(iVar10 + 7) = 0;
        iVar10 = i;
        i = i + 4;
        *(undefined *)(longlong)i = 0x10;
        *(undefined *)(longlong)(iVar10 + 5) = 0;
        *(undefined *)(longlong)(iVar10 + 6) = 0;
        *(undefined *)(longlong)(iVar10 + 7) = 0;
        iVar10 = D;
        i = i + 4;
        goto LAB_001029b8;
      }
      iVar12 = iVar12 + 1;
      do {
        bVar3 = *(byte *)(longlong)(int)(a + 2);
        bVar4 = *(byte *)(longlong)(int)(a + 3);
        bVar5 = *(byte *)(longlong)(int)a;
        uVar9 = (uint)(*(char *)(longlong)(int)(a - 1) != '\x05');
        bVar6 = *(byte *)(longlong)(int)(a + 1);
        iVar10 = uVar9 + iVar12 * 0x100 + 1;
        iVar1 = uVar9 * -4;
        *(byte *)(longlong)(int)a = (byte)iVar1;
        *(byte *)(longlong)(int)(a + 1) = (byte)((uint)iVar1 >> 8);
        *(byte *)(longlong)(int)(a + 2) = (byte)((uint)iVar1 >> 0x10);
        *(byte *)(longlong)(int)(a + 3) = (byte)((uint)iVar1 >> 0x18);
        iVar7 = a - K;
        a = (uint)bVar3 << 0x10 | (uint)bVar6 << 8 | (uint)bVar5 | (uint)bVar4 << 0x18;
        iVar1 = i + 1;
        iVar2 = iVar7 + R + y;
        iVar7 = i + 2;
        z = i + 3;
        *(undefined *)(longlong)i = (char)iVar2;
        *(undefined *)(longlong)iVar1 = (char)((uint)iVar2 >> 8);
        *(undefined *)(longlong)iVar7 = (char)((uint)iVar2 >> 0x10);
        *(undefined *)(longlong)z = (char)((uint)iVar2 >> 0x18);
        iVar1 = i + 4;
        iVar7 = i + 5;
        z = i + 6;
        iVar2 = i + 7;
        i = iVar1;
        *(undefined *)(longlong)iVar1 = (char)iVar10;
        *(undefined *)(longlong)iVar7 = (char)((uint)iVar10 >> 8);
        *(undefined *)(longlong)z = (char)((uint)iVar10 >> 0x10);
        *(undefined *)(longlong)iVar2 = (char)((uint)iVar10 >> 0x18);
        i = i + 4;
      } while (a != 0);
    }
    else {
      if (s != 0) goto LAB_001029b8;
      ap(a,z);
    }
    iVar1 = iVar11 + 1;
    __src = (byte *)(longlong)iVar1;
    bVar3 = *__src;
    iVar10 = D;
    iVar7 = i;
  } while( true );
}



ulonglong FUN_00102d3c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  size_t __n;
  int iVar6;
  uint uVar7;
  FILE *pFVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined *puVar13;
  int *extraout_x9;
  int *extraout_x9_00;
  undefined extraout_w14;
  undefined extraout_w14_00;
  int *extraout_x15;
  undefined extraout_w18;
  undefined extraout_w18_00;
  
  iVar12 = 2;
  __n = v - K;
  R = i;
  v = K + 1;
  *(undefined *)(longlong)K = 0x58;
  iVar9 = 0x505458;
  do {
    iVar12 = iVar12 + -1;
    puVar13 = (undefined *)(longlong)v;
    v = v + 1;
    *puVar13 = (char)((uint)iVar9 >> 8);
    iVar9 = iVar9 >> 8;
  } while (iVar12 != 0);
  x(0xe8,(*(int *)(longlong)(T + 0x250) - v) + -5);
  iVar12 = *extraout_x9;
  *extraout_x9 = iVar12 + 1;
  *(undefined *)(longlong)iVar12 = 0x89;
  iVar12 = *extraout_x9;
  *extraout_x9 = iVar12 + 1;
  *(undefined *)(longlong)iVar12 = 0xc3;
  x(0xb8,1);
  iVar12 = *extraout_x9_00;
  *extraout_x9_00 = iVar12 + 1;
  *(undefined *)(longlong)iVar12 = 0xcd;
  iVar12 = *extraout_x9_00;
  *extraout_x9_00 = iVar12 + 1;
  *(undefined *)(longlong)iVar12 = 0x80;
  iVar3 = __n + i;
  *(undefined8 *)(longlong)(iVar3 + 1) = 0x2e6f732e6362696c;
  *(undefined2 *)((undefined8 *)(longlong)(iVar3 + 1) + 1) = 0x36;
  i = iVar3 + 0x16;
  *(undefined8 *)(longlong)(iVar3 + 0xb) = 0x6f732e6c6462696c;
  *(undefined4 *)((longlong)(undefined8 *)(longlong)(iVar3 + 0xb) + 7) = 0x322e6f;
  ae(0);
  iVar6 = i - iVar3;
  uVar7 = i + 3U & 0xfffffffc;
  i = uVar7;
  *(undefined *)(longlong)(int)uVar7 = 0;
  *(undefined *)(longlong)(int)(uVar7 + 1) = 0;
  *(undefined *)(longlong)(int)(uVar7 + 2) = 0;
  *(undefined *)(longlong)(int)(uVar7 + 3) = 0;
  iVar12 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 0;
  *(undefined *)(longlong)(iVar12 + 5) = 0;
  *(undefined *)(longlong)(iVar12 + 6) = 0;
  *(undefined *)(longlong)(iVar12 + 7) = 0;
  iVar12 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 0;
  *(undefined *)(longlong)(iVar12 + 5) = 0;
  *(undefined *)(longlong)(iVar12 + 6) = 0;
  *(undefined *)(longlong)(iVar12 + 7) = 0;
  iVar12 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 0;
  *(undefined *)(longlong)(iVar12 + 5) = 0;
  *(undefined *)(longlong)(iVar12 + 6) = 0;
  *(undefined *)(longlong)(iVar12 + 7) = 0;
  i = i + 4;
  ae(1);
  iVar4 = i;
  iVar12 = i + 1;
  iVar9 = i + 2;
  iVar10 = i - uVar7;
  *(undefined *)(longlong)i = 1;
  *(undefined *)(longlong)iVar12 = 0;
  *(undefined *)(longlong)iVar9 = 0;
  *(undefined *)(longlong)(iVar4 + 3) = 0;
  iVar12 = iVar10 + 0xf;
  if (-1 < iVar10) {
    iVar12 = iVar10;
  }
  iVar9 = i + 4;
  iVar10 = i + 5;
  iVar5 = iVar12 >> 4;
  iVar1 = i + 6;
  iVar2 = i + 7;
  i = iVar9;
  *(undefined *)(longlong)iVar9 = (char)iVar5;
  *(undefined *)(longlong)iVar10 = (char)(iVar12 >> 0xc);
  *(undefined *)(longlong)iVar1 = (char)(iVar12 >> 0x14);
  *(char *)(longlong)iVar2 = (char)(iVar12 >> 0x1c);
  iVar12 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 1;
  *(undefined *)(longlong)(iVar12 + 5) = 0;
  *(undefined *)(longlong)(iVar12 + 6) = 0;
  *(undefined *)(longlong)(iVar12 + 7) = 0;
  iVar12 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 0;
  *(undefined *)(longlong)(iVar12 + 5) = 0;
  *(undefined *)(longlong)(iVar12 + 6) = 0;
  *(undefined *)(longlong)(iVar12 + 7) = 0;
  iVar12 = i + 4;
  if (2 < iVar5) {
    iVar9 = 2;
    do {
      i = iVar12;
      *(undefined *)(longlong)iVar12 = (char)iVar9;
      *(undefined *)(longlong)(iVar12 + 1) = (char)((uint)iVar9 >> 8);
      *(undefined *)(longlong)(iVar12 + 2) = (char)((uint)iVar9 >> 0x10);
      iVar10 = iVar9 + 1;
      *(undefined *)(longlong)(iVar12 + 3) = (char)((uint)iVar9 >> 0x18);
      iVar12 = i + 4;
      iVar9 = iVar10;
    } while (iVar5 != iVar10);
  }
  i = iVar12;
  *(undefined *)(longlong)iVar12 = 0;
  *(undefined *)(longlong)(iVar12 + 1) = 0;
  *(undefined *)(longlong)(iVar12 + 2) = 0;
  *(undefined *)(longlong)(iVar12 + 3) = 0;
  iVar12 = i + 4;
  i = iVar12;
  ae(2);
  memcpy((void *)(longlong)R,(void *)(longlong)K,__n);
  iVar1 = i;
  iVar10 = G;
  iVar9 = G + 1;
  i = G;
  *(undefined *)(longlong)G = 0x7f;
  *(undefined *)(longlong)iVar9 = 0x45;
  *(undefined *)(longlong)(iVar10 + 2) = 0x4c;
  *(undefined *)(longlong)(iVar10 + 3) = 0x46;
  iVar9 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 1;
  *(undefined *)(longlong)(iVar9 + 5) = 1;
  *(undefined *)(longlong)(iVar9 + 6) = 1;
  *(undefined *)(longlong)(iVar9 + 7) = 0;
  iVar9 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 0;
  *(undefined *)(longlong)(iVar9 + 5) = 0;
  *(undefined *)(longlong)(iVar9 + 6) = 0;
  *(undefined *)(longlong)(iVar9 + 7) = 0;
  iVar9 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 0;
  *(undefined *)(longlong)(iVar9 + 5) = 0;
  *(undefined *)(longlong)(iVar9 + 6) = 0;
  *(undefined *)(longlong)(iVar9 + 7) = 0;
  iVar9 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 2;
  *(undefined *)(longlong)(iVar9 + 5) = 0;
  *(undefined *)(longlong)(iVar9 + 6) = 3;
  *(undefined *)(longlong)(iVar9 + 7) = 0;
  iVar9 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 1;
  *(undefined *)(longlong)(iVar9 + 5) = 0;
  *(undefined *)(longlong)(iVar9 + 6) = 0;
  *(undefined *)(longlong)(iVar9 + 7) = 0;
  iVar2 = i;
  iVar9 = i + 5;
  iVar10 = R + y;
  i = i + 4;
  *(undefined *)(longlong)i = (char)iVar10;
  *(undefined *)(longlong)iVar9 = (char)((uint)iVar10 >> 8);
  *(undefined *)(longlong)(iVar2 + 6) = (char)((uint)iVar10 >> 0x10);
  *(undefined *)(longlong)(iVar2 + 7) = (char)((uint)iVar10 >> 0x18);
  iVar9 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 0x30;
  *(undefined *)(longlong)(iVar9 + 5) = 0;
  *(undefined *)(longlong)(iVar9 + 6) = 0;
  *(undefined *)(longlong)(iVar9 + 7) = 0;
  iVar9 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 0;
  *(undefined *)(longlong)(iVar9 + 5) = 0;
  *(undefined *)(longlong)(iVar9 + 6) = 0;
  *(undefined *)(longlong)(iVar9 + 7) = 0;
  iVar9 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 0;
  *(undefined *)(longlong)(iVar9 + 5) = 0;
  *(undefined *)(longlong)(iVar9 + 6) = 0;
  *(undefined *)(longlong)(iVar9 + 7) = 0;
  iVar9 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 0x34;
  *(undefined *)(longlong)(iVar9 + 5) = 0;
  *(undefined *)(longlong)(iVar9 + 6) = 0x20;
  *(undefined *)(longlong)(iVar9 + 7) = 0;
  iVar9 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 3;
  *(undefined *)(longlong)(iVar9 + 5) = 0;
  *(undefined *)(longlong)(iVar9 + 6) = 0;
  *(undefined *)(longlong)(iVar9 + 7) = 0;
  iVar9 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 3;
  *(undefined *)(longlong)(iVar9 + 5) = 0;
  *(undefined *)(longlong)(iVar9 + 6) = 0;
  *(undefined *)(longlong)(iVar9 + 7) = 0;
  i = i + 4;
  ad(0x90,0x13);
  iVar10 = i;
  iVar9 = i + 1;
  *(undefined *)(longlong)i = 4;
  *(undefined *)(longlong)iVar9 = 0;
  *(undefined *)(longlong)(iVar10 + 2) = 0;
  *(undefined *)(longlong)(iVar10 + 3) = 0;
  iVar9 = i;
  i = i + 4;
  *(undefined *)(longlong)i = extraout_w14;
  *(undefined *)(longlong)(iVar9 + 5) = 0;
  *(undefined *)(longlong)(iVar9 + 6) = 0;
  *(undefined *)(longlong)(iVar9 + 7) = 0;
  iVar9 = i;
  i = i + 4;
  *(undefined *)(longlong)i = extraout_w14;
  *(undefined *)(longlong)(iVar9 + 5) = 0;
  *(undefined *)(longlong)(iVar9 + 6) = 0;
  *(undefined *)(longlong)(iVar9 + 7) = 0;
  i = i + 4;
  ad(0,iVar1 - G);
  iVar10 = i;
  iVar9 = i + 1;
  *(undefined *)(longlong)i = 7;
  *(undefined *)(longlong)iVar9 = 0;
  *(undefined *)(longlong)(iVar10 + 2) = 0;
  *(undefined *)(longlong)(iVar10 + 3) = 0;
  iVar9 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 0;
  *(undefined *)(longlong)(iVar9 + 5) = extraout_w18;
  *(undefined *)(longlong)(iVar9 + 6) = 0;
  *(undefined *)(longlong)(iVar9 + 7) = 0;
  iVar9 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 2;
  *(undefined *)(longlong)(iVar9 + 5) = 0;
  *(undefined *)(longlong)(iVar9 + 6) = 0;
  *(undefined *)(longlong)(iVar9 + 7) = 0;
  i = i + 4;
  ad(0xa4,0x58);
  iVar10 = i;
  iVar9 = i + 1;
  *(undefined *)(longlong)i = 6;
  *(undefined *)(longlong)iVar9 = 0;
  *(undefined *)(longlong)(iVar10 + 2) = 0;
  *(undefined *)(longlong)(iVar10 + 3) = 0;
  iVar9 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 4;
  *(undefined *)(longlong)(iVar9 + 5) = 0;
  *(undefined *)(longlong)(iVar9 + 6) = 0;
  *(undefined *)(longlong)(iVar9 + 7) = 0;
  iVar2 = i;
  puVar11 = (undefined8 *)(longlong)(i + 4);
  *puVar11 = 0x2d646c2f62696c2f;
  puVar11[1] = 0x6f732e78756e696c;
  iVar10 = i + 0x18;
  *(undefined4 *)((longlong)puVar11 + 0xf) = 0x322e6f;
  iVar9 = i + 0x19;
  i = iVar10;
  *(undefined *)(longlong)iVar10 = extraout_w14_00;
  iVar10 = iVar1 - iVar12;
  *(undefined *)(longlong)iVar9 = 0;
  *(undefined *)(longlong)(iVar2 + 0x1a) = 0;
  *(undefined *)(longlong)(iVar2 + 0x1b) = 0;
  iVar9 = i;
  i = i + 4;
  *(undefined *)(longlong)i = extraout_w14_00;
  *(undefined *)(longlong)(iVar9 + 5) = 0;
  *(undefined *)(longlong)(iVar9 + 6) = 0;
  *(undefined *)(longlong)(iVar9 + 7) = 0;
  iVar9 = i;
  i = i + 4;
  *(undefined *)(longlong)i = extraout_w14_00;
  *(undefined *)(longlong)(iVar9 + 5) = 0;
  *(undefined *)(longlong)(iVar9 + 6) = 0;
  *(undefined *)(longlong)(iVar9 + 7) = 0;
  iVar9 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 0xb;
  *(undefined *)(longlong)(iVar9 + 5) = 0;
  *(undefined *)(longlong)(iVar9 + 6) = 0;
  *(undefined *)(longlong)(iVar9 + 7) = 0;
  iVar9 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 4;
  *(undefined *)(longlong)(iVar9 + 5) = 0;
  *(undefined *)(longlong)(iVar9 + 6) = 0;
  *(undefined *)(longlong)(iVar9 + 7) = 0;
  iVar2 = i;
  iVar9 = i + 6;
  iVar4 = iVar4 + *extraout_x15;
  i = i + 4;
  *(undefined *)(longlong)i = (char)iVar4;
  *(undefined *)(longlong)(iVar2 + 5) = (char)((uint)iVar4 >> 8);
  *(undefined *)(longlong)iVar9 = (char)((uint)iVar4 >> 0x10);
  *(undefined *)(longlong)(iVar2 + 7) = (char)((uint)iVar4 >> 0x18);
  iVar9 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 6;
  *(undefined *)(longlong)(iVar9 + 5) = 0;
  *(undefined *)(longlong)(iVar9 + 6) = 0;
  *(undefined *)(longlong)(iVar9 + 7) = 0;
  iVar2 = i;
  iVar9 = i + 5;
  iVar4 = uVar7 + *extraout_x15;
  i = i + 4;
  *(undefined *)(longlong)i = (char)iVar4;
  *(undefined *)(longlong)iVar9 = (char)((uint)iVar4 >> 8);
  *(undefined *)(longlong)(iVar2 + 6) = (char)((uint)iVar4 >> 0x10);
  *(undefined *)(longlong)(iVar2 + 7) = (char)((uint)iVar4 >> 0x18);
  iVar9 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 5;
  *(undefined *)(longlong)(iVar9 + 5) = 0;
  *(undefined *)(longlong)(iVar9 + 6) = 0;
  *(undefined *)(longlong)(iVar9 + 7) = 0;
  iVar4 = i;
  iVar9 = i + 5;
  iVar3 = iVar3 + *extraout_x15;
  i = i + 4;
  *(undefined *)(longlong)i = (char)iVar3;
  *(undefined *)(longlong)iVar9 = (char)((uint)iVar3 >> 8);
  *(undefined *)(longlong)(iVar4 + 6) = (char)((uint)iVar3 >> 0x10);
  *(undefined *)(longlong)(iVar4 + 7) = (char)((uint)iVar3 >> 0x18);
  iVar9 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 10;
  *(undefined *)(longlong)(iVar9 + 5) = 0;
  *(undefined *)(longlong)(iVar9 + 6) = 0;
  *(undefined *)(longlong)(iVar9 + 7) = 0;
  iVar9 = i;
  i = i + 4;
  *(undefined *)(longlong)i = (char)iVar6;
  *(undefined *)(longlong)(iVar9 + 5) = (char)((uint)iVar6 >> 8);
  *(undefined *)(longlong)(iVar9 + 6) = (char)((uint)iVar6 >> 0x10);
  *(undefined *)(longlong)(iVar9 + 7) = (char)((uint)iVar6 >> 0x18);
  iVar9 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 0xb;
  *(undefined *)(longlong)(iVar9 + 5) = 0;
  *(undefined *)(longlong)(iVar9 + 6) = 0;
  *(undefined *)(longlong)(iVar9 + 7) = 0;
  iVar9 = i;
  i = i + 4;
  *(undefined *)(longlong)i = extraout_w18_00;
  *(undefined *)(longlong)(iVar9 + 5) = 0;
  *(undefined *)(longlong)(iVar9 + 6) = 0;
  *(undefined *)(longlong)(iVar9 + 7) = 0;
  iVar9 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 0x11;
  *(undefined *)(longlong)(iVar9 + 5) = 0;
  *(undefined *)(longlong)(iVar9 + 6) = 0;
  *(undefined *)(longlong)(iVar9 + 7) = 0;
  iVar3 = i;
  iVar12 = iVar12 + *extraout_x15;
  iVar9 = i + 4;
  iVar4 = i + 5;
  i = iVar9;
  *(undefined *)(longlong)iVar9 = (char)iVar12;
  *(undefined *)(longlong)iVar4 = (char)((uint)iVar12 >> 8);
  *(undefined *)(longlong)(iVar3 + 6) = (char)((uint)iVar12 >> 0x10);
  *(undefined *)(longlong)(iVar3 + 7) = (char)((uint)iVar12 >> 0x18);
  iVar12 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 0x12;
  *(undefined *)(longlong)(iVar12 + 5) = 0;
  *(undefined *)(longlong)(iVar12 + 6) = 0;
  *(undefined *)(longlong)(iVar12 + 7) = 0;
  iVar12 = i;
  i = i + 4;
  *(undefined *)(longlong)i = (char)iVar10;
  *(undefined *)(longlong)(iVar12 + 5) = (char)((uint)iVar10 >> 8);
  *(undefined *)(longlong)(iVar12 + 6) = (char)((uint)iVar10 >> 0x10);
  *(undefined *)(longlong)(iVar12 + 7) = (char)((uint)iVar10 >> 0x18);
  iVar4 = i;
  iVar12 = i + 4;
  iVar9 = i + 5;
  i = iVar12;
  *(undefined *)(longlong)iVar12 = 0x13;
  *(undefined *)(longlong)iVar9 = 0;
  *(undefined *)(longlong)(iVar4 + 6) = 0;
  *(undefined *)(longlong)(iVar4 + 7) = 0;
  iVar12 = i + 4;
  iVar9 = i + 5;
  iVar4 = i + 6;
  iVar3 = i + 7;
  i = iVar12;
  *(undefined *)(longlong)iVar12 = 8;
  *(undefined *)(longlong)iVar9 = 0;
  *(undefined *)(longlong)iVar4 = 0;
  *(undefined *)(longlong)iVar3 = 0;
  iVar12 = i + 4;
  iVar9 = i + 5;
  iVar4 = i + 6;
  iVar3 = i + 7;
  i = iVar12;
  *(undefined *)(longlong)iVar12 = 0;
  *(undefined *)(longlong)iVar9 = 0;
  *(undefined *)(longlong)iVar4 = 0;
  *(undefined *)(longlong)iVar3 = 0;
  iVar12 = i + 4;
  iVar9 = i + 5;
  iVar4 = i + 6;
  iVar3 = i + 7;
  i = iVar12;
  *(undefined *)(longlong)iVar12 = 0;
  *(undefined *)(longlong)iVar9 = 0;
  *(undefined *)(longlong)iVar4 = 0;
  *(undefined *)(longlong)iVar3 = 0;
  i = i + 4;
  pFVar8 = fopen((char *)(longlong)param_1,"w");
  fwrite((void *)(longlong)G,1,iVar1 - G,(FILE *)(longlong)(int)pFVar8);
  uVar7 = fclose((FILE *)(longlong)(int)pFVar8);
  return (ulonglong)uVar7;
}



int au(int F)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  size_t __n;
  int iVar7;
  int iVar8;
  FILE *pFVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  int *extraout_x9;
  int *extraout_x9_00;
  undefined extraout_w14;
  undefined extraout_w14_00;
  int *extraout_x15;
  undefined extraout_w18;
  undefined extraout_w18_00;
  
  iVar8 = 2;
  __n = v - K;
  R = i;
  v = K + 1;
  *(undefined *)(longlong)K = 0x58;
  iVar10 = 0x505458;
  do {
    iVar8 = iVar8 + -1;
    puVar13 = (undefined *)(longlong)v;
    v = v + 1;
    *puVar13 = (char)((uint)iVar10 >> 8);
    iVar10 = iVar10 >> 8;
  } while (iVar8 != 0);
  x(0xe8,(*(int *)(longlong)(T + 0x250) - v) + -5);
  iVar8 = *extraout_x9;
  *extraout_x9 = iVar8 + 1;
  *(undefined *)(longlong)iVar8 = 0x89;
  iVar8 = *extraout_x9;
  *extraout_x9 = iVar8 + 1;
  *(undefined *)(longlong)iVar8 = 0xc3;
  x(0xb8,1);
  iVar8 = *extraout_x9_00;
  *extraout_x9_00 = iVar8 + 1;
  *(undefined *)(longlong)iVar8 = 0xcd;
  iVar8 = *extraout_x9_00;
  *extraout_x9_00 = iVar8 + 1;
  *(undefined *)(longlong)iVar8 = 0x80;
  iVar3 = __n + i;
  *(undefined8 *)(longlong)(iVar3 + 1) = 0x2e6f732e6362696c;
  *(undefined2 *)((undefined8 *)(longlong)(iVar3 + 1) + 1) = 0x36;
  i = iVar3 + 0x16;
  *(undefined8 *)(longlong)(iVar3 + 0xb) = 0x6f732e6c6462696c;
  *(undefined4 *)((longlong)(undefined8 *)(longlong)(iVar3 + 0xb) + 7) = 0x322e6f;
  ae(0);
  iVar7 = i - iVar3;
  uVar5 = i + 3U & 0xfffffffc;
  i = uVar5;
  *(undefined *)(longlong)(int)uVar5 = 0;
  *(undefined *)(longlong)(int)(uVar5 + 1) = 0;
  *(undefined *)(longlong)(int)(uVar5 + 2) = 0;
  *(undefined *)(longlong)(int)(uVar5 + 3) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 0;
  *(undefined *)(longlong)(iVar8 + 5) = 0;
  *(undefined *)(longlong)(iVar8 + 6) = 0;
  *(undefined *)(longlong)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 0;
  *(undefined *)(longlong)(iVar8 + 5) = 0;
  *(undefined *)(longlong)(iVar8 + 6) = 0;
  *(undefined *)(longlong)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 0;
  *(undefined *)(longlong)(iVar8 + 5) = 0;
  *(undefined *)(longlong)(iVar8 + 6) = 0;
  *(undefined *)(longlong)(iVar8 + 7) = 0;
  i = i + 4;
  ae(1);
  iVar4 = i;
  iVar8 = i + 1;
  iVar10 = i + 2;
  iVar11 = i - uVar5;
  *(undefined *)(longlong)i = 1;
  *(undefined *)(longlong)iVar8 = 0;
  *(undefined *)(longlong)iVar10 = 0;
  *(undefined *)(longlong)(iVar4 + 3) = 0;
  iVar8 = iVar11 + 0xf;
  if (-1 < iVar11) {
    iVar8 = iVar11;
  }
  iVar10 = i + 4;
  iVar11 = i + 5;
  iVar6 = iVar8 >> 4;
  iVar1 = i + 6;
  iVar2 = i + 7;
  i = iVar10;
  *(undefined *)(longlong)iVar10 = (char)iVar6;
  *(undefined *)(longlong)iVar11 = (char)(iVar8 >> 0xc);
  *(undefined *)(longlong)iVar1 = (char)(iVar8 >> 0x14);
  *(char *)(longlong)iVar2 = (char)(iVar8 >> 0x1c);
  iVar8 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 1;
  *(undefined *)(longlong)(iVar8 + 5) = 0;
  *(undefined *)(longlong)(iVar8 + 6) = 0;
  *(undefined *)(longlong)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 0;
  *(undefined *)(longlong)(iVar8 + 5) = 0;
  *(undefined *)(longlong)(iVar8 + 6) = 0;
  *(undefined *)(longlong)(iVar8 + 7) = 0;
  iVar8 = i + 4;
  if (2 < iVar6) {
    iVar10 = 2;
    do {
      i = iVar8;
      *(undefined *)(longlong)iVar8 = (char)iVar10;
      *(undefined *)(longlong)(iVar8 + 1) = (char)((uint)iVar10 >> 8);
      *(undefined *)(longlong)(iVar8 + 2) = (char)((uint)iVar10 >> 0x10);
      iVar11 = iVar10 + 1;
      *(undefined *)(longlong)(iVar8 + 3) = (char)((uint)iVar10 >> 0x18);
      iVar8 = i + 4;
      iVar10 = iVar11;
    } while (iVar6 != iVar11);
  }
  i = iVar8;
  *(undefined *)(longlong)iVar8 = 0;
  *(undefined *)(longlong)(iVar8 + 1) = 0;
  *(undefined *)(longlong)(iVar8 + 2) = 0;
  *(undefined *)(longlong)(iVar8 + 3) = 0;
  iVar8 = i + 4;
  i = iVar8;
  ae(2);
  memcpy((void *)(longlong)R,(void *)(longlong)K,__n);
  iVar1 = i;
  iVar11 = G;
  iVar10 = G + 1;
  i = G;
  *(undefined *)(longlong)G = 0x7f;
  *(undefined *)(longlong)iVar10 = 0x45;
  *(undefined *)(longlong)(iVar11 + 2) = 0x4c;
  *(undefined *)(longlong)(iVar11 + 3) = 0x46;
  iVar10 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 1;
  *(undefined *)(longlong)(iVar10 + 5) = 1;
  *(undefined *)(longlong)(iVar10 + 6) = 1;
  *(undefined *)(longlong)(iVar10 + 7) = 0;
  iVar10 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 0;
  *(undefined *)(longlong)(iVar10 + 5) = 0;
  *(undefined *)(longlong)(iVar10 + 6) = 0;
  *(undefined *)(longlong)(iVar10 + 7) = 0;
  iVar10 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 0;
  *(undefined *)(longlong)(iVar10 + 5) = 0;
  *(undefined *)(longlong)(iVar10 + 6) = 0;
  *(undefined *)(longlong)(iVar10 + 7) = 0;
  iVar10 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 2;
  *(undefined *)(longlong)(iVar10 + 5) = 0;
  *(undefined *)(longlong)(iVar10 + 6) = 3;
  *(undefined *)(longlong)(iVar10 + 7) = 0;
  iVar10 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 1;
  *(undefined *)(longlong)(iVar10 + 5) = 0;
  *(undefined *)(longlong)(iVar10 + 6) = 0;
  *(undefined *)(longlong)(iVar10 + 7) = 0;
  iVar2 = i;
  iVar10 = i + 5;
  iVar11 = R + y;
  i = i + 4;
  *(undefined *)(longlong)i = (char)iVar11;
  *(undefined *)(longlong)iVar10 = (char)((uint)iVar11 >> 8);
  *(undefined *)(longlong)(iVar2 + 6) = (char)((uint)iVar11 >> 0x10);
  *(undefined *)(longlong)(iVar2 + 7) = (char)((uint)iVar11 >> 0x18);
  iVar10 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 0x30;
  *(undefined *)(longlong)(iVar10 + 5) = 0;
  *(undefined *)(longlong)(iVar10 + 6) = 0;
  *(undefined *)(longlong)(iVar10 + 7) = 0;
  iVar10 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 0;
  *(undefined *)(longlong)(iVar10 + 5) = 0;
  *(undefined *)(longlong)(iVar10 + 6) = 0;
  *(undefined *)(longlong)(iVar10 + 7) = 0;
  iVar10 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 0;
  *(undefined *)(longlong)(iVar10 + 5) = 0;
  *(undefined *)(longlong)(iVar10 + 6) = 0;
  *(undefined *)(longlong)(iVar10 + 7) = 0;
  iVar10 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 0x34;
  *(undefined *)(longlong)(iVar10 + 5) = 0;
  *(undefined *)(longlong)(iVar10 + 6) = 0x20;
  *(undefined *)(longlong)(iVar10 + 7) = 0;
  iVar10 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 3;
  *(undefined *)(longlong)(iVar10 + 5) = 0;
  *(undefined *)(longlong)(iVar10 + 6) = 0;
  *(undefined *)(longlong)(iVar10 + 7) = 0;
  iVar10 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 3;
  *(undefined *)(longlong)(iVar10 + 5) = 0;
  *(undefined *)(longlong)(iVar10 + 6) = 0;
  *(undefined *)(longlong)(iVar10 + 7) = 0;
  i = i + 4;
  ad(0x90,0x13);
  iVar11 = i;
  iVar10 = i + 1;
  *(undefined *)(longlong)i = 4;
  *(undefined *)(longlong)iVar10 = 0;
  *(undefined *)(longlong)(iVar11 + 2) = 0;
  *(undefined *)(longlong)(iVar11 + 3) = 0;
  iVar10 = i;
  i = i + 4;
  *(undefined *)(longlong)i = extraout_w14;
  *(undefined *)(longlong)(iVar10 + 5) = 0;
  *(undefined *)(longlong)(iVar10 + 6) = 0;
  *(undefined *)(longlong)(iVar10 + 7) = 0;
  iVar10 = i;
  i = i + 4;
  *(undefined *)(longlong)i = extraout_w14;
  *(undefined *)(longlong)(iVar10 + 5) = 0;
  *(undefined *)(longlong)(iVar10 + 6) = 0;
  *(undefined *)(longlong)(iVar10 + 7) = 0;
  i = i + 4;
  ad(0,iVar1 - G);
  iVar11 = i;
  iVar10 = i + 1;
  *(undefined *)(longlong)i = 7;
  *(undefined *)(longlong)iVar10 = 0;
  *(undefined *)(longlong)(iVar11 + 2) = 0;
  *(undefined *)(longlong)(iVar11 + 3) = 0;
  iVar10 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 0;
  *(undefined *)(longlong)(iVar10 + 5) = extraout_w18;
  *(undefined *)(longlong)(iVar10 + 6) = 0;
  *(undefined *)(longlong)(iVar10 + 7) = 0;
  iVar10 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 2;
  *(undefined *)(longlong)(iVar10 + 5) = 0;
  *(undefined *)(longlong)(iVar10 + 6) = 0;
  *(undefined *)(longlong)(iVar10 + 7) = 0;
  i = i + 4;
  ad(0xa4,0x58);
  iVar11 = i;
  iVar10 = i + 1;
  *(undefined *)(longlong)i = 6;
  *(undefined *)(longlong)iVar10 = 0;
  *(undefined *)(longlong)(iVar11 + 2) = 0;
  *(undefined *)(longlong)(iVar11 + 3) = 0;
  iVar10 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 4;
  *(undefined *)(longlong)(iVar10 + 5) = 0;
  *(undefined *)(longlong)(iVar10 + 6) = 0;
  *(undefined *)(longlong)(iVar10 + 7) = 0;
  iVar2 = i;
  puVar12 = (undefined8 *)(longlong)(i + 4);
  *puVar12 = 0x2d646c2f62696c2f;
  puVar12[1] = 0x6f732e78756e696c;
  iVar11 = i + 0x18;
  *(undefined4 *)((longlong)puVar12 + 0xf) = 0x322e6f;
  iVar10 = i + 0x19;
  i = iVar11;
  *(undefined *)(longlong)iVar11 = extraout_w14_00;
  iVar11 = iVar1 - iVar8;
  *(undefined *)(longlong)iVar10 = 0;
  *(undefined *)(longlong)(iVar2 + 0x1a) = 0;
  *(undefined *)(longlong)(iVar2 + 0x1b) = 0;
  iVar10 = i;
  i = i + 4;
  *(undefined *)(longlong)i = extraout_w14_00;
  *(undefined *)(longlong)(iVar10 + 5) = 0;
  *(undefined *)(longlong)(iVar10 + 6) = 0;
  *(undefined *)(longlong)(iVar10 + 7) = 0;
  iVar10 = i;
  i = i + 4;
  *(undefined *)(longlong)i = extraout_w14_00;
  *(undefined *)(longlong)(iVar10 + 5) = 0;
  *(undefined *)(longlong)(iVar10 + 6) = 0;
  *(undefined *)(longlong)(iVar10 + 7) = 0;
  iVar10 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 0xb;
  *(undefined *)(longlong)(iVar10 + 5) = 0;
  *(undefined *)(longlong)(iVar10 + 6) = 0;
  *(undefined *)(longlong)(iVar10 + 7) = 0;
  iVar10 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 4;
  *(undefined *)(longlong)(iVar10 + 5) = 0;
  *(undefined *)(longlong)(iVar10 + 6) = 0;
  *(undefined *)(longlong)(iVar10 + 7) = 0;
  iVar2 = i;
  iVar10 = i + 6;
  iVar4 = iVar4 + *extraout_x15;
  i = i + 4;
  *(undefined *)(longlong)i = (char)iVar4;
  *(undefined *)(longlong)(iVar2 + 5) = (char)((uint)iVar4 >> 8);
  *(undefined *)(longlong)iVar10 = (char)((uint)iVar4 >> 0x10);
  *(undefined *)(longlong)(iVar2 + 7) = (char)((uint)iVar4 >> 0x18);
  iVar10 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 6;
  *(undefined *)(longlong)(iVar10 + 5) = 0;
  *(undefined *)(longlong)(iVar10 + 6) = 0;
  *(undefined *)(longlong)(iVar10 + 7) = 0;
  iVar2 = i;
  iVar10 = i + 5;
  iVar4 = uVar5 + *extraout_x15;
  i = i + 4;
  *(undefined *)(longlong)i = (char)iVar4;
  *(undefined *)(longlong)iVar10 = (char)((uint)iVar4 >> 8);
  *(undefined *)(longlong)(iVar2 + 6) = (char)((uint)iVar4 >> 0x10);
  *(undefined *)(longlong)(iVar2 + 7) = (char)((uint)iVar4 >> 0x18);
  iVar10 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 5;
  *(undefined *)(longlong)(iVar10 + 5) = 0;
  *(undefined *)(longlong)(iVar10 + 6) = 0;
  *(undefined *)(longlong)(iVar10 + 7) = 0;
  iVar4 = i;
  iVar10 = i + 5;
  iVar3 = iVar3 + *extraout_x15;
  i = i + 4;
  *(undefined *)(longlong)i = (char)iVar3;
  *(undefined *)(longlong)iVar10 = (char)((uint)iVar3 >> 8);
  *(undefined *)(longlong)(iVar4 + 6) = (char)((uint)iVar3 >> 0x10);
  *(undefined *)(longlong)(iVar4 + 7) = (char)((uint)iVar3 >> 0x18);
  iVar10 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 10;
  *(undefined *)(longlong)(iVar10 + 5) = 0;
  *(undefined *)(longlong)(iVar10 + 6) = 0;
  *(undefined *)(longlong)(iVar10 + 7) = 0;
  iVar10 = i;
  i = i + 4;
  *(undefined *)(longlong)i = (char)iVar7;
  *(undefined *)(longlong)(iVar10 + 5) = (char)((uint)iVar7 >> 8);
  *(undefined *)(longlong)(iVar10 + 6) = (char)((uint)iVar7 >> 0x10);
  *(undefined *)(longlong)(iVar10 + 7) = (char)((uint)iVar7 >> 0x18);
  iVar10 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 0xb;
  *(undefined *)(longlong)(iVar10 + 5) = 0;
  *(undefined *)(longlong)(iVar10 + 6) = 0;
  *(undefined *)(longlong)(iVar10 + 7) = 0;
  iVar10 = i;
  i = i + 4;
  *(undefined *)(longlong)i = extraout_w18_00;
  *(undefined *)(longlong)(iVar10 + 5) = 0;
  *(undefined *)(longlong)(iVar10 + 6) = 0;
  *(undefined *)(longlong)(iVar10 + 7) = 0;
  iVar10 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 0x11;
  *(undefined *)(longlong)(iVar10 + 5) = 0;
  *(undefined *)(longlong)(iVar10 + 6) = 0;
  *(undefined *)(longlong)(iVar10 + 7) = 0;
  iVar3 = i;
  iVar8 = iVar8 + *extraout_x15;
  iVar10 = i + 4;
  iVar4 = i + 5;
  i = iVar10;
  *(undefined *)(longlong)iVar10 = (char)iVar8;
  *(undefined *)(longlong)iVar4 = (char)((uint)iVar8 >> 8);
  *(undefined *)(longlong)(iVar3 + 6) = (char)((uint)iVar8 >> 0x10);
  *(undefined *)(longlong)(iVar3 + 7) = (char)((uint)iVar8 >> 0x18);
  iVar8 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 0x12;
  *(undefined *)(longlong)(iVar8 + 5) = 0;
  *(undefined *)(longlong)(iVar8 + 6) = 0;
  *(undefined *)(longlong)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(longlong)i = (char)iVar11;
  *(undefined *)(longlong)(iVar8 + 5) = (char)((uint)iVar11 >> 8);
  *(undefined *)(longlong)(iVar8 + 6) = (char)((uint)iVar11 >> 0x10);
  *(undefined *)(longlong)(iVar8 + 7) = (char)((uint)iVar11 >> 0x18);
  iVar4 = i;
  iVar8 = i + 4;
  iVar10 = i + 5;
  i = iVar8;
  *(undefined *)(longlong)iVar8 = 0x13;
  *(undefined *)(longlong)iVar10 = 0;
  *(undefined *)(longlong)(iVar4 + 6) = 0;
  *(undefined *)(longlong)(iVar4 + 7) = 0;
  iVar8 = i + 4;
  iVar10 = i + 5;
  iVar4 = i + 6;
  iVar3 = i + 7;
  i = iVar8;
  *(undefined *)(longlong)iVar8 = 8;
  *(undefined *)(longlong)iVar10 = 0;
  *(undefined *)(longlong)iVar4 = 0;
  *(undefined *)(longlong)iVar3 = 0;
  iVar8 = i + 4;
  iVar10 = i + 5;
  iVar4 = i + 6;
  iVar3 = i + 7;
  i = iVar8;
  *(undefined *)(longlong)iVar8 = 0;
  *(undefined *)(longlong)iVar10 = 0;
  *(undefined *)(longlong)iVar4 = 0;
  *(undefined *)(longlong)iVar3 = 0;
  iVar8 = i + 4;
  iVar10 = i + 5;
  iVar4 = i + 6;
  iVar3 = i + 7;
  i = iVar8;
  *(undefined *)(longlong)iVar8 = 0;
  *(undefined *)(longlong)iVar10 = 0;
  *(undefined *)(longlong)iVar4 = 0;
  *(undefined *)(longlong)iVar3 = 0;
  i = i + 4;
  pFVar9 = fopen((char *)(longlong)F,"w");
  fwrite((void *)(longlong)G,1,iVar1 - G,(FILE *)(longlong)(int)pFVar9);
  iVar8 = fclose((FILE *)(longlong)(int)pFVar9);
  return iVar8;
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


