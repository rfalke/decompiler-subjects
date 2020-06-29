typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
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

typedef struct Elf32_Dyn_x86 Elf32_Dyn_x86, *PElf32_Dyn_x86;

typedef enum Elf32_DynTag_x86 {
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
} Elf32_DynTag_x86;

struct Elf32_Dyn_x86 {
    enum Elf32_DynTag_x86 d_tag;
    dword d_val;
};

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

typedef enum Elf_SectionHeaderType_x86 {
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
} Elf_SectionHeaderType_x86;

struct Elf32_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_x86 sh_type;
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

typedef enum Elf_ProgramHeaderType_x86 {
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
} Elf_ProgramHeaderType_x86;

struct Elf32_Phdr {
    enum Elf_ProgramHeaderType_x86 p_type;
    dword p_offset;
    dword p_vaddr;
    dword p_paddr;
    dword p_filesz;
    dword p_memsz;
    dword p_flags;
    dword p_align;
};

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
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




// WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_080482f0(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = putchar(__c);
  return iVar1;
}



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



int main(int param_1,char **param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = param_1 >> 0x1f;
  iVar1 = basic_1_ternary_simple(param_1);
  iVar2 = basic_2_ternary_other(param_1);
  iVar3 = intermediate_1_ternary_blocks(param_1);
  iVar4 = intermediate_2_other_in_blocks(param_1);
  iVar5 = intermediate_10_double_word_signed_math(param_1,iVar7,param_1,iVar7,param_1,iVar7);
  iVar7 = intermediate_10_double_word_unsigned_math(param_1,iVar7,param_1,iVar7,param_1,iVar7);
  iVar6 = advanced_1_unrolled_loop();
  return (int)**param_2 + iVar1 + iVar2 + iVar3 + iVar4 + iVar5 + iVar7 + iVar6;
}



void _start(void)

{
  __libc_start_main(main);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: This is an inlined function

void __x86_get_pc_thunk_bx(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0804840f)
// WARNING: Removing unreachable block (ram,0x08048418)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x08048448)
// WARNING: Removing unreachable block (ram,0x08048451)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_6532 == '\0') {
    deregister_tm_clones();
    completed_6532 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x080484a9)

void frame_dummy(void)

{
  register_tm_clones();
  return;
}



uint basic_1_ternary_simple(int param_1)

{
  return (uint)(param_1 != 0x2a);
}



undefined4 basic_2_ternary_other(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 100;
  if (param_1 != 0x2a) {
    uVar1 = 0xc9;
  }
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x08048650)

undefined4
intermediate_10_double_word_signed_math
          (uint param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = param_4 + param_2 + (uint)CARRY4(param_3,param_1);
  if (param_6 <= iVar1) {
    if (param_6 < iVar1) {
      puts("add");
    }
    else {
      if (param_5 < param_3 + param_1) {
        puts("add");
      }
    }
  }
  iVar1 = (param_2 - param_4) - (uint)(param_1 < param_3);
  if (param_6 <= iVar1) {
    if (param_6 < iVar1) {
      puts("sub");
    }
    else {
      if (param_5 < param_1 - param_3) {
        puts("sub");
      }
    }
  }
  iVar1 = (int)((ulonglong)param_3 * (ulonglong)param_1 >> 0x20) +
          param_3 * param_2 + param_4 * param_1;
  if (param_6 <= iVar1) {
    if (param_6 < iVar1) {
      puts("mult");
    }
    else {
      if (param_5 < (uint)((ulonglong)param_3 * (ulonglong)param_1)) {
        puts("mult");
      }
    }
  }
  lVar2 = __divdi3(param_1,param_2,param_3,param_4);
  if (CONCAT44(param_6,param_5) < lVar2) {
    puts("diff");
  }
  lVar2 = __moddi3(param_1,param_2,param_3,param_4);
  if (lVar2 != CONCAT44(param_6,param_5)) {
    return 0;
  }
  puts("modulo");
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080487e0)

undefined4
intermediate_10_double_word_unsigned_math
          (uint param_1,int param_2,uint param_3,int param_4,uint param_5,uint param_6)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = param_4 + param_2 + (uint)CARRY4(param_3,param_1);
  if (param_6 <= uVar1) {
    if (param_6 < uVar1) {
      puts("add");
    }
    else {
      if (param_5 < param_3 + param_1) {
        puts("add");
      }
    }
  }
  uVar1 = (param_2 - param_4) - (uint)(param_1 < param_3);
  if (param_6 <= uVar1) {
    if (param_6 < uVar1) {
      puts("sub");
    }
    else {
      if (param_5 < param_1 - param_3) {
        puts("sub");
      }
    }
  }
  uVar1 = (int)((ulonglong)param_3 * (ulonglong)param_1 >> 0x20) +
          param_3 * param_2 + param_4 * param_1;
  if (param_6 <= uVar1) {
    if (param_6 < uVar1) {
      puts("mult");
    }
    else {
      if (param_5 < (uint)((ulonglong)param_3 * (ulonglong)param_1)) {
        puts("mult");
      }
    }
  }
  uVar2 = __udivdi3(param_1,param_2,param_3,param_4);
  if (CONCAT44(param_6,param_5) < uVar2) {
    puts("diff");
  }
  uVar2 = __umoddi3(param_1,param_2,param_3,param_4);
  if (uVar2 != CONCAT44(param_6,param_5)) {
    return 0;
  }
  puts("modulo");
  return 0;
}



undefined4 advanced_1_unrolled_loop(void)

{
  int __c;
  int __c_00;
  
  puts("basic");
  __c_00 = 0x30;
  do {
    __c = __c_00 + 1;
    putchar(__c_00);
    __c_00 = __c;
  } while (__c != 0x3a);
  __c_00 = 0x30;
  puts("partial unrolled");
  do {
    putchar(__c_00);
    __c = __c_00 + 1;
    __c_00 = __c_00 + 2;
    putchar(__c);
  } while (__c_00 != 0x3a);
  puts("fully unrolled");
  putchar(0x30);
  putchar(0x31);
  putchar(0x32);
  putchar(0x33);
  putchar(0x34);
  putchar(0x35);
  putchar(0x36);
  putchar(0x37);
  putchar(0x38);
  putchar(0x39);
  return 0;
}



uint intermediate_1_ternary_blocks(int param_1)

{
  return (uint)(param_1 != 0x2a);
}



undefined4 intermediate_2_other_in_blocks(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0x2a) {
    uVar1 = 100;
  }
  else {
    uVar1 = 0xc9;
  }
  return uVar1;
}



undefined8 __divdi3(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  local_24 = 0;
  local_28 = param_4;
  local_2c = param_3;
  if ((int)param_2 < 0) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    local_24 = 0xffffffff;
    param_2 = -(param_2 + bVar10);
  }
  if ((int)param_4 < 0) {
    local_2c = -param_3;
    local_24 = ~local_24;
    local_28 = -(param_4 + (param_3 != 0));
  }
  if (local_28 == 0) {
    if (param_2 < local_2c) {
      iVar6 = (int)(CONCAT44(param_2,param_1) / (ulonglong)local_2c);
      uVar9 = 0;
    }
    else {
      if (local_2c == 0) {
        local_2c = (uint)(1 / 0);
      }
      uVar9 = param_2 / local_2c;
      iVar6 = (int)(((ulonglong)param_2 % (ulonglong)local_2c << 0x20 | (ulonglong)param_1) /
                   (ulonglong)local_2c);
    }
  }
  else {
    if (param_2 < local_28) {
      uVar9 = 0;
      iVar6 = 0;
    }
    else {
      uVar9 = 0x1f;
      if (local_28 != 0) {
        while (local_28 >> uVar9 == 0) {
          uVar9 = uVar9 - 1;
        }
      }
      uVar9 = uVar9 ^ 0x1f;
      if (uVar9 == 0) {
        if ((local_28 < param_2) || (iVar6 = 0, local_2c <= param_1)) {
          iVar6 = 1;
        }
      }
      else {
        bVar5 = (byte)uVar9;
        bVar7 = 0x20 - bVar5;
        uVar1 = (ulonglong)(local_2c >> (bVar7 & 0x1f) | local_28 << (bVar5 & 0x1f));
        uVar2 = CONCAT44(param_2 >> (bVar7 & 0x1f),
                         param_2 << (bVar5 & 0x1f) | param_1 >> (bVar7 & 0x1f));
        uVar3 = uVar2 / uVar1;
        iVar6 = (int)uVar3;
        uVar9 = (uint)(uVar2 % uVar1);
        lVar4 = (uVar3 & 0xffffffff) * (ulonglong)(local_2c << (bVar5 & 0x1f));
        uVar8 = (uint)((ulonglong)lVar4 >> 0x20);
        if ((uVar9 < uVar8) || ((param_1 << (bVar5 & 0x1f) < (uint)lVar4 && (uVar9 == uVar8)))) {
          iVar6 = iVar6 + -1;
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
        }
      }
    }
  }
  if (local_24 != 0) {
    bVar10 = iVar6 != 0;
    iVar6 = -iVar6;
    uVar9 = -(uVar9 + bVar10);
  }
  return CONCAT44(uVar9,iVar6);
}



undefined8 __moddi3(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint local_3c;
  uint local_38;
  int local_30;
  
  local_30 = 0;
  local_3c = param_3;
  local_38 = param_4;
  if ((int)param_2 < 0) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    local_30 = -1;
    param_2 = -(param_2 + bVar10);
  }
  if ((int)param_4 < 0) {
    local_3c = -param_3;
    local_38 = -(param_4 + (param_3 != 0));
  }
  if (local_38 == 0) {
    if (param_2 < local_3c) {
      local_3c = (uint)(CONCAT44(param_2,param_1) % (ulonglong)local_3c);
    }
    else {
      if (local_3c == 0) {
        local_3c = (uint)(1 / 0);
      }
      local_3c = (uint)(((ulonglong)param_2 % (ulonglong)local_3c << 0x20 | (ulonglong)param_1) %
                       (ulonglong)local_3c);
    }
    param_2 = 0;
    param_1 = local_3c;
  }
  else {
    if (local_38 <= param_2) {
      uVar4 = 0x1f;
      if (local_38 != 0) {
        while (local_38 >> uVar4 == 0) {
          uVar4 = uVar4 - 1;
        }
      }
      if ((uVar4 ^ 0x1f) == 0) {
        if ((local_38 < param_2) || (local_3c <= param_1)) {
          bVar10 = param_1 < local_3c;
          param_1 = param_1 - local_3c;
          param_2 = (param_2 - local_38) - (uint)bVar10;
        }
      }
      else {
        bVar3 = (byte)(uVar4 ^ 0x1f);
        bVar6 = 0x20 - bVar3;
        uVar7 = local_3c >> (bVar6 & 0x1f) | local_38 << (bVar3 & 0x1f);
        local_3c = local_3c << (bVar3 & 0x1f);
        uVar4 = param_1 << (bVar3 & 0x1f);
        uVar1 = CONCAT44(param_2 >> (bVar6 & 0x1f),
                         param_2 << (bVar3 & 0x1f) | param_1 >> (bVar6 & 0x1f));
        uVar8 = (uint)(uVar1 % (ulonglong)uVar7);
        lVar2 = (uVar1 / (ulonglong)uVar7 & 0xffffffff) * (ulonglong)local_3c;
        uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
        uVar5 = (uint)lVar2;
        if ((uVar8 < uVar9) || ((uVar8 == uVar9 && (uVar4 < uVar5)))) {
          bVar10 = uVar5 < local_3c;
          uVar5 = uVar5 - local_3c;
          uVar9 = (uVar9 - uVar7) - (uint)bVar10;
        }
        param_2 = (uVar8 - uVar9) - (uint)(uVar4 < uVar5);
        param_1 = param_2 << (bVar6 & 0x1f) | uVar4 - uVar5 >> (bVar3 & 0x1f);
        param_2 = param_2 >> (bVar3 & 0x1f);
      }
    }
  }
  if (local_30 != 0) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(param_2 + bVar10);
  }
  return CONCAT44(param_2,param_1);
}



ulonglong __udivdi3(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  
  if (param_4 == 0) {
    if (param_2 < param_3) {
      return CONCAT44(param_2,param_1) / (ulonglong)param_3 & 0xffffffff;
    }
    if (param_3 == 0) {
      param_3 = (uint)(1 / 0);
    }
    uVar6 = param_2 / param_3;
    uVar7 = (undefined4)
            (((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
            (ulonglong)param_3);
  }
  else {
    if (param_2 < param_4) {
      return 0;
    }
    uVar6 = 0x1f;
    if (param_4 != 0) {
      while (param_4 >> uVar6 == 0) {
        uVar6 = uVar6 - 1;
      }
    }
    uVar6 = uVar6 ^ 0x1f;
    if (uVar6 != 0) {
      bVar5 = (byte)uVar6;
      bVar8 = 0x20 - bVar5;
      uVar1 = (ulonglong)(param_4 << (bVar5 & 0x1f) | param_3 >> (bVar8 & 0x1f));
      uVar2 = CONCAT44(param_2 >> (bVar8 & 0x1f),
                       param_2 << (bVar5 & 0x1f) | param_1 >> (bVar8 & 0x1f));
      uVar3 = uVar2 / uVar1;
      uVar6 = (uint)uVar3;
      uVar9 = (uint)(uVar2 % uVar1);
      lVar4 = (uVar3 & 0xffffffff) * (ulonglong)(param_3 << (bVar5 & 0x1f));
      uVar10 = (uint)((ulonglong)lVar4 >> 0x20);
      if ((uVar9 < uVar10) || ((param_1 << (bVar5 & 0x1f) < (uint)lVar4 && (uVar9 == uVar10)))) {
        uVar6 = uVar6 - 1;
      }
      return (ulonglong)uVar6;
    }
    if ((param_4 < param_2) || (uVar7 = 0, param_3 <= param_1)) {
      uVar7 = 1;
    }
  }
  return CONCAT44(uVar6,uVar7);
}



ulonglong __umoddi3(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  uint local_28;
  
  local_28 = param_1;
  if (param_4 == 0) {
    if (param_2 < param_3) {
      uVar5 = (uint)(CONCAT44(param_2,param_1) % (ulonglong)param_3);
    }
    else {
      if (param_3 == 0) {
        param_3 = (uint)(1 / 0);
      }
      uVar5 = (uint)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                    (ulonglong)param_3);
    }
    return (ulonglong)uVar5;
  }
  if (param_4 <= param_2) {
    uVar5 = 0x1f;
    if (param_4 != 0) {
      while (param_4 >> uVar5 == 0) {
        uVar5 = uVar5 - 1;
      }
    }
    if ((uVar5 ^ 0x1f) == 0) {
      if ((param_4 < param_2) || (param_3 <= param_1)) {
        local_28 = param_1 - param_3;
        param_2 = (param_2 - param_4) - (uint)(param_1 < param_3);
      }
      return CONCAT44(param_2,local_28);
    }
    bVar3 = (byte)(uVar5 ^ 0x1f);
    bVar4 = 0x20 - bVar3;
    uVar6 = param_3 >> (bVar4 & 0x1f) | param_4 << (bVar3 & 0x1f);
    param_3 = param_3 << (bVar3 & 0x1f);
    uVar1 = CONCAT44(param_2 >> (bVar4 & 0x1f),param_1 >> (bVar4 & 0x1f) | param_2 << (bVar3 & 0x1f)
                    );
    uVar7 = (uint)(uVar1 % (ulonglong)uVar6);
    param_1 = param_1 << (bVar3 & 0x1f);
    lVar2 = (uVar1 / (ulonglong)uVar6 & 0xffffffff) * (ulonglong)param_3;
    uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar5 = (uint)lVar2;
    if ((uVar7 < uVar8) || ((uVar7 == uVar8 && (param_1 < uVar5)))) {
      bVar9 = uVar5 < param_3;
      uVar5 = uVar5 - param_3;
      uVar8 = (uVar8 - uVar6) - (uint)bVar9;
    }
    uVar8 = (uVar7 - uVar8) - (uint)(param_1 < uVar5);
    return CONCAT44(uVar8 >> (bVar3 & 0x1f),
                    uVar8 << (bVar4 & 0x1f) | param_1 - uVar5 >> (bVar3 & 0x1f));
  }
  return CONCAT44(param_2,param_1);
}



// WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void __libc_csu_init(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  EVP_PKEY_CTX *in_stack_ffffffe4;
  
  _init(in_stack_ffffffe4);
  iVar1 = 0;
  do {
    (*(code *)(&__frame_dummy_init_array_entry)[iVar1])(param_1,param_2,param_3);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 1);
  return;
}



void __libc_csu_fini(void)

{
  return;
}



// WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void _fini(void)

{
  return;
}


