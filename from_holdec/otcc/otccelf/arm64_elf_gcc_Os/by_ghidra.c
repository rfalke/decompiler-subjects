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

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
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



void FUN_00100d60(void)

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

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = strcpy(__dest,__src);
  return pcVar1;
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
  char *pcVar2;
  FILE *pFVar3;
  
  if (d < 3) {
    puts("usage: otccelf file.c outfile");
  }
  else {
    pvVar1 = calloc(1,99999);
    Q = (int)pvVar1;
    pcVar2 = strcpy((char *)(longlong)Q," int if else while break return for define main ");
    D = (int)pcVar2 + 0x30;
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



void _start(undefined8 param_1)

{
  undefined8 param_9;
  
  __libc_start_main(main,param_9,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1);
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x00101028)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x00101050)
// WARNING: Removing unreachable block (ram,0x0010105c)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0010108c)
// WARNING: Removing unreachable block (ram,0x00101098)

void register_tm_clones(void)

{
  return;
}



void FUN_001010a4(void)

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
  int iVar1;
  byte *pbVar2;
  
  if (V == 0) {
    iVar1 = fgetc((FILE *)(longlong)ak);
    m = iVar1;
  }
  else {
    pbVar2 = (byte *)(longlong)V;
    iVar1 = 0x1130a4;
    V = V + 1;
    m = (uint)*pbVar2;
    if (*pbVar2 == 2) {
      V = 0;
      iVar1 = al;
      m = al;
    }
  }
  return iVar1;
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
  if (m == 0x5c) {
    w();
    if (m == 0x6e) {
      m = 10;
    }
  }
  return m;
}



int av(void)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  longlong lVar7;
  
  do {
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
    e = iVar4;
    J = 0;
    iVar4 = am();
    if (iVar4 == 0) {
      w();
      if (e == 0x27) {
        e = 2;
        an();
        C = m;
        w();
        iVar4 = w();
        return iVar4;
      }
      if (e != 0x2f || m != 0x2a) {
        iVar4 = 0x102700;
        do {
          pbVar6 = (byte *)(longlong)iVar4;
          if (*pbVar6 == 0) {
            return iVar4;
          }
          lVar7 = (longlong)(iVar4 + 3);
          bVar2 = *(byte *)(longlong)(iVar4 + 1);
          C = 0;
          while( true ) {
            pbVar1 = (byte *)(lVar7 + -1);
            iVar4 = (int)lVar7;
            lVar7 = lVar7 + 1;
            J = (uint)*pbVar1 - 0x62;
            if (-1 < J) break;
            C = J + C * 0x40 + 0x40;
          }
        } while (bVar2 != 0x40 && m != (uint)bVar2 || e != (uint)*pbVar6);
        if (m == (uint)bVar2) {
          w();
          iVar4 = 1;
          e = 1;
        }
        return iVar4;
      }
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
        return 2;
      }
      *(undefined *)(longlong)D = 0x20;
      iVar4 = Q;
      pcVar5 = strstr((char *)(longlong)Q,(char *)(longlong)(Z + -1));
      e = (int)pcVar5 - iVar4;
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
    }
    w();
  } while( true );
}



int aw(int d)

{
  undefined *puVar1;
  
  while (1 < d + 1U) {
    puVar1 = (undefined *)(longlong)v;
    v = v + 1;
    *puVar1 = (char)d;
    d = d >> 8;
  }
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
  int d;
  ulonglong uVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  int extraout_w8;
  
  uVar1 = (ulonglong)(uint)z;
  lVar4 = 0x112000;
  piVar2 = &G;
  piVar3 = &K;
  if (a != 0) {
    do {
      ao(a);
      d = (int)uVar1;
      if (*(char *)(longlong)(a + -1) == '\x05') {
        if ((d < *piVar2) || (i <= d)) {
          d = (d - *piVar3) + R + **(int **)(lVar4 + 0xfc0);
        }
        else {
          d = d + **(int **)(lVar4 + 0xfc0);
        }
      }
      else {
        d = (d - a) + -4;
      }
      d = E(a,d);
      a = extraout_w8;
    } while (extraout_w8 != 0);
    return d;
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
  int *piVar2;
  
  aw(d);
  piVar2 = &v;
  E(v,a);
  iVar1 = *piVar2;
  *piVar2 = iVar1 + 4;
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
  int *piVar1;
  
  aw(s + 0x83);
  a_00 = *(int *)(longlong)a;
  if (a_00 < 0x200 && a_00 != 0) {
    a_00 = x(0x85,a_00);
    return a_00;
  }
  piVar1 = (int *)(longlong)(a + 4);
  a_00 = x(5,*piVar1);
  *piVar1 = a_00;
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
  int a;
  int d;
  undefined *puVar1;
  int a_00;
  uint uVar2;
  
  a_00 = e;
  d = C;
  a = J;
  if (e == 0x22) {
    M(i + y);
    while (m != 0x22) {
      an();
      puVar1 = (undefined *)(longlong)i;
      i = i + 1;
      *puVar1 = (char)m;
      w();
    }
    *(undefined *)(longlong)i = 0;
    i = i + 4U & 0xfffffffc;
    w();
    goto LAB_001018a0;
  }
  av();
  if (a_00 == 2) {
    M(d);
  }
  else {
    if (a == 2) {
      ab(0);
      x(0xb9,0);
      if (a_00 == 0x21) {
        aq(d);
      }
      else {
LAB_00101a4c:
        aw(d);
      }
    }
    else {
      if (a_00 == 0x28) {
        B();
      }
      else {
        if (a_00 == 0x2a) {
          av();
          a_00 = e;
          av();
          av();
          if (e == 0x2a) {
            av();
            a_00 = 0;
            av();
            av();
            av();
          }
          av();
          ab(0);
          if (e == 0x3d) {
            av();
            aw(0x50);
            B();
            aw(0x59);
            d = (uint)(a_00 == 0x100) + 0x188;
            goto LAB_00101a4c;
          }
          uVar2 = 1;
          if (a_00 == 0) goto LAB_00101900;
          d = 0x8b;
          if (a_00 != 0x100) {
            d = 0xbe0f;
          }
          aw(d);
          v = v + 1;
          goto LAB_001018fc;
        }
        if (a_00 != 0x26) {
          uVar2 = (uint)(e == 0x3d) & s;
          if (uVar2 == 0) {
            if ((e != 0x28) && (W(8,a_00), J == 0xb)) {
              W(0,a_00);
              aw(C);
              av();
            }
          }
          else {
            av();
            uVar2 = 0;
            B();
            W(6,a_00);
          }
          goto LAB_00101900;
        }
        W(10,e);
      }
LAB_001018a0:
      av();
    }
  }
LAB_001018fc:
  uVar2 = 1;
LAB_00101900:
  if (e != 0x28) {
    return e;
  }
  if (uVar2 != 0) {
    aw(0x50);
  }
  d = 0;
  a = x(0xec81,0);
  av();
  while (e != 0x29) {
    B();
    x(0x248489,d);
    if (e == 0x2c) {
      av();
    }
    d = d + 4;
  }
  E(a,d);
  av();
  if (uVar2 == 0) {
    a = x(0xe8,*(int *)(longlong)(a_00 + 4));
    *(int *)(longlong)(a_00 + 4) = a;
    if (d == 0) {
      return a;
    }
  }
  else {
    x(0x2494ff,d);
    d = d + 4;
  }
  d = x(0xc481,d);
  return d;
}



int X(int s)

{
  int d;
  int iVar1;
  bool bVar2;
  bool bVar3;
  int s_00;
  int a;
  uint unaff_w20;
  
  if (s == 1) {
    s_00 = ab(1);
    return s_00;
  }
  s_00 = s + -1;
  X(s_00);
  a = 0;
  while (iVar1 = e, d = C, s_00 == J) {
    av();
    unaff_w20 = d;
    if (s_00 < 9) {
      aw(0x50);
      X(s_00);
      aw(0x59);
      if (s - 5U < 2) {
        aq(d);
      }
      else {
        aw(d);
        if (iVar1 == 0x25) {
          aw(0x92);
        }
      }
    }
    else {
      a = aa(d,a);
      X(s_00);
    }
  }
  bVar3 = a != 0;
  bVar2 = false;
  if (bVar3) {
    bVar2 = s + -9 < 0;
  }
  if ((bVar3 && s_00 != 8) && bVar2 == (bVar3 && SBORROW4(s_00,8))) {
    s_00 = aa(unaff_w20,a);
    M(unaff_w20 ^ 1);
    I(5);
    H(s_00);
    s_00 = M(unaff_w20);
    return s_00;
  }
  return J;
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
      a = 8;
      *(int *)(longlong)e = v;
      av();
      av();
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
  int iVar1;
  int a;
  int *piVar2;
  int iVar3;
  int h;
  
  iVar1 = e;
  if (e == 0x120) {
    av();
    av();
    h = ac();
    av();
    S(s);
    if (e == 0x138) {
      av();
      iVar1 = I(0);
      H(h);
      S(s);
      h = iVar1;
    }
  }
  else {
    if (e != 0x160 && e != 0x1f8) {
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
            B();
          }
          piVar2 = &U;
          iVar1 = I(U);
          *piVar2 = iVar1;
        }
        else {
          if (e == 400) {
            av();
            iVar1 = I(*(int *)(longlong)s);
            *(int *)(longlong)s = iVar1;
          }
          else {
            if (e != 0x3b) {
              B();
            }
          }
        }
      }
      iVar1 = av();
      return iVar1;
    }
    av();
    av();
    iVar3 = v;
    if (iVar1 == 0x160) {
      h = ac();
    }
    else {
      if (e != 0x3b) {
        B();
      }
      av();
      iVar3 = v;
      h = 0;
      if (e != 0x3b) {
        h = ac();
      }
      av();
      if (e != 0x29) {
        a = I(0);
        B();
        iVar1 = iVar3 - v;
        iVar3 = a + 4;
        I(iVar1 + -5);
        H(a);
      }
    }
    av();
    S((int)register0x00000008 + -4);
    I((iVar3 - v) + -5);
  }
  iVar1 = H(h);
  return iVar1;
}



int ax(int d)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = &i;
  E(i,d);
  iVar1 = *piVar2;
  *piVar2 = iVar1 + 4;
  return iVar1 + 4;
}



int ad(int d,int a)

{
  int iVar1;
  
  ax(d);
  d = d + 0x8048000;
  ax(d);
  ax(d);
  ax(a);
  iVar1 = ax(a);
  return iVar1;
}



int ae(int s)

{
  int iVar1;
  int z;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int a;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *extraout_x8;
  int extraout_w9;
  int extraout_w10;
  int extraout_w11;
  int iVar8;
  
  iVar8 = 0;
  iVar3 = Q;
  while( true ) {
    iVar1 = iVar3 + 1;
    pcVar4 = (char *)(longlong)iVar1;
    while ((iVar3 = (int)pcVar4, *pcVar4 != ' ' && (iVar3 < D))) {
      pcVar4 = pcVar4 + 1;
    }
    if (iVar3 == D) break;
    a = T + (iVar1 - Q) * 8;
    e = a + 0xf8;
    a = *(int *)(longlong)(a + 0xfc);
    z = *(int *)(longlong)e;
    if (a != 0 && z != 1) {
      if (z == 0) {
        if (s == 0) {
          memcpy((void *)(longlong)i,(char *)(longlong)iVar1,iVar3 - iVar1);
          i = ((iVar3 + i) - iVar1) + 1;
        }
        else {
          if (s == 1) {
            ax(iVar8 + 0x16);
            ax(0);
            ax(0);
            ax(0x10);
            iVar8 = ((iVar3 + iVar8) - iVar1) + 1;
          }
          else {
            iVar8 = iVar8 + 1;
            piVar7 = &R;
            piVar6 = &y;
            do {
              ao(a);
              bVar2 = *(char *)(longlong)(a + -1) != '\x05';
              uVar5 = (uint)bVar2;
              E(a,(uint)bVar2 * extraout_w11);
              ax((a - *extraout_x8) + *piVar7 + *piVar6);
              ax(uVar5 + extraout_w10 + 1);
              a = extraout_w9;
            } while (extraout_w9 != 0);
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
  return iVar3;
}



int au(int F)

{
  uint uVar1;
  size_t __n;
  int d;
  int iVar2;
  int iVar3;
  int d_00;
  int iVar4;
  char *pcVar5;
  FILE *pFVar6;
  int *piVar7;
  ulonglong uVar8;
  
  iVar4 = v;
  piVar7 = &v;
  R = i;
  v = K;
  __n = iVar4 - K;
  aw(0x505458);
  x(0xe8,(*(int *)(longlong)(T + 0x250) - *piVar7) + -5);
  aw(0xc389);
  M(1);
  aw(0x80cd);
  iVar4 = __n + i;
  pcVar5 = strcpy((char *)(longlong)(iVar4 + 1),"libc.so.6");
  pcVar5 = strcpy((char *)(longlong)((int)pcVar5 + 10),"libdl.so.2");
  i = (int)pcVar5 + 0xb;
  ae(0);
  d = i - iVar4;
  uVar1 = i + 3U & 0xfffffffc;
  i = uVar1;
  ax(0);
  ax(0);
  ax(0);
  ax(0);
  ae(1);
  iVar2 = i;
  uVar8 = (ulonglong)(uint)((int)(i - uVar1) / 0x10);
  ax(1);
  ax((int)uVar8);
  ax(1);
  ax(0);
  d_00 = 2;
  while (d_00 < (int)uVar8) {
    iVar3 = d_00 + 1;
    ax(d_00);
    d_00 = iVar3;
  }
  ax(0);
  d_00 = i;
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
  pcVar5 = strcpy((char *)(longlong)i,"/lib/ld-linux.so.2");
  i = (int)pcVar5 + 0x14;
  ax(1);
  ax(1);
  ax(1);
  ax(0xb);
  ax(4);
  ax(iVar2 + y);
  ax(6);
  ax(uVar1 + y);
  ax(5);
  ax(iVar4 + y);
  ax(10);
  ax(d);
  ax(0xb);
  ax(0x10);
  ax(0x11);
  ax(d_00 + y);
  ax(0x12);
  ax(iVar3 - d_00);
  ax(0x13);
  ax(8);
  ax(0);
  ax(0);
  pFVar6 = fopen((char *)(longlong)F,"w");
  fwrite((void *)(longlong)G,1,iVar3 - G,(FILE *)(longlong)(int)pFVar6);
  iVar4 = fclose((FILE *)(longlong)(int)pFVar6);
  return iVar4;
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


