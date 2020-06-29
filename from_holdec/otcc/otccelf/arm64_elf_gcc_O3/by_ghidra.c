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
    return 0x11609c;
  }
  V = 0;
  m = al;
  return al;
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
  byte *pbVar1;
  
  if (m == 0x5c) {
    if (V == 0) {
      m = fgetc((FILE *)(longlong)ak);
    }
    else {
      pbVar1 = (byte *)(longlong)V;
      m = ZEXT14(*pbVar1);
      V = V + 1;
      if (*pbVar1 == 2) {
        V = 0;
        m = al;
      }
    }
    if (m == 0x6e) {
      m = 10;
    }
  }
  return m;
}



int av(void)

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
  
  uVar11 = (ulonglong)(uint)m;
  uVar5 = m;
LAB_001012c0:
  do {
    m = uVar5;
    uVar5 = (uint)uVar11;
    uVar5 = isspace(uVar5);
    bVar3 = uVar5 == 0x23;
    uVar5 = bVar3 | uVar5;
    while (uVar5 != 0) {
      if (bVar3) {
        if (V == 0) {
          m = fgetc((FILE *)(longlong)ak);
          av();
        }
        else {
          pbVar7 = (byte *)(longlong)V;
          V = V + 1;
          m = (uint)*pbVar7;
          if (*pbVar7 == 2) {
            V = 0;
            m = al;
          }
          av();
        }
        if (e == 0x218) {
          av();
          puVar8 = (undefined *)(longlong)D;
          D = D + 1;
          *puVar8 = 0x20;
          *(undefined4 *)(longlong)e = 1;
          *(int *)(longlong)(e + 4) = D;
        }
        uVar11 = (ulonglong)(uint)m;
LAB_0010158c:
        uVar4 = (undefined)uVar11;
        if ((int)uVar11 != 10) {
          while( true ) {
            puVar8 = (undefined *)(longlong)D;
            D = D + 1;
            *puVar8 = (char)uVar11;
            if (V == 0) break;
            bVar1 = *(byte *)(longlong)V;
            uVar11 = (ulonglong)bVar1;
            m = ZEXT14(bVar1);
            V = V + 1;
            if (bVar1 != 2) goto LAB_0010158c;
            m = al;
            uVar11 = (ulonglong)(uint)al;
            uVar4 = (undefined)al;
            V = 0;
            if (al == 10) goto LAB_001015e8;
          }
          m = fgetc((FILE *)(longlong)ak);
          uVar11 = (ulonglong)(uint)m;
          goto LAB_0010158c;
        }
LAB_001015e8:
        puVar8 = (undefined *)(longlong)D;
        D = D + 1;
        *puVar8 = uVar4;
        puVar8 = (undefined *)(longlong)D;
        D = D + 1;
        *puVar8 = 2;
      }
      uVar5 = al;
      if (V == 0) {
        uVar5 = fgetc((FILE *)(longlong)ak);
        uVar11 = (ulonglong)uVar5;
        goto LAB_001012c0;
      }
      bVar1 = *(byte *)(longlong)V;
      uVar11 = (ulonglong)bVar1;
      V = V + 1;
      uVar5 = (uint)bVar1;
      if (bVar1 != 2) goto LAB_001012c0;
      V = 0;
      m = al;
      uVar5 = isspace(al);
      bVar3 = uVar5 == 0x23;
      uVar5 = bVar3 | uVar5;
    }
    J = 0;
    e = uVar5;
    uVar5 = isalnum(uVar5);
    if ((uVar5 == 0x5f | uVar5) == 0) {
      if (V == 0) {
        m = fgetc((FILE *)(longlong)ak);
        uVar5 = e;
      }
      else {
        pbVar7 = (byte *)(longlong)V;
        m = ZEXT14(*pbVar7);
        V = V + 1;
        if (*pbVar7 == 2) {
          V = 0;
          m = al;
        }
      }
      if (uVar5 == 0x27) {
        e = 2;
        if (m == 0x5c) {
          if (V == 0) {
            m = fgetc((FILE *)(longlong)ak);
LAB_00101be8:
            if (m == 0x6e) {
LAB_00101bf0:
              m = 10;
            }
            goto LAB_001018d4;
          }
          pbVar7 = (byte *)(longlong)V;
          m = ZEXT14(*pbVar7);
          V = V + 1;
          if (*pbVar7 != 2) goto LAB_00101be8;
          V = 0;
          m = al;
          if (al == 0x6e) goto LAB_00101bf0;
LAB_00101b98:
          C = m;
          m = fgetc((FILE *)(longlong)ak);
        }
        else {
LAB_001018d4:
          C = m;
          if (V == 0) goto LAB_00101b98;
          pbVar7 = (byte *)(longlong)V;
          V = V + 1;
          m = (uint)*pbVar7;
          if (*pbVar7 == 2) {
            V = 0;
            m = al;
            goto LAB_00101b38;
          }
        }
        if (V != 0) {
          pbVar7 = (byte *)(longlong)V;
          if (*pbVar7 != 2) {
            V = V + 1;
            m = (uint)*pbVar7;
            return 0;
          }
          V = 0;
          m = al;
          return 0;
        }
LAB_00101b38:
        m = fgetc((FILE *)(longlong)ak);
        return 0;
      }
      if (uVar5 != 0x2f || m != 0x2a) {
        iVar9 = 0x1058e0;
        break;
      }
      if (V == 0) {
        m = fgetc((FILE *)(longlong)ak);
        uVar11 = (ulonglong)(uint)m;
      }
      else {
        bVar1 = *(byte *)(longlong)V;
        uVar11 = (ulonglong)bVar1;
        m = ZEXT14(bVar1);
        V = V + 1;
        if (bVar1 == 2) {
          V = 0;
          uVar11 = (ulonglong)(uint)al;
          m = al;
        }
      }
      do {
        uVar5 = (uint)uVar11;
        if ((uint)uVar11 == 0) goto LAB_001017bc;
joined_r0x00101754:
        if (uVar5 != 0x2a) {
          pbVar7 = (byte *)(longlong)V;
          if (V != 0) goto code_r0x0010175c;
          goto LAB_00101814;
        }
        if (V == 0) {
LAB_00101830:
          m = fgetc((FILE *)(longlong)ak);
          uVar11 = (ulonglong)(uint)m;
        }
        else {
          bVar1 = *(byte *)(longlong)V;
          uVar11 = (ulonglong)bVar1;
          m = ZEXT14(bVar1);
          V = V + 1;
          if (bVar1 == 2) {
            V = 0;
            uVar11 = (ulonglong)(uint)al;
            m = al;
          }
        }
      } while ((int)uVar11 != 0x2f);
      m = 0;
LAB_001017bc:
      if (V == 0) {
        uVar5 = fgetc((FILE *)(longlong)ak);
        uVar11 = (ulonglong)uVar5;
      }
      else {
        bVar1 = *(byte *)(longlong)V;
        uVar11 = (ulonglong)bVar1;
        V = V + 1;
        uVar5 = (uint)bVar1;
        if (bVar1 == 2) {
          V = 0;
          uVar11 = (ulonglong)(uint)al;
          m = al;
          uVar5 = m;
        }
      }
      goto LAB_001012c0;
    }
    puVar8 = (undefined *)(longlong)D;
    D = D + 1;
    *puVar8 = 0x20;
    uVar11 = (ulonglong)(uint)m;
    Z = D;
LAB_001013a8:
    uVar5 = isalnum((int)uVar11);
    if (((int)uVar11 == 0x5f | uVar5) != 0) {
      while( true ) {
        puVar8 = (undefined *)(longlong)D;
        D = D + 1;
        *puVar8 = (char)uVar11;
        iVar9 = al;
        if (V == 0) break;
        bVar1 = *(byte *)(longlong)V;
        uVar11 = (ulonglong)bVar1;
        m = ZEXT14(bVar1);
        V = V + 1;
        if (bVar1 != 2) goto LAB_001013a8;
        V = 0;
        uVar11 = (ulonglong)(uint)al;
        m = al;
        uVar5 = isalnum(al);
        if ((iVar9 == 0x5f | uVar5) == 0) goto LAB_00101428;
      }
      m = fgetc((FILE *)(longlong)ak);
      uVar11 = (ulonglong)(uint)m;
      goto LAB_001013a8;
    }
LAB_00101428:
    if (e - 0x30U < 10) {
      C = strtol((char *)(ulonglong)(uint)Z,(char **)0x0,0);
      e = 2;
      return 0;
    }
    *(undefined *)(longlong)D = 0x20;
    iVar9 = Q;
    pcVar6 = strstr((char *)(longlong)Q,(char *)(longlong)(Z + -1));
    e = (int)pcVar6 - iVar9;
    *(undefined *)(longlong)D = 0;
    e = (e + 0x20) * 8;
    if (e < 0x219) {
      return 0;
    }
    e = e + T;
    if (*(int *)(longlong)e != 1) {
      return 0;
    }
    V = *(int *)(longlong)(e + 4);
    al = m;
    if (V == 0) {
      uVar5 = fgetc((FILE *)(longlong)ak);
      uVar11 = (ulonglong)uVar5;
    }
    else {
      bVar1 = *(byte *)(longlong)V;
      uVar11 = (ulonglong)bVar1;
      V = V + 1;
      uVar5 = (uint)bVar1;
      if (bVar1 == 2) {
        uVar11 = (ulonglong)(uint)m;
        V = 0;
        uVar5 = m;
      }
    }
  } while( true );
LAB_00101a24:
  bVar1 = *(byte *)(longlong)iVar9;
  if (bVar1 == 0) {
    return 0;
  }
  bVar2 = *(byte *)(longlong)(iVar9 + 1);
  C = 0;
  J = (uint)*(byte *)(longlong)(iVar9 + 2) - 0x62;
  if (-1 < J) {
    iVar9 = iVar9 + 3;
    if ((bVar2 == 0x40 || (uint)bVar2 == m) && (uint)bVar1 == uVar5) goto LAB_00101a9c;
    goto LAB_00101a24;
  }
  C = 0;
  lVar10 = (longlong)(iVar9 + 4);
  do {
    iVar9 = (int)lVar10;
    C = J + C * 0x40 + 0x40;
    J = (uint)*(byte *)(lVar10 + -1) - 0x62;
    lVar10 = lVar10 + 1;
  } while (J < 0);
  bVar3 = false;
  if (bVar2 == 0x40 || (uint)bVar2 == m) {
    bVar3 = (uint)bVar1 == uVar5;
  }
  if (bVar3) {
LAB_00101a9c:
    if ((uint)bVar2 != m) {
      return 0;
    }
    w();
    e = 1;
    return 0;
  }
  goto LAB_00101a24;
code_r0x0010175c:
  m = ZEXT14(*pbVar7);
  V = V + 1;
  uVar5 = m;
  if (*pbVar7 == 2) {
    V = 0;
    m = al;
    if (al == 0x2a) goto LAB_00101830;
LAB_00101814:
    m = fgetc((FILE *)(longlong)ak);
    uVar5 = m;
  }
  goto joined_r0x00101754;
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
joined_r0x00101dec:
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
      goto joined_r0x00101dec;
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
  int iVar2;
  int iVar3;
  int in_w1;
  undefined *puVar4;
  
  puVar4 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar4 = 0xb8;
  iVar1 = v + 1;
  iVar2 = v + 2;
  iVar3 = v + 3;
  *(undefined *)(longlong)v = (char)a;
  *(undefined *)(longlong)iVar1 = (char)((uint)a >> 8);
  *(undefined *)(longlong)iVar2 = (char)((uint)a >> 0x10);
  *(undefined *)(longlong)iVar3 = (char)((uint)a >> 0x18);
  v = v + 4;
  return in_w1;
}



int I(int a)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  
  puVar4 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar4 = 0xe9;
  iVar3 = v + 1;
  iVar1 = v + 2;
  iVar2 = v + 3;
  *(undefined *)(longlong)v = (char)a;
  *(undefined *)(longlong)iVar3 = (char)((uint)a >> 8);
  *(undefined *)(longlong)iVar1 = (char)((uint)a >> 0x10);
  *(undefined *)(longlong)iVar2 = (char)((uint)a >> 0x18);
  iVar3 = v;
  v = v + 4;
  return iVar3;
}



int aa(int s,int a)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  
  uVar1 = s + 0x85;
  s = s + 0x84;
  puVar5 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar5 = 0x85;
  puVar5 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar5 = 0xc0;
  puVar5 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar5 = 0xf;
  while (1 < uVar1) {
    puVar5 = (undefined *)(longlong)v;
    v = v + 1;
    *puVar5 = (char)s;
    s = s >> 8;
    uVar1 = s + 1;
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



int aq(int a)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  
  puVar5 = (undefined *)(longlong)v;
  uVar1 = a + 0x91;
  a = a + 0x90;
  v = v + 1;
  *puVar5 = 0x39;
  puVar5 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar5 = 0xc1;
  puVar5 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar5 = 0xb8;
  iVar2 = v + 1;
  iVar3 = v + 2;
  iVar4 = v + 3;
  *(undefined *)(longlong)v = 0;
  *(undefined *)(longlong)iVar2 = 0;
  *(undefined *)(longlong)iVar3 = 0;
  *(undefined *)(longlong)iVar4 = 0;
  iVar2 = v + 4;
  v = v + 5;
  *(undefined *)(longlong)iVar2 = 0xf;
  while (1 < uVar1) {
    puVar5 = (undefined *)(longlong)v;
    v = v + 1;
    *puVar5 = (char)a;
    a = a >> 8;
    uVar1 = a + 1;
  }
  puVar5 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar5 = 0xc0;
  return 0;
}



int W(int s,int a)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  
  uVar1 = s + 0x84;
  s = s + 0x83;
  while (1 < uVar1) {
    puVar6 = (undefined *)(longlong)v;
    v = v + 1;
    *puVar6 = (char)s;
    s = s >> 8;
    uVar1 = s + 1;
  }
  iVar4 = *(int *)(longlong)a;
  if (iVar4 < 0x200 && iVar4 != 0) {
    puVar6 = (undefined *)(longlong)v;
    v = v + 1;
    *puVar6 = 0x85;
    iVar2 = v + 1;
    iVar3 = v + 2;
    iVar5 = v + 3;
    *(undefined *)(longlong)v = (char)iVar4;
    *(undefined *)(longlong)iVar2 = (char)((uint)iVar4 >> 8);
    *(undefined *)(longlong)iVar3 = (char)((uint)iVar4 >> 0x10);
    *(undefined *)(longlong)iVar5 = (char)((uint)iVar4 >> 0x18);
    v = v + 4;
    return 0x1160a8;
  }
  iVar5 = *(int *)(longlong)(a + 4);
  puVar6 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar6 = 5;
  iVar4 = v + 1;
  iVar2 = v + 2;
  iVar3 = v + 3;
  *(undefined *)(longlong)v = (char)iVar5;
  *(undefined *)(longlong)iVar4 = (char)((uint)iVar5 >> 8);
  *(undefined *)(longlong)iVar2 = (char)((uint)iVar5 >> 0x10);
  *(undefined *)(longlong)iVar3 = (char)((uint)iVar5 >> 0x18);
  iVar4 = v + 4;
  *(int *)(longlong)(a + 4) = v;
  v = iVar4;
  return 0x1160a8;
}



int X(int s)

{
  int iVar1;
  int a;
  int a_00;
  uint uVar2;
  undefined uVar3;
  undefined uVar4;
  undefined uVar5;
  ulonglong uVar6;
  bool bVar7;
  bool bVar8;
  int s_00;
  undefined *puVar9;
  ulonglong unaff_x20;
  int iVar10;
  
  if (s == 1) {
    s_00 = ab(1);
    return s_00;
  }
  s_00 = s + -1;
  X(s_00);
  iVar10 = 0;
LAB_00102314:
  do {
    uVar3 = (undefined)((uint)iVar10 >> 8);
    uVar4 = (undefined)((uint)iVar10 >> 0x10);
    uVar5 = (undefined)((uint)iVar10 >> 0x18);
    iVar1 = (int)unaff_x20;
    while( true ) {
      a = e;
      a_00 = C;
      if (s_00 != J) {
        bVar8 = iVar10 != 0;
        bVar7 = false;
        if (bVar8) {
          bVar7 = s + -9 < 0;
        }
        if ((!bVar8 || s_00 == 8) || bVar7 != (bVar8 && SBORROW4(s_00,8))) {
          return J;
        }
        uVar2 = iVar1 + 0x85;
        s_00 = iVar1 + 0x84;
        puVar9 = (undefined *)(longlong)v;
        v = v + 1;
        *puVar9 = 0x85;
        puVar9 = (undefined *)(longlong)v;
        v = v + 1;
        *puVar9 = 0xc0;
        puVar9 = (undefined *)(longlong)v;
        v = v + 1;
        *puVar9 = 0xf;
        while (a_00 = v, 1 < uVar2) {
          puVar9 = (undefined *)(longlong)v;
          v = v + 1;
          *puVar9 = (char)s_00;
          s_00 = s_00 >> 8;
          uVar2 = s_00 + 1;
        }
        s_00 = v + 1;
        *(undefined *)(longlong)v = (char)iVar10;
        *(undefined *)(longlong)s_00 = uVar3;
        *(undefined *)(longlong)(a_00 + 2) = uVar4;
        *(undefined *)(longlong)(a_00 + 3) = uVar5;
        a = v;
        s_00 = v + 4;
        v = v + 5;
        *(undefined *)(longlong)s_00 = 0xb8;
        iVar10 = v;
        s_00 = v + 1;
        *(byte *)(longlong)v = (byte)iVar1 ^ 1;
        uVar3 = (undefined)((uint)iVar1 >> 8);
        *(undefined *)(longlong)s_00 = uVar3;
        uVar4 = (undefined)((uint)iVar1 >> 0x10);
        *(undefined *)(longlong)(iVar10 + 2) = uVar4;
        uVar5 = (undefined)((uint)iVar1 >> 0x18);
        *(undefined *)(longlong)(iVar10 + 3) = uVar5;
        s_00 = v + 4;
        v = v + 5;
        *(undefined *)(longlong)s_00 = 0xe9;
        s_00 = v + 1;
        iVar10 = v + 2;
        a_00 = v + 3;
        *(undefined *)(longlong)v = 5;
        *(undefined *)(longlong)s_00 = 0;
        *(undefined *)(longlong)iVar10 = 0;
        *(undefined *)(longlong)a_00 = 0;
        v = v + 4;
        ap(a,v);
        puVar9 = (undefined *)(longlong)v;
        v = v + 1;
        *puVar9 = 0xb8;
        s_00 = v + 1;
        iVar10 = v + 2;
        a_00 = v + 3;
        *(byte *)(longlong)v = (byte)iVar1;
        *(undefined *)(longlong)s_00 = uVar3;
        *(undefined *)(longlong)iVar10 = uVar4;
        *(undefined *)(longlong)a_00 = uVar5;
        v = v + 4;
        return v;
      }
      unaff_x20 = (ulonglong)(uint)C;
      av();
      if (8 < s_00) break;
      puVar9 = (undefined *)(longlong)v;
      v = v + 1;
      *puVar9 = 0x50;
      X(s_00);
      puVar9 = (undefined *)(longlong)v;
      v = v + 1;
      *puVar9 = 0x59;
      uVar6 = unaff_x20;
      uVar2 = a_00;
      if (s - 5U < 2) {
        aq(a_00);
        goto LAB_00102314;
      }
      while (1 < uVar2 + 1) {
        puVar9 = (undefined *)(longlong)v;
        v = v + 1;
        *puVar9 = (char)uVar6;
        uVar2 = (int)uVar6 >> 8;
        uVar6 = (ulonglong)uVar2;
      }
      if (a != 0x25) goto LAB_00102314;
      puVar9 = (undefined *)(longlong)v;
      v = v + 1;
      *puVar9 = 0x92;
      iVar1 = a_00;
    }
    uVar2 = a_00 + 0x85;
    a_00 = a_00 + 0x84;
    puVar9 = (undefined *)(longlong)v;
    v = v + 1;
    *puVar9 = 0x85;
    puVar9 = (undefined *)(longlong)v;
    v = v + 1;
    *puVar9 = 0xc0;
    puVar9 = (undefined *)(longlong)v;
    v = v + 1;
    *puVar9 = 0xf;
    while (1 < uVar2) {
      puVar9 = (undefined *)(longlong)v;
      v = v + 1;
      *puVar9 = (char)a_00;
      a_00 = a_00 >> 8;
      uVar2 = a_00 + 1;
    }
    iVar1 = v + 1;
    a_00 = v + 2;
    a = v + 3;
    *(undefined *)(longlong)v = (char)iVar10;
    *(undefined *)(longlong)iVar1 = uVar3;
    *(undefined *)(longlong)a_00 = uVar4;
    *(undefined *)(longlong)a = uVar5;
    iVar10 = v;
    v = v + 4;
    X(s_00);
  } while( true );
}



int X(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int a;
  int iVar4;
  int iVar5;
  undefined uVar6;
  undefined uVar7;
  undefined uVar8;
  int iVar9;
  undefined *puVar10;
  int iVar11;
  
  X(10);
  if (J == 10) {
    iVar11 = 0;
    do {
      iVar9 = C;
      av();
      uVar1 = iVar9 + 0x85;
      iVar2 = iVar9 + 0x84;
      puVar10 = (undefined *)(longlong)v;
      v = v + 1;
      *puVar10 = 0x85;
      puVar10 = (undefined *)(longlong)v;
      v = v + 1;
      *puVar10 = 0xc0;
      puVar10 = (undefined *)(longlong)v;
      v = v + 1;
      *puVar10 = 0xf;
      iVar5 = iVar2;
      uVar3 = uVar1;
      while (1 < uVar3) {
        puVar10 = (undefined *)(longlong)v;
        v = v + 1;
        *puVar10 = (char)iVar5;
        iVar5 = iVar5 >> 8;
        uVar3 = iVar5 + 1;
      }
      iVar5 = v + 1;
      a = v + 2;
      iVar4 = v + 3;
      *(undefined *)(longlong)v = (char)iVar11;
      *(undefined *)(longlong)iVar5 = (char)((uint)iVar11 >> 8);
      *(undefined *)(longlong)a = (char)((uint)iVar11 >> 0x10);
      *(undefined *)(longlong)iVar4 = (char)((uint)iVar11 >> 0x18);
      iVar11 = v;
      v = v + 4;
      X(10);
    } while (J == 10);
    if (iVar11 != 0) {
      puVar10 = (undefined *)(longlong)v;
      v = v + 1;
      *puVar10 = 0x85;
      puVar10 = (undefined *)(longlong)v;
      v = v + 1;
      *puVar10 = 0xc0;
      puVar10 = (undefined *)(longlong)v;
      v = v + 1;
      *puVar10 = 0xf;
      while (iVar5 = v, 1 < uVar1) {
        puVar10 = (undefined *)(longlong)v;
        v = v + 1;
        *puVar10 = (char)iVar2;
        iVar2 = iVar2 >> 8;
        uVar1 = iVar2 + 1;
      }
      iVar2 = v + 1;
      *(undefined *)(longlong)v = (char)iVar11;
      *(undefined *)(longlong)iVar2 = (char)((uint)iVar11 >> 8);
      *(undefined *)(longlong)(iVar5 + 2) = (char)((uint)iVar11 >> 0x10);
      *(undefined *)(longlong)(iVar5 + 3) = (char)((uint)iVar11 >> 0x18);
      a = v;
      iVar11 = v + 4;
      v = v + 5;
      *(undefined *)(longlong)iVar11 = 0xb8;
      iVar2 = v;
      iVar11 = v + 1;
      *(byte *)(longlong)v = (byte)iVar9 ^ 1;
      uVar6 = (undefined)((uint)iVar9 >> 8);
      *(undefined *)(longlong)iVar11 = uVar6;
      uVar7 = (undefined)((uint)iVar9 >> 0x10);
      *(undefined *)(longlong)(iVar2 + 2) = uVar7;
      uVar8 = (undefined)((uint)iVar9 >> 0x18);
      *(undefined *)(longlong)(iVar2 + 3) = uVar8;
      iVar11 = v + 4;
      v = v + 5;
      *(undefined *)(longlong)iVar11 = 0xe9;
      iVar11 = v + 1;
      iVar2 = v + 2;
      iVar5 = v + 3;
      *(undefined *)(longlong)v = 5;
      *(undefined *)(longlong)iVar11 = 0;
      *(undefined *)(longlong)iVar2 = 0;
      *(undefined *)(longlong)iVar5 = 0;
      v = v + 4;
      ap(a,v);
      puVar10 = (undefined *)(longlong)v;
      v = v + 1;
      *puVar10 = 0xb8;
      iVar11 = v + 1;
      iVar2 = v + 2;
      iVar5 = v + 3;
      *(byte *)(longlong)v = (byte)iVar9;
      *(undefined *)(longlong)iVar11 = uVar6;
      *(undefined *)(longlong)iVar2 = uVar7;
      *(undefined *)(longlong)iVar5 = uVar8;
      v = v + 4;
      return v;
    }
  }
  return J;
}



int ab(int s)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int a;
  ulonglong uVar5;
  byte *pbVar6;
  undefined *puVar7;
  undefined uVar8;
  undefined uVar9;
  int a_00;
  undefined uVar10;
  undefined uVar11;
  uint uVar12;
  uint uVar13;
  
  a_00 = e;
  a = C;
  iVar1 = J;
  if (e == 0x22) {
    iVar1 = i + y;
    puVar7 = (undefined *)(longlong)v;
    v = v + 1;
    *puVar7 = 0xb8;
    iVar2 = v;
    a = v + 1;
    *(undefined *)(longlong)v = (char)iVar1;
    *(undefined *)(longlong)a = (char)((uint)iVar1 >> 8);
    *(undefined *)(longlong)(iVar2 + 2) = (char)((uint)iVar1 >> 0x10);
    *(undefined *)(longlong)(iVar2 + 3) = (char)((uint)iVar1 >> 0x18);
    uVar5 = (ulonglong)(uint)m;
    v = v + 4;
LAB_00102e6c:
    if ((int)uVar5 != 0x22) {
      while( true ) {
        uVar11 = (undefined)uVar5;
        if ((int)uVar5 == 0x5c) {
          if (V == 0) {
            m = fgetc((FILE *)(longlong)ak);
          }
          else {
            pbVar6 = (byte *)(longlong)V;
            m = ZEXT14(*pbVar6);
            V = V + 1;
            if (*pbVar6 == 2) {
              V = 0;
              m = al;
            }
          }
          uVar11 = (undefined)m;
          if (m == 0x6e) {
            m = 10;
            uVar11 = 10;
          }
        }
        puVar7 = (undefined *)(longlong)i;
        i = i + 1;
        *puVar7 = uVar11;
        if (V == 0) break;
        bVar4 = *(byte *)(longlong)V;
        uVar5 = (ulonglong)bVar4;
        m = ZEXT14(bVar4);
        V = V + 1;
        if (bVar4 != 2) goto LAB_00102e6c;
        V = 0;
        m = al;
        uVar5 = (ulonglong)(uint)al;
        if (al == 0x22) goto LAB_00102ee0;
      }
      m = fgetc((FILE *)(longlong)ak);
      uVar5 = (ulonglong)(uint)m;
      goto LAB_00102e6c;
    }
LAB_00102ee0:
    *(undefined *)(longlong)i = 0;
    i = i + 4U & 0xfffffffc;
    if (V == 0) {
      m = fgetc((FILE *)(longlong)ak);
    }
    else {
      pbVar6 = (byte *)(longlong)V;
      m = ZEXT14(*pbVar6);
      V = V + 1;
      if (*pbVar6 == 2) {
        V = 0;
        m = al;
      }
    }
    av();
  }
  else {
    av();
    if (a_00 == 2) {
      puVar7 = (undefined *)(longlong)v;
      v = v + 1;
      *puVar7 = 0xb8;
      iVar2 = v;
      iVar1 = v + 1;
      *(undefined *)(longlong)v = (char)a;
      *(undefined *)(longlong)iVar1 = (char)((uint)a >> 8);
      *(undefined *)(longlong)(iVar2 + 2) = (char)((uint)a >> 0x10);
      *(undefined *)(longlong)(iVar2 + 3) = (char)((uint)a >> 0x18);
      v = v + 4;
    }
    else {
      if (iVar1 == 2) {
        ab(0);
        puVar7 = (undefined *)(longlong)v;
        v = v + 1;
        *puVar7 = 0xb9;
        iVar1 = v + 1;
        iVar2 = v + 2;
        iVar3 = v + 3;
        *(undefined *)(longlong)v = 0;
        *(undefined *)(longlong)iVar1 = 0;
        *(undefined *)(longlong)iVar2 = 0;
        *(undefined *)(longlong)iVar3 = 0;
        v = v + 4;
        if (a_00 == 0x21) {
          aq(a);
        }
        else {
          uVar12 = a + 1;
          while (1 < uVar12) {
            puVar7 = (undefined *)(longlong)v;
            v = v + 1;
            *puVar7 = (char)a;
            a = a >> 8;
            uVar12 = a + 1;
          }
        }
      }
      else {
        if (a_00 == 0x28) {
          X();
          av();
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
              av();
              ab(0);
              if (e == 0x3d) goto LAB_00103364;
            }
            else {
              av();
              ab(0);
              if (e == 0x3d) {
LAB_00103364:
                av();
                puVar7 = (undefined *)(longlong)v;
                v = v + 1;
                *puVar7 = 0x50;
                X();
                a = (uint)(a_00 == 0x100) + 0x188;
                puVar7 = (undefined *)(longlong)v;
                v = v + 1;
                *puVar7 = 0x59;
                do {
                  puVar7 = (undefined *)(longlong)v;
                  v = v + 1;
                  *puVar7 = (char)a;
                  a = a >> 8;
                } while (a == 1);
              }
              else {
                if (a_00 != 0) {
                  if (a_00 == 0x100) {
                    uVar11 = 0x8b;
                  }
                  else {
                    uVar11 = 0xbe;
                    puVar7 = (undefined *)(longlong)v;
                    v = v + 1;
                    *puVar7 = 0xf;
                  }
                  puVar7 = (undefined *)(longlong)v;
                  v = v + 1;
                  *puVar7 = uVar11;
                  v = v + 1;
                }
              }
            }
          }
          else {
            if (a_00 != 0x26) {
              uVar12 = (uint)(e == 0x3d) & s;
              if (uVar12 == 0) {
                if (e == 0x28) goto LAB_00102b14;
                W(8,a_00);
                if (J == 0xb) {
                  W(0,a_00);
                  a = C;
                  while (1 < a + 1U) {
                    puVar7 = (undefined *)(longlong)v;
                    v = v + 1;
                    *puVar7 = (char)a;
                    a = a >> 8;
                  }
                  av();
                }
              }
              else {
                av();
                X();
                W(6,a_00);
              }
              if (e != 0x28) {
                return 0;
              }
              uVar12 = 0;
              goto LAB_00102b14;
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
  uVar12 = 1;
  puVar7 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar7 = 0x50;
LAB_00102b14:
  puVar7 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar7 = 0x81;
  puVar7 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar7 = 0xec;
  a = v + 1;
  iVar1 = v + 2;
  iVar2 = v + 3;
  *(undefined *)(longlong)v = 0;
  *(undefined *)(longlong)a = 0;
  *(undefined *)(longlong)iVar1 = 0;
  *(undefined *)(longlong)iVar2 = 0;
  a = v;
  v = v + 4;
  av();
  if (e == 0x29) {
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar13 = 0;
  }
  else {
    uVar5 = 0;
    do {
      while( true ) {
        X();
        puVar7 = (undefined *)(longlong)v;
        v = v + 1;
        *puVar7 = 0x89;
        puVar7 = (undefined *)(longlong)v;
        v = v + 1;
        *puVar7 = 0x84;
        puVar7 = (undefined *)(longlong)v;
        v = v + 1;
        *puVar7 = 0x24;
        iVar1 = v + 1;
        iVar2 = v + 2;
        iVar3 = v + 3;
        *(undefined *)(longlong)v = (char)uVar5;
        uVar13 = (int)uVar5 + 4;
        *(undefined *)(longlong)iVar1 = (char)(uVar5 >> 8);
        *(undefined *)(longlong)iVar2 = (char)(uVar5 >> 0x10);
        *(undefined *)(longlong)iVar3 = (char)(uVar5 >> 0x18);
        v = v + 4;
        uVar5 = (ulonglong)uVar13;
        if (e != 0x2c) break;
        av();
        if (e == 0x29) goto LAB_00102c60;
      }
    } while (e != 0x29);
LAB_00102c60:
    uVar11 = (undefined)uVar13;
    uVar10 = (undefined)(uVar13 >> 8);
    uVar9 = (undefined)(uVar13 >> 0x10);
    uVar8 = (undefined)(uVar13 >> 0x18);
  }
  *(undefined *)(longlong)a = uVar11;
  *(undefined *)(longlong)(a + 1) = uVar10;
  *(undefined *)(longlong)(a + 2) = uVar9;
  *(undefined *)(longlong)(a + 3) = uVar8;
  av();
  if (uVar12 == 0) {
    iVar1 = *(int *)(longlong)(a_00 + 4);
    puVar7 = (undefined *)(longlong)v;
    v = v + 1;
    *puVar7 = 0xe8;
    iVar2 = v;
    a = v + 1;
    *(undefined *)(longlong)v = (char)iVar1;
    *(undefined *)(longlong)a = (char)((uint)iVar1 >> 8);
    *(undefined *)(longlong)(iVar2 + 2) = (char)((uint)iVar1 >> 0x10);
    *(undefined *)(longlong)(iVar2 + 3) = (char)((uint)iVar1 >> 0x18);
    a = v + 4;
    *(int *)(longlong)(a_00 + 4) = v;
    v = a;
    if (uVar13 == 0) {
      return 0;
    }
  }
  else {
    a = uVar13 + 4;
    puVar7 = (undefined *)(longlong)v;
    v = v + 1;
    *puVar7 = 0xff;
    puVar7 = (undefined *)(longlong)v;
    v = v + 1;
    *puVar7 = 0x94;
    puVar7 = (undefined *)(longlong)v;
    v = v + 1;
    *puVar7 = 0x24;
    iVar1 = v + 1;
    a_00 = v + 2;
    iVar2 = v + 3;
    *(undefined *)(longlong)v = uVar11;
    uVar11 = (undefined)a;
    *(undefined *)(longlong)iVar1 = uVar10;
    uVar10 = (undefined)((uint)a >> 8);
    *(undefined *)(longlong)a_00 = uVar9;
    uVar9 = (undefined)((uint)a >> 0x10);
    *(undefined *)(longlong)iVar2 = uVar8;
    uVar8 = (undefined)((uint)a >> 0x18);
    v = v + 4;
  }
  puVar7 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar7 = 0x81;
  puVar7 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar7 = 0xc4;
  a = v + 1;
  iVar1 = v + 2;
  a_00 = v + 3;
  *(undefined *)(longlong)v = uVar11;
  *(undefined *)(longlong)a = uVar10;
  *(undefined *)(longlong)iVar1 = uVar9;
  *(undefined *)(longlong)a_00 = uVar8;
  v = v + 4;
  return 0;
}



int B(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int a;
  int iVar4;
  int iVar5;
  undefined uVar6;
  undefined uVar7;
  undefined uVar8;
  int iVar9;
  undefined *puVar10;
  int iVar11;
  
  X(10);
  if (J == 10) {
    iVar11 = 0;
    do {
      iVar9 = C;
      av();
      uVar1 = iVar9 + 0x85;
      iVar2 = iVar9 + 0x84;
      puVar10 = (undefined *)(longlong)v;
      v = v + 1;
      *puVar10 = 0x85;
      puVar10 = (undefined *)(longlong)v;
      v = v + 1;
      *puVar10 = 0xc0;
      puVar10 = (undefined *)(longlong)v;
      v = v + 1;
      *puVar10 = 0xf;
      iVar5 = iVar2;
      uVar3 = uVar1;
      while (1 < uVar3) {
        puVar10 = (undefined *)(longlong)v;
        v = v + 1;
        *puVar10 = (char)iVar5;
        iVar5 = iVar5 >> 8;
        uVar3 = iVar5 + 1;
      }
      iVar5 = v + 1;
      a = v + 2;
      iVar4 = v + 3;
      *(undefined *)(longlong)v = (char)iVar11;
      *(undefined *)(longlong)iVar5 = (char)((uint)iVar11 >> 8);
      *(undefined *)(longlong)a = (char)((uint)iVar11 >> 0x10);
      *(undefined *)(longlong)iVar4 = (char)((uint)iVar11 >> 0x18);
      iVar11 = v;
      v = v + 4;
      X(10);
    } while (J == 10);
    if (iVar11 != 0) {
      puVar10 = (undefined *)(longlong)v;
      v = v + 1;
      *puVar10 = 0x85;
      puVar10 = (undefined *)(longlong)v;
      v = v + 1;
      *puVar10 = 0xc0;
      puVar10 = (undefined *)(longlong)v;
      v = v + 1;
      *puVar10 = 0xf;
      while (iVar5 = v, 1 < uVar1) {
        puVar10 = (undefined *)(longlong)v;
        v = v + 1;
        *puVar10 = (char)iVar2;
        iVar2 = iVar2 >> 8;
        uVar1 = iVar2 + 1;
      }
      iVar2 = v + 1;
      *(undefined *)(longlong)v = (char)iVar11;
      *(undefined *)(longlong)iVar2 = (char)((uint)iVar11 >> 8);
      *(undefined *)(longlong)(iVar5 + 2) = (char)((uint)iVar11 >> 0x10);
      *(undefined *)(longlong)(iVar5 + 3) = (char)((uint)iVar11 >> 0x18);
      a = v;
      iVar11 = v + 4;
      v = v + 5;
      *(undefined *)(longlong)iVar11 = 0xb8;
      iVar2 = v;
      iVar11 = v + 1;
      *(byte *)(longlong)v = (byte)iVar9 ^ 1;
      uVar6 = (undefined)((uint)iVar9 >> 8);
      *(undefined *)(longlong)iVar11 = uVar6;
      uVar7 = (undefined)((uint)iVar9 >> 0x10);
      *(undefined *)(longlong)(iVar2 + 2) = uVar7;
      uVar8 = (undefined)((uint)iVar9 >> 0x18);
      *(undefined *)(longlong)(iVar2 + 3) = uVar8;
      iVar11 = v + 4;
      v = v + 5;
      *(undefined *)(longlong)iVar11 = 0xe9;
      iVar11 = v + 1;
      iVar2 = v + 2;
      iVar5 = v + 3;
      *(undefined *)(longlong)v = 5;
      *(undefined *)(longlong)iVar11 = 0;
      *(undefined *)(longlong)iVar2 = 0;
      *(undefined *)(longlong)iVar5 = 0;
      v = v + 4;
      ap(a,v);
      puVar10 = (undefined *)(longlong)v;
      v = v + 1;
      *puVar10 = 0xb8;
      iVar11 = v + 1;
      iVar2 = v + 2;
      iVar5 = v + 3;
      *(byte *)(longlong)v = (byte)iVar9;
      *(undefined *)(longlong)iVar11 = uVar6;
      *(undefined *)(longlong)iVar2 = uVar7;
      *(undefined *)(longlong)iVar5 = uVar8;
      v = v + 4;
      return v;
    }
  }
  return J;
}



void FUN_001033ec(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  
  X();
  puVar4 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar4 = 0x85;
  puVar4 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar4 = 0xc0;
  puVar4 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar4 = 0xf;
  puVar4 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar4 = 0x84;
  iVar1 = v + 1;
  iVar2 = v + 2;
  iVar3 = v + 3;
  *(undefined *)(longlong)v = 0;
  *(undefined *)(longlong)iVar1 = 0;
  *(undefined *)(longlong)iVar2 = 0;
  *(undefined *)(longlong)iVar3 = 0;
  v = v + 4;
  return;
}



int ac(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  
  X();
  puVar4 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar4 = 0x85;
  puVar4 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar4 = 0xc0;
  puVar4 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar4 = 0xf;
  puVar4 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar4 = 0x84;
  iVar3 = v + 1;
  iVar1 = v + 2;
  iVar2 = v + 3;
  *(undefined *)(longlong)v = 0;
  *(undefined *)(longlong)iVar3 = 0;
  *(undefined *)(longlong)iVar1 = 0;
  *(undefined *)(longlong)iVar2 = 0;
  iVar3 = v;
  v = v + 4;
  return iVar3;
}



int ar(int s)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  
LAB_001034e0:
  bVar3 = e == 0x100;
  if (bVar3 || s == 0 && e != -1) {
    do {
      if (bVar3) {
        av();
        do {
          if (s == 0) {
            do {
              if (e == 0x3b) goto LAB_00103740;
              *(int *)(longlong)e = i;
              i = i + 4;
              av();
            } while (e != 0x2c);
          }
          else {
            do {
              if (e == 0x3b) goto LAB_00103740;
              iVar5 = -4 - P;
              P = P + 4;
              *(int *)(longlong)e = iVar5;
              av();
            } while (e != 0x2c);
          }
          av();
        } while( true );
      }
      iVar5 = 8;
      *(int *)(longlong)e = v;
      av();
      av();
      while (e != 0x29) {
        while( true ) {
          *(int *)(longlong)e = iVar5;
          iVar5 = iVar5 + 4;
          av();
          if (e != 0x2c) break;
          av();
          if (e == 0x29) goto LAB_00103564;
        }
      }
LAB_00103564:
      av();
      P = 0;
      puVar4 = (undefined *)(longlong)v;
      U = 0;
      v = v + 1;
      *puVar4 = 0x55;
      puVar4 = (undefined *)(longlong)v;
      v = v + 1;
      *puVar4 = 0x89;
      puVar4 = (undefined *)(longlong)v;
      v = v + 1;
      *puVar4 = 0xe5;
      puVar4 = (undefined *)(longlong)v;
      v = v + 1;
      *puVar4 = 0x81;
      puVar4 = (undefined *)(longlong)v;
      v = v + 1;
      *puVar4 = 0xec;
      iVar5 = v + 1;
      iVar1 = v + 2;
      iVar2 = v + 3;
      *(undefined *)(longlong)v = 0;
      *(undefined *)(longlong)iVar5 = 0;
      *(undefined *)(longlong)iVar1 = 0;
      *(undefined *)(longlong)iVar2 = 0;
      iVar1 = v;
      v = v + 4;
      S(0);
      ap(U,v);
      puVar4 = (undefined *)(longlong)v;
      v = v + 1;
      *puVar4 = 0xc9;
      puVar4 = (undefined *)(longlong)v;
      v = v + 1;
      *puVar4 = 0xc3;
      iVar5 = P;
      *(undefined *)(longlong)iVar1 = (char)P;
      *(undefined *)(longlong)(iVar1 + 1) = (char)((uint)iVar5 >> 8);
      *(undefined *)(longlong)(iVar1 + 2) = (char)((uint)iVar5 >> 0x10);
      *(undefined *)(longlong)(iVar1 + 3) = (char)((uint)iVar5 >> 0x18);
      bVar3 = e == 0x100;
    } while (bVar3 || s == 0 && e != -1);
  }
  return e;
LAB_00103740:
  av();
  goto LAB_001034e0;
}



int S(int s)

{
  int iVar1;
  int a;
  int iVar2;
  int a_00;
  undefined *puVar3;
  int a_01;
  int h;
  
  a_00 = e;
  if (e == 0x120) {
    av();
    av();
    X();
    puVar3 = (undefined *)(longlong)v;
    v = v + 1;
    *puVar3 = 0x85;
    puVar3 = (undefined *)(longlong)v;
    v = v + 1;
    *puVar3 = 0xc0;
    puVar3 = (undefined *)(longlong)v;
    v = v + 1;
    *puVar3 = 0xf;
    puVar3 = (undefined *)(longlong)v;
    v = v + 1;
    *puVar3 = 0x84;
    a_00 = v + 1;
    a_01 = v + 2;
    iVar1 = v + 3;
    *(undefined *)(longlong)v = 0;
    *(undefined *)(longlong)a_00 = 0;
    *(undefined *)(longlong)a_01 = 0;
    *(undefined *)(longlong)iVar1 = 0;
    a_00 = v;
    v = v + 4;
    av();
    S(s);
    if (e == 0x138) {
      av();
      puVar3 = (undefined *)(longlong)v;
      v = v + 1;
      *puVar3 = 0xe9;
      a_01 = v + 1;
      iVar1 = v + 2;
      a = v + 3;
      *(undefined *)(longlong)v = 0;
      *(undefined *)(longlong)a_01 = 0;
      *(undefined *)(longlong)iVar1 = 0;
      *(undefined *)(longlong)a = 0;
      a_01 = v;
      v = v + 4;
      ap(a_00,v);
      S(s);
      a_00 = ap(a_01,v);
    }
    else {
      a_00 = ap(a_00,v);
    }
  }
  else {
    if (e == 0x160 || e == 0x1f8) {
      av();
      av();
      a_01 = v;
      if (a_00 == 0x160) {
        X();
        puVar3 = (undefined *)(longlong)v;
        v = v + 1;
        *puVar3 = 0x85;
        puVar3 = (undefined *)(longlong)v;
        v = v + 1;
        *puVar3 = 0xc0;
        puVar3 = (undefined *)(longlong)v;
        v = v + 1;
        *puVar3 = 0xf;
        puVar3 = (undefined *)(longlong)v;
        v = v + 1;
        *puVar3 = 0x84;
        a_00 = v + 1;
        iVar1 = v + 2;
        a = v + 3;
        *(undefined *)(longlong)v = 0;
        *(undefined *)(longlong)a_00 = 0;
        *(undefined *)(longlong)iVar1 = 0;
        *(undefined *)(longlong)a = 0;
        h = v;
        v = v + 4;
      }
      else {
        if (e != 0x3b) {
          X();
        }
        av();
        a_00 = v;
        h = 0;
        if (e != 0x3b) {
          X();
          puVar3 = (undefined *)(longlong)v;
          v = v + 1;
          *puVar3 = 0x85;
          puVar3 = (undefined *)(longlong)v;
          v = v + 1;
          *puVar3 = 0xc0;
          puVar3 = (undefined *)(longlong)v;
          v = v + 1;
          *puVar3 = 0xf;
          puVar3 = (undefined *)(longlong)v;
          v = v + 1;
          *puVar3 = 0x84;
          a_01 = v + 1;
          iVar1 = v + 2;
          a = v + 3;
          *(undefined *)(longlong)v = 0;
          *(undefined *)(longlong)a_01 = 0;
          *(undefined *)(longlong)iVar1 = 0;
          *(undefined *)(longlong)a = 0;
          h = v;
          v = v + 4;
        }
        av();
        a_01 = a_00;
        if (e != 0x29) {
          puVar3 = (undefined *)(longlong)v;
          v = v + 1;
          *puVar3 = 0xe9;
          a_01 = v + 1;
          iVar1 = v + 2;
          a = v + 3;
          *(undefined *)(longlong)v = 0;
          *(undefined *)(longlong)a_01 = 0;
          *(undefined *)(longlong)iVar1 = 0;
          *(undefined *)(longlong)a = 0;
          a = v;
          a_01 = v + 4;
          v = a_01;
          X();
          puVar3 = (undefined *)(longlong)v;
          iVar1 = (a_00 - v) + -5;
          v = v + 1;
          *puVar3 = 0xe9;
          iVar2 = v;
          a_00 = v + 1;
          *(undefined *)(longlong)v = (char)iVar1;
          *(undefined *)(longlong)a_00 = (char)((uint)iVar1 >> 8);
          *(undefined *)(longlong)(iVar2 + 2) = (char)((uint)iVar1 >> 0x10);
          *(undefined *)(longlong)(iVar2 + 3) = (char)((uint)iVar1 >> 0x18);
          v = v + 4;
          ap(a,v);
        }
      }
      av();
      S((int)register0x00000008 + -4);
      puVar3 = (undefined *)(longlong)v;
      a = (a_01 - v) + -5;
      v = v + 1;
      *puVar3 = 0xe9;
      a_00 = v + 1;
      a_01 = v + 2;
      iVar1 = v + 3;
      *(undefined *)(longlong)v = (char)a;
      *(undefined *)(longlong)a_00 = (char)((uint)a >> 8);
      *(undefined *)(longlong)a_01 = (char)((uint)a >> 0x10);
      *(undefined *)(longlong)iVar1 = (char)((uint)a >> 0x18);
      v = v + 4;
      a_00 = ap(h,v);
      return a_00;
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
          X();
        }
        puVar3 = (undefined *)(longlong)v;
        v = v + 1;
        *puVar3 = 0xe9;
        a_00 = v + 1;
        a_01 = v + 2;
        iVar1 = v + 3;
        *(undefined *)(longlong)v = (char)U;
        *(undefined *)(longlong)a_00 = (char)((uint)U >> 8);
        *(undefined *)(longlong)a_01 = (char)((uint)U >> 0x10);
        *(undefined *)(longlong)iVar1 = (char)((uint)U >> 0x18);
        U = v;
        v = v + 4;
      }
      else {
        if (e == 400) {
          av();
          a = *(int *)(longlong)s;
          puVar3 = (undefined *)(longlong)v;
          v = v + 1;
          *puVar3 = 0xe9;
          a_00 = v + 1;
          a_01 = v + 2;
          iVar1 = v + 3;
          *(undefined *)(longlong)v = (char)a;
          *(undefined *)(longlong)a_00 = (char)((uint)a >> 8);
          *(undefined *)(longlong)a_01 = (char)((uint)a >> 0x10);
          *(undefined *)(longlong)iVar1 = (char)((uint)a >> 0x18);
          a_00 = v + 4;
          *(int *)(longlong)s = v;
          v = a_00;
        }
        else {
          if (e != 0x3b) {
            X();
          }
        }
      }
    }
    a_00 = av();
  }
  return a_00;
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



void FUN_00103f84(int param_1)

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
LAB_00103fd8:
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
    if (a == 0 || z == 1) goto LAB_00103fd8;
    if (z == 0) {
      if (param_1 == 0) {
        memcpy((void *)(longlong)iVar8,__src,iVar12 - iVar1);
        iVar11 = D;
        i = ((iVar12 + i) - iVar1) + 1;
        goto LAB_00103fd8;
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
        goto LAB_00103fd8;
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
      if (param_1 != 0) goto LAB_00103fd8;
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
LAB_00103fd8:
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
    if (a == 0 || z == 1) goto LAB_00103fd8;
    if (z == 0) {
      if (s == 0) {
        memcpy((void *)(longlong)iVar7,__src,iVar11 - iVar1);
        iVar10 = D;
        i = ((iVar11 + i) - iVar1) + 1;
        goto LAB_00103fd8;
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
        goto LAB_00103fd8;
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
      if (s != 0) goto LAB_00103fd8;
      ap(a,z);
    }
    iVar1 = iVar11 + 1;
    __src = (byte *)(longlong)iVar1;
    bVar3 = *__src;
    iVar10 = D;
    iVar7 = i;
  } while( true );
}



ulonglong FUN_0010435c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int a;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  char *pcVar13;
  uint uVar14;
  undefined *puVar15;
  char *__src;
  FILE *pFVar16;
  int iVar17;
  undefined8 *puVar18;
  uint uVar19;
  int iVar20;
  int z;
  int iVar21;
  uint uVar22;
  undefined extraout_w14;
  undefined extraout_w14_00;
  undefined extraout_w15;
  undefined extraout_w15_00;
  undefined extraout_w18;
  undefined extraout_w18_00;
  int iVar23;
  
  iVar6 = K;
  iVar3 = v;
  R = i;
  v = K + 1;
  *(undefined *)(longlong)K = 0x58;
  puVar15 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar15 = 0x54;
  puVar15 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar15 = 0x50;
  iVar12 = v;
  puVar15 = (undefined *)(longlong)v;
  iVar23 = *(int *)(longlong)(T + 0x250);
  v = v + 1;
  *puVar15 = 0xe8;
  iVar20 = v;
  iVar12 = (iVar23 - iVar12) + -5;
  iVar23 = v + 1;
  *(undefined *)(longlong)v = (char)iVar12;
  *(undefined *)(longlong)iVar23 = (char)((uint)iVar12 >> 8);
  *(undefined *)(longlong)(iVar20 + 2) = (char)((uint)iVar12 >> 0x10);
  *(undefined *)(longlong)(iVar20 + 3) = (char)((uint)iVar12 >> 0x18);
  iVar23 = v + 4;
  v = v + 5;
  *(undefined *)(longlong)iVar23 = 0x89;
  puVar15 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar15 = 0xc3;
  puVar15 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar15 = 0xb8;
  iVar12 = v;
  iVar23 = v + 1;
  *(undefined *)(longlong)v = 1;
  *(undefined *)(longlong)iVar23 = 0;
  *(undefined *)(longlong)(iVar12 + 2) = 0;
  *(undefined *)(longlong)(iVar12 + 3) = 0;
  iVar23 = v + 4;
  v = v + 5;
  *(undefined *)(longlong)iVar23 = 0xcd;
  puVar15 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar15 = 0x80;
  iVar12 = (iVar3 - iVar6) + i;
  *(undefined8 *)(longlong)(iVar12 + 1) = 0x2e6f732e6362696c;
  *(undefined2 *)((undefined8 *)(longlong)(iVar12 + 1) + 1) = 0x36;
  i = iVar12 + 0x16;
  *(undefined8 *)(longlong)(iVar12 + 0xb) = 0x6f732e6c6462696c;
  *(undefined4 *)((longlong)(undefined8 *)(longlong)(iVar12 + 0xb) + 7) = 0x322e6f;
  iVar23 = Q;
  iVar20 = D;
LAB_001045a4:
  iVar17 = iVar23 + 1;
  __src = (char *)(longlong)iVar17;
  cVar7 = *__src;
  do {
    iVar23 = iVar17;
    if ((cVar7 != ' ') && (pcVar13 = __src, iVar17 < iVar20)) {
      while( true ) {
        iVar23 = iVar23 + 1;
        if (pcVar13[1] == ' ') break;
        pcVar13 = pcVar13 + 1;
        if (iVar23 == iVar20) goto LAB_00104698;
      }
    }
    if (iVar23 == iVar20) {
LAB_00104698:
      iVar17 = 0;
      a = i - iVar12;
      uVar14 = i + 3U & 0xfffffffc;
      i = uVar14;
      *(undefined *)(longlong)(int)uVar14 = 0;
      *(undefined *)(longlong)(int)(uVar14 + 1) = 0;
      *(undefined *)(longlong)(int)(uVar14 + 2) = 0;
      *(undefined *)(longlong)(int)(uVar14 + 3) = 0;
      iVar23 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 0;
      *(undefined *)(longlong)(iVar23 + 5) = 0;
      *(undefined *)(longlong)(iVar23 + 6) = 0;
      *(undefined *)(longlong)(iVar23 + 7) = 0;
      iVar23 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 0;
      *(undefined *)(longlong)(iVar23 + 5) = 0;
      *(undefined *)(longlong)(iVar23 + 6) = 0;
      *(undefined *)(longlong)(iVar23 + 7) = 0;
      iVar23 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 0;
      *(undefined *)(longlong)(iVar23 + 5) = 0;
      *(undefined *)(longlong)(iVar23 + 6) = 0;
      *(undefined *)(longlong)(iVar23 + 7) = 0;
      iVar23 = i + 4;
      iVar20 = Q;
      z = D;
      i = iVar23;
      break;
    }
    a = T + (iVar17 - Q) * 8;
    e = a + 0xf8;
    a = *(int *)(longlong)(a + 0xfc);
    z = *(int *)(longlong)e;
    if (a == 0 || z == 1) goto LAB_001045a4;
    if (z != 0) goto LAB_00104680;
    memcpy((void *)(longlong)i,__src,iVar23 - iVar17);
    i = (iVar23 + i) - iVar17;
    iVar17 = iVar23 + 1;
    i = i + 1;
    __src = (char *)(longlong)iVar17;
    cVar7 = *__src;
    iVar20 = D;
  } while( true );
LAB_001047c4:
  iVar21 = iVar20 + 1;
  __src = (char *)(longlong)iVar21;
  cVar7 = *__src;
  while( true ) {
    iVar20 = iVar21;
    if ((cVar7 != ' ') && (iVar21 < z)) {
      while( true ) {
        __src = __src + 1;
        iVar20 = iVar20 + 1;
        if (*__src == ' ') break;
        if (iVar20 == z) goto LAB_00104968;
      }
    }
    if (iVar20 == z) break;
    iVar4 = T + (iVar21 - Q) * 8;
    e = iVar4 + 0xf8;
    if (*(int *)(longlong)(iVar4 + 0xfc) == 0 || *(int *)(longlong)e != 0) goto LAB_001047c4;
    z = iVar17 + 0x16;
    *(undefined *)(longlong)iVar23 = (char)z;
    iVar17 = ((iVar17 + iVar20) - iVar21) + 1;
    *(undefined *)(longlong)(iVar23 + 1) = (char)((uint)z >> 8);
    *(undefined *)(longlong)(iVar23 + 2) = (char)((uint)z >> 0x10);
    *(undefined *)(longlong)(iVar23 + 3) = (char)((uint)z >> 0x18);
    iVar23 = i + 4;
    z = i + 5;
    iVar21 = i + 6;
    iVar4 = i + 7;
    i = iVar23;
    *(undefined *)(longlong)iVar23 = 0;
    *(undefined *)(longlong)z = 0;
    *(undefined *)(longlong)iVar21 = 0;
    *(undefined *)(longlong)iVar4 = 0;
    iVar23 = i + 4;
    z = i + 5;
    iVar21 = i + 6;
    iVar4 = i + 7;
    i = iVar23;
    *(undefined *)(longlong)iVar23 = 0;
    *(undefined *)(longlong)z = 0;
    *(undefined *)(longlong)iVar21 = 0;
    *(undefined *)(longlong)iVar4 = 0;
    iVar23 = i + 4;
    z = i + 5;
    iVar4 = i + 6;
    iVar1 = i + 7;
    iVar21 = iVar20 + 1;
    i = iVar23;
    *(undefined *)(longlong)iVar23 = 0x10;
    *(undefined *)(longlong)z = 0;
    *(undefined *)(longlong)iVar4 = 0;
    *(undefined *)(longlong)iVar1 = 0;
    __src = (char *)(longlong)iVar21;
    iVar23 = i + 4;
    cVar7 = *__src;
    z = D;
    i = iVar23;
  }
LAB_00104968:
  *(undefined *)(longlong)iVar23 = 1;
  *(undefined *)(longlong)(iVar23 + 1) = 0;
  *(undefined *)(longlong)(iVar23 + 2) = 0;
  *(undefined *)(longlong)(iVar23 + 3) = 0;
  iVar17 = iVar23 - uVar14;
  iVar20 = iVar17 + 0xf;
  if (-1 < iVar17) {
    iVar20 = iVar17;
  }
  iVar17 = i + 4;
  z = i + 5;
  iVar1 = iVar20 >> 4;
  iVar21 = i + 6;
  iVar4 = i + 7;
  i = iVar17;
  *(undefined *)(longlong)iVar17 = (char)iVar1;
  *(undefined *)(longlong)z = (char)(iVar20 >> 0xc);
  *(undefined *)(longlong)iVar21 = (char)(iVar20 >> 0x14);
  *(char *)(longlong)iVar4 = (char)(iVar20 >> 0x1c);
  iVar20 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 1;
  *(undefined *)(longlong)(iVar20 + 5) = 0;
  *(undefined *)(longlong)(iVar20 + 6) = 0;
  *(undefined *)(longlong)(iVar20 + 7) = 0;
  iVar20 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 0;
  *(undefined *)(longlong)(iVar20 + 5) = 0;
  *(undefined *)(longlong)(iVar20 + 6) = 0;
  *(undefined *)(longlong)(iVar20 + 7) = 0;
  iVar20 = i + 4;
  if (2 < iVar1) {
    iVar17 = 2;
    do {
      i = iVar20;
      *(undefined *)(longlong)iVar20 = (char)iVar17;
      *(undefined *)(longlong)(iVar20 + 1) = (char)((uint)iVar17 >> 8);
      *(undefined *)(longlong)(iVar20 + 2) = (char)((uint)iVar17 >> 0x10);
      z = iVar17 + 1;
      *(undefined *)(longlong)(iVar20 + 3) = (char)((uint)iVar17 >> 0x18);
      iVar20 = i + 4;
      iVar17 = z;
    } while (z != iVar1);
  }
  i = iVar20;
  *(undefined *)(longlong)iVar20 = 0;
  z = 0;
  *(undefined *)(longlong)(iVar20 + 1) = 0;
  *(undefined *)(longlong)(iVar20 + 2) = 0;
  *(undefined *)(longlong)(iVar20 + 3) = 0;
  iVar20 = i + 4;
  iVar21 = D;
  iVar17 = Q;
  i = iVar20;
LAB_00104b48:
  iVar4 = iVar17 + 1;
  __src = (char *)(longlong)iVar4;
  cVar7 = *__src;
  do {
    iVar17 = iVar4;
    if ((cVar7 != ' ') && (iVar4 < iVar21)) {
      while( true ) {
        __src = __src + 1;
        iVar17 = iVar17 + 1;
        if (*__src == ' ') break;
        if (iVar17 == iVar21) goto LAB_00104d18;
      }
    }
    if (iVar17 == iVar21) {
LAB_00104d18:
      memcpy((void *)(longlong)R,(void *)(longlong)K,iVar3 - iVar6);
      z = i;
      iVar6 = G;
      iVar3 = G + 1;
      i = G;
      *(undefined *)(longlong)G = 0x7f;
      *(undefined *)(longlong)iVar3 = 0x45;
      *(undefined *)(longlong)(iVar6 + 2) = 0x4c;
      *(undefined *)(longlong)(iVar6 + 3) = 0x46;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 1;
      *(undefined *)(longlong)(iVar3 + 5) = 1;
      *(undefined *)(longlong)(iVar3 + 6) = 1;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 0;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 0;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 2;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 3;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 1;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar17 = i;
      iVar3 = i + 5;
      iVar6 = R + y;
      i = i + 4;
      *(undefined *)(longlong)i = (char)iVar6;
      *(undefined *)(longlong)iVar3 = (char)((uint)iVar6 >> 8);
      *(undefined *)(longlong)(iVar17 + 6) = (char)((uint)iVar6 >> 0x10);
      *(undefined *)(longlong)(iVar17 + 7) = (char)((uint)iVar6 >> 0x18);
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 0x30;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 0;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 0;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 0x34;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0x20;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 3;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 3;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      i = i + 4;
      ad(0x90,0x13);
      iVar6 = i;
      iVar3 = i + 1;
      *(undefined *)(longlong)i = extraout_w18;
      *(undefined *)(longlong)iVar3 = 0;
      *(undefined *)(longlong)(iVar6 + 2) = 0;
      *(undefined *)(longlong)(iVar6 + 3) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = extraout_w14;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = extraout_w14;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      i = i + 4;
      ad(0,z - G);
      iVar6 = i;
      iVar3 = i + 1;
      *(undefined *)(longlong)i = 7;
      *(undefined *)(longlong)iVar3 = 0;
      *(undefined *)(longlong)(iVar6 + 2) = 0;
      *(undefined *)(longlong)(iVar6 + 3) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 0;
      *(undefined *)(longlong)(iVar3 + 5) = extraout_w15;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 2;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      i = i + 4;
      ad(0xa4,0x58);
      iVar6 = i;
      iVar3 = i + 1;
      *(undefined *)(longlong)i = 6;
      *(undefined *)(longlong)iVar3 = 0;
      *(undefined *)(longlong)(iVar6 + 2) = 0;
      *(undefined *)(longlong)(iVar6 + 3) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = extraout_w18_00;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar6 = i;
      puVar18 = (undefined8 *)(longlong)(i + 4);
      *puVar18 = 0x2d646c2f62696c2f;
      puVar18[1] = 0x6f732e78756e696c;
      iVar17 = i + 0x18;
      *(undefined4 *)((longlong)puVar18 + 0xf) = 0x322e6f;
      iVar3 = i + 0x19;
      i = iVar17;
      *(undefined *)(longlong)iVar17 = extraout_w14_00;
      *(undefined *)(longlong)iVar3 = 0;
      *(undefined *)(longlong)(iVar6 + 0x1a) = 0;
      *(undefined *)(longlong)(iVar6 + 0x1b) = 0;
      iVar3 = i;
      iVar17 = z - iVar20;
      i = i + 4;
      *(undefined *)(longlong)i = extraout_w14_00;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = extraout_w14_00;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 0xb;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = extraout_w18_00;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar6 = i;
      iVar3 = i + 6;
      iVar23 = iVar23 + y;
      i = i + 4;
      *(undefined *)(longlong)i = (char)iVar23;
      *(undefined *)(longlong)(iVar6 + 5) = (char)((uint)iVar23 >> 8);
      *(undefined *)(longlong)iVar3 = (char)((uint)iVar23 >> 0x10);
      *(undefined *)(longlong)(iVar6 + 7) = (char)((uint)iVar23 >> 0x18);
      iVar23 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 6;
      *(undefined *)(longlong)(iVar23 + 5) = 0;
      *(undefined *)(longlong)(iVar23 + 6) = 0;
      *(undefined *)(longlong)(iVar23 + 7) = 0;
      iVar21 = i;
      iVar23 = i + 4;
      iVar3 = i + 5;
      iVar6 = uVar14 + y;
      i = iVar23;
      *(undefined *)(longlong)iVar23 = (char)iVar6;
      *(undefined *)(longlong)iVar3 = (char)((uint)iVar6 >> 8);
      *(undefined *)(longlong)(iVar21 + 6) = (char)((uint)iVar6 >> 0x10);
      *(undefined *)(longlong)(iVar21 + 7) = (char)((uint)iVar6 >> 0x18);
      iVar23 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 5;
      *(undefined *)(longlong)(iVar23 + 5) = 0;
      *(undefined *)(longlong)(iVar23 + 6) = 0;
      *(undefined *)(longlong)(iVar23 + 7) = 0;
      iVar3 = i;
      iVar23 = i + 5;
      iVar12 = iVar12 + y;
      i = i + 4;
      *(undefined *)(longlong)i = (char)iVar12;
      *(undefined *)(longlong)iVar23 = (char)((uint)iVar12 >> 8);
      *(undefined *)(longlong)(iVar3 + 6) = (char)((uint)iVar12 >> 0x10);
      *(undefined *)(longlong)(iVar3 + 7) = (char)((uint)iVar12 >> 0x18);
      iVar23 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 10;
      *(undefined *)(longlong)(iVar23 + 5) = 0;
      *(undefined *)(longlong)(iVar23 + 6) = 0;
      *(undefined *)(longlong)(iVar23 + 7) = 0;
      iVar23 = i;
      i = i + 4;
      *(undefined *)(longlong)i = (char)a;
      *(undefined *)(longlong)(iVar23 + 5) = (char)((uint)a >> 8);
      *(undefined *)(longlong)(iVar23 + 6) = (char)((uint)a >> 0x10);
      *(undefined *)(longlong)(iVar23 + 7) = (char)((uint)a >> 0x18);
      iVar23 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 0xb;
      *(undefined *)(longlong)(iVar23 + 5) = 0;
      *(undefined *)(longlong)(iVar23 + 6) = 0;
      *(undefined *)(longlong)(iVar23 + 7) = 0;
      iVar23 = i;
      i = i + 4;
      *(undefined *)(longlong)i = extraout_w15_00;
      *(undefined *)(longlong)(iVar23 + 5) = 0;
      *(undefined *)(longlong)(iVar23 + 6) = 0;
      *(undefined *)(longlong)(iVar23 + 7) = 0;
      iVar23 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 0x11;
      *(undefined *)(longlong)(iVar23 + 5) = 0;
      *(undefined *)(longlong)(iVar23 + 6) = 0;
      *(undefined *)(longlong)(iVar23 + 7) = 0;
      iVar3 = i;
      iVar20 = iVar20 + y;
      iVar23 = i + 4;
      iVar12 = i + 5;
      i = iVar23;
      *(undefined *)(longlong)iVar23 = (char)iVar20;
      *(undefined *)(longlong)iVar12 = (char)((uint)iVar20 >> 8);
      *(undefined *)(longlong)(iVar3 + 6) = (char)((uint)iVar20 >> 0x10);
      *(undefined *)(longlong)(iVar3 + 7) = (char)((uint)iVar20 >> 0x18);
      iVar23 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 0x12;
      *(undefined *)(longlong)(iVar23 + 5) = 0;
      *(undefined *)(longlong)(iVar23 + 6) = 0;
      *(undefined *)(longlong)(iVar23 + 7) = 0;
      iVar23 = i;
      i = i + 4;
      *(undefined *)(longlong)i = (char)iVar17;
      *(undefined *)(longlong)(iVar23 + 5) = (char)((uint)iVar17 >> 8);
      *(undefined *)(longlong)(iVar23 + 6) = (char)((uint)iVar17 >> 0x10);
      *(undefined *)(longlong)(iVar23 + 7) = (char)((uint)iVar17 >> 0x18);
      iVar20 = i;
      iVar23 = i + 4;
      iVar12 = i + 5;
      i = iVar23;
      *(undefined *)(longlong)iVar23 = 0x13;
      *(undefined *)(longlong)iVar12 = 0;
      *(undefined *)(longlong)(iVar20 + 6) = 0;
      *(undefined *)(longlong)(iVar20 + 7) = 0;
      iVar23 = i + 4;
      iVar12 = i + 5;
      iVar20 = i + 6;
      iVar3 = i + 7;
      i = iVar23;
      *(undefined *)(longlong)iVar23 = 8;
      *(undefined *)(longlong)iVar12 = 0;
      *(undefined *)(longlong)iVar20 = 0;
      *(undefined *)(longlong)iVar3 = 0;
      iVar23 = i + 4;
      iVar12 = i + 5;
      iVar20 = i + 6;
      iVar3 = i + 7;
      i = iVar23;
      *(undefined *)(longlong)iVar23 = 0;
      *(undefined *)(longlong)iVar12 = 0;
      *(undefined *)(longlong)iVar20 = 0;
      *(undefined *)(longlong)iVar3 = 0;
      iVar23 = i + 4;
      iVar12 = i + 5;
      iVar20 = i + 6;
      iVar3 = i + 7;
      i = iVar23;
      *(undefined *)(longlong)iVar23 = 0;
      *(undefined *)(longlong)iVar12 = 0;
      *(undefined *)(longlong)iVar20 = 0;
      *(undefined *)(longlong)iVar3 = 0;
      i = i + 4;
      pFVar16 = fopen((char *)(longlong)param_1,"w");
      fwrite((void *)(longlong)G,1,z - G,(FILE *)(longlong)(int)pFVar16);
      uVar14 = fclose((FILE *)(longlong)(int)pFVar16);
      return (ulonglong)uVar14;
    }
    iVar4 = T + (iVar4 - Q) * 8;
    e = iVar4 + 0xf8;
    uVar22 = *(uint *)(longlong)(iVar4 + 0xfc);
    if (*(int *)(longlong)e != 0 || uVar22 == 0) goto LAB_00104b48;
    z = z + 1;
    do {
      bVar8 = *(byte *)(longlong)(int)(uVar22 + 1);
      bVar9 = *(byte *)(longlong)(int)(uVar22 + 2);
      bVar10 = *(byte *)(longlong)(int)(uVar22 + 3);
      bVar11 = *(byte *)(longlong)(int)uVar22;
      uVar19 = (uint)(*(char *)(longlong)(int)(uVar22 - 1) != '\x05');
      iVar21 = z * 0x100 + uVar19 + 1;
      iVar4 = uVar19 * -4;
      *(byte *)(longlong)(int)uVar22 = (byte)iVar4;
      *(byte *)(longlong)(int)(uVar22 + 1) = (byte)((uint)iVar4 >> 8);
      *(byte *)(longlong)(int)(uVar22 + 2) = (byte)((uint)iVar4 >> 0x10);
      *(byte *)(longlong)(int)(uVar22 + 3) = (byte)((uint)iVar4 >> 0x18);
      iVar1 = uVar22 - K;
      iVar4 = i + 1;
      uVar22 = (uint)bVar9 << 0x10 | (uint)bVar8 << 8 | (uint)bVar11 | (uint)bVar10 << 0x18;
      iVar5 = iVar1 + R + y;
      iVar1 = i + 2;
      iVar2 = i + 3;
      *(undefined *)(longlong)i = (char)iVar5;
      *(undefined *)(longlong)iVar4 = (char)((uint)iVar5 >> 8);
      *(undefined *)(longlong)iVar1 = (char)((uint)iVar5 >> 0x10);
      *(undefined *)(longlong)iVar2 = (char)((uint)iVar5 >> 0x18);
      iVar4 = i;
      i = i + 4;
      *(undefined *)(longlong)i = (char)iVar21;
      *(undefined *)(longlong)(iVar4 + 5) = (char)((uint)iVar21 >> 8);
      *(undefined *)(longlong)(iVar4 + 6) = (char)((uint)iVar21 >> 0x10);
      *(undefined *)(longlong)(iVar4 + 7) = (char)((uint)iVar21 >> 0x18);
      i = i + 4;
    } while (uVar22 != 0);
    iVar4 = iVar17 + 1;
    __src = (char *)(longlong)iVar4;
    cVar7 = *__src;
    iVar21 = D;
  } while( true );
LAB_00104680:
  ap(a,z);
  iVar20 = D;
  goto LAB_001045a4;
}



int au(int F)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int a;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  char *pcVar14;
  int iVar15;
  undefined *puVar16;
  char *__src;
  FILE *pFVar17;
  int iVar18;
  undefined8 *puVar19;
  uint uVar20;
  int iVar21;
  int z;
  int iVar22;
  uint uVar23;
  undefined extraout_w14;
  undefined extraout_w14_00;
  undefined extraout_w15;
  undefined extraout_w15_00;
  undefined extraout_w18;
  undefined extraout_w18_00;
  int ah;
  
  iVar6 = K;
  iVar3 = v;
  R = i;
  v = K + 1;
  *(undefined *)(longlong)K = 0x58;
  puVar16 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar16 = 0x54;
  puVar16 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar16 = 0x50;
  iVar13 = v;
  puVar16 = (undefined *)(longlong)v;
  iVar15 = *(int *)(longlong)(T + 0x250);
  v = v + 1;
  *puVar16 = 0xe8;
  iVar21 = v;
  iVar13 = (iVar15 - iVar13) + -5;
  iVar15 = v + 1;
  *(undefined *)(longlong)v = (char)iVar13;
  *(undefined *)(longlong)iVar15 = (char)((uint)iVar13 >> 8);
  *(undefined *)(longlong)(iVar21 + 2) = (char)((uint)iVar13 >> 0x10);
  *(undefined *)(longlong)(iVar21 + 3) = (char)((uint)iVar13 >> 0x18);
  iVar15 = v + 4;
  v = v + 5;
  *(undefined *)(longlong)iVar15 = 0x89;
  puVar16 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar16 = 0xc3;
  puVar16 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar16 = 0xb8;
  iVar13 = v;
  iVar15 = v + 1;
  *(undefined *)(longlong)v = 1;
  *(undefined *)(longlong)iVar15 = 0;
  *(undefined *)(longlong)(iVar13 + 2) = 0;
  *(undefined *)(longlong)(iVar13 + 3) = 0;
  iVar15 = v + 4;
  v = v + 5;
  *(undefined *)(longlong)iVar15 = 0xcd;
  puVar16 = (undefined *)(longlong)v;
  v = v + 1;
  *puVar16 = 0x80;
  iVar13 = (iVar3 - iVar6) + i;
  *(undefined8 *)(longlong)(iVar13 + 1) = 0x2e6f732e6362696c;
  *(undefined2 *)((undefined8 *)(longlong)(iVar13 + 1) + 1) = 0x36;
  i = iVar13 + 0x16;
  *(undefined8 *)(longlong)(iVar13 + 0xb) = 0x6f732e6c6462696c;
  *(undefined4 *)((longlong)(undefined8 *)(longlong)(iVar13 + 0xb) + 7) = 0x322e6f;
  iVar15 = Q;
  iVar21 = D;
LAB_001045a4:
  iVar18 = iVar15 + 1;
  __src = (char *)(longlong)iVar18;
  cVar8 = *__src;
  do {
    iVar15 = iVar18;
    if ((cVar8 != ' ') && (pcVar14 = __src, iVar18 < iVar21)) {
      while( true ) {
        iVar15 = iVar15 + 1;
        if (pcVar14[1] == ' ') break;
        pcVar14 = pcVar14 + 1;
        if (iVar15 == iVar21) goto LAB_00104698;
      }
    }
    if (iVar15 == iVar21) {
LAB_00104698:
      iVar18 = 0;
      a = i - iVar13;
      uVar7 = i + 3U & 0xfffffffc;
      i = uVar7;
      *(undefined *)(longlong)(int)uVar7 = 0;
      *(undefined *)(longlong)(int)(uVar7 + 1) = 0;
      *(undefined *)(longlong)(int)(uVar7 + 2) = 0;
      *(undefined *)(longlong)(int)(uVar7 + 3) = 0;
      iVar15 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 0;
      *(undefined *)(longlong)(iVar15 + 5) = 0;
      *(undefined *)(longlong)(iVar15 + 6) = 0;
      *(undefined *)(longlong)(iVar15 + 7) = 0;
      iVar15 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 0;
      *(undefined *)(longlong)(iVar15 + 5) = 0;
      *(undefined *)(longlong)(iVar15 + 6) = 0;
      *(undefined *)(longlong)(iVar15 + 7) = 0;
      iVar15 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 0;
      *(undefined *)(longlong)(iVar15 + 5) = 0;
      *(undefined *)(longlong)(iVar15 + 6) = 0;
      *(undefined *)(longlong)(iVar15 + 7) = 0;
      iVar15 = i + 4;
      iVar21 = Q;
      z = D;
      i = iVar15;
      break;
    }
    a = T + (iVar18 - Q) * 8;
    e = a + 0xf8;
    a = *(int *)(longlong)(a + 0xfc);
    z = *(int *)(longlong)e;
    if (a == 0 || z == 1) goto LAB_001045a4;
    if (z != 0) goto LAB_00104680;
    memcpy((void *)(longlong)i,__src,iVar15 - iVar18);
    i = (iVar15 + i) - iVar18;
    iVar18 = iVar15 + 1;
    i = i + 1;
    __src = (char *)(longlong)iVar18;
    cVar8 = *__src;
    iVar21 = D;
  } while( true );
LAB_001047c4:
  iVar22 = iVar21 + 1;
  __src = (char *)(longlong)iVar22;
  cVar8 = *__src;
  while( true ) {
    iVar21 = iVar22;
    if ((cVar8 != ' ') && (iVar22 < z)) {
      while( true ) {
        __src = __src + 1;
        iVar21 = iVar21 + 1;
        if (*__src == ' ') break;
        if (iVar21 == z) goto LAB_00104968;
      }
    }
    if (iVar21 == z) break;
    iVar4 = T + (iVar22 - Q) * 8;
    e = iVar4 + 0xf8;
    if (*(int *)(longlong)(iVar4 + 0xfc) == 0 || *(int *)(longlong)e != 0) goto LAB_001047c4;
    z = iVar18 + 0x16;
    *(undefined *)(longlong)iVar15 = (char)z;
    iVar18 = ((iVar18 + iVar21) - iVar22) + 1;
    *(undefined *)(longlong)(iVar15 + 1) = (char)((uint)z >> 8);
    *(undefined *)(longlong)(iVar15 + 2) = (char)((uint)z >> 0x10);
    *(undefined *)(longlong)(iVar15 + 3) = (char)((uint)z >> 0x18);
    iVar15 = i + 4;
    z = i + 5;
    iVar22 = i + 6;
    iVar4 = i + 7;
    i = iVar15;
    *(undefined *)(longlong)iVar15 = 0;
    *(undefined *)(longlong)z = 0;
    *(undefined *)(longlong)iVar22 = 0;
    *(undefined *)(longlong)iVar4 = 0;
    iVar15 = i + 4;
    z = i + 5;
    iVar22 = i + 6;
    iVar4 = i + 7;
    i = iVar15;
    *(undefined *)(longlong)iVar15 = 0;
    *(undefined *)(longlong)z = 0;
    *(undefined *)(longlong)iVar22 = 0;
    *(undefined *)(longlong)iVar4 = 0;
    iVar15 = i + 4;
    z = i + 5;
    iVar4 = i + 6;
    iVar1 = i + 7;
    iVar22 = iVar21 + 1;
    i = iVar15;
    *(undefined *)(longlong)iVar15 = 0x10;
    *(undefined *)(longlong)z = 0;
    *(undefined *)(longlong)iVar4 = 0;
    *(undefined *)(longlong)iVar1 = 0;
    __src = (char *)(longlong)iVar22;
    iVar15 = i + 4;
    cVar8 = *__src;
    z = D;
    i = iVar15;
  }
LAB_00104968:
  *(undefined *)(longlong)iVar15 = 1;
  *(undefined *)(longlong)(iVar15 + 1) = 0;
  *(undefined *)(longlong)(iVar15 + 2) = 0;
  *(undefined *)(longlong)(iVar15 + 3) = 0;
  iVar18 = iVar15 - uVar7;
  iVar21 = iVar18 + 0xf;
  if (-1 < iVar18) {
    iVar21 = iVar18;
  }
  iVar18 = i + 4;
  z = i + 5;
  iVar1 = iVar21 >> 4;
  iVar22 = i + 6;
  iVar4 = i + 7;
  i = iVar18;
  *(undefined *)(longlong)iVar18 = (char)iVar1;
  *(undefined *)(longlong)z = (char)(iVar21 >> 0xc);
  *(undefined *)(longlong)iVar22 = (char)(iVar21 >> 0x14);
  *(char *)(longlong)iVar4 = (char)(iVar21 >> 0x1c);
  iVar21 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 1;
  *(undefined *)(longlong)(iVar21 + 5) = 0;
  *(undefined *)(longlong)(iVar21 + 6) = 0;
  *(undefined *)(longlong)(iVar21 + 7) = 0;
  iVar21 = i;
  i = i + 4;
  *(undefined *)(longlong)i = 0;
  *(undefined *)(longlong)(iVar21 + 5) = 0;
  *(undefined *)(longlong)(iVar21 + 6) = 0;
  *(undefined *)(longlong)(iVar21 + 7) = 0;
  iVar21 = i + 4;
  if (2 < iVar1) {
    iVar18 = 2;
    do {
      i = iVar21;
      *(undefined *)(longlong)iVar21 = (char)iVar18;
      *(undefined *)(longlong)(iVar21 + 1) = (char)((uint)iVar18 >> 8);
      *(undefined *)(longlong)(iVar21 + 2) = (char)((uint)iVar18 >> 0x10);
      z = iVar18 + 1;
      *(undefined *)(longlong)(iVar21 + 3) = (char)((uint)iVar18 >> 0x18);
      iVar21 = i + 4;
      iVar18 = z;
    } while (z != iVar1);
  }
  i = iVar21;
  *(undefined *)(longlong)iVar21 = 0;
  z = 0;
  *(undefined *)(longlong)(iVar21 + 1) = 0;
  *(undefined *)(longlong)(iVar21 + 2) = 0;
  *(undefined *)(longlong)(iVar21 + 3) = 0;
  iVar21 = i + 4;
  iVar22 = D;
  iVar18 = Q;
  i = iVar21;
LAB_00104b48:
  iVar4 = iVar18 + 1;
  __src = (char *)(longlong)iVar4;
  cVar8 = *__src;
  do {
    iVar18 = iVar4;
    if ((cVar8 != ' ') && (iVar4 < iVar22)) {
      while( true ) {
        __src = __src + 1;
        iVar18 = iVar18 + 1;
        if (*__src == ' ') break;
        if (iVar18 == iVar22) goto LAB_00104d18;
      }
    }
    if (iVar18 == iVar22) {
LAB_00104d18:
      memcpy((void *)(longlong)R,(void *)(longlong)K,iVar3 - iVar6);
      z = i;
      iVar6 = G;
      iVar3 = G + 1;
      i = G;
      *(undefined *)(longlong)G = 0x7f;
      *(undefined *)(longlong)iVar3 = 0x45;
      *(undefined *)(longlong)(iVar6 + 2) = 0x4c;
      *(undefined *)(longlong)(iVar6 + 3) = 0x46;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 1;
      *(undefined *)(longlong)(iVar3 + 5) = 1;
      *(undefined *)(longlong)(iVar3 + 6) = 1;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 0;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 0;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 2;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 3;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 1;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar18 = i;
      iVar3 = i + 5;
      iVar6 = R + y;
      i = i + 4;
      *(undefined *)(longlong)i = (char)iVar6;
      *(undefined *)(longlong)iVar3 = (char)((uint)iVar6 >> 8);
      *(undefined *)(longlong)(iVar18 + 6) = (char)((uint)iVar6 >> 0x10);
      *(undefined *)(longlong)(iVar18 + 7) = (char)((uint)iVar6 >> 0x18);
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 0x30;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 0;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 0;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 0x34;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0x20;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 3;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 3;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      i = i + 4;
      ad(0x90,0x13);
      iVar6 = i;
      iVar3 = i + 1;
      *(undefined *)(longlong)i = extraout_w18;
      *(undefined *)(longlong)iVar3 = 0;
      *(undefined *)(longlong)(iVar6 + 2) = 0;
      *(undefined *)(longlong)(iVar6 + 3) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = extraout_w14;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = extraout_w14;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      i = i + 4;
      ad(0,z - G);
      iVar6 = i;
      iVar3 = i + 1;
      *(undefined *)(longlong)i = 7;
      *(undefined *)(longlong)iVar3 = 0;
      *(undefined *)(longlong)(iVar6 + 2) = 0;
      *(undefined *)(longlong)(iVar6 + 3) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 0;
      *(undefined *)(longlong)(iVar3 + 5) = extraout_w15;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 2;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      i = i + 4;
      ad(0xa4,0x58);
      iVar6 = i;
      iVar3 = i + 1;
      *(undefined *)(longlong)i = 6;
      *(undefined *)(longlong)iVar3 = 0;
      *(undefined *)(longlong)(iVar6 + 2) = 0;
      *(undefined *)(longlong)(iVar6 + 3) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = extraout_w18_00;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar6 = i;
      puVar19 = (undefined8 *)(longlong)(i + 4);
      *puVar19 = 0x2d646c2f62696c2f;
      puVar19[1] = 0x6f732e78756e696c;
      iVar18 = i + 0x18;
      *(undefined4 *)((longlong)puVar19 + 0xf) = 0x322e6f;
      iVar3 = i + 0x19;
      i = iVar18;
      *(undefined *)(longlong)iVar18 = extraout_w14_00;
      *(undefined *)(longlong)iVar3 = 0;
      *(undefined *)(longlong)(iVar6 + 0x1a) = 0;
      *(undefined *)(longlong)(iVar6 + 0x1b) = 0;
      iVar3 = i;
      iVar18 = z - iVar21;
      i = i + 4;
      *(undefined *)(longlong)i = extraout_w14_00;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = extraout_w14_00;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 0xb;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(longlong)i = extraout_w18_00;
      *(undefined *)(longlong)(iVar3 + 5) = 0;
      *(undefined *)(longlong)(iVar3 + 6) = 0;
      *(undefined *)(longlong)(iVar3 + 7) = 0;
      iVar6 = i;
      iVar3 = i + 6;
      iVar15 = iVar15 + y;
      i = i + 4;
      *(undefined *)(longlong)i = (char)iVar15;
      *(undefined *)(longlong)(iVar6 + 5) = (char)((uint)iVar15 >> 8);
      *(undefined *)(longlong)iVar3 = (char)((uint)iVar15 >> 0x10);
      *(undefined *)(longlong)(iVar6 + 7) = (char)((uint)iVar15 >> 0x18);
      iVar15 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 6;
      *(undefined *)(longlong)(iVar15 + 5) = 0;
      *(undefined *)(longlong)(iVar15 + 6) = 0;
      *(undefined *)(longlong)(iVar15 + 7) = 0;
      iVar22 = i;
      iVar15 = i + 4;
      iVar3 = i + 5;
      iVar6 = uVar7 + y;
      i = iVar15;
      *(undefined *)(longlong)iVar15 = (char)iVar6;
      *(undefined *)(longlong)iVar3 = (char)((uint)iVar6 >> 8);
      *(undefined *)(longlong)(iVar22 + 6) = (char)((uint)iVar6 >> 0x10);
      *(undefined *)(longlong)(iVar22 + 7) = (char)((uint)iVar6 >> 0x18);
      iVar15 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 5;
      *(undefined *)(longlong)(iVar15 + 5) = 0;
      *(undefined *)(longlong)(iVar15 + 6) = 0;
      *(undefined *)(longlong)(iVar15 + 7) = 0;
      iVar3 = i;
      iVar15 = i + 5;
      iVar13 = iVar13 + y;
      i = i + 4;
      *(undefined *)(longlong)i = (char)iVar13;
      *(undefined *)(longlong)iVar15 = (char)((uint)iVar13 >> 8);
      *(undefined *)(longlong)(iVar3 + 6) = (char)((uint)iVar13 >> 0x10);
      *(undefined *)(longlong)(iVar3 + 7) = (char)((uint)iVar13 >> 0x18);
      iVar15 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 10;
      *(undefined *)(longlong)(iVar15 + 5) = 0;
      *(undefined *)(longlong)(iVar15 + 6) = 0;
      *(undefined *)(longlong)(iVar15 + 7) = 0;
      iVar15 = i;
      i = i + 4;
      *(undefined *)(longlong)i = (char)a;
      *(undefined *)(longlong)(iVar15 + 5) = (char)((uint)a >> 8);
      *(undefined *)(longlong)(iVar15 + 6) = (char)((uint)a >> 0x10);
      *(undefined *)(longlong)(iVar15 + 7) = (char)((uint)a >> 0x18);
      iVar15 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 0xb;
      *(undefined *)(longlong)(iVar15 + 5) = 0;
      *(undefined *)(longlong)(iVar15 + 6) = 0;
      *(undefined *)(longlong)(iVar15 + 7) = 0;
      iVar15 = i;
      i = i + 4;
      *(undefined *)(longlong)i = extraout_w15_00;
      *(undefined *)(longlong)(iVar15 + 5) = 0;
      *(undefined *)(longlong)(iVar15 + 6) = 0;
      *(undefined *)(longlong)(iVar15 + 7) = 0;
      iVar15 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 0x11;
      *(undefined *)(longlong)(iVar15 + 5) = 0;
      *(undefined *)(longlong)(iVar15 + 6) = 0;
      *(undefined *)(longlong)(iVar15 + 7) = 0;
      iVar3 = i;
      iVar21 = iVar21 + y;
      iVar15 = i + 4;
      iVar13 = i + 5;
      i = iVar15;
      *(undefined *)(longlong)iVar15 = (char)iVar21;
      *(undefined *)(longlong)iVar13 = (char)((uint)iVar21 >> 8);
      *(undefined *)(longlong)(iVar3 + 6) = (char)((uint)iVar21 >> 0x10);
      *(undefined *)(longlong)(iVar3 + 7) = (char)((uint)iVar21 >> 0x18);
      iVar15 = i;
      i = i + 4;
      *(undefined *)(longlong)i = 0x12;
      *(undefined *)(longlong)(iVar15 + 5) = 0;
      *(undefined *)(longlong)(iVar15 + 6) = 0;
      *(undefined *)(longlong)(iVar15 + 7) = 0;
      iVar15 = i;
      i = i + 4;
      *(undefined *)(longlong)i = (char)iVar18;
      *(undefined *)(longlong)(iVar15 + 5) = (char)((uint)iVar18 >> 8);
      *(undefined *)(longlong)(iVar15 + 6) = (char)((uint)iVar18 >> 0x10);
      *(undefined *)(longlong)(iVar15 + 7) = (char)((uint)iVar18 >> 0x18);
      iVar21 = i;
      iVar15 = i + 4;
      iVar13 = i + 5;
      i = iVar15;
      *(undefined *)(longlong)iVar15 = 0x13;
      *(undefined *)(longlong)iVar13 = 0;
      *(undefined *)(longlong)(iVar21 + 6) = 0;
      *(undefined *)(longlong)(iVar21 + 7) = 0;
      iVar15 = i + 4;
      iVar13 = i + 5;
      iVar21 = i + 6;
      iVar3 = i + 7;
      i = iVar15;
      *(undefined *)(longlong)iVar15 = 8;
      *(undefined *)(longlong)iVar13 = 0;
      *(undefined *)(longlong)iVar21 = 0;
      *(undefined *)(longlong)iVar3 = 0;
      iVar15 = i + 4;
      iVar13 = i + 5;
      iVar21 = i + 6;
      iVar3 = i + 7;
      i = iVar15;
      *(undefined *)(longlong)iVar15 = 0;
      *(undefined *)(longlong)iVar13 = 0;
      *(undefined *)(longlong)iVar21 = 0;
      *(undefined *)(longlong)iVar3 = 0;
      iVar15 = i + 4;
      iVar13 = i + 5;
      iVar21 = i + 6;
      iVar3 = i + 7;
      i = iVar15;
      *(undefined *)(longlong)iVar15 = 0;
      *(undefined *)(longlong)iVar13 = 0;
      *(undefined *)(longlong)iVar21 = 0;
      *(undefined *)(longlong)iVar3 = 0;
      i = i + 4;
      pFVar17 = fopen((char *)(longlong)F,"w");
      fwrite((void *)(longlong)G,1,z - G,(FILE *)(longlong)(int)pFVar17);
      iVar15 = fclose((FILE *)(longlong)(int)pFVar17);
      return iVar15;
    }
    iVar4 = T + (iVar4 - Q) * 8;
    e = iVar4 + 0xf8;
    uVar23 = *(uint *)(longlong)(iVar4 + 0xfc);
    if (*(int *)(longlong)e != 0 || uVar23 == 0) goto LAB_00104b48;
    z = z + 1;
    do {
      bVar9 = *(byte *)(longlong)(int)(uVar23 + 1);
      bVar10 = *(byte *)(longlong)(int)(uVar23 + 2);
      bVar11 = *(byte *)(longlong)(int)(uVar23 + 3);
      bVar12 = *(byte *)(longlong)(int)uVar23;
      uVar20 = (uint)(*(char *)(longlong)(int)(uVar23 - 1) != '\x05');
      iVar22 = z * 0x100 + uVar20 + 1;
      iVar4 = uVar20 * -4;
      *(byte *)(longlong)(int)uVar23 = (byte)iVar4;
      *(byte *)(longlong)(int)(uVar23 + 1) = (byte)((uint)iVar4 >> 8);
      *(byte *)(longlong)(int)(uVar23 + 2) = (byte)((uint)iVar4 >> 0x10);
      *(byte *)(longlong)(int)(uVar23 + 3) = (byte)((uint)iVar4 >> 0x18);
      iVar1 = uVar23 - K;
      iVar4 = i + 1;
      uVar23 = (uint)bVar10 << 0x10 | (uint)bVar9 << 8 | (uint)bVar12 | (uint)bVar11 << 0x18;
      iVar5 = iVar1 + R + y;
      iVar1 = i + 2;
      iVar2 = i + 3;
      *(undefined *)(longlong)i = (char)iVar5;
      *(undefined *)(longlong)iVar4 = (char)((uint)iVar5 >> 8);
      *(undefined *)(longlong)iVar1 = (char)((uint)iVar5 >> 0x10);
      *(undefined *)(longlong)iVar2 = (char)((uint)iVar5 >> 0x18);
      iVar4 = i;
      i = i + 4;
      *(undefined *)(longlong)i = (char)iVar22;
      *(undefined *)(longlong)(iVar4 + 5) = (char)((uint)iVar22 >> 8);
      *(undefined *)(longlong)(iVar4 + 6) = (char)((uint)iVar22 >> 0x10);
      *(undefined *)(longlong)(iVar4 + 7) = (char)((uint)iVar22 >> 0x18);
      i = i + 4;
    } while (uVar23 != 0);
    iVar4 = iVar18 + 1;
    __src = (char *)(longlong)iVar4;
    cVar8 = *__src;
    iVar22 = D;
  } while( true );
LAB_00104680:
  ap(a,z);
  iVar21 = D;
  goto LAB_001045a4;
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


