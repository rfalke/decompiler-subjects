typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long    qword;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned long    undefined8;
typedef unsigned short    word;
typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef struct tls_module tls_module, *Ptls_module;

typedef ulong size_t;

struct tls_module {
    struct tls_module * next;
    void * image;
    size_t len;
    size_t size;
    size_t align;
    size_t offset;
};

typedef struct __locale_struct __locale_struct, *P__locale_struct;

typedef struct __locale_map __locale_map, *P__locale_map;

struct __locale_struct {
    struct __locale_map * cat[6];
};

struct __locale_map {
};

typedef struct __libc __libc, *P__libc;

struct __libc {
    char can_do_threads;
    char threaded;
    char secure;
    char need_locks;
    int threads_minus_1;
    size_t * auxv;
    struct tls_module * tls_head;
    size_t tls_size;
    size_t tls_align;
    size_t tls_cnt;
    size_t page_size;
    struct __locale_struct global_locale;
};

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef struct _IO_FILE FILE;

struct _IO_FILE {
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

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType_AARCH64 {
    SHT_AARCH64_ATTRIBUTES=1879048195,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
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

typedef struct Elf64_Dyn_AARCH64 Elf64_Dyn_AARCH64, *PElf64_Dyn_AARCH64;

typedef enum Elf64_DynTag_AARCH64 {
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRENT=1879040003,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELSZ=1610612752,
    DT_AUDIT=1879047932,
    DT_AUXILIARY=2147483645,
    DT_BIND_NOW=24,
    DT_CHECKSUM=1879047672,
    DT_CONFIG=1879047930,
    DT_DEBUG=21,
    DT_DEPAUDIT=1879047931,
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
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_REL=17,
    DT_RELA=7,
    DT_RELACOUNT=1879048185,
    DT_RELAENT=9,
    DT_RELASZ=8,
    DT_RELCOUNT=1879048186,
    DT_RELENT=19,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_RELRSZ=35,
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
  return (int)ctx;
}



void FUN_001005b0(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



void __deregister_frame_info(void)

{
  __deregister_frame_info();
  return;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



void __register_frame_info(void)

{
  __register_frame_info();
  return;
}



undefined8 main(void)

{
  printf((char *)0x3ff19999a0000000,"float:       %2ld %f\n",4);
  printf((char *)0x3ff199999999999a,"double:      %2ld %f\n",8);
  printf((char *)0x9a00000000000000,"long double: %2ld %Lf\n",0x10);
  return 0;
}



void _start(void)

{
  undefined in_stack_00000000;
  
  _start_c((long *)register0x00000008);
  return;
}



void _start_c(long *p)

{
  __libc_start_main(main,*p,p + 1,_init,_fini,0);
  return;
}



// WARNING: Removing unreachable block (ram,0x001006dc)
// WARNING: Removing unreachable block (ram,0x001006e8)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00100718)
// WARNING: Removing unreachable block (ram,0x00100724)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_7318 != '\0') {
    return;
  }
  __cxa_finalize(__dso_handle);
  deregister_tm_clones();
  __deregister_frame_info(&cie_00101360);
  completed_7318 = 1;
  return;
}



void frame_dummy(void)

{
  __register_frame_info(&cie_00101360,object_7323);
  register_tm_clones();
  return;
}



float add_float(float param_1,float param_2)

{
  return param_1 + param_2;
}



double add_double(double param_1,double param_2)

{
  return param_1 + param_2;
}



void add_long_double(void)

{
  __addtf3();
  return;
}



ulong __addtf3(ulong param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong in_register_00005008;
  ulong in_register_00005028;
  
  uVar5 = cRead_8(fpcr);
  uVar9 = in_register_00005008 >> 0x30 & 0x7fff;
  uVar22 = in_register_00005028 >> 0x30 & 0x7fff;
  uVar3 = (in_register_00005008 & 0xffffffffffff) << 3;
  uVar21 = -((long)in_register_00005028 >> 0x3f);
  uVar18 = in_register_00005028 << 3;
  uVar4 = uVar18 & 0x7fffffffffff8;
  uVar15 = (int)uVar9 - (int)uVar22;
  uVar20 = -((long)in_register_00005008 >> 0x3f);
  uVar12 = uVar4 | param_2 >> 0x3d;
  uVar13 = uVar3 | param_1 >> 0x3d;
  uVar19 = param_1 * 8;
  uVar11 = param_2 * 8;
  uVar17 = (ulong)uVar15;
  uVar8 = (uint)(uVar3 >> 0x20);
  uVar6 = (uint)(uVar4 >> 0x20);
  uVar14 = uVar12;
  uVar10 = uVar11;
  if (uVar21 == -((long)in_register_00005008 >> 0x3f)) {
    if ((int)uVar15 < 1) {
      if (uVar15 != 0) {
        if (uVar9 == 0) {
          if ((uVar13 | uVar19) == 0) {
            if (uVar22 != 0x7fff) goto LAB_0010103c;
          }
          else {
            if (uVar15 == 0xffffffff) {
              uVar12 = uVar13 + uVar12 + (ulong)CARRY8(uVar19,uVar11);
              goto LAB_001009e0;
            }
            if (uVar22 != 0x7fff) {
              uVar15 = ~uVar15;
              goto LAB_001009f4;
            }
          }
LAB_001009ac:
          if ((uVar12 | uVar11) == 0) {
            uVar12 = 0;
            uVar11 = 0;
            goto LAB_001008c8;
          }
          uVar8 = uVar6 >> 0x12 ^ 1;
          uVar13 = uVar12;
          uVar9 = uVar22;
          goto LAB_001009c4;
        }
        if (uVar22 == 0x7fff) goto LAB_001009ac;
        uVar15 = -uVar15;
        uVar13 = uVar13 | 0x8000000000000;
LAB_001009f4:
        if ((int)uVar15 < 0x75) {
          if (0x3f < (int)uVar15) {
            uVar10 = uVar13 << ((ulong)(0x80 - uVar15) & 0x3f);
            if (uVar15 == 0x40) {
              uVar10 = 0;
            }
            uVar19 = uVar13 >> ((ulong)(uVar15 - 0x40) & 0x3f) | (ulong)((uVar10 | uVar19) != 0);
            goto LAB_00100a7c;
          }
          uVar10 = uVar13 >> ((ulong)uVar15 & 0x3f);
          uVar19 = uVar13 << ((ulong)(0x40 - uVar15) & 0x3f) | uVar19 >> ((ulong)uVar15 & 0x3f) |
                   (ulong)(uVar19 << ((ulong)(0x40 - uVar15) & 0x3f) != 0);
        }
        else {
          uVar19 = (ulong)((uVar13 | uVar19) != 0);
LAB_00100a7c:
          uVar10 = 0;
        }
        uVar12 = uVar10 + uVar12 + (ulong)CARRY8(uVar19,uVar11);
LAB_001009e0:
        uVar19 = uVar19 + uVar11;
LAB_001008a0:
        uVar11 = uVar19;
        if ((uVar12 >> 0x33 & 1) != 0) {
          uVar22 = uVar22 + 1;
          if (uVar22 != 0x7fff) {
            uVar11 = uVar19 & 1 | uVar19 >> 1 | uVar12 << 0x3f;
            uVar12 = (uVar12 & 0xfff7ffffffffffff) >> 1;
            goto LAB_001008c8;
          }
          uVar11 = uVar5 & 0xc00000;
          if (uVar11 == 0) {
            uVar13 = 0;
          }
          else {
            if (uVar11 == 0x400000) {
              if (uVar20 != 0) {
LAB_00100c40:
                uVar13 = 0xffffffffffffffff;
                uVar22 = 0x7ffe;
                uVar11 = 0xffffffffffffffff;
                goto LAB_001010b8;
              }
            }
            else {
              if ((uVar11 != 0x800000) || (uVar20 == 0)) goto LAB_00100c40;
            }
            uVar13 = 0;
            uVar11 = 0;
          }
LAB_001010b8:
          uVar8 = 0x14;
          uVar9 = uVar22;
          goto LAB_001009c4;
        }
        goto LAB_0010103c;
      }
      uVar17 = uVar9 + 1;
      if ((uVar17 & 0x7ffe) == 0) {
        uVar17 = uVar13 | uVar19;
        if (uVar9 != 0) {
          if (uVar9 == 0x7fff) {
            if (uVar17 == 0) {
              if (uVar22 == 0x7fff) goto LAB_00100b84;
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 >> 0x12 ^ 1;
              uVar6 = uVar8;
              if (uVar22 == 0x7fff) goto LAB_00100b34;
LAB_00100b9c:
              uVar8 = uVar6;
              if ((uVar12 | uVar11) == 0) {
LAB_00100ba4:
                uVar11 = uVar19;
                uVar12 = uVar13;
              }
              else {
LAB_00100b48:
                uVar22 = in_register_00005008 & 0xffffffffffff;
                if ((uVar3 >> 0x32 != 0) && (uVar4 >> 0x32 == 0)) {
                  uVar22 = uVar4 >> 3;
                  uVar20 = uVar21;
                  param_1 = param_2;
                }
                uVar11 = param_1 << 3;
                uVar12 = param_1 >> 0x3d | uVar22 << 3;
              }
            }
          }
          else {
            if (uVar22 == 0x7fff) {
LAB_00100b84:
              uVar8 = 0;
LAB_00100b34:
              if ((uVar12 | uVar11) == 0) {
                if (uVar17 != 0) goto LAB_00100ba4;
              }
              else {
                if ((uVar18 & 0x4000000000000) == 0) {
                  uVar8 = 1;
                }
                if (uVar17 != 0) goto LAB_00100b48;
              }
            }
            else {
              uVar8 = 0;
              uVar6 = 0;
              if (uVar17 != 0) goto LAB_00100b9c;
            }
          }
LAB_00100b94:
          uVar13 = uVar12;
          uVar9 = 0x7fff;
          goto LAB_00100ad4;
        }
        if ((uVar17 != 0) && (uVar14 = uVar13, uVar10 = uVar19, (uVar12 | uVar11) != 0)) {
          bVar7 = CARRY8(uVar19,uVar11);
          uVar11 = uVar19 + uVar11;
          uVar14 = uVar13 + uVar12 + (ulong)bVar7;
          uVar10 = uVar11;
          if ((uVar14 >> 0x33 & 1) != 0) {
            uVar13 = uVar14 & 0xfff7ffffffffffff;
            uVar8 = 0;
            uVar9 = 1;
            goto LAB_00100ad4;
          }
        }
        goto LAB_00100e5c;
      }
      uVar9 = uVar17;
      if (uVar17 != 0x7fff) {
        uVar13 = uVar13 + uVar12 + (ulong)CARRY8(uVar19,uVar11);
        uVar11 = uVar19 + uVar11 >> 1 | uVar13 << 0x3f;
        uVar13 = uVar13 >> 1;
        goto LAB_00100bcc;
      }
      uVar11 = uVar5 & 0xc00000;
      if (uVar11 == 0) {
        uVar13 = 0;
      }
      else {
        if (uVar11 == 0x400000) {
          if (uVar20 != 0) {
LAB_00100c04:
            uVar13 = 0xffffffffffffffff;
            uVar11 = 0xffffffffffffffff;
            uVar9 = 0x7ffe;
            goto LAB_001010ac;
          }
        }
        else {
          if ((uVar11 != 0x800000) || (uVar20 == 0)) goto LAB_00100c04;
        }
        uVar13 = 0;
        uVar11 = 0;
      }
LAB_001010ac:
      uVar8 = 0x14;
    }
    else {
      if (uVar22 != 0) {
        if (uVar9 == 0x7fff) goto LAB_001008d8;
        uVar12 = uVar12 | 0x8000000000000;
LAB_00100904:
        iVar16 = (int)uVar17;
        if (iVar16 < 0x75) {
          if (0x3f < iVar16) {
            uVar22 = uVar12 << ((ulong)(0x80 - iVar16) & 0x3f);
            if (iVar16 == 0x40) {
              uVar22 = 0;
            }
            uVar22 = uVar12 >> ((ulong)(iVar16 - 0x40) & 0x3f) | (ulong)((uVar22 | uVar11) != 0);
            goto LAB_00100978;
          }
          uVar11 = uVar12 >> (uVar17 & 0x3f);
          uVar22 = uVar12 << ((ulong)(0x40 - iVar16) & 0x3f) | uVar11 >> (uVar17 & 0x3f) |
                   (ulong)(uVar11 << ((ulong)(0x40 - iVar16) & 0x3f) != 0);
        }
        else {
          uVar22 = (ulong)((uVar12 | uVar11) != 0);
LAB_00100978:
          uVar11 = 0;
        }
        uVar19 = uVar22 + uVar19;
        uVar12 = uVar11 + uVar13 + (ulong)CARRY8(uVar22,uVar19);
        uVar22 = uVar9;
        goto LAB_001008a0;
      }
      if ((uVar12 | uVar11) != 0) {
        uVar17 = (ulong)(uVar15 - 1);
        if (uVar15 - 1 != 0) {
          if (uVar9 == 0x7fff) goto LAB_001008d8;
          goto LAB_00100904;
        }
        uVar19 = uVar19 + uVar11;
        uVar12 = uVar13 + uVar12 + (ulong)CARRY8(uVar19,uVar11);
        uVar22 = uVar9;
        goto LAB_001008a0;
      }
LAB_00100864:
      uVar15 = (uint)uVar12 | (uint)uVar11;
      uVar12 = uVar13;
      uVar22 = uVar9;
      uVar11 = uVar19;
      if (uVar9 == 0x7fff) {
        if ((uVar13 | uVar19) == 0) goto LAB_001010c0;
        uVar8 = uVar8 >> 0x12 ^ 1;
        goto LAB_00100ad4;
      }
LAB_0010103c:
      uVar14 = uVar12;
      uVar10 = uVar11;
      if (uVar22 != 0) goto LAB_001008c8;
LAB_00100e5c:
      uVar11 = uVar10;
      uVar13 = uVar14;
      uVar15 = (uint)((uVar11 | uVar13) != 0);
      uVar9 = 0;
LAB_00100bcc:
      uVar8 = 0;
    }
  }
  else {
    if ((int)uVar15 < 1) {
      if (uVar15 == 0) {
        if ((uVar9 + 1 & 0x7ffe) == 0) {
          uVar17 = uVar13 | uVar19;
          uVar23 = uVar12 | uVar11;
          if (uVar9 == 0) {
            if (uVar17 == 0) {
              uVar20 = uVar21;
              if (uVar23 == 0) {
                uVar14 = 0;
                uVar10 = 0;
                uVar20 = (ulong)((uVar5 & 0xc00000) == 0x800000);
              }
            }
            else {
              uVar14 = uVar13;
              uVar10 = uVar19;
              if (uVar23 != 0) {
                uVar10 = uVar19 + param_2 * -8;
                uVar14 = uVar13 - (uVar12 + (uVar19 < uVar11));
                if ((uVar14 >> 0x33 & 1) == 0) {
                  uVar22 = uVar10 | uVar14;
                  if (uVar22 == 0) goto LAB_00100ea4;
                }
                else {
                  uVar14 = uVar12 - (uVar13 + (uVar11 < uVar19));
                  uVar10 = uVar11 + param_1 * -8;
                  uVar20 = uVar21;
                }
              }
            }
            goto LAB_00100e5c;
          }
          if (uVar9 == 0x7fff) {
            if (uVar17 != 0) {
              uVar8 = uVar8 >> 0x12 ^ 1;
              uVar6 = uVar8;
              if (uVar22 == 0x7fff) goto LAB_00100edc;
LAB_00100f44:
              uVar8 = uVar6;
              if (uVar23 == 0) goto LAB_00100ba4;
LAB_00100eec:
              uVar22 = in_register_00005008 & 0xffffffffffff;
              if ((uVar3 >> 0x32 != 0) && (uVar4 >> 0x32 == 0)) {
                param_1 = param_2;
                uVar22 = uVar4 >> 3;
                uVar20 = uVar21;
              }
              uVar11 = param_1 << 3;
              uVar12 = param_1 >> 0x3d | uVar22 << 3;
              goto LAB_00100b94;
            }
            if (uVar22 == 0x7fff) goto LAB_00100f28;
            uVar8 = 0;
LAB_00100f38:
            uVar20 = uVar21;
            if (uVar23 != 0) goto LAB_00100b94;
          }
          else {
            if (uVar22 != 0x7fff) {
              uVar8 = 0;
              uVar6 = 0;
              if (uVar17 != 0) goto LAB_00100f44;
              goto LAB_00100f38;
            }
LAB_00100f28:
            uVar8 = 0;
LAB_00100edc:
            if (uVar23 != 0) {
              if ((uVar18 & 0x4000000000000) == 0) {
                uVar8 = 1;
              }
              if (uVar17 != 0) goto LAB_00100eec;
              goto LAB_00100f38;
            }
            if (uVar17 != 0) goto LAB_00100ba4;
          }
          uVar20 = 0;
          uVar13 = 0x7ffffffffffff;
          uVar11 = 0xfffffffffffffff8;
          uVar9 = 0x7fff;
          uVar8 = 1;
          goto LAB_00100ad4;
        }
        uVar10 = uVar19 + param_2 * -8;
        uVar18 = uVar13 - (uVar12 + (uVar19 < uVar11));
        if ((uVar18 >> 0x33 & 1) != 0) {
          uVar10 = uVar11 + param_1 * -8;
          uVar18 = uVar12 - (uVar13 + (uVar11 < uVar19));
          uVar20 = uVar21;
          goto LAB_00100f6c;
        }
        uVar22 = uVar10 | uVar18;
        if (uVar22 != 0) goto LAB_00100f6c;
LAB_00100ea4:
        uVar20 = (ulong)((uVar5 & 0xc00000) == 0x800000);
LAB_00100eb0:
        uVar14 = 0;
        uVar10 = uVar22;
        goto LAB_00100e5c;
      }
      if (uVar9 != 0) {
        if (uVar22 == 0x7fff) goto LAB_00100d44;
        uVar15 = -uVar15;
        uVar13 = uVar13 | 0x8000000000000;
LAB_00100d8c:
        if ((int)uVar15 < 0x75) {
          if (0x3f < (int)uVar15) {
            uVar10 = uVar13 << ((ulong)(0x80 - uVar15) & 0x3f);
            if (uVar15 == 0x40) {
              uVar10 = 0;
            }
            uVar19 = uVar13 >> ((ulong)(uVar15 - 0x40) & 0x3f) | (ulong)((uVar10 | uVar19) != 0);
            goto LAB_00100e10;
          }
          uVar10 = uVar13 >> ((ulong)uVar15 & 0x3f);
          uVar19 = uVar13 << ((ulong)(0x40 - uVar15) & 0x3f) | uVar19 >> ((ulong)uVar15 & 0x3f) |
                   (ulong)(uVar19 << ((ulong)(0x40 - uVar15) & 0x3f) != 0);
        }
        else {
          uVar19 = (ulong)((uVar13 | uVar19) != 0);
LAB_00100e10:
          uVar10 = 0;
        }
        lVar2 = -uVar19;
        lVar1 = uVar10 + (uVar11 < uVar19);
LAB_00100d74:
        uVar10 = uVar11 + lVar2;
        uVar12 = uVar12 - lVar1;
        goto LAB_00100c78;
      }
      if ((uVar13 | uVar19) == 0) {
        uVar20 = uVar21;
        if (uVar22 != 0x7fff) goto LAB_0010103c;
      }
      else {
        if (uVar15 == 0xffffffff) {
          lVar2 = param_1 * -8;
          lVar1 = uVar13 + (uVar11 < uVar19);
          goto LAB_00100d74;
        }
        if (uVar22 != 0x7fff) {
          uVar15 = ~uVar15;
          goto LAB_00100d8c;
        }
      }
LAB_00100d44:
      if ((uVar12 | uVar11) == 0) {
        uVar12 = 0;
        uVar11 = 0;
        uVar20 = uVar21;
        goto LAB_001008c8;
      }
      uVar8 = uVar6 >> 0x12 ^ 1;
      uVar13 = uVar12;
      uVar9 = uVar22;
      uVar20 = uVar21;
    }
    else {
      uVar21 = uVar20;
      if (uVar22 == 0) {
        if ((uVar12 | uVar11) == 0) goto LAB_00100864;
        uVar17 = (ulong)(uVar15 - 1);
        if (uVar15 - 1 != 0) {
          if (uVar9 != 0x7fff) goto LAB_00100c90;
          goto LAB_001008d8;
        }
        uVar10 = uVar19 + param_2 * -8;
        uVar12 = uVar13 - (uVar12 + (uVar19 < uVar11));
        uVar22 = uVar9;
LAB_00100c78:
        uVar11 = uVar10;
        uVar20 = uVar21;
        if ((uVar12 >> 0x33 & 1) != 0) {
          uVar18 = uVar12 & 0x7ffffffffffff;
          uVar9 = uVar22;
LAB_00100f6c:
          uVar22 = uVar10 | uVar10 >> 1;
          uVar22 = uVar22 | uVar22 >> 2;
          uVar22 = uVar22 | uVar22 >> 4;
          uVar22 = uVar22 | uVar22 >> 8;
          uVar22 = uVar22 | uVar22 >> 0x10;
          uVar22 = uVar22 | uVar22 >> 0x20;
          uVar22 = ((uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar22 & 0x5555555555555555);
          uVar22 = ((uVar22 & 0xcccccccccccccccc) >> 2) + (uVar22 & 0x3333333333333333);
          uVar22 = ((uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar22 & 0xf0f0f0f0f0f0f0f);
          uVar22 = ((uVar22 & 0xff00ff00ff00ff00) >> 8) + (uVar22 & 0xff00ff00ff00ff);
          lVar1 = ((uVar22 & 0xffff0000ffff0000) >> 0x10) + (uVar22 & 0xffff0000ffff);
          uVar22 = uVar18 | uVar18 >> 1;
          uVar22 = uVar22 | uVar22 >> 2;
          uVar22 = uVar22 | uVar22 >> 4;
          uVar22 = uVar22 | uVar22 >> 8;
          uVar22 = uVar22 | uVar22 >> 0x10;
          uVar22 = uVar22 | uVar22 >> 0x20;
          uVar22 = ((uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar22 & 0x5555555555555555);
          uVar22 = ((uVar22 & 0xcccccccccccccccc) >> 2) + (uVar22 & 0x3333333333333333);
          uVar22 = ((uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar22 & 0xf0f0f0f0f0f0f0f);
          uVar22 = ((uVar22 & 0xff00ff00ff00ff00) >> 8) + (uVar22 & 0xff00ff00ff00ff);
          lVar2 = ((uVar22 & 0xffff0000ffff0000) >> 0x10) + (uVar22 & 0xffff0000ffff);
          iVar16 = 0x80 - ((int)((ulong)lVar1 >> 0x20) + (int)lVar1);
          if (uVar18 != 0) {
            iVar16 = 0x40 - ((int)((ulong)lVar2 >> 0x20) + (int)lVar2);
          }
          uVar15 = iVar16 - 0xc;
          if ((int)uVar15 < 0x40) {
            uVar11 = uVar10 << ((ulong)uVar15 & 0x3f);
            uVar12 = uVar10 >> ((ulong)-uVar15 & 0x3f) | uVar18 << ((ulong)uVar15 & 0x3f);
          }
          else {
            uVar11 = 0;
            uVar12 = uVar10 << ((ulong)(iVar16 - 0x4c) & 0x3f);
          }
          if ((long)uVar9 <= (long)(int)uVar15) {
            iVar16 = uVar15 - (int)uVar9;
            uVar15 = iVar16 + 1;
            if ((int)uVar15 < 0x40) {
              uVar14 = uVar12 >> ((ulong)uVar15 & 0x3f);
              uVar10 = uVar12 << ((ulong)(0x40 - uVar15) & 0x3f) | uVar11 >> ((ulong)uVar15 & 0x3f)
                       | (ulong)(uVar11 << ((ulong)(0x40 - uVar15) & 0x3f) != 0);
              goto LAB_00100e5c;
            }
            uVar22 = uVar12 << ((ulong)(0x80 - uVar15) & 0x3f);
            if (uVar15 == 0x40) {
              uVar22 = 0;
            }
            uVar22 = uVar12 >> ((ulong)(iVar16 - 0x3f) & 0x3f) | (ulong)((uVar11 | uVar22) != 0);
            goto LAB_00100eb0;
          }
          uVar22 = uVar9 - (long)(int)uVar15;
          uVar12 = uVar12 & 0xfff7ffffffffffff;
        }
        goto LAB_0010103c;
      }
      if (uVar9 != 0x7fff) {
        uVar12 = uVar12 | 0x8000000000000;
LAB_00100c90:
        iVar16 = (int)uVar17;
        if (iVar16 < 0x75) {
          if (0x3f < iVar16) {
            uVar22 = uVar12 << ((ulong)(0x80 - iVar16) & 0x3f);
            if (iVar16 == 0x40) {
              uVar22 = 0;
            }
            uVar22 = uVar12 >> ((ulong)(iVar16 - 0x40) & 0x3f) | (ulong)((uVar22 | uVar11) != 0);
            goto LAB_00100d10;
          }
          uVar11 = uVar12 >> (uVar17 & 0x3f);
          uVar22 = uVar12 << ((ulong)(0x40 - iVar16) & 0x3f) | uVar11 >> (uVar17 & 0x3f) |
                   (ulong)(uVar11 << ((ulong)(0x40 - iVar16) & 0x3f) != 0);
        }
        else {
          uVar22 = (ulong)((uVar12 | uVar11) != 0);
LAB_00100d10:
          uVar11 = 0;
        }
        uVar10 = uVar19 - uVar22;
        uVar12 = uVar13 - (uVar11 + (uVar19 < uVar22));
        uVar22 = uVar9;
        goto LAB_00100c78;
      }
LAB_001008d8:
      if ((uVar13 | uVar19) != 0) {
        uVar8 = uVar8 >> 0x12 ^ 1;
        uVar11 = uVar19;
        goto LAB_001009c4;
      }
LAB_001010c0:
      uVar11 = uVar13 | uVar19;
      uVar12 = 0;
      uVar22 = uVar9;
LAB_001008c8:
      uVar8 = 0;
      uVar13 = uVar12;
      uVar9 = uVar22;
    }
LAB_001009c4:
    uVar15 = 0;
  }
LAB_00100ad4:
  if ((uVar11 & 7) == 0) {
    if (uVar15 == 0) goto LAB_00101100;
    if (uVar8 >> 4 == 0) {
      uVar15 = (uint)uVar5 >> 0xb & 1;
      goto joined_r0x001010f8;
    }
  }
  else {
    uVar22 = uVar5 & 0xc00000;
    uVar8 = uVar8 | 0x10;
    if (uVar22 == 0x400000) {
      if (uVar20 == 0) {
LAB_001010e0:
        bVar7 = 0xfffffffffffffff7 < uVar11;
        uVar11 = uVar11 + 8;
LAB_00100b08:
        if (bVar7) {
          uVar13 = uVar13 + 1;
        }
      }
    }
    else {
      if (uVar22 == 0x800000) {
        if (uVar20 != 0) goto LAB_001010e0;
      }
      else {
        if ((uVar22 == 0) && ((uVar11 & 0xf) != 4)) {
          bVar7 = 0xfffffffffffffffb < uVar11;
          uVar11 = uVar11 + 4;
          goto LAB_00100b08;
        }
      }
    }
joined_r0x001010f8:
    if (uVar15 == 0) goto LAB_00101100;
  }
  uVar8 = uVar8 | 8;
LAB_00101100:
  if ((uVar13 >> 0x33 & 1) != 0) {
    if (uVar9 == 0x7ffe) {
      uVar11 = uVar5 & 0xc00000;
      if (uVar11 != 0) {
        if (uVar11 == 0x400000) {
          uVar11 = -(ulong)(uVar20 != 0);
        }
        else {
          if (uVar11 == 0x800000) {
            uVar11 = -(ulong)(uVar20 == 0);
          }
          else {
            uVar11 = 0xffffffffffffffff;
          }
        }
      }
      uVar8 = uVar8 | 0x14;
      uVar13 = uVar11;
    }
    else {
      uVar13 = uVar13 & 0xfff7ffffffffffff;
    }
  }
  if (uVar8 != 0) {
    __sfp_handle_exceptions();
  }
  return uVar11 >> 3 | uVar13 << 0x3d;
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



void _fini(void)

{
  return;
}


