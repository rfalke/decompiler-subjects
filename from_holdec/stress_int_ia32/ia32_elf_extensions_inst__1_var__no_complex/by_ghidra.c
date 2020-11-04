typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned int    uint;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined5;
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

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
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

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
};

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

typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

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



void FUN_08049030(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void __assert_fail(char *__assertion,char *__file,uint __line,char *__function)

{
                    // WARNING: Subroutine does not return
  __assert_fail(__assertion,__file,__line,__function);
}



undefined4 main(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  
  iVar1 = inst_0_values_var_0(&stack0x00000004);
  iVar2 = inst_0_flags_var_0();
  iVar3 = inst_1_values_var_0();
  iVar4 = inst_1_flags_var_0();
  iVar5 = inst_2_values_var_0();
  iVar6 = inst_2_flags_var_0();
  iVar7 = inst_3_values_var_0();
  iVar8 = inst_3_flags_var_0();
  iVar9 = inst_4_values_var_0();
  iVar10 = inst_4_flags_var_0();
  iVar11 = inst_5_values_var_0();
  iVar12 = inst_5_flags_var_0();
  iVar13 = inst_6_values_var_0();
  iVar14 = inst_6_flags_var_0();
  iVar15 = inst_7_values_var_0();
  iVar16 = inst_7_flags_var_0();
  iVar17 = inst_8_values_var_0();
  iVar18 = inst_8_flags_var_0();
  iVar19 = inst_9_values_var_0();
  iVar20 = inst_9_flags_var_0();
  iVar21 = inst_10_values_var_0();
  iVar22 = inst_10_flags_var_0();
  iVar23 = inst_11_values_var_0();
  iVar24 = inst_11_flags_var_0();
  iVar25 = inst_12_values_var_0();
  iVar26 = inst_12_flags_var_0();
  iVar27 = inst_13_values_var_0();
  iVar28 = inst_13_flags_var_0();
  iVar29 = inst_14_values_var_0();
  iVar30 = inst_14_flags_var_0();
  iVar31 = inst_15_values_var_0();
  iVar32 = inst_15_flags_var_0();
  iVar33 = inst_16_values_var_0();
  iVar34 = inst_16_flags_var_0();
  iVar35 = inst_17_values_var_0();
  iVar36 = inst_17_flags_var_0();
  iVar37 = inst_18_values_var_0();
  iVar38 = inst_18_flags_var_0();
  iVar39 = inst_19_values_var_0();
  iVar40 = inst_19_flags_var_0();
  iVar41 = inst_20_values_var_0();
  iVar42 = inst_20_flags_var_0();
  iVar43 = inst_21_values_var_0();
  iVar44 = inst_21_flags_var_0();
  if (iVar1 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
      iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + iVar19 + iVar20 + iVar21 +
      iVar22 + iVar23 + iVar24 + iVar25 + iVar26 + iVar27 + iVar28 + iVar29 + iVar30 + iVar31 +
      iVar32 + iVar33 + iVar34 + iVar35 + iVar36 + iVar37 + iVar38 + iVar39 + iVar40 + iVar41 +
      iVar42 + iVar43 + iVar44 == 0) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  __assert_fail("sum==0","source_extensions_inst__1_var__no_complex.c",99,
                (char *)&__PRETTY_FUNCTION___2138);
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void _start(void)

{
  __libc_start_main(main);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: This is an inlined function

void __i686_get_pc_thunk_bx(void)

{
  return;
}



int _annobin_init_c(void *param_1,void *param_2)

{
  int in_EAX;
  
  return in_EAX;
}



int _dl_relocate_static_pie(void *param_1,void *param_2)

{
  int in_EAX;
  
  return in_EAX;
}



// WARNING: This is an inlined function

void __x86_get_pc_thunk_bx(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0804923c)
// WARNING: Removing unreachable block (ram,0x08049245)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x08049288)
// WARNING: Removing unreachable block (ram,0x08049291)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_6844 == '\0') {
    deregister_tm_clones();
    completed_6844 = 1;
    return;
  }
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



int inst_0_values_var_0(void)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0xa687;
  while ((uVar2 & 1) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000;
  }
  return CONCAT22(0x7671,sVar1) + -0x76710000;
}



// WARNING: Removing unreachable block (ram,0x08049368)

undefined4 inst_0_flags_var_0(void)

{
  ushort uVar1;
  
  uVar1 = 0x10ef;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x8000;
  }
  return 0;
}



int inst_1_values_var_0(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0x7ec2ad4f;
  while ((uVar2 & 1) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x80000000;
  }
  return iVar1;
}



uint inst_1_flags_var_0(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0x1e23872e;
  while ((uVar2 & 1) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x80000000;
  }
  return (uint)(iVar1 == 0);
}



undefined4 inst_2_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080494c4)
// WARNING: Removing unreachable block (ram,0x080494d1)

undefined4 inst_2_flags_var_0(void)

{
  return 0;
}



undefined4 inst_3_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08049590)
// WARNING: Removing unreachable block (ram,0x080495a2)

undefined4 inst_3_flags_var_0(void)

{
  return 0;
}



undefined4 inst_4_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804964f)
// WARNING: Removing unreachable block (ram,0x08049642)
// WARNING: Removing unreachable block (ram,0x08049661)

undefined4 inst_4_flags_var_0(void)

{
  return 0;
}



undefined4 inst_5_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08049701)
// WARNING: Removing unreachable block (ram,0x0804970e)

undefined4 inst_5_flags_var_0(void)

{
  return 0;
}



undefined4 inst_6_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080497c0)
// WARNING: Removing unreachable block (ram,0x080497cd)

undefined4 inst_6_flags_var_0(void)

{
  return 0;
}



undefined4 inst_7_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08049884)
// WARNING: Removing unreachable block (ram,0x08049877)
// WARNING: Removing unreachable block (ram,0x08049896)

undefined4 inst_7_flags_var_0(void)

{
  return 0;
}



undefined4 inst_8_values_var_0(void)

{
  return 0;
}



undefined4 inst_8_flags_var_0(void)

{
  return 0;
}



int inst_9_values_var_0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0xa450cc76;
  uVar2 = 1;
  uVar3 = 0;
  do {
    if ((uVar2 & 0x22f8497a) != 0) {
      uVar3 = uVar3 | (uVar2 & 0x22f8497a) * (uVar1 & 1);
      uVar1 = uVar1 >> 1;
    }
    uVar2 = uVar2 << 1;
  } while (uVar2 != 0);
  return uVar3 + 0xdf9ff6a8;
}



undefined4 inst_9_flags_var_0(void)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    iVar1 = iVar1 << 1;
  } while (iVar1 != 0);
  return 0;
}



int inst_10_values_var_0(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x80000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0xd3037da7) != 0) {
      uVar2 = uVar2 << 1 | (uint)((uVar1 & 0x10032007) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return uVar2 - 0x9a07;
}



undefined4 inst_10_flags_var_0(void)

{
  uint uVar1;
  
  uVar1 = 0x80000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return 0;
}



undefined4 inst_11_values_var_0(void)

{
  return 0;
}



undefined4 inst_11_flags_var_0(void)

{
  return 0;
}



undefined4 inst_12_values_var_0(void)

{
  return 0;
}



undefined4 inst_12_flags_var_0(void)

{
  return 0;
}



undefined4 inst_13_values_var_0(void)

{
  return 0;
}



undefined4 inst_13_flags_var_0(void)

{
  return 0;
}



undefined4 inst_14_values_var_0(void)

{
  return 0;
}



undefined4 inst_14_flags_var_0(void)

{
  return 0;
}



undefined4 inst_15_values_var_0(void)

{
  return 0;
}



undefined4 inst_15_flags_var_0(void)

{
  return 0;
}



undefined4 inst_16_values_var_0(void)

{
  return 0;
}



undefined4 inst_16_flags_var_0(void)

{
  return 0;
}



int inst_17_values_var_0(void)

{
  int iVar1;
  
  iVar1 = crc32(0x5150fd0b,0x7e);
  return iVar1 + -0x443810ec;
}



undefined4 inst_17_flags_var_0(void)

{
  crc32(0xfdbcb09b,0x86);
  return 0;
}



int inst_18_values_var_0(void)

{
  int iVar1;
  
  iVar1 = crc32(0xd47780c8,0x7b6e);
  return iVar1 + 0x789fa710;
}



undefined4 inst_18_flags_var_0(void)

{
  crc32(0x29377067,0x91a5);
  return 0;
}



undefined4 inst_19_values_var_0(void)

{
  undefined4 uVar1;
  
  uVar1 = crc32(0x4d66da30,0x4d66da30);
  return uVar1;
}



undefined4 inst_19_flags_var_0(void)

{
  crc32(0xa74abfc3,0x3a94ac66);
  return 0;
}



int inst_20_values_var_0(void)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0xe79e;
  while ((uVar2 & 0x8000) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT22(0xee18,sVar1) + 0x11e80000;
}



undefined4 inst_20_flags_var_0(void)

{
  ushort uVar1;
  
  uVar1 = 0xe3de;
  while ((uVar1 & 0x8000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return 0;
}



int inst_21_values_var_0(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0xadb8145d;
  while ((uVar2 & 0x80000000) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return iVar1;
}



undefined4 inst_21_flags_var_0(void)

{
  uint uVar1;
  
  uVar1 = 0xc6df14c9;
  while ((uVar1 & 0x80000000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return 0;
}



// WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int __libc_csu_init(void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  EVP_PKEY_CTX *in_stack_ffffffe4;
  
  _init(in_stack_ffffffe4);
  iVar2 = 0;
  do {
    iVar1 = (*(code *)(&__frame_dummy_init_array_entry)[iVar2])(param_1,param_2);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 1);
  return iVar1;
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


