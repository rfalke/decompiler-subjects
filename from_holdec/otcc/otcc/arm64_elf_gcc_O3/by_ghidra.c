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
    return 0x11408c;
  }
  h = W;
  L = 0;
  return W;
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
  byte *pbVar1;
  
  if (h == 0x5c) {
    if (L == 0) {
      h = fgetc((FILE *)(longlong)Q);
    }
    else {
      pbVar1 = (byte *)(longlong)L;
      h = ZEXT14(*pbVar1);
      L = L + 1;
      if (*pbVar1 == 2) {
        L = 0;
        h = W;
      }
    }
    if (h == 0x6e) {
      h = 10;
    }
  }
  return h;
}



int ad(void)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  undefined uVar4;
  uint uVar5;
  char *pcVar6;
  byte *pbVar7;
  undefined *puVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  uVar11 = (ulonglong)(uint)h;
  uVar5 = h;
LAB_00101168:
  do {
    h = uVar5;
    uVar5 = (uint)uVar11;
    uVar5 = isspace(uVar5);
    bVar3 = uVar5 == 0x23;
    uVar5 = bVar3 | uVar5;
    while (uVar5 != 0) {
      if (bVar3) {
        if (L == 0) {
          h = fgetc((FILE *)(longlong)Q);
          ad();
        }
        else {
          pbVar7 = (byte *)(longlong)L;
          h = (uint)*pbVar7;
          L = L + 1;
          if (*pbVar7 == 2) {
            L = 0;
            h = W;
          }
          ad();
        }
        if (d == 0x218) {
          ad();
          puVar8 = (undefined *)(longlong)D;
          D = D + 1;
          *puVar8 = 0x20;
          *(undefined4 *)(longlong)d = 1;
          *(int *)(longlong)(d + 4) = D;
        }
        uVar11 = (ulonglong)(uint)h;
LAB_00101434:
        uVar4 = (undefined)uVar11;
        if ((int)uVar11 != 10) {
          while( true ) {
            puVar8 = (undefined *)(longlong)D;
            D = D + 1;
            *puVar8 = (char)uVar11;
            if (L == 0) break;
            bVar1 = *(byte *)(longlong)L;
            uVar11 = (ulonglong)bVar1;
            h = ZEXT14(bVar1);
            L = L + 1;
            if (bVar1 != 2) goto LAB_00101434;
            h = W;
            uVar11 = (ulonglong)(uint)W;
            uVar4 = (undefined)W;
            L = 0;
            if (W == 10) goto LAB_00101490;
          }
          h = fgetc((FILE *)(longlong)Q);
          uVar11 = (ulonglong)(uint)h;
          goto LAB_00101434;
        }
LAB_00101490:
        puVar8 = (undefined *)(longlong)D;
        D = D + 1;
        *puVar8 = uVar4;
        puVar8 = (undefined *)(longlong)D;
        D = D + 1;
        *puVar8 = 2;
      }
      uVar5 = W;
      if (L == 0) {
        uVar5 = fgetc((FILE *)(longlong)Q);
        uVar11 = (ulonglong)uVar5;
        goto LAB_00101168;
      }
      bVar1 = *(byte *)(longlong)L;
      uVar11 = (ulonglong)bVar1;
      uVar5 = (uint)bVar1;
      L = L + 1;
      if (bVar1 != 2) goto LAB_00101168;
      L = 0;
      h = W;
      uVar5 = isspace(W);
      bVar3 = uVar5 == 0x23;
      uVar5 = bVar3 | uVar5;
    }
    C = 0;
    d = uVar5;
    uVar5 = isalnum(uVar5);
    if ((uVar5 == 0x5f | uVar5) == 0) {
      if (L == 0) {
        h = fgetc((FILE *)(longlong)Q);
        uVar5 = d;
      }
      else {
        pbVar7 = (byte *)(longlong)L;
        h = ZEXT14(*pbVar7);
        L = L + 1;
        if (*pbVar7 == 2) {
          L = 0;
          h = W;
        }
      }
      if (uVar5 == 0x27) {
        d = 2;
        if (h == 0x5c) {
          if (L == 0) {
            h = fgetc((FILE *)(longlong)Q);
LAB_00101a90:
            if (h == 0x6e) {
LAB_00101a98:
              h = 10;
            }
            goto LAB_0010177c;
          }
          pbVar7 = (byte *)(longlong)L;
          h = ZEXT14(*pbVar7);
          L = L + 1;
          if (*pbVar7 != 2) goto LAB_00101a90;
          L = 0;
          if (W == 0x6e) goto LAB_00101a98;
          z = W;
LAB_00101a40:
          h = z;
          uVar5 = fgetc((FILE *)(longlong)Q);
        }
        else {
LAB_0010177c:
          z = h;
          if (L == 0) goto LAB_00101a40;
          pbVar7 = (byte *)(longlong)L;
          uVar5 = (uint)*pbVar7;
          L = L + 1;
          if (*pbVar7 == 2) {
            L = 0;
            h = W;
            goto LAB_001019e0;
          }
        }
        h = uVar5;
        if (L != 0) {
          if (*(byte *)(longlong)L != 2) {
            h = (uint)*(byte *)(longlong)L;
            L = L + 1;
            return 0;
          }
          h = W;
          L = 0;
          return 0;
        }
LAB_001019e0:
        h = fgetc((FILE *)(longlong)Q);
        return 0;
      }
      if (uVar5 != 0x2f || h != 0x2a) {
        iVar9 = 0x1036d0;
        break;
      }
      if (L == 0) {
        h = fgetc((FILE *)(longlong)Q);
        uVar11 = (ulonglong)(uint)h;
      }
      else {
        bVar1 = *(byte *)(longlong)L;
        uVar11 = (ulonglong)bVar1;
        h = ZEXT14(bVar1);
        L = L + 1;
        if (bVar1 == 2) {
          L = 0;
          uVar11 = (ulonglong)(uint)W;
          h = W;
        }
      }
      do {
        uVar5 = (uint)uVar11;
        if ((uint)uVar11 == 0) goto LAB_00101664;
joined_r0x001015fc:
        if (uVar5 != 0x2a) {
          pbVar7 = (byte *)(longlong)L;
          if (L != 0) goto code_r0x00101604;
          goto LAB_001016bc;
        }
        if (L == 0) {
LAB_001016d8:
          h = fgetc((FILE *)(longlong)Q);
          uVar11 = (ulonglong)(uint)h;
        }
        else {
          bVar1 = *(byte *)(longlong)L;
          uVar11 = (ulonglong)bVar1;
          h = ZEXT14(bVar1);
          L = L + 1;
          if (bVar1 == 2) {
            L = 0;
            uVar11 = (ulonglong)(uint)W;
            h = W;
          }
        }
      } while ((int)uVar11 != 0x2f);
      h = 0;
LAB_00101664:
      if (L == 0) {
        uVar5 = fgetc((FILE *)(longlong)Q);
        uVar11 = (ulonglong)uVar5;
      }
      else {
        bVar1 = *(byte *)(longlong)L;
        uVar11 = (ulonglong)bVar1;
        uVar5 = (uint)bVar1;
        L = L + 1;
        if (bVar1 == 2) {
          L = 0;
          uVar11 = (ulonglong)(uint)W;
          h = W;
          uVar5 = h;
        }
      }
      goto LAB_00101168;
    }
    puVar8 = (undefined *)(longlong)D;
    D = D + 1;
    *puVar8 = 0x20;
    uVar11 = (ulonglong)(uint)h;
    M = D;
LAB_00101250:
    uVar5 = isalnum((int)uVar11);
    if (((int)uVar11 == 0x5f | uVar5) != 0) {
      while( true ) {
        puVar8 = (undefined *)(longlong)D;
        D = D + 1;
        *puVar8 = (char)uVar11;
        iVar9 = W;
        if (L == 0) break;
        bVar1 = *(byte *)(longlong)L;
        uVar11 = (ulonglong)bVar1;
        h = ZEXT14(bVar1);
        L = L + 1;
        if (bVar1 != 2) goto LAB_00101250;
        L = 0;
        uVar11 = (ulonglong)(uint)W;
        h = W;
        uVar5 = isalnum(W);
        if ((iVar9 == 0x5f | uVar5) == 0) goto LAB_001012d0;
      }
      h = fgetc((FILE *)(longlong)Q);
      uVar11 = (ulonglong)(uint)h;
      goto LAB_00101250;
    }
LAB_001012d0:
    if (d - 0x30U < 10) {
      z = strtol((char *)(ulonglong)(uint)M,(char **)0x0,0);
      d = 2;
      return 0;
    }
    *(undefined *)(longlong)D = 0x20;
    iVar9 = R;
    pcVar6 = strstr((char *)(longlong)R,(char *)(longlong)(M + -1));
    d = (int)pcVar6 - iVar9;
    *(undefined *)(longlong)D = 0;
    d = (d + 0x20) * 8;
    if (d < 0x219) {
      return 0;
    }
    d = d + P;
    if (*(int *)(longlong)d != 1) {
      return 0;
    }
    L = *(int *)(longlong)(d + 4);
    W = h;
    if (L == 0) {
      uVar5 = fgetc((FILE *)(longlong)Q);
      uVar11 = (ulonglong)uVar5;
    }
    else {
      bVar1 = *(byte *)(longlong)L;
      uVar11 = (ulonglong)bVar1;
      uVar5 = (uint)bVar1;
      L = L + 1;
      if (bVar1 == 2) {
        uVar11 = (ulonglong)(uint)h;
        L = 0;
        uVar5 = h;
      }
    }
  } while( true );
LAB_001018cc:
  bVar1 = *(byte *)(longlong)iVar9;
  if (bVar1 == 0) {
    return 0;
  }
  bVar2 = *(byte *)(longlong)(iVar9 + 1);
  z = 0;
  C = (uint)*(byte *)(longlong)(iVar9 + 2) - 0x62;
  if (-1 < C) {
    iVar9 = iVar9 + 3;
    if ((bVar2 == 0x40 || (uint)bVar2 == h) && (uint)bVar1 == uVar5) goto LAB_00101944;
    goto LAB_001018cc;
  }
  z = 0;
  lVar10 = (longlong)(iVar9 + 4);
  do {
    iVar9 = (int)lVar10;
    z = C + z * 0x40 + 0x40;
    C = (uint)*(byte *)(lVar10 + -1) - 0x62;
    lVar10 = lVar10 + 1;
  } while (C < 0);
  bVar3 = false;
  if (bVar2 == 0x40 || (uint)bVar2 == h) {
    bVar3 = (uint)bVar1 == uVar5;
  }
  if (bVar3) {
LAB_00101944:
    if ((uint)bVar2 != h) {
      return 0;
    }
    o();
    d = 1;
    return 0;
  }
  goto LAB_001018cc;
code_r0x00101604:
  h = ZEXT14(*pbVar7);
  L = L + 1;
  uVar5 = h;
  if (*pbVar7 == 2) {
    L = 0;
    h = W;
    if (W == 0x2a) goto LAB_001016d8;
LAB_001016bc:
    h = fgetc((FILE *)(longlong)Q);
    uVar5 = h;
  }
  goto joined_r0x001015fc;
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
  
  uVar1 = j + 0x85;
  j = j + 0x84;
  puVar3 = (undefined *)(longlong)q;
  q = q + 1;
  *puVar3 = 0x85;
  puVar3 = (undefined *)(longlong)q;
  q = q + 1;
  *puVar3 = 0xc0;
  puVar3 = (undefined *)(longlong)q;
  q = q + 1;
  *puVar3 = 0xf;
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
  int e;
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int j_00;
  undefined *puVar7;
  int *piVar8;
  ulonglong unaff_x20;
  int iVar9;
  
  if (j == 1) {
    j_00 = T(1);
    return j_00;
  }
  j_00 = j + -1;
  iVar9 = 0;
  O(j_00);
LAB_00101e64:
  do {
    uVar2 = (uint)unaff_x20;
    while( true ) {
      e = z;
      iVar4 = d;
      if (j_00 != C) {
        bVar6 = iVar9 != 0;
        bVar5 = false;
        if (bVar6) {
          bVar5 = j + -9 < 0;
        }
        if ((bVar6 && j_00 != 8) && bVar5 == (bVar6 && SBORROW4(j_00,8))) {
          uVar1 = uVar2 + 0x85;
          j_00 = uVar2 + 0x84;
          puVar7 = (undefined *)(longlong)q;
          q = q + 1;
          *puVar7 = 0x85;
          puVar7 = (undefined *)(longlong)q;
          q = q + 1;
          *puVar7 = 0xc0;
          puVar7 = (undefined *)(longlong)q;
          q = q + 1;
          *puVar7 = 0xf;
          while (1 < uVar1) {
            puVar7 = (undefined *)(longlong)q;
            q = q + 1;
            *puVar7 = (char)j_00;
            j_00 = j_00 >> 8;
            uVar1 = j_00 + 1;
          }
          *(int *)(longlong)q = iVar9;
          iVar9 = q;
          j_00 = q + 4;
          q = q + 5;
          *(undefined *)(longlong)j_00 = 0xb8;
          *(uint *)(longlong)q = uVar2 ^ 1;
          j_00 = q + 4;
          q = q + 5;
          *(undefined *)(longlong)j_00 = 0xe9;
          *(undefined4 *)(longlong)q = 5;
          q = q + 4;
          while (iVar9 != 0) {
            piVar8 = (int *)(longlong)iVar9;
            j_00 = q - iVar9;
            iVar9 = *piVar8;
            *piVar8 = j_00 + -4;
          }
          puVar7 = (undefined *)(longlong)q;
          q = q + 1;
          *puVar7 = 0xb8;
          *(uint *)(longlong)q = uVar2;
          q = q + 4;
          return q;
        }
        return C;
      }
      unaff_x20 = (ulonglong)(uint)z;
      ad();
      if (8 < j_00) break;
      puVar7 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar7 = 0x50;
      O(j_00);
      puVar7 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar7 = 0x59;
      uVar3 = unaff_x20;
      uVar2 = e;
      if (j - 5U < 2) {
        Z(e);
        goto LAB_00101e64;
      }
      while (1 < uVar2 + 1) {
        puVar7 = (undefined *)(longlong)q;
        q = q + 1;
        *puVar7 = (char)uVar3;
        uVar2 = (int)uVar3 >> 8;
        uVar3 = (ulonglong)uVar2;
      }
      if (iVar4 != 0x25) goto LAB_00101e64;
      puVar7 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar7 = 0x92;
      uVar2 = e;
    }
    uVar2 = e + 0x85;
    e = e + 0x84;
    puVar7 = (undefined *)(longlong)q;
    q = q + 1;
    *puVar7 = 0x85;
    puVar7 = (undefined *)(longlong)q;
    q = q + 1;
    *puVar7 = 0xc0;
    puVar7 = (undefined *)(longlong)q;
    q = q + 1;
    *puVar7 = 0xf;
    while (1 < uVar2) {
      puVar7 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar7 = (char)e;
      e = e >> 8;
      uVar2 = e + 1;
    }
    *(int *)(longlong)q = iVar9;
    iVar9 = q;
    q = q + 4;
    O(j_00);
  } while( true );
}



void FUN_00102184(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  
  O(10);
  if (C == 10) {
    iVar8 = 0;
    do {
      iVar5 = z;
      ad();
      uVar1 = iVar5 + 0x85;
      iVar2 = iVar5 + 0x84;
      puVar6 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar6 = 0x85;
      puVar6 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar6 = 0xc0;
      puVar6 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar6 = 0xf;
      iVar4 = iVar2;
      uVar3 = uVar1;
      while (1 < uVar3) {
        puVar6 = (undefined *)(longlong)q;
        q = q + 1;
        *puVar6 = (char)iVar4;
        iVar4 = iVar4 >> 8;
        uVar3 = iVar4 + 1;
      }
      *(int *)(longlong)q = iVar8;
      iVar8 = q;
      q = q + 4;
      O(10);
    } while (C == 10);
    if (iVar8 != 0) {
      puVar6 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar6 = 0x85;
      puVar6 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar6 = 0xc0;
      puVar6 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar6 = 0xf;
      while (1 < uVar1) {
        puVar6 = (undefined *)(longlong)q;
        q = q + 1;
        *puVar6 = (char)iVar2;
        iVar2 = iVar2 >> 8;
        uVar1 = iVar2 + 1;
      }
      *(int *)(longlong)q = iVar8;
      iVar2 = q;
      iVar8 = q + 4;
      q = q + 5;
      *(undefined *)(longlong)iVar8 = 0xb8;
      *(uint *)(longlong)q = iVar5 ^ 1;
      iVar8 = q + 4;
      q = q + 5;
      *(undefined *)(longlong)iVar8 = 0xe9;
      *(undefined4 *)(longlong)q = 5;
      q = q + 4;
      while (iVar2 != 0) {
        piVar7 = (int *)(longlong)iVar2;
        iVar8 = q - iVar2;
        iVar2 = *piVar7;
        *piVar7 = iVar8 + -4;
      }
      puVar6 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar6 = 0xb8;
      *(int *)(longlong)q = iVar5;
      q = q + 4;
      return;
    }
  }
  return;
}



int O(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  
  O(10);
  if (C == 10) {
    iVar8 = 0;
    do {
      iVar5 = z;
      ad();
      uVar1 = iVar5 + 0x85;
      iVar2 = iVar5 + 0x84;
      puVar6 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar6 = 0x85;
      puVar6 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar6 = 0xc0;
      puVar6 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar6 = 0xf;
      iVar4 = iVar2;
      uVar3 = uVar1;
      while (1 < uVar3) {
        puVar6 = (undefined *)(longlong)q;
        q = q + 1;
        *puVar6 = (char)iVar4;
        iVar4 = iVar4 >> 8;
        uVar3 = iVar4 + 1;
      }
      *(int *)(longlong)q = iVar8;
      iVar8 = q;
      q = q + 4;
      O(10);
    } while (C == 10);
    if (iVar8 != 0) {
      puVar6 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar6 = 0x85;
      puVar6 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar6 = 0xc0;
      puVar6 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar6 = 0xf;
      while (1 < uVar1) {
        puVar6 = (undefined *)(longlong)q;
        q = q + 1;
        *puVar6 = (char)iVar2;
        iVar2 = iVar2 >> 8;
        uVar1 = iVar2 + 1;
      }
      *(int *)(longlong)q = iVar8;
      iVar2 = q;
      iVar8 = q + 4;
      q = q + 5;
      *(undefined *)(longlong)iVar8 = 0xb8;
      *(uint *)(longlong)q = iVar5 ^ 1;
      iVar8 = q + 4;
      q = q + 5;
      *(undefined *)(longlong)iVar8 = 0xe9;
      *(undefined4 *)(longlong)q = 5;
      q = q + 4;
      while (iVar2 != 0) {
        piVar7 = (int *)(longlong)iVar2;
        iVar8 = q - iVar2;
        iVar2 = *piVar7;
        *piVar7 = iVar8 + -4;
      }
      puVar6 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar6 = 0xb8;
      *(int *)(longlong)q = iVar5;
      q = q + 4;
      return q;
    }
  }
  return C;
}



int T(int j)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int e;
  undefined *puVar4;
  ulonglong uVar5;
  byte *pbVar6;
  undefined uVar7;
  int iVar8;
  int iVar9;
  
  iVar3 = C;
  e = z;
  iVar9 = v;
  iVar8 = d;
  if (d == 0x22) {
    puVar4 = (undefined *)(longlong)q;
    q = q + 1;
    *puVar4 = 0xb8;
    *(int *)(longlong)q = iVar9;
    uVar5 = (ulonglong)(uint)h;
    q = q + 4;
LAB_00102740:
    if ((int)uVar5 != 0x22) {
      while( true ) {
        uVar7 = (undefined)uVar5;
        if ((int)uVar5 == 0x5c) {
          if (L == 0) {
            h = fgetc((FILE *)(longlong)Q);
          }
          else {
            pbVar6 = (byte *)(longlong)L;
            h = ZEXT14(*pbVar6);
            L = L + 1;
            if (*pbVar6 == 2) {
              L = 0;
              h = W;
            }
          }
          uVar7 = (undefined)h;
          if (h == 0x6e) {
            h = 10;
            uVar7 = 10;
          }
        }
        puVar4 = (undefined *)(longlong)v;
        v = v + 1;
        *puVar4 = uVar7;
        if (L == 0) break;
        bVar2 = *(byte *)(longlong)L;
        uVar5 = (ulonglong)bVar2;
        h = ZEXT14(bVar2);
        L = L + 1;
        if (bVar2 != 2) goto LAB_00102740;
        L = 0;
        h = W;
        uVar5 = (ulonglong)(uint)W;
        if (W == 0x22) goto LAB_001027b4;
      }
      h = fgetc((FILE *)(longlong)Q);
      uVar5 = (ulonglong)(uint)h;
      goto LAB_00102740;
    }
LAB_001027b4:
    *(undefined *)(longlong)v = 0;
    v = v + 4U & 0xfffffffc;
    if (L == 0) {
      h = fgetc((FILE *)(longlong)Q);
    }
    else {
      pbVar6 = (byte *)(longlong)L;
      h = ZEXT14(*pbVar6);
      L = L + 1;
      if (*pbVar6 == 2) {
        L = 0;
        h = W;
      }
    }
    ad();
joined_r0x001028d0:
    if (d != 0x28) {
      return 0;
    }
LAB_001028d4:
    e = 1;
    puVar4 = (undefined *)(longlong)q;
    q = q + 1;
    *puVar4 = 0x50;
  }
  else {
    ad();
    if (iVar8 == 2) {
      puVar4 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar4 = 0xb8;
      *(int *)(longlong)q = e;
      q = q + 4;
      goto joined_r0x001028d0;
    }
    if (iVar3 == 2) {
      T(0);
      puVar4 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar4 = 0xb9;
      *(undefined4 *)(longlong)q = 0;
      q = q + 4;
      if (iVar8 == 0x21) {
        Z(e);
      }
      else {
        uVar1 = e + 1;
        while (1 < uVar1) {
          puVar4 = (undefined *)(longlong)q;
          q = q + 1;
          *puVar4 = (char)e;
          e = e >> 8;
          uVar1 = e + 1;
        }
      }
      goto joined_r0x001028d0;
    }
    if (iVar8 == 0x28) {
      O();
      ad();
      goto joined_r0x001028d0;
    }
    if (iVar8 == 0x2a) {
      ad();
      iVar8 = d;
      ad();
      ad();
      if (d == 0x2a) {
        ad();
        iVar8 = 0;
        ad();
        ad();
        ad();
        ad();
        T(0);
        if (d == 0x3d) goto LAB_00102cfc;
      }
      else {
        ad();
        T(0);
        if (d == 0x3d) {
LAB_00102cfc:
          ad();
          puVar4 = (undefined *)(longlong)q;
          q = q + 1;
          *puVar4 = 0x50;
          O();
          e = (uint)(iVar8 == 0x100) + 0x188;
          puVar4 = (undefined *)(longlong)q;
          q = q + 1;
          *puVar4 = 0x59;
          do {
            puVar4 = (undefined *)(longlong)q;
            q = q + 1;
            *puVar4 = (char)e;
            e = e >> 8;
          } while (e == 1);
        }
        else {
          if (iVar8 != 0) {
            if (iVar8 == 0x100) {
              uVar7 = 0x8b;
            }
            else {
              uVar7 = 0xbe;
              puVar4 = (undefined *)(longlong)q;
              q = q + 1;
              *puVar4 = 0xf;
            }
            puVar4 = (undefined *)(longlong)q;
            q = q + 1;
            *puVar4 = uVar7;
            q = q + 1;
          }
        }
      }
      goto joined_r0x001028d0;
    }
    if (iVar8 == 0x26) {
      e = *(int *)(longlong)d;
      uVar7 = 5;
      if (e < 0x200) {
        uVar7 = 0x85;
      }
      puVar4 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar4 = 0x8d;
      puVar4 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar4 = uVar7;
      *(int *)(longlong)q = e;
      q = q + 4;
      ad();
      goto joined_r0x001028d0;
    }
    e = *(int *)(longlong)iVar8;
    if (e == 0) {
      e = dlsym(0,(ulonglong)(uint)M);
    }
    if (((uint)(d == 0x3d) & j) == 0) {
      if (d != 0x28) {
        uVar7 = 5;
        if (e < 0x200) {
          uVar7 = 0x85;
        }
        puVar4 = (undefined *)(longlong)q;
        q = q + 1;
        *puVar4 = 0x8b;
        puVar4 = (undefined *)(longlong)q;
        q = q + 1;
        *puVar4 = uVar7;
        *(int *)(longlong)q = e;
        iVar9 = q + 4;
        if (C == 0xb) {
          q = q + 5;
          *(undefined *)(longlong)iVar9 = 0x83;
          puVar4 = (undefined *)(longlong)q;
          q = q + 1;
          *puVar4 = uVar7;
          *(int *)(longlong)q = e;
          q = q + 4;
          iVar9 = z;
          while (1 < iVar9 + 1U) {
            puVar4 = (undefined *)(longlong)q;
            q = q + 1;
            *puVar4 = (char)iVar9;
            iVar9 = iVar9 >> 8;
          }
          ad();
          iVar9 = q;
        }
        goto LAB_00102514;
      }
    }
    else {
      ad();
      O();
      uVar7 = 5;
      if (e < 0x200) {
        uVar7 = 0x85;
      }
      puVar4 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar4 = 0x89;
      puVar4 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar4 = uVar7;
      *(int *)(longlong)q = e;
      iVar9 = q + 4;
LAB_00102514:
      q = iVar9;
      if (d != 0x28) {
        return 0;
      }
    }
    if (e == 1) goto LAB_001028d4;
  }
  iVar9 = 0;
  puVar4 = (undefined *)(longlong)q;
  q = q + 1;
  *puVar4 = 0x81;
  puVar4 = (undefined *)(longlong)q;
  q = q + 1;
  *puVar4 = 0xec;
  *(undefined4 *)(longlong)q = 0;
  iVar3 = q;
  q = q + 4;
  ad();
  while (d != 0x29) {
    while( true ) {
      O();
      puVar4 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar4 = 0x89;
      puVar4 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar4 = 0x84;
      puVar4 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar4 = 0x24;
      *(int *)(longlong)q = iVar9;
      iVar9 = iVar9 + 4;
      q = q + 4;
      if (d != 0x2c) break;
      ad();
      if (d == 0x29) goto LAB_0010261c;
    }
  }
LAB_0010261c:
  *(int *)(longlong)iVar3 = iVar9;
  ad();
  if (e == 0) {
    e = *(int *)(longlong)(iVar8 + 4);
    puVar4 = (undefined *)(longlong)q;
    q = q + 1;
    *puVar4 = 0xe8;
    *(int *)(longlong)q = e;
    e = q + 4;
    *(int *)(longlong)(iVar8 + 4) = q;
    q = e;
  }
  else {
    if (e == 1) {
      puVar4 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar4 = 0xff;
      puVar4 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar4 = 0x94;
      puVar4 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar4 = 0x24;
      *(int *)(longlong)q = iVar9;
      iVar9 = iVar9 + 4;
      q = q + 4;
      goto LAB_00102678;
    }
    e = e - q;
    puVar4 = (undefined *)(longlong)q;
    q = q + 1;
    *puVar4 = 0xe8;
    *(int *)(longlong)q = e + -5;
    q = q + 4;
  }
  if (iVar9 == 0) {
    return 0;
  }
LAB_00102678:
  puVar4 = (undefined *)(longlong)q;
  q = q + 1;
  *puVar4 = 0x81;
  puVar4 = (undefined *)(longlong)q;
  q = q + 1;
  *puVar4 = 0xc4;
  *(int *)(longlong)q = iVar9;
  q = q + 4;
  return 0;
}



int w(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  
  O(10);
  if (C == 10) {
    iVar8 = 0;
    do {
      iVar5 = z;
      ad();
      uVar1 = iVar5 + 0x85;
      iVar2 = iVar5 + 0x84;
      puVar6 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar6 = 0x85;
      puVar6 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar6 = 0xc0;
      puVar6 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar6 = 0xf;
      iVar4 = iVar2;
      uVar3 = uVar1;
      while (1 < uVar3) {
        puVar6 = (undefined *)(longlong)q;
        q = q + 1;
        *puVar6 = (char)iVar4;
        iVar4 = iVar4 >> 8;
        uVar3 = iVar4 + 1;
      }
      *(int *)(longlong)q = iVar8;
      iVar8 = q;
      q = q + 4;
      O(10);
    } while (C == 10);
    if (iVar8 != 0) {
      puVar6 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar6 = 0x85;
      puVar6 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar6 = 0xc0;
      puVar6 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar6 = 0xf;
      while (1 < uVar1) {
        puVar6 = (undefined *)(longlong)q;
        q = q + 1;
        *puVar6 = (char)iVar2;
        iVar2 = iVar2 >> 8;
        uVar1 = iVar2 + 1;
      }
      *(int *)(longlong)q = iVar8;
      iVar2 = q;
      iVar8 = q + 4;
      q = q + 5;
      *(undefined *)(longlong)iVar8 = 0xb8;
      *(uint *)(longlong)q = iVar5 ^ 1;
      iVar8 = q + 4;
      q = q + 5;
      *(undefined *)(longlong)iVar8 = 0xe9;
      *(undefined4 *)(longlong)q = 5;
      q = q + 4;
      while (iVar2 != 0) {
        piVar7 = (int *)(longlong)iVar2;
        iVar8 = q - iVar2;
        iVar2 = *piVar7;
        *piVar7 = iVar8 + -4;
      }
      puVar6 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar6 = 0xb8;
      *(int *)(longlong)q = iVar5;
      q = q + 4;
      return q;
    }
  }
  return C;
}



void FUN_00102d74(void)

{
  undefined *puVar1;
  
  O();
  puVar1 = (undefined *)(longlong)q;
  q = q + 1;
  *puVar1 = 0x85;
  puVar1 = (undefined *)(longlong)q;
  q = q + 1;
  *puVar1 = 0xc0;
  puVar1 = (undefined *)(longlong)q;
  q = q + 1;
  *puVar1 = 0xf;
  puVar1 = (undefined *)(longlong)q;
  q = q + 1;
  *puVar1 = 0x84;
  *(undefined4 *)(longlong)q = 0;
  q = q + 4;
  return;
}



int U(void)

{
  int iVar1;
  undefined *puVar2;
  
  O();
  puVar2 = (undefined *)(longlong)q;
  q = q + 1;
  *puVar2 = 0x85;
  puVar2 = (undefined *)(longlong)q;
  q = q + 1;
  *puVar2 = 0xc0;
  puVar2 = (undefined *)(longlong)q;
  q = q + 1;
  *puVar2 = 0xf;
  puVar2 = (undefined *)(longlong)q;
  q = q + 1;
  *puVar2 = 0x84;
  *(undefined4 *)(longlong)q = 0;
  iVar1 = q;
  q = q + 4;
  return iVar1;
}



int ab(int j)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  
  bVar4 = j == 0;
LAB_00102e40:
  bVar5 = d == 0x100;
  bVar3 = bVar5 || bVar4 && d != -1;
  if (bVar5 || bVar4 && d != -1) {
    do {
      if (bVar5) {
        ad();
        do {
          if (j == 0) {
            do {
              if (d == 0x3b) goto LAB_001030a8;
              *(int *)(longlong)d = v;
              v = v + 4;
              ad();
            } while (d != 0x2c);
          }
          else {
            do {
              if (d == 0x3b) goto LAB_001030a8;
              iVar8 = -4 - G;
              G = G + 4;
              *(int *)(longlong)d = iVar8;
              ad();
            } while (d != 0x2c);
          }
          ad();
        } while( true );
      }
      iVar8 = *(int *)(longlong)(d + 4);
      while (iVar8 != 0) {
        piVar7 = (int *)(longlong)iVar8;
        iVar1 = q - iVar8;
        iVar8 = *piVar7;
        *piVar7 = iVar1 + -4;
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
          if (d == 0x29) goto LAB_00102f00;
        }
      }
LAB_00102f00:
      ad();
      G = 0;
      puVar6 = (undefined *)(longlong)q;
      K = 0;
      q = q + 1;
      *puVar6 = 0x55;
      puVar6 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar6 = 0x89;
      puVar6 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar6 = 0xe5;
      puVar6 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar6 = 0x81;
      puVar6 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar6 = 0xec;
      *(undefined4 *)(longlong)q = 0;
      iVar1 = q;
      q = q + 4;
      I(0);
      iVar8 = K;
      while (iVar8 != 0) {
        piVar7 = (int *)(longlong)iVar8;
        iVar2 = q - iVar8;
        iVar8 = *piVar7;
        *piVar7 = iVar2 + -4;
      }
      puVar6 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar6 = 0xc9;
      puVar6 = (undefined *)(longlong)q;
      q = q + 1;
      *puVar6 = 0xc3;
      *(int *)(longlong)iVar1 = G;
      bVar5 = d == 0x100;
      bVar3 = bVar5 || bVar4 && d != -1;
    } while (bVar3);
  }
  return (int)(uint)bVar3;
LAB_001030a8:
  ad();
  goto LAB_00102e40;
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
    O();
    puVar2 = (undefined *)(longlong)q;
    q = q + 1;
    *puVar2 = 0x85;
    puVar2 = (undefined *)(longlong)q;
    q = q + 1;
    *puVar2 = 0xc0;
    puVar2 = (undefined *)(longlong)q;
    q = q + 1;
    *puVar2 = 0xf;
    puVar2 = (undefined *)(longlong)q;
    q = q + 1;
    *puVar2 = 0x84;
    *(undefined4 *)(longlong)q = 0;
    iVar1 = q;
    q = q + 4;
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
        O();
        puVar2 = (undefined *)(longlong)q;
        q = q + 1;
        *puVar2 = 0x85;
        puVar2 = (undefined *)(longlong)q;
        q = q + 1;
        *puVar2 = 0xc0;
        puVar2 = (undefined *)(longlong)q;
        q = q + 1;
        *puVar2 = 0xf;
        puVar2 = (undefined *)(longlong)q;
        q = q + 1;
        *puVar2 = 0x84;
        *(undefined4 *)(longlong)q = 0;
        m = q;
        q = q + 4;
      }
      else {
        if (d != 0x3b) {
          O();
        }
        ad();
        iVar5 = q;
        m = 0;
        if (d != 0x3b) {
          O();
          puVar2 = (undefined *)(longlong)q;
          q = q + 1;
          *puVar2 = 0x85;
          puVar2 = (undefined *)(longlong)q;
          q = q + 1;
          *puVar2 = 0xc0;
          puVar2 = (undefined *)(longlong)q;
          q = q + 1;
          *puVar2 = 0xf;
          puVar2 = (undefined *)(longlong)q;
          q = q + 1;
          *puVar2 = 0x84;
          *(undefined4 *)(longlong)q = 0;
          m = q;
          q = q + 4;
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
          O();
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
            O();
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
              O();
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


