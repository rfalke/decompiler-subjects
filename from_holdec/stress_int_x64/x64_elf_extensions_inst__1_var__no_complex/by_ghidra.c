typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned int    uint;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined5;
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

typedef enum Elf64_DynTag {
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
} Elf64_DynTag;

typedef enum Elf_ProgramHeaderType {
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
} Elf_ProgramHeaderType;

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef struct Elf64_Dyn Elf64_Dyn, *PElf64_Dyn;

struct Elf64_Dyn {
    enum Elf64_DynTag d_tag;
    qword d_val;
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType {
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
} Elf_SectionHeaderType;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType sh_type;
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

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_pad[9];
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
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_00401020(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void __assert_fail(char *__assertion,char *__file,uint __line,char *__function)

{
                    // WARNING: Subroutine does not return
  __assert_fail(__assertion,__file,__line,__function);
}



undefined8 main(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  long lVar82;
  long lVar83;
  long lVar84;
  
  lVar1 = inst_0_values_var_0();
  lVar2 = inst_0_flags_var_0();
  lVar3 = inst_1_values_var_0();
  lVar4 = inst_1_flags_var_0();
  lVar5 = inst_2_values_var_0();
  lVar6 = inst_2_flags_var_0();
  lVar7 = inst_3_values_var_0();
  lVar8 = inst_3_flags_var_0();
  lVar9 = inst_4_values_var_0();
  lVar10 = inst_4_flags_var_0();
  lVar11 = inst_5_values_var_0();
  lVar12 = inst_5_flags_var_0();
  lVar13 = inst_6_values_var_0();
  lVar14 = inst_6_flags_var_0();
  lVar15 = inst_7_values_var_0();
  lVar16 = inst_7_flags_var_0();
  lVar17 = inst_8_values_var_0();
  lVar18 = inst_8_flags_var_0();
  lVar19 = inst_9_values_var_0();
  lVar20 = inst_9_flags_var_0();
  lVar21 = inst_10_values_var_0();
  lVar22 = inst_10_flags_var_0();
  lVar23 = inst_11_values_var_0();
  lVar24 = inst_11_flags_var_0();
  lVar25 = inst_12_values_var_0();
  lVar26 = inst_12_flags_var_0();
  lVar27 = inst_13_values_var_0();
  lVar28 = inst_13_flags_var_0();
  lVar29 = inst_14_values_var_0();
  lVar30 = inst_14_flags_var_0();
  lVar31 = inst_15_values_var_0();
  lVar32 = inst_15_flags_var_0();
  lVar33 = inst_16_values_var_0();
  lVar34 = inst_16_flags_var_0();
  lVar35 = inst_17_values_var_0();
  lVar36 = inst_17_flags_var_0();
  lVar37 = inst_18_values_var_0();
  lVar38 = inst_18_flags_var_0();
  lVar39 = inst_19_values_var_0();
  lVar40 = inst_19_flags_var_0();
  lVar41 = inst_20_values_var_0();
  lVar42 = inst_20_flags_var_0();
  lVar43 = inst_21_values_var_0();
  lVar44 = inst_21_flags_var_0();
  lVar45 = inst_22_values_var_0();
  lVar46 = inst_22_flags_var_0();
  lVar47 = inst_23_values_var_0();
  lVar48 = inst_23_flags_var_0();
  lVar49 = inst_24_values_var_0();
  lVar50 = inst_24_flags_var_0();
  lVar51 = inst_25_values_var_0();
  lVar52 = inst_25_flags_var_0();
  lVar53 = inst_26_values_var_0();
  lVar54 = inst_26_flags_var_0();
  lVar55 = inst_27_values_var_0();
  lVar56 = inst_27_flags_var_0();
  lVar57 = inst_28_values_var_0();
  lVar58 = inst_28_flags_var_0();
  lVar59 = inst_29_values_var_0();
  lVar60 = inst_29_flags_var_0();
  lVar61 = inst_30_values_var_0();
  lVar62 = inst_30_flags_var_0();
  lVar63 = inst_31_values_var_0();
  lVar64 = inst_31_flags_var_0();
  lVar65 = inst_32_values_var_0();
  lVar66 = inst_32_flags_var_0();
  lVar67 = inst_33_values_var_0();
  lVar68 = inst_33_flags_var_0();
  lVar69 = inst_34_values_var_0();
  lVar70 = inst_34_flags_var_0();
  lVar71 = inst_35_values_var_0();
  lVar72 = inst_35_flags_var_0();
  lVar73 = inst_36_values_var_0();
  lVar74 = inst_36_flags_var_0();
  lVar75 = inst_37_values_var_0();
  lVar76 = inst_37_flags_var_0();
  lVar77 = inst_38_values_var_0();
  lVar78 = inst_38_flags_var_0();
  lVar79 = inst_39_values_var_0();
  lVar80 = inst_39_flags_var_0();
  lVar81 = inst_40_values_var_0();
  lVar82 = inst_40_flags_var_0();
  lVar83 = inst_41_values_var_0();
  lVar84 = inst_41_flags_var_0();
  if (lVar1 + lVar2 + lVar3 + lVar4 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 + lVar10 + lVar11 +
      lVar12 + lVar13 + lVar14 + lVar15 + lVar16 + lVar17 + lVar18 + lVar19 + lVar20 + lVar21 +
      lVar22 + lVar23 + lVar24 + lVar25 + lVar26 + lVar27 + lVar28 + lVar29 + lVar30 + lVar31 +
      lVar32 + lVar33 + lVar34 + lVar35 + lVar36 + lVar37 + lVar38 + lVar39 + lVar40 + lVar41 +
      lVar42 + lVar43 + lVar44 + lVar45 + lVar46 + lVar47 + lVar48 + lVar49 + lVar50 + lVar51 +
      lVar52 + lVar53 + lVar54 + lVar55 + lVar56 + lVar57 + lVar58 + lVar59 + lVar60 + lVar61 +
      lVar62 + lVar63 + lVar64 + lVar65 + lVar66 + lVar67 + lVar68 + lVar69 + lVar70 + lVar71 +
      lVar72 + lVar73 + lVar74 + lVar75 + lVar76 + lVar77 + lVar78 + lVar79 + lVar80 + lVar81 +
      lVar82 + lVar83 + lVar84 == 0) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  __assert_fail("sum==0","source_extensions_inst__1_var__no_complex.c",0xb3,
                (char *)&__PRETTY_FUNCTION___2665);
}



void _start(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000000;
  undefined auStack8 [8];
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_3,
                    auStack8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
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



// WARNING: Removing unreachable block (ram,0x0040134d)
// WARNING: Removing unreachable block (ram,0x00401357)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0040138f)
// WARNING: Removing unreachable block (ram,0x00401399)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_7287 == '\0') {
    deregister_tm_clones();
    completed_7287 = 1;
    return;
  }
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



undefined  [16] inst_0_values_var_0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0x222e;
  while ((uVar2 & 1) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000;
  }
  return CONCAT88(param_3,CONCAT62(0x3f78d59439ca,sVar1) + -0x3f78d59439ca0001);
}



// WARNING: Removing unreachable block (ram,0x004015a8)

undefined  [16] inst_0_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ushort uVar1;
  
  uVar1 = 0x91b5;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x8000;
  }
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_1_values_var_0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0xf6dfb12b;
  while ((uVar2 & 1) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x80000000;
  }
  return CONCAT88(param_3,CONCAT44(0xb70d8650,iVar1));
}



// WARNING: Removing unreachable block (ram,0x004017b2)

undefined  [16] inst_1_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  
  uVar1 = 0xc0c8dfa3;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x80000000;
  }
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_2_values_var_0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  uVar2 = 0x86c162cb35587d86;
  while ((uVar2 & 1) == 0) {
    lVar1 = lVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000000000000000;
  }
  return CONCAT88(param_3,lVar1 + -1);
}



// WARNING: Removing unreachable block (ram,0x004019bc)

undefined  [16] inst_2_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = 0xd68053fc6e0f930d;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x8000000000000000;
  }
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_3_values_var_0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0x5c7343aa00000000);
}



// WARNING: Removing unreachable block (ram,0x00401bd3)
// WARNING: Removing unreachable block (ram,0x00401bc6)
// WARNING: Removing unreachable block (ram,0x00401be5)

undefined  [16] inst_3_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_4_values_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



// WARNING: Removing unreachable block (ram,0x00401de0)
// WARNING: Removing unreachable block (ram,0x00401ded)

undefined  [16] inst_4_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_5_values_var_0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0x5ff3c2f900000000);
}



// WARNING: Removing unreachable block (ram,0x00402007)
// WARNING: Removing unreachable block (ram,0x00402019)

undefined  [16] inst_5_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_6_values_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



// WARNING: Removing unreachable block (ram,0x00402221)
// WARNING: Removing unreachable block (ram,0x00402233)

undefined  [16] inst_6_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_7_values_var_0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0xa9a617b700000000);
}



// WARNING: Removing unreachable block (ram,0x0040243b)
// WARNING: Removing unreachable block (ram,0x0040242e)
// WARNING: Removing unreachable block (ram,0x0040244d)

undefined  [16] inst_7_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_8_values_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



// WARNING: Removing unreachable block (ram,0x00402655)
// WARNING: Removing unreachable block (ram,0x00402648)
// WARNING: Removing unreachable block (ram,0x00402667)

undefined  [16] inst_8_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_9_values_var_0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0xcc6e81a600000000);
}



// WARNING: Removing unreachable block (ram,0x0040286f)
// WARNING: Removing unreachable block (ram,0x00402862)
// WARNING: Removing unreachable block (ram,0x00402881)

undefined  [16] inst_9_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_10_values_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



// WARNING: Removing unreachable block (ram,0x00402a89)
// WARNING: Removing unreachable block (ram,0x00402a7c)
// WARNING: Removing unreachable block (ram,0x00402a9b)

undefined  [16] inst_10_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_11_values_var_0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0x7f7131f700000000);
}



// WARNING: Removing unreachable block (ram,0x00402c96)
// WARNING: Removing unreachable block (ram,0x00402ca3)

undefined  [16] inst_11_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_12_values_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



// WARNING: Removing unreachable block (ram,0x00402ea8)
// WARNING: Removing unreachable block (ram,0x00402eb5)

undefined  [16] inst_12_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_13_values_var_0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0xa8b43dd100000000);
}



// WARNING: Removing unreachable block (ram,0x004030c7)

undefined  [16] inst_13_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_14_values_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



// WARNING: Removing unreachable block (ram,0x004032e1)
// WARNING: Removing unreachable block (ram,0x004032d4)
// WARNING: Removing unreachable block (ram,0x004032f3)

undefined  [16] inst_14_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_15_values_var_0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0xa140ec7100000000);
}



undefined  [16] inst_15_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_16_values_var_0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,SUB168(ZEXT816(0xa534aac744a064e3) * ZEXT816(0xfdb0f2967d89f233) >> 0x40,0
                                ) + SUB168(ZEXT816(0xa534aac744a064e3) * ZEXT816(0xfdb0f2967d89f233)
                                           ,0) + 0x6fca9fc9a110724d);
}



undefined  [16] inst_16_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_17_values_var_0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0x84ee4137;
  uVar1 = 1;
  uVar2 = 0;
  do {
    if ((uVar1 & 0xbbd955c1) != 0) {
      uVar2 = uVar2 | (uVar1 & 0xbbd955c1) * (uVar3 & 1);
      uVar3 = uVar3 >> 1;
    }
    uVar1 = uVar1 << 1;
  } while (uVar1 != 0);
  return CONCAT88(param_3,CONCAT44(0x14e2b5a2,uVar2) + -0x880814c1);
}



undefined  [16] inst_17_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    iVar1 = iVar1 << 1;
  } while (iVar1 != 0);
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_18_values_var_0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = 0x5a5c2ee200025c64;
  uVar2 = 1;
  uVar3 = 0;
  do {
    if ((uVar2 & 0xc8500921a2494040) != 0) {
      uVar3 = uVar3 | (uVar2 & 0xc8500921a2494040) * (uVar1 & 1);
      uVar1 = uVar1 >> 1;
    }
    uVar2 = uVar2 << 1;
  } while (uVar2 != 0);
  return CONCAT88(param_3,uVar3 + 0xf7eff6ffddff0000);
}



undefined  [16] inst_18_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = 1;
  do {
    lVar1 = lVar1 << 1;
  } while (lVar1 != 0);
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_19_values_var_0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x80000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x304c727b) != 0) {
      uVar2 = uVar2 << 1 | (uint)((uVar1 & 0x30041231) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return CONCAT88(param_3,CONCAT44(0xfa53d650,uVar2) + -0x64d9);
}



undefined  [16] inst_19_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  
  uVar1 = 0x80000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_20_values_var_0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x8000000000000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x30cbae7714e488ea) != 0) {
      uVar2 = uVar2 << 1 | (ulong)((uVar1 & 0x30402e5314000840) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return CONCAT88(param_3,uVar2 - 0x687d7828);
}



undefined  [16] inst_20_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = 0x8000000000000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_21_values_var_0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0x80f3df3100000000);
}



undefined  [16] inst_21_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_22_values_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_22_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_23_values_var_0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0x4b81c2fe00000000);
}



undefined  [16] inst_23_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_24_values_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_24_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_25_values_var_0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0xbad5caea00000000);
}



undefined  [16] inst_25_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_26_values_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_26_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_27_values_var_0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0xd2877c1f00000000);
}



undefined  [16] inst_27_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_28_values_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_28_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_29_values_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_29_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_30_values_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_30_flags_var_0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0;
  if ((char)((unkuint9)0x7afa2fe30e5fde9d + (unkuint9)0x8cc0a335202757e7 + (unkuint9)0 >> 0x40) !=
      '\0') {
    lVar1 = 2;
  }
  return CONCAT88(param_3,lVar1 + -2);
}



undefined  [16] inst_31_values_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



// WARNING: Removing unreachable block (ram,0x00405527)

undefined  [16] inst_31_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_32_values_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_32_flags_var_0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,(ulong)((char)((unkuint9)0xba519417dccacfc3 + (unkuint9)0xb331135e58539e65
                                         + (unkuint9)1 >> 0x40) != '\0') - 1);
}



undefined  [16] inst_33_values_var_0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = crc32(0x12d7d904,0x8b);
  return CONCAT88(param_3,(ulong)uVar1 - 0xdcf7d085);
}



undefined  [16] inst_33_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  crc32(0x423247d6,0x16);
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_34_values_var_0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = crc32(0xbbbe357d,0x41);
  return CONCAT88(param_3,(ulong)uVar1 - 0x7d1b3854);
}



undefined  [16] inst_34_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  crc32(0xf56baefe,0x28);
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_35_values_var_0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = crc32(0xe7f2bbc2,0xdc);
  return CONCAT88(param_3,(ulong)uVar1 - 0xe0825d0b);
}



undefined  [16] inst_35_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  crc32(0xbb6c3c4f,0x88ee);
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_36_values_var_0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = crc32(0x16ce2a43,0xf4aacfe7);
  return CONCAT88(param_3,(ulong)uVar1 - 0xa4234a9a);
}



undefined  [16] inst_36_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  crc32(0x117adf45,0x30bf140);
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_37_values_var_0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = crc32(0xa47ea1b131e09e25,0x65);
  return CONCAT88(param_3,lVar1 + -0x414afd22);
}



undefined  [16] inst_37_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  crc32(0x53088b4408c96c19,0xab);
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_38_values_var_0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = crc32(0x6fe1142b64e31d2f,0x2e7a452e2d695153);
  return CONCAT88(param_3,lVar1 + -0x9c9cda43);
}



undefined  [16] inst_38_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  crc32(0x48af9a3f774b8621,0x25d07b45599efbac);
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_39_values_var_0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0x3e60;
  while ((uVar2 & 0x8000) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT88(param_3,CONCAT62(0xed4c2a0b87ed,sVar1) + 0x12b3d5f47812fffe);
}



undefined  [16] inst_39_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ushort uVar1;
  
  uVar1 = 0xe0f2;
  while ((uVar1 & 0x8000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_40_values_var_0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0x2a7deeff;
  while ((uVar2 & 0x80000000) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT88(param_3,CONCAT44(0x51c84b4d,iVar1) + -2);
}



undefined  [16] inst_40_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  
  uVar1 = 0x2575f3d9;
  while ((uVar1 & 0x80000000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] inst_41_values_var_0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  uVar2 = 0x3de7e25e1ec43c7f;
  while ((uVar2 & 0x8000000000000000) == 0) {
    lVar1 = lVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT88(param_3,lVar1 + -2);
}



undefined  [16] inst_41_flags_var_0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = 0xba99cb2373c59b15;
  while ((uVar1 & 0x8000000000000000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return ZEXT816(param_3) << 0x40;
}



int __libc_csu_init(void *param_1,void *param_2)

{
  int iVar1;
  long lVar2;
  
  _init((EVP_PKEY_CTX *)param_1);
  lVar2 = 0;
  do {
    iVar1 = (*(code *)(&__frame_dummy_init_array_entry)[lVar2])((ulong)param_1 & 0xffffffff,param_2)
    ;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 1);
  return iVar1;
}



void __libc_csu_fini(void)

{
  return;
}



void _fini(void)

{
  return;
}


