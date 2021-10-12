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



long inst_0_values_var_0(void)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0;
  for (uVar2 = 0x1381; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x8000) {
    sVar1 = sVar1 + 1;
  }
  return CONCAT62(0x5af700311aa8,sVar1) + -0x5af700311aa80000;
}



// WARNING: Removing unreachable block (ram,0x004015a4)

undefined8 inst_0_flags_var_0(void)

{
  ushort uVar1;
  
  for (uVar1 = 0x7c45; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x8000) {
  }
  return 0;
}



int inst_1_values_var_0(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  for (uVar2 = 0x9ffbe89; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



// WARNING: Removing unreachable block (ram,0x004017aa)

undefined8 inst_1_flags_var_0(void)

{
  uint uVar1;
  
  for (uVar1 = 0x849b0037; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x80000000) {
  }
  return 0;
}



long inst_2_values_var_0(void)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  for (uVar2 = 0x1c67f047f97524ff; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x8000000000000000) {
    lVar1 = lVar1 + 1;
  }
  return lVar1;
}



// WARNING: Removing unreachable block (ram,0x004019b0)

undefined8 inst_2_flags_var_0(void)

{
  ulong uVar1;
  
  for (uVar1 = 0xb3721723429ee87b; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x8000000000000000) {
  }
  return 0;
}



undefined8 inst_3_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00401bc3)
// WARNING: Removing unreachable block (ram,0x00401bb6)
// WARNING: Removing unreachable block (ram,0x00401bd5)

undefined8 inst_3_flags_var_0(void)

{
  return 0;
}



undefined8 inst_4_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00401dd9)
// WARNING: Removing unreachable block (ram,0x00401dcc)
// WARNING: Removing unreachable block (ram,0x00401deb)

undefined8 inst_4_flags_var_0(void)

{
  return 0;
}



undefined8 inst_5_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00401fef)
// WARNING: Removing unreachable block (ram,0x00402001)

undefined8 inst_5_flags_var_0(void)

{
  return 0;
}



undefined8 inst_6_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00402205)
// WARNING: Removing unreachable block (ram,0x00402217)

undefined8 inst_6_flags_var_0(void)

{
  return 0;
}



undefined8 inst_7_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0040241b)
// WARNING: Removing unreachable block (ram,0x0040240e)
// WARNING: Removing unreachable block (ram,0x0040242d)

undefined8 inst_7_flags_var_0(void)

{
  return 0;
}



undefined8 inst_8_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00402631)
// WARNING: Removing unreachable block (ram,0x00402624)
// WARNING: Removing unreachable block (ram,0x00402643)

undefined8 inst_8_flags_var_0(void)

{
  return 0;
}



undefined8 inst_9_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00402847)
// WARNING: Removing unreachable block (ram,0x0040283a)
// WARNING: Removing unreachable block (ram,0x00402859)

undefined8 inst_9_flags_var_0(void)

{
  return 0;
}



undefined8 inst_10_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00402a50)
// WARNING: Removing unreachable block (ram,0x00402a5d)

undefined8 inst_10_flags_var_0(void)

{
  return 0;
}



undefined8 inst_11_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00402c66)
// WARNING: Removing unreachable block (ram,0x00402c73)

undefined8 inst_11_flags_var_0(void)

{
  return 0;
}



undefined8 inst_12_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00402e74)
// WARNING: Removing unreachable block (ram,0x00402e81)

undefined8 inst_12_flags_var_0(void)

{
  return 0;
}



undefined8 inst_13_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0040308f)
// WARNING: Removing unreachable block (ram,0x004030a1)

undefined8 inst_13_flags_var_0(void)

{
  return 0;
}



undefined8 inst_14_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x004032a5)

undefined8 inst_14_flags_var_0(void)

{
  return 0;
}



undefined8 inst_15_values_var_0(void)

{
  return 0;
}



undefined8 inst_15_flags_var_0(void)

{
  return 0;
}



long inst_16_values_var_0(void)

{
  return SUB168(ZEXT816(0x5afe1679c5efdc13) * ZEXT816(0xda34b06ef1aaf00a) >> 0x40,0) +
         SUB168(ZEXT816(0x5afe1679c5efdc13) * ZEXT816(0xda34b06ef1aaf00a),0) + -0x76fc03690320347c;
}



undefined8 inst_16_flags_var_0(void)

{
  return 0;
}



long inst_17_values_var_0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0x8936e354;
  uVar1 = 1;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x8225828) != 0) {
      uVar2 = uVar2 | (uVar1 & 0x8225828) * (uVar3 & 1);
      uVar3 = uVar3 >> 1;
    }
    uVar1 = uVar1 << 1;
  } while (uVar1 != 0);
  return (ulong)uVar2 - 0x204800;
}



undefined8 inst_17_flags_var_0(void)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    iVar1 = iVar1 << 1;
  } while (iVar1 != 0);
  return 0;
}



long inst_18_values_var_0(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = 0xefd063aee8039e8c;
  uVar2 = 1;
  uVar3 = 0;
  do {
    if ((uVar2 & 0x4025371676ed39af) != 0) {
      uVar3 = uVar3 | (uVar2 & 0x4025371676ed39af) * (uVar1 & 1);
      uVar1 = uVar1 >> 1;
    }
    uVar2 = uVar2 << 1;
  } while (uVar2 != 0);
  return uVar3 + 0xffdaeffff972d7f4;
}



undefined8 inst_18_flags_var_0(void)

{
  long lVar1;
  
  lVar1 = 1;
  do {
    lVar1 = lVar1 << 1;
  } while (lVar1 != 0);
  return 0;
}



long inst_19_values_var_0(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x80000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x1c7e5b24) != 0) {
      uVar2 = uVar2 << 1 | (uint)((uVar1 & 0x4764b24) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return (ulong)uVar2 - 0x3ddf;
}



undefined8 inst_19_flags_var_0(void)

{
  uint uVar1;
  
  uVar1 = 0x80000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return 0;
}



long inst_20_values_var_0(void)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x8000000000000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x4675c805dba61253) != 0) {
      uVar2 = uVar2 << 1 | (ulong)((uVar1 & 0x620c80510820243) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return uVar2 - 0xd1f225b;
}



undefined8 inst_20_flags_var_0(void)

{
  ulong uVar1;
  
  uVar1 = 0x8000000000000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return 0;
}



undefined8 inst_21_values_var_0(void)

{
  return 0;
}



undefined8 inst_21_flags_var_0(void)

{
  return 0;
}



undefined8 inst_22_values_var_0(void)

{
  return 0;
}



undefined8 inst_22_flags_var_0(void)

{
  return 0;
}



undefined8 inst_23_values_var_0(void)

{
  return 0;
}



undefined8 inst_23_flags_var_0(void)

{
  return 0;
}



undefined8 inst_24_values_var_0(void)

{
  return 0;
}



undefined8 inst_24_flags_var_0(void)

{
  return 0;
}



undefined8 inst_25_values_var_0(void)

{
  return 0;
}



undefined8 inst_25_flags_var_0(void)

{
  return 0;
}



undefined8 inst_26_values_var_0(void)

{
  return 0;
}



undefined8 inst_26_flags_var_0(void)

{
  return 0;
}



undefined8 inst_27_values_var_0(void)

{
  return 0;
}



undefined8 inst_27_flags_var_0(void)

{
  return 0;
}



undefined8 inst_28_values_var_0(void)

{
  return 0;
}



undefined8 inst_28_flags_var_0(void)

{
  return 0;
}



undefined8 inst_29_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0040509d)

undefined8 inst_29_flags_var_0(void)

{
  return 0;
}



undefined8 inst_30_values_var_0(void)

{
  return 0;
}



long inst_30_flags_var_0(void)

{
  long lVar1;
  
  lVar1 = 0;
  if ((char)((unkuint9)0x91424407e84e05be + (unkuint9)0x91424407e84e05be + (unkuint9)0 >> 0x40) !=
      '\0') {
    lVar1 = 2;
  }
  return lVar1 + -2;
}



undefined8 inst_31_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x004054a8)

undefined8 inst_31_flags_var_0(void)

{
  return 0;
}



undefined8 inst_32_values_var_0(void)

{
  return 0;
}



bool inst_32_flags_var_0(void)

{
  return (char)((unkuint9)0x448e52c2b0e91995 + (unkuint9)0x67cd0fd05ac16972 + (unkuint9)1 >> 0x40)
         != '\0';
}



long inst_33_values_var_0(void)

{
  uint uVar1;
  
  uVar1 = crc32(0xbe2b6d1,0xcb);
  return (ulong)uVar1 - 0x7bb70de1;
}



undefined8 inst_33_flags_var_0(void)

{
  crc32(0x92e9fa80,0x5c);
  return 0;
}



long inst_34_values_var_0(void)

{
  uint uVar1;
  
  uVar1 = crc32(0x37b88fec,0x36);
  return (ulong)uVar1 - 0xb806711c;
}



undefined8 inst_34_flags_var_0(void)

{
  crc32(0xa643691b,0x44);
  return 0;
}



long inst_35_values_var_0(void)

{
  uint uVar1;
  
  uVar1 = crc32(0x4a88678f,0x4932);
  return (ulong)uVar1 - 0xf774a918;
}



undefined8 inst_35_flags_var_0(void)

{
  crc32(0x13fa3f2f,0x92f9);
  return 0;
}



long inst_36_values_var_0(void)

{
  uint uVar1;
  
  uVar1 = crc32(0x215020ca,0x769f91c3);
  return (ulong)uVar1 - 0xf2c322c5;
}



undefined8 inst_36_flags_var_0(void)

{
  crc32(0xfb6ecd6a,0x8516674);
  return 0;
}



long inst_37_values_var_0(void)

{
  long lVar1;
  
  lVar1 = crc32(0xaab5b5e9229e795a,0xef);
  return lVar1 + -0x87c6f8ac;
}



undefined8 inst_37_flags_var_0(void)

{
  crc32(0x2b0e27a4ef5f4192,0x92);
  return 0;
}



long inst_38_values_var_0(void)

{
  long lVar1;
  
  lVar1 = crc32(0x7c13bc04fd1893ea,0xafe9a8fc18f5eadf);
  return lVar1 + -0x3d5887be;
}



undefined8 inst_38_flags_var_0(void)

{
  crc32(0x4130ad5ba0c25eb,0xed5858f4b3269ef9);
  return 0;
}



long inst_39_values_var_0(void)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = 0;
  for (uVar2 = 0xa0a5; (uVar2 & 0x8000) == 0; uVar2 = uVar2 << 1 | 1) {
    uVar1 = uVar1 + 1;
  }
  return ((ulong)uVar1 | 0xe6df100b47a00000) + 0x1920eff4b8600000;
}



undefined8 inst_39_flags_var_0(void)

{
  ushort uVar1;
  
  for (uVar1 = 0x5e1b; (uVar1 & 0x8000) == 0; uVar1 = uVar1 << 1 | 1) {
  }
  return 0;
}



long inst_40_values_var_0(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  for (uVar2 = 0x69eb4bdc; (uVar2 & 0x80000000) == 0; uVar2 = uVar2 << 1 | 1) {
    uVar1 = uVar1 + 1;
  }
  return (ulong)uVar1 - 1;
}



undefined8 inst_40_flags_var_0(void)

{
  uint uVar1;
  
  for (uVar1 = 0x381306f3; (uVar1 & 0x80000000) == 0; uVar1 = uVar1 << 1 | 1) {
  }
  return 0;
}



long inst_41_values_var_0(void)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  for (uVar2 = 0x5c4e22e4ab990592; (uVar2 & 0x8000000000000000) == 0; uVar2 = uVar2 << 1 | 1) {
    lVar1 = lVar1 + 1;
  }
  return lVar1 + -1;
}



undefined8 inst_41_flags_var_0(void)

{
  ulong uVar1;
  
  for (uVar1 = 0x480cec9ce834b9c7; (uVar1 & 0x8000000000000000) == 0; uVar1 = uVar1 << 1 | 1) {
  }
  return 0;
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


