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

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
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
  if (m == 0x5c) {
    if (V == 0) {
      m = fgetc((FILE *)(long)ak);
    }
    else {
      m = ZEXT14(*(byte *)(long)V);
      V = V + 1;
      if (m == 2) {
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
  uint uVar3;
  bool bVar4;
  uint uVar5;
  byte *pbVar6;
  char *pcVar7;
  long lVar8;
  undefined *puVar9;
  int iVar10;
  
  uVar5 = m;
LAB_001012c0:
  do {
    m = uVar5;
    uVar3 = m;
    uVar5 = isspace(m);
    bVar4 = uVar3 == 0x23;
    uVar5 = bVar4 | uVar5;
    while (uVar5 != 0) {
      if (bVar4) {
        if (V == 0) {
          m = fgetc((FILE *)(long)ak);
          av();
        }
        else {
          pbVar6 = (byte *)(long)V;
          V = V + 1;
          m = (uint)*pbVar6;
          if (*pbVar6 == 2) {
            V = 0;
            m = al;
          }
          av();
        }
        if (e == 0x218) {
          av();
          puVar9 = (undefined *)(long)D;
          D = D + 1;
          *puVar9 = 0x20;
          *(undefined4 *)(long)e = 1;
          *(int *)(long)(e + 4) = D;
        }
LAB_0010158c:
        if (m != 10) {
          while( true ) {
            puVar9 = (undefined *)(long)D;
            D = D + 1;
            *puVar9 = (char)m;
            if (V == 0) break;
            m = ZEXT14(*(byte *)(long)V);
            V = V + 1;
            if (m != 2) goto LAB_0010158c;
            m = al;
            V = 0;
            if (al == 10) goto LAB_001015e8;
          }
          m = fgetc((FILE *)(long)ak);
          goto LAB_0010158c;
        }
LAB_001015e8:
        puVar9 = (undefined *)(long)D;
        D = D + 1;
        *puVar9 = (char)m;
        puVar9 = (undefined *)(long)D;
        D = D + 1;
        *puVar9 = 2;
      }
      uVar3 = al;
      if (V == 0) {
        uVar5 = fgetc((FILE *)(long)ak);
        goto LAB_001012c0;
      }
      pbVar6 = (byte *)(long)V;
      V = V + 1;
      uVar5 = (uint)*pbVar6;
      if (*pbVar6 != 2) goto LAB_001012c0;
      V = 0;
      m = al;
      uVar5 = isspace(al);
      bVar4 = uVar3 == 0x23;
      uVar5 = bVar4 | uVar5;
    }
    J = 0;
    e = uVar3;
    uVar5 = isalnum(uVar3);
    if ((uVar3 == 0x5f | uVar5) == 0) {
      if (V == 0) {
        m = fgetc((FILE *)(long)ak);
        uVar3 = e;
      }
      else {
        m = ZEXT14(*(byte *)(long)V);
        V = V + 1;
        if (m == 2) {
          V = 0;
          m = al;
        }
      }
      if (uVar3 == 0x27) {
        e = 2;
        if (m == 0x5c) {
          if (V == 0) {
            m = fgetc((FILE *)(long)ak);
LAB_00101be8:
            if (m == 0x6e) {
LAB_00101bf0:
              m = 10;
            }
            goto LAB_001018d4;
          }
          m = ZEXT14(*(byte *)(long)V);
          V = V + 1;
          if (m != 2) goto LAB_00101be8;
          V = 0;
          m = al;
          if (al == 0x6e) goto LAB_00101bf0;
LAB_00101b98:
          C = m;
          m = fgetc((FILE *)(long)ak);
        }
        else {
LAB_001018d4:
          C = m;
          if (V == 0) goto LAB_00101b98;
          pbVar6 = (byte *)(long)V;
          V = V + 1;
          m = (uint)*pbVar6;
          if (*pbVar6 == 2) {
            V = 0;
            m = al;
            goto LAB_00101b38;
          }
        }
        if (V != 0) {
          pbVar6 = (byte *)(long)V;
          if (*pbVar6 != 2) {
            V = V + 1;
            m = (uint)*pbVar6;
            return 0;
          }
          V = 0;
          m = al;
          return 0;
        }
LAB_00101b38:
        m = fgetc((FILE *)(long)ak);
        return 0;
      }
      if (uVar3 != 0x2f || m != 0x2a) {
        iVar10 = 0x1058e0;
        break;
      }
      if (V == 0) {
        m = fgetc((FILE *)(long)ak);
      }
      else {
        m = ZEXT14(*(byte *)(long)V);
        V = V + 1;
        if (m == 2) {
          V = 0;
          m = al;
        }
      }
      do {
        if (m == 0) goto LAB_001017bc;
joined_r0x00101754:
        if (m != 0x2a) {
          if (V != 0) goto code_r0x0010175c;
          goto LAB_00101814;
        }
        if (V == 0) {
LAB_00101830:
          m = fgetc((FILE *)(long)ak);
        }
        else {
          m = ZEXT14(*(byte *)(long)V);
          V = V + 1;
          if (m == 2) {
            V = 0;
            m = al;
          }
        }
      } while (m != 0x2f);
      m = 0;
LAB_001017bc:
      if (V == 0) {
        uVar5 = fgetc((FILE *)(long)ak);
      }
      else {
        pbVar6 = (byte *)(long)V;
        V = V + 1;
        uVar5 = (uint)*pbVar6;
        if (*pbVar6 == 2) {
          V = 0;
          m = al;
          uVar5 = m;
        }
      }
      goto LAB_001012c0;
    }
    puVar9 = (undefined *)(long)D;
    D = D + 1;
    *puVar9 = 0x20;
    Z = D;
LAB_001013a8:
    iVar10 = m;
    uVar5 = isalnum(m);
    if ((iVar10 == 0x5f | uVar5) != 0) {
      while( true ) {
        puVar9 = (undefined *)(long)D;
        D = D + 1;
        *puVar9 = (char)iVar10;
        iVar10 = al;
        if (V == 0) break;
        m = ZEXT14(*(byte *)(long)V);
        V = V + 1;
        if (m != 2) goto LAB_001013a8;
        V = 0;
        m = al;
        uVar5 = isalnum(al);
        if ((iVar10 == 0x5f | uVar5) == 0) goto LAB_00101428;
      }
      m = fgetc((FILE *)(long)ak);
      goto LAB_001013a8;
    }
LAB_00101428:
    if (e - 0x30U < 10) {
      lVar8 = strtol((char *)(ulong)(uint)Z,(char **)0x0,0);
      C = (int)lVar8;
      e = 2;
      return 0;
    }
    *(undefined *)(long)D = 0x20;
    iVar10 = Q;
    pcVar7 = strstr((char *)(long)Q,(char *)(long)(Z + -1));
    e = (int)pcVar7 - iVar10;
    *(undefined *)(long)D = 0;
    e = (e + 0x20) * 8;
    if (e < 0x219) {
      return 0;
    }
    e = e + T;
    if (*(int *)(long)e != 1) {
      return 0;
    }
    V = *(int *)(long)(e + 4);
    al = m;
    if (V == 0) {
      uVar5 = fgetc((FILE *)(long)ak);
    }
    else {
      pbVar6 = (byte *)(long)V;
      V = V + 1;
      uVar5 = (uint)*pbVar6;
      if (*pbVar6 == 2) {
        V = 0;
        uVar5 = m;
      }
    }
  } while( true );
LAB_00101a24:
  bVar1 = *(byte *)(long)iVar10;
  if (bVar1 == 0) {
    return 0;
  }
  bVar2 = *(byte *)(long)(iVar10 + 1);
  C = 0;
  J = *(byte *)(long)(iVar10 + 2) - 0x62;
  uVar5 = (uint)bVar2;
  if (-1 < J) {
    iVar10 = iVar10 + 3;
    if ((uVar5 == 0x40 || uVar5 == m) && bVar1 == uVar3) goto LAB_00101a9c;
    goto LAB_00101a24;
  }
  C = 0;
  lVar8 = (long)(iVar10 + 4);
  do {
    iVar10 = (int)lVar8;
    C = J + C * 0x40 + 0x40;
    J = *(byte *)(lVar8 + -1) - 0x62;
    lVar8 = lVar8 + 1;
  } while (J < 0);
  bVar4 = false;
  if (bVar2 == 0x40 || (uint)bVar2 == m) {
    bVar4 = bVar1 == uVar3;
  }
  if (bVar4) {
LAB_00101a9c:
    if (uVar5 != m) {
      return 0;
    }
    w();
    e = 1;
    return 0;
  }
  goto LAB_00101a24;
code_r0x0010175c:
  m = ZEXT14(*(byte *)(long)V);
  V = V + 1;
  if (m == 2) {
    V = 0;
    m = al;
    if (al == 0x2a) goto LAB_00101830;
LAB_00101814:
    m = fgetc((FILE *)(long)ak);
  }
  goto joined_r0x00101754;
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
  return (int)((uint)*(byte *)(long)(a + 2) << 0x10 | (uint)*(byte *)(long)(a + 1) << 8 |
              (uint)*(byte *)(long)a | (uint)*(byte *)(long)(a + 3) << 0x18);
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
  int iVar2;
  int iVar3;
  int in_w1;
  undefined *puVar4;
  
  puVar4 = (undefined *)(long)v;
  v = v + 1;
  *puVar4 = 0xb8;
  iVar1 = v + 1;
  iVar2 = v + 2;
  iVar3 = v + 3;
  *(char *)(long)v = (char)a;
  *(char *)(long)iVar1 = (char)((uint)a >> 8);
  *(char *)(long)iVar2 = (char)((uint)a >> 0x10);
  *(char *)(long)iVar3 = (char)((uint)a >> 0x18);
  v = v + 4;
  return in_w1;
}



int I(int a)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  
  puVar4 = (undefined *)(long)v;
  v = v + 1;
  *puVar4 = 0xe9;
  iVar3 = v + 1;
  iVar1 = v + 2;
  iVar2 = v + 3;
  *(char *)(long)v = (char)a;
  *(char *)(long)iVar3 = (char)((uint)a >> 8);
  *(char *)(long)iVar1 = (char)((uint)a >> 0x10);
  *(char *)(long)iVar2 = (char)((uint)a >> 0x18);
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
  iVar4 = s + 0x84;
  puVar5 = (undefined *)(long)v;
  v = v + 1;
  *puVar5 = 0x85;
  puVar5 = (undefined *)(long)v;
  v = v + 1;
  *puVar5 = 0xc0;
  puVar5 = (undefined *)(long)v;
  v = v + 1;
  *puVar5 = 0xf;
  while (1 < uVar1) {
    puVar5 = (undefined *)(long)v;
    v = v + 1;
    *puVar5 = (char)iVar4;
    iVar4 = iVar4 >> 8;
    uVar1 = iVar4 + 1;
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



int aq(int a)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  
  puVar6 = (undefined *)(long)v;
  uVar1 = a + 0x91;
  iVar2 = a + 0x90;
  v = v + 1;
  *puVar6 = 0x39;
  puVar6 = (undefined *)(long)v;
  v = v + 1;
  *puVar6 = 0xc1;
  puVar6 = (undefined *)(long)v;
  v = v + 1;
  *puVar6 = 0xb8;
  iVar3 = v + 1;
  iVar4 = v + 2;
  iVar5 = v + 3;
  *(undefined *)(long)v = 0;
  *(undefined *)(long)iVar3 = 0;
  *(undefined *)(long)iVar4 = 0;
  *(undefined *)(long)iVar5 = 0;
  iVar3 = v + 4;
  v = v + 5;
  *(undefined *)(long)iVar3 = 0xf;
  while (1 < uVar1) {
    puVar6 = (undefined *)(long)v;
    v = v + 1;
    *puVar6 = (char)iVar2;
    iVar2 = iVar2 >> 8;
    uVar1 = iVar2 + 1;
  }
  puVar6 = (undefined *)(long)v;
  v = v + 1;
  *puVar6 = 0xc0;
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
  iVar2 = s + 0x83;
  while (1 < uVar1) {
    puVar6 = (undefined *)(long)v;
    v = v + 1;
    *puVar6 = (char)iVar2;
    iVar2 = iVar2 >> 8;
    uVar1 = iVar2 + 1;
  }
  iVar2 = *(int *)(long)a;
  if (iVar2 < 0x200 && iVar2 != 0) {
    puVar6 = (undefined *)(long)v;
    v = v + 1;
    *puVar6 = 0x85;
    iVar3 = v + 1;
    iVar4 = v + 2;
    iVar5 = v + 3;
    *(char *)(long)v = (char)iVar2;
    *(char *)(long)iVar3 = (char)((uint)iVar2 >> 8);
    *(char *)(long)iVar4 = (char)((uint)iVar2 >> 0x10);
    *(char *)(long)iVar5 = (char)((uint)iVar2 >> 0x18);
    v = v + 4;
    return 0x1160a8;
  }
  iVar5 = *(int *)(long)(a + 4);
  puVar6 = (undefined *)(long)v;
  v = v + 1;
  *puVar6 = 5;
  iVar2 = v + 1;
  iVar3 = v + 2;
  iVar4 = v + 3;
  *(char *)(long)v = (char)iVar5;
  *(char *)(long)iVar2 = (char)((uint)iVar5 >> 8);
  *(char *)(long)iVar3 = (char)((uint)iVar5 >> 0x10);
  *(char *)(long)iVar4 = (char)((uint)iVar5 >> 0x18);
  iVar2 = v + 4;
  *(int *)(long)(a + 4) = v;
  v = iVar2;
  return 0x1160a8;
}



int X(int s)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined uVar5;
  undefined uVar6;
  undefined uVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  undefined *puVar11;
  int unaff_w20;
  int iVar12;
  
  if (s == 1) {
    iVar10 = ab(1);
    return iVar10;
  }
  iVar10 = s + -1;
  X(iVar10);
  iVar12 = 0;
LAB_00102314:
  do {
    uVar5 = (undefined)((uint)iVar12 >> 8);
    uVar6 = (undefined)((uint)iVar12 >> 0x10);
    uVar7 = (undefined)((uint)iVar12 >> 0x18);
    iVar1 = unaff_w20;
    while( true ) {
      iVar4 = e;
      unaff_w20 = C;
      if (iVar10 != J) {
        bVar9 = iVar12 != 0;
        bVar8 = false;
        if (bVar9) {
          bVar8 = s + -9 < 0;
        }
        if ((!bVar9 || iVar10 == 8) || bVar8 != (bVar9 && SBORROW4(iVar10,8))) {
          return J;
        }
        uVar3 = iVar1 + 0x85;
        iVar10 = iVar1 + 0x84;
        puVar11 = (undefined *)(long)v;
        v = v + 1;
        *puVar11 = 0x85;
        puVar11 = (undefined *)(long)v;
        v = v + 1;
        *puVar11 = 0xc0;
        puVar11 = (undefined *)(long)v;
        v = v + 1;
        *puVar11 = 0xf;
        while (iVar4 = v, 1 < uVar3) {
          puVar11 = (undefined *)(long)v;
          v = v + 1;
          *puVar11 = (char)iVar10;
          iVar10 = iVar10 >> 8;
          uVar3 = iVar10 + 1;
        }
        iVar10 = v + 1;
        *(char *)(long)v = (char)iVar12;
        *(undefined *)(long)iVar10 = uVar5;
        *(undefined *)(long)(iVar4 + 2) = uVar6;
        *(undefined *)(long)(iVar4 + 3) = uVar7;
        iVar2 = v;
        iVar10 = v + 4;
        v = v + 5;
        *(undefined *)(long)iVar10 = 0xb8;
        iVar12 = v;
        iVar10 = v + 1;
        *(byte *)(long)v = (byte)iVar1 ^ 1;
        uVar5 = (undefined)((uint)iVar1 >> 8);
        *(undefined *)(long)iVar10 = uVar5;
        uVar6 = (undefined)((uint)iVar1 >> 0x10);
        *(undefined *)(long)(iVar12 + 2) = uVar6;
        uVar7 = (undefined)((uint)iVar1 >> 0x18);
        *(undefined *)(long)(iVar12 + 3) = uVar7;
        iVar10 = v + 4;
        v = v + 5;
        *(undefined *)(long)iVar10 = 0xe9;
        iVar10 = v + 1;
        iVar12 = v + 2;
        iVar4 = v + 3;
        *(undefined *)(long)v = 5;
        *(undefined *)(long)iVar10 = 0;
        *(undefined *)(long)iVar12 = 0;
        *(undefined *)(long)iVar4 = 0;
        v = v + 4;
        ap(iVar2,v);
        puVar11 = (undefined *)(long)v;
        v = v + 1;
        *puVar11 = 0xb8;
        iVar10 = v + 1;
        iVar12 = v + 2;
        iVar4 = v + 3;
        *(byte *)(long)v = (byte)iVar1;
        *(undefined *)(long)iVar10 = uVar5;
        *(undefined *)(long)iVar12 = uVar6;
        *(undefined *)(long)iVar4 = uVar7;
        v = v + 4;
        return v;
      }
      av();
      if (8 < iVar10) break;
      puVar11 = (undefined *)(long)v;
      v = v + 1;
      *puVar11 = 0x50;
      X(iVar10);
      puVar11 = (undefined *)(long)v;
      v = v + 1;
      *puVar11 = 0x59;
      iVar1 = unaff_w20;
      if (s - 5U < 2) {
        aq(unaff_w20);
        goto LAB_00102314;
      }
      while (1 < iVar1 + 1U) {
        puVar11 = (undefined *)(long)v;
        v = v + 1;
        *puVar11 = (char)iVar1;
        iVar1 = iVar1 >> 8;
      }
      if (iVar4 != 0x25) goto LAB_00102314;
      puVar11 = (undefined *)(long)v;
      v = v + 1;
      *puVar11 = 0x92;
      iVar1 = unaff_w20;
    }
    uVar3 = unaff_w20 + 0x85;
    iVar1 = unaff_w20 + 0x84;
    puVar11 = (undefined *)(long)v;
    v = v + 1;
    *puVar11 = 0x85;
    puVar11 = (undefined *)(long)v;
    v = v + 1;
    *puVar11 = 0xc0;
    puVar11 = (undefined *)(long)v;
    v = v + 1;
    *puVar11 = 0xf;
    while (1 < uVar3) {
      puVar11 = (undefined *)(long)v;
      v = v + 1;
      *puVar11 = (char)iVar1;
      iVar1 = iVar1 >> 8;
      uVar3 = iVar1 + 1;
    }
    iVar1 = v + 1;
    iVar4 = v + 2;
    iVar2 = v + 3;
    *(char *)(long)v = (char)iVar12;
    *(undefined *)(long)iVar1 = uVar5;
    *(undefined *)(long)iVar4 = uVar6;
    *(undefined *)(long)iVar2 = uVar7;
    iVar12 = v;
    v = v + 4;
    X(iVar10);
  } while( true );
}



int X(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined uVar7;
  undefined uVar8;
  undefined uVar9;
  int iVar10;
  undefined *puVar11;
  int iVar12;
  
  X(10);
  if (J == 10) {
    iVar12 = 0;
    do {
      iVar10 = C;
      av();
      uVar1 = iVar10 + 0x85;
      iVar2 = iVar10 + 0x84;
      puVar11 = (undefined *)(long)v;
      v = v + 1;
      *puVar11 = 0x85;
      puVar11 = (undefined *)(long)v;
      v = v + 1;
      *puVar11 = 0xc0;
      puVar11 = (undefined *)(long)v;
      v = v + 1;
      *puVar11 = 0xf;
      iVar6 = iVar2;
      uVar3 = uVar1;
      while (1 < uVar3) {
        puVar11 = (undefined *)(long)v;
        v = v + 1;
        *puVar11 = (char)iVar6;
        iVar6 = iVar6 >> 8;
        uVar3 = iVar6 + 1;
      }
      iVar6 = v + 1;
      iVar4 = v + 2;
      iVar5 = v + 3;
      *(char *)(long)v = (char)iVar12;
      *(char *)(long)iVar6 = (char)((uint)iVar12 >> 8);
      *(char *)(long)iVar4 = (char)((uint)iVar12 >> 0x10);
      *(char *)(long)iVar5 = (char)((uint)iVar12 >> 0x18);
      iVar12 = v;
      v = v + 4;
      X(10);
    } while (J == 10);
    if (iVar12 != 0) {
      puVar11 = (undefined *)(long)v;
      v = v + 1;
      *puVar11 = 0x85;
      puVar11 = (undefined *)(long)v;
      v = v + 1;
      *puVar11 = 0xc0;
      puVar11 = (undefined *)(long)v;
      v = v + 1;
      *puVar11 = 0xf;
      while (iVar6 = v, 1 < uVar1) {
        puVar11 = (undefined *)(long)v;
        v = v + 1;
        *puVar11 = (char)iVar2;
        iVar2 = iVar2 >> 8;
        uVar1 = iVar2 + 1;
      }
      iVar2 = v + 1;
      *(char *)(long)v = (char)iVar12;
      *(char *)(long)iVar2 = (char)((uint)iVar12 >> 8);
      *(char *)(long)(iVar6 + 2) = (char)((uint)iVar12 >> 0x10);
      *(char *)(long)(iVar6 + 3) = (char)((uint)iVar12 >> 0x18);
      iVar4 = v;
      iVar12 = v + 4;
      v = v + 5;
      *(undefined *)(long)iVar12 = 0xb8;
      iVar2 = v;
      iVar12 = v + 1;
      *(byte *)(long)v = (byte)iVar10 ^ 1;
      uVar7 = (undefined)((uint)iVar10 >> 8);
      *(undefined *)(long)iVar12 = uVar7;
      uVar8 = (undefined)((uint)iVar10 >> 0x10);
      *(undefined *)(long)(iVar2 + 2) = uVar8;
      uVar9 = (undefined)((uint)iVar10 >> 0x18);
      *(undefined *)(long)(iVar2 + 3) = uVar9;
      iVar12 = v + 4;
      v = v + 5;
      *(undefined *)(long)iVar12 = 0xe9;
      iVar12 = v + 1;
      iVar2 = v + 2;
      iVar6 = v + 3;
      *(undefined *)(long)v = 5;
      *(undefined *)(long)iVar12 = 0;
      *(undefined *)(long)iVar2 = 0;
      *(undefined *)(long)iVar6 = 0;
      v = v + 4;
      ap(iVar4,v);
      puVar11 = (undefined *)(long)v;
      v = v + 1;
      *puVar11 = 0xb8;
      iVar12 = v + 1;
      iVar2 = v + 2;
      iVar6 = v + 3;
      *(byte *)(long)v = (byte)iVar10;
      *(undefined *)(long)iVar12 = uVar7;
      *(undefined *)(long)iVar2 = uVar8;
      *(undefined *)(long)iVar6 = uVar9;
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
  int iVar4;
  undefined *puVar5;
  undefined uVar6;
  undefined uVar7;
  int iVar8;
  undefined uVar9;
  undefined uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  
  iVar8 = e;
  iVar4 = C;
  iVar1 = J;
  if (e == 0x22) {
    iVar1 = i + y;
    puVar5 = (undefined *)(long)v;
    v = v + 1;
    *puVar5 = 0xb8;
    iVar2 = v;
    iVar4 = v + 1;
    *(char *)(long)v = (char)iVar1;
    *(char *)(long)iVar4 = (char)((uint)iVar1 >> 8);
    *(char *)(long)(iVar2 + 2) = (char)((uint)iVar1 >> 0x10);
    *(char *)(long)(iVar2 + 3) = (char)((uint)iVar1 >> 0x18);
    v = v + 4;
LAB_00102e6c:
    if (m != 0x22) {
      do {
        if (m == 0x5c) {
          if (V == 0) {
            m = fgetc((FILE *)(long)ak);
          }
          else {
            m = ZEXT14(*(byte *)(long)V);
            V = V + 1;
            if (m == 2) {
              V = 0;
              m = al;
            }
          }
          if (m != 0x6e) goto LAB_00102e7c;
          m = 10;
          uVar10 = 10;
        }
        else {
LAB_00102e7c:
          uVar10 = (undefined)m;
        }
        puVar5 = (undefined *)(long)i;
        i = i + 1;
        *puVar5 = uVar10;
        if (V == 0) {
          m = fgetc((FILE *)(long)ak);
          goto LAB_00102e6c;
        }
        m = ZEXT14(*(byte *)(long)V);
        V = V + 1;
        if (m != 2) goto LAB_00102e6c;
        V = 0;
        m = al;
        if (al == 0x22) break;
      } while( true );
    }
    *(undefined *)(long)i = 0;
    i = i + 4U & 0xfffffffc;
    if (V == 0) {
      m = fgetc((FILE *)(long)ak);
    }
    else {
      m = ZEXT14(*(byte *)(long)V);
      V = V + 1;
      if (m == 2) {
        V = 0;
        m = al;
      }
    }
    av();
  }
  else {
    av();
    if (iVar8 == 2) {
      puVar5 = (undefined *)(long)v;
      v = v + 1;
      *puVar5 = 0xb8;
      iVar2 = v;
      iVar1 = v + 1;
      *(char *)(long)v = (char)iVar4;
      *(char *)(long)iVar1 = (char)((uint)iVar4 >> 8);
      *(char *)(long)(iVar2 + 2) = (char)((uint)iVar4 >> 0x10);
      *(char *)(long)(iVar2 + 3) = (char)((uint)iVar4 >> 0x18);
      v = v + 4;
    }
    else {
      if (iVar1 == 2) {
        ab(0);
        puVar5 = (undefined *)(long)v;
        v = v + 1;
        *puVar5 = 0xb9;
        iVar1 = v + 1;
        iVar2 = v + 2;
        iVar3 = v + 3;
        *(undefined *)(long)v = 0;
        *(undefined *)(long)iVar1 = 0;
        *(undefined *)(long)iVar2 = 0;
        *(undefined *)(long)iVar3 = 0;
        v = v + 4;
        if (iVar8 == 0x21) {
          aq(iVar4);
        }
        else {
          uVar11 = iVar4 + 1;
          while (1 < uVar11) {
            puVar5 = (undefined *)(long)v;
            v = v + 1;
            *puVar5 = (char)iVar4;
            iVar4 = iVar4 >> 8;
            uVar11 = iVar4 + 1;
          }
        }
      }
      else {
        if (iVar8 == 0x28) {
          X();
          av();
        }
        else {
          if (iVar8 == 0x2a) {
            av();
            iVar8 = e;
            av();
            av();
            if (e == 0x2a) {
              av();
              iVar8 = 0;
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
                puVar5 = (undefined *)(long)v;
                v = v + 1;
                *puVar5 = 0x50;
                X();
                iVar4 = (iVar8 == 0x100) + 0x188;
                puVar5 = (undefined *)(long)v;
                v = v + 1;
                *puVar5 = 0x59;
                do {
                  puVar5 = (undefined *)(long)v;
                  v = v + 1;
                  *puVar5 = (char)iVar4;
                  iVar4 = iVar4 >> 8;
                } while (iVar4 == 1);
              }
              else {
                if (iVar8 != 0) {
                  if (iVar8 == 0x100) {
                    uVar10 = 0x8b;
                  }
                  else {
                    uVar10 = 0xbe;
                    puVar5 = (undefined *)(long)v;
                    v = v + 1;
                    *puVar5 = 0xf;
                  }
                  puVar5 = (undefined *)(long)v;
                  v = v + 1;
                  *puVar5 = uVar10;
                  v = v + 1;
                }
              }
            }
          }
          else {
            if (iVar8 != 0x26) {
              uVar11 = (uint)(e == 0x3d) & s;
              if (uVar11 == 0) {
                if (e == 0x28) goto LAB_00102b14;
                W(8,iVar8);
                if (J == 0xb) {
                  W(0,iVar8);
                  iVar4 = C;
                  while (1 < iVar4 + 1U) {
                    puVar5 = (undefined *)(long)v;
                    v = v + 1;
                    *puVar5 = (char)iVar4;
                    iVar4 = iVar4 >> 8;
                  }
                  av();
                }
              }
              else {
                av();
                X();
                W(6,iVar8);
              }
              if (e != 0x28) {
                return 0;
              }
              uVar11 = 0;
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
  uVar11 = 1;
  puVar5 = (undefined *)(long)v;
  v = v + 1;
  *puVar5 = 0x50;
LAB_00102b14:
  puVar5 = (undefined *)(long)v;
  v = v + 1;
  *puVar5 = 0x81;
  puVar5 = (undefined *)(long)v;
  v = v + 1;
  *puVar5 = 0xec;
  iVar4 = v + 1;
  iVar1 = v + 2;
  iVar2 = v + 3;
  *(undefined *)(long)v = 0;
  *(undefined *)(long)iVar4 = 0;
  *(undefined *)(long)iVar1 = 0;
  *(undefined *)(long)iVar2 = 0;
  iVar4 = v;
  v = v + 4;
  av();
  if (e == 0x29) {
    uVar6 = 0;
    uVar7 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar12 = 0;
  }
  else {
    uVar13 = 0;
    do {
      while( true ) {
        X();
        puVar5 = (undefined *)(long)v;
        v = v + 1;
        *puVar5 = 0x89;
        puVar5 = (undefined *)(long)v;
        v = v + 1;
        *puVar5 = 0x84;
        puVar5 = (undefined *)(long)v;
        v = v + 1;
        *puVar5 = 0x24;
        iVar1 = v + 1;
        iVar2 = v + 2;
        iVar3 = v + 3;
        *(char *)(long)v = (char)uVar13;
        uVar12 = (int)uVar13 + 4;
        *(char *)(long)iVar1 = (char)(uVar13 >> 8);
        *(char *)(long)iVar2 = (char)(uVar13 >> 0x10);
        *(char *)(long)iVar3 = (char)(uVar13 >> 0x18);
        v = v + 4;
        uVar13 = (ulong)uVar12;
        if (e != 0x2c) break;
        av();
        if (e == 0x29) goto LAB_00102c60;
      }
    } while (e != 0x29);
LAB_00102c60:
    uVar10 = (undefined)uVar12;
    uVar9 = (undefined)(uVar12 >> 8);
    uVar7 = (undefined)(uVar12 >> 0x10);
    uVar6 = (undefined)(uVar12 >> 0x18);
  }
  *(undefined *)(long)iVar4 = uVar10;
  *(undefined *)(long)(iVar4 + 1) = uVar9;
  *(undefined *)(long)(iVar4 + 2) = uVar7;
  *(undefined *)(long)(iVar4 + 3) = uVar6;
  av();
  if (uVar11 == 0) {
    iVar1 = *(int *)(long)(iVar8 + 4);
    puVar5 = (undefined *)(long)v;
    v = v + 1;
    *puVar5 = 0xe8;
    iVar2 = v;
    iVar4 = v + 1;
    *(char *)(long)v = (char)iVar1;
    *(char *)(long)iVar4 = (char)((uint)iVar1 >> 8);
    *(char *)(long)(iVar2 + 2) = (char)((uint)iVar1 >> 0x10);
    *(char *)(long)(iVar2 + 3) = (char)((uint)iVar1 >> 0x18);
    iVar4 = v + 4;
    *(int *)(long)(iVar8 + 4) = v;
    v = iVar4;
    if (uVar12 == 0) {
      return 0;
    }
  }
  else {
    iVar4 = uVar12 + 4;
    puVar5 = (undefined *)(long)v;
    v = v + 1;
    *puVar5 = 0xff;
    puVar5 = (undefined *)(long)v;
    v = v + 1;
    *puVar5 = 0x94;
    puVar5 = (undefined *)(long)v;
    v = v + 1;
    *puVar5 = 0x24;
    iVar1 = v + 1;
    iVar8 = v + 2;
    iVar2 = v + 3;
    *(undefined *)(long)v = uVar10;
    uVar10 = (undefined)iVar4;
    *(undefined *)(long)iVar1 = uVar9;
    uVar9 = (undefined)((uint)iVar4 >> 8);
    *(undefined *)(long)iVar8 = uVar7;
    uVar7 = (undefined)((uint)iVar4 >> 0x10);
    *(undefined *)(long)iVar2 = uVar6;
    uVar6 = (undefined)((uint)iVar4 >> 0x18);
    v = v + 4;
  }
  puVar5 = (undefined *)(long)v;
  v = v + 1;
  *puVar5 = 0x81;
  puVar5 = (undefined *)(long)v;
  v = v + 1;
  *puVar5 = 0xc4;
  iVar4 = v + 1;
  iVar1 = v + 2;
  iVar8 = v + 3;
  *(undefined *)(long)v = uVar10;
  *(undefined *)(long)iVar4 = uVar9;
  *(undefined *)(long)iVar1 = uVar7;
  *(undefined *)(long)iVar8 = uVar6;
  v = v + 4;
  return 0;
}



int B(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined uVar7;
  undefined uVar8;
  undefined uVar9;
  int iVar10;
  undefined *puVar11;
  int iVar12;
  
  X(10);
  if (J == 10) {
    iVar12 = 0;
    do {
      iVar10 = C;
      av();
      uVar1 = iVar10 + 0x85;
      iVar2 = iVar10 + 0x84;
      puVar11 = (undefined *)(long)v;
      v = v + 1;
      *puVar11 = 0x85;
      puVar11 = (undefined *)(long)v;
      v = v + 1;
      *puVar11 = 0xc0;
      puVar11 = (undefined *)(long)v;
      v = v + 1;
      *puVar11 = 0xf;
      iVar6 = iVar2;
      uVar3 = uVar1;
      while (1 < uVar3) {
        puVar11 = (undefined *)(long)v;
        v = v + 1;
        *puVar11 = (char)iVar6;
        iVar6 = iVar6 >> 8;
        uVar3 = iVar6 + 1;
      }
      iVar6 = v + 1;
      iVar4 = v + 2;
      iVar5 = v + 3;
      *(char *)(long)v = (char)iVar12;
      *(char *)(long)iVar6 = (char)((uint)iVar12 >> 8);
      *(char *)(long)iVar4 = (char)((uint)iVar12 >> 0x10);
      *(char *)(long)iVar5 = (char)((uint)iVar12 >> 0x18);
      iVar12 = v;
      v = v + 4;
      X(10);
    } while (J == 10);
    if (iVar12 != 0) {
      puVar11 = (undefined *)(long)v;
      v = v + 1;
      *puVar11 = 0x85;
      puVar11 = (undefined *)(long)v;
      v = v + 1;
      *puVar11 = 0xc0;
      puVar11 = (undefined *)(long)v;
      v = v + 1;
      *puVar11 = 0xf;
      while (iVar6 = v, 1 < uVar1) {
        puVar11 = (undefined *)(long)v;
        v = v + 1;
        *puVar11 = (char)iVar2;
        iVar2 = iVar2 >> 8;
        uVar1 = iVar2 + 1;
      }
      iVar2 = v + 1;
      *(char *)(long)v = (char)iVar12;
      *(char *)(long)iVar2 = (char)((uint)iVar12 >> 8);
      *(char *)(long)(iVar6 + 2) = (char)((uint)iVar12 >> 0x10);
      *(char *)(long)(iVar6 + 3) = (char)((uint)iVar12 >> 0x18);
      iVar4 = v;
      iVar12 = v + 4;
      v = v + 5;
      *(undefined *)(long)iVar12 = 0xb8;
      iVar2 = v;
      iVar12 = v + 1;
      *(byte *)(long)v = (byte)iVar10 ^ 1;
      uVar7 = (undefined)((uint)iVar10 >> 8);
      *(undefined *)(long)iVar12 = uVar7;
      uVar8 = (undefined)((uint)iVar10 >> 0x10);
      *(undefined *)(long)(iVar2 + 2) = uVar8;
      uVar9 = (undefined)((uint)iVar10 >> 0x18);
      *(undefined *)(long)(iVar2 + 3) = uVar9;
      iVar12 = v + 4;
      v = v + 5;
      *(undefined *)(long)iVar12 = 0xe9;
      iVar12 = v + 1;
      iVar2 = v + 2;
      iVar6 = v + 3;
      *(undefined *)(long)v = 5;
      *(undefined *)(long)iVar12 = 0;
      *(undefined *)(long)iVar2 = 0;
      *(undefined *)(long)iVar6 = 0;
      v = v + 4;
      ap(iVar4,v);
      puVar11 = (undefined *)(long)v;
      v = v + 1;
      *puVar11 = 0xb8;
      iVar12 = v + 1;
      iVar2 = v + 2;
      iVar6 = v + 3;
      *(byte *)(long)v = (byte)iVar10;
      *(undefined *)(long)iVar12 = uVar7;
      *(undefined *)(long)iVar2 = uVar8;
      *(undefined *)(long)iVar6 = uVar9;
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
  puVar4 = (undefined *)(long)v;
  v = v + 1;
  *puVar4 = 0x85;
  puVar4 = (undefined *)(long)v;
  v = v + 1;
  *puVar4 = 0xc0;
  puVar4 = (undefined *)(long)v;
  v = v + 1;
  *puVar4 = 0xf;
  puVar4 = (undefined *)(long)v;
  v = v + 1;
  *puVar4 = 0x84;
  iVar1 = v + 1;
  iVar2 = v + 2;
  iVar3 = v + 3;
  *(undefined *)(long)v = 0;
  *(undefined *)(long)iVar1 = 0;
  *(undefined *)(long)iVar2 = 0;
  *(undefined *)(long)iVar3 = 0;
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
  puVar4 = (undefined *)(long)v;
  v = v + 1;
  *puVar4 = 0x85;
  puVar4 = (undefined *)(long)v;
  v = v + 1;
  *puVar4 = 0xc0;
  puVar4 = (undefined *)(long)v;
  v = v + 1;
  *puVar4 = 0xf;
  puVar4 = (undefined *)(long)v;
  v = v + 1;
  *puVar4 = 0x84;
  iVar3 = v + 1;
  iVar1 = v + 2;
  iVar2 = v + 3;
  *(undefined *)(long)v = 0;
  *(undefined *)(long)iVar3 = 0;
  *(undefined *)(long)iVar1 = 0;
  *(undefined *)(long)iVar2 = 0;
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
              *(int *)(long)e = i;
              i = i + 4;
              av();
            } while (e != 0x2c);
          }
          else {
            do {
              if (e == 0x3b) goto LAB_00103740;
              iVar5 = -4 - P;
              P = P + 4;
              *(int *)(long)e = iVar5;
              av();
            } while (e != 0x2c);
          }
          av();
        } while( true );
      }
      iVar5 = 8;
      *(int *)(long)e = v;
      av();
      av();
      while (e != 0x29) {
        while( true ) {
          *(int *)(long)e = iVar5;
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
      puVar4 = (undefined *)(long)v;
      U = 0;
      v = v + 1;
      *puVar4 = 0x55;
      puVar4 = (undefined *)(long)v;
      v = v + 1;
      *puVar4 = 0x89;
      puVar4 = (undefined *)(long)v;
      v = v + 1;
      *puVar4 = 0xe5;
      puVar4 = (undefined *)(long)v;
      v = v + 1;
      *puVar4 = 0x81;
      puVar4 = (undefined *)(long)v;
      v = v + 1;
      *puVar4 = 0xec;
      iVar5 = v + 1;
      iVar1 = v + 2;
      iVar2 = v + 3;
      *(undefined *)(long)v = 0;
      *(undefined *)(long)iVar5 = 0;
      *(undefined *)(long)iVar1 = 0;
      *(undefined *)(long)iVar2 = 0;
      iVar1 = v;
      v = v + 4;
      S(0);
      ap(U,v);
      puVar4 = (undefined *)(long)v;
      v = v + 1;
      *puVar4 = 0xc9;
      puVar4 = (undefined *)(long)v;
      v = v + 1;
      *puVar4 = 0xc3;
      iVar5 = P;
      *(char *)(long)iVar1 = (char)P;
      *(char *)(long)(iVar1 + 1) = (char)((uint)iVar5 >> 8);
      *(char *)(long)(iVar1 + 2) = (char)((uint)iVar5 >> 0x10);
      *(char *)(long)(iVar1 + 3) = (char)((uint)iVar5 >> 0x18);
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
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  int h;
  
  iVar4 = e;
  if (e == 0x120) {
    av();
    av();
    X();
    puVar5 = (undefined *)(long)v;
    v = v + 1;
    *puVar5 = 0x85;
    puVar5 = (undefined *)(long)v;
    v = v + 1;
    *puVar5 = 0xc0;
    puVar5 = (undefined *)(long)v;
    v = v + 1;
    *puVar5 = 0xf;
    puVar5 = (undefined *)(long)v;
    v = v + 1;
    *puVar5 = 0x84;
    iVar4 = v + 1;
    iVar6 = v + 2;
    iVar1 = v + 3;
    *(undefined *)(long)v = 0;
    *(undefined *)(long)iVar4 = 0;
    *(undefined *)(long)iVar6 = 0;
    *(undefined *)(long)iVar1 = 0;
    iVar4 = v;
    v = v + 4;
    av();
    S(s);
    if (e == 0x138) {
      av();
      puVar5 = (undefined *)(long)v;
      v = v + 1;
      *puVar5 = 0xe9;
      iVar6 = v + 1;
      iVar1 = v + 2;
      iVar2 = v + 3;
      *(undefined *)(long)v = 0;
      *(undefined *)(long)iVar6 = 0;
      *(undefined *)(long)iVar1 = 0;
      *(undefined *)(long)iVar2 = 0;
      iVar6 = v;
      v = v + 4;
      ap(iVar4,v);
      S(s);
      iVar4 = ap(iVar6,v);
    }
    else {
      iVar4 = ap(iVar4,v);
    }
  }
  else {
    if (e == 0x160 || e == 0x1f8) {
      av();
      av();
      iVar6 = v;
      if (iVar4 == 0x160) {
        X();
        puVar5 = (undefined *)(long)v;
        v = v + 1;
        *puVar5 = 0x85;
        puVar5 = (undefined *)(long)v;
        v = v + 1;
        *puVar5 = 0xc0;
        puVar5 = (undefined *)(long)v;
        v = v + 1;
        *puVar5 = 0xf;
        puVar5 = (undefined *)(long)v;
        v = v + 1;
        *puVar5 = 0x84;
        iVar4 = v + 1;
        iVar1 = v + 2;
        iVar2 = v + 3;
        *(undefined *)(long)v = 0;
        *(undefined *)(long)iVar4 = 0;
        *(undefined *)(long)iVar1 = 0;
        *(undefined *)(long)iVar2 = 0;
        h = v;
        v = v + 4;
      }
      else {
        if (e != 0x3b) {
          X();
        }
        av();
        iVar4 = v;
        h = 0;
        if (e != 0x3b) {
          X();
          puVar5 = (undefined *)(long)v;
          v = v + 1;
          *puVar5 = 0x85;
          puVar5 = (undefined *)(long)v;
          v = v + 1;
          *puVar5 = 0xc0;
          puVar5 = (undefined *)(long)v;
          v = v + 1;
          *puVar5 = 0xf;
          puVar5 = (undefined *)(long)v;
          v = v + 1;
          *puVar5 = 0x84;
          iVar6 = v + 1;
          iVar1 = v + 2;
          iVar2 = v + 3;
          *(undefined *)(long)v = 0;
          *(undefined *)(long)iVar6 = 0;
          *(undefined *)(long)iVar1 = 0;
          *(undefined *)(long)iVar2 = 0;
          h = v;
          v = v + 4;
        }
        av();
        iVar6 = iVar4;
        if (e != 0x29) {
          puVar5 = (undefined *)(long)v;
          v = v + 1;
          *puVar5 = 0xe9;
          iVar6 = v + 1;
          iVar1 = v + 2;
          iVar2 = v + 3;
          *(undefined *)(long)v = 0;
          *(undefined *)(long)iVar6 = 0;
          *(undefined *)(long)iVar1 = 0;
          *(undefined *)(long)iVar2 = 0;
          iVar2 = v;
          iVar6 = v + 4;
          v = iVar6;
          X();
          puVar5 = (undefined *)(long)v;
          iVar1 = (iVar4 - v) + -5;
          v = v + 1;
          *puVar5 = 0xe9;
          iVar3 = v;
          iVar4 = v + 1;
          *(char *)(long)v = (char)iVar1;
          *(char *)(long)iVar4 = (char)((uint)iVar1 >> 8);
          *(char *)(long)(iVar3 + 2) = (char)((uint)iVar1 >> 0x10);
          *(char *)(long)(iVar3 + 3) = (char)((uint)iVar1 >> 0x18);
          v = v + 4;
          ap(iVar2,v);
        }
      }
      av();
      S((int)register0x00000008 + -4);
      puVar5 = (undefined *)(long)v;
      iVar2 = (iVar6 - v) + -5;
      v = v + 1;
      *puVar5 = 0xe9;
      iVar4 = v + 1;
      iVar6 = v + 2;
      iVar1 = v + 3;
      *(char *)(long)v = (char)iVar2;
      *(char *)(long)iVar4 = (char)((uint)iVar2 >> 8);
      *(char *)(long)iVar6 = (char)((uint)iVar2 >> 0x10);
      *(char *)(long)iVar1 = (char)((uint)iVar2 >> 0x18);
      v = v + 4;
      iVar4 = ap(h,v);
      return iVar4;
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
        puVar5 = (undefined *)(long)v;
        v = v + 1;
        *puVar5 = 0xe9;
        iVar4 = v + 1;
        iVar6 = v + 2;
        iVar1 = v + 3;
        *(char *)(long)v = (char)U;
        *(char *)(long)iVar4 = (char)((uint)U >> 8);
        *(char *)(long)iVar6 = (char)((uint)U >> 0x10);
        *(char *)(long)iVar1 = (char)((uint)U >> 0x18);
        U = v;
        v = v + 4;
      }
      else {
        if (e == 400) {
          av();
          iVar2 = *(int *)(long)s;
          puVar5 = (undefined *)(long)v;
          v = v + 1;
          *puVar5 = 0xe9;
          iVar4 = v + 1;
          iVar6 = v + 2;
          iVar1 = v + 3;
          *(char *)(long)v = (char)iVar2;
          *(char *)(long)iVar4 = (char)((uint)iVar2 >> 8);
          *(char *)(long)iVar6 = (char)((uint)iVar2 >> 0x10);
          *(char *)(long)iVar1 = (char)((uint)iVar2 >> 0x18);
          iVar4 = v + 4;
          *(int *)(long)s = v;
          v = iVar4;
        }
        else {
          if (e != 0x3b) {
            X();
          }
        }
      }
    }
    iVar4 = av();
  }
  return iVar4;
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



void FUN_00103f84(int param_1)

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
LAB_00103fd8:
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
    if (a == 0 || iVar2 == 1) goto LAB_00103fd8;
    if (iVar2 == 0) {
      if (param_1 == 0) {
        memcpy((void *)(long)iVar9,__src,(long)(iVar13 - iVar1));
        iVar12 = D;
        i = ((iVar13 + i) - iVar1) + 1;
        goto LAB_00103fd8;
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
        goto LAB_00103fd8;
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
      if (param_1 != 0) goto LAB_00103fd8;
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
LAB_00103fd8:
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
        if (iVar12 == iVar11) goto LAB_001041f8;
      }
    }
    if (iVar12 == iVar11) {
LAB_001041f8:
      i = iVar8;
      return (int)pbVar9;
    }
    iVar2 = T + (iVar1 - Q) * 8;
    e = iVar2 + 0xf8;
    a = *(uint *)(long)(iVar2 + 0xfc);
    iVar2 = *(int *)(long)e;
    i = iVar8;
    if (a == 0 || iVar2 == 1) goto LAB_00103fd8;
    if (iVar2 == 0) {
      if (s == 0) {
        memcpy((void *)(long)iVar8,__src,(long)(iVar12 - iVar1));
        iVar11 = D;
        i = ((iVar12 + i) - iVar1) + 1;
        goto LAB_00103fd8;
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
        goto LAB_00103fd8;
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
      if (s != 0) goto LAB_00103fd8;
      ap(a,iVar2);
    }
    iVar1 = iVar12 + 1;
    __src = (byte *)(long)iVar1;
    bVar4 = *__src;
    iVar11 = D;
    iVar8 = i;
  } while( true );
}



int FUN_0010435c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  int iVar14;
  char *pcVar15;
  int iVar16;
  undefined *puVar17;
  FILE *pFVar18;
  int iVar19;
  char *pcVar20;
  undefined8 *puVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  undefined extraout_w14;
  undefined extraout_w14_00;
  undefined extraout_w15;
  undefined extraout_w15_00;
  undefined extraout_w18;
  undefined extraout_w18_00;
  
  iVar7 = K;
  iVar3 = v;
  R = i;
  v = K + 1;
  *(undefined *)(long)K = 0x58;
  puVar17 = (undefined *)(long)v;
  v = v + 1;
  *puVar17 = 0x54;
  puVar17 = (undefined *)(long)v;
  v = v + 1;
  *puVar17 = 0x50;
  iVar14 = v;
  puVar17 = (undefined *)(long)v;
  iVar16 = *(int *)(long)(T + 0x250);
  v = v + 1;
  *puVar17 = 0xe8;
  iVar23 = v;
  iVar14 = (iVar16 - iVar14) + -5;
  iVar16 = v + 1;
  *(char *)(long)v = (char)iVar14;
  *(char *)(long)iVar16 = (char)((uint)iVar14 >> 8);
  *(char *)(long)(iVar23 + 2) = (char)((uint)iVar14 >> 0x10);
  *(char *)(long)(iVar23 + 3) = (char)((uint)iVar14 >> 0x18);
  iVar16 = v + 4;
  v = v + 5;
  *(undefined *)(long)iVar16 = 0x89;
  puVar17 = (undefined *)(long)v;
  v = v + 1;
  *puVar17 = 0xc3;
  puVar17 = (undefined *)(long)v;
  v = v + 1;
  *puVar17 = 0xb8;
  iVar14 = v;
  iVar16 = v + 1;
  *(undefined *)(long)v = 1;
  *(undefined *)(long)iVar16 = 0;
  *(undefined *)(long)(iVar14 + 2) = 0;
  *(undefined *)(long)(iVar14 + 3) = 0;
  iVar16 = v + 4;
  v = v + 5;
  *(undefined *)(long)iVar16 = 0xcd;
  puVar17 = (undefined *)(long)v;
  v = v + 1;
  *puVar17 = 0x80;
  iVar14 = (iVar3 - iVar7) + i;
  *(undefined8 *)(long)(iVar14 + 1) = 0x2e6f732e6362696c;
  *(undefined2 *)((undefined8 *)(long)(iVar14 + 1) + 1) = 0x36;
  i = iVar14 + 0x16;
  *(undefined8 *)(long)(iVar14 + 0xb) = 0x6f732e6c6462696c;
  *(undefined4 *)((long)(undefined8 *)(long)(iVar14 + 0xb) + 7) = 0x322e6f;
  iVar16 = Q;
  iVar23 = D;
LAB_001045a4:
  iVar19 = iVar16 + 1;
  pcVar20 = (char *)(long)iVar19;
  cVar9 = *pcVar20;
  do {
    iVar16 = iVar19;
    if ((cVar9 != ' ') && (pcVar15 = pcVar20, iVar19 < iVar23)) {
      while( true ) {
        iVar16 = iVar16 + 1;
        if (pcVar15[1] == ' ') break;
        pcVar15 = pcVar15 + 1;
        if (iVar16 == iVar23) goto LAB_00104698;
      }
    }
    if (iVar16 == iVar23) {
LAB_00104698:
      iVar19 = 0;
      iVar4 = i - iVar14;
      uVar8 = i + 3U & 0xfffffffc;
      i = uVar8;
      *(undefined *)(long)(int)uVar8 = 0;
      *(undefined *)(long)(int)(uVar8 + 1) = 0;
      *(undefined *)(long)(int)(uVar8 + 2) = 0;
      *(undefined *)(long)(int)(uVar8 + 3) = 0;
      iVar16 = i;
      i = i + 4;
      *(undefined *)(long)i = 0;
      *(undefined *)(long)(iVar16 + 5) = 0;
      *(undefined *)(long)(iVar16 + 6) = 0;
      *(undefined *)(long)(iVar16 + 7) = 0;
      iVar16 = i;
      i = i + 4;
      *(undefined *)(long)i = 0;
      *(undefined *)(long)(iVar16 + 5) = 0;
      *(undefined *)(long)(iVar16 + 6) = 0;
      *(undefined *)(long)(iVar16 + 7) = 0;
      iVar16 = i;
      i = i + 4;
      *(undefined *)(long)i = 0;
      *(undefined *)(long)(iVar16 + 5) = 0;
      *(undefined *)(long)(iVar16 + 6) = 0;
      *(undefined *)(long)(iVar16 + 7) = 0;
      iVar16 = i + 4;
      iVar23 = Q;
      iVar24 = D;
      i = iVar16;
      break;
    }
    iVar4 = T + (iVar19 - Q) * 8;
    e = iVar4 + 0xf8;
    iVar4 = *(int *)(long)(iVar4 + 0xfc);
    iVar24 = *(int *)(long)e;
    if (iVar4 == 0 || iVar24 == 1) goto LAB_001045a4;
    if (iVar24 != 0) goto LAB_00104680;
    memcpy((void *)(long)i,pcVar20,(long)(iVar16 - iVar19));
    iVar23 = (iVar16 + i) - iVar19;
    iVar19 = iVar16 + 1;
    i = iVar23 + 1;
    pcVar20 = (char *)(long)iVar19;
    cVar9 = *pcVar20;
    iVar23 = D;
  } while( true );
LAB_001047c4:
  iVar25 = iVar23 + 1;
  pcVar20 = (char *)(long)iVar25;
  cVar9 = *pcVar20;
  while( true ) {
    iVar23 = iVar25;
    if ((cVar9 != ' ') && (iVar25 < iVar24)) {
      while( true ) {
        pcVar20 = pcVar20 + 1;
        iVar23 = iVar23 + 1;
        if (*pcVar20 == ' ') break;
        if (iVar23 == iVar24) goto LAB_00104968;
      }
    }
    if (iVar23 == iVar24) break;
    iVar5 = T + (iVar25 - Q) * 8;
    e = iVar5 + 0xf8;
    if (*(int *)(long)(iVar5 + 0xfc) == 0 || *(int *)(long)e != 0) goto LAB_001047c4;
    iVar24 = iVar19 + 0x16;
    *(char *)(long)iVar16 = (char)iVar24;
    iVar19 = ((iVar19 + iVar23) - iVar25) + 1;
    *(char *)(long)(iVar16 + 1) = (char)((uint)iVar24 >> 8);
    *(char *)(long)(iVar16 + 2) = (char)((uint)iVar24 >> 0x10);
    *(char *)(long)(iVar16 + 3) = (char)((uint)iVar24 >> 0x18);
    iVar16 = i + 4;
    iVar24 = i + 5;
    iVar25 = i + 6;
    iVar5 = i + 7;
    i = iVar16;
    *(undefined *)(long)iVar16 = 0;
    *(undefined *)(long)iVar24 = 0;
    *(undefined *)(long)iVar25 = 0;
    *(undefined *)(long)iVar5 = 0;
    iVar16 = i + 4;
    iVar24 = i + 5;
    iVar25 = i + 6;
    iVar5 = i + 7;
    i = iVar16;
    *(undefined *)(long)iVar16 = 0;
    *(undefined *)(long)iVar24 = 0;
    *(undefined *)(long)iVar25 = 0;
    *(undefined *)(long)iVar5 = 0;
    iVar16 = i + 4;
    iVar24 = i + 5;
    iVar5 = i + 6;
    iVar1 = i + 7;
    iVar25 = iVar23 + 1;
    i = iVar16;
    *(undefined *)(long)iVar16 = 0x10;
    *(undefined *)(long)iVar24 = 0;
    *(undefined *)(long)iVar5 = 0;
    *(undefined *)(long)iVar1 = 0;
    pcVar20 = (char *)(long)iVar25;
    iVar16 = i + 4;
    cVar9 = *pcVar20;
    iVar24 = D;
    i = iVar16;
  }
LAB_00104968:
  *(undefined *)(long)iVar16 = 1;
  *(undefined *)(long)(iVar16 + 1) = 0;
  *(undefined *)(long)(iVar16 + 2) = 0;
  *(undefined *)(long)(iVar16 + 3) = 0;
  iVar19 = iVar16 - uVar8;
  iVar23 = iVar19 + 0xf;
  if (-1 < iVar19) {
    iVar23 = iVar19;
  }
  iVar19 = i + 4;
  iVar24 = i + 5;
  iVar1 = iVar23 >> 4;
  iVar25 = i + 6;
  iVar5 = i + 7;
  i = iVar19;
  *(char *)(long)iVar19 = (char)iVar1;
  *(char *)(long)iVar24 = (char)(iVar23 >> 0xc);
  *(char *)(long)iVar25 = (char)(iVar23 >> 0x14);
  *(char *)(long)iVar5 = (char)(iVar23 >> 0x1c);
  iVar23 = i;
  i = i + 4;
  *(undefined *)(long)i = 1;
  *(undefined *)(long)(iVar23 + 5) = 0;
  *(undefined *)(long)(iVar23 + 6) = 0;
  *(undefined *)(long)(iVar23 + 7) = 0;
  iVar23 = i;
  i = i + 4;
  *(undefined *)(long)i = 0;
  *(undefined *)(long)(iVar23 + 5) = 0;
  *(undefined *)(long)(iVar23 + 6) = 0;
  *(undefined *)(long)(iVar23 + 7) = 0;
  iVar23 = i + 4;
  if (2 < iVar1) {
    iVar19 = 2;
    do {
      i = iVar23;
      *(char *)(long)iVar23 = (char)iVar19;
      *(char *)(long)(iVar23 + 1) = (char)((uint)iVar19 >> 8);
      *(char *)(long)(iVar23 + 2) = (char)((uint)iVar19 >> 0x10);
      iVar24 = iVar19 + 1;
      *(char *)(long)(iVar23 + 3) = (char)((uint)iVar19 >> 0x18);
      iVar23 = i + 4;
      iVar19 = iVar24;
    } while (iVar24 != iVar1);
  }
  i = iVar23;
  *(undefined *)(long)iVar23 = 0;
  iVar24 = 0;
  *(undefined *)(long)(iVar23 + 1) = 0;
  *(undefined *)(long)(iVar23 + 2) = 0;
  *(undefined *)(long)(iVar23 + 3) = 0;
  iVar23 = i + 4;
  iVar25 = D;
  iVar19 = Q;
  i = iVar23;
LAB_00104b48:
  iVar5 = iVar19 + 1;
  pcVar20 = (char *)(long)iVar5;
  cVar9 = *pcVar20;
  do {
    iVar19 = iVar5;
    if ((cVar9 != ' ') && (iVar5 < iVar25)) {
      while( true ) {
        pcVar20 = pcVar20 + 1;
        iVar19 = iVar19 + 1;
        if (*pcVar20 == ' ') break;
        if (iVar19 == iVar25) goto LAB_00104d18;
      }
    }
    if (iVar19 == iVar25) {
LAB_00104d18:
      memcpy((void *)(long)R,(void *)(long)K,(long)(iVar3 - iVar7));
      iVar24 = i;
      iVar7 = G;
      iVar3 = G + 1;
      i = G;
      *(undefined *)(long)G = 0x7f;
      *(undefined *)(long)iVar3 = 0x45;
      *(undefined *)(long)(iVar7 + 2) = 0x4c;
      *(undefined *)(long)(iVar7 + 3) = 0x46;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = 1;
      *(undefined *)(long)(iVar3 + 5) = 1;
      *(undefined *)(long)(iVar3 + 6) = 1;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = 0;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = 0;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = 2;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 3;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = 1;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar19 = i;
      iVar3 = i + 5;
      iVar7 = R + y;
      i = i + 4;
      *(char *)(long)i = (char)iVar7;
      *(char *)(long)iVar3 = (char)((uint)iVar7 >> 8);
      *(char *)(long)(iVar19 + 6) = (char)((uint)iVar7 >> 0x10);
      *(char *)(long)(iVar19 + 7) = (char)((uint)iVar7 >> 0x18);
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = 0x30;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = 0;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = 0;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = 0x34;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0x20;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = 3;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = 3;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      i = i + 4;
      ad(0x90,0x13);
      iVar7 = i;
      iVar3 = i + 1;
      *(undefined *)(long)i = extraout_w18;
      *(undefined *)(long)iVar3 = 0;
      *(undefined *)(long)(iVar7 + 2) = 0;
      *(undefined *)(long)(iVar7 + 3) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = extraout_w14;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = extraout_w14;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      i = i + 4;
      ad(0,iVar24 - G);
      iVar7 = i;
      iVar3 = i + 1;
      *(undefined *)(long)i = 7;
      *(undefined *)(long)iVar3 = 0;
      *(undefined *)(long)(iVar7 + 2) = 0;
      *(undefined *)(long)(iVar7 + 3) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = 0;
      *(undefined *)(long)(iVar3 + 5) = extraout_w15;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = 2;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      i = i + 4;
      ad(0xa4,0x58);
      iVar7 = i;
      iVar3 = i + 1;
      *(undefined *)(long)i = 6;
      *(undefined *)(long)iVar3 = 0;
      *(undefined *)(long)(iVar7 + 2) = 0;
      *(undefined *)(long)(iVar7 + 3) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = extraout_w18_00;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar7 = i;
      puVar21 = (undefined8 *)(long)(i + 4);
      *puVar21 = 0x2d646c2f62696c2f;
      puVar21[1] = 0x6f732e78756e696c;
      iVar19 = i + 0x18;
      *(undefined4 *)((long)puVar21 + 0xf) = 0x322e6f;
      iVar3 = i + 0x19;
      i = iVar19;
      *(undefined *)(long)iVar19 = extraout_w14_00;
      *(undefined *)(long)iVar3 = 0;
      *(undefined *)(long)(iVar7 + 0x1a) = 0;
      *(undefined *)(long)(iVar7 + 0x1b) = 0;
      iVar3 = i;
      iVar19 = iVar24 - iVar23;
      i = i + 4;
      *(undefined *)(long)i = extraout_w14_00;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = extraout_w14_00;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = 0xb;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = extraout_w18_00;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar7 = i;
      iVar3 = i + 6;
      iVar16 = iVar16 + y;
      i = i + 4;
      *(char *)(long)i = (char)iVar16;
      *(char *)(long)(iVar7 + 5) = (char)((uint)iVar16 >> 8);
      *(char *)(long)iVar3 = (char)((uint)iVar16 >> 0x10);
      *(char *)(long)(iVar7 + 7) = (char)((uint)iVar16 >> 0x18);
      iVar16 = i;
      i = i + 4;
      *(undefined *)(long)i = 6;
      *(undefined *)(long)(iVar16 + 5) = 0;
      *(undefined *)(long)(iVar16 + 6) = 0;
      *(undefined *)(long)(iVar16 + 7) = 0;
      iVar25 = i;
      iVar16 = i + 4;
      iVar3 = i + 5;
      iVar7 = uVar8 + y;
      i = iVar16;
      *(char *)(long)iVar16 = (char)iVar7;
      *(char *)(long)iVar3 = (char)((uint)iVar7 >> 8);
      *(char *)(long)(iVar25 + 6) = (char)((uint)iVar7 >> 0x10);
      *(char *)(long)(iVar25 + 7) = (char)((uint)iVar7 >> 0x18);
      iVar16 = i;
      i = i + 4;
      *(undefined *)(long)i = 5;
      *(undefined *)(long)(iVar16 + 5) = 0;
      *(undefined *)(long)(iVar16 + 6) = 0;
      *(undefined *)(long)(iVar16 + 7) = 0;
      iVar3 = i;
      iVar16 = i + 5;
      iVar14 = iVar14 + y;
      i = i + 4;
      *(char *)(long)i = (char)iVar14;
      *(char *)(long)iVar16 = (char)((uint)iVar14 >> 8);
      *(char *)(long)(iVar3 + 6) = (char)((uint)iVar14 >> 0x10);
      *(char *)(long)(iVar3 + 7) = (char)((uint)iVar14 >> 0x18);
      iVar16 = i;
      i = i + 4;
      *(undefined *)(long)i = 10;
      *(undefined *)(long)(iVar16 + 5) = 0;
      *(undefined *)(long)(iVar16 + 6) = 0;
      *(undefined *)(long)(iVar16 + 7) = 0;
      iVar16 = i;
      i = i + 4;
      *(char *)(long)i = (char)iVar4;
      *(char *)(long)(iVar16 + 5) = (char)((uint)iVar4 >> 8);
      *(char *)(long)(iVar16 + 6) = (char)((uint)iVar4 >> 0x10);
      *(char *)(long)(iVar16 + 7) = (char)((uint)iVar4 >> 0x18);
      iVar16 = i;
      i = i + 4;
      *(undefined *)(long)i = 0xb;
      *(undefined *)(long)(iVar16 + 5) = 0;
      *(undefined *)(long)(iVar16 + 6) = 0;
      *(undefined *)(long)(iVar16 + 7) = 0;
      iVar16 = i;
      i = i + 4;
      *(undefined *)(long)i = extraout_w15_00;
      *(undefined *)(long)(iVar16 + 5) = 0;
      *(undefined *)(long)(iVar16 + 6) = 0;
      *(undefined *)(long)(iVar16 + 7) = 0;
      iVar16 = i;
      i = i + 4;
      *(undefined *)(long)i = 0x11;
      *(undefined *)(long)(iVar16 + 5) = 0;
      *(undefined *)(long)(iVar16 + 6) = 0;
      *(undefined *)(long)(iVar16 + 7) = 0;
      iVar3 = i;
      iVar23 = iVar23 + y;
      iVar16 = i + 4;
      iVar14 = i + 5;
      i = iVar16;
      *(char *)(long)iVar16 = (char)iVar23;
      *(char *)(long)iVar14 = (char)((uint)iVar23 >> 8);
      *(char *)(long)(iVar3 + 6) = (char)((uint)iVar23 >> 0x10);
      *(char *)(long)(iVar3 + 7) = (char)((uint)iVar23 >> 0x18);
      iVar16 = i;
      i = i + 4;
      *(undefined *)(long)i = 0x12;
      *(undefined *)(long)(iVar16 + 5) = 0;
      *(undefined *)(long)(iVar16 + 6) = 0;
      *(undefined *)(long)(iVar16 + 7) = 0;
      iVar16 = i;
      i = i + 4;
      *(char *)(long)i = (char)iVar19;
      *(char *)(long)(iVar16 + 5) = (char)((uint)iVar19 >> 8);
      *(char *)(long)(iVar16 + 6) = (char)((uint)iVar19 >> 0x10);
      *(char *)(long)(iVar16 + 7) = (char)((uint)iVar19 >> 0x18);
      iVar23 = i;
      iVar16 = i + 4;
      iVar14 = i + 5;
      i = iVar16;
      *(undefined *)(long)iVar16 = 0x13;
      *(undefined *)(long)iVar14 = 0;
      *(undefined *)(long)(iVar23 + 6) = 0;
      *(undefined *)(long)(iVar23 + 7) = 0;
      iVar16 = i + 4;
      iVar14 = i + 5;
      iVar23 = i + 6;
      iVar3 = i + 7;
      i = iVar16;
      *(undefined *)(long)iVar16 = 8;
      *(undefined *)(long)iVar14 = 0;
      *(undefined *)(long)iVar23 = 0;
      *(undefined *)(long)iVar3 = 0;
      iVar16 = i + 4;
      iVar14 = i + 5;
      iVar23 = i + 6;
      iVar3 = i + 7;
      i = iVar16;
      *(undefined *)(long)iVar16 = 0;
      *(undefined *)(long)iVar14 = 0;
      *(undefined *)(long)iVar23 = 0;
      *(undefined *)(long)iVar3 = 0;
      iVar16 = i + 4;
      iVar14 = i + 5;
      iVar23 = i + 6;
      iVar3 = i + 7;
      i = iVar16;
      *(undefined *)(long)iVar16 = 0;
      *(undefined *)(long)iVar14 = 0;
      *(undefined *)(long)iVar23 = 0;
      *(undefined *)(long)iVar3 = 0;
      i = i + 4;
      pFVar18 = fopen((char *)(long)param_1,"w");
      fwrite((void *)(long)G,1,(long)(iVar24 - G),(FILE *)(long)(int)pFVar18);
      iVar16 = fclose((FILE *)(long)(int)pFVar18);
      return iVar16;
    }
    iVar5 = T + (iVar5 - Q) * 8;
    e = iVar5 + 0xf8;
    uVar26 = *(uint *)(long)(iVar5 + 0xfc);
    if (*(int *)(long)e != 0 || uVar26 == 0) goto LAB_00104b48;
    iVar24 = iVar24 + 1;
    do {
      bVar10 = *(byte *)(long)(int)(uVar26 + 1);
      bVar11 = *(byte *)(long)(int)(uVar26 + 2);
      bVar12 = *(byte *)(long)(int)(uVar26 + 3);
      bVar13 = *(byte *)(long)(int)uVar26;
      uVar22 = (uint)(*(char *)(long)(int)(uVar26 - 1) != '\x05');
      iVar25 = iVar24 * 0x100 + uVar22 + 1;
      iVar5 = uVar22 * -4;
      *(byte *)(long)(int)uVar26 = (byte)iVar5;
      *(byte *)(long)(int)(uVar26 + 1) = (byte)((uint)iVar5 >> 8);
      *(byte *)(long)(int)(uVar26 + 2) = (byte)((uint)iVar5 >> 0x10);
      *(byte *)(long)(int)(uVar26 + 3) = (byte)((uint)iVar5 >> 0x18);
      iVar1 = uVar26 - K;
      iVar5 = i + 1;
      uVar26 = (uint)bVar11 << 0x10 | (uint)bVar10 << 8 | (uint)bVar13 | (uint)bVar12 << 0x18;
      iVar6 = iVar1 + R + y;
      iVar1 = i + 2;
      iVar2 = i + 3;
      *(char *)(long)i = (char)iVar6;
      *(char *)(long)iVar5 = (char)((uint)iVar6 >> 8);
      *(char *)(long)iVar1 = (char)((uint)iVar6 >> 0x10);
      *(char *)(long)iVar2 = (char)((uint)iVar6 >> 0x18);
      iVar5 = i;
      i = i + 4;
      *(char *)(long)i = (char)iVar25;
      *(char *)(long)(iVar5 + 5) = (char)((uint)iVar25 >> 8);
      *(char *)(long)(iVar5 + 6) = (char)((uint)iVar25 >> 0x10);
      *(char *)(long)(iVar5 + 7) = (char)((uint)iVar25 >> 0x18);
      i = i + 4;
    } while (uVar26 != 0);
    iVar5 = iVar19 + 1;
    pcVar20 = (char *)(long)iVar5;
    cVar9 = *pcVar20;
    iVar25 = D;
  } while( true );
LAB_00104680:
  ap(iVar4,iVar24);
  iVar23 = D;
  goto LAB_001045a4;
}



int au(int F)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  int iVar14;
  char *pcVar15;
  int iVar16;
  undefined *puVar17;
  FILE *pFVar18;
  int iVar19;
  char *pcVar20;
  undefined8 *puVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  undefined extraout_w14;
  undefined extraout_w14_00;
  undefined extraout_w15;
  undefined extraout_w15_00;
  undefined extraout_w18;
  undefined extraout_w18_00;
  int ah;
  
  iVar7 = K;
  iVar3 = v;
  R = i;
  v = K + 1;
  *(undefined *)(long)K = 0x58;
  puVar17 = (undefined *)(long)v;
  v = v + 1;
  *puVar17 = 0x54;
  puVar17 = (undefined *)(long)v;
  v = v + 1;
  *puVar17 = 0x50;
  iVar14 = v;
  puVar17 = (undefined *)(long)v;
  iVar16 = *(int *)(long)(T + 0x250);
  v = v + 1;
  *puVar17 = 0xe8;
  iVar23 = v;
  iVar14 = (iVar16 - iVar14) + -5;
  iVar16 = v + 1;
  *(char *)(long)v = (char)iVar14;
  *(char *)(long)iVar16 = (char)((uint)iVar14 >> 8);
  *(char *)(long)(iVar23 + 2) = (char)((uint)iVar14 >> 0x10);
  *(char *)(long)(iVar23 + 3) = (char)((uint)iVar14 >> 0x18);
  iVar16 = v + 4;
  v = v + 5;
  *(undefined *)(long)iVar16 = 0x89;
  puVar17 = (undefined *)(long)v;
  v = v + 1;
  *puVar17 = 0xc3;
  puVar17 = (undefined *)(long)v;
  v = v + 1;
  *puVar17 = 0xb8;
  iVar14 = v;
  iVar16 = v + 1;
  *(undefined *)(long)v = 1;
  *(undefined *)(long)iVar16 = 0;
  *(undefined *)(long)(iVar14 + 2) = 0;
  *(undefined *)(long)(iVar14 + 3) = 0;
  iVar16 = v + 4;
  v = v + 5;
  *(undefined *)(long)iVar16 = 0xcd;
  puVar17 = (undefined *)(long)v;
  v = v + 1;
  *puVar17 = 0x80;
  iVar14 = (iVar3 - iVar7) + i;
  *(undefined8 *)(long)(iVar14 + 1) = 0x2e6f732e6362696c;
  *(undefined2 *)((undefined8 *)(long)(iVar14 + 1) + 1) = 0x36;
  i = iVar14 + 0x16;
  *(undefined8 *)(long)(iVar14 + 0xb) = 0x6f732e6c6462696c;
  *(undefined4 *)((long)(undefined8 *)(long)(iVar14 + 0xb) + 7) = 0x322e6f;
  iVar16 = Q;
  iVar23 = D;
LAB_001045a4:
  iVar19 = iVar16 + 1;
  pcVar20 = (char *)(long)iVar19;
  cVar9 = *pcVar20;
  do {
    iVar16 = iVar19;
    if ((cVar9 != ' ') && (pcVar15 = pcVar20, iVar19 < iVar23)) {
      while( true ) {
        iVar16 = iVar16 + 1;
        if (pcVar15[1] == ' ') break;
        pcVar15 = pcVar15 + 1;
        if (iVar16 == iVar23) goto LAB_00104698;
      }
    }
    if (iVar16 == iVar23) {
LAB_00104698:
      iVar19 = 0;
      iVar4 = i - iVar14;
      uVar8 = i + 3U & 0xfffffffc;
      i = uVar8;
      *(undefined *)(long)(int)uVar8 = 0;
      *(undefined *)(long)(int)(uVar8 + 1) = 0;
      *(undefined *)(long)(int)(uVar8 + 2) = 0;
      *(undefined *)(long)(int)(uVar8 + 3) = 0;
      iVar16 = i;
      i = i + 4;
      *(undefined *)(long)i = 0;
      *(undefined *)(long)(iVar16 + 5) = 0;
      *(undefined *)(long)(iVar16 + 6) = 0;
      *(undefined *)(long)(iVar16 + 7) = 0;
      iVar16 = i;
      i = i + 4;
      *(undefined *)(long)i = 0;
      *(undefined *)(long)(iVar16 + 5) = 0;
      *(undefined *)(long)(iVar16 + 6) = 0;
      *(undefined *)(long)(iVar16 + 7) = 0;
      iVar16 = i;
      i = i + 4;
      *(undefined *)(long)i = 0;
      *(undefined *)(long)(iVar16 + 5) = 0;
      *(undefined *)(long)(iVar16 + 6) = 0;
      *(undefined *)(long)(iVar16 + 7) = 0;
      iVar16 = i + 4;
      iVar23 = Q;
      iVar24 = D;
      i = iVar16;
      break;
    }
    iVar4 = T + (iVar19 - Q) * 8;
    e = iVar4 + 0xf8;
    iVar4 = *(int *)(long)(iVar4 + 0xfc);
    iVar24 = *(int *)(long)e;
    if (iVar4 == 0 || iVar24 == 1) goto LAB_001045a4;
    if (iVar24 != 0) goto LAB_00104680;
    memcpy((void *)(long)i,pcVar20,(long)(iVar16 - iVar19));
    iVar23 = (iVar16 + i) - iVar19;
    iVar19 = iVar16 + 1;
    i = iVar23 + 1;
    pcVar20 = (char *)(long)iVar19;
    cVar9 = *pcVar20;
    iVar23 = D;
  } while( true );
LAB_001047c4:
  iVar25 = iVar23 + 1;
  pcVar20 = (char *)(long)iVar25;
  cVar9 = *pcVar20;
  while( true ) {
    iVar23 = iVar25;
    if ((cVar9 != ' ') && (iVar25 < iVar24)) {
      while( true ) {
        pcVar20 = pcVar20 + 1;
        iVar23 = iVar23 + 1;
        if (*pcVar20 == ' ') break;
        if (iVar23 == iVar24) goto LAB_00104968;
      }
    }
    if (iVar23 == iVar24) break;
    iVar5 = T + (iVar25 - Q) * 8;
    e = iVar5 + 0xf8;
    if (*(int *)(long)(iVar5 + 0xfc) == 0 || *(int *)(long)e != 0) goto LAB_001047c4;
    iVar24 = iVar19 + 0x16;
    *(char *)(long)iVar16 = (char)iVar24;
    iVar19 = ((iVar19 + iVar23) - iVar25) + 1;
    *(char *)(long)(iVar16 + 1) = (char)((uint)iVar24 >> 8);
    *(char *)(long)(iVar16 + 2) = (char)((uint)iVar24 >> 0x10);
    *(char *)(long)(iVar16 + 3) = (char)((uint)iVar24 >> 0x18);
    iVar16 = i + 4;
    iVar24 = i + 5;
    iVar25 = i + 6;
    iVar5 = i + 7;
    i = iVar16;
    *(undefined *)(long)iVar16 = 0;
    *(undefined *)(long)iVar24 = 0;
    *(undefined *)(long)iVar25 = 0;
    *(undefined *)(long)iVar5 = 0;
    iVar16 = i + 4;
    iVar24 = i + 5;
    iVar25 = i + 6;
    iVar5 = i + 7;
    i = iVar16;
    *(undefined *)(long)iVar16 = 0;
    *(undefined *)(long)iVar24 = 0;
    *(undefined *)(long)iVar25 = 0;
    *(undefined *)(long)iVar5 = 0;
    iVar16 = i + 4;
    iVar24 = i + 5;
    iVar5 = i + 6;
    iVar1 = i + 7;
    iVar25 = iVar23 + 1;
    i = iVar16;
    *(undefined *)(long)iVar16 = 0x10;
    *(undefined *)(long)iVar24 = 0;
    *(undefined *)(long)iVar5 = 0;
    *(undefined *)(long)iVar1 = 0;
    pcVar20 = (char *)(long)iVar25;
    iVar16 = i + 4;
    cVar9 = *pcVar20;
    iVar24 = D;
    i = iVar16;
  }
LAB_00104968:
  *(undefined *)(long)iVar16 = 1;
  *(undefined *)(long)(iVar16 + 1) = 0;
  *(undefined *)(long)(iVar16 + 2) = 0;
  *(undefined *)(long)(iVar16 + 3) = 0;
  iVar19 = iVar16 - uVar8;
  iVar23 = iVar19 + 0xf;
  if (-1 < iVar19) {
    iVar23 = iVar19;
  }
  iVar19 = i + 4;
  iVar24 = i + 5;
  iVar1 = iVar23 >> 4;
  iVar25 = i + 6;
  iVar5 = i + 7;
  i = iVar19;
  *(char *)(long)iVar19 = (char)iVar1;
  *(char *)(long)iVar24 = (char)(iVar23 >> 0xc);
  *(char *)(long)iVar25 = (char)(iVar23 >> 0x14);
  *(char *)(long)iVar5 = (char)(iVar23 >> 0x1c);
  iVar23 = i;
  i = i + 4;
  *(undefined *)(long)i = 1;
  *(undefined *)(long)(iVar23 + 5) = 0;
  *(undefined *)(long)(iVar23 + 6) = 0;
  *(undefined *)(long)(iVar23 + 7) = 0;
  iVar23 = i;
  i = i + 4;
  *(undefined *)(long)i = 0;
  *(undefined *)(long)(iVar23 + 5) = 0;
  *(undefined *)(long)(iVar23 + 6) = 0;
  *(undefined *)(long)(iVar23 + 7) = 0;
  iVar23 = i + 4;
  if (2 < iVar1) {
    iVar19 = 2;
    do {
      i = iVar23;
      *(char *)(long)iVar23 = (char)iVar19;
      *(char *)(long)(iVar23 + 1) = (char)((uint)iVar19 >> 8);
      *(char *)(long)(iVar23 + 2) = (char)((uint)iVar19 >> 0x10);
      iVar24 = iVar19 + 1;
      *(char *)(long)(iVar23 + 3) = (char)((uint)iVar19 >> 0x18);
      iVar23 = i + 4;
      iVar19 = iVar24;
    } while (iVar24 != iVar1);
  }
  i = iVar23;
  *(undefined *)(long)iVar23 = 0;
  iVar24 = 0;
  *(undefined *)(long)(iVar23 + 1) = 0;
  *(undefined *)(long)(iVar23 + 2) = 0;
  *(undefined *)(long)(iVar23 + 3) = 0;
  iVar23 = i + 4;
  iVar25 = D;
  iVar19 = Q;
  i = iVar23;
LAB_00104b48:
  iVar5 = iVar19 + 1;
  pcVar20 = (char *)(long)iVar5;
  cVar9 = *pcVar20;
  do {
    iVar19 = iVar5;
    if ((cVar9 != ' ') && (iVar5 < iVar25)) {
      while( true ) {
        pcVar20 = pcVar20 + 1;
        iVar19 = iVar19 + 1;
        if (*pcVar20 == ' ') break;
        if (iVar19 == iVar25) goto LAB_00104d18;
      }
    }
    if (iVar19 == iVar25) {
LAB_00104d18:
      memcpy((void *)(long)R,(void *)(long)K,(long)(iVar3 - iVar7));
      iVar24 = i;
      iVar7 = G;
      iVar3 = G + 1;
      i = G;
      *(undefined *)(long)G = 0x7f;
      *(undefined *)(long)iVar3 = 0x45;
      *(undefined *)(long)(iVar7 + 2) = 0x4c;
      *(undefined *)(long)(iVar7 + 3) = 0x46;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = 1;
      *(undefined *)(long)(iVar3 + 5) = 1;
      *(undefined *)(long)(iVar3 + 6) = 1;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = 0;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = 0;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = 2;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 3;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = 1;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar19 = i;
      iVar3 = i + 5;
      iVar7 = R + y;
      i = i + 4;
      *(char *)(long)i = (char)iVar7;
      *(char *)(long)iVar3 = (char)((uint)iVar7 >> 8);
      *(char *)(long)(iVar19 + 6) = (char)((uint)iVar7 >> 0x10);
      *(char *)(long)(iVar19 + 7) = (char)((uint)iVar7 >> 0x18);
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = 0x30;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = 0;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = 0;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = 0x34;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0x20;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = 3;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = 3;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      i = i + 4;
      ad(0x90,0x13);
      iVar7 = i;
      iVar3 = i + 1;
      *(undefined *)(long)i = extraout_w18;
      *(undefined *)(long)iVar3 = 0;
      *(undefined *)(long)(iVar7 + 2) = 0;
      *(undefined *)(long)(iVar7 + 3) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = extraout_w14;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = extraout_w14;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      i = i + 4;
      ad(0,iVar24 - G);
      iVar7 = i;
      iVar3 = i + 1;
      *(undefined *)(long)i = 7;
      *(undefined *)(long)iVar3 = 0;
      *(undefined *)(long)(iVar7 + 2) = 0;
      *(undefined *)(long)(iVar7 + 3) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = 0;
      *(undefined *)(long)(iVar3 + 5) = extraout_w15;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = 2;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      i = i + 4;
      ad(0xa4,0x58);
      iVar7 = i;
      iVar3 = i + 1;
      *(undefined *)(long)i = 6;
      *(undefined *)(long)iVar3 = 0;
      *(undefined *)(long)(iVar7 + 2) = 0;
      *(undefined *)(long)(iVar7 + 3) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = extraout_w18_00;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar7 = i;
      puVar21 = (undefined8 *)(long)(i + 4);
      *puVar21 = 0x2d646c2f62696c2f;
      puVar21[1] = 0x6f732e78756e696c;
      iVar19 = i + 0x18;
      *(undefined4 *)((long)puVar21 + 0xf) = 0x322e6f;
      iVar3 = i + 0x19;
      i = iVar19;
      *(undefined *)(long)iVar19 = extraout_w14_00;
      *(undefined *)(long)iVar3 = 0;
      *(undefined *)(long)(iVar7 + 0x1a) = 0;
      *(undefined *)(long)(iVar7 + 0x1b) = 0;
      iVar3 = i;
      iVar19 = iVar24 - iVar23;
      i = i + 4;
      *(undefined *)(long)i = extraout_w14_00;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = extraout_w14_00;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = 0xb;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar3 = i;
      i = i + 4;
      *(undefined *)(long)i = extraout_w18_00;
      *(undefined *)(long)(iVar3 + 5) = 0;
      *(undefined *)(long)(iVar3 + 6) = 0;
      *(undefined *)(long)(iVar3 + 7) = 0;
      iVar7 = i;
      iVar3 = i + 6;
      iVar16 = iVar16 + y;
      i = i + 4;
      *(char *)(long)i = (char)iVar16;
      *(char *)(long)(iVar7 + 5) = (char)((uint)iVar16 >> 8);
      *(char *)(long)iVar3 = (char)((uint)iVar16 >> 0x10);
      *(char *)(long)(iVar7 + 7) = (char)((uint)iVar16 >> 0x18);
      iVar16 = i;
      i = i + 4;
      *(undefined *)(long)i = 6;
      *(undefined *)(long)(iVar16 + 5) = 0;
      *(undefined *)(long)(iVar16 + 6) = 0;
      *(undefined *)(long)(iVar16 + 7) = 0;
      iVar25 = i;
      iVar16 = i + 4;
      iVar3 = i + 5;
      iVar7 = uVar8 + y;
      i = iVar16;
      *(char *)(long)iVar16 = (char)iVar7;
      *(char *)(long)iVar3 = (char)((uint)iVar7 >> 8);
      *(char *)(long)(iVar25 + 6) = (char)((uint)iVar7 >> 0x10);
      *(char *)(long)(iVar25 + 7) = (char)((uint)iVar7 >> 0x18);
      iVar16 = i;
      i = i + 4;
      *(undefined *)(long)i = 5;
      *(undefined *)(long)(iVar16 + 5) = 0;
      *(undefined *)(long)(iVar16 + 6) = 0;
      *(undefined *)(long)(iVar16 + 7) = 0;
      iVar3 = i;
      iVar16 = i + 5;
      iVar14 = iVar14 + y;
      i = i + 4;
      *(char *)(long)i = (char)iVar14;
      *(char *)(long)iVar16 = (char)((uint)iVar14 >> 8);
      *(char *)(long)(iVar3 + 6) = (char)((uint)iVar14 >> 0x10);
      *(char *)(long)(iVar3 + 7) = (char)((uint)iVar14 >> 0x18);
      iVar16 = i;
      i = i + 4;
      *(undefined *)(long)i = 10;
      *(undefined *)(long)(iVar16 + 5) = 0;
      *(undefined *)(long)(iVar16 + 6) = 0;
      *(undefined *)(long)(iVar16 + 7) = 0;
      iVar16 = i;
      i = i + 4;
      *(char *)(long)i = (char)iVar4;
      *(char *)(long)(iVar16 + 5) = (char)((uint)iVar4 >> 8);
      *(char *)(long)(iVar16 + 6) = (char)((uint)iVar4 >> 0x10);
      *(char *)(long)(iVar16 + 7) = (char)((uint)iVar4 >> 0x18);
      iVar16 = i;
      i = i + 4;
      *(undefined *)(long)i = 0xb;
      *(undefined *)(long)(iVar16 + 5) = 0;
      *(undefined *)(long)(iVar16 + 6) = 0;
      *(undefined *)(long)(iVar16 + 7) = 0;
      iVar16 = i;
      i = i + 4;
      *(undefined *)(long)i = extraout_w15_00;
      *(undefined *)(long)(iVar16 + 5) = 0;
      *(undefined *)(long)(iVar16 + 6) = 0;
      *(undefined *)(long)(iVar16 + 7) = 0;
      iVar16 = i;
      i = i + 4;
      *(undefined *)(long)i = 0x11;
      *(undefined *)(long)(iVar16 + 5) = 0;
      *(undefined *)(long)(iVar16 + 6) = 0;
      *(undefined *)(long)(iVar16 + 7) = 0;
      iVar3 = i;
      iVar23 = iVar23 + y;
      iVar16 = i + 4;
      iVar14 = i + 5;
      i = iVar16;
      *(char *)(long)iVar16 = (char)iVar23;
      *(char *)(long)iVar14 = (char)((uint)iVar23 >> 8);
      *(char *)(long)(iVar3 + 6) = (char)((uint)iVar23 >> 0x10);
      *(char *)(long)(iVar3 + 7) = (char)((uint)iVar23 >> 0x18);
      iVar16 = i;
      i = i + 4;
      *(undefined *)(long)i = 0x12;
      *(undefined *)(long)(iVar16 + 5) = 0;
      *(undefined *)(long)(iVar16 + 6) = 0;
      *(undefined *)(long)(iVar16 + 7) = 0;
      iVar16 = i;
      i = i + 4;
      *(char *)(long)i = (char)iVar19;
      *(char *)(long)(iVar16 + 5) = (char)((uint)iVar19 >> 8);
      *(char *)(long)(iVar16 + 6) = (char)((uint)iVar19 >> 0x10);
      *(char *)(long)(iVar16 + 7) = (char)((uint)iVar19 >> 0x18);
      iVar23 = i;
      iVar16 = i + 4;
      iVar14 = i + 5;
      i = iVar16;
      *(undefined *)(long)iVar16 = 0x13;
      *(undefined *)(long)iVar14 = 0;
      *(undefined *)(long)(iVar23 + 6) = 0;
      *(undefined *)(long)(iVar23 + 7) = 0;
      iVar16 = i + 4;
      iVar14 = i + 5;
      iVar23 = i + 6;
      iVar3 = i + 7;
      i = iVar16;
      *(undefined *)(long)iVar16 = 8;
      *(undefined *)(long)iVar14 = 0;
      *(undefined *)(long)iVar23 = 0;
      *(undefined *)(long)iVar3 = 0;
      iVar16 = i + 4;
      iVar14 = i + 5;
      iVar23 = i + 6;
      iVar3 = i + 7;
      i = iVar16;
      *(undefined *)(long)iVar16 = 0;
      *(undefined *)(long)iVar14 = 0;
      *(undefined *)(long)iVar23 = 0;
      *(undefined *)(long)iVar3 = 0;
      iVar16 = i + 4;
      iVar14 = i + 5;
      iVar23 = i + 6;
      iVar3 = i + 7;
      i = iVar16;
      *(undefined *)(long)iVar16 = 0;
      *(undefined *)(long)iVar14 = 0;
      *(undefined *)(long)iVar23 = 0;
      *(undefined *)(long)iVar3 = 0;
      i = i + 4;
      pFVar18 = fopen((char *)(long)F,"w");
      fwrite((void *)(long)G,1,(long)(iVar24 - G),(FILE *)(long)(int)pFVar18);
      iVar16 = fclose((FILE *)(long)(int)pFVar18);
      return iVar16;
    }
    iVar5 = T + (iVar5 - Q) * 8;
    e = iVar5 + 0xf8;
    uVar26 = *(uint *)(long)(iVar5 + 0xfc);
    if (*(int *)(long)e != 0 || uVar26 == 0) goto LAB_00104b48;
    iVar24 = iVar24 + 1;
    do {
      bVar10 = *(byte *)(long)(int)(uVar26 + 1);
      bVar11 = *(byte *)(long)(int)(uVar26 + 2);
      bVar12 = *(byte *)(long)(int)(uVar26 + 3);
      bVar13 = *(byte *)(long)(int)uVar26;
      uVar22 = (uint)(*(char *)(long)(int)(uVar26 - 1) != '\x05');
      iVar25 = iVar24 * 0x100 + uVar22 + 1;
      iVar5 = uVar22 * -4;
      *(byte *)(long)(int)uVar26 = (byte)iVar5;
      *(byte *)(long)(int)(uVar26 + 1) = (byte)((uint)iVar5 >> 8);
      *(byte *)(long)(int)(uVar26 + 2) = (byte)((uint)iVar5 >> 0x10);
      *(byte *)(long)(int)(uVar26 + 3) = (byte)((uint)iVar5 >> 0x18);
      iVar1 = uVar26 - K;
      iVar5 = i + 1;
      uVar26 = (uint)bVar11 << 0x10 | (uint)bVar10 << 8 | (uint)bVar13 | (uint)bVar12 << 0x18;
      iVar6 = iVar1 + R + y;
      iVar1 = i + 2;
      iVar2 = i + 3;
      *(char *)(long)i = (char)iVar6;
      *(char *)(long)iVar5 = (char)((uint)iVar6 >> 8);
      *(char *)(long)iVar1 = (char)((uint)iVar6 >> 0x10);
      *(char *)(long)iVar2 = (char)((uint)iVar6 >> 0x18);
      iVar5 = i;
      i = i + 4;
      *(char *)(long)i = (char)iVar25;
      *(char *)(long)(iVar5 + 5) = (char)((uint)iVar25 >> 8);
      *(char *)(long)(iVar5 + 6) = (char)((uint)iVar25 >> 0x10);
      *(char *)(long)(iVar5 + 7) = (char)((uint)iVar25 >> 0x18);
      i = i + 4;
    } while (uVar26 != 0);
    iVar5 = iVar19 + 1;
    pcVar20 = (char *)(long)iVar5;
    cVar9 = *pcVar20;
    iVar25 = D;
  } while( true );
LAB_00104680:
  ap(iVar4,iVar24);
  iVar23 = D;
  goto LAB_001045a4;
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


