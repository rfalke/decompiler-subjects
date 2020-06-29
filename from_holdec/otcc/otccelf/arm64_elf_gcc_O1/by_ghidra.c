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
  undefined *puVar1;
  
  puVar1 = (undefined *)(longlong)D;
  D = D + 1;
  *puVar1 = (char)a;
  return a;
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
    return 0x1130cc;
  }
  V = 0;
  m = al;
  return 0x1130cc;
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
  w();
  iVar1 = m;
  if (m == 0x6e) {
    iVar1 = 0x1130cc;
    m = 10;
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
  int iVar6;
  byte *pbVar7;
  
  while( true ) {
    iVar4 = m;
    uVar3 = isspace(m);
    if ((iVar4 == 0x23 | uVar3) == 0) break;
    if (iVar4 == 0x23) {
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
  e = iVar4;
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
        iVar6 = 0x102ab8;
        do {
          pbVar7 = (byte *)(longlong)iVar6;
          if (*pbVar7 == 0) {
            return iVar6 + 1;
          }
          bVar1 = *(byte *)(longlong)(iVar6 + 1);
          C = 0;
          bVar2 = *(byte *)(longlong)(iVar6 + 2);
          iVar6 = iVar6 + 3;
          while (iVar4 = (uint)bVar2 - 0x62, iVar4 < 0) {
            C = iVar4 + C * 0x40 + 0x40;
            bVar2 = *(byte *)(longlong)iVar6;
            iVar6 = iVar6 + 1;
          }
          J = iVar4;
        } while (bVar1 != 0x40 && m != (uint)bVar1 || e != (uint)*pbVar7);
        if (m == (uint)bVar1) {
          w();
          iVar4 = 0x1130c4;
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
      iVar4 = 0x1130c4;
      e = 2;
    }
    else {
      *(undefined *)(longlong)D = 0x20;
      iVar4 = Q;
      pcVar5 = strstr((char *)(longlong)Q,(char *)(longlong)(Z + -1));
      e = (int)pcVar5 - iVar4;
      *(undefined *)(longlong)D = 0;
      iVar4 = (e + 0x20) * 8;
      e = iVar4;
      if ((0x218 < iVar4) && (iVar4 = iVar4 + T, e = iVar4, *(int *)(longlong)iVar4 == 1)) {
        V = *(int *)(longlong)(iVar4 + 4);
        al = m;
        w();
        iVar4 = av();
      }
    }
  }
  return iVar4;
}



int aw(int d)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = d + 1;
  iVar2 = v;
  while (1 < uVar1) {
    v = iVar2 + 1;
    *(undefined *)(longlong)iVar2 = (char)d;
    d = d >> 8;
    uVar1 = d + 1;
    iVar2 = v;
  }
  v = iVar2;
  return d;
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
  
  if (a == 0) {
    return 0;
  }
  do {
    iVar1 = ao(a);
    if (*(char *)(longlong)(a + -1) == '\x05') {
      if ((z < G) || (i <= z)) {
        iVar2 = E(a,(z - K) + R + y);
      }
      else {
        iVar2 = E(a,z + y);
      }
    }
    else {
      iVar2 = E(a,(z - a) + -4);
    }
    a = iVar1;
  } while (iVar1 != 0);
  return iVar2;
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
  
  aw(s + 0x83);
  a_00 = *(int *)(longlong)a;
  if (a_00 < 0x200 && a_00 != 0) {
    a_00 = x(0x85,a_00);
  }
  else {
    a_00 = x(5,*(int *)(longlong)(a + 4));
    *(int *)(longlong)(a + 4) = a_00;
  }
  return a_00;
}



int B(void)

{
  int iVar1;
  
  iVar1 = X(0xb);
  return iVar1;
}



int ab(int s)

{
  bool bVar1;
  int a;
  int d;
  undefined *puVar2;
  uint a_00;
  int a_01;
  uint a_02;
  
  a_01 = e;
  a = C;
  d = J;
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
LAB_00101994:
    if (e != 0x28) {
      return 0;
    }
    aw(0x50);
    d = x(0xec81,0);
    av();
    if (e == 0x29) {
      E(d,0);
      av();
      a_00 = 0;
    }
    else {
      a_02 = 1;
LAB_001018e0:
      a_00 = 0;
      do {
        B();
        x(0x248489,a_00);
        if (e == 0x2c) {
          av();
        }
        a_00 = a_00 + 4;
      } while (e != 0x29);
      E(d,a_00);
      av();
      bVar1 = a_02 == 0;
      a_02 = a_00;
      if (bVar1) goto LAB_00101bc8;
    }
    x(0x2494ff,a_00);
    a_02 = a_00 + 4;
  }
  else {
    av();
    if (a_01 == 2) {
      M(a);
      goto LAB_00101994;
    }
    if (d == 2) {
      ab(0);
      x(0xb9,0);
      if (a_01 == 0x21) {
        aq(a);
      }
      else {
        aw(a);
      }
      goto LAB_00101994;
    }
    if (a_01 == 0x28) {
      B();
      av();
      goto LAB_00101994;
    }
    if (a_01 == 0x2a) {
      av();
      a_01 = e;
      av();
      av();
      if (e == 0x2a) {
        av();
        av();
        av();
        av();
        av();
        ab(0);
        if (e == 0x3d) {
          av();
          aw(0x50);
          B();
          aw(0x59);
          a_01 = 0;
          d = 0x188;
          goto LAB_00101adc;
        }
        a_01 = 0;
      }
      else {
        av();
        ab(0);
        if (e == 0x3d) {
          av();
          aw(0x50);
          B();
          aw(0x59);
          d = (uint)(a_01 == 0x100) + 0x188;
LAB_00101adc:
          aw(d);
        }
        else {
          if (a_01 != 0) {
            if (a_01 == 0x100) {
              aw(0x8b);
            }
            else {
              aw(0xbe0f);
            }
            v = v + 1;
          }
        }
      }
      goto LAB_00101994;
    }
    if (a_01 == 0x26) {
      W(10,e);
      av();
      goto LAB_00101994;
    }
    a_02 = (uint)(e == 0x3d) & s;
    if (a_02 != 0) {
      av();
      B();
      W(6,a_01);
LAB_001018a0:
      if (e != 0x28) {
        return 0;
      }
      d = x(0xec81,0);
      av();
      a_02 = 0;
      if (e == 0x29) {
        E(d,0);
        av();
        a_02 = 0;
        goto LAB_00101bc8;
      }
      goto LAB_001018e0;
    }
    if (e != 0x28) {
      W(8,a_01);
      if (J == 0xb) {
        W(0,a_01);
        aw(C);
        av();
      }
      goto LAB_001018a0;
    }
    d = x(0xec81,0);
    av();
    if (e != 0x29) goto LAB_001018e0;
    E(d,0);
    av();
LAB_00101bc8:
    d = x(0xe8,*(int *)(longlong)(a_01 + 4));
    *(int *)(longlong)(a_01 + 4) = d;
  }
  if (a_02 != 0) {
    x(0xc481,a_02);
  }
  return 0;
}



int X(int s)

{
  int s_00;
  int iVar1;
  bool bVar2;
  bool bVar3;
  int a;
  int a_00;
  uint unaff_w20;
  
  if (s == 1) {
    a_00 = ab(1);
  }
  else {
    s_00 = s + -1;
    X(s_00);
    a = 0;
    while (iVar1 = e, a_00 = C, s_00 == J) {
      av();
      unaff_w20 = a_00;
      if (s_00 < 9) {
        aw(0x50);
        X(s_00);
        aw(0x59);
        if (s - 5U < 2) {
          aq(a_00);
        }
        else {
          aw(a_00);
          if (iVar1 == 0x25) {
            aw(0x92);
          }
        }
      }
      else {
        a = aa(a_00,a);
        X(s_00);
      }
    }
    bVar3 = a != 0;
    bVar2 = false;
    if (bVar3) {
      bVar2 = s + -9 < 0;
    }
    a_00 = J;
    if ((bVar3 && s_00 != 8) && bVar2 == (bVar3 && SBORROW4(s_00,8))) {
      a_00 = aa(unaff_w20,a);
      M(unaff_w20 ^ 1);
      I(5);
      H(a_00);
      a_00 = M(unaff_w20);
    }
  }
  return a_00;
}



int ac(void)

{
  int iVar1;
  
  B();
  iVar1 = aa(0,0);
  return iVar1;
}



int ar(int s)

{
  int a;
  
  while (s == 0 && e != -1 || e == 0x100) {
    if (e == 0x100) {
      av();
      while (e != 0x3b) {
        if (s == 0) {
          *(int *)(longlong)e = i;
          i = i + 4;
        }
        else {
          a = -4 - P;
          P = P + 4;
          *(int *)(longlong)e = a;
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
      a = 8;
      while (e != 0x29) {
        *(int *)(longlong)e = a;
        a = a + 4;
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
  return e;
}



int S(int s)

{
  int a;
  int a_00;
  int h;
  
  a = e;
  if (e == 0x120) {
    av();
    av();
    a = ac();
    av();
    S(s);
    if (e == 0x138) {
      av();
      a_00 = I(0);
      H(a);
      S(s);
      a = H(a_00);
    }
    else {
      a = H(a);
    }
  }
  else {
    if (e == 0x160 || e == 0x1f8) {
      av();
      av();
      a_00 = v;
      if (a == 0x160) {
        h = ac();
      }
      else {
        if (e != 0x3b) {
          B();
        }
        av();
        a_00 = v;
        h = 0;
        if (e != 0x3b) {
          h = ac();
        }
        av();
        if (e != 0x29) {
          a = I(0);
          B();
          I((a_00 - v) + -5);
          H(a);
          a_00 = a + 4;
        }
      }
      av();
      S((int)register0x00000008 + -4);
      I((a_00 - v) + -5);
      a = H(h);
    }
    else {
      if (e == 0x7b) {
        av();
        ar(1);
        while (e != 0x7d) {
          S(s);
        }
        a = av();
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
            a = I(*(int *)(longlong)s);
            *(int *)(longlong)s = a;
          }
          else {
            if (e != 0x3b) {
              B();
            }
          }
        }
        a = av();
      }
    }
  }
  return a;
}



int ax(int d)

{
  E(i,d);
  i = i + 4;
  return i;
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
  int z;
  char cVar1;
  int iVar2;
  int iVar3;
  int a;
  uint uVar4;
  int local_10;
  
  local_10 = 0;
  iVar3 = Q;
  while( true ) {
    iVar2 = iVar3 + 1;
    cVar1 = *(char *)(longlong)iVar2;
    iVar3 = iVar2;
    while ((cVar1 != ' ' && (iVar3 < D))) {
      iVar3 = iVar3 + 1;
      cVar1 = *(char *)(longlong)iVar3;
    }
    if (D == iVar3) break;
    a = T + (iVar2 - Q) * 8;
    e = a + 0xf8;
    z = *(int *)(longlong)e;
    a = *(int *)(longlong)(a + 0xfc);
    if (a != 0 && z != 1) {
      if (z == 0) {
        if (s == 0) {
          memcpy((void *)(longlong)i,(char *)(longlong)iVar2,iVar3 - iVar2);
          i = ((iVar3 + i) - iVar2) + 1;
        }
        else {
          if (s == 1) {
            ax(local_10 + 0x16);
            ax(0);
            ax(0);
            ax(0x10);
            local_10 = ((local_10 + iVar3) - iVar2) + 1;
          }
          else {
            local_10 = local_10 + 1;
            if (a != 0) {
              do {
                iVar2 = ao(a);
                uVar4 = (uint)(*(char *)(longlong)(a + -1) != '\x05');
                E(a,uVar4 * -4);
                ax((a - K) + R + y);
                ax(uVar4 + local_10 * 0x100 + 1);
                a = iVar2;
              } while (iVar2 != 0);
            }
          }
        }
      }
      else {
        if (s == 0) {
          ap(a,z);
        }
      }
    }
  }
  return D;
}



int au(int F)

{
  int iVar1;
  uint uVar2;
  int d;
  size_t __n;
  int d_00;
  int iVar3;
  int d_01;
  int iVar4;
  undefined8 *puVar5;
  FILE *pFVar6;
  
  R = i;
  __n = v - K;
  v = K;
  aw(0x505458);
  x(0xe8,(*(int *)(longlong)(T + 0x250) - v) + -5);
  aw(0xc389);
  M(1);
  aw(0x80cd);
  iVar4 = __n + i;
  *(undefined8 *)(longlong)(iVar4 + 1) = 0x2e6f732e6362696c;
  *(undefined2 *)((undefined8 *)(longlong)(iVar4 + 1) + 1) = 0x36;
  *(undefined8 *)(longlong)(iVar4 + 0xb) = 0x6f732e6c6462696c;
  *(undefined4 *)((longlong)(undefined8 *)(longlong)(iVar4 + 0xb) + 7) = 0x322e6f;
  i = iVar4 + 0x16;
  ae(0);
  d_00 = i - iVar4;
  uVar2 = i + 3U & 0xfffffffc;
  i = uVar2;
  ax(0);
  ax(0);
  ax(0);
  ax(0);
  ae(1);
  iVar3 = i;
  d_01 = i - uVar2;
  d = d_01 + 0xf;
  if (-1 < d_01) {
    d = d_01;
  }
  d = d >> 4;
  ax(1);
  ax(d);
  ax(1);
  ax(0);
  if (2 < d) {
    d_01 = 2;
    do {
      iVar1 = d_01 + 1;
      ax(d_01);
      d_01 = iVar1;
    } while (d != iVar1);
  }
  ax(0);
  d = i;
  ae(2);
  memcpy((void *)(longlong)R,(void *)(longlong)K,__n);
  d_01 = i;
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
  ad(0,d_01 - G);
  ax(7);
  ax(0x1000);
  ax(2);
  ad(0xa4,0x58);
  ax(6);
  ax(4);
  puVar5 = (undefined8 *)(longlong)i;
  *puVar5 = 0x2d646c2f62696c2f;
  puVar5[1] = 0x6f732e78756e696c;
  *(undefined4 *)((longlong)puVar5 + 0xf) = 0x322e6f;
  i = i + 0x14;
  ax(1);
  ax(1);
  ax(1);
  ax(0xb);
  ax(4);
  ax(iVar3 + y);
  ax(6);
  ax(uVar2 + y);
  ax(5);
  ax(iVar4 + y);
  ax(10);
  ax(d_00);
  ax(0xb);
  ax(0x10);
  ax(0x11);
  ax(d + y);
  ax(0x12);
  ax(d_01 - d);
  ax(0x13);
  ax(8);
  ax(0);
  ax(0);
  pFVar6 = fopen((char *)(longlong)F,"w");
  fwrite((void *)(longlong)G,1,d_01 - G,(FILE *)(longlong)(int)pFVar6);
  iVar4 = fclose((FILE *)(longlong)(int)pFVar6);
  return iVar4;
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
    Q = (int)pvVar1;
    puVar2 = (undefined8 *)(longlong)Q;
    *puVar2 = 0x20666920746e6920;
    puVar2[1] = 0x6968772065736c65;
    puVar2[2] = 0x6b6165726220656c;
    puVar2[3] = 0x206e727574657220;
    puVar2[4] = 0x6966656420726f66;
    puVar2[5] = 0x206e69616d20656e;
    *(char *)(puVar2 + 6) = '\0';
    D = (int)(puVar2 + 6);
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


