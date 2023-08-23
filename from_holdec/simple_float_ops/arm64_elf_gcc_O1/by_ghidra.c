typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
float16
typedef long long    longlong;
typedef unsigned long    qword;
typedef long    sqword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef ulong sizetype;

typedef ulong size_t;

typedef long __off_t;

typedef sqword __off64_t;

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

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

typedef struct _IO_FILE_plus _IO_FILE_plus, *P_IO_FILE_plus;

struct _IO_FILE_plus {
};

typedef enum _LIB_VERSION_TYPE {
    _IEEE_=-1,
    _SVID_=0,
    _XOPEN_=1,
    _POSIX_=2,
    _ISOC_=3
} _LIB_VERSION_TYPE;

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

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;




int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



void FUN_00100680(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
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

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



void _start(undefined8 param_1)

{
  undefined8 param_9;
  
  __libc_start_main(main,param_9,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1);
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x00100738)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x00100760)
// WARNING: Removing unreachable block (ram,0x0010076c)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0010079c)
// WARNING: Removing unreachable block (ram,0x001007a8)

void register_tm_clones(void)

{
  return;
}



void FUN_001007b4(void)

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



// WARNING: Removing unreachable block (ram,0x00100818)
// WARNING: Removing unreachable block (ram,0x00100824)

void frame_dummy(void)

{
  register_tm_clones();
  return;
}



// WARNING: Unknown calling convention

void use(double x)

{
  printf("%f");
  return;
}



// WARNING: Unknown calling convention

void use_int(int x)

{
  printf("%d",(ulong)(uint)x);
  return;
}



// WARNING: Unknown calling convention

int read_ints(void)

{
  use((double)global_long_long +
      (double)global_long +
      (double)global_int + (double)(int)global_short + (double)(int)global_char + 0.0);
  return 0x78;
}



// WARNING: Unknown calling convention

int write_ints(double pi)

{
  global_int = (int)pi;
  global_char = (char)global_int;
  global_short = (short)global_int;
  global_long = (long)pi;
  global_long_long = (long)pi;
  return 0x79;
}



// WARNING: Unknown calling convention

int read_floats(void)

{
  undefined8 uVar1;
  double x;
  
  uVar1 = __extenddftf2((double)global_float + 0.0 + global_double);
  __addtf3(uVar1,global_long_double._0_8_);
  x = (double)__trunctfdf2();
  use(x);
  return 0x7a;
}



// WARNING: Unknown calling convention

void write_floats(double pi)

{
  undefined8 in_register_00005008;
  
  global_float = (float)pi;
  global_double = pi;
  global_long_double._0_8_ = __extenddftf2();
  global_long_double._8_8_ = in_register_00005008;
  return;
}



// WARNING: Unknown calling convention

void converting_between_floats_f1(void)

{
  global_float = (float)global_double;
  return;
}



// WARNING: Unknown calling convention

void converting_between_floats_f2(void)

{
  global_float = (float)__trunctfsf2(global_long_double._0_8_);
  return;
}



// WARNING: Unknown calling convention

void converting_between_floats_d1(void)

{
  global_double = (double)global_float;
  return;
}



// WARNING: Unknown calling convention

void converting_between_floats_d2(void)

{
  global_double = (double)__trunctfdf2(global_long_double._0_8_);
  return;
}



// WARNING: Unknown calling convention

void converting_between_floats_l1(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  global_long_double._0_8_ = __extendsftf2(global_float);
  global_long_double._8_8_ = uVar1;
  return;
}



// WARNING: Unknown calling convention

void converting_between_floats_l2(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  global_long_double._0_8_ = __extenddftf2(global_double);
  global_long_double._8_8_ = uVar1;
  return;
}



// WARNING: Unknown calling convention

int basic_operations(double x,double y)

{
  use(x + y);
  use(x - y);
  use(y - x);
  use(x * y);
  use(x / y);
  use(y / x);
  use(-x);
  return 0x7b;
}



// WARNING: Unknown calling convention

int compare_floats(double x,double y)

{
  use_int((uint)(x == y));
  use_int((uint)(x != y));
  use_int((uint)(y < x));
  use_int((uint)(y <= x));
  use_int((uint)(x < y));
  use_int((uint)(x <= y));
  return 0x7c;
}



// WARNING: Unknown calling convention

int constants(double x)

{
  use(x + x);
  use(x * 3.0);
  use(x * 3.141592653589793);
  use(x * 10.0);
  use(x * 12.345);
  return 0x7d;
}



// WARNING: Unknown calling convention

int main(void)

{
  printf("%zu %zu %zu %zu %zu\n",1,2,4,8);
  printf("%zu %zu %zu\n",4,8,0x10);
  return 0;
}



ulong __addtf3(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong in_register_00005008;
  ulong in_register_00005028;
  
  uVar2 = fpcr;
  uVar15 = in_register_00005008 >> 0x30 & 0x7fff;
  uVar14 = (in_register_00005008 & 0xffffffffffff) << 3;
  uVar18 = -((long)in_register_00005008 >> 0x3f);
  uVar17 = in_register_00005028 >> 0x3f;
  uVar16 = in_register_00005028 >> 0x30 & 0x7fff;
  uVar21 = in_register_00005028 << 3;
  uVar8 = uVar21 & 0x7fffffffffff8;
  uVar12 = uVar14 | param_1 >> 0x3d;
  uVar19 = param_1 * 8;
  uVar20 = param_2 * 8;
  uVar13 = uVar8 | param_2 >> 0x3d;
  uVar5 = (uint)(uVar14 >> 0x20);
  uVar11 = (uint)(uVar8 >> 0x20);
  if (uVar18 == uVar17) {
    uVar6 = (int)uVar15 - (int)uVar16;
    if ((int)uVar6 < 1) {
      if (uVar6 != 0) {
        if (uVar15 == 0) {
          if ((uVar12 | uVar19) == 0) {
            uVar17 = uVar18;
            if (uVar16 != 0x7fff) goto LAB_00100e04;
          }
          else {
            uVar6 = ~uVar6;
            if (uVar6 == 0) {
              uVar21 = uVar19 + uVar20;
              uVar13 = uVar12 + uVar13;
              if (uVar21 <= uVar20 && uVar20 - uVar21 != 0) {
                uVar13 = uVar13 + 1;
              }
              goto LAB_0010120c;
            }
            if (uVar16 != 0x7fff) goto LAB_00101524;
          }
        }
        else if (uVar16 != 0x7fff) {
          uVar6 = -uVar6;
          uVar12 = uVar12 | 0x8000000000000;
LAB_00101524:
          if ((int)uVar6 < 0x75) {
            if ((int)uVar6 < 0x40) {
              uVar15 = uVar12 >> ((ulong)uVar6 & 0x3f);
              uVar21 = (ulong)(uVar19 << ((ulong)(0x40 - uVar6) & 0x3f) != 0) |
                       uVar12 << ((ulong)(0x40 - uVar6) & 0x3f) | uVar19 >> ((ulong)uVar6 & 0x3f);
            }
            else {
              if (uVar6 == 0x40) {
                uVar21 = 0;
              }
              else {
                uVar21 = uVar12 << ((ulong)(0x80 - uVar6) & 0x3f);
              }
              uVar15 = 0;
              uVar21 = uVar12 >> ((ulong)(uVar6 - 0x40) & 0x3f) | (ulong)((uVar21 | uVar19) != 0);
            }
          }
          else {
            uVar15 = 0;
            uVar21 = (ulong)((uVar12 | uVar19) != 0);
          }
          uVar21 = uVar21 + uVar20;
          uVar13 = uVar15 + uVar13;
          if (uVar21 <= uVar20 && uVar20 - uVar21 != 0) {
            uVar13 = uVar13 + 1;
          }
          goto LAB_0010120c;
        }
        if ((uVar13 | uVar20) != 0) {
          uVar11 = uVar11 >> 0x12 ^ 1;
          uVar15 = uVar16;
          goto LAB_00100f44;
        }
LAB_001014b8:
        uVar20 = uVar13 | uVar20;
        uVar13 = 0;
        uVar11 = 0;
        goto LAB_00100e5c;
      }
      uVar1 = uVar15 + 1;
      uVar11 = 0;
      if (1 < (uVar1 & 0x7fff)) {
        if (uVar1 != 0x7fff) {
          uVar20 = uVar19 + uVar20;
          uVar12 = uVar12 + uVar13;
          if (uVar20 <= uVar19 && uVar19 - uVar20 != 0) {
            uVar12 = uVar12 + 1;
          }
          uVar13 = uVar12 >> 1;
          uVar15 = uVar1;
          uVar20 = uVar20 >> 1 | uVar12 << 0x3f;
          goto LAB_00100f44;
        }
        if ((uVar2 & 0xc00000) == 0) goto LAB_0010146c;
        if ((uVar2 & 0xc00000) == 0x400000) {
          if (uVar18 == 0) goto LAB_0010146c;
          uVar13 = 0xffffffffffffffff;
          bVar9 = false;
          uVar20 = 0xffffffffffffffff;
          uVar15 = 0x7ffe;
          uVar11 = 0x14;
          goto LAB_00100d24;
        }
LAB_00101444:
        if (((uint)(in_register_00005008 >> 0x3f) & (uint)((uVar2 & 0xc00000) == 0x800000)) != 0) {
          uVar13 = 0;
          uVar20 = 0;
          uVar11 = 0x14;
          goto LAB_00100e5c;
        }
        uVar13 = 0xffffffffffffffff;
        uVar11 = 0x14;
        uVar15 = 0x7ffe;
        uVar20 = uVar13;
LAB_00100f54:
        uVar12 = uVar2 & 0xc00000;
        if (uVar12 == 0x400000) {
          bVar9 = false;
LAB_0010102c:
          if (uVar18 != 0) goto joined_r0x00100d3c;
        }
        else {
          if (uVar12 != 0x800000) {
            if (uVar12 == 0) {
              bVar9 = false;
LAB_00100f6c:
              if (((uVar20 & 0xf) != 4) &&
                 (uVar12 = uVar20 + 4, bVar10 = uVar12 < uVar20, uVar20 = uVar12, bVar10)) {
                uVar13 = uVar13 + 1;
              }
              goto joined_r0x00100d3c;
            }
            goto LAB_00100f8c;
          }
          bVar9 = false;
LAB_0010104c:
          if (uVar18 == 0) goto joined_r0x00100d3c;
        }
        uVar12 = uVar20 + 8;
        bVar10 = uVar12 < uVar20;
        uVar20 = uVar12;
        if (bVar10) {
          uVar13 = uVar13 + 1;
        }
        goto joined_r0x00100d3c;
      }
      if (uVar15 == 0) {
        if ((uVar12 | uVar19) == 0) {
          bVar9 = (uVar13 | uVar20) != 0;
          goto LAB_00100e1c;
        }
        if ((uVar13 | uVar20) == 0) goto LAB_00101618;
        uVar21 = uVar19 + uVar20;
        uVar13 = uVar12 + uVar13;
        if (uVar21 <= uVar19 && uVar19 - uVar21 != 0) {
          uVar13 = uVar13 + 1;
        }
        if ((uVar13 >> 0x33 & 1) == 0) {
          uVar15 = 0;
          bVar9 = (uVar21 | uVar13) != 0;
          goto joined_r0x00100d14;
        }
        uVar13 = uVar13 & 0xfff7ffffffffffff;
        uVar15 = 1;
        uVar20 = uVar21;
        goto LAB_00100f44;
      }
      if (uVar15 == 0x7fff) {
        if ((uVar12 | uVar19) == 0) {
          if (uVar16 == 0x7fff) goto LAB_001015dc;
          goto LAB_00100f44;
        }
        uVar11 = uVar5 >> 0x12 ^ 1;
        if (uVar16 == 0x7fff) goto LAB_001015e0;
LAB_00101790:
        uVar21 = uVar13 | uVar20;
        uVar13 = uVar12;
        uVar15 = 0x7fff;
        uVar20 = uVar19;
        if (uVar21 == 0) goto LAB_00100f44;
      }
      else {
        if (uVar16 != 0x7fff) {
LAB_001015c8:
          if ((uVar12 | uVar19) == 0) {
            uVar15 = 0x7fff;
            goto LAB_00100f44;
          }
          goto LAB_00101790;
        }
LAB_001015dc:
        uVar11 = 0;
LAB_001015e0:
        if ((uVar13 | uVar20) == 0) goto LAB_001015c8;
        if ((uVar21 & 0x4000000000000) == 0) {
          uVar11 = 1;
        }
        if ((uVar12 | uVar19) == 0) {
          bVar9 = false;
          uVar15 = 0x7fff;
          goto LAB_00100e24;
        }
      }
      uVar20 = in_register_00005008 & 0xffffffffffff;
      if ((uVar14 >> 0x32 != 0) && (uVar8 >> 0x32 == 0)) {
        uVar20 = uVar8 >> 3;
        uVar18 = uVar17;
        param_1 = param_2;
      }
      uVar13 = param_1 >> 0x3d | uVar20 << 3;
      uVar20 = param_1 << 3;
      uVar15 = 0x7fff;
LAB_00100f44:
      if ((uVar20 & 7) != 0) {
        uVar11 = uVar11 | 0x10;
        goto LAB_00100f54;
      }
LAB_00100f8c:
      uVar12 = uVar13 & 0x8000000000000;
      goto LAB_00100d4c;
    }
    if (uVar16 == 0) {
      if ((uVar13 | uVar20) != 0) {
        uVar6 = uVar6 - 1;
        if (uVar6 != 0) goto joined_r0x00100efc;
        uVar21 = uVar19 + uVar20;
        uVar13 = uVar12 + uVar13;
        uVar16 = uVar15;
        if (uVar21 <= uVar19 && uVar19 - uVar21 != 0) {
          uVar13 = uVar13 + 1;
        }
        goto LAB_0010120c;
      }
      uVar13 = uVar12;
      uVar17 = uVar18;
      uVar16 = uVar15;
      uVar20 = uVar19;
      if (uVar15 != 0x7fff) goto LAB_00100e04;
      if ((uVar12 | uVar19) != 0) {
        uVar11 = uVar5 >> 0x12 ^ 1;
        goto LAB_00100f44;
      }
      uVar13 = 0;
      uVar20 = 0;
      uVar11 = 0;
    }
    else {
      uVar13 = uVar13 | 0x8000000000000;
joined_r0x00100efc:
      if (uVar15 == 0x7fff) goto LAB_00100e4c;
      if ((int)uVar6 < 0x75) {
        if ((int)uVar6 < 0x40) {
          uVar14 = uVar13 >> ((ulong)uVar6 & 0x3f);
          uVar21 = (ulong)(uVar20 << ((ulong)(0x40 - uVar6) & 0x3f) != 0) |
                   uVar13 << ((ulong)(0x40 - uVar6) & 0x3f) | uVar20 >> ((ulong)uVar6 & 0x3f);
        }
        else {
          if (uVar6 == 0x40) {
            uVar21 = 0;
          }
          else {
            uVar21 = uVar13 << ((ulong)(0x80 - uVar6) & 0x3f);
          }
          uVar14 = 0;
          uVar21 = uVar13 >> ((ulong)(uVar6 - 0x40) & 0x3f) | (ulong)((uVar21 | uVar20) != 0);
        }
      }
      else {
        uVar14 = 0;
        uVar21 = (ulong)((uVar13 | uVar20) != 0);
      }
      uVar21 = uVar21 + uVar19;
      uVar13 = uVar14 + uVar12;
      uVar16 = uVar15;
      if (uVar21 <= uVar19 && uVar19 - uVar21 != 0) {
        uVar13 = uVar13 + 1;
      }
LAB_0010120c:
      uVar17 = uVar18;
      uVar20 = uVar21;
      if ((uVar13 >> 0x33 & 1) == 0) goto LAB_00100e04;
      if (uVar16 + 1 != 0x7fff) {
        uVar20 = uVar13 & 0xfff7ffffffffffff;
        uVar11 = 0;
        uVar13 = uVar20 >> 1;
        uVar15 = uVar16 + 1;
        uVar20 = uVar21 & 1 | uVar21 >> 1 | uVar20 << 0x3f;
        goto LAB_00100f44;
      }
      if ((uVar2 & 0xc00000) != 0) {
        if ((uVar2 & 0xc00000) != 0x400000) goto LAB_00101444;
        if (uVar18 != 0) {
          uVar13 = 0xffffffffffffffff;
          uVar15 = 0x7ffe;
          uVar11 = 0x14;
          bVar9 = false;
          uVar20 = uVar13;
          goto LAB_00100d24;
        }
      }
LAB_0010146c:
      uVar13 = 0;
      uVar20 = 0;
      uVar11 = 0x14;
    }
LAB_00100e5c:
    uVar15 = 0x7fff;
LAB_00100e60:
    uVar20 = uVar20 >> 3 | uVar13 << 0x3d;
    uVar13 = uVar13 >> 3;
  }
  else {
    uVar6 = (int)uVar15 - (int)uVar16;
    if (0 < (int)uVar6) {
      if (uVar16 != 0) {
        uVar13 = uVar13 | 0x8000000000000;
joined_r0x00100d9c:
        if (uVar15 == 0x7fff) {
LAB_00100e4c:
          if ((uVar12 | uVar19) != 0) {
            uVar11 = uVar5 >> 0x12 ^ 1;
            uVar13 = uVar12;
            uVar20 = uVar19;
            goto LAB_00100f44;
          }
          uVar13 = 0;
          uVar20 = 0;
          uVar11 = 0;
          goto LAB_00100e5c;
        }
        if ((int)uVar6 < 0x75) {
          if ((int)uVar6 < 0x40) {
            uVar21 = (ulong)(uVar20 << ((ulong)(0x40 - uVar6) & 0x3f) != 0) |
                     uVar13 << ((ulong)(0x40 - uVar6) & 0x3f) | uVar20 >> ((ulong)uVar6 & 0x3f);
            uVar14 = uVar13 >> ((ulong)uVar6 & 0x3f);
          }
          else {
            if (uVar6 == 0x40) {
              uVar21 = 0;
            }
            else {
              uVar21 = uVar13 << ((ulong)(0x80 - uVar6) & 0x3f);
            }
            uVar14 = 0;
            uVar21 = uVar13 >> ((ulong)(uVar6 - 0x40) & 0x3f) | (ulong)((uVar21 | uVar20) != 0);
          }
        }
        else {
          uVar14 = 0;
          uVar21 = (ulong)((uVar13 | uVar20) != 0);
        }
        uVar21 = uVar19 - uVar21;
        uVar13 = uVar12 - (uVar14 + (uVar19 < uVar21));
        uVar17 = uVar18;
        uVar16 = uVar15;
        goto LAB_00100c80;
      }
      if ((uVar13 | uVar20) != 0) {
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
          uVar21 = uVar19 + param_2 * -8;
          uVar13 = uVar12 - (uVar13 + (uVar19 < uVar21));
          uVar17 = uVar18;
          uVar16 = uVar15;
          goto LAB_00100c80;
        }
        goto joined_r0x00100d9c;
      }
      uVar13 = uVar12;
      uVar17 = uVar18;
      uVar16 = uVar15;
      uVar20 = uVar19;
      if (uVar15 == 0x7fff) goto LAB_00100e4c;
      goto LAB_00100e04;
    }
    if (uVar6 == 0) {
      if (1 < (uVar15 + 1 & 0x7fff)) {
        uVar21 = uVar19 + param_2 * -8;
        uVar14 = uVar12 - (uVar13 + (uVar19 < uVar21));
        if ((uVar14 >> 0x33 & 1) == 0) {
          if ((uVar21 | uVar14) == 0) goto LAB_001011d0;
        }
        else {
          uVar21 = uVar20 + param_1 * -8;
          uVar14 = uVar13 - (uVar12 + (uVar20 < uVar21));
          uVar18 = uVar17;
        }
        goto LAB_00100c88;
      }
      if (uVar15 != 0) {
        uVar11 = 0;
        uVar15 = uVar18;
        if (uVar15 == 0x7fff) {
          if ((uVar12 | uVar19) == 0) {
            if (uVar16 != 0x7fff) goto LAB_00101410;
          }
          else {
            uVar11 = uVar5 >> 0x12 ^ 1;
            if (uVar16 != 0x7fff) goto LAB_001013c8;
          }
LAB_00101668:
          if ((uVar13 | uVar20) == 0) {
            uVar13 = uVar12;
            uVar20 = uVar19;
            if ((uVar12 | uVar19) == 0) goto LAB_0010171c;
          }
          else {
            if ((uVar21 & 0x4000000000000) == 0) {
              uVar11 = 1;
            }
            uVar15 = uVar17;
            if ((uVar12 | uVar19) != 0) goto LAB_001013cc;
          }
LAB_00101688:
          uVar18 = uVar15;
          uVar15 = 0x7fff;
        }
        else {
          if (uVar16 == 0x7fff) goto LAB_00101668;
          uVar11 = 0;
          if ((uVar12 | uVar19) == 0) {
LAB_00101410:
            if ((uVar13 | uVar20) != 0) {
              uVar11 = 0;
              uVar18 = uVar17;
              uVar15 = 0x7fff;
              goto LAB_00100f44;
            }
LAB_0010171c:
            uVar13 = 0x7ffffffffffff;
            uVar20 = 0xfffffffffffffff8;
            uVar11 = 1;
            goto LAB_00100e5c;
          }
LAB_001013c8:
          uVar21 = uVar13 | uVar20;
          uVar13 = uVar12;
          uVar20 = uVar19;
          if (uVar21 == 0) goto LAB_00101688;
LAB_001013cc:
          uVar20 = in_register_00005008 & 0xffffffffffff;
          if ((uVar14 >> 0x32 != 0) && (uVar8 >> 0x32 == 0)) {
            param_1 = param_2;
            uVar20 = uVar8 >> 3;
            uVar18 = uVar17;
          }
          uVar13 = param_1 >> 0x3d | uVar20 << 3;
          uVar15 = 0x7fff;
          uVar20 = param_1 << 3;
        }
        goto LAB_00100f44;
      }
      if ((uVar12 | uVar19) != 0) {
        if ((uVar13 | uVar20) == 0) {
LAB_00101618:
          bVar9 = true;
          uVar13 = uVar12;
          uVar20 = uVar19;
          goto LAB_00100e1c;
        }
        uVar21 = uVar19 + param_2 * -8;
        uVar14 = uVar12 - (uVar13 + (uVar19 < uVar21));
        if ((uVar14 >> 0x33 & 1) == 0) {
          if ((uVar21 | uVar14) == 0) goto LAB_001011d0;
          uVar15 = 0;
          bVar9 = true;
          uVar13 = uVar14;
        }
        else {
          uVar21 = uVar20 + param_1 * -8;
          uVar15 = 0;
          uVar13 = uVar13 - (uVar12 + (uVar20 < uVar21));
          bVar9 = (uVar21 | uVar13) != 0;
          uVar18 = uVar17;
        }
        goto joined_r0x00100d14;
      }
      if ((uVar13 | uVar20) != 0) {
        bVar9 = true;
        uVar18 = uVar17;
        goto LAB_00100e1c;
      }
LAB_001011d0:
      uVar13 = 0;
      uVar20 = 0;
      uVar18 = (ulong)((uVar2 & 0xc00000) == 0x800000);
      uVar11 = 0;
      uVar15 = 0;
      bVar9 = false;
    }
    else {
      if (uVar15 == 0) {
        if ((uVar12 | uVar19) == 0) {
          if (uVar16 != 0x7fff) goto LAB_00100e04;
        }
        else {
          uVar6 = ~uVar6;
          if (uVar6 == 0) {
            uVar21 = uVar20 + param_1 * -8;
            uVar13 = uVar13 - (uVar12 + (uVar20 < uVar21));
            goto LAB_00100c80;
          }
          if (uVar16 != 0x7fff) goto LAB_00101178;
        }
LAB_001014ac:
        if ((uVar13 | uVar20) != 0) {
          uVar11 = uVar11 >> 0x12 ^ 1;
          uVar18 = uVar17;
          uVar15 = uVar16;
          goto LAB_00100f44;
        }
        goto LAB_001014b8;
      }
      if (uVar16 == 0x7fff) goto LAB_001014ac;
      uVar6 = -uVar6;
      uVar12 = uVar12 | 0x8000000000000;
LAB_00101178:
      if ((int)uVar6 < 0x75) {
        if ((int)uVar6 < 0x40) {
          uVar21 = (ulong)(uVar19 << ((ulong)(0x40 - uVar6) & 0x3f) != 0) |
                   uVar12 << ((ulong)(0x40 - uVar6) & 0x3f) | uVar19 >> ((ulong)uVar6 & 0x3f);
          uVar15 = uVar12 >> ((ulong)uVar6 & 0x3f);
        }
        else {
          if (uVar6 == 0x40) {
            uVar21 = 0;
          }
          else {
            uVar21 = uVar12 << ((ulong)(0x80 - uVar6) & 0x3f);
          }
          uVar15 = 0;
          uVar21 = uVar12 >> ((ulong)(uVar6 - 0x40) & 0x3f) | (ulong)((uVar21 | uVar19) != 0);
        }
      }
      else {
        uVar15 = 0;
        uVar21 = (ulong)((uVar12 | uVar19) != 0);
      }
      uVar21 = uVar20 - uVar21;
      uVar13 = uVar13 - (uVar15 + (uVar20 < uVar21));
LAB_00100c80:
      uVar14 = uVar13 & 0x7ffffffffffff;
      uVar18 = uVar17;
      uVar15 = uVar16;
      uVar20 = uVar21;
      if ((uVar13 >> 0x33 & 1) == 0) {
LAB_00100e04:
        uVar18 = uVar17;
        if (uVar16 != 0) {
          uVar11 = 0;
          uVar15 = uVar16;
          goto LAB_00100f44;
        }
        uVar15 = uVar20 & 7;
        bVar9 = (uVar20 | uVar13) != 0;
        uVar21 = uVar20;
      }
      else {
LAB_00100c88:
        uVar20 = uVar21 | uVar21 >> 1;
        uVar20 = uVar20 | uVar20 >> 2;
        uVar20 = uVar20 | uVar20 >> 4;
        uVar20 = uVar20 | uVar20 >> 8;
        uVar20 = uVar20 | uVar20 >> 0x10;
        uVar20 = uVar20 | uVar20 >> 0x20;
        uVar20 = ((uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar20 & 0x5555555555555555);
        uVar20 = ((uVar20 & 0xcccccccccccccccc) >> 2) + (uVar20 & 0x3333333333333333);
        uVar20 = ((uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar20 & 0xf0f0f0f0f0f0f0f);
        uVar20 = ((uVar20 & 0xff00ff00ff00ff00) >> 8) + (uVar20 & 0xff00ff00ff00ff);
        lVar3 = ((uVar20 & 0xffff0000ffff0000) >> 0x10) + (uVar20 & 0xffff0000ffff);
        uVar20 = uVar14 | uVar14 >> 1;
        uVar20 = uVar20 | uVar20 >> 2;
        uVar20 = uVar20 | uVar20 >> 4;
        uVar20 = uVar20 | uVar20 >> 8;
        uVar20 = uVar20 | uVar20 >> 0x10;
        uVar20 = uVar20 | uVar20 >> 0x20;
        uVar20 = ((uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar20 & 0x5555555555555555);
        uVar20 = ((uVar20 & 0xcccccccccccccccc) >> 2) + (uVar20 & 0x3333333333333333);
        uVar20 = ((uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar20 & 0xf0f0f0f0f0f0f0f);
        uVar20 = ((uVar20 & 0xff00ff00ff00ff00) >> 8) + (uVar20 & 0xff00ff00ff00ff);
        lVar4 = ((uVar20 & 0xffff0000ffff0000) >> 0x10) + (uVar20 & 0xffff0000ffff);
        iVar7 = 0x80 - ((int)((ulong)lVar3 >> 0x20) + (int)lVar3);
        if (uVar14 != 0) {
          iVar7 = 0x40 - ((int)((ulong)lVar4 >> 0x20) + (int)lVar4);
        }
        uVar5 = iVar7 - 0xc;
        if ((int)uVar5 < 0x40) {
          uVar20 = uVar21 << ((ulong)uVar5 & 0x3f);
          uVar21 = uVar21 >> ((ulong)(0x40 - uVar5) & 0x3f) | uVar14 << ((ulong)uVar5 & 0x3f);
        }
        else {
          uVar21 = uVar21 << ((ulong)(iVar7 - 0x4c) & 0x3f);
          uVar20 = 0;
        }
        if ((long)(int)uVar5 < (long)uVar15) {
          uVar13 = uVar21 & 0xfff7ffffffffffff;
          uVar17 = uVar18;
          uVar16 = uVar15 - (long)(int)uVar5;
          goto LAB_00100e04;
        }
        iVar7 = uVar5 - (int)uVar15;
        uVar5 = iVar7 + 1;
        if ((int)uVar5 < 0x40) {
          uVar13 = uVar21 >> ((ulong)uVar5 & 0x3f);
          uVar12 = uVar21 << ((ulong)(0x40 - uVar5) & 0x3f) | uVar20 >> ((ulong)uVar5 & 0x3f);
          uVar15 = (ulong)(uVar20 << ((ulong)(0x40 - uVar5) & 0x3f) != 0);
          uVar21 = uVar12 | uVar15;
          uVar15 = uVar12 & 7 | uVar15;
          bVar9 = (uVar21 | uVar13) != 0;
        }
        else {
          uVar12 = uVar21 >> ((ulong)(iVar7 - 0x3f) & 0x3f);
          if (uVar5 == 0x40) {
            uVar21 = 0;
          }
          else {
            uVar21 = uVar21 << ((ulong)(0x80 - uVar5) & 0x3f);
          }
          uVar15 = (ulong)((uVar20 | uVar21) != 0);
          uVar21 = uVar12 | uVar15;
          bVar9 = uVar21 != 0;
          uVar15 = uVar12 & 7 | uVar15;
          uVar13 = 0;
        }
      }
joined_r0x00100d14:
      uVar20 = uVar21;
      if (uVar15 != 0) {
        uVar15 = 0;
        uVar11 = 0;
LAB_00100d24:
        uVar12 = uVar2 & 0xc00000;
        uVar11 = uVar11 | 0x10;
        if (uVar12 == 0x400000) goto LAB_0010102c;
        if (uVar12 == 0x800000) goto LAB_0010104c;
        if (uVar12 == 0) goto LAB_00100f6c;
joined_r0x00100d3c:
        if (!bVar9) goto LAB_00100f8c;
        uVar12 = uVar13 & 0x8000000000000;
        uVar11 = uVar11 | 8;
        goto LAB_00100d4c;
      }
LAB_00100e1c:
      uVar15 = 0;
      uVar11 = 0;
    }
LAB_00100e24:
    uVar12 = uVar13 & 0x8000000000000;
    if ((bVar9) && (((uint)uVar2 >> 0xb & 1) != 0)) {
      uVar11 = uVar11 | 8;
    }
LAB_00100d4c:
    if (uVar12 == 0) goto LAB_00100e60;
    if (uVar15 != 0x7ffe) {
      uVar20 = uVar20 >> 3 | uVar13 << 0x3d;
      goto joined_r0x00100ea4;
    }
    uVar2 = uVar2 & 0xc00000;
    uVar15 = 0x7fff;
    if (uVar2 == 0) {
      uVar13 = 0;
      uVar20 = 0;
    }
    else if (uVar2 == 0x400000) {
      bVar9 = uVar18 == 0;
      uVar13 = 0x1fffffffffffffff;
      if (bVar9) {
        uVar13 = 0;
      }
      uVar20 = -(ulong)!bVar9;
      if (!bVar9) {
        uVar15 = 0x7ffe;
      }
    }
    else {
      bVar10 = uVar2 != 0x800000;
      bVar9 = uVar18 == 0;
      uVar13 = 0x1fffffffffffffff;
      if (!bVar10 && !bVar9) {
        uVar13 = 0;
      }
      uVar20 = -(ulong)(bVar10 || bVar9);
      if (bVar10 || bVar9) {
        uVar15 = 0x7ffe;
      }
    }
    uVar11 = uVar11 | 0x14;
  }
  if ((uVar15 == 0x7fff) && ((uVar20 | uVar13) == 0)) {
    uVar20 = 0;
  }
joined_r0x00100ea4:
  if (uVar11 == 0) {
    return uVar20;
  }
  __sfp_handle_exceptions();
  return uVar20;
}



undefined8 __extendsftf2(uint param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = fpcr;
  uVar2 = param_1 >> 0x17 & 0xff;
  if ((((uVar2 + 1 & 0xff) < 2) && (uVar2 != 0)) && ((param_1 & 0x7fffff) != 0)) {
    if ((param_1 & 0x7fffff) >> 0x16 == 0) {
      __sfp_handle_exceptions(1);
      return 0;
    }
    return 0;
  }
  return 0;
}



ulong __extenddftf2(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  
  uVar2 = fpcr;
  uVar4 = param_1 >> 0x34 & 0x7ff;
  param_1 = param_1 & 0xfffffffffffff;
  if ((uVar4 + 1 & 0x7ff) < 2) {
    if (uVar4 == 0) {
      if (param_1 != 0) {
        uVar4 = param_1 | param_1 >> 1;
        uVar4 = uVar4 | uVar4 >> 2;
        uVar4 = uVar4 | uVar4 >> 4;
        uVar4 = uVar4 | uVar4 >> 8;
        uVar4 = uVar4 | uVar4 >> 0x10;
        uVar4 = uVar4 | uVar4 >> 0x20;
        uVar4 = ((uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar4 & 0x5555555555555555);
        uVar4 = ((uVar4 & 0xcccccccccccccccc) >> 2) + (uVar4 & 0x3333333333333333);
        uVar4 = ((uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar4 & 0xf0f0f0f0f0f0f0f);
        uVar4 = ((uVar4 & 0xff00ff00ff00ff00) >> 8) + (uVar4 & 0xff00ff00ff00ff);
        lVar1 = ((uVar4 & 0xffff0000ffff0000) >> 0x10) + (uVar4 & 0xffff0000ffff);
        iVar3 = -((int)((ulong)lVar1 >> 0x20) + (int)lVar1);
        if (iVar3 + 0x40 < 0xf) {
          param_1 = param_1 << ((ulong)(iVar3 + 0x71) & 0x3f);
        }
        else {
          param_1 = 0;
        }
      }
    }
    else if (param_1 != 0) {
      if (param_1 >> 0x33 != 0) {
        return param_1 << 0x3c;
      }
      __sfp_handle_exceptions(1);
      return param_1 << 0x3c;
    }
  }
  else {
    param_1 = param_1 << 0x3c;
  }
  return param_1;
}



uint __trunctfsf2(ulong param_1)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  ulong in_register_00005008;
  
  uVar1 = fpcr;
  uVar7 = in_register_00005008 >> 0x30 & 0x7fff;
  uVar6 = (in_register_00005008 & 0xffffffffffff) << 3;
  uVar5 = uVar6 | param_1 >> 0x3d;
  param_1 = param_1 << 3;
  iVar2 = (int)((long)in_register_00005008 >> 0x3f);
  uVar11 = -iVar2;
  if ((uVar7 + 1 & 0x7fff) < 2) {
    if (uVar7 == 0) {
      if ((uVar5 | param_1) != 0) {
        uVar3 = 0x10;
        bVar9 = true;
        uVar6 = 1;
        lVar8 = 0;
LAB_00101b0c:
        uVar5 = uVar1 & 0xc00000;
        if (uVar5 == 0x400000) {
          uVar5 = uVar6 + 8;
          if (uVar11 != 0) {
            uVar5 = uVar6;
          }
joined_r0x00101d0c:
          uVar6 = uVar5;
          if (!bVar9) goto LAB_00101b24;
LAB_00101c08:
          uVar3 = uVar3 | 8;
          uVar10 = (uint)uVar6;
        }
        else {
          if (uVar5 == 0x800000) {
            uVar7 = uVar6 + 8;
            if (uVar11 == 0) {
              uVar7 = uVar6;
            }
          }
          else {
            uVar7 = uVar6;
            if (uVar5 == 0) {
              if ((uVar6 & 0xf) == 4) {
                if (bVar9) goto LAB_00101c08;
                goto LAB_00101c0c;
              }
              uVar5 = uVar6 + 4;
              goto joined_r0x00101d0c;
            }
          }
          uVar6 = uVar7;
          if (bVar9) goto LAB_00101c08;
LAB_00101b24:
          uVar10 = (uint)uVar6;
        }
        if ((uVar10 >> 0x1a & 1) == 0) goto LAB_00101c0c;
        if (lVar8 + 1 != 0xff) {
          uVar11 = (uint)(uVar6 >> 3) & 0x7fffff | ((uint)(lVar8 + 1) & 0xff) << 0x17 |
                   iVar2 * -0x80000000;
          goto joined_r0x00101b58;
        }
        uVar1 = uVar1 & 0xc00000;
        uVar4 = 0;
        uVar10 = 0xff;
        if (uVar1 != 0) {
          uVar10 = 0xff;
          if (uVar1 == 0x400000) {
            if (uVar11 != 0) {
              uVar10 = 0xfe;
            }
            uVar4 = 0;
            if (uVar11 != 0) {
              uVar4 = 0xffffffff;
            }
          }
          else {
            uVar11 = uVar11 & uVar1 == 0x800000;
            if (uVar11 == 0) {
              uVar10 = 0xfe;
            }
            uVar4 = 0;
            if (uVar11 == 0) {
              uVar4 = 0xffffffff;
            }
          }
        }
        uVar3 = uVar3 | 0x14;
        goto LAB_00101ba4;
      }
      uVar10 = 0;
      uVar3 = 0;
    }
    else {
      if ((uVar5 | param_1) != 0) {
        uVar3 = (uint)(uVar6 >> 0x32) ^ 1;
        if (uVar7 != 0x7fff) {
          uVar3 = 0;
        }
        uVar6 = uVar6 >> 0x19 & 0xfffffffffffffff8 | 0x2000000;
        lVar8 = 0xff;
        goto LAB_00101af8;
      }
      uVar10 = 0xff;
      uVar3 = 0;
    }
LAB_00101ba0:
    uVar4 = 0;
  }
  else {
    lVar8 = uVar7 - 0x3f80;
    if (0xfe < lVar8) {
      uVar6 = uVar1 & 0xc00000;
      if (uVar6 != 0) {
        if (uVar6 == 0x400000) {
          if (uVar11 != 0) {
            lVar8 = 0xfe;
            uVar3 = 0x14;
            uVar6 = 0xffffffffffffffff;
            goto LAB_00101b24;
          }
        }
        else if ((uVar11 & uVar6 == 0x800000) == 0) {
          uVar3 = 0x14;
          uVar6 = 0xffffffffffffffff;
          lVar8 = 0xfe;
          bVar9 = false;
          goto LAB_00101b0c;
        }
      }
      uVar10 = 0xff;
      uVar3 = 0x14;
      goto LAB_00101ba0;
    }
    if (lVar8 < 1) {
      if ((long)(uVar7 - 0x3f69) < 0 != SCARRY8(lVar8,0x17)) {
        uVar3 = 0x10;
        bVar9 = true;
        uVar6 = 1;
        lVar8 = 0;
        goto LAB_00101b0c;
      }
      uVar7 = (uVar5 | 0x8000000000000) >> ((ulong)(0x1a - (int)lVar8) & 0x3f);
      uVar5 = (ulong)(((uVar5 | 0x8000000000000) << ((ulong)((int)lVar8 + 0x26) & 0x3f) | param_1)
                     != 0);
      uVar6 = uVar7 | uVar5;
      if ((uVar7 & 7 | uVar5) != 0) {
        bVar9 = true;
        lVar8 = 0;
        uVar3 = 0;
        goto LAB_00101b04;
      }
      lVar8 = 0;
      uVar3 = 0;
      if (((uint)uVar1 >> 0xb & 1) == 0) goto LAB_00101c0c;
      goto LAB_00101c08;
    }
    uVar3 = 0;
    uVar6 = (ulong)((param_1 | uVar5 << 0x27) != 0) | uVar6 >> 0x19;
LAB_00101af8:
    bVar9 = false;
    if ((uVar6 & 7) != 0) {
LAB_00101b04:
      uVar3 = uVar3 | 0x10;
      goto LAB_00101b0c;
    }
LAB_00101c0c:
    uVar6 = uVar6 >> 3;
    uVar10 = (uint)lVar8 & 0xff;
    uVar1 = uVar6 | 0x400000;
    if (lVar8 != 0xff || uVar6 == 0) {
      uVar1 = uVar6;
    }
    uVar4 = (uint)uVar1;
  }
LAB_00101ba4:
  uVar11 = uVar4 & 0x7fffff | uVar10 << 0x17 | iVar2 * -0x80000000;
joined_r0x00101b58:
  if (uVar3 != 0) {
    __sfp_handle_exceptions(uVar11);
    return uVar11;
  }
  return uVar11;
}



ulong __trunctfdf2(ulong param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong in_register_00005008;
  
  uVar7 = fpcr;
  uVar10 = in_register_00005008 >> 0x30 & 0x7fff;
  uVar6 = (in_register_00005008 & 0xffffffffffff) << 3;
  uVar5 = uVar6 | param_1 >> 0x3d;
  uVar12 = param_1 << 3;
  iVar2 = (int)((long)in_register_00005008 >> 0x3f);
  uVar8 = -iVar2;
  if ((uVar10 + 1 & 0x7fff) < 2) {
    if (uVar10 == 0) {
      lVar11 = 0;
      if ((uVar5 | uVar12) != 0) {
        uVar3 = 0x10;
        bVar1 = true;
        uVar6 = 1;
        lVar11 = 0;
LAB_00101e2c:
        uVar5 = uVar7 & 0xc00000;
        if (uVar5 == 0x400000) {
          uVar10 = uVar6 + 8;
          if (uVar8 != 0) {
            uVar10 = uVar6;
          }
        }
        else if (uVar5 == 0x800000) {
          uVar10 = uVar6 + 8;
          if (uVar8 == 0) {
            uVar10 = uVar6;
          }
        }
        else {
          uVar10 = uVar6;
          if ((uVar5 == 0) && (uVar10 = uVar6 + 4, (uVar6 & 0xf) == 4)) {
            uVar10 = uVar6;
          }
        }
        uVar6 = uVar10;
        if (bVar1) {
LAB_00101ed0:
          uVar3 = uVar3 | 8;
        }
        goto LAB_00101e44;
      }
    }
    else {
      if ((uVar5 | uVar12) != 0) {
        uVar3 = (uint)(uVar6 >> 0x32) ^ 1;
        if (uVar10 != 0x7fff) {
          uVar3 = 0;
        }
        uVar6 = uVar12 >> 0x3c & 0xfffffffffffffff8 | uVar5 << 4 | 0x40000000000000;
        lVar11 = 0x7ff;
        goto LAB_00101e18;
      }
      lVar11 = 0x7ff;
    }
    uVar3 = 0;
LAB_00101e90:
    uVar6 = 0;
LAB_00101e94:
    uVar6 = uVar6 >> 3;
    uVar8 = (uint)lVar11;
    uVar7 = uVar6 | 0x8000000000000;
    if (lVar11 != 0x7ff || uVar6 == 0) {
      uVar7 = uVar6;
    }
  }
  else {
    lVar11 = uVar10 - 0x3c00;
    if (0x7fe < lVar11) {
      uVar6 = uVar7 & 0xc00000;
      if (uVar6 != 0) {
        if (uVar6 == 0x400000) {
          if (uVar8 != 0) {
            lVar11 = 0x7fe;
            uVar3 = 0x14;
            uVar6 = 0xffffffffffffffff;
            goto LAB_00101e44;
          }
        }
        else if ((uVar8 & uVar6 == 0x800000) == 0) {
          uVar3 = 0x14;
          uVar6 = 0xffffffffffffffff;
          lVar11 = 0x7fe;
          bVar1 = false;
          goto LAB_00101e2c;
        }
      }
      lVar11 = 0x7ff;
      uVar3 = 0x14;
      goto LAB_00101e90;
    }
    if (0 < lVar11) {
      uVar3 = 0;
      uVar6 = (ulong)((param_1 & 0x1ffffffffffffff) != 0) | uVar12 >> 0x3c | uVar5 << 4;
LAB_00101e18:
      bVar1 = false;
      if ((uVar6 & 7) != 0) {
LAB_00101e24:
        uVar3 = uVar3 | 0x10;
        goto LAB_00101e2c;
      }
LAB_00101e44:
      if ((uVar6 & 0x80000000000000) != 0) {
        lVar11 = lVar11 + 1;
        if (lVar11 == 0x7ff) {
          uVar7 = uVar7 & 0xc00000;
          uVar6 = 0;
          uVar5 = 0x7ff;
          if (uVar7 != 0) {
            uVar8 = -iVar2;
            uVar4 = 0x7ff;
            if (uVar7 == 0x400000) {
              if (uVar8 != 0) {
                uVar4 = 0x7fe;
              }
              uVar5 = (ulong)uVar4;
              uVar6 = 0;
              if (uVar8 != 0) {
                uVar6 = 0x1fffffffffffffff;
              }
            }
            else {
              uVar8 = uVar8 & uVar7 == 0x800000;
              if (uVar8 == 0) {
                uVar4 = 0x7fe;
              }
              uVar5 = (ulong)uVar4;
              uVar6 = 0;
              if (uVar8 == 0) {
                uVar6 = 0x1fffffffffffffff;
              }
            }
          }
          uVar3 = uVar3 | 0x14;
          uVar7 = uVar6 & 0xfffffffffffff | uVar5 << 0x34 |
                  in_register_00005008 & 0x8000000000000000;
          goto LAB_00101f98;
        }
        goto LAB_00101e58;
      }
      goto LAB_00101e94;
    }
    if ((long)(uVar10 - 0x3bcc) < 0 != SCARRY8(lVar11,0x34)) {
      uVar3 = 0x10;
      bVar1 = true;
      uVar6 = 1;
      lVar11 = 0;
      goto LAB_00101e2c;
    }
    uVar5 = uVar5 | 0x8000000000000;
    iVar9 = (int)lVar11;
    if (0x3d - lVar11 < 0x40) {
      uVar6 = uVar12 >> ((ulong)(0x3d - iVar9) & 0x3f) | uVar5 << ((ulong)(iVar9 + 3) & 0x3f) |
              (ulong)(uVar12 << ((ulong)(iVar9 + 3) & 0x3f) != 0);
    }
    else {
      if (0x3d - lVar11 == 0x40) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar5 << ((ulong)(iVar9 + 0x43) & 0x3f);
      }
      uVar6 = uVar5 >> ((ulong)(-iVar9 - 3) & 0x3f) | (ulong)((uVar6 | uVar12) != 0);
    }
    bVar1 = uVar6 != 0;
    if ((uVar6 & 7) != 0) {
      lVar11 = 0;
      uVar3 = 0;
      goto LAB_00101e24;
    }
    if (!bVar1) {
      lVar11 = 0;
      uVar3 = 0;
      goto LAB_00101e44;
    }
    if (((uint)uVar7 >> 0xb & 1) != 0) {
      lVar11 = 0;
      uVar3 = 0;
      goto LAB_00101ed0;
    }
    if ((uVar6 >> 0x37 & 1) == 0) {
      lVar11 = 0;
      uVar3 = 0;
      goto LAB_00101e94;
    }
    lVar11 = 1;
    uVar3 = 0;
LAB_00101e58:
    uVar8 = (uint)lVar11;
    uVar7 = uVar6 >> 3 & 0x1fefffffffffffff;
  }
  uVar7 = uVar7 & 0xfffffffffffff | (ulong)(uVar8 & 0x7ff) << 0x34 |
          in_register_00005008 & 0x8000000000000000;
  if (uVar3 == 0) {
    return uVar7;
  }
LAB_00101f98:
  __sfp_handle_exceptions(uVar3);
  return uVar7;
}



undefined  [16] __sfp_handle_exceptions(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined auVar2 [16];
  
  uVar1 = (uint)param_1;
  if ((param_1 & 1) != 0) {
    param_2 = fpsr;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = fpsr;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_2 = fpsr;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_2 = fpsr;
  }
  if ((uVar1 >> 4 & 1) != 0) {
    param_1 = fpsr;
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
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


