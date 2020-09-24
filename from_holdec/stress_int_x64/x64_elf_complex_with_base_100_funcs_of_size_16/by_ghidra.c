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
  long lVar85;
  long lVar86;
  long lVar87;
  long lVar88;
  long lVar89;
  long lVar90;
  long lVar91;
  long lVar92;
  long lVar93;
  long lVar94;
  long lVar95;
  long lVar96;
  long lVar97;
  long lVar98;
  long lVar99;
  long lVar100;
  
  lVar1 = log_size_4_var_000();
  lVar2 = log_size_4_var_001();
  lVar3 = log_size_4_var_002();
  lVar4 = log_size_4_var_003();
  lVar5 = log_size_4_var_004();
  lVar6 = log_size_4_var_005();
  lVar7 = log_size_4_var_006();
  lVar8 = log_size_4_var_007();
  lVar9 = log_size_4_var_008();
  lVar10 = log_size_4_var_009();
  lVar11 = log_size_4_var_010();
  lVar12 = log_size_4_var_011();
  lVar13 = log_size_4_var_012();
  lVar14 = log_size_4_var_013();
  lVar15 = log_size_4_var_014();
  lVar16 = log_size_4_var_015();
  lVar17 = log_size_4_var_016();
  lVar18 = log_size_4_var_017();
  lVar19 = log_size_4_var_018();
  lVar20 = log_size_4_var_019();
  lVar21 = log_size_4_var_020();
  lVar22 = log_size_4_var_021();
  lVar23 = log_size_4_var_022();
  lVar24 = log_size_4_var_023();
  lVar25 = log_size_4_var_024();
  lVar26 = log_size_4_var_025();
  lVar27 = log_size_4_var_026();
  lVar28 = log_size_4_var_027();
  lVar29 = log_size_4_var_028();
  lVar30 = log_size_4_var_029();
  lVar31 = log_size_4_var_030();
  lVar32 = log_size_4_var_031();
  lVar33 = log_size_4_var_032();
  lVar34 = log_size_4_var_033();
  lVar35 = log_size_4_var_034();
  lVar36 = log_size_4_var_035();
  lVar37 = log_size_4_var_036();
  lVar38 = log_size_4_var_037();
  lVar39 = log_size_4_var_038();
  lVar40 = log_size_4_var_039();
  lVar41 = log_size_4_var_040();
  lVar42 = log_size_4_var_041();
  lVar43 = log_size_4_var_042();
  lVar44 = log_size_4_var_043();
  lVar45 = log_size_4_var_044();
  lVar46 = log_size_4_var_045();
  lVar47 = log_size_4_var_046();
  lVar48 = log_size_4_var_047();
  lVar49 = log_size_4_var_048();
  lVar50 = log_size_4_var_049();
  lVar51 = log_size_4_var_050();
  lVar52 = log_size_4_var_051();
  lVar53 = log_size_4_var_052();
  lVar54 = log_size_4_var_053();
  lVar55 = log_size_4_var_054();
  lVar56 = log_size_4_var_055();
  lVar57 = log_size_4_var_056();
  lVar58 = log_size_4_var_057();
  lVar59 = log_size_4_var_058();
  lVar60 = log_size_4_var_059();
  lVar61 = log_size_4_var_060();
  lVar62 = log_size_4_var_061();
  lVar63 = log_size_4_var_062();
  lVar64 = log_size_4_var_063();
  lVar65 = log_size_4_var_064();
  lVar66 = log_size_4_var_065();
  lVar67 = log_size_4_var_066();
  lVar68 = log_size_4_var_067();
  lVar69 = log_size_4_var_068();
  lVar70 = log_size_4_var_069();
  lVar71 = log_size_4_var_070();
  lVar72 = log_size_4_var_071();
  lVar73 = log_size_4_var_072();
  lVar74 = log_size_4_var_073();
  lVar75 = log_size_4_var_074();
  lVar76 = log_size_4_var_075();
  lVar77 = log_size_4_var_076();
  lVar78 = log_size_4_var_077();
  lVar79 = log_size_4_var_078();
  lVar80 = log_size_4_var_079();
  lVar81 = log_size_4_var_080();
  lVar82 = log_size_4_var_081();
  lVar83 = log_size_4_var_082();
  lVar84 = log_size_4_var_083();
  lVar85 = log_size_4_var_084();
  lVar86 = log_size_4_var_085();
  lVar87 = log_size_4_var_086();
  lVar88 = log_size_4_var_087();
  lVar89 = log_size_4_var_088();
  lVar90 = log_size_4_var_089();
  lVar91 = log_size_4_var_090();
  lVar92 = log_size_4_var_091();
  lVar93 = log_size_4_var_092();
  lVar94 = log_size_4_var_093();
  lVar95 = log_size_4_var_094();
  lVar96 = log_size_4_var_095();
  lVar97 = log_size_4_var_096();
  lVar98 = log_size_4_var_097();
  lVar99 = log_size_4_var_098();
  lVar100 = log_size_4_var_099();
  if (lVar1 + lVar2 + lVar3 + lVar4 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 + lVar10 + lVar11 +
      lVar12 + lVar13 + lVar14 + lVar15 + lVar16 + lVar17 + lVar18 + lVar19 + lVar20 + lVar21 +
      lVar22 + lVar23 + lVar24 + lVar25 + lVar26 + lVar27 + lVar28 + lVar29 + lVar30 + lVar31 +
      lVar32 + lVar33 + lVar34 + lVar35 + lVar36 + lVar37 + lVar38 + lVar39 + lVar40 + lVar41 +
      lVar42 + lVar43 + lVar44 + lVar45 + lVar46 + lVar47 + lVar48 + lVar49 + lVar50 + lVar51 +
      lVar52 + lVar53 + lVar54 + lVar55 + lVar56 + lVar57 + lVar58 + lVar59 + lVar60 + lVar61 +
      lVar62 + lVar63 + lVar64 + lVar65 + lVar66 + lVar67 + lVar68 + lVar69 + lVar70 + lVar71 +
      lVar72 + lVar73 + lVar74 + lVar75 + lVar76 + lVar77 + lVar78 + lVar79 + lVar80 + lVar81 +
      lVar82 + lVar83 + lVar84 + lVar85 + lVar86 + lVar87 + lVar88 + lVar89 + lVar90 + lVar91 +
      lVar92 + lVar93 + lVar94 + lVar95 + lVar96 + lVar97 + lVar98 + lVar99 + lVar100 == 0) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  __assert_fail("sum==0","source_complex_with_base_100_funcs_of_size_16.c",0xd3,
                (char *)&__PRETTY_FUNCTION___2713);
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



// WARNING: Removing unreachable block (ram,0x004013cd)
// WARNING: Removing unreachable block (ram,0x004013d7)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0040140f)
// WARNING: Removing unreachable block (ram,0x00401419)

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



undefined  [16] log_size_4_var_000(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0xf0b7d92300000000);
}



undefined  [16] log_size_4_var_001(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0;
  while ((0x5e3d51e23b8a1a63U >> lVar1 & 1) == 0) {
    lVar1 = lVar1 + 1;
  }
  return CONCAT88(param_3,lVar1 + ((ulong)((int)lVar1 + 0xb4dff4ff) & 0xfffffffff7ffffff) +
                          CONCAT62(0x6c82c9288533,(short)lVar1 << 7 | 0x25) + 0x52deb2c0d58bdb16);
}



// WARNING: Removing unreachable block (ram,0x00401784)

undefined  [16] log_size_4_var_002(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] log_size_4_var_003(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0xd6ee7706035ee851);
}



undefined  [16] log_size_4_var_004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined auVar2 [16];
  char cVar4;
  uint uVar3;
  long lVar5;
  uint uVar6;
  
  lVar5 = 0x3c666ebfc4723fa6;
  auVar2 = ZEXT816(0xffffffffc91c6800) * ZEXT816(0xb2eaf39d6b667d6b);
  uVar1 = CONCAT22(SUB162(auVar2 >> 0x40,0),SUB162(auVar2,0)) & 0x3fffffff;
  uVar3 = uVar1 / 0xe307;
  cVar4 = (char)(uVar3 >> 8);
  if (!SCARRY1(cVar4,-0x52)) {
    lVar5 = 0xcf63e307;
  }
  uVar3 = (uint)CONCAT62(SUB166(auVar2 >> 0x10,0),(short)uVar3);
  uVar6 = (uint)(uVar3 == 0xadc9d07a) * 0x5205a04b ^ 0xadc9d07a;
  return CONCAT88(param_3,CONCAT44(SUB164(auVar2 >> 0x20,0),
                                   uVar3 ^ (uint)(uVar3 == 0xadc9d07a) * (uVar3 & uVar6)) +
                          CONCAT62(0x945f5179fe7f,
                                   (ushort)CONCAT71(0x945f5179fe7f3c,cVar4 + -0x52) >> 1) +
                          ((SUB168(auVar2 >> 0x40,0) & 0xffffffffffff0000 |
                           (ulong)(ushort)(uVar1 % 0xe307)) >> 7 | 0x6e00000000000000) + lVar5 +
                          CONCAT44(0x70340977,uVar6) + -0x73f930da6400b46a);
}



// WARNING: Removing unreachable block (ram,0x00401b30)

undefined  [16] log_size_4_var_005(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] log_size_4_var_006(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0x7468822a00000000);
}



undefined  [16] log_size_4_var_007(void)

{
  return ZEXT816(*(ulong *)(((ulong)&stack0xffffffffffffff90 & 0xffffffffffff0000 |
                            (ulong)((short)register0x00000020 - 0x70U & 0xbfff)) + 0x58)) << 0x40;
}



undefined  [16] log_size_4_var_008(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] log_size_4_var_009(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0x6941bc2600000000);
}



undefined  [16] log_size_4_var_010(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0xdd2f9ed400000000);
}



undefined  [16] log_size_4_var_011(void)

{
  return CONCAT88(*(undefined8 *)
                   (((ulong)&stack0xffffffffffffff90 & 0xffffffffffff0000 |
                    (ulong)((short)register0x00000020 - 0x70U & 0xdfff)) + 0x58),
                  CONCAT71(0xd7ee1b128aef67,((short)register0x00000020 - 0x70U >> 0xd & 1) == 0) +
                  0x2811e4ed751098ff);
}



// WARNING: Removing unreachable block (ram,0x0040238f)

undefined  [16] log_size_4_var_012(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = SUB168(SEXT816(-0x4318b29302c07ad4) * SEXT416(-0x47b1e13a) >> 0x40,0);
  uVar2 = (uint)(lVar1 != 0 && lVar1 != -1) + 0x85e5c7e0;
  return CONCAT88(param_3,(ulong)uVar2 + (ulong)(uVar2 >> 1) + -0x800c8d8abd1);
}



undefined  [16] log_size_4_var_013(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0x800000);
}



// WARNING: Removing unreachable block (ram,0x00402600)

undefined  [16] log_size_4_var_014(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0x2d928ba600000000);
}



undefined  [16] log_size_4_var_015(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = SUB168(SEXT816(0x1e1f8e82f8e8be8f) * SEXT416(-0x358575dd) >> 0x40,0);
  lVar1 = CONCAT71(0xa8119e2dcbaebe,(lVar1 != 0 && lVar1 != -1) + -0x58);
  return CONCAT88(param_3,lVar1 + ((ulong)(ushort)(0x238d - (short)lVar1) | 0x6b0c9cce24b10000) +
                          0x795011111757824d);
}



undefined  [16] log_size_4_var_016(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  
  uVar2 = (int)SUB162(ZEXT816(0xe86cc99b31cab5dc) >> 0x24,0) * 0x347f;
  uVar3 = (ushort)(uVar2 >> 0x10);
  lVar1 = 0;
  while ((0xdd1afd2c6e903711U >> lVar1 & 1) == 0) {
    lVar1 = lVar1 + 1;
  }
  return CONCAT88(param_3,((ulong)((uVar2 & 0xffff | 0x2680000) ^ 0x80000) | 0x6363b24d00000000) +
                          CONCAT62(0x4bd4ba375ed6,uVar3 >> 7 | uVar3 << 9) + lVar1 +
                          (SUB168(ZEXT816(0xe86cc99b31cab5dc) >> 0x24,0) | 0x663956bb80000000) +
                          0x4df1ef0d0041b396);
}



// WARNING: Removing unreachable block (ram,0x004029a7)

undefined  [16] log_size_4_var_017(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0x2c8f9a3000000000);
}



undefined  [16] log_size_4_var_018(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] log_size_4_var_019(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  bool in_PF;
  
  uVar2 = 0x9a66a7c8c61e814;
  if (in_PF) {
    uVar2 = 0x80a899;
  }
  lVar1 = 0x3f;
  if (uVar2 != 0) {
    while (uVar2 >> lVar1 == 0) {
      lVar1 = lVar1 + -1;
    }
  }
  return CONCAT88(param_3,(0x2e94a1d3 << ((byte)uVar2 & 0x3f)) + uVar2 + lVar1 + 0x108ad31c597f5750)
  ;
}



undefined  [16] log_size_4_var_020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined auVar2 [16];
  long lVar3;
  bool in_PF;
  
  lVar3 = 0x455c0eddda225040;
  if (!in_PF) {
    lVar3 = 0x455c0eddda22f165;
  }
  auVar2 = ZEXT816(0x124f7d0586d7ba25) << 0x40 | ZEXT816(0xbe59a0549a399e0b);
  uVar1 = 0;
  while ((0x6c16f165U >> uVar1 & 1) == 0) {
    uVar1 = uVar1 + 1;
  }
  return CONCAT88(param_3,SUB168(auVar2 / ZEXT816(0xc000000020609324),0) +
                          SUB168(auVar2 % ZEXT816(0xc000000020609324),0) + (ulong)uVar1 + lVar3 +
                          0x2e0cb577ed23bbcc);
}



undefined  [16] log_size_4_var_021(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  while ((0x27575041U >> uVar1 & 1) == 0) {
    uVar1 = uVar1 + 1;
  }
  uVar2 = (int)(short)uVar1 * -0x6ea9;
  return CONCAT88(param_3,(ulong)(uVar1 & 0xffff0000 | uVar2 & 0xffff) +
                          CONCAT62(0xcd61b217c8be,(short)(uVar2 >> 0x10)) + 0x329e4de837420000);
}



undefined  [16] log_size_4_var_022(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  
  sVar1 = 0;
  while ((0x32bU >> sVar1 & 1) == 0) {
    sVar1 = sVar1 + 1;
  }
  return CONCAT88(param_3,0x3400000000);
}



// WARNING: Removing unreachable block (ram,0x004030f0)

undefined  [16] log_size_4_var_023(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0x4eb1ada100000000);
}



undefined  [16] log_size_4_var_024(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0xfffffffffffffffc);
}



undefined  [16] log_size_4_var_025(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,CONCAT62(SUB166(SEXT816(-0x7ed294fe3d407095) * SEXT816(0x37a00a9dd2d4f076)
                                          >> 0x50,0),0x6052) +
                          CONCAT44(0x3a061bfa,
                                   SUB164(SEXT816(-0x7ed294fe3d407095) * SEXT816(0x37a00a9dd2d4f076)
                                          >> 0x40,0) + -0x7f573f5c) + 0x1b8e86e1ce48898d);
}



// WARNING: Removing unreachable block (ram,0x00403455)

undefined  [16] log_size_4_var_026(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x3f;
  while (0xf41bdd8eU >> lVar1 == 0) {
    lVar1 = lVar1 + -1;
  }
  return CONCAT88(param_3,lVar1 + -0x1f);
}



// WARNING: Removing unreachable block (ram,0x004035c2)

undefined  [16] log_size_4_var_027(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,SUB168(ZEXT816(0xf3acd9474fda4a96) * ZEXT816(0x5c660b1709a2bf51),0) +
                          SUB168(ZEXT816(0xf3acd9474fda4a96) * ZEXT816(0x5c660b1709a2bf51) >> 0x40,0
                                ) + 0x69bb721d90457a08);
}



// WARNING: Removing unreachable block (ram,0x004036d9)

undefined  [16] log_size_4_var_028(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0x1eb2aa66f2e0efc4);
}



// WARNING: Removing unreachable block (ram,0x0040380b)

undefined  [16] log_size_4_var_029(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined auVar2 [16];
  uint uVar3;
  uint uVar4;
  
  auVar2 = ZEXT816(0x116f82ff5c4c4d64) * ZEXT816(0x116f82ff5c4c4d64);
  lVar1 = SUB168(SEXT816(0x5750939b34811b4a) * SEXT416(-0x7c236a59) >> 0x40,0);
  uVar3 = SUB164(auVar2,0);
  uVar4 = (uint)CONCAT71(0xecce1a40dd3c70,(lVar1 != 0 && lVar1 != -1) << 7 | 0x32);
  uVar4 = uVar4 ^ (uint)(uVar3 == uVar4) * (uVar4 ^ 0xba2de5e9);
  return CONCAT88(param_3,CONCAT44(SUB164(auVar2 >> 0x20,0),
                                   uVar3 ^ (uint)(uVar3 == uVar4) * (uVar3 & uVar4)) +
                          CONCAT44(0xecce1a40,uVar4) + SUB168(auVar2 >> 0x40,0) + 0x1201e5c57eca99b4
                 );
}



undefined  [16] log_size_4_var_030(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0x6a);
}



// WARNING: Removing unreachable block (ram,0x00403a9b)

undefined  [16] log_size_4_var_031(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0x7e06d6daad146b71);
}



undefined  [16] log_size_4_var_032(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] log_size_4_var_033(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0x5c7fecf5c34358a0);
}



undefined  [16] log_size_4_var_034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0x42ca7c909a4ebcb3);
}



undefined  [16] log_size_4_var_035(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] log_size_4_var_036(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte in_PF;
  
  return CONCAT88(param_3,(ulong)((uint)in_PF | 0x1e457200) + 0x4a713403e1ba8e03);
}



undefined  [16] log_size_4_var_037(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] log_size_4_var_038(void)

{
  return CONCAT88(*(undefined8 *)
                   ((ulong)(((int)register0x00000020 - 0x70U | 0x10) + 0x888b028c) + 0x58),
                  0xb1b81c787771d269);
}



// WARNING: Removing unreachable block (ram,0x00404410)

undefined  [16] log_size_4_var_039(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0xffffffffd098d209);
}



undefined  [16] log_size_4_var_040(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0x75571e59fff8008d);
}



undefined  [16] log_size_4_var_041(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] log_size_4_var_042(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  bool in_PF;
  
  lVar1 = 0xaf7b2896;
  if (!in_PF) {
    lVar1 = -0x9d783280c9408f;
  }
  return CONCAT88(param_3,lVar1 + 0x9d783280c9408f);
}



undefined  [16] log_size_4_var_043(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0x9d68fa1300000000);
}



undefined  [16] log_size_4_var_044(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0x99dd2847da0e0000);
}



// WARNING: Removing unreachable block (ram,0x00404b64)

undefined  [16] log_size_4_var_045(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = 0;
  while ((0x3589df65e4856139U >> uVar1 & 1) == 0) {
    uVar1 = uVar1 + 1;
  }
  uVar2 = (uint)uVar1;
  uVar2 = uVar2 ^ (uint)(uVar2 == 0xec) * (uVar2 ^ 0x333b79e2);
  return CONCAT88(param_3,((ulong)((uint)(uVar2 == 0xec) * (uVar2 & 0xec) ^ 0xec) |
                          0x4200000000000000) + (uVar1 & 0xffffffff00000000 | (ulong)uVar2) +
                          0x2400000000000000);
}



undefined  [16] log_size_4_var_046(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  
  uVar1 = 0;
  while ((0x95d8U >> uVar1 & 1) == 0) {
    uVar1 = uVar1 + 1;
  }
  return CONCAT88(param_3,((ulong)uVar1 | 0x9135c02674700000) + 0x6eca3fd88b8ffffd);
}



undefined  [16] log_size_4_var_047(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] log_size_4_var_048(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0xb7bc2de0f7340935);
}



// WARNING: Removing unreachable block (ram,0x00405015)

undefined  [16] log_size_4_var_049(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0xfffffffffffffc00);
}



undefined  [16] log_size_4_var_050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0x9470af6e91194bb9);
}



// WARNING: Removing unreachable block (ram,0x00405296)

undefined  [16] log_size_4_var_051(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



// WARNING: Removing unreachable block (ram,0x004053b2)

undefined  [16] log_size_4_var_052(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0xfbd3bcbcaa8179ba);
}



// WARNING: Removing unreachable block (ram,0x0040550e)

undefined  [16] log_size_4_var_053(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0xffffffffffffffff);
}



// WARNING: Removing unreachable block (ram,0x00405624)

undefined  [16] log_size_4_var_054(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0xb5d7b9b50100efe9);
}



undefined  [16] log_size_4_var_055(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  
  uVar1 = 0x1f;
  while (0x1d91bbdaU >> uVar1 == 0) {
    uVar1 = uVar1 - 1;
  }
  bVar2 = (char)uVar1 + 0x76;
  lVar3 = CONCAT71(0x72d0c46457d06d,bVar2);
  return CONCAT88(param_3,CONCAT62(0xf0cdceddc703,(ushort)((bVar2 & 1) != 0) + 0xcc2) +
                          CONCAT62(0x72d0c46457d0,(ushort)lVar3 >> 1) +
                          (ulong)(uVar1 & 0xffffff00 | 0x76) + lVar3 + 0x2990a859895c4e6d);
}



undefined  [16] log_size_4_var_056(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] log_size_4_var_057(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  undefined auVar2 [16];
  
  sVar1 = 0;
  while ((0x7e07U >> sVar1 & 1) == 0) {
    sVar1 = sVar1 + 1;
  }
  auVar2 = ZEXT816(0x39601b1902284655) << 0x40 | ZEXT816(0x40c95a9f694c8c49);
  return CONCAT88(param_3,SUB168(auVar2 / ZEXT816(0xdc3ce306ca6850b5),0) +
                          SUB168(auVar2 % ZEXT816(0xdc3ce306ca6850b5),0) +
                          CONCAT62(0x8191cc9535f9,sVar1) + CONCAT62(0x36111b93b04a,0x7865 - sVar1) +
                          -0x4547e84c386d0562);
}



undefined  [16] log_size_4_var_058(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0x81fc5bfa00000000);
}



undefined  [16] log_size_4_var_059(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x3f;
  while (0x9886b48ae45aef61U >> lVar1 == 0) {
    lVar1 = lVar1 + -1;
  }
  return CONCAT88(param_3,(ulong)(uint)((int)lVar1 << 1) + 0xde0d3d8affffff82);
}



undefined  [16] log_size_4_var_060(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] log_size_4_var_061(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined auVar2 [16];
  
  lVar1 = 0x3f;
  while (0x6ee2dd92b09715cfU >> lVar1 == 0) {
    lVar1 = lVar1 + -1;
  }
  auVar2 = CONCAT88(0x184f19b01c6f1b0a,0x3ea9869aa6ec9b14) | (undefined  [16])0xc000000000000000;
  return CONCAT88(param_3,SUB168(auVar2 / ZEXT816(0xfea9869aa6ec9b14),0) +
                          SUB168(auVar2 % ZEXT816(0xfea9869aa6ec9b14),0) + 0x7459d0e25f3ab8d8);
}



undefined  [16] log_size_4_var_062(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0x1f7c);
}



undefined  [16] log_size_4_var_063(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0xbe6d653550d3e3b5);
}



// WARNING: Removing unreachable block (ram,0x00406251)

undefined  [16] log_size_4_var_064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  bool in_PF;
  
  lVar1 = -0x4d83b7c45f310871;
  if (!in_PF) {
    lVar1 = -0x561cfa172172d482;
  }
  return CONCAT88(param_3,lVar1 + 0x561cfa172172d483);
}



// WARNING: Removing unreachable block (ram,0x004063b8)

undefined  [16] log_size_4_var_065(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0x200);
}



undefined  [16] log_size_4_var_066(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] log_size_4_var_067(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] log_size_4_var_068(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0x5f5cb0971721f1ed);
}



// WARNING: Removing unreachable block (ram,0x00406892)

undefined  [16] log_size_4_var_069(void)

{
  return CONCAT88(*(undefined8 *)
                   (((ulong)&stack0xffffffffffffff90 & 0xffffffffffff0000 |
                    (ulong)(ushort)((short)register0x00000020 - 0x6f)) + 0x58),0x390eebab67b833a);
}



undefined  [16] log_size_4_var_070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  undefined auVar4 [16];
  uint uVar5;
  
  auVar4 = ZEXT816(0xdd2a5ca4dba70cdc) * ZEXT816(0x85e21ccacce23138);
  uVar5 = SUB164(auVar4 >> 0x40,0) << 1 | 1;
  uVar1 = 0;
  if (uVar5 != 0) {
    while ((uVar5 >> uVar1 & 1) == 0) {
      uVar1 = uVar1 + 1;
    }
  }
  sVar2 = 0xf;
  if (SUB162(auVar4,0) != 0) {
    while ((ushort)(SUB162(auVar4,0) >> sVar2) == 0) {
      sVar2 = sVar2 + -1;
    }
  }
  sVar3 = 0xf;
  while (0xf6e0U >> sVar3 == 0) {
    sVar3 = sVar3 + -1;
  }
  return CONCAT88(param_3,SUB168(auVar4,0) + CONCAT62(0x48c060e5144a,sVar2) + (ulong)uVar5 +
                          CONCAT62(0x4e2e474274f9,sVar3) + (ulong)uVar1 +
                          (ulong)(uVar1 >> 0x1f | 0x9f2c212a) + -0x79f1b79465180f6b);
}



// WARNING: Removing unreachable block (ram,0x00406af9)

undefined  [16] log_size_4_var_071(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  
  uVar1 = 0xf;
  while (0x4382U >> uVar1 == 0) {
    uVar1 = uVar1 - 1;
  }
  return CONCAT88(param_3,(ulong)((uint)uVar1 | 0xe5390000) + 0x8a005e971ac6fff2);
}



// WARNING: Removing unreachable block (ram,0x00406c14)
// WARNING: Removing unreachable block (ram,0x00406c17)

undefined  [16] log_size_4_var_072(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined auVar3 [16];
  long lVar4;
  
  uVar1 = 0;
  while ((0x18967d71U >> uVar1 & 1) == 0) {
    uVar1 = uVar1 + 1;
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    while ((uVar1 >> uVar2 & 1) == 0) {
      uVar2 = uVar2 + 1;
    }
  }
  auVar3 = ZEXT816((ulong)uVar2) * ZEXT816((ulong)uVar2);
  lVar4 = SUB168(auVar3 >> 0x40,0);
  return CONCAT88(param_3,SUB168(auVar3,0) + (ulong)((uint)(lVar4 != 0) + 0x1022946a) + lVar4 +
                          -0xe8e2e141022946a);
}



undefined  [16] log_size_4_var_073(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0xffffffffffff858a);
}



// WARNING: Removing unreachable block (ram,0x00406e7a)

undefined  [16] log_size_4_var_074(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] log_size_4_var_075(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] log_size_4_var_076(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0xffffffffffff5e50);
}



undefined  [16] log_size_4_var_077(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0;
  while ((0x1e5ee7e9b4c0ecc3U >> lVar1 & 1) == 0) {
    lVar1 = lVar1 + 1;
  }
  return CONCAT88(param_3,(SUB168(SEXT816(-0x67c944020efc103d) * SEXT816(0x1e5ee7e9b4c0ecc3) >> 0x40
                                  ,0) & 0xfffffffffffffff0) + lVar1 + 0xc500fe4925786a0);
}



// WARNING: Removing unreachable block (ram,0x0040734e)

undefined  [16] log_size_4_var_078(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0x1bef035e00000000);
}



undefined  [16] log_size_4_var_079(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] log_size_4_var_080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0x775025ec0000567f);
}



undefined  [16] log_size_4_var_081(void)

{
  char cVar1;
  
  cVar1 = SUB161(ZEXT816(0x17f3071d1cb33386) >> 0x10,0);
  return CONCAT88(*(undefined8 *)(((ulong)&stack0xffffffffffffff90 & 0xfffffffffffbffff) + 0x58),
                  (ulong)(byte)(SUB161(ZEXT816(0x17f3071d1cb33386) >> 0x18,0) + -5 +
                               (((ulong)&stack0xffffffffffffff90 >> 0x12 & 1) != 0)) +
                  (CONCAT62(0x43507c61be76,(short)cVar1) & 0xffffffffffffff00 |
                  (ulong)(byte)(cVar1 + 0x29)) + -0x43507c61be76fff3);
}



undefined  [16] log_size_4_var_082(void)

{
  int iVar1;
  
  iVar1 = 0x1f;
  while (0x1b05bf8U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return CONCAT88(*(undefined8 *)
                   (((ulong)&stack0xffffffffffffff90 & 0xffffffff00000000 |
                    (ulong)((int)register0x00000020 - 0x6f)) + 0x58),0xb1b5fdd21dad9ea3);
}



undefined  [16] log_size_4_var_083(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



// WARNING: Removing unreachable block (ram,0x00407a7f)

undefined  [16] log_size_4_var_084(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  uint uVar2;
  byte bVar3;
  
  uVar1 = 0;
  while ((0xaa23U >> uVar1 & 1) == 0) {
    uVar1 = uVar1 + 1;
  }
  bVar3 = (byte)(uVar1 >> 8);
  uVar2 = 0x1f;
  while (0xbed7ff3bU >> uVar2 == 0) {
    uVar2 = uVar2 - 1;
  }
  return CONCAT88(param_3,CONCAT62(0x2a049a23080a,
                                   uVar1 & 0x7f | (ushort)(byte)(bVar3 >> 2 | bVar3 << 6) << 8) +
                          (ulong)uVar2 + -0x6bddfbc10a0a001f);
}



// WARNING: Removing unreachable block (ram,0x00407bcf)

undefined  [16] log_size_4_var_085(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0xacf0fdd600000000);
}



undefined  [16] log_size_4_var_086(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  while ((0x62648c7bU >> uVar1 & 1) == 0) {
    uVar1 = uVar1 + 1;
  }
  return CONCAT88(param_3,(ulong)(uVar1 & 0xffff0000 |
                                 (uint)(ushort)((ushort)uVar1 ^ ((ushort)uVar1 >> 2 & 1) << 2)) +
                          0x6c838cffffffffc);
}



undefined  [16] log_size_4_var_087(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  long lVar2;
  
  lVar2 = SUB168(SEXT816(-0x3ecec4170656147d) * SEXT416(-0x637887f5) >> 0x40,0);
  sVar1 = 0xf;
  while (0x8ddaU >> sVar1 == 0) {
    sVar1 = sVar1 + -1;
  }
  return CONCAT88(param_3,((ulong)(ushort)(sVar1 << 1) | 0x400000000) +
                          (CONCAT62(0xc6955d3c89d7,
                                    CONCAT11((byte)(CONCAT11(lVar2 != 0 && lVar2 != -1,0x53) >> 5) |
                                             0x30,0xbf)) & 0xffffffffffffff00 | 0xdc) +
                          CONCAT62(0xb7a1b7c77038,sVar1) + -0x7e371507fa0f3b09);
}



// WARNING: Removing unreachable block (ram,0x00407f57)
// WARNING: Removing unreachable block (ram,0x00407f73)

undefined  [16] log_size_4_var_088(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0x3096410600000000);
}



// WARNING: Removing unreachable block (ram,0x004080a7)

undefined  [16] log_size_4_var_089(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  
  uVar1 = 0;
  while ((0x342cU >> uVar1 & 1) == 0) {
    uVar1 = uVar1 + 1;
  }
  return CONCAT88(param_3,SUB168(ZEXT816(0x523d8e59d9b747a3) * ZEXT816(0x935ef6ecbab462ca),0) +
                          SUB168(ZEXT816(0x523d8e59d9b747a3) * ZEXT816(0x935ef6ecbab462ca) >> 0x40,0
                                ) + (ulong)((uint)uVar1 | 0x88800000) + 0x419481e7a652a575);
}



undefined  [16] log_size_4_var_090(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0xea87a67c00000000);
}



// WARNING: Removing unreachable block (ram,0x004082ef)
// WARNING: Removing unreachable block (ram,0x0040830c)

undefined  [16] log_size_4_var_091(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



// WARNING: Removing unreachable block (ram,0x00408424)

undefined  [16] log_size_4_var_092(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  
  uVar1 = 0xf;
  while (0x9035U >> uVar1 == 0) {
    uVar1 = uVar1 - 1;
  }
  return CONCAT88(param_3,((ulong)uVar1 | 0x555953bb4ad80000) + 0xae04cd41b527fff1);
}



// WARNING: Removing unreachable block (ram,0x0040856a)

undefined  [16] log_size_4_var_093(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,(SUB168(ZEXT816(0x520d856c00c64089) >> 0x3d,0) | 0x20d856c00c640890) +
                          0xdf27a93ff39bf76e);
}



undefined  [16] log_size_4_var_094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0x3158280514395aab);
}



undefined  [16] log_size_4_var_095(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] log_size_4_var_096(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return ZEXT816(param_3) << 0x40;
}



undefined  [16] log_size_4_var_097(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = SUB168(SEXT816(0x358cfa3f78a315bc) * SEXT416(0x3ccf7164) >> 0x40,0);
  return CONCAT88(param_3,((ulong)(lVar1 != 0 && lVar1 != -1) + 0x7e0b13df32e1dbdc &
                           0xffffffffffff0000 | 0xffff) + 0x81f4ec20cd1e0001);
}



undefined  [16] log_size_4_var_098(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  bool in_PF;
  
  lVar1 = -0x278e37d1b0c9e2b5;
  if (!in_PF) {
    lVar1 = -0x278e37d1b0c9017b;
  }
  return CONCAT88(param_3,lVar1 + 0x268e37d1b0c9017b);
}



undefined  [16] log_size_4_var_099(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return CONCAT88(param_3,0x6558521600000000);
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


