typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
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


// WARNING! conflicting data type names: /DWARF/stdio.h/FILE - /stdio.h/FILE

typedef struct anon_struct.conflict7e anon_struct.conflict7e, *Panon_struct.conflict7e;

struct anon_struct.conflict7e {
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

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
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



int main(void)

{
  char *__format;
  int iVar1;
  ulong uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  char buf2 [100];
  char buf1 [100];
  undefined8 local_150;
  undefined8 uStack328;
  undefined local_140;
  undefined8 local_e0;
  undefined8 uStack216;
  undefined local_d0;
  
  printf("Start...%c\n\n",7);
  uVar9 = 0;
LAB_004007f0:
  do {
    if (5 < uVar9) goto LAB_004009a8;
    iVar3 = 0;
    iVar1 = 0;
    switch(uVar9) {
    case 0:
      do {
        uVar6 = 0x30;
        local_d0 = 0;
        local_140 = 0;
        pbVar4 = (byte *)((ulong)&local_e0 | 1);
        pbVar5 = (byte *)((ulong)&local_150 | 1);
        do {
          if (uVar6 == 0) {
            iVar7 = 0;
            break;
          }
          uVar6 = (uint)*pbVar4;
          iVar7 = uVar6 - *pbVar5;
          pbVar4 = pbVar4 + 1;
          pbVar5 = pbVar5 + 1;
        } while (iVar7 == 0);
        results.cresult = iVar7 + iVar1;
        iVar3 = iVar3 + 1;
        iVar1 = results.cresult;
      } while (iVar3 != 9000);
      local_150 = 0x3736353433323130;
      uStack328 = 0x6565646362613938;
      local_e0 = 0x3736353433323130;
      uStack216 = 0x6665646362613938;
      printf("\ncresult = %d\n");
      break;
    case 1:
      results.iresult = 0x7d29;
      uVar2 = 0x7d29;
      __format = "\niresult = %d\n";
      goto LAB_004008a8;
    case 2:
      results.uresult = fib(0x18);
      __format = "\nuresult = %u\n";
      uVar2 = (ulong)results.uresult;
LAB_004008a8:
      printf(__format,uVar2);
LAB_004007e8:
      uVar9 = uVar9 + 1;
      goto LAB_004007f0;
    case 3:
      lVar8 = sq::j + 18000;
      results.lresult = sq::j * 9000 + 0x4d3d318;
      if (results.lresult == 0) {
        sq::j = sq::j + 36000;
        lVar8 = lVar8 * 9000 + 0x4d3d318;
      }
      else {
        lVar8 = sq::j * 9000 + lVar8 * -9000 + 162000000;
      }
      printf("\nlresult = %ld");
      printf("\n square = %ld\n",lVar8);
      goto LAB_004007e8;
    case 4:
      dVar10 = (double)results.lresult;
      results.dresult = dVar10 * 0.5;
      if (results.dresult * 1e-06 < dVar10) {
        do {
          dVar12 = dVar10 / results.dresult - results.dresult;
          results.dresult = (results.dresult + dVar10 / results.dresult) * 0.5;
          dVar11 = -dVar12;
          if (0.0 <= dVar12) {
            dVar11 = dVar12;
          }
        } while (results.dresult * 1e-06 < dVar11);
      }
      printf("\ndresult = %f\n");
      printf((char *)(((((((results.dresult +
                           results.dresult +
                           results.dresult +
                           results.dresult +
                           results.dresult +
                           results.dresult +
                           ((((((results.dresult *
                                results.dresult *
                                results.dresult *
                                results.dresult *
                                results.dresult * results.dresult * results.dresult) /
                               results.dresult) / results.dresult) / results.dresult) /
                            results.dresult) / results.dresult) / results.dresult) - results.dresult
                          ) - results.dresult) - results.dresult) - results.dresult) -
                      results.dresult) - results.dresult),"  dmath = %f\n");
      break;
    case 5:
      results.cprsult = mcopy();
      printf("\b   copy = %d",(ulong)(uint)results.cprsult);
      goto LAB_00400a04;
    }
LAB_004009a8:
    uVar9 = uVar9 + 1;
    if (uVar9 == 6) {
LAB_00400a04:
      printf("\n\n...End%c",7);
      return 0;
    }
  } while( true );
}



long sq(long big)

{
  long lVar1;
  
  if (big != 0) {
    lVar1 = sq::j * -9000;
    sq::j = sq::j + -18000;
    return big + lVar1 + 0x4d41968;
  }
  lVar1 = sq::j * 9000;
  sq::j = sq::j + 18000;
  return lVar1 + 0x4d3d318;
}



double sroot(double num)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = num * 0.5;
  if (dVar1 * 1e-06 < num) {
    do {
      dVar3 = num / dVar1 - dVar1;
      dVar1 = (dVar1 + num / dVar1) * 0.5;
      dVar2 = -dVar3;
      if (0.0 <= dVar3) {
        dVar2 = dVar3;
      }
    } while (dVar1 * 1e-06 < dVar2);
  }
  return dVar1;
}



double abs(double x)

{
  double dVar1;
  
  dVar1 = -x;
  if (0.0 <= x) {
    dVar1 = x;
  }
  return dVar1;
}



double dply(double x)

{
  return ((((((((((((x * x * x * x * x * x * x) / x) / x) / x) / x) / x) / x + x + x + x + x + x + x
              ) - x) - x) - x) - x) - x) - x;
}



uint fib(int x)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int x_00;
  
  if (x < 3) {
    uVar3 = 1;
  }
  else {
    x_00 = x + -1;
    uVar3 = 1;
    do {
      uVar2 = fib(x_00);
      uVar3 = uVar2 + uVar3;
      iVar1 = x_00 + -1;
      x_00 = x_00 + -2;
    } while (2 < iVar1);
  }
  return uVar3;
}



int stest(char *b1,char *b2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    *(undefined8 *)(b1 + 8) = 0x6665646362613938;
    *(undefined8 *)b1 = 0x3736353433323130;
    b1[0x10] = '\0';
    *(undefined8 *)(b2 + 8) = 0x6565646362613938;
    *(undefined8 *)b2 = 0x3736353433323130;
    b2[0x10] = '\0';
    uVar4 = (uint)(byte)*b1;
    bVar1 = *b2;
    pbVar6 = (byte *)(b1 + 1);
    pbVar7 = (byte *)(b2 + 1);
    if (*b1 == bVar1) {
      do {
        if (uVar4 == 0) {
          iVar5 = 0;
          goto LAB_00400c10;
        }
        uVar4 = (uint)*pbVar6;
        bVar1 = *pbVar7;
        pbVar6 = pbVar6 + 1;
        pbVar7 = pbVar7 + 1;
      } while (uVar4 == bVar1);
    }
    iVar5 = uVar4 - bVar1;
LAB_00400c10:
    iVar2 = iVar5 + iVar2;
    iVar3 = iVar3 + 1;
    if (iVar3 == 9000) {
      return iVar2;
    }
  } while( true );
}



int mstrcmp(char *c,char *d)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  uVar2 = (uint)(byte)*c;
  bVar1 = *d;
  if (*c == bVar1) {
    pbVar3 = (byte *)(d + 1);
    pbVar4 = (byte *)(c + 1);
    do {
      if (uVar2 == 0) {
        return 0;
      }
      uVar2 = (uint)*pbVar4;
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      pbVar4 = pbVar4 + 1;
    } while (uVar2 == bVar1);
  }
  return (int)(uVar2 - bVar1);
}



void mstrcpy(char *c,char *d)

{
  char cVar1;
  
  do {
    cVar1 = *d;
    *c = cVar1;
    c = c + 1;
    d = d + 1;
  } while (cVar1 != '\0');
  return;
}



// WARNING: Could not reconcile some variable overlaps

int mcopy(void)

{
  FILE *__fp;
  uint __c;
  int iVar1;
  undefined8 *puVar2;
  char buf [100];
  undefined8 local_a4;
  undefined4 local_9c;
  undefined2 local_98;
  
  local_a4 = 0x4f2f49206b736944;
  local_9c = 0x73657420;
  local_98 = 0x74;
  __fp = fopen("zyxw.vut","w");
  if (__fp != (FILE *)0x0) {
    iVar1 = 1;
    do {
      __c = (uint)(byte)local_a4;
      puVar2 = &local_a4;
      if ((byte)local_a4 != 0) {
        do {
          puVar2 = (undefined8 *)((long)puVar2 + 1);
          _IO_putc(__c,(_IO_FILE *)__fp);
          __c = (uint)*(byte *)puVar2;
        } while (__c != 0);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 1000);
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



void FUN_00400d4c(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    // WARNING: Could not recover jumptable at 0x00400d4c. Too many branches
                    // WARNING: Treating indirect jump as call
  UNRECOVERED_JUMPTABLE = (code *)UndefinedInstructionException(0,0x400d4c);
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


