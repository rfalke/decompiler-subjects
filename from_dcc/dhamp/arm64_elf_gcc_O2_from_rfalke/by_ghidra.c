typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
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


// WARNING! conflicting data type names: /DWARF/stdio.h/FILE - /stdio.h/FILE

typedef struct anon_struct.conflict316 anon_struct.conflict316, *Panon_struct.conflict316;

struct anon_struct.conflict316 {
    int cresult;
    int iresult;
    int cprsult;
    uint uresult;
    long lresult;
    double dresult;
};

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

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
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



void FUN_001007c0(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void exit(int __status)

{
                    // WARNING: Subroutine does not return
  exit(__status);
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



void __libc_start_main(void)

{
  __libc_start_main();
  return;
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

int _IO_putc(int __c,_IO_FILE *__fp)

{
  int iVar1;
  
  iVar1 = _IO_putc(__c,__fp);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



int main(void)

{
  uint uVar1;
  int iVar2;
  char buf1 [100];
  char buf2 [100];
  
  printf("Start...%c\n\n",7);
  iVar2 = 1;
  do {
    results.cresult = stest(buf1,buf2);
    printf("\ncresult = %d\n",(ulong)(uint)results.cresult);
    if (iVar2 == 6) {
      printf("\n\n...End%c",7);
      return 0;
    }
    uVar1 = iVar2 - 1;
    iVar2 = iVar2 + 1;
  } while (4 < uVar1);
                    // WARNING: Could not emulate address calculation at 0x0010090c
                    // WARNING: Treating indirect jump as call
  iVar2 = (*(code *)(&UNK_0010091c + (long)(char)(&DAT_00101014)[uVar1] * 4))();
  return iVar2;
}



void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1)
  ;
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x00100b20)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x00100b48)
// WARNING: Removing unreachable block (ram,0x00100b54)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00100b84)
// WARNING: Removing unreachable block (ram,0x00100b90)

void register_tm_clones(void)

{
  return;
}



void FUN_00100b9c(void)

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



long sq(long big)

{
  long lVar1;
  
  if (big == 0) {
    lVar1 = sq::j * 9000;
    sq::j = sq::j + 18000;
    return lVar1 + 0x4d3d318;
  }
  lVar1 = sq::j * -9000;
  sq::j = sq::j + -18000;
  return lVar1 + big + 0x4d41968;
}



double sroot(double num)

{
  double dVar1;
  double dVar2;
  
  dVar1 = num * 0.5;
  if (dVar1 * 1e-06 < num) {
    do {
      while( true ) {
        dVar2 = num / dVar1 - dVar1;
        dVar1 = (num / dVar1 + dVar1) * 0.5;
        if (0.0 <= dVar2) break;
        if (-dVar2 <= dVar1 * 1e-06) {
          return dVar1;
        }
      }
    } while (dVar1 * 1e-06 < dVar2);
  }
  return dVar1;
}



double abs(double x)

{
  if (x < 0.0) {
    return -x;
  }
  return x;
}



double dply(double x)

{
  return ((((((((((((x * x * x * x * x * x * x) / x) / x) / x) / x) / x) / x + x + x + x + x + x + x
              ) - x) - x) - x) - x) - x) - x;
}



uint fib(int x)

{
  int x_00;
  uint uVar1;
  int iVar2;
  
  if (2 < x) {
    iVar2 = 0;
    do {
      x_00 = x + -1;
      x = x + -2;
      uVar1 = fib(x_00);
      iVar2 = iVar2 + uVar1;
    } while (2 < x);
    return iVar2 + 1;
  }
  return 1;
}



int stest(char *b1,char *b2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 9000;
  iVar7 = 0;
  do {
    lVar4 = 0;
    do {
      cVar3 = "0123456789abcdef"[lVar4];
      b1[lVar4] = cVar3;
      lVar4 = lVar4 + 1;
    } while (cVar3 != '\0');
    lVar4 = 0;
    do {
      cVar3 = "0123456789abcdee"[lVar4];
      b2[lVar4] = cVar3;
      lVar4 = lVar4 + 1;
    } while (cVar3 != '\0');
    bVar1 = *b1;
    bVar2 = *b2;
    if (bVar1 == bVar2) {
      if (bVar1 != 0) {
        lVar4 = 1;
        do {
          bVar1 = b1[lVar4];
          bVar2 = b2[lVar4];
          lVar4 = lVar4 + 1;
          if (bVar1 != bVar2) goto LAB_00100e48;
        } while (bVar1 != 0);
      }
      iVar5 = 0;
    }
    else {
LAB_00100e48:
      iVar5 = (uint)bVar1 - (uint)bVar2;
    }
    iVar6 = iVar6 + -1;
    iVar7 = iVar7 + iVar5;
    if (iVar6 == 0) {
      return iVar7;
    }
  } while( true );
}



int mstrcmp(char *c,char *d)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  
  bVar1 = *c;
  bVar2 = *d;
  if (bVar2 == bVar1) {
    if (bVar2 != 0) {
      lVar3 = 1;
      do {
        bVar1 = c[lVar3];
        bVar2 = d[lVar3];
        lVar3 = lVar3 + 1;
        if (bVar1 != bVar2) goto LAB_00100ea0;
      } while (bVar1 != 0);
    }
    return 0;
  }
LAB_00100ea0:
  return (uint)bVar1 - (uint)bVar2;
}



void mstrcpy(char *c,char *d)

{
  char cVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    cVar1 = d[lVar2];
    c[lVar2] = cVar1;
    lVar2 = lVar2 + 1;
  } while (cVar1 != '\0');
  return;
}



int mcopy(void)

{
  byte bVar1;
  uint __c;
  long lVar2;
  FILE *__fp;
  byte *pbVar3;
  int iVar4;
  char buf [100];
  
  lVar2 = 0;
  do {
    bVar1 = "Disk I/O test"[lVar2];
    buf[lVar2] = bVar1;
    lVar2 = lVar2 + 1;
  } while (bVar1 != 0);
  __fp = fopen("zyxw.vut","w");
  if (__fp != (FILE *)0x0) {
    iVar4 = 999;
    do {
      __c = (uint)(byte)buf[0];
      pbVar3 = (byte *)buf;
      if (buf[0] != 0) {
        do {
          pbVar3 = pbVar3 + 1;
          _IO_putc(__c,__fp);
          __c = (uint)*pbVar3;
        } while (__c != 0);
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    fclose(__fp);
    return 1000;
  }
  printf("Cannot open file");
                    // WARNING: Subroutine does not return
  exit(-1);
}



int intest(void)

{
  return 0x7d29;
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


