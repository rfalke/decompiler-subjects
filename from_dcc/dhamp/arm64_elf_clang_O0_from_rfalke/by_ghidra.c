typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
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

typedef struct anon_struct.conflict91 anon_struct.conflict91, *Panon_struct.conflict91;

struct anon_struct.conflict91 {
    int cresult;
    int iresult;
    int cprsult;
    uint uresult;
    long lresult;
    double dresult;
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



void FUN_00400560(void)

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



void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1)
  ;
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x00400658)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x00400680)
// WARNING: Removing unreachable block (ram,0x00400688)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x004006c4)
// WARNING: Removing unreachable block (ram,0x004006cc)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_7433 == '\0') {
    deregister_tm_clones();
    completed_7433 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00400730)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void frame_dummy(void)

{
  register_tm_clones();
  return;
}



// WARNING: Variable defined which should be unmapped: buf1
// WARNING: Could not reconcile some variable overlaps

int main(void)

{
  long lVar1;
  char *__format;
  double dmath;
  long square;
  int i;
  char buf2 [100];
  int local_f0;
  char acStack236 [100];
  char acStack136 [16];
  char buf1 [100];
  
  buf1._84_4_ = 0;
  local_f0 = 0;
  printf("Start...%c\n\n",7);
  do {
    switch(local_f0) {
    case 0:
      results.cresult = stest(acStack136,acStack236);
      printf("\ncresult = %d\n",(ulong)(uint)results.cresult);
      break;
    case 1:
      results.iresult = intest();
      printf("\niresult = %d\n",(ulong)(uint)results.iresult);
      break;
    case 2:
      results.uresult = fib(0x18);
      printf("\nuresult = %u\n",(ulong)results.uresult);
      break;
    case 3:
      results.lresult = sq(0);
      lVar1 = sq(results.lresult);
      printf("\nlresult = %ld",results.lresult);
      printf("\n square = %ld\n",lVar1);
      break;
    case 4:
      results.dresult = sroot((double)results.lresult);
      printf((char *)results.dresult,"\ndresult = %f\n");
      __format = (char *)dply(results.dresult);
      printf(__format,"  dmath = %f\n");
      break;
    case 5:
      results.cprsult = mcopy();
      printf("\b   copy = %d",(ulong)(uint)results.cprsult);
      break;
    default:
      printf("\n\n...End%c",7);
      return buf1._84_4_;
    case -0x452e541f:
      break;
    }
    local_f0 = local_f0 + 1;
  } while( true );
}



long sq(long big)

{
  int i;
  int local_c;
  long local_8;
  
  local_8 = big;
  if (big == 0) {
    for (local_c = 0; local_c < 9000; local_c = local_c + 1) {
      local_8 = local_8 + sq::j;
      sq::j = sq::j + 2;
    }
  }
  else {
    for (local_c = 0; local_c < 9000; local_c = local_c + 1) {
      sq::j = sq::j + -2;
      local_8 = local_8 - sq::j;
    }
  }
  return local_8;
}



double sroot(double num)

{
  double temp2;
  double temp1;
  double local_28;
  double local_20;
  
  local_20 = num;
  for (local_28 = num / 2.0; local_28 * 1e-06 < local_20;
      local_28 = (num / local_28 + local_28) / 2.0) {
    local_20 = abs(num / local_28 - local_28);
  }
  return local_28;
}



double abs(double x)

{
  double local_10;
  
  local_10 = x;
  if (x < 0.0) {
    local_10 = -x;
  }
  return local_10;
}



double dply(double x)

{
  double y;
  int i;
  double local_18;
  int local_c;
  
  local_c = 100;
  while (local_c != 0) {
    local_18 = ((((((((((((x * x * x * x * x * x * x) / x) / x) / x) / x) / x) / x + x + x + x + x +
                     x + x) - x) - x) - x) - x) - x) - x;
    local_c = local_c + -1;
  }
  return local_18;
}



uint fib(int x)

{
  uint uVar1;
  uint local_14;
  
  if (x < 3) {
    local_14 = 1;
  }
  else {
    local_14 = fib(x + -1);
    uVar1 = fib(x + -2);
    local_14 = local_14 + uVar1;
  }
  return local_14;
}



int stest(char *b1,char *b2)

{
  int iVar1;
  int j;
  int i;
  int local_28;
  int local_24;
  
  local_28 = 0;
  for (local_24 = 0; local_24 < 9000; local_24 = local_24 + 1) {
    mstrcpy(b1,"0123456789abcdef");
    mstrcpy(b2,"0123456789abcdee");
    iVar1 = mstrcmp(b1,b2);
    local_28 = local_28 + iVar1;
  }
  return local_28;
}



int mstrcmp(char *c,char *d)

{
  byte *local_18;
  byte *local_10;
  
  local_18 = (byte *)d;
  local_10 = (byte *)c;
  while( true ) {
    if (*local_10 != *local_18) {
      return (uint)*local_10 - (uint)*local_18;
    }
    if (*local_10 == 0) break;
    local_10 = local_10 + 1;
    local_18 = local_18 + 1;
  }
  return 0;
}



void mstrcpy(char *c,char *d)

{
  char cVar1;
  char *local_10;
  char *local_8;
  
  local_10 = d;
  local_8 = c;
  do {
    cVar1 = *local_10;
    *local_8 = cVar1;
    local_10 = local_10 + 1;
    local_8 = local_8 + 1;
  } while (cVar1 != '\0');
  return;
}



// WARNING: Variable defined which should be unmapped: fp

int mcopy(void)

{
  int j;
  int i;
  char buf [100];
  int local_84;
  int local_80;
  byte abStack124 [100];
  FILE *local_18;
  FILE *fp;
  
  mstrcpy((char *)abStack124,"Disk I/O test");
  local_18 = fopen("zyxw.vut","w");
  if (local_18 != (FILE *)0x0) {
    local_80 = 0;
    while (local_80 = local_80 + 1, local_80 < 1000) {
      for (local_84 = 0; abStack124[local_84] != 0; local_84 = local_84 + 1) {
        _IO_putc((uint)abStack124[local_84],local_18);
      }
    }
    fclose(local_18);
    return local_80;
  }
  printf("Cannot open file");
                    // WARNING: Subroutine does not return
  exit(-1);
}



int intest(void)

{
  int sum;
  int k;
  int j;
  int i;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  for (local_4 = 0; local_4 < 1000; local_4 = local_4 + 1) {
    local_10 = 0;
    local_c = 1;
    for (local_8 = 0; local_8 < 0xb3; local_8 = local_8 + 1) {
      local_10 = local_10 + local_c;
      local_c = local_c + 2;
    }
  }
  return local_10;
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


