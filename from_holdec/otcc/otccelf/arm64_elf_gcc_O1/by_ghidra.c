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



void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1)
  ;
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
  
  puVar1 = (undefined *)(long)D;
  D = D + 1;
  *puVar1 = (char)a;
  return a;
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
  return iVar1 == 0x5f | uVar2;
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
  long lVar6;
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
        *(undefined4 *)(long)e = 1;
        *(int *)(long)(e + 4) = D;
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
    else if (e == 0x2f && m == 0x2a) {
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
      iVar4 = 0x102ab8;
      do {
        pbVar7 = (byte *)(long)iVar4;
        if (*pbVar7 == 0) {
          return iVar4 + 1;
        }
        bVar1 = *(byte *)(long)(iVar4 + 1);
        C = 0;
        bVar2 = *(byte *)(long)(iVar4 + 2);
        iVar4 = iVar4 + 3;
        while (J = bVar2 - 0x62, J < 0) {
          C = J + C * 0x40 + 0x40;
          bVar2 = *(byte *)(long)iVar4;
          iVar4 = iVar4 + 1;
        }
      } while (bVar1 != 0x40 && m != (uint)bVar1 || e != (uint)*pbVar7);
      iVar4 = J;
      if (m == (uint)bVar1) {
        w();
        iVar4 = 0x1130c4;
        e = 1;
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
      lVar6 = strtol((char *)(ulong)(uint)Z,(char **)0x0,0);
      C = (int)lVar6;
      iVar4 = 0x1130c4;
      e = 2;
    }
    else {
      *(undefined *)(long)D = 0x20;
      iVar4 = Q;
      pcVar5 = strstr((char *)(long)Q,(char *)(long)(Z + -1));
      e = (int)pcVar5 - iVar4;
      *(undefined *)(long)D = 0;
      e = (e + 0x20) * 8;
      iVar4 = e;
      if ((0x218 < e) && (e = e + T, iVar4 = e, *(int *)(long)e == 1)) {
        V = *(int *)(long)(e + 4);
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
    *(char *)(long)iVar2 = (char)d;
    d = d >> 8;
    iVar2 = v;
    uVar1 = d + 1;
  }
  v = iVar2;
  return d;
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
  
  if (a == 0) {
    return 0;
  }
  do {
    iVar1 = ao(a);
    if (*(char *)(long)(a + -1) == '\x05') {
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
  int iVar1;
  
  aw(s + 0x83);
  iVar1 = *(int *)(long)a;
  if (iVar1 < 0x200 && iVar1 != 0) {
    iVar1 = x(0x85,iVar1);
  }
  else {
    iVar1 = x(5,*(int *)(long)(a + 4));
    *(int *)(long)(a + 4) = iVar1;
  }
  return iVar1;
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
  int iVar2;
  undefined *puVar3;
  uint a_00;
  int a_01;
  uint a_02;
  
  a_01 = e;
  a = C;
  iVar2 = J;
  if (e == 0x22) {
    M(i + y);
    while (m != 0x22) {
      an();
      puVar3 = (undefined *)(long)i;
      i = i + 1;
      *puVar3 = (char)m;
      w();
    }
    *(undefined *)(long)i = 0;
    i = i + 4U & 0xfffffffc;
    w();
    av();
LAB_00101994:
    if (e != 0x28) {
      return 0;
    }
    aw(0x50);
    iVar2 = x(0xec81,0);
    av();
    if (e == 0x29) {
      E(iVar2,0);
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
      E(iVar2,a_00);
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
    if (iVar2 == 2) {
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
          iVar2 = 0x188;
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
          iVar2 = (a_01 == 0x100) + 0x188;
LAB_00101adc:
          aw(iVar2);
        }
        else if (a_01 != 0) {
          if (a_01 == 0x100) {
            aw(0x8b);
          }
          else {
            aw(0xbe0f);
          }
          v = v + 1;
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
      iVar2 = x(0xec81,0);
      av();
      a_02 = 0;
      if (e == 0x29) {
        E(iVar2,0);
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
    iVar2 = x(0xec81,0);
    av();
    if (e != 0x29) goto LAB_001018e0;
    E(iVar2,0);
    av();
LAB_00101bc8:
    iVar2 = x(0xe8,*(int *)(long)(a_01 + 4));
    *(int *)(long)(a_01 + 4) = iVar2;
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
  int iVar4;
  uint unaff_w20;
  
  if (s == 1) {
    iVar4 = ab(1);
  }
  else {
    s_00 = s + -1;
    X(s_00);
    a = 0;
    while (iVar1 = e, iVar4 = C, s_00 == J) {
      av();
      unaff_w20 = iVar4;
      if (s_00 < 9) {
        aw(0x50);
        X(s_00);
        aw(0x59);
        if (s - 5U < 2) {
          aq(iVar4);
        }
        else {
          aw(iVar4);
          if (iVar1 == 0x25) {
            aw(0x92);
          }
        }
      }
      else {
        a = aa(iVar4,a);
        X(s_00);
      }
    }
    bVar3 = a != 0;
    bVar2 = false;
    if (bVar3) {
      bVar2 = s + -9 < 0;
    }
    iVar4 = J;
    if ((bVar3 && s_00 != 8) && bVar2 == (bVar3 && SBORROW4(s_00,8))) {
      iVar4 = aa(unaff_w20,a);
      M(unaff_w20 ^ 1);
      I(5);
      H(iVar4);
      iVar4 = M(unaff_w20);
    }
  }
  return iVar4;
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
  int iVar1;
  
  while (s == 0 && e != -1 || e == 0x100) {
    if (e == 0x100) {
      av();
      while (e != 0x3b) {
        if (s == 0) {
          *(int *)(long)e = i;
          i = i + 4;
        }
        else {
          iVar1 = -4 - P;
          P = P + 4;
          *(int *)(long)e = iVar1;
        }
        av();
        if (e == 0x2c) {
          av();
        }
      }
      av();
    }
    else {
      *(int *)(long)e = v;
      av();
      av();
      iVar1 = 8;
      while (e != 0x29) {
        *(int *)(long)e = iVar1;
        iVar1 = iVar1 + 4;
        av();
        if (e == 0x2c) {
          av();
        }
      }
      av();
      P = 0;
      U = 0;
      aw(0xe58955);
      iVar1 = x(0xec81,0);
      S(0);
      H(U);
      aw(0xc3c9);
      E(iVar1,P);
    }
  }
  return e;
}



int S(int s)

{
  int iVar1;
  int iVar2;
  int h;
  
  iVar1 = e;
  if (e == 0x120) {
    av();
    av();
    iVar1 = ac();
    av();
    S(s);
    if (e == 0x138) {
      av();
      iVar2 = I(0);
      H(iVar1);
      S(s);
      iVar1 = H(iVar2);
    }
    else {
      iVar1 = H(iVar1);
    }
  }
  else if (e == 0x160 || e == 0x1f8) {
    av();
    av();
    iVar2 = v;
    if (iVar1 == 0x160) {
      h = ac();
    }
    else {
      if (e != 0x3b) {
        B();
      }
      av();
      iVar2 = v;
      h = 0;
      if (e != 0x3b) {
        h = ac();
      }
      av();
      if (e != 0x29) {
        iVar1 = I(0);
        B();
        I((iVar2 - v) + -5);
        H(iVar1);
        iVar2 = iVar1 + 4;
      }
    }
    av();
    S((int)register0x00000008 + -4);
    I((iVar2 - v) + -5);
    iVar1 = H(h);
  }
  else if (e == 0x7b) {
    av();
    ar(1);
    while (e != 0x7d) {
      S(s);
    }
    iVar1 = av();
  }
  else {
    if (e == 0x1c0) {
      av();
      if (e != 0x3b) {
        B();
      }
      U = I(U);
    }
    else if (e == 400) {
      av();
      iVar1 = I(*(int *)(long)s);
      *(int *)(long)s = iVar1;
    }
    else if (e != 0x3b) {
      B();
    }
    iVar1 = av();
  }
  return iVar1;
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
  int iVar4;
  uint uVar5;
  int local_10;
  
  local_10 = 0;
  iVar3 = Q;
  while( true ) {
    iVar2 = iVar3 + 1;
    cVar1 = *(char *)(long)iVar2;
    iVar3 = iVar2;
    while ((cVar1 != ' ' && (iVar3 < D))) {
      iVar3 = iVar3 + 1;
      cVar1 = *(char *)(long)iVar3;
    }
    if (D == iVar3) break;
    iVar4 = T + (iVar2 - Q) * 8;
    e = iVar4 + 0xf8;
    z = *(int *)(long)e;
    iVar4 = *(int *)(long)(iVar4 + 0xfc);
    if (iVar4 != 0 && z != 1) {
      if (z == 0) {
        if (s == 0) {
          memcpy((void *)(long)i,(char *)(long)iVar2,(long)(iVar3 - iVar2));
          i = ((iVar3 + i) - iVar2) + 1;
        }
        else if (s == 1) {
          ax(local_10 + 0x16);
          ax(0);
          ax(0);
          ax(0x10);
          local_10 = ((local_10 + iVar3) - iVar2) + 1;
        }
        else {
          local_10 = local_10 + 1;
          if (iVar4 != 0) {
            do {
              iVar2 = ao(iVar4);
              uVar5 = (uint)(*(char *)(long)(iVar4 + -1) != '\x05');
              E(iVar4,uVar5 * -4);
              ax((iVar4 - K) + R + y);
              ax(uVar5 + local_10 * 0x100 + 1);
              iVar4 = iVar2;
            } while (iVar2 != 0);
          }
        }
      }
      else if (s == 0) {
        ap(iVar4,z);
      }
    }
  }
  return D;
}



int au(int F)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int d;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  FILE *pFVar9;
  
  R = i;
  iVar4 = v - K;
  v = K;
  aw(0x505458);
  x(0xe8,(*(int *)(long)(T + 0x250) - v) + -5);
  aw(0xc389);
  M(1);
  aw(0x80cd);
  iVar7 = iVar4 + i;
  *(undefined8 *)(long)(iVar7 + 1) = 0x2e6f732e6362696c;
  *(undefined2 *)((undefined8 *)(long)(iVar7 + 1) + 1) = 0x36;
  *(undefined8 *)(long)(iVar7 + 0xb) = 0x6f732e6c6462696c;
  *(undefined4 *)((long)(undefined8 *)(long)(iVar7 + 0xb) + 7) = 0x322e6f;
  i = iVar7 + 0x16;
  ae(0);
  d = i - iVar7;
  uVar2 = i + 3U & 0xfffffffc;
  i = uVar2;
  ax(0);
  ax(0);
  ax(0);
  ax(0);
  ae(1);
  iVar5 = i;
  iVar6 = i - uVar2;
  iVar3 = iVar6 + 0xf;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  iVar3 = iVar3 >> 4;
  ax(1);
  ax(iVar3);
  ax(1);
  ax(0);
  if (2 < iVar3) {
    iVar6 = 2;
    do {
      iVar1 = iVar6 + 1;
      ax(iVar6);
      iVar6 = iVar1;
    } while (iVar3 != iVar1);
  }
  ax(0);
  iVar3 = i;
  ae(2);
  memcpy((void *)(long)R,(void *)(long)K,(long)iVar4);
  iVar4 = i;
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
  ad(0,iVar4 - G);
  ax(7);
  ax(0x1000);
  ax(2);
  ad(0xa4,0x58);
  ax(6);
  ax(4);
  puVar8 = (undefined8 *)(long)i;
  *puVar8 = 0x2d646c2f62696c2f;
  puVar8[1] = 0x6f732e78756e696c;
  *(undefined4 *)((long)puVar8 + 0xf) = 0x322e6f;
  i = i + 0x14;
  ax(1);
  ax(1);
  ax(1);
  ax(0xb);
  ax(4);
  ax(iVar5 + y);
  ax(6);
  ax(uVar2 + y);
  ax(5);
  ax(iVar7 + y);
  ax(10);
  ax(d);
  ax(0xb);
  ax(0x10);
  ax(0x11);
  ax(iVar3 + y);
  ax(0x12);
  ax(iVar4 - iVar3);
  ax(0x13);
  ax(8);
  ax(0);
  ax(0);
  pFVar9 = fopen((char *)(long)F,"w");
  fwrite((void *)(long)G,1,(long)(iVar4 - G),(FILE *)(long)(int)pFVar9);
  iVar7 = fclose((FILE *)(long)(int)pFVar9);
  return iVar7;
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
    puVar2 = (undefined8 *)(long)Q;
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
    pFVar3 = fopen((char *)(long)*(int *)(long)(a + 4),"r");
    ak = (int)pFVar3;
    y = 0x8048000 - G;
    i = i + 0xfc;
    v = v + 0x11;
    w();
    av();
    ar(0);
    au(*(int *)(long)(a + 8));
  }
  return 0;
}



void FUN_00102a1c(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // WARNING: Could not recover jumptable at 0x00102a1c. Too many branches
                    // WARNING: Treating indirect jump as call
  UNRECOVERED_JUMPTABLE = (code *)UndefinedInstructionException(0,0x102a1c);
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


