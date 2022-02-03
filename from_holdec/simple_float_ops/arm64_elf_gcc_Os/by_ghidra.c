typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
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
typedef ulong sizetype;

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef long __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    undefined field1_0x4;
    undefined field2_0x5;
    undefined field3_0x6;
    undefined field4_0x7;
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
    undefined field24_0x84;
    undefined field25_0x85;
    undefined field26_0x86;
    undefined field27_0x87;
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
    undefined field3_0x14;
    undefined field4_0x15;
    undefined field5_0x16;
    undefined field6_0x17;
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



// WARNING: Unknown calling convention yet parameter storage is locked

void abort(void)

{
                    // WARNING: Subroutine does not return
  abort();
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
  printf("%zu %zu %zu %zu %zu\n",1,2,4,8);
  printf("%zu %zu %zu\n",4,8,0x10);
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



// WARNING: Removing unreachable block (ram,0x00100784)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x001007a8)
// WARNING: Removing unreachable block (ram,0x001007b4)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x001007e4)
// WARNING: Removing unreachable block (ram,0x001007f0)

void register_tm_clones(void)

{
  return;
}



void FUN_001007fc(void)

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



void use(double x)

{
  printf("%f");
  return;
}



void use_int(int x)

{
  printf("%d",(ulong)(uint)x);
  return;
}



int read_ints(void)

{
  use((double)global_long_long +
      (double)global_long +
      (double)global_int + (double)(int)global_short + (double)(int)global_char + 0.0);
  return 0x78;
}



int write_ints(double pi)

{
  global_int = (int)pi;
  global_char = (char)global_int;
  global_short = (short)global_int;
  global_long = (long)pi;
  global_long_long = (long)pi;
  return 0x79;
}



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



void write_floats(double pi)

{
  undefined8 in_register_00005008;
  
  global_float = (float)pi;
  global_double = pi;
  global_long_double._0_8_ = __extenddftf2();
  global_long_double._8_8_ = in_register_00005008;
  return;
}



void converting_between_floats_f1(void)

{
  global_float = (float)global_double;
  return;
}



void converting_between_floats_f2(void)

{
  global_float = (float)__trunctfsf2(global_long_double._0_8_);
  return;
}



void converting_between_floats_d1(void)

{
  global_double = (double)global_float;
  return;
}



void converting_between_floats_d2(void)

{
  global_double = (double)__trunctfdf2(global_long_double._0_8_);
  return;
}



void converting_between_floats_l1(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  global_long_double._0_8_ = __extendsftf2(global_float);
  global_long_double._8_8_ = uVar1;
  return;
}



void converting_between_floats_l2(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  global_long_double._0_8_ = __extenddftf2(global_double);
  global_long_double._8_8_ = uVar1;
  return;
}



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



int constants(double x)

{
  use(x + x);
  use(x * 3.0);
  use(x * 3.141592653589793);
  use(x * 10.0);
  use(x * 12.345);
  return 0x7d;
}



ulong __addtf3(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong in_register_00005008;
  ulong in_register_00005028;
  
  uVar2 = cRead_8(fpcr);
  uVar16 = in_register_00005008 >> 0x30 & 0x7fff;
  uVar15 = (in_register_00005008 & 0xffffffffffff) << 3;
  uVar19 = -((long)in_register_00005008 >> 0x3f);
  uVar18 = in_register_00005028 >> 0x3f;
  uVar17 = in_register_00005028 >> 0x30 & 0x7fff;
  uVar22 = in_register_00005028 << 3;
  uVar7 = uVar22 & 0x7fffffffffff8;
  uVar12 = uVar15 | param_1 >> 0x3d;
  uVar20 = param_1 * 8;
  uVar21 = param_2 * 8;
  uVar13 = uVar7 | param_2 >> 0x3d;
  uVar5 = (uint)(uVar15 >> 0x20);
  uVar8 = (uint)(uVar7 >> 0x20);
  if (uVar19 == uVar18) {
    uVar11 = (int)uVar16 - (int)uVar17;
    if ((int)uVar11 < 1) {
      if (uVar11 != 0) {
        if (uVar16 == 0) {
          if ((uVar12 | uVar20) == 0) {
            uVar18 = uVar19;
            if (uVar17 != 0x7fff) goto LAB_00100dd4;
          }
          else {
            uVar11 = ~uVar11;
            if (uVar11 == 0) {
              uVar22 = uVar20 + uVar21;
              uVar13 = uVar12 + uVar13;
              if (uVar22 <= uVar21 && uVar21 - uVar22 != 0) {
                uVar13 = uVar13 + 1;
              }
              goto LAB_001011dc;
            }
            if (uVar17 != 0x7fff) goto LAB_001014f4;
          }
        }
        else if (uVar17 != 0x7fff) {
          uVar11 = -uVar11;
          uVar12 = uVar12 | 0x8000000000000;
LAB_001014f4:
          if ((int)uVar11 < 0x75) {
            if ((int)uVar11 < 0x40) {
              uVar16 = uVar12 >> ((ulong)uVar11 & 0x3f);
              uVar22 = (ulong)(uVar20 << ((ulong)(0x40 - uVar11) & 0x3f) != 0) |
                       uVar12 << ((ulong)(0x40 - uVar11) & 0x3f) | uVar20 >> ((ulong)uVar11 & 0x3f);
            }
            else {
              if (uVar11 == 0x40) {
                uVar22 = 0;
              }
              else {
                uVar22 = uVar12 << ((ulong)(0x80 - uVar11) & 0x3f);
              }
              uVar16 = 0;
              uVar22 = uVar12 >> ((ulong)(uVar11 - 0x40) & 0x3f) | (ulong)((uVar22 | uVar20) != 0);
            }
          }
          else {
            uVar16 = 0;
            uVar22 = (ulong)((uVar12 | uVar20) != 0);
          }
          uVar22 = uVar22 + uVar21;
          uVar13 = uVar16 + uVar13;
          if (uVar22 <= uVar21 && uVar21 - uVar22 != 0) {
            uVar13 = uVar13 + 1;
          }
          goto LAB_001011dc;
        }
        if ((uVar13 | uVar21) != 0) {
          uVar11 = uVar8 >> 0x12 ^ 1;
          uVar16 = uVar17;
          goto LAB_00100f14;
        }
LAB_00101488:
        uVar21 = uVar13 | uVar21;
        uVar13 = 0;
        uVar22 = 0;
        goto LAB_00100e2c;
      }
      uVar1 = uVar16 + 1;
      if (1 < (uVar1 & 0x7fff)) {
        if (uVar1 != 0x7fff) {
          uVar21 = uVar20 + uVar21;
          uVar12 = uVar12 + uVar13;
          if (uVar21 <= uVar20 && uVar20 - uVar21 != 0) {
            uVar12 = uVar12 + 1;
          }
          uVar13 = uVar12 >> 1;
          uVar16 = uVar1;
          uVar21 = uVar21 >> 1 | uVar12 << 0x3f;
          goto LAB_00100f14;
        }
        if ((uVar2 & 0xc00000) == 0) goto LAB_0010143c;
        if ((uVar2 & 0xc00000) == 0x400000) {
          if (uVar19 == 0) goto LAB_0010143c;
          uVar13 = 0xffffffffffffffff;
          uVar14 = 0;
          uVar21 = 0xffffffffffffffff;
          uVar16 = 0x7ffe;
          uVar11 = 0x14;
          goto LAB_00100cf4;
        }
LAB_00101414:
        if (((uint)(in_register_00005008 >> 0x3f) & (uint)((uVar2 & 0xc00000) == 0x800000)) != 0) {
          uVar13 = 0;
          uVar21 = 0;
          uVar22 = 0x14;
          goto LAB_00100e2c;
        }
        uVar13 = 0xffffffffffffffff;
        uVar11 = 0x14;
        uVar16 = 0x7ffe;
        uVar21 = uVar13;
LAB_00100f24:
        uVar12 = uVar2 & 0xc00000;
        if (uVar12 == 0x400000) {
          uVar14 = 0;
LAB_00100ffc:
          if (uVar19 != 0) goto joined_r0x00100d0c;
        }
        else {
          if (uVar12 != 0x800000) {
            if (uVar12 == 0) {
              uVar14 = 0;
LAB_00100f3c:
              if (((uVar21 & 0xf) != 4) &&
                 (uVar12 = uVar21 + 4, bVar10 = uVar12 < uVar21, uVar21 = uVar12, bVar10)) {
                uVar13 = uVar13 + 1;
              }
              goto joined_r0x00100d0c;
            }
            goto LAB_00100f5c;
          }
          uVar14 = 0;
LAB_0010101c:
          if (uVar19 == 0) goto joined_r0x00100d0c;
        }
        uVar12 = uVar21 + 8;
        bVar10 = uVar12 < uVar21;
        uVar21 = uVar12;
        if (bVar10) {
          uVar13 = uVar13 + 1;
        }
        goto joined_r0x00100d0c;
      }
      if (uVar16 == 0) {
        if ((uVar12 | uVar20) == 0) {
          uVar14 = (uint)((uVar13 | uVar21) != 0);
          goto LAB_00100dec;
        }
        if ((uVar13 | uVar21) == 0) goto LAB_001015e8;
        uVar22 = uVar20 + uVar21;
        uVar13 = uVar12 + uVar13;
        if (uVar22 <= uVar20 && uVar20 - uVar22 != 0) {
          uVar13 = uVar13 + 1;
        }
        if ((uVar13 >> 0x33 & 1) == 0) {
          uVar16 = 0;
          uVar14 = (uint)((uVar22 | uVar13) != 0);
          goto joined_r0x00100ce4;
        }
        uVar13 = uVar13 & 0xfff7ffffffffffff;
        uVar16 = 1;
        uVar21 = uVar22;
        goto LAB_00100f14;
      }
      if (uVar16 == 0x7fff) {
        if ((uVar12 | uVar20) == 0) {
          if (uVar17 == 0x7fff) goto LAB_001015ac;
          goto LAB_00100f14;
        }
        uVar11 = uVar5 >> 0x12 ^ 1;
        if (uVar17 == 0x7fff) goto LAB_001015b0;
LAB_00101760:
        uVar22 = uVar13 | uVar21;
        uVar13 = uVar12;
        uVar16 = 0x7fff;
        uVar21 = uVar20;
        if (uVar22 == 0) goto LAB_00100f14;
      }
      else {
        if (uVar17 != 0x7fff) {
LAB_00101598:
          if ((uVar12 | uVar20) == 0) {
            uVar16 = 0x7fff;
            goto LAB_00100f14;
          }
          goto LAB_00101760;
        }
LAB_001015ac:
        uVar11 = 0;
LAB_001015b0:
        if ((uVar13 | uVar21) == 0) goto LAB_00101598;
        if ((uVar22 & 0x4000000000000) == 0) {
          uVar11 = 1;
        }
        if ((uVar12 | uVar20) == 0) {
          uVar14 = 0;
          uVar16 = 0x7fff;
          goto LAB_00100df4;
        }
      }
      uVar16 = in_register_00005008 & 0xffffffffffff;
      if ((uVar15 >> 0x32 != 0) && (uVar7 >> 0x32 == 0)) {
        uVar16 = uVar7 >> 3;
        uVar19 = uVar18;
        param_1 = param_2;
      }
      uVar13 = param_1 >> 0x3d | uVar16 << 3;
      uVar21 = param_1 << 3;
      uVar16 = 0x7fff;
LAB_00100f14:
      if ((uVar21 & 7) != 0) {
        uVar11 = uVar11 | 0x10;
        goto LAB_00100f24;
      }
LAB_00100f5c:
      uVar12 = uVar13 & 0x8000000000000;
      goto LAB_00100d1c;
    }
    if (uVar17 == 0) {
      if ((uVar13 | uVar21) != 0) {
        uVar11 = uVar11 - 1;
        if (uVar11 != 0) goto joined_r0x00100ecc;
        uVar22 = uVar20 + uVar21;
        uVar13 = uVar12 + uVar13;
        uVar17 = uVar16;
        if (uVar22 <= uVar20 && uVar20 - uVar22 != 0) {
          uVar13 = uVar13 + 1;
        }
        goto LAB_001011dc;
      }
      uVar13 = uVar12;
      uVar18 = uVar19;
      uVar17 = uVar16;
      uVar21 = uVar20;
      if (uVar16 != 0x7fff) goto LAB_00100dd4;
      if ((uVar12 | uVar20) != 0) {
        uVar11 = uVar5 >> 0x12 ^ 1;
        goto LAB_00100f14;
      }
      uVar13 = 0;
      uVar21 = 0;
      uVar22 = 0;
    }
    else {
      uVar13 = uVar13 | 0x8000000000000;
joined_r0x00100ecc:
      if (uVar16 == 0x7fff) goto LAB_00100e1c;
      if ((int)uVar11 < 0x75) {
        if ((int)uVar11 < 0x40) {
          uVar15 = uVar13 >> ((ulong)uVar11 & 0x3f);
          uVar22 = (ulong)(uVar21 << ((ulong)(0x40 - uVar11) & 0x3f) != 0) |
                   uVar13 << ((ulong)(0x40 - uVar11) & 0x3f) | uVar21 >> ((ulong)uVar11 & 0x3f);
        }
        else {
          if (uVar11 == 0x40) {
            uVar22 = 0;
          }
          else {
            uVar22 = uVar13 << ((ulong)(0x80 - uVar11) & 0x3f);
          }
          uVar15 = 0;
          uVar22 = uVar13 >> ((ulong)(uVar11 - 0x40) & 0x3f) | (ulong)((uVar22 | uVar21) != 0);
        }
      }
      else {
        uVar15 = 0;
        uVar22 = (ulong)((uVar13 | uVar21) != 0);
      }
      uVar22 = uVar22 + uVar20;
      uVar13 = uVar15 + uVar12;
      uVar17 = uVar16;
      if (uVar22 <= uVar20 && uVar20 - uVar22 != 0) {
        uVar13 = uVar13 + 1;
      }
LAB_001011dc:
      uVar18 = uVar19;
      uVar21 = uVar22;
      if ((uVar13 >> 0x33 & 1) == 0) goto LAB_00100dd4;
      if (uVar17 + 1 != 0x7fff) {
        uVar21 = uVar13 & 0xfff7ffffffffffff;
        uVar11 = 0;
        uVar13 = uVar21 >> 1;
        uVar16 = uVar17 + 1;
        uVar21 = uVar22 & 1 | uVar22 >> 1 | uVar21 << 0x3f;
        goto LAB_00100f14;
      }
      if ((uVar2 & 0xc00000) != 0) {
        if ((uVar2 & 0xc00000) != 0x400000) goto LAB_00101414;
        if (uVar19 != 0) {
          uVar13 = 0xffffffffffffffff;
          uVar16 = 0x7ffe;
          uVar11 = 0x14;
          uVar14 = 0;
          uVar21 = uVar13;
          goto LAB_00100cf4;
        }
      }
LAB_0010143c:
      uVar13 = 0;
      uVar21 = 0;
      uVar22 = 0x14;
    }
LAB_00100e2c:
    uVar11 = (uint)uVar22;
    uVar16 = 0x7fff;
LAB_00100e30:
    uVar21 = uVar21 >> 3 | uVar13 << 0x3d;
    uVar13 = uVar13 >> 3;
  }
  else {
    uVar14 = (int)uVar16 - (int)uVar17;
    if (0 < (int)uVar14) {
      if (uVar17 != 0) {
        uVar13 = uVar13 | 0x8000000000000;
joined_r0x00100d6c:
        if (uVar16 == 0x7fff) {
LAB_00100e1c:
          uVar22 = uVar12 | uVar20;
          if (uVar22 != 0) {
            uVar11 = uVar5 >> 0x12 ^ 1;
            uVar13 = uVar12;
            uVar21 = uVar20;
            goto LAB_00100f14;
          }
          uVar13 = 0;
          uVar21 = 0;
          goto LAB_00100e2c;
        }
        if ((int)uVar14 < 0x75) {
          if ((int)uVar14 < 0x40) {
            uVar22 = (ulong)(uVar21 << ((ulong)(0x40 - uVar14) & 0x3f) != 0) |
                     uVar13 << ((ulong)(0x40 - uVar14) & 0x3f) | uVar21 >> ((ulong)uVar14 & 0x3f);
            uVar15 = uVar13 >> ((ulong)uVar14 & 0x3f);
          }
          else {
            if (uVar14 == 0x40) {
              uVar22 = 0;
            }
            else {
              uVar22 = uVar13 << ((ulong)(0x80 - uVar14) & 0x3f);
            }
            uVar15 = 0;
            uVar22 = uVar13 >> ((ulong)(uVar14 - 0x40) & 0x3f) | (ulong)((uVar22 | uVar21) != 0);
          }
        }
        else {
          uVar15 = 0;
          uVar22 = (ulong)((uVar13 | uVar21) != 0);
        }
        uVar22 = uVar20 - uVar22;
        uVar13 = uVar12 - (uVar15 + (uVar20 < uVar22));
        uVar18 = uVar19;
        uVar17 = uVar16;
        goto LAB_00100c50;
      }
      if ((uVar13 | uVar21) != 0) {
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) {
          uVar22 = uVar20 + param_2 * -8;
          uVar13 = uVar12 - (uVar13 + (uVar20 < uVar22));
          uVar18 = uVar19;
          uVar17 = uVar16;
          goto LAB_00100c50;
        }
        goto joined_r0x00100d6c;
      }
      uVar13 = uVar12;
      uVar18 = uVar19;
      uVar17 = uVar16;
      uVar21 = uVar20;
      if (uVar16 == 0x7fff) goto LAB_00100e1c;
      goto LAB_00100dd4;
    }
    if (uVar14 == 0) {
      if (1 < (uVar16 + 1 & 0x7fff)) {
        uVar22 = uVar20 + param_2 * -8;
        uVar15 = uVar12 - (uVar13 + (uVar20 < uVar22));
        if ((uVar15 >> 0x33 & 1) == 0) {
          if ((uVar22 | uVar15) == 0) goto LAB_001011a0;
        }
        else {
          uVar22 = uVar21 + param_1 * -8;
          uVar15 = uVar13 - (uVar12 + (uVar21 < uVar22));
          uVar19 = uVar18;
        }
        goto LAB_00100c58;
      }
      if (uVar16 != 0) {
        uVar16 = uVar19;
        uVar11 = uVar14;
        if (uVar16 == 0x7fff) {
          if ((uVar12 | uVar20) == 0) {
            if (uVar17 != 0x7fff) goto LAB_001013e0;
          }
          else {
            uVar11 = uVar5 >> 0x12 ^ 1;
            if (uVar17 != 0x7fff) goto LAB_00101398;
          }
LAB_00101638:
          if ((uVar13 | uVar21) == 0) {
            uVar13 = uVar12;
            uVar21 = uVar20;
            if ((uVar12 | uVar20) == 0) goto LAB_001016ec;
          }
          else {
            if ((uVar22 & 0x4000000000000) == 0) {
              uVar11 = 1;
            }
            uVar16 = uVar18;
            if ((uVar12 | uVar20) != 0) goto LAB_0010139c;
          }
LAB_00101658:
          uVar19 = uVar16;
          uVar16 = 0x7fff;
        }
        else {
          if (uVar17 == 0x7fff) goto LAB_00101638;
          if ((uVar12 | uVar20) == 0) {
LAB_001013e0:
            if ((uVar13 | uVar21) != 0) {
              uVar11 = 0;
              uVar19 = uVar18;
              uVar16 = 0x7fff;
              goto LAB_00100f14;
            }
LAB_001016ec:
            uVar13 = 0x7ffffffffffff;
            uVar21 = 0xfffffffffffffff8;
            uVar22 = 1;
            goto LAB_00100e2c;
          }
LAB_00101398:
          uVar22 = uVar13 | uVar21;
          uVar13 = uVar12;
          uVar21 = uVar20;
          if (uVar22 == 0) goto LAB_00101658;
LAB_0010139c:
          uVar16 = in_register_00005008 & 0xffffffffffff;
          if ((uVar15 >> 0x32 != 0) && (uVar7 >> 0x32 == 0)) {
            param_1 = param_2;
            uVar16 = uVar7 >> 3;
            uVar19 = uVar18;
          }
          uVar13 = param_1 >> 0x3d | uVar16 << 3;
          uVar16 = 0x7fff;
          uVar21 = param_1 << 3;
        }
        goto LAB_00100f14;
      }
      if ((uVar12 | uVar20) != 0) {
        if ((uVar13 | uVar21) == 0) {
LAB_001015e8:
          uVar14 = 1;
          uVar13 = uVar12;
          uVar21 = uVar20;
          goto LAB_00100dec;
        }
        uVar22 = uVar20 + param_2 * -8;
        uVar15 = uVar12 - (uVar13 + (uVar20 < uVar22));
        if ((uVar15 >> 0x33 & 1) == 0) {
          if ((uVar22 | uVar15) == 0) goto LAB_001011a0;
          uVar16 = 0;
          uVar14 = 1;
          uVar13 = uVar15;
        }
        else {
          uVar22 = uVar21 + param_1 * -8;
          uVar16 = 0;
          uVar13 = uVar13 - (uVar12 + (uVar21 < uVar22));
          uVar14 = (uint)((uVar22 | uVar13) != 0);
          uVar19 = uVar18;
        }
        goto joined_r0x00100ce4;
      }
      if ((uVar13 | uVar21) != 0) {
        uVar14 = 1;
        uVar19 = uVar18;
        goto LAB_00100dec;
      }
LAB_001011a0:
      uVar13 = 0;
      uVar21 = 0;
      uVar19 = (ulong)((uVar2 & 0xc00000) == 0x800000);
      uVar11 = 0;
      uVar16 = 0;
    }
    else {
      if (uVar16 == 0) {
        if ((uVar12 | uVar20) == 0) {
          if (uVar17 != 0x7fff) goto LAB_00100dd4;
        }
        else {
          uVar14 = ~uVar14;
          if (uVar14 == 0) {
            uVar22 = uVar21 + param_1 * -8;
            uVar13 = uVar13 - (uVar12 + (uVar21 < uVar22));
            goto LAB_00100c50;
          }
          if (uVar17 != 0x7fff) goto LAB_00101148;
        }
LAB_0010147c:
        if ((uVar13 | uVar21) != 0) {
          uVar11 = uVar8 >> 0x12 ^ 1;
          uVar19 = uVar18;
          uVar16 = uVar17;
          goto LAB_00100f14;
        }
        goto LAB_00101488;
      }
      if (uVar17 == 0x7fff) goto LAB_0010147c;
      uVar14 = -uVar14;
      uVar12 = uVar12 | 0x8000000000000;
LAB_00101148:
      if ((int)uVar14 < 0x75) {
        if ((int)uVar14 < 0x40) {
          uVar22 = (ulong)(uVar20 << ((ulong)(0x40 - uVar14) & 0x3f) != 0) |
                   uVar12 << ((ulong)(0x40 - uVar14) & 0x3f) | uVar20 >> ((ulong)uVar14 & 0x3f);
          uVar16 = uVar12 >> ((ulong)uVar14 & 0x3f);
        }
        else {
          if (uVar14 == 0x40) {
            uVar22 = 0;
          }
          else {
            uVar22 = uVar12 << ((ulong)(0x80 - uVar14) & 0x3f);
          }
          uVar16 = 0;
          uVar22 = uVar12 >> ((ulong)(uVar14 - 0x40) & 0x3f) | (ulong)((uVar22 | uVar20) != 0);
        }
      }
      else {
        uVar16 = 0;
        uVar22 = (ulong)((uVar12 | uVar20) != 0);
      }
      uVar22 = uVar21 - uVar22;
      uVar13 = uVar13 - (uVar16 + (uVar21 < uVar22));
LAB_00100c50:
      uVar15 = uVar13 & 0x7ffffffffffff;
      uVar19 = uVar18;
      uVar16 = uVar17;
      uVar21 = uVar22;
      if ((uVar13 >> 0x33 & 1) == 0) {
LAB_00100dd4:
        uVar19 = uVar18;
        if (uVar17 != 0) {
          uVar11 = 0;
          uVar16 = uVar17;
          goto LAB_00100f14;
        }
        uVar16 = uVar21 & 7;
        uVar14 = (uint)((uVar21 | uVar13) != 0);
        uVar22 = uVar21;
      }
      else {
LAB_00100c58:
        uVar21 = uVar22 | uVar22 >> 1;
        uVar21 = uVar21 | uVar21 >> 2;
        uVar21 = uVar21 | uVar21 >> 4;
        uVar21 = uVar21 | uVar21 >> 8;
        uVar21 = uVar21 | uVar21 >> 0x10;
        uVar21 = uVar21 | uVar21 >> 0x20;
        uVar21 = ((uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar21 & 0x5555555555555555);
        uVar21 = ((uVar21 & 0xcccccccccccccccc) >> 2) + (uVar21 & 0x3333333333333333);
        uVar21 = ((uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar21 & 0xf0f0f0f0f0f0f0f);
        uVar21 = ((uVar21 & 0xff00ff00ff00ff00) >> 8) + (uVar21 & 0xff00ff00ff00ff);
        lVar3 = ((uVar21 & 0xffff0000ffff0000) >> 0x10) + (uVar21 & 0xffff0000ffff);
        uVar21 = uVar15 | uVar15 >> 1;
        uVar21 = uVar21 | uVar21 >> 2;
        uVar21 = uVar21 | uVar21 >> 4;
        uVar21 = uVar21 | uVar21 >> 8;
        uVar21 = uVar21 | uVar21 >> 0x10;
        uVar21 = uVar21 | uVar21 >> 0x20;
        uVar21 = ((uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar21 & 0x5555555555555555);
        uVar21 = ((uVar21 & 0xcccccccccccccccc) >> 2) + (uVar21 & 0x3333333333333333);
        uVar21 = ((uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar21 & 0xf0f0f0f0f0f0f0f);
        uVar21 = ((uVar21 & 0xff00ff00ff00ff00) >> 8) + (uVar21 & 0xff00ff00ff00ff);
        lVar4 = ((uVar21 & 0xffff0000ffff0000) >> 0x10) + (uVar21 & 0xffff0000ffff);
        iVar6 = 0x80 - ((int)((ulong)lVar3 >> 0x20) + (int)lVar3);
        if (uVar15 != 0) {
          iVar6 = 0x40 - ((int)((ulong)lVar4 >> 0x20) + (int)lVar4);
        }
        uVar5 = iVar6 - 0xc;
        if ((int)uVar5 < 0x40) {
          uVar21 = uVar22 << ((ulong)uVar5 & 0x3f);
          uVar22 = uVar22 >> ((ulong)(0x40 - uVar5) & 0x3f) | uVar15 << ((ulong)uVar5 & 0x3f);
        }
        else {
          uVar22 = uVar22 << ((ulong)(iVar6 - 0x4c) & 0x3f);
          uVar21 = 0;
        }
        if ((long)(int)uVar5 < (long)uVar16) {
          uVar13 = uVar22 & 0xfff7ffffffffffff;
          uVar18 = uVar19;
          uVar17 = uVar16 - (long)(int)uVar5;
          goto LAB_00100dd4;
        }
        iVar6 = uVar5 - (int)uVar16;
        uVar5 = iVar6 + 1;
        if ((int)uVar5 < 0x40) {
          uVar13 = uVar22 >> ((ulong)uVar5 & 0x3f);
          uVar12 = uVar22 << ((ulong)(0x40 - uVar5) & 0x3f) | uVar21 >> ((ulong)uVar5 & 0x3f);
          uVar16 = (ulong)(uVar21 << ((ulong)(0x40 - uVar5) & 0x3f) != 0);
          uVar22 = uVar12 | uVar16;
          uVar16 = uVar12 & 7 | uVar16;
          uVar14 = (uint)((uVar22 | uVar13) != 0);
        }
        else {
          uVar12 = uVar22 >> ((ulong)(iVar6 - 0x3f) & 0x3f);
          if (uVar5 == 0x40) {
            uVar22 = 0;
          }
          else {
            uVar22 = uVar22 << ((ulong)(0x80 - uVar5) & 0x3f);
          }
          uVar16 = (ulong)((uVar21 | uVar22) != 0);
          uVar22 = uVar12 | uVar16;
          uVar16 = uVar12 & 7 | uVar16;
          uVar14 = (uint)(uVar22 != 0);
          uVar13 = 0;
        }
      }
joined_r0x00100ce4:
      uVar21 = uVar22;
      if (uVar16 != 0) {
        uVar16 = 0;
        uVar11 = 0;
LAB_00100cf4:
        uVar12 = uVar2 & 0xc00000;
        uVar11 = uVar11 | 0x10;
        if (uVar12 == 0x400000) goto LAB_00100ffc;
        if (uVar12 == 0x800000) goto LAB_0010101c;
        if (uVar12 == 0) goto LAB_00100f3c;
joined_r0x00100d0c:
        if (uVar14 == 0) goto LAB_00100f5c;
        uVar12 = uVar13 & 0x8000000000000;
        uVar11 = uVar11 | 8;
        goto LAB_00100d1c;
      }
LAB_00100dec:
      uVar16 = 0;
      uVar11 = 0;
    }
LAB_00100df4:
    uVar12 = uVar13 & 0x8000000000000;
    if ((uVar14 != 0) && (((uint)uVar2 >> 0xb & 1) != 0)) {
      uVar11 = uVar11 | 8;
    }
LAB_00100d1c:
    if (uVar12 == 0) goto LAB_00100e30;
    uVar16 = uVar16 + 1;
    if (uVar16 != 0x7fff) {
      uVar21 = uVar21 >> 3 | uVar13 << 0x3d;
      goto joined_r0x00100e74;
    }
    uVar2 = uVar2 & 0xc00000;
    if (uVar2 == 0) {
      uVar13 = 0;
      uVar21 = 0;
    }
    else if (uVar2 == 0x400000) {
      bVar10 = uVar19 == 0;
      uVar13 = 0x1fffffffffffffff;
      if (bVar10) {
        uVar13 = 0;
      }
      uVar21 = -(ulong)!bVar10;
      if (!bVar10) {
        uVar16 = 0x7ffe;
      }
    }
    else {
      bVar9 = uVar2 != 0x800000;
      bVar10 = uVar19 == 0;
      uVar13 = 0x1fffffffffffffff;
      if (!bVar9 && !bVar10) {
        uVar13 = 0;
      }
      uVar21 = -(ulong)(bVar9 || bVar10);
      if (bVar9 || bVar10) {
        uVar16 = 0x7ffe;
      }
    }
    uVar11 = uVar11 | 0x14;
  }
  if ((uVar16 == 0x7fff) && ((uVar21 | uVar13) == 0)) {
    uVar21 = 0;
  }
joined_r0x00100e74:
  if (uVar11 == 0) {
    return uVar21;
  }
  __sfp_handle_exceptions();
  return uVar21;
}



undefined8 __extendsftf2(uint param_1)

{
  uint uVar1;
  
  cRead(fpcr);
  uVar1 = param_1 >> 0x17 & 0xff;
  if ((((uVar1 + 1 & 0xff) < 2) && (uVar1 != 0)) && ((param_1 & 0x7fffff) != 0)) {
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
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  cRead(fpcr);
  uVar4 = param_1 >> 0x34 & 0x7ff;
  uVar3 = param_1 & 0xfffffffffffff;
  if ((uVar4 + 1 & 0x7ff) < 2) {
    if (uVar4 == 0) {
      if ((uVar3 != 0) &&
         (uVar3 = uVar3 | uVar3 >> 1, uVar3 = uVar3 | uVar3 >> 2, uVar3 = uVar3 | uVar3 >> 4,
         uVar3 = uVar3 | uVar3 >> 8, uVar3 = uVar3 | uVar3 >> 0x10, uVar3 = uVar3 | uVar3 >> 0x20,
         uVar3 = ((uVar3 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar3 & 0x5555555555555555),
         uVar3 = ((uVar3 & 0xcccccccccccccccc) >> 2) + (uVar3 & 0x3333333333333333),
         uVar3 = ((uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar3 & 0xf0f0f0f0f0f0f0f),
         uVar3 = ((uVar3 & 0xff00ff00ff00ff00) >> 8) + (uVar3 & 0xff00ff00ff00ff),
         lVar1 = ((uVar3 & 0xffff0000ffff0000) >> 0x10) + (uVar3 & 0xffff0000ffff),
         iVar2 = -((int)((ulong)lVar1 >> 0x20) + (int)lVar1), iVar2 + 0x40 < 0xf)) {
        param_1 = (ulong)(iVar2 + 0x71);
      }
    }
    else if (uVar3 != 0) {
      if (uVar3 >> 0x33 != 0) {
        return uVar3 << 0x3c;
      }
      uVar3 = __sfp_handle_exceptions(1);
      return uVar3;
    }
  }
  else {
    param_1 = 0x3c00;
  }
  return param_1;
}



uint __trunctfsf2(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong in_register_00005008;
  
  uVar2 = cRead_8(fpcr);
  uVar9 = in_register_00005008 >> 0x30 & 0x7fff;
  uVar7 = (in_register_00005008 & 0xffffffffffff) << 3;
  uVar6 = uVar7 | param_1 >> 0x3d;
  param_1 = param_1 << 3;
  iVar3 = (int)((long)in_register_00005008 >> 0x3f);
  uVar10 = -iVar3;
  if ((uVar9 + 1 & 0x7fff) < 2) {
    if (uVar9 == 0) {
      if ((uVar6 | param_1) != 0) {
        uVar4 = 0x10;
        uVar5 = 1;
        uVar7 = 1;
LAB_00101adc:
        uVar6 = uVar2 & 0xc00000;
        if (uVar6 == 0x400000) {
          uVar6 = uVar7 + 8;
          if (uVar10 != 0) {
            uVar6 = uVar7;
          }
joined_r0x00101cdc:
          uVar7 = uVar6;
          if (uVar5 == 0) goto LAB_00101af4;
LAB_00101bd8:
          uVar4 = uVar4 | 8;
          uVar5 = (uint)uVar7;
        }
        else {
          if (uVar6 == 0x800000) {
            uVar1 = uVar7 + 8;
            if (uVar10 == 0) {
              uVar1 = uVar7;
            }
          }
          else {
            uVar1 = uVar7;
            if (uVar6 == 0) {
              if ((uVar7 & 0xf) == 4) goto joined_r0x00101bd0;
              uVar6 = uVar7 + 4;
              goto joined_r0x00101cdc;
            }
          }
          uVar7 = uVar1;
          if (uVar5 != 0) goto LAB_00101bd8;
LAB_00101af4:
          uVar5 = (uint)uVar7;
        }
        if ((uVar5 >> 0x1a & 1) == 0) goto LAB_00101bdc;
        uVar9 = uVar9 + 1;
        if (uVar9 != 0xff) {
          uVar10 = (uint)(uVar7 >> 3) & 0x7fffff | ((uint)uVar9 & 0xff) << 0x17 |
                   iVar3 * -0x80000000;
          goto joined_r0x00101b28;
        }
        uVar2 = uVar2 & 0xc00000;
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = 0xff;
          if (uVar2 == 0x400000) {
            if (uVar10 != 0) {
              uVar5 = 0xfe;
            }
            uVar9 = (ulong)uVar5;
            uVar5 = 0;
            if (uVar10 != 0) {
              uVar5 = 0xffffffff;
            }
          }
          else {
            uVar10 = uVar10 & uVar2 == 0x800000;
            if (uVar10 == 0) {
              uVar5 = 0xfe;
            }
            uVar9 = (ulong)uVar5;
            uVar5 = 0;
            if (uVar10 == 0) {
              uVar5 = 0xffffffff;
            }
          }
        }
        uVar10 = (uint)uVar9;
        uVar4 = uVar4 | 0x14;
        goto LAB_00101b74;
      }
      uVar10 = 0;
      uVar4 = 0;
    }
    else {
      if ((uVar6 | param_1) != 0) {
        uVar4 = (uint)(uVar7 >> 0x32) ^ 1;
        if (uVar9 != 0x7fff) {
          uVar4 = 0;
        }
        uVar7 = uVar7 >> 0x19 & 0xfffffffffffffff8 | 0x2000000;
        uVar9 = 0xff;
        goto LAB_00101ac8;
      }
      uVar10 = 0xff;
      uVar4 = 0;
    }
LAB_00101b70:
    uVar5 = 0;
  }
  else {
    uVar1 = uVar9 - 0x3f80;
    if (0xfe < (long)uVar1) {
      uVar9 = uVar2 & 0xc00000;
      if (uVar9 != 0) {
        if (uVar9 == 0x400000) {
          if (uVar10 != 0) {
            uVar9 = 0xfe;
            uVar4 = 0x14;
            uVar7 = 0xffffffffffffffff;
            goto LAB_00101af4;
          }
        }
        else {
          uVar5 = uVar10 & uVar9 == 0x800000;
          if (uVar5 == 0) {
            uVar4 = 0x14;
            uVar7 = 0xffffffffffffffff;
            uVar9 = 0xfe;
            goto LAB_00101adc;
          }
        }
      }
      uVar10 = 0xff;
      uVar4 = 0x14;
      goto LAB_00101b70;
    }
    if ((long)uVar1 < 1) {
      if ((long)(uVar9 - 0x3f69) < 0 != SCARRY8(uVar1,0x17)) {
        uVar4 = 0x10;
        uVar5 = 1;
        uVar7 = 1;
        uVar9 = 0;
        goto LAB_00101adc;
      }
      uVar8 = (uVar6 | 0x8000000000000) >> ((ulong)(0x1a - (int)uVar1) & 0x3f);
      uVar9 = (ulong)(((uVar6 | 0x8000000000000) << ((ulong)((int)uVar1 + 0x26) & 0x3f) | param_1)
                     != 0);
      uVar7 = uVar8 | uVar9;
      if ((uVar8 & 7 | uVar9) != 0) {
        uVar5 = 1;
        uVar9 = 0;
        uVar4 = 0;
        goto LAB_00101ad4;
      }
      uVar9 = 0;
      uVar4 = 0;
      uVar5 = (uint)uVar2 >> 0xb & 1;
joined_r0x00101bd0:
      if (uVar5 != 0) goto LAB_00101bd8;
    }
    else {
      uVar4 = 0;
      uVar7 = (ulong)((param_1 | uVar6 << 0x27) != 0) | uVar7 >> 0x19;
      uVar9 = uVar1;
LAB_00101ac8:
      uVar5 = 0;
      if ((uVar7 & 7) != 0) {
LAB_00101ad4:
        uVar4 = uVar4 | 0x10;
        goto LAB_00101adc;
      }
    }
LAB_00101bdc:
    uVar7 = uVar7 >> 3;
    uVar10 = (uint)uVar9 & 0xff;
    uVar2 = uVar7 | 0x400000;
    if (uVar9 != 0xff || uVar7 == 0) {
      uVar2 = uVar7;
    }
    uVar5 = (uint)uVar2;
  }
LAB_00101b74:
  uVar10 = uVar5 & 0x7fffff | (uVar10 & 0xff) << 0x17 | iVar3 * -0x80000000;
joined_r0x00101b28:
  if (uVar4 == 0) {
    return uVar10;
  }
  __sfp_handle_exceptions(uVar10);
  return uVar10;
}



ulong __trunctfdf2(ulong param_1)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong in_register_00005008;
  
  uVar6 = cRead_8(fpcr);
  uVar9 = in_register_00005008 >> 0x30 & 0x7fff;
  uVar5 = (in_register_00005008 & 0xffffffffffff) << 3;
  uVar4 = uVar5 | param_1 >> 0x3d;
  uVar11 = param_1 << 3;
  iVar2 = (int)((long)in_register_00005008 >> 0x3f);
  uVar7 = -iVar2;
  if ((uVar9 + 1 & 0x7fff) < 2) {
    if (uVar9 == 0) {
      if ((uVar4 | uVar11) != 0) {
        uVar3 = 0x10;
        uVar10 = 1;
        uVar5 = 1;
LAB_00101dfc:
        uVar4 = uVar6 & 0xc00000;
        if (uVar4 == 0x400000) {
          uVar11 = uVar5 + 8;
          if (uVar7 != 0) {
            uVar11 = uVar5;
          }
        }
        else if (uVar4 == 0x800000) {
          uVar11 = uVar5 + 8;
          if (uVar7 == 0) {
            uVar11 = uVar5;
          }
        }
        else {
          uVar11 = uVar5;
          if ((uVar4 == 0) && (uVar11 = uVar5 + 4, (uVar5 & 0xf) == 4)) {
            uVar11 = uVar5;
          }
        }
        uVar5 = uVar11;
        if (uVar10 != 0) {
LAB_00101ea0:
          uVar3 = uVar3 | 8;
        }
        goto LAB_00101e14;
      }
    }
    else {
      if ((uVar4 | uVar11) != 0) {
        uVar3 = (uint)(uVar5 >> 0x32) ^ 1;
        if (uVar9 != 0x7fff) {
          uVar3 = 0;
        }
        uVar5 = uVar11 >> 0x3c & 0xfffffffffffffff8 | uVar4 << 4 | 0x40000000000000;
        uVar9 = 0x7ff;
        goto LAB_00101de8;
      }
      uVar9 = 0x7ff;
    }
    uVar3 = 0;
LAB_00101e60:
    uVar5 = 0;
LAB_00101e64:
    uVar5 = uVar5 >> 3;
    uVar7 = (uint)uVar9;
    uVar6 = uVar5 | 0x8000000000000;
    if (uVar9 != 0x7ff || uVar5 == 0) {
      uVar6 = uVar5;
    }
  }
  else {
    uVar1 = uVar9 - 0x3c00;
    if (0x7fe < (long)uVar1) {
      uVar9 = uVar6 & 0xc00000;
      if (uVar9 != 0) {
        if (uVar9 == 0x400000) {
          if (uVar7 != 0) {
            uVar9 = 0x7fe;
            uVar3 = 0x14;
            uVar5 = 0xffffffffffffffff;
            goto LAB_00101e14;
          }
        }
        else {
          uVar10 = uVar7 & uVar9 == 0x800000;
          if (uVar10 == 0) {
            uVar3 = 0x14;
            uVar5 = 0xffffffffffffffff;
            uVar9 = 0x7fe;
            goto LAB_00101dfc;
          }
        }
      }
      uVar9 = 0x7ff;
      uVar3 = 0x14;
      goto LAB_00101e60;
    }
    if (0 < (long)uVar1) {
      uVar3 = 0;
      uVar5 = (ulong)((param_1 & 0x1ffffffffffffff) != 0) | uVar11 >> 0x3c | uVar4 << 4;
      uVar9 = uVar1;
LAB_00101de8:
      uVar10 = 0;
      if ((uVar5 & 7) != 0) {
LAB_00101df4:
        uVar3 = uVar3 | 0x10;
        goto LAB_00101dfc;
      }
LAB_00101e14:
      if ((uVar5 & 0x80000000000000) != 0) {
        uVar9 = uVar9 + 1;
        if (uVar9 == 0x7ff) {
          uVar6 = uVar6 & 0xc00000;
          uVar5 = 0;
          if (uVar6 != 0) {
            uVar7 = -iVar2;
            uVar10 = 0x7ff;
            if (uVar6 == 0x400000) {
              if (uVar7 != 0) {
                uVar10 = 0x7fe;
              }
              uVar9 = (ulong)uVar10;
              uVar5 = 0;
              if (uVar7 != 0) {
                uVar5 = 0x1fffffffffffffff;
              }
            }
            else {
              uVar7 = uVar7 & uVar6 == 0x800000;
              if (uVar7 == 0) {
                uVar10 = 0x7fe;
              }
              uVar9 = (ulong)uVar10;
              uVar5 = 0;
              if (uVar7 == 0) {
                uVar5 = 0x1fffffffffffffff;
              }
            }
          }
          uVar3 = uVar3 | 0x14;
          uVar9 = uVar5 & 0xfffffffffffff | (uVar9 & 0x7ff) << 0x34 |
                  in_register_00005008 & 0x8000000000000000;
          goto LAB_00101f68;
        }
        goto LAB_00101e28;
      }
      goto LAB_00101e64;
    }
    if ((long)(uVar9 - 0x3bcc) < 0 != SCARRY8(uVar1,0x34)) {
      uVar3 = 0x10;
      uVar10 = 1;
      uVar5 = 1;
      uVar9 = 0;
      goto LAB_00101dfc;
    }
    uVar4 = uVar4 | 0x8000000000000;
    iVar8 = (int)uVar1;
    if ((long)(0x3d - uVar1) < 0x40) {
      uVar5 = uVar11 >> ((ulong)(0x3d - iVar8) & 0x3f) | uVar4 << ((ulong)(iVar8 + 3) & 0x3f) |
              (ulong)(uVar11 << ((ulong)(iVar8 + 3) & 0x3f) != 0);
    }
    else {
      if (0x3d - uVar1 == 0x40) {
        uVar9 = 0;
      }
      else {
        uVar9 = uVar4 << ((ulong)(iVar8 + 0x43) & 0x3f);
      }
      uVar5 = uVar4 >> ((ulong)(-iVar8 - 3) & 0x3f) | (ulong)((uVar9 | uVar11) != 0);
    }
    uVar10 = (uint)(uVar5 != 0);
    if ((uVar5 & 7) != 0) {
      uVar9 = 0;
      uVar3 = 0;
      goto LAB_00101df4;
    }
    if (uVar5 == 0) {
      uVar9 = 0;
      uVar3 = 0;
      goto LAB_00101e14;
    }
    if (((uint)uVar6 >> 0xb & 1) != 0) {
      uVar9 = 0;
      uVar3 = 0;
      goto LAB_00101ea0;
    }
    if ((uVar5 >> 0x37 & 1) == 0) {
      uVar9 = 0;
      uVar3 = 0;
      goto LAB_00101e64;
    }
    uVar9 = 1;
    uVar3 = 0;
LAB_00101e28:
    uVar7 = (uint)uVar9;
    uVar6 = uVar5 >> 3 & 0x1fefffffffffffff;
  }
  uVar9 = uVar6 & 0xfffffffffffff | (ulong)(uVar7 & 0x7ff) << 0x34 |
          in_register_00005008 & 0x8000000000000000;
  if (uVar3 == 0) {
    return uVar9;
  }
LAB_00101f68:
  __sfp_handle_exceptions(uVar3);
  return uVar9;
}



ulong __sfp_handle_exceptions(ulong param_1)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  if ((param_1 & 1) != 0) {
    cRead(fpsr);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    cRead(fpsr);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    cRead(fpsr);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    cRead(fpsr);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    param_1 = cRead_8(fpsr);
  }
  return param_1;
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


