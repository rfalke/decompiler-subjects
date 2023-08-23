typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef long    sqword;
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
    char _unused2[20];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct _IO_FILE FILE;

typedef ulong sizetype;


// WARNING! conflicting data type names: /DWARF/__off64_t - /types.h/__off64_t


// WARNING! conflicting data type names: /DWARF/libio.h/_IO_marker - /libio.h/_IO_marker


// WARNING! conflicting data type names: /DWARF/libio.h/_IO_FILE - /stdio.h/_IO_FILE

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
    DT_GNU_XHASH=1879047924,
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

typedef struct NoteAbiTag NoteAbiTag, *PNoteAbiTag;

struct NoteAbiTag {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    dword abiType; // 0 == Linux
    dword requiredKernelVersion[3]; // Major.minor.patch
};

typedef struct GnuBuildId GnuBuildId, *PGnuBuildId;

struct GnuBuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    byte hash[20];
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



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = fopen(__filename,__modes);
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

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



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fgetc(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fgetc(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

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



// WARNING: Unknown calling convention -- yet parameter storage is locked

void abort(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = strtol(__nptr,__endptr,__base);
  return lVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = strstr(__haystack,__needle);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int isalnum(int param_1)

{
  int iVar1;
  
  iVar1 = isalnum(param_1);
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention

int main(int g,int e)

{
  int iVar1;
  FILE *pFVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  Q = (int)_stdin;
  if (1 < g) {
    e = e + 4;
    pFVar2 = fopen((char *)(long)*(int *)(long)e,"r");
    Q = (int)pFVar2;
  }
  pvVar3 = calloc(1,99999);
  R = (int)pvVar3;
  puVar4 = (undefined8 *)(long)R;
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
  iVar1 = (*(code *)(long)*(int *)(long)(P + 0x250))(g + -1,e);
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



// WARNING: Removing unreachable block (ram,0x00100f80)
// WARNING: Removing unreachable block (ram,0x00100f8c)

void frame_dummy(void)

{
  register_tm_clones();
  return;
}



// WARNING: Unknown calling convention

int E(int e)

{
  undefined *puVar1;
  int in_w3;
  
  puVar1 = (undefined *)(long)D;
  D = D + 1;
  *puVar1 = (char)e;
  return in_w3;
}



// WARNING: Unknown calling convention

int o(void)

{
  byte *pbVar1;
  
  if (L == 0) {
    h = fgetc((FILE *)(long)Q);
    return h;
  }
  pbVar1 = (byte *)(long)L;
  L = L + 1;
  h = (uint)*pbVar1;
  if (*pbVar1 != 2) {
    return 0x11408c;
  }
  L = 0;
  h = W;
  return W;
}



// WARNING: Unknown calling convention

int X(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = h;
  uVar2 = isalnum(h);
  return iVar1 == 0x5f | uVar2;
}



// WARNING: Unknown calling convention

int Y(void)

{
  if (h == 0x5c) {
    if (L == 0) {
      h = fgetc((FILE *)(long)Q);
    }
    else {
      h = (int)*(byte *)(long)L;
      L = L + 1;
      if (h == 2) {
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



// WARNING: Unknown calling convention

int ad(void)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  byte *pbVar5;
  char *pcVar6;
  long lVar7;
  undefined *puVar8;
  int iVar9;
  int e;
  int m;
  int j;
  int iVar10;
  
  uVar4 = h;
LAB_00101168:
  do {
    h = uVar4;
    uVar2 = h;
    uVar4 = isspace(h);
    bVar3 = uVar2 == 0x23;
    for (uVar4 = bVar3 | uVar4; uVar4 != 0; uVar4 = bVar3 | uVar4) {
      if (bVar3) {
        if (L == 0) {
          h = fgetc((FILE *)(long)Q);
          ad();
        }
        else {
          pbVar5 = (byte *)(long)L;
          h = (uint)*pbVar5;
          L = L + 1;
          if (*pbVar5 == 2) {
            L = 0;
            h = W;
          }
          ad();
        }
        if (d == 0x218) {
          ad();
          puVar8 = (undefined *)(long)D;
          D = D + 1;
          *puVar8 = 0x20;
          *(undefined4 *)(long)d = 1;
          *(int *)(long)(d + 4) = D;
        }
LAB_00101434:
        if (h != 10) {
          while( true ) {
            puVar8 = (undefined *)(long)D;
            D = D + 1;
            *puVar8 = (char)h;
            if (L == 0) break;
            h = (int)*(byte *)(long)L;
            L = L + 1;
            if (h != 2) goto LAB_00101434;
            h = W;
            L = 0;
            if (W == 10) goto LAB_00101490;
          }
          h = fgetc((FILE *)(long)Q);
          goto LAB_00101434;
        }
LAB_00101490:
        puVar8 = (undefined *)(long)D;
        D = D + 1;
        *puVar8 = (char)h;
        puVar8 = (undefined *)(long)D;
        D = D + 1;
        *puVar8 = 2;
      }
      uVar2 = W;
      if (L == 0) {
        uVar4 = fgetc((FILE *)(long)Q);
        goto LAB_00101168;
      }
      pbVar5 = (byte *)(long)L;
      uVar4 = (uint)*pbVar5;
      L = L + 1;
      if (*pbVar5 != 2) goto LAB_00101168;
      L = 0;
      h = W;
      uVar4 = isspace(W);
      bVar3 = uVar2 == 0x23;
    }
    C = 0;
    d = uVar2;
    uVar4 = isalnum(uVar2);
    if ((uVar2 == 0x5f | uVar4) == 0) {
      if (L == 0) {
        h = fgetc((FILE *)(long)Q);
        uVar2 = d;
      }
      else {
        h = (int)*(byte *)(long)L;
        L = L + 1;
        if (h == 2) {
          L = 0;
          h = W;
        }
      }
      if (uVar2 == 0x27) {
        d = 2;
        if (h == 0x5c) {
          if (L == 0) {
            h = fgetc((FILE *)(long)Q);
LAB_00101a90:
            if (h == 0x6e) {
LAB_00101a98:
              h = 10;
            }
            goto LAB_0010177c;
          }
          h = (int)*(byte *)(long)L;
          L = L + 1;
          if (h != 2) goto LAB_00101a90;
          L = 0;
          if (W == 0x6e) goto LAB_00101a98;
          z = W;
LAB_00101a40:
          h = z;
          uVar4 = fgetc((FILE *)(long)Q);
        }
        else {
LAB_0010177c:
          z = h;
          if (L == 0) goto LAB_00101a40;
          pbVar5 = (byte *)(long)L;
          uVar4 = (uint)*pbVar5;
          L = L + 1;
          if (*pbVar5 == 2) {
            L = 0;
            h = W;
            goto LAB_001019e0;
          }
        }
        h = uVar4;
        if (L != 0) {
          if (*(byte *)(long)L != 2) {
            h = (uint)*(byte *)(long)L;
            L = L + 1;
            return 0;
          }
          L = 0;
          h = W;
          return 0;
        }
LAB_001019e0:
        h = fgetc((FILE *)(long)Q);
        return 0;
      }
      if (uVar2 != 0x2f || h != 0x2a) {
        iVar10 = 0x1036d0;
        break;
      }
      if (L == 0) {
        h = fgetc((FILE *)(long)Q);
      }
      else {
        h = (int)*(byte *)(long)L;
        L = L + 1;
        if (h == 2) {
          L = 0;
          h = W;
        }
      }
      do {
        if (h == 0) goto LAB_00101664;
joined_r0x001015fc:
        if (h != 0x2a) {
          if (L != 0) goto code_r0x00101604;
          goto LAB_001016bc;
        }
        if (L == 0) {
LAB_001016d8:
          h = fgetc((FILE *)(long)Q);
        }
        else {
          h = (int)*(byte *)(long)L;
          L = L + 1;
          if (h == 2) {
            L = 0;
            h = W;
          }
        }
      } while (h != 0x2f);
      h = 0;
LAB_00101664:
      if (L == 0) {
        uVar4 = fgetc((FILE *)(long)Q);
      }
      else {
        pbVar5 = (byte *)(long)L;
        uVar4 = (uint)*pbVar5;
        L = L + 1;
        if (*pbVar5 == 2) {
          L = 0;
          h = W;
          uVar4 = h;
        }
      }
      goto LAB_00101168;
    }
    puVar8 = (undefined *)(long)D;
    D = D + 1;
    *puVar8 = 0x20;
    M = D;
LAB_00101250:
    iVar10 = h;
    uVar4 = isalnum(h);
    if ((iVar10 == 0x5f | uVar4) != 0) {
      while( true ) {
        puVar8 = (undefined *)(long)D;
        D = D + 1;
        *puVar8 = (char)iVar10;
        iVar10 = W;
        if (L == 0) break;
        h = (int)*(byte *)(long)L;
        L = L + 1;
        if (h != 2) goto LAB_00101250;
        L = 0;
        h = W;
        uVar4 = isalnum(W);
        if ((iVar10 == 0x5f | uVar4) == 0) goto LAB_001012d0;
      }
      h = fgetc((FILE *)(long)Q);
      goto LAB_00101250;
    }
LAB_001012d0:
    if (d - 0x30U < 10) {
      lVar7 = strtol((char *)(ulong)(uint)M,(char **)0x0,0);
      d = 2;
      z = (int)lVar7;
      return 0;
    }
    *(undefined *)(long)D = 0x20;
    iVar10 = R;
    pcVar6 = strstr((char *)(long)R,(char *)(long)(M + -1));
    d = (int)pcVar6 - iVar10;
    *(undefined *)(long)D = 0;
    d = (d + 0x20) * 8;
    if (d < 0x219) {
      return 0;
    }
    d = d + P;
    if (*(int *)(long)d != 1) {
      return 0;
    }
    L = *(int *)(long)(d + 4);
    W = h;
    if (L == 0) {
      uVar4 = fgetc((FILE *)(long)Q);
    }
    else {
      pbVar5 = (byte *)(long)L;
      uVar4 = (uint)*pbVar5;
      L = L + 1;
      if (*pbVar5 == 2) {
        L = 0;
        uVar4 = h;
      }
    }
  } while( true );
LAB_001018cc:
  j = (int)*(byte *)(long)iVar10;
  if (j == 0) {
    return 0;
  }
  bVar1 = *(byte *)(long)(iVar10 + 1);
  z = 0;
  C = *(byte *)(long)(iVar10 + 2) - 0x62;
  uVar4 = (uint)bVar1;
  if (-1 < C) {
    iVar10 = iVar10 + 3;
    if ((uVar4 == 0x40 || uVar4 == h) && j == uVar2) goto LAB_00101944;
    goto LAB_001018cc;
  }
  z = 0;
  lVar7 = (long)(iVar10 + 4);
  do {
    iVar9 = (int)lVar7;
    z = C + z * 0x40 + 0x40;
    C = *(byte *)(lVar7 + -1) - 0x62;
    lVar7 = lVar7 + 1;
  } while (C < 0);
  bVar3 = false;
  if (bVar1 == 0x40 || (uint)bVar1 == h) {
    bVar3 = *(byte *)(long)iVar10 == uVar2;
  }
  iVar10 = iVar9;
  if (bVar3) {
LAB_00101944:
    if (uVar4 != h) {
      return 0;
    }
    o();
    d = 1;
    return 0;
  }
  goto LAB_001018cc;
code_r0x00101604:
  h = (int)*(byte *)(long)L;
  L = L + 1;
  if (h == 2) {
    L = 0;
    h = W;
    if (W == 0x2a) goto LAB_001016d8;
LAB_001016bc:
    h = fgetc((FILE *)(long)Q);
  }
  goto joined_r0x001015fc;
}



// WARNING: Unknown calling convention

int ae(int g)

{
  uint uVar1;
  undefined *puVar2;
  
  uVar1 = g + 1;
  while (1 < uVar1) {
    puVar2 = (undefined *)(long)q;
    q = q + 1;
    *puVar2 = (char)g;
    g = g >> 8;
    uVar1 = g + 1;
  }
  return 0;
}



// WARNING: Unknown calling convention

int A(int e)

{
  int iVar1;
  int g;
  int *piVar2;
  
  if (e != 0) {
    do {
      piVar2 = (int *)(long)e;
      iVar1 = q - e;
      e = *piVar2;
      *piVar2 = iVar1 + -4;
    } while (e != 0);
  }
  return 0;
}



// WARNING: Unknown calling convention

int s(int g,int e)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  
  uVar1 = g + 1;
  while (1 < uVar1) {
    puVar3 = (undefined *)(long)q;
    q = q + 1;
    *puVar3 = (char)g;
    g = g >> 8;
    uVar1 = g + 1;
  }
  *(int *)(long)q = e;
  iVar2 = q;
  q = q + 4;
  return iVar2;
}



// WARNING: Unknown calling convention

int H(int e)

{
  undefined *puVar1;
  int in_w3;
  
  puVar1 = (undefined *)(long)q;
  q = q + 1;
  *puVar1 = 0xb8;
  *(int *)(long)q = e;
  q = q + 4;
  return in_w3;
}



// WARNING: Unknown calling convention

int B(int e)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)(long)q;
  q = q + 1;
  *puVar2 = 0xe9;
  *(int *)(long)q = e;
  iVar1 = q;
  q = q + 4;
  return iVar1;
}



// WARNING: Unknown calling convention

int S(int j,int e)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = j + 0x84;
  puVar3 = (undefined *)(long)q;
  q = q + 1;
  *puVar3 = 0x85;
  puVar3 = (undefined *)(long)q;
  q = q + 1;
  *puVar3 = 0xc0;
  puVar3 = (undefined *)(long)q;
  q = q + 1;
  *puVar3 = 0xf;
  uVar1 = j + 0x85;
  while (1 < uVar1) {
    puVar3 = (undefined *)(long)q;
    q = q + 1;
    *puVar3 = (char)iVar2;
    iVar2 = iVar2 >> 8;
    uVar1 = iVar2 + 1;
  }
  *(int *)(long)q = e;
  iVar2 = q;
  q = q + 4;
  return iVar2;
}



// WARNING: Unknown calling convention

int Z(int e)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  
  iVar2 = e + 0x90;
  puVar4 = (undefined *)(long)q;
  q = q + 1;
  *puVar4 = 0x39;
  puVar4 = (undefined *)(long)q;
  q = q + 1;
  *puVar4 = 0xc1;
  puVar4 = (undefined *)(long)q;
  q = q + 1;
  *puVar4 = 0xb8;
  *(undefined4 *)(long)q = 0;
  iVar3 = q + 4;
  q = q + 5;
  *(undefined *)(long)iVar3 = 0xf;
  uVar1 = e + 0x91;
  while (1 < uVar1) {
    puVar4 = (undefined *)(long)q;
    q = q + 1;
    *puVar4 = (char)iVar2;
    iVar2 = iVar2 >> 8;
    uVar1 = iVar2 + 1;
  }
  puVar4 = (undefined *)(long)q;
  q = q + 1;
  *puVar4 = 0xc0;
  return 0;
}



// WARNING: Unknown calling convention

int N(int j,int e)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = j + 0x83;
  uVar1 = j + 0x84;
  while (1 < uVar1) {
    puVar3 = (undefined *)(long)q;
    q = q + 1;
    *puVar3 = (char)iVar2;
    iVar2 = iVar2 >> 8;
    uVar1 = iVar2 + 1;
  }
  iVar2 = 5;
  if (e < 0x200) {
    iVar2 = 0x85;
  }
  puVar3 = (undefined *)(long)q;
  q = q + 1;
  *puVar3 = (char)iVar2;
  *(int *)(long)q = e;
  q = q + 4;
  return 0x85;
}



// WARNING: Unknown calling convention

int O(int j)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int g_1;
  int iVar6;
  undefined *puVar7;
  int *piVar8;
  uint unaff_w20;
  int e;
  int g;
  int iVar9;
  
  if (j == 1) {
    iVar6 = T(1);
    return iVar6;
  }
  iVar6 = j + -1;
  iVar9 = 0;
  O(iVar6);
  while (iVar1 = z, iVar3 = d, iVar6 == C) {
    ad();
    unaff_w20 = iVar1;
    if (iVar6 < 9) {
      puVar7 = (undefined *)(long)q;
      q = q + 1;
      *puVar7 = 0x50;
      O(iVar6);
      puVar7 = (undefined *)(long)q;
      q = q + 1;
      *puVar7 = 0x59;
      if (j - 5U < 2) {
        Z(iVar1);
      }
      else {
        for (; 1 < iVar1 + 1U; iVar1 = iVar1 >> 8) {
          puVar7 = (undefined *)(long)q;
          q = q + 1;
          *puVar7 = (char)iVar1;
        }
        if (iVar3 == 0x25) {
          puVar7 = (undefined *)(long)q;
          q = q + 1;
          *puVar7 = 0x92;
        }
      }
    }
    else {
      uVar2 = iVar1 + 0x85;
      iVar1 = iVar1 + 0x84;
      puVar7 = (undefined *)(long)q;
      q = q + 1;
      *puVar7 = 0x85;
      puVar7 = (undefined *)(long)q;
      q = q + 1;
      *puVar7 = 0xc0;
      puVar7 = (undefined *)(long)q;
      q = q + 1;
      *puVar7 = 0xf;
      while (1 < uVar2) {
        puVar7 = (undefined *)(long)q;
        q = q + 1;
        *puVar7 = (char)iVar1;
        iVar1 = iVar1 >> 8;
        uVar2 = iVar1 + 1;
      }
      *(int *)(long)q = iVar9;
      iVar9 = q;
      q = q + 4;
      O(iVar6);
    }
  }
  bVar5 = iVar9 != 0;
  bVar4 = false;
  if (bVar5) {
    bVar4 = j + -9 < 0;
  }
  if ((bVar5 && iVar6 != 8) && bVar4 == (bVar5 && SBORROW4(iVar6,8))) {
    iVar6 = unaff_w20 + 0x84;
    puVar7 = (undefined *)(long)q;
    q = q + 1;
    *puVar7 = 0x85;
    puVar7 = (undefined *)(long)q;
    q = q + 1;
    *puVar7 = 0xc0;
    puVar7 = (undefined *)(long)q;
    q = q + 1;
    *puVar7 = 0xf;
    uVar2 = unaff_w20 + 0x85;
    while (1 < uVar2) {
      puVar7 = (undefined *)(long)q;
      q = q + 1;
      *puVar7 = (char)iVar6;
      iVar6 = iVar6 >> 8;
      uVar2 = iVar6 + 1;
    }
    *(int *)(long)q = iVar9;
    iVar9 = q;
    iVar6 = q + 4;
    q = q + 5;
    *(undefined *)(long)iVar6 = 0xb8;
    *(uint *)(long)q = unaff_w20 ^ 1;
    iVar6 = q + 4;
    q = q + 5;
    *(undefined *)(long)iVar6 = 0xe9;
    *(undefined4 *)(long)q = 5;
    q = q + 4;
    while (iVar9 != 0) {
      piVar8 = (int *)(long)iVar9;
      iVar6 = q - iVar9;
      iVar9 = *piVar8;
      *piVar8 = iVar6 + -4;
    }
    puVar7 = (undefined *)(long)q;
    q = q + 1;
    *puVar7 = 0xb8;
    *(uint *)(long)q = unaff_w20;
    q = q + 4;
    return q;
  }
  return C;
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
      puVar6 = (undefined *)(long)q;
      q = q + 1;
      *puVar6 = 0x85;
      puVar6 = (undefined *)(long)q;
      q = q + 1;
      *puVar6 = 0xc0;
      puVar6 = (undefined *)(long)q;
      q = q + 1;
      *puVar6 = 0xf;
      iVar4 = iVar2;
      uVar3 = uVar1;
      while (1 < uVar3) {
        puVar6 = (undefined *)(long)q;
        q = q + 1;
        *puVar6 = (char)iVar4;
        iVar4 = iVar4 >> 8;
        uVar3 = iVar4 + 1;
      }
      *(int *)(long)q = iVar8;
      iVar8 = q;
      q = q + 4;
      O(10);
    } while (C == 10);
    if (iVar8 != 0) {
      puVar6 = (undefined *)(long)q;
      q = q + 1;
      *puVar6 = 0x85;
      puVar6 = (undefined *)(long)q;
      q = q + 1;
      *puVar6 = 0xc0;
      puVar6 = (undefined *)(long)q;
      q = q + 1;
      *puVar6 = 0xf;
      while (1 < uVar1) {
        puVar6 = (undefined *)(long)q;
        q = q + 1;
        *puVar6 = (char)iVar2;
        iVar2 = iVar2 >> 8;
        uVar1 = iVar2 + 1;
      }
      *(int *)(long)q = iVar8;
      iVar2 = q;
      iVar8 = q + 4;
      q = q + 5;
      *(undefined *)(long)iVar8 = 0xb8;
      *(uint *)(long)q = iVar5 ^ 1;
      iVar8 = q + 4;
      q = q + 5;
      *(undefined *)(long)iVar8 = 0xe9;
      *(undefined4 *)(long)q = 5;
      q = q + 4;
      while (iVar2 != 0) {
        piVar7 = (int *)(long)iVar2;
        iVar8 = q - iVar2;
        iVar2 = *piVar7;
        *piVar7 = iVar8 + -4;
      }
      puVar6 = (undefined *)(long)q;
      q = q + 1;
      *puVar6 = 0xb8;
      *(int *)(long)q = iVar5;
      q = q + 4;
      return;
    }
  }
  return;
}



int O(int j)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int g_1;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  int e;
  int g;
  
  O(10);
  if (C == 10) {
    iVar8 = 0;
    do {
      iVar5 = z;
      ad();
      uVar1 = iVar5 + 0x85;
      iVar2 = iVar5 + 0x84;
      puVar6 = (undefined *)(long)q;
      q = q + 1;
      *puVar6 = 0x85;
      puVar6 = (undefined *)(long)q;
      q = q + 1;
      *puVar6 = 0xc0;
      puVar6 = (undefined *)(long)q;
      q = q + 1;
      *puVar6 = 0xf;
      iVar4 = iVar2;
      uVar3 = uVar1;
      while (1 < uVar3) {
        puVar6 = (undefined *)(long)q;
        q = q + 1;
        *puVar6 = (char)iVar4;
        iVar4 = iVar4 >> 8;
        uVar3 = iVar4 + 1;
      }
      *(int *)(long)q = iVar8;
      iVar8 = q;
      q = q + 4;
      O(10);
    } while (C == 10);
    if (iVar8 != 0) {
      puVar6 = (undefined *)(long)q;
      q = q + 1;
      *puVar6 = 0x85;
      puVar6 = (undefined *)(long)q;
      q = q + 1;
      *puVar6 = 0xc0;
      puVar6 = (undefined *)(long)q;
      q = q + 1;
      *puVar6 = 0xf;
      while (1 < uVar1) {
        puVar6 = (undefined *)(long)q;
        q = q + 1;
        *puVar6 = (char)iVar2;
        iVar2 = iVar2 >> 8;
        uVar1 = iVar2 + 1;
      }
      *(int *)(long)q = iVar8;
      iVar2 = q;
      iVar8 = q + 4;
      q = q + 5;
      *(undefined *)(long)iVar8 = 0xb8;
      *(uint *)(long)q = iVar5 ^ 1;
      iVar8 = q + 4;
      q = q + 5;
      *(undefined *)(long)iVar8 = 0xe9;
      *(undefined4 *)(long)q = 5;
      q = q + 4;
      while (iVar2 != 0) {
        piVar7 = (int *)(long)iVar2;
        iVar8 = q - iVar2;
        iVar2 = *piVar7;
        *piVar7 = iVar8 + -4;
      }
      puVar6 = (undefined *)(long)q;
      q = q + 1;
      *puVar6 = 0xb8;
      *(int *)(long)q = iVar5;
      q = q + 4;
      return q;
    }
  }
  return C;
}



// WARNING: Unknown calling convention

int T(int j)

{
  uint uVar1;
  int iVar2;
  undefined uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int m;
  int e;
  int iVar8;
  int aa;
  
  iVar5 = C;
  iVar6 = z;
  iVar4 = v;
  iVar8 = d;
  if (d == 0x22) {
    puVar7 = (undefined *)(long)q;
    q = q + 1;
    *puVar7 = 0xb8;
    *(int *)(long)q = iVar4;
    q = q + 4;
LAB_00102740:
    if (h != 0x22) {
      do {
        if (h == 0x5c) {
          if (L == 0) {
            h = fgetc((FILE *)(long)Q);
          }
          else {
            h = (int)*(byte *)(long)L;
            L = L + 1;
            if (h == 2) {
              L = 0;
              h = W;
            }
          }
          if (h != 0x6e) goto LAB_00102750;
          h = 10;
          uVar3 = 10;
        }
        else {
LAB_00102750:
          uVar3 = (undefined)h;
        }
        puVar7 = (undefined *)(long)v;
        v = v + 1;
        *puVar7 = uVar3;
        if (L == 0) {
          h = fgetc((FILE *)(long)Q);
          goto LAB_00102740;
        }
        h = (int)*(byte *)(long)L;
        L = L + 1;
        if (h != 2) goto LAB_00102740;
        L = 0;
        h = W;
        if (W == 0x22) break;
      } while( true );
    }
    *(undefined *)(long)v = 0;
    v = v + 4U & 0xfffffffc;
    if (L == 0) {
      h = fgetc((FILE *)(long)Q);
    }
    else {
      h = (int)*(byte *)(long)L;
      L = L + 1;
      if (h == 2) {
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
    iVar6 = 1;
    puVar7 = (undefined *)(long)q;
    q = q + 1;
    *puVar7 = 0x50;
  }
  else {
    iVar4 = ad();
    if (iVar8 == 2) {
      puVar7 = (undefined *)(long)q;
      q = q + 1;
      *puVar7 = 0xb8;
      *(int *)(long)q = iVar6;
      q = q + 4;
      goto joined_r0x001028d0;
    }
    if (iVar5 == 2) {
      T(0);
      puVar7 = (undefined *)(long)q;
      q = q + 1;
      *puVar7 = 0xb9;
      *(undefined4 *)(long)q = 0;
      q = q + 4;
      if (iVar8 == 0x21) {
        Z(iVar6);
      }
      else {
        uVar1 = iVar6 + 1;
        while (1 < uVar1) {
          puVar7 = (undefined *)(long)q;
          q = q + 1;
          *puVar7 = (char)iVar6;
          iVar6 = iVar6 >> 8;
          uVar1 = iVar6 + 1;
        }
      }
      goto joined_r0x001028d0;
    }
    if (iVar8 == 0x28) {
      O(iVar4);
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
          iVar6 = q;
          puVar7 = (undefined *)(long)q;
          q = q + 1;
          *puVar7 = 0x50;
          O(iVar6);
          iVar6 = (iVar8 == 0x100) + 0x188;
          puVar7 = (undefined *)(long)q;
          q = q + 1;
          *puVar7 = 0x59;
          do {
            puVar7 = (undefined *)(long)q;
            q = q + 1;
            *puVar7 = (char)iVar6;
            iVar6 = iVar6 >> 8;
          } while (iVar6 == 1);
        }
        else if (iVar8 != 0) {
          if (iVar8 == 0x100) {
            uVar3 = 0x8b;
          }
          else {
            uVar3 = 0xbe;
            puVar7 = (undefined *)(long)q;
            q = q + 1;
            *puVar7 = 0xf;
          }
          puVar7 = (undefined *)(long)q;
          q = q + 1;
          *puVar7 = uVar3;
          q = q + 1;
        }
      }
      goto joined_r0x001028d0;
    }
    if (iVar8 == 0x26) {
      iVar6 = *(int *)(long)d;
      uVar3 = 5;
      if (iVar6 < 0x200) {
        uVar3 = 0x85;
      }
      puVar7 = (undefined *)(long)q;
      q = q + 1;
      *puVar7 = 0x8d;
      puVar7 = (undefined *)(long)q;
      q = q + 1;
      *puVar7 = uVar3;
      *(int *)(long)q = iVar6;
      q = q + 4;
      ad();
      goto joined_r0x001028d0;
    }
    iVar6 = *(int *)(long)iVar8;
    if (iVar6 == 0) {
      iVar6 = dlsym(0,M);
    }
    if (((uint)(d == 0x3d) & j) == 0) {
      if (d != 0x28) {
        uVar3 = 5;
        if (iVar6 < 0x200) {
          uVar3 = 0x85;
        }
        puVar7 = (undefined *)(long)q;
        q = q + 1;
        *puVar7 = 0x8b;
        puVar7 = (undefined *)(long)q;
        q = q + 1;
        *puVar7 = uVar3;
        *(int *)(long)q = iVar6;
        iVar4 = q + 4;
        if (C == 0xb) {
          q = q + 5;
          *(undefined *)(long)iVar4 = 0x83;
          puVar7 = (undefined *)(long)q;
          q = q + 1;
          *puVar7 = uVar3;
          *(int *)(long)q = iVar6;
          q = q + 4;
          for (iVar4 = z; 1 < iVar4 + 1U; iVar4 = iVar4 >> 8) {
            puVar7 = (undefined *)(long)q;
            q = q + 1;
            *puVar7 = (char)iVar4;
          }
          ad();
          iVar4 = q;
        }
        goto LAB_00102514;
      }
    }
    else {
      iVar4 = ad();
      O(iVar4);
      uVar3 = 5;
      if (iVar6 < 0x200) {
        uVar3 = 0x85;
      }
      puVar7 = (undefined *)(long)q;
      q = q + 1;
      *puVar7 = 0x89;
      puVar7 = (undefined *)(long)q;
      q = q + 1;
      *puVar7 = uVar3;
      *(int *)(long)q = iVar6;
      iVar4 = q + 4;
LAB_00102514:
      q = iVar4;
      if (d != 0x28) {
        return 0;
      }
    }
    if (iVar6 == 1) goto LAB_001028d4;
  }
  iVar4 = 0;
  puVar7 = (undefined *)(long)q;
  q = q + 1;
  *puVar7 = 0x81;
  puVar7 = (undefined *)(long)q;
  q = q + 1;
  *puVar7 = 0xec;
  *(undefined4 *)(long)q = 0;
  iVar2 = q;
  q = q + 4;
  ad();
  iVar5 = d;
  while (d != 0x29) {
    while( true ) {
      O(iVar5);
      puVar7 = (undefined *)(long)q;
      q = q + 1;
      *puVar7 = 0x89;
      puVar7 = (undefined *)(long)q;
      q = q + 1;
      *puVar7 = 0x84;
      puVar7 = (undefined *)(long)q;
      q = q + 1;
      *puVar7 = 0x24;
      *(int *)(long)q = iVar4;
      iVar4 = iVar4 + 4;
      q = q + 4;
      iVar5 = q;
      if (d != 0x2c) break;
      iVar5 = ad();
      if (d == 0x29) goto LAB_0010261c;
    }
  }
LAB_0010261c:
  *(int *)(long)iVar2 = iVar4;
  ad();
  if (iVar6 == 0) {
    iVar6 = *(int *)(long)(iVar8 + 4);
    puVar7 = (undefined *)(long)q;
    q = q + 1;
    *puVar7 = 0xe8;
    *(int *)(long)q = iVar6;
    iVar6 = q + 4;
    *(int *)(long)(iVar8 + 4) = q;
    q = iVar6;
  }
  else {
    if (iVar6 == 1) {
      puVar7 = (undefined *)(long)q;
      q = q + 1;
      *puVar7 = 0xff;
      puVar7 = (undefined *)(long)q;
      q = q + 1;
      *puVar7 = 0x94;
      puVar7 = (undefined *)(long)q;
      q = q + 1;
      *puVar7 = 0x24;
      *(int *)(long)q = iVar4;
      iVar4 = iVar4 + 4;
      q = q + 4;
      goto LAB_00102678;
    }
    iVar6 = iVar6 - q;
    puVar7 = (undefined *)(long)q;
    q = q + 1;
    *puVar7 = 0xe8;
    *(int *)(long)q = iVar6 + -5;
    q = q + 4;
  }
  if (iVar4 == 0) {
    return 0;
  }
LAB_00102678:
  puVar7 = (undefined *)(long)q;
  q = q + 1;
  *puVar7 = 0x81;
  puVar7 = (undefined *)(long)q;
  q = q + 1;
  *puVar7 = 0xc4;
  *(int *)(long)q = iVar4;
  q = q + 4;
  return 0;
}



// WARNING: Unknown calling convention

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
      puVar6 = (undefined *)(long)q;
      q = q + 1;
      *puVar6 = 0x85;
      puVar6 = (undefined *)(long)q;
      q = q + 1;
      *puVar6 = 0xc0;
      puVar6 = (undefined *)(long)q;
      q = q + 1;
      *puVar6 = 0xf;
      iVar4 = iVar2;
      uVar3 = uVar1;
      while (1 < uVar3) {
        puVar6 = (undefined *)(long)q;
        q = q + 1;
        *puVar6 = (char)iVar4;
        iVar4 = iVar4 >> 8;
        uVar3 = iVar4 + 1;
      }
      *(int *)(long)q = iVar8;
      iVar8 = q;
      q = q + 4;
      O(10);
    } while (C == 10);
    if (iVar8 != 0) {
      puVar6 = (undefined *)(long)q;
      q = q + 1;
      *puVar6 = 0x85;
      puVar6 = (undefined *)(long)q;
      q = q + 1;
      *puVar6 = 0xc0;
      puVar6 = (undefined *)(long)q;
      q = q + 1;
      *puVar6 = 0xf;
      while (1 < uVar1) {
        puVar6 = (undefined *)(long)q;
        q = q + 1;
        *puVar6 = (char)iVar2;
        iVar2 = iVar2 >> 8;
        uVar1 = iVar2 + 1;
      }
      *(int *)(long)q = iVar8;
      iVar2 = q;
      iVar8 = q + 4;
      q = q + 5;
      *(undefined *)(long)iVar8 = 0xb8;
      *(uint *)(long)q = iVar5 ^ 1;
      iVar8 = q + 4;
      q = q + 5;
      *(undefined *)(long)iVar8 = 0xe9;
      *(undefined4 *)(long)q = 5;
      q = q + 4;
      while (iVar2 != 0) {
        piVar7 = (int *)(long)iVar2;
        iVar8 = q - iVar2;
        iVar2 = *piVar7;
        *piVar7 = iVar8 + -4;
      }
      puVar6 = (undefined *)(long)q;
      q = q + 1;
      *puVar6 = 0xb8;
      *(int *)(long)q = iVar5;
      q = q + 4;
      return q;
    }
  }
  return C;
}



void FUN_00102d74(int param_1)

{
  undefined *puVar1;
  
  O(param_1);
  puVar1 = (undefined *)(long)q;
  q = q + 1;
  *puVar1 = 0x85;
  puVar1 = (undefined *)(long)q;
  q = q + 1;
  *puVar1 = 0xc0;
  puVar1 = (undefined *)(long)q;
  q = q + 1;
  *puVar1 = 0xf;
  puVar1 = (undefined *)(long)q;
  q = q + 1;
  *puVar1 = 0x84;
  *(undefined4 *)(long)q = 0;
  q = q + 4;
  return;
}



// WARNING: Unknown calling convention

int U(void)

{
  int iVar1;
  int in_w0;
  undefined *puVar2;
  
  O(in_w0);
  puVar2 = (undefined *)(long)q;
  q = q + 1;
  *puVar2 = 0x85;
  puVar2 = (undefined *)(long)q;
  q = q + 1;
  *puVar2 = 0xc0;
  puVar2 = (undefined *)(long)q;
  q = q + 1;
  *puVar2 = 0xf;
  puVar2 = (undefined *)(long)q;
  q = q + 1;
  *puVar2 = 0x84;
  *(undefined4 *)(long)q = 0;
  iVar1 = q;
  q = q + 4;
  return iVar1;
}



// WARNING: Unknown calling convention

int ab(int j)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int g;
  undefined *puVar5;
  int *piVar6;
  int iVar7;
  
LAB_00102e40:
  bVar4 = d == 0x100;
  bVar3 = bVar4 || j == 0 && d != -1;
  while( true ) {
    if (!bVar3) {
      return 0;
    }
    if (bVar4) break;
    iVar7 = *(int *)(long)(d + 4);
    while (iVar7 != 0) {
      piVar6 = (int *)(long)iVar7;
      iVar1 = q - iVar7;
      iVar7 = *piVar6;
      *piVar6 = iVar1 + -4;
    }
    iVar7 = 8;
    *(int *)(long)d = q;
    ad();
    ad();
    while (d != 0x29) {
      while( true ) {
        *(int *)(long)d = iVar7;
        iVar7 = iVar7 + 4;
        ad();
        if (d != 0x2c) break;
        ad();
        if (d == 0x29) goto LAB_00102f00;
      }
    }
LAB_00102f00:
    ad();
    G = 0;
    puVar5 = (undefined *)(long)q;
    K = 0;
    q = q + 1;
    *puVar5 = 0x55;
    puVar5 = (undefined *)(long)q;
    q = q + 1;
    *puVar5 = 0x89;
    puVar5 = (undefined *)(long)q;
    q = q + 1;
    *puVar5 = 0xe5;
    puVar5 = (undefined *)(long)q;
    q = q + 1;
    *puVar5 = 0x81;
    puVar5 = (undefined *)(long)q;
    q = q + 1;
    *puVar5 = 0xec;
    *(undefined4 *)(long)q = 0;
    iVar1 = q;
    q = q + 4;
    I(0);
    iVar7 = K;
    while (iVar7 != 0) {
      piVar6 = (int *)(long)iVar7;
      iVar2 = q - iVar7;
      iVar7 = *piVar6;
      *piVar6 = iVar2 + -4;
    }
    puVar5 = (undefined *)(long)q;
    q = q + 1;
    *puVar5 = 0xc9;
    puVar5 = (undefined *)(long)q;
    q = q + 1;
    *puVar5 = 0xc3;
    *(int *)(long)iVar1 = G;
    bVar4 = d == 0x100;
    bVar3 = bVar4 || j == 0 && d != -1;
  }
  ad();
  do {
    if (j == 0) {
      do {
        if (d == 0x3b) goto LAB_001030a8;
        *(int *)(long)d = v;
        v = v + 4;
        ad();
      } while (d != 0x2c);
    }
    else {
      do {
        if (d == 0x3b) goto LAB_001030a8;
        iVar7 = -4 - G;
        G = G + 4;
        *(int *)(long)d = iVar7;
        ad();
      } while (d != 0x2c);
    }
    ad();
  } while( true );
LAB_001030a8:
  ad();
  goto LAB_00102e40;
}



// WARNING: Unknown calling convention

int I(int j)

{
  int j_00;
  int g_1;
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  int e;
  int iVar5;
  int g;
  int m;
  
  iVar1 = d;
  if (d == 0x120) {
    ad();
    iVar1 = ad();
    O(iVar1);
    puVar3 = (undefined *)(long)q;
    q = q + 1;
    *puVar3 = 0x85;
    puVar3 = (undefined *)(long)q;
    q = q + 1;
    *puVar3 = 0xc0;
    puVar3 = (undefined *)(long)q;
    q = q + 1;
    *puVar3 = 0xf;
    puVar3 = (undefined *)(long)q;
    q = q + 1;
    *puVar3 = 0x84;
    *(undefined4 *)(long)q = 0;
    m = q;
    q = q + 4;
    ad();
    I(j);
    if (d == 0x138) {
      ad();
      puVar3 = (undefined *)(long)q;
      q = q + 1;
      *puVar3 = 0xe9;
      *(undefined4 *)(long)q = 0;
      iVar5 = q;
      q = q + 4;
      iVar1 = m;
      while (iVar1 != 0) {
        piVar4 = (int *)(long)iVar1;
        iVar2 = q - iVar1;
        iVar1 = *piVar4;
        *piVar4 = iVar2 + -4;
      }
      iVar1 = I(j);
      while (iVar5 != 0) {
        piVar4 = (int *)(long)iVar5;
        iVar1 = q - iVar5;
        iVar5 = *piVar4;
        iVar1 = iVar1 + -4;
        *piVar4 = iVar1;
      }
    }
    else {
      iVar1 = m;
      if (m != 0) {
        do {
          piVar4 = (int *)(long)m;
          iVar1 = q - m;
          m = *piVar4;
          *piVar4 = iVar1 + -4;
        } while (m != 0);
        return 0;
      }
    }
  }
  else if (d == 0x160 || d == 0x1f8) {
    ad();
    iVar2 = ad();
    iVar5 = q;
    if (iVar1 == 0x160) {
      O(iVar2);
      puVar3 = (undefined *)(long)q;
      q = q + 1;
      *puVar3 = 0x85;
      puVar3 = (undefined *)(long)q;
      q = q + 1;
      *puVar3 = 0xc0;
      puVar3 = (undefined *)(long)q;
      q = q + 1;
      *puVar3 = 0xf;
      puVar3 = (undefined *)(long)q;
      q = q + 1;
      *puVar3 = 0x84;
      *(undefined4 *)(long)q = 0;
      m = q;
      q = q + 4;
    }
    else {
      if (d != 0x3b) {
        O(d);
      }
      ad();
      iVar5 = q;
      m = 0;
      if (d != 0x3b) {
        O(d);
        puVar3 = (undefined *)(long)q;
        q = q + 1;
        *puVar3 = 0x85;
        puVar3 = (undefined *)(long)q;
        q = q + 1;
        *puVar3 = 0xc0;
        puVar3 = (undefined *)(long)q;
        q = q + 1;
        *puVar3 = 0xf;
        puVar3 = (undefined *)(long)q;
        q = q + 1;
        *puVar3 = 0x84;
        *(undefined4 *)(long)q = 0;
        m = q;
        q = q + 4;
      }
      ad();
      if (d != 0x29) {
        puVar3 = (undefined *)(long)q;
        q = q + 1;
        *puVar3 = 0xe9;
        j_00 = q;
        *(undefined4 *)(long)q = 0;
        iVar2 = q;
        iVar1 = q + 4;
        q = iVar1;
        O(j_00);
        iVar5 = iVar5 - q;
        puVar3 = (undefined *)(long)q;
        q = q + 1;
        *puVar3 = 0xe9;
        *(int *)(long)q = iVar5 + -5;
        q = q + 4;
        if (iVar2 == 0) {
          iVar5 = 4;
        }
        else {
          do {
            piVar4 = (int *)(long)iVar2;
            iVar5 = q - iVar2;
            iVar2 = *piVar4;
            *piVar4 = iVar5 + -4;
            iVar5 = iVar1;
          } while (iVar2 != 0);
        }
      }
    }
    ad();
    I((int)&m);
    iVar5 = iVar5 - q;
    puVar3 = (undefined *)(long)q;
    q = q + 1;
    *puVar3 = 0xe9;
    *(int *)(long)q = iVar5 + -5;
    iVar1 = q + 4;
    q = iVar1;
    if (m != 0) {
      do {
        piVar4 = (int *)(long)m;
        iVar1 = (q - m) + -4;
        m = *piVar4;
        *piVar4 = iVar1;
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
    else if (d == 0x1c0) {
      ad();
      if (d != 0x3b) {
        O(d);
      }
      puVar3 = (undefined *)(long)q;
      q = q + 1;
      *puVar3 = 0xe9;
      *(int *)(long)q = K;
      K = q;
      q = q + 4;
    }
    else if (d == 400) {
      ad();
      iVar1 = *(int *)(long)j;
      puVar3 = (undefined *)(long)q;
      q = q + 1;
      *puVar3 = 0xe9;
      *(int *)(long)q = iVar1;
      iVar1 = q + 4;
      *(int *)(long)j = q;
      q = iVar1;
    }
    else if (d != 0x3b) {
      O(0x1f8);
    }
    iVar1 = ad();
  }
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


