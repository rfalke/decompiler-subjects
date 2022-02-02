typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
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
    char _unused2[56];
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
    SHT_GNU_versym=1879048191,
    SHT_AARCH64_ATTRIBUTES=1879048195
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
    PT_GNU_RELRO=1685382482,
    PT_AARCH64_ARCHEXT=1879048192
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

typedef struct Gnu_BuildId Gnu_BuildId, *PGnu_BuildId;

struct Gnu_BuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Build-id vendor name
    byte description[20]; // Build-id value
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
    puVar3 = (undefined8 *)(long)Q;
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
    pFVar2 = fopen((char *)(long)*(int *)(long)(a + 4),"r");
    y = 0x8048000 - G;
    v = v + 0x11;
    i = i + 0xfc;
    ak = (int)pFVar2;
    w();
    av();
    ar(0);
    au(*(int *)(long)(a + 8));
  }
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
  
  puVar1 = (undefined *)(long)D;
  D = D + 1;
  *puVar1 = (char)a;
  return in_w3;
}



int w(void)

{
  byte *pbVar1;
  
  if (V == 0) {
    m = fgetc((FILE *)(long)ak);
    return m;
  }
  pbVar1 = (byte *)(long)V;
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
  return iVar1 == 0x5f | uVar2;
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
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  
  while( true ) {
    while( true ) {
      iVar7 = m;
      uVar3 = isspace(m);
      bVar2 = iVar7 == 0x23;
      for (uVar3 = bVar2 | uVar3; uVar3 != 0; uVar3 = bVar2 | uVar3) {
        if (bVar2) {
          w();
          av();
          if (e == 0x218) {
            av();
            puVar6 = (undefined *)(long)D;
            D = D + 1;
            *puVar6 = 0x20;
            *(undefined4 *)(long)e = 1;
            *(int *)(long)(e + 4) = D;
          }
          while (m != 10) {
            puVar6 = (undefined *)(long)D;
            D = D + 1;
            *puVar6 = (char)m;
            w();
          }
          puVar6 = (undefined *)(long)D;
          D = D + 1;
          *puVar6 = 10;
          puVar6 = (undefined *)(long)D;
          D = D + 1;
          *puVar6 = 2;
          w();
        }
        else {
          w();
        }
        iVar7 = m;
        uVar3 = isspace(m);
        bVar2 = iVar7 == 0x23;
      }
      J = 0;
      e = iVar7;
      uVar3 = isalnum(iVar7);
      if ((iVar7 == 0x5f | uVar3) == 0) break;
      puVar6 = (undefined *)(long)D;
      D = D + 1;
      *puVar6 = 0x20;
      Z = D;
      while (iVar7 = m, uVar3 = isalnum(m), (iVar7 == 0x5f | uVar3) != 0) {
        puVar6 = (undefined *)(long)D;
        D = D + 1;
        *puVar6 = (char)iVar7;
        w();
      }
      if (e - 0x30U < 10) {
        pbVar5 = (byte *)strtol((char *)(ulong)(uint)Z,(char **)0x0,0);
        C = (int)pbVar5;
        e = 2;
        return pbVar5;
      }
      *(undefined *)(long)D = 0x20;
      iVar7 = Q;
      pcVar4 = strstr((char *)(long)Q,(char *)(long)(Z + -1));
      e = (int)pcVar4 - iVar7;
      *(undefined *)(long)D = 0;
      e = (e + 0x20) * 8;
      if (e < 0x219) {
        return (byte *)(ulong)(uint)e;
      }
      e = e + T;
      if (*(int *)(long)e != 1) {
        return (byte *)(ulong)(uint)e;
      }
      V = *(int *)(long)(int)(e + 4);
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
      uVar3 = w();
      return (byte *)(ulong)uVar3;
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
  iVar7 = 0x103d38;
  do {
    while( true ) {
      uVar3 = (uint)*(byte *)(long)iVar7;
      if (uVar3 == 0) {
        return (byte *)(long)iVar7;
      }
      bVar1 = *(byte *)(long)(iVar7 + 1);
      C = 0;
      J = *(byte *)(long)(iVar7 + 2) - 0x62;
      pbVar5 = (byte *)(ulong)(uint)J;
      uVar9 = (uint)bVar1;
      if (-1 < J) break;
      C = 0;
      lVar8 = (long)(iVar7 + 4);
      do {
        iVar7 = (int)lVar8;
        C = (int)pbVar5 + C * 0x40 + 0x40;
        J = *(byte *)(lVar8 + -1) - 0x62;
        pbVar5 = (byte *)(ulong)(uint)J;
        lVar8 = lVar8 + 1;
      } while (J < 0);
      if ((uVar9 == 0x40 || m == uVar9) && e == uVar3) goto LAB_00101548;
    }
    iVar7 = iVar7 + 3;
  } while (bVar1 != 0x40 && m != (uint)bVar1 || e != uVar3);
LAB_00101548:
  if (m == uVar9) {
    w();
    pbVar5 = (byte *)0x1;
    e = 1;
  }
  return pbVar5;
}



int av(void)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  undefined *puVar8;
  uint uVar9;
  
  while( true ) {
    while( true ) {
      iVar5 = m;
      uVar3 = isspace(m);
      bVar2 = iVar5 == 0x23;
      for (uVar3 = bVar2 | uVar3; uVar3 != 0; uVar3 = bVar2 | uVar3) {
        if (bVar2) {
          w();
          av();
          if (e == 0x218) {
            av();
            puVar8 = (undefined *)(long)D;
            D = D + 1;
            *puVar8 = 0x20;
            *(undefined4 *)(long)e = 1;
            *(int *)(long)(e + 4) = D;
          }
          while (m != 10) {
            puVar8 = (undefined *)(long)D;
            D = D + 1;
            *puVar8 = (char)m;
            w();
          }
          puVar8 = (undefined *)(long)D;
          D = D + 1;
          *puVar8 = 10;
          puVar8 = (undefined *)(long)D;
          D = D + 1;
          *puVar8 = 2;
          w();
        }
        else {
          w();
        }
        iVar5 = m;
        uVar3 = isspace(m);
        bVar2 = iVar5 == 0x23;
      }
      J = 0;
      e = iVar5;
      uVar3 = isalnum(iVar5);
      if ((iVar5 == 0x5f | uVar3) == 0) break;
      puVar8 = (undefined *)(long)D;
      D = D + 1;
      *puVar8 = 0x20;
      Z = D;
      while (iVar5 = m, uVar3 = isalnum(m), (iVar5 == 0x5f | uVar3) != 0) {
        puVar8 = (undefined *)(long)D;
        D = D + 1;
        *puVar8 = (char)iVar5;
        w();
      }
      if (e - 0x30U < 10) {
        lVar7 = strtol((char *)(ulong)(uint)Z,(char **)0x0,0);
        C = (int)lVar7;
        e = 2;
        return (int)lVar7;
      }
      *(undefined *)(long)D = 0x20;
      iVar5 = Q;
      pcVar6 = strstr((char *)(long)Q,(char *)(long)(Z + -1));
      e = (int)pcVar6 - iVar5;
      *(undefined *)(long)D = 0;
      e = (e + 0x20) * 8;
      if (e < 0x219) {
        return e;
      }
      e = e + T;
      if (*(int *)(long)e != 1) {
        return e;
      }
      V = *(int *)(long)(e + 4);
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
      iVar5 = w();
      return iVar5;
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
  iVar5 = 0x103d38;
  do {
    while( true ) {
      uVar3 = (uint)*(byte *)(long)iVar5;
      if (uVar3 == 0) {
        return iVar5;
      }
      bVar1 = *(byte *)(long)(iVar5 + 1);
      C = 0;
      iVar4 = *(byte *)(long)(iVar5 + 2) - 0x62;
      uVar9 = (uint)bVar1;
      if (-1 < iVar4) break;
      C = 0;
      lVar7 = (long)(iVar5 + 4);
      do {
        iVar5 = (int)lVar7;
        C = iVar4 + C * 0x40 + 0x40;
        iVar4 = *(byte *)(lVar7 + -1) - 0x62;
        lVar7 = lVar7 + 1;
      } while (iVar4 < 0);
      J = iVar4;
      if ((uVar9 == 0x40 || m == uVar9) && e == uVar3) goto LAB_00101548;
    }
    iVar5 = iVar5 + 3;
    J = iVar4;
  } while (bVar1 != 0x40 && m != (uint)bVar1 || e != uVar3);
LAB_00101548:
  J = iVar4;
  if (m == uVar9) {
    w();
    iVar4 = 1;
    e = 1;
  }
  return iVar4;
}



int aw(int d)

{
  uint uVar1;
  undefined *puVar2;
  
  uVar1 = d + 1;
  while (1 < uVar1) {
    puVar2 = (undefined *)(long)v;
    v = v + 1;
    *puVar2 = (char)d;
    d = d >> 8;
    uVar1 = d + 1;
  }
  return 0;
}



int E(int a,int d)

{
  *(char *)(long)a = (char)d;
  *(char *)(long)(a + 1) = (char)((uint)d >> 8);
  *(char *)(long)(a + 2) = (char)((uint)d >> 0x10);
  *(char *)(long)(a + 3) = (char)((uint)d >> 0x18);
  return a + 3;
}



int ao(int a)

{
  return (uint)*(byte *)(long)(a + 2) << 0x10 | (uint)*(byte *)(long)(a + 1) << 8 |
         (uint)*(byte *)(long)a | (uint)*(byte *)(long)(a + 3) << 0x18;
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
      pbVar4 = (byte *)(long)(int)(a + 2);
      pbVar6 = (byte *)(long)a;
      pbVar5 = (byte *)(long)(int)(a + 1);
      pbVar3 = (byte *)(long)(int)(a + 3);
      iVar2 = (z - a) + -4;
      a = (uint)*pbVar4 << 0x10 | (uint)*pbVar5 << 8 | (uint)*pbVar6 | (uint)*pbVar3 << 0x18;
      if (*(char *)(long)iVar1 == '\x05') break;
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
    puVar5 = (undefined *)(long)v;
    v = v + 1;
    *puVar5 = (char)d;
    d = d >> 8;
    uVar1 = d + 1;
  }
  iVar4 = v + 1;
  iVar2 = v + 2;
  iVar3 = v + 3;
  *(char *)(long)v = (char)a;
  *(char *)(long)iVar4 = (char)((uint)a >> 8);
  *(char *)(long)iVar2 = (char)((uint)a >> 0x10);
  *(char *)(long)iVar3 = (char)((uint)a >> 0x18);
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
    puVar2 = (undefined *)(long)v;
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
  long extraout_x11;
  
  puVar3 = (undefined *)(long)v;
  v = v + 1;
  *puVar3 = 0x39;
  puVar3 = (undefined *)(long)v;
  v = v + 1;
  *puVar3 = 0xc1;
  x(0xb8,0);
  iVar2 = *extraout_x10;
  *extraout_x10 = iVar2 + 1;
  *(undefined *)(long)iVar2 = 0xf;
  if (1 < extraout_w9 + 0x91U) {
    iVar2 = extraout_w9 + 0x90;
    do {
      iVar1 = *extraout_x10;
      *extraout_x10 = iVar1 + 1;
      *(char *)(long)iVar1 = (char)iVar2;
      iVar2 = iVar2 >> 8;
    } while (1 < iVar2 + 1U);
  }
  iVar2 = **(int **)(extraout_x11 + 0xf60);
  **(int **)(extraout_x11 + 0xf60) = iVar2 + 1;
  *(undefined *)(long)iVar2 = 0xc0;
  return 0;
}



int W(int s,int a)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int *extraout_x9;
  
  iVar3 = s + 0x83;
  uVar1 = s + 0x84;
  while (1 < uVar1) {
    puVar4 = (undefined *)(long)v;
    v = v + 1;
    *puVar4 = (char)iVar3;
    iVar3 = iVar3 >> 8;
    uVar1 = iVar3 + 1;
  }
  iVar3 = *(int *)(long)a;
  if (iVar3 < 0x200 && iVar3 != 0) {
    iVar3 = x(0x85,iVar3);
    return iVar3;
  }
  iVar3 = *(int *)(long)(a + 4);
  iVar2 = x(5,iVar3);
  *extraout_x9 = iVar2;
  return iVar3;
}



int X(int s)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int a;
  int iVar5;
  undefined *puVar6;
  int a_00;
  uint unaff_w20;
  
  if (s == 1) {
    iVar5 = ab(1);
    return iVar5;
  }
  iVar5 = s + -1;
  a = 0;
  X(iVar5);
  while (iVar2 = e, iVar1 = C, iVar5 == J) {
    av();
    unaff_w20 = iVar1;
    if (iVar5 < 9) {
      puVar6 = (undefined *)(long)v;
      v = v + 1;
      *puVar6 = 0x50;
      X(iVar5);
      puVar6 = (undefined *)(long)v;
      v = v + 1;
      *puVar6 = 0x59;
      if (s - 5U < 2) {
        aq(iVar1);
      }
      else {
        for (; 1 < iVar1 + 1U; iVar1 = iVar1 >> 8) {
          puVar6 = (undefined *)(long)v;
          v = v + 1;
          *puVar6 = (char)iVar1;
        }
        if (iVar2 == 0x25) {
          puVar6 = (undefined *)(long)v;
          v = v + 1;
          *puVar6 = 0x92;
        }
      }
    }
    else {
      a = aa(iVar1,a);
      X(iVar5);
    }
  }
  bVar4 = a != 0;
  bVar3 = false;
  if (bVar4) {
    bVar3 = s + -9 < 0;
  }
  if ((!bVar4 || iVar5 == 8) || bVar3 != (bVar4 && SBORROW4(iVar5,8))) {
    return J;
  }
  aa(unaff_w20,a);
  x(0xb8,unaff_w20 ^ 1);
  x(0xe9,5);
  ap(a_00,v);
  iVar5 = x(0xb8,unaff_w20);
  return iVar5;
}



int ab(int s)

{
  int iVar1;
  undefined *puVar2;
  undefined uVar3;
  undefined uVar4;
  undefined uVar5;
  undefined uVar6;
  int iVar7;
  int iVar8;
  int a;
  uint uVar9;
  
  a = e;
  iVar1 = C;
  iVar8 = J;
  if (e == 0x22) {
    x(0xb8,i + y);
    while (m != 0x22) {
      if (m == 0x5c) {
        an();
      }
      puVar2 = (undefined *)(long)i;
      i = i + 1;
      *puVar2 = (char)m;
      w();
    }
    *(undefined *)(long)i = 0;
    i = i + 4U & 0xfffffffc;
    w();
    av();
  }
  else {
    av();
    if (a == 2) {
      x(0xb8,iVar1);
    }
    else if (iVar8 == 2) {
      ab(0);
      x(0xb9,0);
      if (a == 0x21) {
        aq(iVar1);
      }
      else {
        uVar9 = iVar1 + 1;
        iVar8 = v;
        while (v = iVar8, 1 < uVar9) {
          v = iVar8 + 1;
          *(char *)(long)iVar8 = (char)iVar1;
          iVar1 = iVar1 >> 8;
          iVar8 = v;
          uVar9 = iVar1 + 1;
        }
      }
    }
    else if (a == 0x28) {
      X(0xb);
      av();
    }
    else if (a == 0x2a) {
      av();
      a = e;
      av();
      av();
      if (e == 0x2a) {
        av();
        a = 0;
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
          puVar2 = (undefined *)(long)v;
          v = v + 1;
          *puVar2 = 0x50;
          X(0xb);
          iVar1 = (a == 0x100) + 0x188;
          puVar2 = (undefined *)(long)v;
          v = v + 1;
          *puVar2 = 0x59;
          do {
            puVar2 = (undefined *)(long)v;
            v = v + 1;
            *puVar2 = (char)iVar1;
            iVar1 = iVar1 >> 8;
          } while (iVar1 == 1);
        }
        else if (a != 0) {
          if (a == 0x100) {
            uVar6 = 0x8b;
          }
          else {
            uVar6 = 0xbe;
            puVar2 = (undefined *)(long)v;
            v = v + 1;
            *puVar2 = 0xf;
          }
          puVar2 = (undefined *)(long)v;
          v = v + 1;
          *puVar2 = uVar6;
          v = v + 1;
        }
      }
    }
    else {
      if (a != 0x26) {
        uVar9 = (uint)(e == 0x3d) & s;
        if (uVar9 == 0) {
          if (e == 0x28) goto LAB_00101da4;
          W(8,a);
          if (J == 0xb) {
            W(0,a);
            for (iVar1 = C; 1 < iVar1 + 1U; iVar1 = iVar1 >> 8) {
              puVar2 = (undefined *)(long)v;
              v = v + 1;
              *puVar2 = (char)iVar1;
            }
            av();
          }
        }
        else {
          av();
          X(0xb);
          W(6,a);
        }
        if (e != 0x28) {
          return 0;
        }
        uVar9 = 0;
        goto LAB_00101da4;
      }
      W(10,e);
      av();
    }
  }
  if (e != 0x28) {
    return 0;
  }
  uVar9 = 1;
  puVar2 = (undefined *)(long)v;
  v = v + 1;
  *puVar2 = 0x50;
LAB_00101da4:
  iVar1 = x(0xec81,0);
  av();
  if (e == 0x29) {
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    iVar8 = 0;
  }
  else {
    iVar7 = 0;
    do {
      while( true ) {
        X(0xb);
        iVar8 = iVar7 + 4;
        x(0x248489,iVar7);
        iVar7 = iVar8;
        if (e != 0x2c) break;
        av();
        if (e == 0x29) goto LAB_00101e14;
      }
    } while (e != 0x29);
LAB_00101e14:
    uVar6 = (undefined)iVar8;
    uVar5 = (undefined)((uint)iVar8 >> 8);
    uVar4 = (undefined)((uint)iVar8 >> 0x10);
    uVar3 = (undefined)((uint)iVar8 >> 0x18);
  }
  *(undefined *)(long)iVar1 = uVar6;
  *(undefined *)(long)(iVar1 + 1) = uVar5;
  *(undefined *)(long)(iVar1 + 2) = uVar4;
  *(undefined *)(long)(iVar1 + 3) = uVar3;
  av();
  if (uVar9 == 0) {
    iVar1 = x(0xe8,*(int *)(long)(a + 4));
    *(int *)(long)(a + 4) = iVar1;
    if (iVar8 == 0) {
      return 0;
    }
  }
  else {
    x(0x2494ff,iVar8);
    iVar8 = iVar8 + 4;
  }
  iVar1 = x(0xc481,iVar8);
  return iVar1;
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
      *(int *)(long)e = v;
      av();
      av();
      while (e != 0x29) {
        while( true ) {
          *(int *)(long)e = iVar4;
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
        puVar3 = (undefined *)(long)v;
        v = v + 1;
        *puVar3 = (char)iVar4;
        iVar4 = iVar4 >> 8;
      } while (iVar2 != 0);
      iVar2 = x(0xec81,0);
      S(0);
      ap(U,v);
      puVar3 = (undefined *)(long)v;
      v = v + 1;
      *puVar3 = 0xc9;
      puVar3 = (undefined *)(long)v;
      v = v + 1;
      *puVar3 = 0xc3;
      iVar4 = P;
      *(char *)(long)iVar2 = (char)P;
      *(char *)(long)(iVar2 + 1) = (char)((uint)iVar4 >> 8);
      *(char *)(long)(iVar2 + 2) = (char)((uint)iVar4 >> 0x10);
      *(char *)(long)(iVar2 + 3) = (char)((uint)iVar4 >> 0x18);
      bVar1 = e == 0x100;
      if (!bVar1 && (s != 0 || e == -1)) {
        return e;
      }
    }
    av();
    while (e != 0x3b) {
      if (s == 0) {
        *(int *)(long)e = i;
        i = i + 4;
        av();
      }
      else {
        iVar4 = -4 - P;
        P = P + 4;
        *(int *)(long)e = iVar4;
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
  int iVar1;
  int a;
  int iVar2;
  int *extraout_x9;
  int *extraout_x9_00;
  int h;
  
  iVar1 = e;
  if (e == 0x120) {
    av();
    av();
    X(0xb);
    iVar1 = aa(0,0);
    av();
    S(s);
    if (e == 0x138) {
      av();
      iVar2 = x(0xe9,0);
      ap(iVar1,v);
      S(s);
      iVar1 = ap(iVar2,v);
    }
    else {
      iVar1 = ap(iVar1,v);
    }
  }
  else {
    if (e == 0x160 || e == 0x1f8) {
      av();
      av();
      iVar2 = v;
      if (iVar1 == 0x160) {
        X(0xb);
        h = aa(0,0);
      }
      else {
        if (e != 0x3b) {
          X(0xb);
        }
        av();
        iVar2 = v;
        h = 0;
        if (e != 0x3b) {
          X(0xb);
          h = aa(0,0);
        }
        av();
        if (e != 0x29) {
          a = x(0xe9,0);
          X(0xb);
          iVar1 = iVar2 - v;
          iVar2 = a + 4;
          x(0xe9,iVar1 + -5);
          ap(a,*extraout_x9);
        }
      }
      av();
      S((int)register0x00000008 + -4);
      x(0xe9,(iVar2 - v) + -5);
      iVar1 = ap(h,v);
      return iVar1;
    }
    if (e == 0x7b) {
      av();
      ar(1);
      while (e != 0x7d) {
        S(s);
      }
    }
    else if (e == 0x1c0) {
      av();
      if (e != 0x3b) {
        X(0xb);
      }
      iVar1 = x(0xe9,U);
      *extraout_x9_00 = iVar1;
    }
    else if (e == 400) {
      av();
      iVar1 = x(0xe9,*(int *)(long)s);
      *(int *)(long)s = iVar1;
    }
    else if (e != 0x3b) {
      X(0xb);
    }
    iVar1 = av();
  }
  return iVar1;
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
  *(char *)(long)i = (char)d;
  *(char *)(long)iVar1 = (char)((uint)d >> 8);
  *(char *)(long)iVar2 = (char)((uint)d >> 0x10);
  *(char *)(long)iVar3 = (char)((uint)d >> 0x18);
  i = i + 4;
  return in_w1;
}



int ad(int d,int a)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined uVar6;
  undefined uVar7;
  undefined uVar8;
  undefined uVar9;
  
  iVar2 = i;
  uVar5 = d + 0x8048000;
  uVar6 = (undefined)(uVar5 >> 8);
  uVar7 = (undefined)(uVar5 >> 0x10);
  uVar8 = (undefined)((ulong)uVar5 >> 0x18);
  iVar1 = i + 1;
  *(char *)(long)i = (char)d;
  *(char *)(long)iVar1 = (char)((uint)d >> 8);
  *(char *)(long)(iVar2 + 2) = (char)((uint)d >> 0x10);
  *(char *)(long)(iVar2 + 3) = (char)((uint)d >> 0x18);
  iVar3 = i;
  iVar1 = i + 4;
  iVar2 = i + 5;
  i = iVar1;
  *(char *)(long)iVar1 = (char)uVar5;
  *(undefined *)(long)iVar2 = uVar6;
  *(undefined *)(long)(iVar3 + 6) = uVar7;
  *(undefined *)(long)(iVar3 + 7) = uVar8;
  iVar3 = i;
  iVar1 = i + 4;
  iVar2 = i + 5;
  i = iVar1;
  *(char *)(long)iVar1 = (char)uVar5;
  *(undefined *)(long)iVar2 = uVar6;
  uVar9 = (undefined)((uint)a >> 0x10);
  *(undefined *)(long)(iVar3 + 6) = uVar7;
  uVar6 = (undefined)((uint)a >> 8);
  *(undefined *)(long)(iVar3 + 7) = uVar8;
  uVar7 = (undefined)((ulong)(uint)a >> 0x18);
  iVar1 = i + 4;
  iVar2 = i + 5;
  iVar3 = i + 6;
  iVar4 = i + 7;
  i = iVar1;
  *(char *)(long)iVar1 = (char)a;
  *(undefined *)(long)iVar2 = uVar6;
  *(undefined *)(long)iVar3 = uVar9;
  *(undefined *)(long)iVar4 = uVar7;
  iVar1 = i + 4;
  iVar2 = i + 5;
  iVar3 = i + 6;
  iVar4 = i + 7;
  i = iVar1;
  *(char *)(long)iVar1 = (char)a;
  *(undefined *)(long)iVar2 = uVar6;
  *(undefined *)(long)iVar3 = uVar9;
  *(undefined *)(long)iVar4 = uVar7;
  i = i + 4;
  return d;
}



void FUN_00102964(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;
  uint a;
  char *__src;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar14 = 0;
  iVar13 = Q;
  iVar12 = D;
LAB_001029b8:
  iVar1 = iVar13 + 1;
  __src = (char *)(long)iVar1;
  cVar4 = *__src;
  iVar9 = i;
  do {
    iVar13 = iVar1;
    if ((cVar4 != ' ') && (pcVar10 = __src, iVar1 < iVar12)) {
      while( true ) {
        iVar13 = iVar13 + 1;
        if (pcVar10[1] == ' ') break;
        pcVar10 = pcVar10 + 1;
        if (iVar13 == iVar12) {
          i = iVar9;
          return;
        }
      }
    }
    if (iVar13 == iVar12) {
      i = iVar9;
      return;
    }
    iVar2 = T + (iVar1 - Q) * 8;
    e = iVar2 + 0xf8;
    a = *(uint *)(long)(iVar2 + 0xfc);
    iVar2 = *(int *)(long)e;
    i = iVar9;
    if (a == 0 || iVar2 == 1) goto LAB_001029b8;
    if (iVar2 == 0) {
      if (param_1 == 0) {
        memcpy((void *)(long)iVar9,__src,(long)(iVar13 - iVar1));
        iVar12 = D;
        i = ((iVar13 + i) - iVar1) + 1;
        goto LAB_001029b8;
      }
      if (param_1 == 1) {
        iVar12 = iVar14 + 0x16;
        iVar14 = ((iVar14 + iVar13) - iVar1) + 1;
        *(char *)(long)iVar9 = (char)iVar12;
        *(char *)(long)(iVar9 + 1) = (char)((uint)iVar12 >> 8);
        *(char *)(long)(iVar9 + 2) = (char)((uint)iVar12 >> 0x10);
        *(char *)(long)(iVar9 + 3) = (char)((uint)iVar12 >> 0x18);
        iVar12 = i;
        i = i + 4;
        *(undefined *)(long)i = 0;
        *(undefined *)(long)(iVar12 + 5) = 0;
        *(undefined *)(long)(iVar12 + 6) = 0;
        *(undefined *)(long)(iVar12 + 7) = 0;
        iVar12 = i;
        i = i + 4;
        *(undefined *)(long)i = 0;
        *(undefined *)(long)(iVar12 + 5) = 0;
        *(undefined *)(long)(iVar12 + 6) = 0;
        *(undefined *)(long)(iVar12 + 7) = 0;
        iVar12 = i;
        i = i + 4;
        *(undefined *)(long)i = 0x10;
        *(undefined *)(long)(iVar12 + 5) = 0;
        *(undefined *)(long)(iVar12 + 6) = 0;
        *(undefined *)(long)(iVar12 + 7) = 0;
        iVar12 = D;
        i = i + 4;
        goto LAB_001029b8;
      }
      iVar14 = iVar14 + 1;
      do {
        bVar5 = *(byte *)(long)(int)(a + 2);
        bVar6 = *(byte *)(long)(int)(a + 3);
        bVar7 = *(byte *)(long)(int)a;
        uVar11 = (uint)(*(char *)(long)(int)(a - 1) != '\x05');
        bVar8 = *(byte *)(long)(int)(a + 1);
        iVar12 = uVar11 + iVar14 * 0x100 + 1;
        iVar1 = uVar11 * -4;
        *(byte *)(long)(int)a = (byte)iVar1;
        *(byte *)(long)(int)(a + 1) = (byte)((uint)iVar1 >> 8);
        *(byte *)(long)(int)(a + 2) = (byte)((uint)iVar1 >> 0x10);
        *(byte *)(long)(int)(a + 3) = (byte)((uint)iVar1 >> 0x18);
        iVar9 = a - K;
        a = (uint)bVar5 << 0x10 | (uint)bVar8 << 8 | (uint)bVar7 | (uint)bVar6 << 0x18;
        iVar1 = i + 1;
        iVar3 = iVar9 + R + y;
        iVar9 = i + 2;
        iVar2 = i + 3;
        *(char *)(long)i = (char)iVar3;
        *(char *)(long)iVar1 = (char)((uint)iVar3 >> 8);
        *(char *)(long)iVar9 = (char)((uint)iVar3 >> 0x10);
        *(char *)(long)iVar2 = (char)((uint)iVar3 >> 0x18);
        iVar1 = i + 4;
        iVar9 = i + 5;
        iVar2 = i + 6;
        iVar3 = i + 7;
        i = iVar1;
        *(char *)(long)iVar1 = (char)iVar12;
        *(char *)(long)iVar9 = (char)((uint)iVar12 >> 8);
        *(char *)(long)iVar2 = (char)((uint)iVar12 >> 0x10);
        *(char *)(long)iVar3 = (char)((uint)iVar12 >> 0x18);
        i = i + 4;
      } while (a != 0);
    }
    else {
      if (param_1 != 0) goto LAB_001029b8;
      ap(a,iVar2);
    }
    iVar1 = iVar13 + 1;
    __src = (char *)(long)iVar1;
    cVar4 = *__src;
    iVar12 = D;
    iVar9 = i;
  } while( true );
}



int ae(int s)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  uint a;
  byte *pbVar9;
  byte *__src;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar13 = 0;
  iVar12 = Q;
  iVar11 = D;
LAB_001029b8:
  iVar1 = iVar12 + 1;
  __src = (byte *)(long)iVar1;
  bVar4 = *__src;
  iVar8 = i;
  do {
    pbVar9 = (byte *)(ulong)bVar4;
    iVar12 = iVar1;
    if ((bVar4 != 0x20) && (iVar1 < iVar11)) {
      pbVar9 = __src + 1;
      while( true ) {
        bVar4 = *pbVar9;
        iVar12 = iVar12 + 1;
        pbVar9 = pbVar9 + 1;
        if (bVar4 == 0x20) break;
        if (iVar12 == iVar11) goto LAB_00102bd8;
      }
    }
    if (iVar12 == iVar11) {
LAB_00102bd8:
      i = iVar8;
      return (int)pbVar9;
    }
    iVar2 = T + (iVar1 - Q) * 8;
    e = iVar2 + 0xf8;
    a = *(uint *)(long)(iVar2 + 0xfc);
    iVar2 = *(int *)(long)e;
    i = iVar8;
    if (a == 0 || iVar2 == 1) goto LAB_001029b8;
    if (iVar2 == 0) {
      if (s == 0) {
        memcpy((void *)(long)iVar8,__src,(long)(iVar12 - iVar1));
        iVar11 = D;
        i = ((iVar12 + i) - iVar1) + 1;
        goto LAB_001029b8;
      }
      if (s == 1) {
        iVar11 = iVar13 + 0x16;
        iVar13 = ((iVar13 + iVar12) - iVar1) + 1;
        *(char *)(long)iVar8 = (char)iVar11;
        *(char *)(long)(iVar8 + 1) = (char)((uint)iVar11 >> 8);
        *(char *)(long)(iVar8 + 2) = (char)((uint)iVar11 >> 0x10);
        *(char *)(long)(iVar8 + 3) = (char)((uint)iVar11 >> 0x18);
        iVar11 = i;
        i = i + 4;
        *(undefined *)(long)i = 0;
        *(undefined *)(long)(iVar11 + 5) = 0;
        *(undefined *)(long)(iVar11 + 6) = 0;
        *(undefined *)(long)(iVar11 + 7) = 0;
        iVar11 = i;
        i = i + 4;
        *(undefined *)(long)i = 0;
        *(undefined *)(long)(iVar11 + 5) = 0;
        *(undefined *)(long)(iVar11 + 6) = 0;
        *(undefined *)(long)(iVar11 + 7) = 0;
        iVar11 = i;
        i = i + 4;
        *(undefined *)(long)i = 0x10;
        *(undefined *)(long)(iVar11 + 5) = 0;
        *(undefined *)(long)(iVar11 + 6) = 0;
        *(undefined *)(long)(iVar11 + 7) = 0;
        iVar11 = D;
        i = i + 4;
        goto LAB_001029b8;
      }
      iVar13 = iVar13 + 1;
      do {
        bVar4 = *(byte *)(long)(int)(a + 2);
        bVar5 = *(byte *)(long)(int)(a + 3);
        bVar6 = *(byte *)(long)(int)a;
        uVar10 = (uint)(*(char *)(long)(int)(a - 1) != '\x05');
        bVar7 = *(byte *)(long)(int)(a + 1);
        iVar11 = uVar10 + iVar13 * 0x100 + 1;
        iVar1 = uVar10 * -4;
        *(byte *)(long)(int)a = (byte)iVar1;
        *(byte *)(long)(int)(a + 1) = (byte)((uint)iVar1 >> 8);
        *(byte *)(long)(int)(a + 2) = (byte)((uint)iVar1 >> 0x10);
        *(byte *)(long)(int)(a + 3) = (byte)((uint)iVar1 >> 0x18);
        iVar8 = a - K;
        a = (uint)bVar4 << 0x10 | (uint)bVar7 << 8 | (uint)bVar6 | (uint)bVar5 << 0x18;
        iVar1 = i + 1;
        iVar3 = iVar8 + R + y;
        iVar8 = i + 2;
        iVar2 = i + 3;
        *(char *)(long)i = (char)iVar3;
        *(char *)(long)iVar1 = (char)((uint)iVar3 >> 8);
        *(char *)(long)iVar8 = (char)((uint)iVar3 >> 0x10);
        *(char *)(long)iVar2 = (char)((uint)iVar3 >> 0x18);
        iVar1 = i + 4;
        iVar8 = i + 5;
        iVar2 = i + 6;
        iVar3 = i + 7;
        i = iVar1;
        *(char *)(long)iVar1 = (char)iVar11;
        *(char *)(long)iVar8 = (char)((uint)iVar11 >> 8);
        *(char *)(long)iVar2 = (char)((uint)iVar11 >> 0x10);
        *(char *)(long)iVar3 = (char)((uint)iVar11 >> 0x18);
        i = i + 4;
      } while (a != 0);
    }
    else {
      if (s != 0) goto LAB_001029b8;
      ap(a,iVar2);
    }
    iVar1 = iVar12 + 1;
    __src = (byte *)(long)iVar1;
    bVar4 = *__src;
    iVar11 = D;
    iVar8 = i;
  } while( true );
}



int FUN_00102d3c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  FILE *pFVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined *puVar14;
  int *extraout_x9;
  int *extraout_x9_00;
  undefined extraout_w14;
  undefined extraout_w14_00;
  int *extraout_x15;
  undefined extraout_w18;
  undefined extraout_w18_00;
  
  iVar13 = 2;
  iVar8 = v - K;
  R = i;
  v = K + 1;
  *(undefined *)(long)K = 0x58;
  iVar10 = 0x505458;
  do {
    iVar13 = iVar13 + -1;
    puVar14 = (undefined *)(long)v;
    v = v + 1;
    *puVar14 = (char)((uint)iVar10 >> 8);
    iVar10 = iVar10 >> 8;
  } while (iVar13 != 0);
  x(0xe8,(*(int *)(long)(T + 0x250) - v) + -5);
  iVar13 = *extraout_x9;
  *extraout_x9 = iVar13 + 1;
  *(undefined *)(long)iVar13 = 0x89;
  iVar13 = *extraout_x9;
  *extraout_x9 = iVar13 + 1;
  *(undefined *)(long)iVar13 = 0xc3;
  x(0xb8,1);
  iVar13 = *extraout_x9_00;
  *extraout_x9_00 = iVar13 + 1;
  *(undefined *)(long)iVar13 = 0xcd;
  iVar13 = *extraout_x9_00;
  *extraout_x9_00 = iVar13 + 1;
  *(undefined *)(long)iVar13 = 0x80;
  iVar3 = iVar8 + i;
  *(undefined8 *)(long)(iVar3 + 1) = 0x2e6f732e6362696c;
  *(undefined2 *)((undefined8 *)(long)(iVar3 + 1) + 1) = 0x36;
  i = iVar3 + 0x16;
  *(undefined8 *)(long)(iVar3 + 0xb) = 0x6f732e6c6462696c;
  *(undefined4 *)((long)(undefined8 *)(long)(iVar3 + 0xb) + 7) = 0x322e6f;
  ae(0);
  iVar7 = i - iVar3;
  uVar5 = i + 3U & 0xfffffffc;
  i = uVar5;
  *(undefined *)(long)(int)uVar5 = 0;
  *(undefined *)(long)(int)(uVar5 + 1) = 0;
  *(undefined *)(long)(int)(uVar5 + 2) = 0;
  *(undefined *)(long)(int)(uVar5 + 3) = 0;
  iVar13 = i;
  i = i + 4;
  *(undefined *)(long)i = 0;
  *(undefined *)(long)(iVar13 + 5) = 0;
  *(undefined *)(long)(iVar13 + 6) = 0;
  *(undefined *)(long)(iVar13 + 7) = 0;
  iVar13 = i;
  i = i + 4;
  *(undefined *)(long)i = 0;
  *(undefined *)(long)(iVar13 + 5) = 0;
  *(undefined *)(long)(iVar13 + 6) = 0;
  *(undefined *)(long)(iVar13 + 7) = 0;
  iVar13 = i;
  i = i + 4;
  *(undefined *)(long)i = 0;
  *(undefined *)(long)(iVar13 + 5) = 0;
  *(undefined *)(long)(iVar13 + 6) = 0;
  *(undefined *)(long)(iVar13 + 7) = 0;
  i = i + 4;
  ae(1);
  iVar4 = i;
  iVar13 = i + 1;
  iVar10 = i + 2;
  iVar11 = i - uVar5;
  *(undefined *)(long)i = 1;
  *(undefined *)(long)iVar13 = 0;
  *(undefined *)(long)iVar10 = 0;
  *(undefined *)(long)(iVar4 + 3) = 0;
  iVar13 = iVar11 + 0xf;
  if (-1 < iVar11) {
    iVar13 = iVar11;
  }
  iVar10 = i + 4;
  iVar11 = i + 5;
  iVar6 = iVar13 >> 4;
  iVar1 = i + 6;
  iVar2 = i + 7;
  i = iVar10;
  *(char *)(long)iVar10 = (char)iVar6;
  *(char *)(long)iVar11 = (char)(iVar13 >> 0xc);
  *(char *)(long)iVar1 = (char)(iVar13 >> 0x14);
  *(char *)(long)iVar2 = (char)(iVar13 >> 0x1c);
  iVar13 = i;
  i = i + 4;
  *(undefined *)(long)i = 1;
  *(undefined *)(long)(iVar13 + 5) = 0;
  *(undefined *)(long)(iVar13 + 6) = 0;
  *(undefined *)(long)(iVar13 + 7) = 0;
  iVar13 = i;
  i = i + 4;
  *(undefined *)(long)i = 0;
  *(undefined *)(long)(iVar13 + 5) = 0;
  *(undefined *)(long)(iVar13 + 6) = 0;
  *(undefined *)(long)(iVar13 + 7) = 0;
  iVar13 = i + 4;
  if (2 < iVar6) {
    iVar10 = 2;
    do {
      i = iVar13;
      *(char *)(long)iVar13 = (char)iVar10;
      *(char *)(long)(iVar13 + 1) = (char)((uint)iVar10 >> 8);
      *(char *)(long)(iVar13 + 2) = (char)((uint)iVar10 >> 0x10);
      iVar11 = iVar10 + 1;
      *(char *)(long)(iVar13 + 3) = (char)((uint)iVar10 >> 0x18);
      iVar13 = i + 4;
      iVar10 = iVar11;
    } while (iVar6 != iVar11);
  }
  i = iVar13;
  *(undefined *)(long)iVar13 = 0;
  *(undefined *)(long)(iVar13 + 1) = 0;
  *(undefined *)(long)(iVar13 + 2) = 0;
  *(undefined *)(long)(iVar13 + 3) = 0;
  iVar13 = i + 4;
  i = iVar13;
  ae(2);
  memcpy((void *)(long)R,(void *)(long)K,(long)iVar8);
  iVar1 = i;
  iVar10 = G;
  iVar8 = G + 1;
  i = G;
  *(undefined *)(long)G = 0x7f;
  *(undefined *)(long)iVar8 = 0x45;
  *(undefined *)(long)(iVar10 + 2) = 0x4c;
  *(undefined *)(long)(iVar10 + 3) = 0x46;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 1;
  *(undefined *)(long)(iVar8 + 5) = 1;
  *(undefined *)(long)(iVar8 + 6) = 1;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 0;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 0;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 2;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 3;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 1;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar11 = i;
  iVar8 = i + 5;
  iVar10 = R + y;
  i = i + 4;
  *(char *)(long)i = (char)iVar10;
  *(char *)(long)iVar8 = (char)((uint)iVar10 >> 8);
  *(char *)(long)(iVar11 + 6) = (char)((uint)iVar10 >> 0x10);
  *(char *)(long)(iVar11 + 7) = (char)((uint)iVar10 >> 0x18);
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 0x30;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 0;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 0;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 0x34;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0x20;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 3;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 3;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  i = i + 4;
  ad(0x90,0x13);
  iVar10 = i;
  iVar8 = i + 1;
  *(undefined *)(long)i = 4;
  *(undefined *)(long)iVar8 = 0;
  *(undefined *)(long)(iVar10 + 2) = 0;
  *(undefined *)(long)(iVar10 + 3) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = extraout_w14;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = extraout_w14;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  i = i + 4;
  ad(0,iVar1 - G);
  iVar10 = i;
  iVar8 = i + 1;
  *(undefined *)(long)i = 7;
  *(undefined *)(long)iVar8 = 0;
  *(undefined *)(long)(iVar10 + 2) = 0;
  *(undefined *)(long)(iVar10 + 3) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 0;
  *(undefined *)(long)(iVar8 + 5) = extraout_w18;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 2;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  i = i + 4;
  ad(0xa4,0x58);
  iVar10 = i;
  iVar8 = i + 1;
  *(undefined *)(long)i = 6;
  *(undefined *)(long)iVar8 = 0;
  *(undefined *)(long)(iVar10 + 2) = 0;
  *(undefined *)(long)(iVar10 + 3) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 4;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar10 = i;
  puVar12 = (undefined8 *)(long)(i + 4);
  *puVar12 = 0x2d646c2f62696c2f;
  puVar12[1] = 0x6f732e78756e696c;
  iVar11 = i + 0x18;
  *(undefined4 *)((long)puVar12 + 0xf) = 0x322e6f;
  iVar8 = i + 0x19;
  i = iVar11;
  *(undefined *)(long)iVar11 = extraout_w14_00;
  iVar11 = iVar1 - iVar13;
  *(undefined *)(long)iVar8 = 0;
  *(undefined *)(long)(iVar10 + 0x1a) = 0;
  *(undefined *)(long)(iVar10 + 0x1b) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = extraout_w14_00;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = extraout_w14_00;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 0xb;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 4;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar10 = i;
  iVar8 = i + 6;
  iVar4 = iVar4 + *extraout_x15;
  i = i + 4;
  *(char *)(long)i = (char)iVar4;
  *(char *)(long)(iVar10 + 5) = (char)((uint)iVar4 >> 8);
  *(char *)(long)iVar8 = (char)((uint)iVar4 >> 0x10);
  *(char *)(long)(iVar10 + 7) = (char)((uint)iVar4 >> 0x18);
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 6;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar4 = i;
  iVar8 = i + 5;
  iVar10 = uVar5 + *extraout_x15;
  i = i + 4;
  *(char *)(long)i = (char)iVar10;
  *(char *)(long)iVar8 = (char)((uint)iVar10 >> 8);
  *(char *)(long)(iVar4 + 6) = (char)((uint)iVar10 >> 0x10);
  *(char *)(long)(iVar4 + 7) = (char)((uint)iVar10 >> 0x18);
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 5;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar10 = i;
  iVar8 = i + 5;
  iVar3 = iVar3 + *extraout_x15;
  i = i + 4;
  *(char *)(long)i = (char)iVar3;
  *(char *)(long)iVar8 = (char)((uint)iVar3 >> 8);
  *(char *)(long)(iVar10 + 6) = (char)((uint)iVar3 >> 0x10);
  *(char *)(long)(iVar10 + 7) = (char)((uint)iVar3 >> 0x18);
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 10;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(char *)(long)i = (char)iVar7;
  *(char *)(long)(iVar8 + 5) = (char)((uint)iVar7 >> 8);
  *(char *)(long)(iVar8 + 6) = (char)((uint)iVar7 >> 0x10);
  *(char *)(long)(iVar8 + 7) = (char)((uint)iVar7 >> 0x18);
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 0xb;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = extraout_w18_00;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 0x11;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar4 = i;
  iVar13 = iVar13 + *extraout_x15;
  iVar8 = i + 4;
  iVar10 = i + 5;
  i = iVar8;
  *(char *)(long)iVar8 = (char)iVar13;
  *(char *)(long)iVar10 = (char)((uint)iVar13 >> 8);
  *(char *)(long)(iVar4 + 6) = (char)((uint)iVar13 >> 0x10);
  *(char *)(long)(iVar4 + 7) = (char)((uint)iVar13 >> 0x18);
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 0x12;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(char *)(long)i = (char)iVar11;
  *(char *)(long)(iVar8 + 5) = (char)((uint)iVar11 >> 8);
  *(char *)(long)(iVar8 + 6) = (char)((uint)iVar11 >> 0x10);
  *(char *)(long)(iVar8 + 7) = (char)((uint)iVar11 >> 0x18);
  iVar10 = i;
  iVar8 = i + 4;
  iVar13 = i + 5;
  i = iVar8;
  *(undefined *)(long)iVar8 = 0x13;
  *(undefined *)(long)iVar13 = 0;
  *(undefined *)(long)(iVar10 + 6) = 0;
  *(undefined *)(long)(iVar10 + 7) = 0;
  iVar8 = i + 4;
  iVar13 = i + 5;
  iVar10 = i + 6;
  iVar4 = i + 7;
  i = iVar8;
  *(undefined *)(long)iVar8 = 8;
  *(undefined *)(long)iVar13 = 0;
  *(undefined *)(long)iVar10 = 0;
  *(undefined *)(long)iVar4 = 0;
  iVar8 = i + 4;
  iVar13 = i + 5;
  iVar10 = i + 6;
  iVar4 = i + 7;
  i = iVar8;
  *(undefined *)(long)iVar8 = 0;
  *(undefined *)(long)iVar13 = 0;
  *(undefined *)(long)iVar10 = 0;
  *(undefined *)(long)iVar4 = 0;
  iVar8 = i + 4;
  iVar13 = i + 5;
  iVar10 = i + 6;
  iVar4 = i + 7;
  i = iVar8;
  *(undefined *)(long)iVar8 = 0;
  *(undefined *)(long)iVar13 = 0;
  *(undefined *)(long)iVar10 = 0;
  *(undefined *)(long)iVar4 = 0;
  i = i + 4;
  pFVar9 = fopen((char *)(long)param_1,"w");
  fwrite((void *)(long)G,1,(long)(iVar1 - G),(FILE *)(long)(int)pFVar9);
  iVar8 = fclose((FILE *)(long)(int)pFVar9);
  return iVar8;
}



int au(int F)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  FILE *pFVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined *puVar14;
  int *extraout_x9;
  int *extraout_x9_00;
  undefined extraout_w14;
  undefined extraout_w14_00;
  int *extraout_x15;
  undefined extraout_w18;
  undefined extraout_w18_00;
  
  iVar13 = 2;
  iVar8 = v - K;
  R = i;
  v = K + 1;
  *(undefined *)(long)K = 0x58;
  iVar10 = 0x505458;
  do {
    iVar13 = iVar13 + -1;
    puVar14 = (undefined *)(long)v;
    v = v + 1;
    *puVar14 = (char)((uint)iVar10 >> 8);
    iVar10 = iVar10 >> 8;
  } while (iVar13 != 0);
  x(0xe8,(*(int *)(long)(T + 0x250) - v) + -5);
  iVar13 = *extraout_x9;
  *extraout_x9 = iVar13 + 1;
  *(undefined *)(long)iVar13 = 0x89;
  iVar13 = *extraout_x9;
  *extraout_x9 = iVar13 + 1;
  *(undefined *)(long)iVar13 = 0xc3;
  x(0xb8,1);
  iVar13 = *extraout_x9_00;
  *extraout_x9_00 = iVar13 + 1;
  *(undefined *)(long)iVar13 = 0xcd;
  iVar13 = *extraout_x9_00;
  *extraout_x9_00 = iVar13 + 1;
  *(undefined *)(long)iVar13 = 0x80;
  iVar3 = iVar8 + i;
  *(undefined8 *)(long)(iVar3 + 1) = 0x2e6f732e6362696c;
  *(undefined2 *)((undefined8 *)(long)(iVar3 + 1) + 1) = 0x36;
  i = iVar3 + 0x16;
  *(undefined8 *)(long)(iVar3 + 0xb) = 0x6f732e6c6462696c;
  *(undefined4 *)((long)(undefined8 *)(long)(iVar3 + 0xb) + 7) = 0x322e6f;
  ae(0);
  iVar7 = i - iVar3;
  uVar5 = i + 3U & 0xfffffffc;
  i = uVar5;
  *(undefined *)(long)(int)uVar5 = 0;
  *(undefined *)(long)(int)(uVar5 + 1) = 0;
  *(undefined *)(long)(int)(uVar5 + 2) = 0;
  *(undefined *)(long)(int)(uVar5 + 3) = 0;
  iVar13 = i;
  i = i + 4;
  *(undefined *)(long)i = 0;
  *(undefined *)(long)(iVar13 + 5) = 0;
  *(undefined *)(long)(iVar13 + 6) = 0;
  *(undefined *)(long)(iVar13 + 7) = 0;
  iVar13 = i;
  i = i + 4;
  *(undefined *)(long)i = 0;
  *(undefined *)(long)(iVar13 + 5) = 0;
  *(undefined *)(long)(iVar13 + 6) = 0;
  *(undefined *)(long)(iVar13 + 7) = 0;
  iVar13 = i;
  i = i + 4;
  *(undefined *)(long)i = 0;
  *(undefined *)(long)(iVar13 + 5) = 0;
  *(undefined *)(long)(iVar13 + 6) = 0;
  *(undefined *)(long)(iVar13 + 7) = 0;
  i = i + 4;
  ae(1);
  iVar4 = i;
  iVar13 = i + 1;
  iVar10 = i + 2;
  iVar11 = i - uVar5;
  *(undefined *)(long)i = 1;
  *(undefined *)(long)iVar13 = 0;
  *(undefined *)(long)iVar10 = 0;
  *(undefined *)(long)(iVar4 + 3) = 0;
  iVar13 = iVar11 + 0xf;
  if (-1 < iVar11) {
    iVar13 = iVar11;
  }
  iVar10 = i + 4;
  iVar11 = i + 5;
  iVar6 = iVar13 >> 4;
  iVar1 = i + 6;
  iVar2 = i + 7;
  i = iVar10;
  *(char *)(long)iVar10 = (char)iVar6;
  *(char *)(long)iVar11 = (char)(iVar13 >> 0xc);
  *(char *)(long)iVar1 = (char)(iVar13 >> 0x14);
  *(char *)(long)iVar2 = (char)(iVar13 >> 0x1c);
  iVar13 = i;
  i = i + 4;
  *(undefined *)(long)i = 1;
  *(undefined *)(long)(iVar13 + 5) = 0;
  *(undefined *)(long)(iVar13 + 6) = 0;
  *(undefined *)(long)(iVar13 + 7) = 0;
  iVar13 = i;
  i = i + 4;
  *(undefined *)(long)i = 0;
  *(undefined *)(long)(iVar13 + 5) = 0;
  *(undefined *)(long)(iVar13 + 6) = 0;
  *(undefined *)(long)(iVar13 + 7) = 0;
  iVar13 = i + 4;
  if (2 < iVar6) {
    iVar10 = 2;
    do {
      i = iVar13;
      *(char *)(long)iVar13 = (char)iVar10;
      *(char *)(long)(iVar13 + 1) = (char)((uint)iVar10 >> 8);
      *(char *)(long)(iVar13 + 2) = (char)((uint)iVar10 >> 0x10);
      iVar11 = iVar10 + 1;
      *(char *)(long)(iVar13 + 3) = (char)((uint)iVar10 >> 0x18);
      iVar13 = i + 4;
      iVar10 = iVar11;
    } while (iVar6 != iVar11);
  }
  i = iVar13;
  *(undefined *)(long)iVar13 = 0;
  *(undefined *)(long)(iVar13 + 1) = 0;
  *(undefined *)(long)(iVar13 + 2) = 0;
  *(undefined *)(long)(iVar13 + 3) = 0;
  iVar13 = i + 4;
  i = iVar13;
  ae(2);
  memcpy((void *)(long)R,(void *)(long)K,(long)iVar8);
  iVar1 = i;
  iVar10 = G;
  iVar8 = G + 1;
  i = G;
  *(undefined *)(long)G = 0x7f;
  *(undefined *)(long)iVar8 = 0x45;
  *(undefined *)(long)(iVar10 + 2) = 0x4c;
  *(undefined *)(long)(iVar10 + 3) = 0x46;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 1;
  *(undefined *)(long)(iVar8 + 5) = 1;
  *(undefined *)(long)(iVar8 + 6) = 1;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 0;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 0;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 2;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 3;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 1;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar11 = i;
  iVar8 = i + 5;
  iVar10 = R + y;
  i = i + 4;
  *(char *)(long)i = (char)iVar10;
  *(char *)(long)iVar8 = (char)((uint)iVar10 >> 8);
  *(char *)(long)(iVar11 + 6) = (char)((uint)iVar10 >> 0x10);
  *(char *)(long)(iVar11 + 7) = (char)((uint)iVar10 >> 0x18);
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 0x30;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 0;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 0;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 0x34;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0x20;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 3;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 3;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  i = i + 4;
  ad(0x90,0x13);
  iVar10 = i;
  iVar8 = i + 1;
  *(undefined *)(long)i = 4;
  *(undefined *)(long)iVar8 = 0;
  *(undefined *)(long)(iVar10 + 2) = 0;
  *(undefined *)(long)(iVar10 + 3) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = extraout_w14;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = extraout_w14;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  i = i + 4;
  ad(0,iVar1 - G);
  iVar10 = i;
  iVar8 = i + 1;
  *(undefined *)(long)i = 7;
  *(undefined *)(long)iVar8 = 0;
  *(undefined *)(long)(iVar10 + 2) = 0;
  *(undefined *)(long)(iVar10 + 3) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 0;
  *(undefined *)(long)(iVar8 + 5) = extraout_w18;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 2;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  i = i + 4;
  ad(0xa4,0x58);
  iVar10 = i;
  iVar8 = i + 1;
  *(undefined *)(long)i = 6;
  *(undefined *)(long)iVar8 = 0;
  *(undefined *)(long)(iVar10 + 2) = 0;
  *(undefined *)(long)(iVar10 + 3) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 4;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar10 = i;
  puVar12 = (undefined8 *)(long)(i + 4);
  *puVar12 = 0x2d646c2f62696c2f;
  puVar12[1] = 0x6f732e78756e696c;
  iVar11 = i + 0x18;
  *(undefined4 *)((long)puVar12 + 0xf) = 0x322e6f;
  iVar8 = i + 0x19;
  i = iVar11;
  *(undefined *)(long)iVar11 = extraout_w14_00;
  iVar11 = iVar1 - iVar13;
  *(undefined *)(long)iVar8 = 0;
  *(undefined *)(long)(iVar10 + 0x1a) = 0;
  *(undefined *)(long)(iVar10 + 0x1b) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = extraout_w14_00;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = extraout_w14_00;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 0xb;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 4;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar10 = i;
  iVar8 = i + 6;
  iVar4 = iVar4 + *extraout_x15;
  i = i + 4;
  *(char *)(long)i = (char)iVar4;
  *(char *)(long)(iVar10 + 5) = (char)((uint)iVar4 >> 8);
  *(char *)(long)iVar8 = (char)((uint)iVar4 >> 0x10);
  *(char *)(long)(iVar10 + 7) = (char)((uint)iVar4 >> 0x18);
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 6;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar4 = i;
  iVar8 = i + 5;
  iVar10 = uVar5 + *extraout_x15;
  i = i + 4;
  *(char *)(long)i = (char)iVar10;
  *(char *)(long)iVar8 = (char)((uint)iVar10 >> 8);
  *(char *)(long)(iVar4 + 6) = (char)((uint)iVar10 >> 0x10);
  *(char *)(long)(iVar4 + 7) = (char)((uint)iVar10 >> 0x18);
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 5;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar10 = i;
  iVar8 = i + 5;
  iVar3 = iVar3 + *extraout_x15;
  i = i + 4;
  *(char *)(long)i = (char)iVar3;
  *(char *)(long)iVar8 = (char)((uint)iVar3 >> 8);
  *(char *)(long)(iVar10 + 6) = (char)((uint)iVar3 >> 0x10);
  *(char *)(long)(iVar10 + 7) = (char)((uint)iVar3 >> 0x18);
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 10;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(char *)(long)i = (char)iVar7;
  *(char *)(long)(iVar8 + 5) = (char)((uint)iVar7 >> 8);
  *(char *)(long)(iVar8 + 6) = (char)((uint)iVar7 >> 0x10);
  *(char *)(long)(iVar8 + 7) = (char)((uint)iVar7 >> 0x18);
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 0xb;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = extraout_w18_00;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 0x11;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar4 = i;
  iVar13 = iVar13 + *extraout_x15;
  iVar8 = i + 4;
  iVar10 = i + 5;
  i = iVar8;
  *(char *)(long)iVar8 = (char)iVar13;
  *(char *)(long)iVar10 = (char)((uint)iVar13 >> 8);
  *(char *)(long)(iVar4 + 6) = (char)((uint)iVar13 >> 0x10);
  *(char *)(long)(iVar4 + 7) = (char)((uint)iVar13 >> 0x18);
  iVar8 = i;
  i = i + 4;
  *(undefined *)(long)i = 0x12;
  *(undefined *)(long)(iVar8 + 5) = 0;
  *(undefined *)(long)(iVar8 + 6) = 0;
  *(undefined *)(long)(iVar8 + 7) = 0;
  iVar8 = i;
  i = i + 4;
  *(char *)(long)i = (char)iVar11;
  *(char *)(long)(iVar8 + 5) = (char)((uint)iVar11 >> 8);
  *(char *)(long)(iVar8 + 6) = (char)((uint)iVar11 >> 0x10);
  *(char *)(long)(iVar8 + 7) = (char)((uint)iVar11 >> 0x18);
  iVar10 = i;
  iVar8 = i + 4;
  iVar13 = i + 5;
  i = iVar8;
  *(undefined *)(long)iVar8 = 0x13;
  *(undefined *)(long)iVar13 = 0;
  *(undefined *)(long)(iVar10 + 6) = 0;
  *(undefined *)(long)(iVar10 + 7) = 0;
  iVar8 = i + 4;
  iVar13 = i + 5;
  iVar10 = i + 6;
  iVar4 = i + 7;
  i = iVar8;
  *(undefined *)(long)iVar8 = 8;
  *(undefined *)(long)iVar13 = 0;
  *(undefined *)(long)iVar10 = 0;
  *(undefined *)(long)iVar4 = 0;
  iVar8 = i + 4;
  iVar13 = i + 5;
  iVar10 = i + 6;
  iVar4 = i + 7;
  i = iVar8;
  *(undefined *)(long)iVar8 = 0;
  *(undefined *)(long)iVar13 = 0;
  *(undefined *)(long)iVar10 = 0;
  *(undefined *)(long)iVar4 = 0;
  iVar8 = i + 4;
  iVar13 = i + 5;
  iVar10 = i + 6;
  iVar4 = i + 7;
  i = iVar8;
  *(undefined *)(long)iVar8 = 0;
  *(undefined *)(long)iVar13 = 0;
  *(undefined *)(long)iVar10 = 0;
  *(undefined *)(long)iVar4 = 0;
  i = i + 4;
  pFVar9 = fopen((char *)(long)F,"w");
  fwrite((void *)(long)G,1,(long)(iVar1 - G),(FILE *)(long)(int)pFVar9);
  iVar8 = fclose((FILE *)(long)(int)pFVar9);
  return iVar8;
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


