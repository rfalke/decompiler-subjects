typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    word;
typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

typedef enum Elf_SectionHeaderType_ARM {
    SHT_ARM_ATTRIBUTES=1879048195,
    SHT_ARM_DEBUGOVERLAY=1879048196,
    SHT_ARM_EXIDX=1879048193,
    SHT_ARM_OVERLAYSECTION=1879048197,
    SHT_ARM_PREEMPTMAP=1879048194,
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
} Elf_SectionHeaderType_ARM;

struct Elf32_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_ARM sh_type;
    dword sh_flags;
    dword sh_addr;
    dword sh_offset;
    dword sh_size;
    dword sh_link;
    dword sh_info;
    dword sh_addralign;
    dword sh_entsize;
};

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
};

typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

typedef enum Elf_ProgramHeaderType_ARM {
    PT_ARM_EXIDX=1879048192,
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
} Elf_ProgramHeaderType_ARM;

struct Elf32_Phdr {
    enum Elf_ProgramHeaderType_ARM p_type;
    dword p_offset;
    dword p_vaddr;
    dword p_paddr;
    dword p_filesz;
    dword p_memsz;
    dword p_flags;
    dword p_align;
};

typedef enum Elf32_DynTag_ARM {
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
} Elf32_DynTag_ARM;

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
};

typedef struct Elf32_Dyn_ARM Elf32_Dyn_ARM, *PElf32_Dyn_ARM;

struct Elf32_Dyn_ARM {
    enum Elf32_DynTag_ARM d_tag;
    dword d_val;
};

typedef struct Elf32_Ehdr Elf32_Ehdr, *PElf32_Ehdr;

struct Elf32_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_pad[9];
    word e_type;
    word e_machine;
    dword e_version;
    dword e_entry;
    dword e_phoff;
    dword e_shoff;
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
  
  iVar1 = call_weak_fn();
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int raise(int __sig)

{
  int iVar1;
  
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)(undefined *)0x0)();
  return iVar1;
}



void __libc_start_main(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void abort(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



void _start(undefined4 param_1)

{
  undefined4 param_5;
  
  __libc_start_main(main,param_5,&stack0x00000004,__libc_csu_init,__libc_csu_fini,param_1);
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x0000831c)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x00008354)
// WARNING: Removing unreachable block (ram,0x00008344)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00008380)
// WARNING: Removing unreachable block (ram,0x0000838c)
// WARNING: Removing unreachable block (ram,0x00008390)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_9846 != '\0') {
    return;
  }
  deregister_tm_clones();
  completed_9846 = 1;
  return;
}



// WARNING: Removing unreachable block (ram,0x000083ec)

void frame_dummy(void)

{
  register_tm_clones();
  return;
}



undefined4 gcd(undefined4 param_1,int param_2)

{
  undefined4 extraout_r1;
  
  if (param_2 != 0) {
    __aeabi_idivmod(param_1,param_2);
    param_1 = gcd(param_2,extraout_r1);
  }
  return param_1;
}



undefined4 main(void)

{
  return 0;
}



uint __aeabi_idiv(uint param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  
  if (param_2 == 0) {
    bVar6 = (int)param_1 < 0;
    if (0 < (int)param_1) {
      param_1 = 0x7fffffff;
    }
    if (bVar6) {
      param_1 = 0x80000000;
    }
    uVar2 = __aeabi_idiv0(param_1);
    return uVar2;
  }
  uVar5 = param_1 ^ param_2;
  if ((int)param_2 < 0) {
    param_2 = -param_2;
  }
  if (param_2 - 1 == 0) {
    if ((int)(uVar5 ^ param_1) < 0) {
      param_1 = -param_1;
    }
    return param_1;
  }
  uVar4 = param_1;
  if ((int)param_1 < 0) {
    uVar4 = -param_1;
  }
  if (uVar4 <= param_2) {
    if (uVar4 < param_2) {
      param_1 = 0;
    }
    if (uVar4 == param_2) {
      param_1 = (int)uVar5 >> 0x1f | 1;
    }
    return param_1;
  }
  if ((param_2 & param_2 - 1) == 0) {
    iVar1 = count_leading_zeroes(param_2);
    uVar4 = uVar4 >> (0x1fU - iVar1 & 0xff);
    if ((int)uVar5 < 0) {
      uVar4 = -uVar4;
    }
    return uVar4;
  }
  iVar3 = count_leading_zeroes(uVar4);
  iVar1 = count_leading_zeroes(param_2);
  iVar1 = 0x1f - (iVar1 - iVar3);
  if (iVar1 == 0) {
    bVar6 = param_2 << 0x1f <= uVar4;
    if (bVar6) {
      uVar4 = uVar4 + param_2 * -0x80000000;
    }
    bVar7 = param_2 << 0x1e <= uVar4;
    if (bVar7) {
      uVar4 = uVar4 + param_2 * -0x40000000;
    }
    bVar8 = param_2 << 0x1d <= uVar4;
    if (bVar8) {
      uVar4 = uVar4 + param_2 * -0x20000000;
    }
    bVar9 = param_2 << 0x1c <= uVar4;
    if (bVar9) {
      uVar4 = uVar4 + param_2 * -0x10000000;
    }
    bVar10 = param_2 << 0x1b <= uVar4;
    if (bVar10) {
      uVar4 = uVar4 + param_2 * -0x8000000;
    }
    bVar11 = param_2 << 0x1a <= uVar4;
    if (bVar11) {
      uVar4 = uVar4 + param_2 * -0x4000000;
    }
    bVar12 = param_2 << 0x19 <= uVar4;
    if (bVar12) {
      uVar4 = uVar4 + param_2 * -0x2000000;
    }
    bVar13 = param_2 << 0x18 <= uVar4;
    if (bVar13) {
      uVar4 = uVar4 + param_2 * -0x1000000;
    }
    bVar14 = param_2 << 0x17 <= uVar4;
    if (bVar14) {
      uVar4 = uVar4 + param_2 * -0x800000;
    }
    bVar15 = param_2 << 0x16 <= uVar4;
    if (bVar15) {
      uVar4 = uVar4 + param_2 * -0x400000;
    }
    bVar16 = param_2 << 0x15 <= uVar4;
    if (bVar16) {
      uVar4 = uVar4 + param_2 * -0x200000;
    }
    bVar17 = param_2 << 0x14 <= uVar4;
    if (bVar17) {
      uVar4 = uVar4 + param_2 * -0x100000;
    }
    bVar18 = param_2 << 0x13 <= uVar4;
    if (bVar18) {
      uVar4 = uVar4 + param_2 * -0x80000;
    }
    bVar19 = param_2 << 0x12 <= uVar4;
    if (bVar19) {
      uVar4 = uVar4 + param_2 * -0x40000;
    }
    bVar20 = param_2 << 0x11 <= uVar4;
    if (bVar20) {
      uVar4 = uVar4 + param_2 * -0x20000;
    }
    bVar21 = param_2 << 0x10 <= uVar4;
    if (bVar21) {
      uVar4 = uVar4 + param_2 * -0x10000;
    }
    bVar22 = param_2 << 0xf <= uVar4;
    if (bVar22) {
      uVar4 = uVar4 + param_2 * -0x8000;
    }
    bVar23 = param_2 << 0xe <= uVar4;
    if (bVar23) {
      uVar4 = uVar4 + param_2 * -0x4000;
    }
    bVar24 = param_2 << 0xd <= uVar4;
    if (bVar24) {
      uVar4 = uVar4 + param_2 * -0x2000;
    }
    bVar25 = param_2 << 0xc <= uVar4;
    if (bVar25) {
      uVar4 = uVar4 + param_2 * -0x1000;
    }
    bVar26 = param_2 << 0xb <= uVar4;
    if (bVar26) {
      uVar4 = uVar4 + param_2 * -0x800;
    }
    bVar27 = param_2 << 10 <= uVar4;
    if (bVar27) {
      uVar4 = uVar4 + param_2 * -0x400;
    }
    bVar28 = param_2 << 9 <= uVar4;
    if (bVar28) {
      uVar4 = uVar4 + param_2 * -0x200;
    }
    bVar29 = param_2 << 8 <= uVar4;
    if (bVar29) {
      uVar4 = uVar4 + param_2 * -0x100;
    }
    bVar30 = param_2 << 7 <= uVar4;
    if (bVar30) {
      uVar4 = uVar4 + param_2 * -0x80;
    }
    bVar31 = param_2 << 6 <= uVar4;
    if (bVar31) {
      uVar4 = uVar4 + param_2 * -0x40;
    }
    bVar32 = param_2 << 5 <= uVar4;
    if (bVar32) {
      uVar4 = uVar4 + param_2 * -0x20;
    }
    bVar33 = param_2 << 4 <= uVar4;
    if (bVar33) {
      uVar4 = uVar4 + param_2 * -0x10;
    }
    bVar34 = param_2 << 3 <= uVar4;
    if (bVar34) {
      uVar4 = uVar4 + param_2 * -8;
    }
    bVar35 = param_2 << 2 <= uVar4;
    if (bVar35) {
      uVar4 = uVar4 + param_2 * -4;
    }
    bVar36 = param_2 << 1 <= uVar4;
    if (bVar36) {
      uVar4 = uVar4 + param_2 * -2;
    }
    iVar1 = (((((((((((((((((((((((((((((((uint)bVar6 * 2 + (uint)bVar7) * 2 + (uint)bVar8) * 2 +
                                       (uint)bVar9) * 2 + (uint)bVar10) * 2 + (uint)bVar11) * 2 +
                                    (uint)bVar12) * 2 + (uint)bVar13) * 2 + (uint)bVar14) * 2 +
                                 (uint)bVar15) * 2 + (uint)bVar16) * 2 + (uint)bVar17) * 2 +
                              (uint)bVar18) * 2 + (uint)bVar19) * 2 + (uint)bVar20) * 2 +
                           (uint)bVar21) * 2 + (uint)bVar22) * 2 + (uint)bVar23) * 2 + (uint)bVar24)
                        * 2 + (uint)bVar25) * 2 + (uint)bVar26) * 2 + (uint)bVar27) * 2 +
                    (uint)bVar28) * 2 + (uint)bVar29) * 2 + (uint)bVar30) * 2 + (uint)bVar31) * 2 +
                (uint)bVar32) * 2 + (uint)bVar33) * 2 + (uint)bVar34) * 2 + (uint)bVar35) * 2 +
            (uint)bVar36) * 2 + (uint)(param_2 <= uVar4);
    if ((int)uVar5 < 0) {
      iVar1 = -iVar1;
    }
    return iVar1;
  }
                    // WARNING: Could not recover jumptable at 0x000084b0. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar2 = (*(code *)(iVar1 * 0xc + 0x84b8))();
  return uVar2;
}



// divsi3_skip_div0_test

uint divsi3_skip_div0_test(uint param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool in_NG;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  
  uVar5 = param_1 ^ param_2;
  if (in_NG) {
    param_2 = -param_2;
  }
  if (param_2 - 1 == 0) {
    if ((int)(uVar5 ^ param_1) < 0) {
      param_1 = -param_1;
    }
    return param_1;
  }
  uVar4 = param_1;
  if ((int)param_1 < 0) {
    uVar4 = -param_1;
  }
  if (uVar4 <= param_2) {
    if (uVar4 < param_2) {
      param_1 = 0;
    }
    if (uVar4 == param_2) {
      param_1 = (int)uVar5 >> 0x1f | 1;
    }
    return param_1;
  }
  if ((param_2 & param_2 - 1) == 0) {
    iVar1 = count_leading_zeroes(param_2);
    uVar4 = uVar4 >> (0x1fU - iVar1 & 0xff);
    if ((int)uVar5 < 0) {
      uVar4 = -uVar4;
    }
    return uVar4;
  }
  iVar3 = count_leading_zeroes(uVar4);
  iVar1 = count_leading_zeroes(param_2);
  iVar1 = 0x1f - (iVar1 - iVar3);
  if (iVar1 == 0) {
    bVar6 = param_2 << 0x1f <= uVar4;
    if (bVar6) {
      uVar4 = uVar4 + param_2 * -0x80000000;
    }
    bVar7 = param_2 << 0x1e <= uVar4;
    if (bVar7) {
      uVar4 = uVar4 + param_2 * -0x40000000;
    }
    bVar8 = param_2 << 0x1d <= uVar4;
    if (bVar8) {
      uVar4 = uVar4 + param_2 * -0x20000000;
    }
    bVar9 = param_2 << 0x1c <= uVar4;
    if (bVar9) {
      uVar4 = uVar4 + param_2 * -0x10000000;
    }
    bVar10 = param_2 << 0x1b <= uVar4;
    if (bVar10) {
      uVar4 = uVar4 + param_2 * -0x8000000;
    }
    bVar11 = param_2 << 0x1a <= uVar4;
    if (bVar11) {
      uVar4 = uVar4 + param_2 * -0x4000000;
    }
    bVar12 = param_2 << 0x19 <= uVar4;
    if (bVar12) {
      uVar4 = uVar4 + param_2 * -0x2000000;
    }
    bVar13 = param_2 << 0x18 <= uVar4;
    if (bVar13) {
      uVar4 = uVar4 + param_2 * -0x1000000;
    }
    bVar14 = param_2 << 0x17 <= uVar4;
    if (bVar14) {
      uVar4 = uVar4 + param_2 * -0x800000;
    }
    bVar15 = param_2 << 0x16 <= uVar4;
    if (bVar15) {
      uVar4 = uVar4 + param_2 * -0x400000;
    }
    bVar16 = param_2 << 0x15 <= uVar4;
    if (bVar16) {
      uVar4 = uVar4 + param_2 * -0x200000;
    }
    bVar17 = param_2 << 0x14 <= uVar4;
    if (bVar17) {
      uVar4 = uVar4 + param_2 * -0x100000;
    }
    bVar18 = param_2 << 0x13 <= uVar4;
    if (bVar18) {
      uVar4 = uVar4 + param_2 * -0x80000;
    }
    bVar19 = param_2 << 0x12 <= uVar4;
    if (bVar19) {
      uVar4 = uVar4 + param_2 * -0x40000;
    }
    bVar20 = param_2 << 0x11 <= uVar4;
    if (bVar20) {
      uVar4 = uVar4 + param_2 * -0x20000;
    }
    bVar21 = param_2 << 0x10 <= uVar4;
    if (bVar21) {
      uVar4 = uVar4 + param_2 * -0x10000;
    }
    bVar22 = param_2 << 0xf <= uVar4;
    if (bVar22) {
      uVar4 = uVar4 + param_2 * -0x8000;
    }
    bVar23 = param_2 << 0xe <= uVar4;
    if (bVar23) {
      uVar4 = uVar4 + param_2 * -0x4000;
    }
    bVar24 = param_2 << 0xd <= uVar4;
    if (bVar24) {
      uVar4 = uVar4 + param_2 * -0x2000;
    }
    bVar25 = param_2 << 0xc <= uVar4;
    if (bVar25) {
      uVar4 = uVar4 + param_2 * -0x1000;
    }
    bVar26 = param_2 << 0xb <= uVar4;
    if (bVar26) {
      uVar4 = uVar4 + param_2 * -0x800;
    }
    bVar27 = param_2 << 10 <= uVar4;
    if (bVar27) {
      uVar4 = uVar4 + param_2 * -0x400;
    }
    bVar28 = param_2 << 9 <= uVar4;
    if (bVar28) {
      uVar4 = uVar4 + param_2 * -0x200;
    }
    bVar29 = param_2 << 8 <= uVar4;
    if (bVar29) {
      uVar4 = uVar4 + param_2 * -0x100;
    }
    bVar30 = param_2 << 7 <= uVar4;
    if (bVar30) {
      uVar4 = uVar4 + param_2 * -0x80;
    }
    bVar31 = param_2 << 6 <= uVar4;
    if (bVar31) {
      uVar4 = uVar4 + param_2 * -0x40;
    }
    bVar32 = param_2 << 5 <= uVar4;
    if (bVar32) {
      uVar4 = uVar4 + param_2 * -0x20;
    }
    bVar33 = param_2 << 4 <= uVar4;
    if (bVar33) {
      uVar4 = uVar4 + param_2 * -0x10;
    }
    bVar34 = param_2 << 3 <= uVar4;
    if (bVar34) {
      uVar4 = uVar4 + param_2 * -8;
    }
    bVar35 = param_2 << 2 <= uVar4;
    if (bVar35) {
      uVar4 = uVar4 + param_2 * -4;
    }
    bVar36 = param_2 << 1 <= uVar4;
    if (bVar36) {
      uVar4 = uVar4 + param_2 * -2;
    }
    iVar1 = (((((((((((((((((((((((((((((((uint)bVar6 * 2 + (uint)bVar7) * 2 + (uint)bVar8) * 2 +
                                       (uint)bVar9) * 2 + (uint)bVar10) * 2 + (uint)bVar11) * 2 +
                                    (uint)bVar12) * 2 + (uint)bVar13) * 2 + (uint)bVar14) * 2 +
                                 (uint)bVar15) * 2 + (uint)bVar16) * 2 + (uint)bVar17) * 2 +
                              (uint)bVar18) * 2 + (uint)bVar19) * 2 + (uint)bVar20) * 2 +
                           (uint)bVar21) * 2 + (uint)bVar22) * 2 + (uint)bVar23) * 2 + (uint)bVar24)
                        * 2 + (uint)bVar25) * 2 + (uint)bVar26) * 2 + (uint)bVar27) * 2 +
                    (uint)bVar28) * 2 + (uint)bVar29) * 2 + (uint)bVar30) * 2 + (uint)bVar31) * 2 +
                (uint)bVar32) * 2 + (uint)bVar33) * 2 + (uint)bVar34) * 2 + (uint)bVar35) * 2 +
            (uint)bVar36) * 2 + (uint)(param_2 <= uVar4);
    if ((int)uVar5 < 0) {
      iVar1 = -iVar1;
    }
    return iVar1;
  }
                    // WARNING: Could not recover jumptable at 0x000084b0. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar2 = (*(code *)(iVar1 * 0xc + 0x84b8))();
  return uVar2;
}



void __aeabi_idivmod(int param_1,int param_2)

{
  bool bVar1;
  
  if (param_2 != 0) {
    divsi3_skip_div0_test();
    return;
  }
  bVar1 = param_1 < 0;
  if (0 < param_1) {
    param_1 = 0x7fffffff;
  }
  if (bVar1) {
    param_1 = -0x80000000;
  }
  __aeabi_idiv0(param_1);
  return;
}



void __aeabi_idiv0(void)

{
  raise(8);
  return;
}



// WARNING: Removing unreachable block (ram,0x000086e4)

void __libc_csu_init(EVP_PKEY_CTX *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code **ppcVar1;
  int iVar2;
  
  _init(param_1);
  iVar2 = 0;
  do {
    ppcVar1 = (code **)(&__frame_dummy_init_array_entry + iVar2);
    iVar2 = iVar2 + 1;
    (**ppcVar1)(param_1,param_2,param_3,*ppcVar1,param_4);
  } while (iVar2 != 1);
  return;
}



void __libc_csu_fini(void)

{
  return;
}



void _fini(void)

{
  return;
}


