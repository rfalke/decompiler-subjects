typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef long    sqword;
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


// WARNING! conflicting data type names: /DWARF/stdio.h/FILE - /stdio.h/FILE

typedef struct anon_struct_32_6_756537f9 anon_struct_32_6_756537f9, *Panon_struct_32_6_756537f9;

struct anon_struct_32_6_756537f9 {
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

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
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

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
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



void FUN_001007c0(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

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



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fclose(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

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



// WARNING: Unknown calling convention -- yet parameter storage is locked

void abort(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _IO_putc(int __c,_IO_FILE *__fp)

{
  int iVar1;
  
  iVar1 = _IO_putc(__c,__fp);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention

int main(void)

{
  char *__format;
  long lVar1;
  long square;
  ulong uVar2;
  anon_struct_32_6_756537f9 *paVar3;
  int iVar4;
  double dmath;
  char buf1 [100];
  char buf2 [100];
  
  printf("Start...%c\n\n",7);
  iVar4 = 0;
  do {
    switch(iVar4) {
    case 1:
      results.iresult = intest();
      uVar2 = (ulong)(uint)results.iresult;
      __format = "\niresult = %d\n";
      break;
    case 2:
      results.uresult = fib(0x18);
      uVar2 = (ulong)results.uresult;
      __format = "\nuresult = %u\n";
      break;
    case 3:
      paVar3 = &results;
      results.lresult = j_3245 * 9000 + 0x4d3d318;
      j_3245 = j_3245 + 18000;
      lVar1 = sq(results.lresult);
      printf("\nlresult = %ld",paVar3->lresult);
      printf("\n square = %ld\n",lVar1);
      goto LAB_0010098c;
    case 4:
      results.dresult = sroot((double)results.lresult);
      printf("\ndresult = %f\n");
      dply(results.dresult);
      printf("  dmath = %f\n");
      goto LAB_0010098c;
    case 5:
      results.cprsult = mcopy();
      uVar2 = (ulong)(uint)results.cprsult;
      __format = "\b   copy = %d";
      break;
    default:
      results.cresult = stest(buf1,buf2);
      uVar2 = (ulong)(uint)results.cresult;
      __format = "\ncresult = %d\n";
    }
    printf(__format,uVar2);
LAB_0010098c:
    iVar4 = iVar4 + 1;
    if (iVar4 == 6) {
      printf("\n\n...End%c",7);
      return 0;
    }
  } while( true );
}



void _start(undefined8 param_1)

{
  undefined8 param_9;
  
  __libc_start_main(main,param_9,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1);
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x00100a60)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x00100a88)
// WARNING: Removing unreachable block (ram,0x00100a94)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00100ac4)
// WARNING: Removing unreachable block (ram,0x00100ad0)

void register_tm_clones(void)

{
  return;
}



void FUN_00100adc(void)

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



// WARNING: Removing unreachable block (ram,0x00100b40)
// WARNING: Removing unreachable block (ram,0x00100b4c)

void frame_dummy(void)

{
  register_tm_clones();
  return;
}



// WARNING: Unknown calling convention

long sq(long big)

{
  long lVar1;
  
  if (big == 0) {
    lVar1 = j_3245 * 9000 + 0x4d3d318;
    j_3245 = j_3245 + 18000;
  }
  else {
    lVar1 = j_3245 * -9000 + big + 0x4d41968;
    j_3245 = j_3245 + -18000;
  }
  return lVar1;
}



// WARNING: Unknown calling convention

double sroot(double num)

{
  double temp2;
  double temp1;
  
  temp2 = num * 0.5;
  temp1 = num;
  while (temp2 * 1e-06 < temp1) {
    temp1 = num / temp2 - temp2;
    temp2 = (temp2 + num / temp2) * 0.5;
    if (temp1 < 0.0) {
      temp1 = -temp1;
    }
  }
  return temp2;
}



int abs(int __x)

{
  return __x;
}



// WARNING: Unknown calling convention

double dply(double x)

{
  int iVar1;
  double y;
  
  y = 0.0;
  iVar1 = 0x65;
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    y = ((((((x + ((((((x * x * x * x * x * x * x) / x) / x) / x) / x) / x) / x + x + x + x + x + x)
            - x) - x) - x) - x) - x) - x;
  }
  return y;
}



// WARNING: Unknown calling convention

uint fib(int x)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  for (; 2 < x; x = x + -2) {
    uVar1 = fib(x + -1);
    iVar2 = iVar2 + uVar1;
  }
  return iVar2 + 1;
}



// WARNING: Unknown calling convention

int mstrcmp(char *c,char *d)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    bVar1 = c[lVar2];
    if ((uint)bVar1 != (uint)(byte)d[lVar2]) {
      return (uint)bVar1 - (uint)(byte)d[lVar2];
    }
    lVar2 = lVar2 + 1;
  } while (bVar1 != 0);
  return 0;
}



// WARNING: Unknown calling convention

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



// WARNING: Unknown calling convention

int stest(char *b1,char *b2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *d;
  char *d_00;
  char *extraout_x8;
  char *c;
  char *extraout_x9;
  char *c_00;
  char *d_01;
  
  d_00 = "0123456789abcdef";
  d = "0123456789abcdee";
  iVar3 = 9000;
  iVar2 = 0;
  do {
    mstrcpy(b1,d_00);
    mstrcpy(c_00,d);
    iVar1 = mstrcmp(c,d_01);
    iVar3 = iVar3 + -1;
    iVar2 = iVar2 + iVar1;
    d_00 = extraout_x8;
    b1 = extraout_x9;
  } while (iVar3 != 0);
  return iVar2;
}



// WARNING: Unknown calling convention

int mcopy(void)

{
  FILE *__stream;
  FILE *fp;
  int j;
  int iVar1;
  char buf [100];
  
  mstrcpy(buf,"Disk I/O test");
  __stream = fopen("zyxw.vut","w");
  if (__stream == (FILE *)0x0) {
    printf("Cannot open file");
                    // WARNING: Subroutine does not return
    exit(-1);
  }
  iVar1 = 1000;
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    _j = 0;
    while( true ) {
      if ((byte)buf[_j] == 0) break;
      _IO_putc((uint)(byte)buf[_j],__stream);
      _j = _j + 1;
    }
  }
  fclose(__stream);
  return 1000;
}



// WARNING: Unknown calling convention

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


