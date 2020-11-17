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

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
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



void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1)
  ;
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x00100d58)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x00100d80)
// WARNING: Removing unreachable block (ram,0x00100d8c)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00100dbc)
// WARNING: Removing unreachable block (ram,0x00100dc8)

void register_tm_clones(void)

{
  return;
}



void FUN_00100dd4(void)

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
  int iVar1;
  undefined *puVar2;
  
  iVar1 = D;
  puVar2 = (undefined *)(long)D;
  D = D + 1;
  *puVar2 = (char)e;
  return iVar1;
}



int o(void)

{
  uint uVar1;
  
  if (L == 0) {
    h = fgetc((FILE *)(long)Q);
    uVar1 = 0x113084;
  }
  else {
    h = ZEXT14(*(byte *)(long)L);
    L = L + 1;
    uVar1 = h;
    if (h == 2) {
      L = 0;
      uVar1 = 0x113084;
      h = W;
    }
  }
  return (int)uVar1;
}



int X(void)

{
  uint uVar1;
  
  uVar1 = isalnum(h);
  return (int)(uVar1 | h == 0x5f);
}



int Y(void)

{
  int iVar1;
  
  iVar1 = h;
  if (h == 0x5c) {
    o();
    iVar1 = h;
    if (h == 0x6e) {
      iVar1 = 0x113084;
      h = 10;
    }
  }
  return iVar1;
}



int ad(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  byte *pbVar5;
  int m;
  int j;
  int e;
  
  while (uVar1 = isspace(h), (uVar1 | h == 0x23) != 0) {
    if (h == 0x23) {
      o();
      ad();
      if (d == 0x218) {
        ad();
        E(0x20);
        *(undefined4 *)(long)d = 1;
        *(int *)(long)(d + 4) = D;
      }
      while (h != 10) {
        E(h);
        o();
      }
      E(10);
      E(2);
    }
    o();
  }
  C = 0;
  d = h;
  iVar2 = X();
  if (iVar2 == 0) {
    o();
    if (d == 0x27) {
      d = 2;
      Y();
      z = h;
      o();
      iVar2 = o();
    }
    else {
      if (d == 0x2f && h == 0x2a) {
        o();
        while (h != 0) {
          while (h != 0x2a) {
            o();
          }
          o();
          if (h == 0x2f) {
            h = 0;
          }
        }
        o();
        iVar2 = ad();
      }
      else {
        e = 0x1025b8;
        do {
          pbVar5 = (byte *)(long)e;
          if (*pbVar5 == 0) {
            return 0;
          }
          uVar1 = (uint)*(byte *)(long)(e + 1);
          z = 0;
          e = e + 2;
          while( true ) {
            C = *(byte *)(long)e - 0x62;
            if (-1 < C) break;
            z = z * 0x40 + C + 0x40;
            e = e + 1;
          }
          e = e + 1;
        } while ((uint)*pbVar5 != d || uVar1 != h && uVar1 != 0x40);
        iVar2 = h;
        if (uVar1 == h) {
          o();
          iVar2 = 0x113080;
          d = 1;
        }
      }
    }
  }
  else {
    E(0x20);
    M = D;
    while (iVar2 = X(), iVar2 != 0) {
      E(h);
      o();
    }
    if (d - 0x30U < 10) {
      lVar3 = strtol((char *)(ulong)(uint)M,(char **)0x0,0);
      z = (int)lVar3;
      d = 2;
      iVar2 = 0x113080;
    }
    else {
      *(undefined *)(long)D = 0x20;
      pcVar4 = strstr((char *)(long)R,(char *)(long)(M + -1));
      d = (int)pcVar4 - R;
      *(undefined *)(long)D = 0;
      d = (d + 0x20) * 8;
      iVar2 = d;
      if (0x218 < d) {
        d = P + d;
        iVar2 = *(int *)(long)d;
        if (iVar2 == 1) {
          L = *(int *)(long)(d + 4);
          W = h;
          o();
          iVar2 = ad();
        }
      }
    }
  }
  return iVar2;
}



int ae(int g)

{
  undefined *puVar1;
  int local_4;
  
  local_4 = g;
  while ((local_4 != 0 && (local_4 != -1))) {
    puVar1 = (undefined *)(long)q;
    q = q + 1;
    *puVar1 = (char)local_4;
    local_4 = local_4 >> 8;
  }
  return local_4;
}



int A(int e)

{
  int iVar1;
  int local_14;
  int g;
  
  local_14 = e;
  while (local_14 != 0) {
    iVar1 = *(int *)(long)local_14;
    *(int *)(long)local_14 = (q - local_14) + -4;
    local_14 = iVar1;
  }
  return 0;
}



int s(int g,int e)

{
  int iVar1;
  
  ae(g);
  *(int *)(long)q = e;
  iVar1 = q;
  q = q + 4;
  return iVar1;
}



int H(int e)

{
  int iVar1;
  
  iVar1 = s(0xb8,e);
  return iVar1;
}



int B(int e)

{
  int iVar1;
  
  iVar1 = s(0xe9,e);
  return iVar1;
}



int S(int j,int e)

{
  int iVar1;
  
  ae(0xfc085);
  iVar1 = s(j + 0x84,e);
  return iVar1;
}



int Z(int e)

{
  int iVar1;
  
  ae(0xc139);
  H(0);
  ae(0xf);
  ae(e + 0x90);
  iVar1 = ae(0xc0);
  return iVar1;
}



int N(int j,int e)

{
  int iVar1;
  
  ae(j + 0x83);
  if (e < 0x200) {
    iVar1 = 0x85;
  }
  else {
    iVar1 = 5;
  }
  iVar1 = s(iVar1,e);
  return iVar1;
}



int T(int j)

{
  int g_00;
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int local_14;
  int m;
  int aa;
  int e;
  int g;
  
  iVar1 = C;
  g_00 = z;
  iVar2 = d;
  g = 1;
  if (d == 0x22) {
    H(v);
    while (h != 0x22) {
      Y();
      puVar3 = (undefined *)(long)v;
      v = v + 1;
      *puVar3 = (char)h;
      o();
    }
    *(undefined *)(long)v = 0;
    v = v + 4U & 0xfffffffc;
    o();
    ad();
  }
  else {
    e = d;
    ad();
    if (iVar2 == 2) {
      H(g_00);
    }
    else {
      if (iVar1 == 2) {
        T(0);
        s(0xb9,0);
        if (iVar2 == 0x21) {
          Z(g_00);
        }
        else {
          ae(g_00);
        }
      }
      else {
        if (iVar2 == 0x28) {
          w();
          ad();
        }
        else {
          if (iVar2 == 0x2a) {
            ad();
            e = d;
            ad();
            ad();
            if (d == 0x2a) {
              ad();
              ad();
              ad();
              ad();
              e = 0;
            }
            ad();
            T(0);
            if (d == 0x3d) {
              ad();
              ae(0x50);
              w();
              ae(0x59);
              if (e == 0x100) {
                iVar2 = 0x189;
              }
              else {
                iVar2 = 0x188;
              }
              ae(iVar2);
            }
            else {
              if (e != 0) {
                if (e == 0x100) {
                  ae(0x8b);
                }
                else {
                  ae(0xbe0f);
                }
                q = q + 1;
              }
            }
          }
          else {
            if (iVar2 == 0x26) {
              N(10,*(int *)(long)d);
              ad();
            }
            else {
              g = *(int *)(long)iVar2;
              if (g == 0) {
                g = dlsym(0,M);
              }
              if (((uint)(d == 0x3d) & j) == 0) {
                if ((d != 0x28) && (N(8,g), C == 0xb)) {
                  N(0,g);
                  ae(z);
                  ad();
                }
              }
              else {
                ad();
                w();
                N(6,g);
              }
            }
          }
        }
      }
    }
  }
  local_14 = d;
  if (d == 0x28) {
    if (g == 1) {
      ae(0x50);
    }
    iVar2 = s(0xec81,0);
    ad();
    local_14 = 0;
    while (d != 0x29) {
      w();
      s(0x248489,local_14);
      if (d == 0x2c) {
        ad();
      }
      local_14 = local_14 + 4;
    }
    *(int *)(long)iVar2 = local_14;
    ad();
    if (g == 0) {
      iVar2 = s(0xe8,*(int *)(long)(e + 4));
      *(int *)(long)(e + 4) = iVar2;
    }
    else {
      if (g == 1) {
        s(0x2494ff,local_14);
        local_14 = local_14 + 4;
      }
      else {
        s(0xe8,(g - q) + -5);
      }
    }
    if (local_14 != 0) {
      local_14 = s(0xc481,local_14);
    }
  }
  return local_14;
}



int O(int j)

{
  int g_00;
  int iVar1;
  int iVar2;
  int g;
  int m;
  int e;
  
  iVar2 = j + -1;
  if (j == 1) {
    iVar1 = T(1);
  }
  else {
    O(iVar2);
    m = 0;
    while (g_00 = z, iVar1 = d, iVar2 == C) {
      e = z;
      ad();
      if (iVar2 < 9) {
        ae(0x50);
        O(iVar2);
        ae(0x59);
        if (iVar2 == 4 || iVar2 == 5) {
          Z(g_00);
        }
        else {
          ae(g_00);
          if (iVar1 == 0x25) {
            ae(0x92);
          }
        }
      }
      else {
        m = S(g_00,m);
        O(iVar2);
      }
    }
    iVar1 = m;
    if ((m != 0) && (iVar1 = iVar2, 8 < iVar2)) {
      iVar2 = S(e,m);
      H(e ^ 1);
      B(5);
      A(iVar2);
      iVar1 = H(e);
    }
  }
  return iVar1;
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
  
  w();
  iVar1 = S(0,0);
  return iVar1;
}



int I(int j)

{
  int iVar1;
  int iVar2;
  int m;
  int e;
  int g;
  
  iVar1 = d;
  if (d == 0x120) {
    ad();
    ad();
    iVar1 = U();
    ad();
    I(j);
    if (d == 0x138) {
      ad();
      iVar2 = B(0);
      A(iVar1);
      I(j);
      iVar1 = A(iVar2);
    }
    else {
      iVar1 = A(iVar1);
    }
  }
  else {
    if (d == 0x160 || d == 0x1f8) {
      ad();
      ad();
      if (iVar1 == 0x160) {
        g = q;
        m = U();
      }
      else {
        if (d != 0x3b) {
          w();
        }
        ad();
        iVar1 = q;
        g = q;
        m = 0;
        if (d != 0x3b) {
          m = U();
        }
        ad();
        if (d != 0x29) {
          iVar2 = B(0);
          w();
          B((iVar1 - q) + -5);
          A(iVar2);
          g = iVar2 + 4;
        }
      }
      ad();
      I((int)register0x00000008 + -0xc);
      B((g - q) + -5);
      iVar1 = A(m);
    }
    else {
      if (d == 0x7b) {
        ad();
        ab(1);
        while (d != 0x7d) {
          I(j);
        }
        iVar1 = ad();
      }
      else {
        if (d == 0x1c0) {
          ad();
          if (d != 0x3b) {
            w();
          }
          K = B(K);
        }
        else {
          if (d == 400) {
            ad();
            iVar1 = B(*(int *)(long)j);
            *(int *)(long)j = iVar1;
          }
          else {
            if (d != 0x3b) {
              w();
            }
          }
        }
        iVar1 = ad();
      }
    }
  }
  return iVar1;
}



int ab(int j)

{
  int iVar1;
  int m;
  
  while (d == 0x100 || d != -1 && j == 0) {
    if (d == 0x100) {
      ad();
      while (d != 0x3b) {
        if (j == 0) {
          *(int *)(long)d = v;
          v = v + 4;
        }
        else {
          G = G + 4;
          *(int *)(long)d = -G;
        }
        ad();
        if (d == 0x2c) {
          ad();
        }
      }
      ad();
    }
    else {
      A(*(int *)(long)(d + 4));
      *(int *)(long)d = q;
      ad();
      ad();
      m = 8;
      while (d != 0x29) {
        *(int *)(long)d = m;
        m = m + 4;
        ad();
        if (d == 0x2c) {
          ad();
        }
      }
      ad();
      G = 0;
      K = 0;
      ae(0xe58955);
      iVar1 = s(0xec81,0);
      I(0);
      A(K);
      ae(0xc3c9);
      *(int *)(long)iVar1 = G;
    }
  }
  return 0;
}



int main(int g,int e)

{
  int iVar1;
  FILE *pFVar2;
  void *pvVar3;
  undefined8 *puVar4;
  int local_8;
  
  Q = (int)stdin;
  local_8 = e;
  if (1 < g) {
    local_8 = e + 4;
    pFVar2 = fopen((char *)(long)*(int *)(long)local_8,"r");
    Q = (int)pFVar2;
  }
  pvVar3 = calloc(1,99999);
  iVar1 = (int)pvVar3;
  puVar4 = (undefined8 *)(long)iVar1;
  R = iVar1;
  *puVar4 = 0x20666920746e6920;
  puVar4[1] = 0x6968772065736c65;
  puVar4[2] = 0x6b6165726220656c;
  puVar4[3] = 0x206e727574657220;
  puVar4[4] = 0x6966656420726f66;
  puVar4[5] = 0x206e69616d20656e;
  *(char *)(puVar4 + 6) = '\0';
  D = iVar1 + 0x30;
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
  iVar1 = (*(code *)(long)*(int *)(long)(P + 0x250))(g + -1,local_8);
  return iVar1;
}



void FUN_0010251c(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // WARNING: Could not recover jumptable at 0x0010251c. Too many branches
                    // WARNING: Treating indirect jump as call
  UNRECOVERED_JUMPTABLE = (code *)UndefinedInstructionException(0,0x10251c);
  (*UNRECOVERED_JUMPTABLE)();
  return;
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


