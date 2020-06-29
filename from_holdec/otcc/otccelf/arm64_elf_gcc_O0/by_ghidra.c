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



void _start(undefined8 param_1)

{
  undefined8 param_9;
  
  __libc_start_main(main,param_9,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1);
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x00100e78)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x00100ea0)
// WARNING: Removing unreachable block (ram,0x00100eac)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00100edc)
// WARNING: Removing unreachable block (ram,0x00100ee8)

void register_tm_clones(void)

{
  return;
}



void FUN_00100ef4(void)

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
  int iVar1;
  undefined *puVar2;
  
  iVar1 = D;
  puVar2 = (undefined *)(longlong)D;
  D = D + 1;
  *puVar2 = (char)a;
  return iVar1;
}



int w(void)

{
  byte *pbVar1;
  uint uVar2;
  
  if (V == 0) {
    m = fgetc((FILE *)(longlong)ak);
    uVar2 = 0x1150cc;
  }
  else {
    pbVar1 = (byte *)(longlong)V;
    uVar2 = (uint)*pbVar1;
    V = V + 1;
    m = uVar2;
    if (*pbVar1 == 2) {
      V = 0;
      uVar2 = 0x1150cc;
      m = al;
    }
  }
  return (int)uVar2;
}



int am(void)

{
  uint uVar1;
  
  uVar1 = isalnum(m);
  return (int)(uVar1 | m == 0x5f);
}



int an(void)

{
  int iVar1;
  
  iVar1 = m;
  if (m == 0x5c) {
    w();
    iVar1 = m;
    if (m == 0x6e) {
      iVar1 = 0x1150cc;
      m = 10;
    }
  }
  return iVar1;
}



int av(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int h;
  int s;
  int a;
  
  while (uVar3 = isspace(m), (uVar3 | m == 0x23) != 0) {
    if (m == 0x23) {
      w();
      av();
      if (e == 0x218) {
        av();
        L(0x20);
        *(undefined4 *)(longlong)e = 1;
        *(int *)(longlong)(e + 4) = D;
      }
      while (m != 10) {
        L(m);
        w();
      }
      L(10);
      L(2);
    }
    w();
  }
  J = 0;
  e = m;
  iVar4 = am();
  if (iVar4 == 0) {
    w();
    if (e == 0x27) {
      e = 2;
      an();
      C = m;
      w();
      iVar4 = w();
    }
    else {
      if (e == 0x2f && m == 0x2a) {
        w();
        while (m != 0) {
          while (m != 0x2a) {
            w();
          }
          w();
          if (m == 0x2f) {
            m = 0;
          }
        }
        w();
        iVar4 = av();
      }
      else {
        a = 0x104220;
        do {
          bVar2 = *(byte *)(longlong)a;
          if (bVar2 == 0) {
            return (uint)bVar2;
          }
          bVar1 = *(byte *)(longlong)(a + 1);
          C = 0;
          a = a + 2;
          while( true ) {
            J = (uint)*(byte *)(longlong)a - 0x62;
            if (-1 < J) break;
            C = C * 0x40 + J + 0x40;
            a = a + 1;
          }
          a = a + 1;
        } while ((uint)bVar2 != e || (uint)bVar1 != m && bVar1 != 0x40);
        iVar4 = m;
        if ((uint)bVar1 == m) {
          w();
          iVar4 = 0x1150c4;
          e = 1;
        }
      }
    }
  }
  else {
    L(0x20);
    Z = D;
    while (iVar4 = am(), iVar4 != 0) {
      L(m);
      w();
    }
    if (e - 0x30U < 10) {
      C = strtol((char *)(ulonglong)(uint)Z,(char **)0x0,0);
      e = 2;
      iVar4 = 0x1150c4;
    }
    else {
      *(undefined *)(longlong)D = 0x20;
      pcVar5 = strstr((char *)(longlong)Q,(char *)(longlong)(Z + -1));
      e = (int)pcVar5 - Q;
      *(undefined *)(longlong)D = 0;
      e = (e + 0x20) * 8;
      iVar4 = e;
      if (0x218 < e) {
        e = T + e;
        iVar4 = *(int *)(longlong)e;
        if (*(int *)(longlong)e == 1) {
          V = *(int *)(longlong)(e + 4);
          al = m;
          w();
          iVar4 = av();
        }
      }
    }
  }
  return iVar4;
}



int aw(int d)

{
  undefined *puVar1;
  int local_4;
  
  local_4 = d;
  while ((local_4 != 0 && (local_4 != -1))) {
    puVar1 = (undefined *)(longlong)v;
    v = v + 1;
    *puVar1 = (char)local_4;
    local_4 = local_4 >> 8;
  }
  return local_4;
}



int E(int a,int d)

{
  *(undefined *)(longlong)a = (char)d;
  *(undefined *)(longlong)(a + 1) = (char)((uint)d >> 8);
  *(undefined *)(longlong)(a + 2) = (char)((uint)d >> 0x10);
  *(undefined *)(longlong)(a + 3) = (char)((uint)d >> 0x18);
  return (int)(d >> 0x18 & 0xff);
}



int ao(int a)

{
  return CONCAT13(*(undefined *)(longlong)(a + 3),
                  CONCAT12(*(undefined *)(longlong)(a + 2),
                           CONCAT11(*(undefined *)(longlong)(a + 1),*(undefined *)(longlong)a)));
}



int ap(int a,int z)

{
  int iVar1;
  int local_14;
  int d;
  
  local_14 = a;
  while (local_14 != 0) {
    iVar1 = ao(local_14);
    if (*(char *)(longlong)(local_14 + -1) == '\x05') {
      if ((z < G) || (i <= z)) {
        E(local_14,(z - K) + R + y);
        local_14 = iVar1;
      }
      else {
        E(local_14,y + z);
        local_14 = iVar1;
      }
    }
    else {
      E(local_14,(z - local_14) + -4);
      local_14 = iVar1;
    }
  }
  return 0;
}



int H(int a)

{
  int iVar1;
  
  iVar1 = ap(a,v);
  return iVar1;
}



int x(int d,int a)

{
  int iVar1;
  
  aw(d);
  E(v,a);
  iVar1 = v;
  v = v + 4;
  return iVar1;
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
  
  aw(0xfc085);
  iVar1 = x(s + 0x84,a);
  return iVar1;
}



int aq(int a)

{
  int iVar1;
  
  aw(0xc139);
  M(0);
  aw(0xf);
  aw(a + 0x90);
  iVar1 = aw(0xc0);
  return iVar1;
}



int W(int s,int a)

{
  int a_00;
  int d;
  
  aw(s + 0x83);
  a_00 = *(int *)(longlong)a;
  if ((a_00 == 0) || (0x1ff < a_00)) {
    a_00 = x(5,*(int *)(longlong)(a + 4));
    *(int *)(longlong)(a + 4) = a_00;
  }
  else {
    a_00 = x(0x85,a_00);
  }
  return a_00;
}



int ab(int s)

{
  bool bVar1;
  int d_00;
  int a_00;
  int d_01;
  undefined *puVar2;
  int local_14;
  int h;
  int F;
  int a;
  int d;
  
  a_00 = e;
  d_00 = C;
  d_01 = J;
  bVar1 = true;
  if (e == 0x22) {
    M(i + y);
    while (m != 0x22) {
      an();
      puVar2 = (undefined *)(longlong)i;
      i = i + 1;
      *puVar2 = (char)m;
      w();
    }
    *(undefined *)(longlong)i = 0;
    i = i + 4U & 0xfffffffc;
    w();
    av();
  }
  else {
    a = e;
    av();
    if (a_00 == 2) {
      M(d_00);
    }
    else {
      if (d_01 == 2) {
        ab(0);
        x(0xb9,0);
        if (a_00 == 0x21) {
          aq(d_00);
        }
        else {
          aw(d_00);
        }
      }
      else {
        if (a_00 == 0x28) {
          B();
          av();
        }
        else {
          if (a_00 == 0x2a) {
            av();
            a = e;
            av();
            av();
            if (e == 0x2a) {
              av();
              av();
              av();
              av();
              a = 0;
            }
            av();
            ab(0);
            if (e == 0x3d) {
              av();
              aw(0x50);
              B();
              aw(0x59);
              if (a == 0x100) {
                d_01 = 0x189;
              }
              else {
                d_01 = 0x188;
              }
              aw(d_01);
            }
            else {
              if (a != 0) {
                if (a == 0x100) {
                  aw(0x8b);
                }
                else {
                  aw(0xbe0f);
                }
                v = v + 1;
              }
            }
          }
          else {
            if (a_00 == 0x26) {
              W(10,e);
              av();
            }
            else {
              bVar1 = false;
              if (((uint)(e == 0x3d) & s) == 0) {
                if ((e != 0x28) && (W(8,a_00), J == 0xb)) {
                  W(0,a_00);
                  aw(C);
                  av();
                }
              }
              else {
                av();
                B();
                W(6,a_00);
              }
            }
          }
        }
      }
    }
  }
  local_14 = e;
  if (e == 0x28) {
    if (bVar1) {
      aw(0x50);
    }
    d_01 = x(0xec81,0);
    av();
    local_14 = 0;
    while (e != 0x29) {
      B();
      x(0x248489,local_14);
      if (e == 0x2c) {
        av();
      }
      local_14 = local_14 + 4;
    }
    E(d_01,local_14);
    av();
    if (bVar1) {
      x(0x2494ff,local_14);
      local_14 = local_14 + 4;
    }
    else {
      d_01 = x(0xe8,*(int *)(longlong)(a + 4));
      *(int *)(longlong)(a + 4) = d_01;
    }
    if (local_14 != 0) {
      local_14 = x(0xc481,local_14);
    }
  }
  return local_14;
}



int X(int s)

{
  int iVar1;
  int d_00;
  int s_00;
  int d;
  int h;
  int a;
  
  s_00 = s + -1;
  if (s == 1) {
    d_00 = ab(1);
  }
  else {
    X(s_00);
    h = 0;
    while (iVar1 = e, d_00 = C, s_00 == J) {
      a = C;
      av();
      if (s_00 < 9) {
        aw(0x50);
        X(s_00);
        aw(0x59);
        if (s_00 == 4 || s_00 == 5) {
          aq(d_00);
        }
        else {
          aw(d_00);
          if (iVar1 == 0x25) {
            aw(0x92);
          }
        }
      }
      else {
        h = aa(d_00,h);
        X(s_00);
      }
    }
    d_00 = h;
    if ((h != 0) && (d_00 = s_00, 8 < s_00)) {
      s_00 = aa(a,h);
      M(a ^ 1);
      I(5);
      H(s_00);
      d_00 = M(a);
    }
  }
  return d_00;
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
  
  B();
  iVar1 = aa(0,0);
  return iVar1;
}



int S(int s)

{
  int a_00;
  int a_01;
  int h;
  int a;
  int d;
  
  a_00 = e;
  if (e == 0x120) {
    av();
    av();
    a_00 = ac();
    av();
    S(s);
    if (e == 0x138) {
      av();
      a_01 = I(0);
      H(a_00);
      S(s);
      a_00 = H(a_01);
    }
    else {
      a_00 = H(a_00);
    }
  }
  else {
    if (e == 0x160 || e == 0x1f8) {
      av();
      av();
      if (a_00 == 0x160) {
        d = v;
        h = ac();
      }
      else {
        if (e != 0x3b) {
          B();
        }
        av();
        a_00 = v;
        d = v;
        h = 0;
        if (e != 0x3b) {
          h = ac();
        }
        av();
        if (e != 0x29) {
          d = I(0);
          B();
          I((a_00 - v) + -5);
          H(d);
          d = d + 4;
        }
      }
      av();
      S((int)register0x00000008 + -0xc);
      I((d - v) + -5);
      a_00 = H(h);
    }
    else {
      if (e == 0x7b) {
        av();
        ar(1);
        while (e != 0x7d) {
          S(s);
        }
        a_00 = av();
      }
      else {
        if (e == 0x1c0) {
          av();
          if (e != 0x3b) {
            B();
          }
          U = I(U);
        }
        else {
          if (e == 400) {
            av();
            a_00 = I(*(int *)(longlong)s);
            *(int *)(longlong)s = a_00;
          }
          else {
            if (e != 0x3b) {
              B();
            }
          }
        }
        a_00 = av();
      }
    }
  }
  return a_00;
}



int ar(int s)

{
  bool bVar1;
  int a;
  int h;
  
  while (bVar1 = e == 0x100 || e != -1 && s == 0, bVar1) {
    if (e == 0x100) {
      av();
      while (e != 0x3b) {
        if (s == 0) {
          *(int *)(longlong)e = i;
          i = i + 4;
        }
        else {
          P = P + 4;
          *(int *)(longlong)e = -P;
        }
        av();
        if (e == 0x2c) {
          av();
        }
      }
      av();
    }
    else {
      *(int *)(longlong)e = v;
      av();
      av();
      h = 8;
      while (e != 0x29) {
        *(int *)(longlong)e = h;
        h = h + 4;
        av();
        if (e == 0x2c) {
          av();
        }
      }
      av();
      P = 0;
      U = 0;
      aw(0xe58955);
      a = x(0xec81,0);
      S(0);
      H(U);
      aw(0xc3c9);
      E(a,P);
    }
  }
  return (int)(uint)bVar1;
}



int ax(int d)

{
  E(i,d);
  i = i + 4;
  return 0x1150c8;
}



int ad(int d,int a)

{
  int iVar1;
  
  ax(d);
  ax(d + 0x8048000);
  ax(d + 0x8048000);
  ax(a);
  iVar1 = ax(a);
  return iVar1;
}



int ae(int s)

{
  int iVar1;
  int z_00;
  int iVar2;
  uint uVar3;
  int F;
  int z;
  int h;
  int N;
  int d;
  int a;
  
  N = 0;
  a = Q;
  while( true ) {
    iVar2 = a + 1;
    a = iVar2;
    while ((*(char *)(longlong)a != ' ' && (a < D))) {
      a = a + 1;
    }
    if (a == D) break;
    iVar1 = (iVar2 - Q) * 8 + T;
    e = iVar1 + 0xf8;
    z_00 = *(int *)(longlong)e;
    d = *(int *)(longlong)(iVar1 + 0xfc);
    if ((d != 0) && (z_00 != 1)) {
      if (z_00 == 0) {
        if (s == 0) {
          memcpy((void *)(longlong)i,(void *)(longlong)iVar2,a - iVar2);
          i = ((i + a) - iVar2) + 1;
        }
        else {
          if (s == 1) {
            ax(N + 0x16);
            ax(0);
            ax(0);
            ax(0x10);
            N = ((N + a) - iVar2) + 1;
          }
          else {
            N = N + 1;
            while (d != 0) {
              iVar2 = ao(d);
              uVar3 = (uint)(*(char *)(longlong)(d + -1) != '\x05');
              E(d,uVar3 * -4);
              ax((d - K) + R + y);
              ax(N * 0x100 + uVar3 + 1);
              d = iVar2;
            }
          }
        }
      }
      else {
        if (s == 0) {
          ap(d,z_00);
        }
      }
    }
  }
  return D;
}



int au(int F)

{
  uint uVar1;
  int iVar2;
  size_t __n;
  int d_00;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  FILE *pFVar7;
  int Y;
  int ah;
  int d;
  int at;
  int ag;
  int as;
  int af;
  int ai;
  int a;
  
  R = i;
  __n = v - K;
  v = K;
  aw(0x505458);
  x(0xe8,(*(int *)(longlong)(T + 0x250) - v) + -5);
  aw(0xc389);
  M(1);
  aw(0x80cd);
  iVar5 = i + __n;
  *(undefined8 *)(longlong)(iVar5 + 1) = 0x2e6f732e6362696c;
  *(undefined2 *)((undefined8 *)(longlong)(iVar5 + 1) + 1) = 0x36;
  *(undefined8 *)(longlong)(iVar5 + 0xb) = 0x6f732e6c6462696c;
  *(undefined4 *)((longlong)(undefined8 *)(longlong)(iVar5 + 0xb) + 7) = 0x322e6f;
  i = iVar5 + 0x16;
  ae(0);
  d_00 = i - iVar5;
  uVar1 = i + 3U & 0xfffffffc;
  i = uVar1;
  ax(0);
  ax(0);
  ax(0);
  ax(0);
  ae(1);
  iVar4 = i;
  iVar3 = i - uVar1;
  iVar2 = iVar3 + 0xf;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  ax(1);
  ax(iVar2 >> 4);
  ax(1);
  ax(0);
  a = 2;
  while (a < iVar2 >> 4) {
    ax(a);
    a = a + 1;
  }
  ax(0);
  iVar2 = i;
  ae(2);
  memcpy((void *)(longlong)R,(void *)(longlong)K,__n);
  iVar3 = i;
  i = G;
  ax(0x464c457f);
  ax(0x10101);
  ax(0);
  ax(0);
  ax(0x30002);
  ax(1);
  ax(R + y);
  ax(0x30);
  ax(0);
  ax(0);
  ax(0x200034);
  ax(3);
  ax(3);
  ad(0x90,0x13);
  ax(4);
  ax(1);
  ax(1);
  ad(0,iVar3 - G);
  ax(7);
  ax(0x1000);
  ax(2);
  ad(0xa4,0x58);
  ax(6);
  ax(4);
  puVar6 = (undefined8 *)(longlong)i;
  *puVar6 = 0x2d646c2f62696c2f;
  puVar6[1] = 0x6f732e78756e696c;
  *(undefined4 *)((longlong)puVar6 + 0xf) = 0x322e6f;
  i = i + 0x14;
  ax(1);
  ax(1);
  ax(1);
  ax(0xb);
  ax(4);
  ax(y + iVar4);
  ax(6);
  ax(y + uVar1);
  ax(5);
  ax(y + iVar5);
  ax(10);
  ax(d_00);
  ax(0xb);
  ax(0x10);
  ax(0x11);
  ax(y + iVar2);
  ax(0x12);
  ax(iVar3 - iVar2);
  ax(0x13);
  ax(8);
  ax(0);
  ax(0);
  pFVar7 = fopen((char *)(longlong)F,"w");
  fwrite((void *)(longlong)G,1,iVar3 - G,(FILE *)(longlong)(int)pFVar7);
  iVar5 = fclose((FILE *)(longlong)(int)pFVar7);
  return iVar5;
}



int main(int d,int a)

{
  void *pvVar1;
  undefined8 *puVar2;
  FILE *pFVar3;
  
  if (d < 3) {
    puts("usage: otccelf file.c outfile");
  }
  else {
    pvVar1 = calloc(1,99999);
    D = (int)pvVar1;
    puVar2 = (undefined8 *)(longlong)D;
    Q = D;
    *puVar2 = 0x20666920746e6920;
    puVar2[1] = 0x6968772065736c65;
    puVar2[2] = 0x6b6165726220656c;
    puVar2[3] = 0x206e727574657220;
    puVar2[4] = 0x6966656420726f66;
    puVar2[5] = 0x206e69616d20656e;
    *(char *)(puVar2 + 6) = '\0';
    D = D + 0x30;
    pvVar1 = calloc(1,99999);
    G = (int)pvVar1;
    i = G;
    pvVar1 = calloc(1,99999);
    v = (int)pvVar1;
    K = v;
    pvVar1 = calloc(1,99999);
    T = (int)pvVar1;
    pFVar3 = fopen((char *)(longlong)*(int *)(longlong)(a + 4),"r");
    ak = (int)pFVar3;
    y = 0x8048000 - G;
    i = i + 0xfc;
    v = v + 0x11;
    w();
    av();
    ar(0);
    au(*(int *)(longlong)(a + 8));
  }
  return 0;
}



void e843419_0008_00000059_8c(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  if (m == 2) {
    V = 0;
    m = al;
  }
  return;
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


