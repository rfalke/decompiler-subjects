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
    SHT_DYNSYM=11,
    SHT_SUNW_syminfo=1879048188,
    SHT_DYNAMIC=6,
    SHT_SUNW_move=1879048186
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
    PT_GNU_STACK=1685382481,
    PT_NOTE=4,
    PT_INTERP=3,
    PT_PHDR=6,
    PT_LOAD=1,
    PT_NULL=0,
    PT_DYNAMIC=2,
    PT_SHLIB=5,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_RELRO=1685382482,
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
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
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
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  int iVar77;
  int iVar78;
  int iVar79;
  int iVar80;
  int iVar81;
  int iVar82;
  int iVar83;
  int iVar84;
  int iVar85;
  int iVar86;
  int iVar87;
  int iVar88;
  int iVar89;
  int iVar90;
  int iVar91;
  int iVar92;
  int iVar93;
  int iVar94;
  int iVar95;
  int iVar96;
  int iVar97;
  int iVar98;
  int iVar99;
  int iVar100;
  
  iVar1 = log_size_4_var_000(&stack0x00000004);
  iVar2 = log_size_4_var_001();
  iVar3 = log_size_4_var_002();
  iVar4 = log_size_4_var_003();
  iVar5 = log_size_4_var_004();
  iVar6 = log_size_4_var_005();
  iVar7 = log_size_4_var_006();
  iVar8 = log_size_4_var_007();
  iVar9 = log_size_4_var_008();
  iVar10 = log_size_4_var_009();
  iVar11 = log_size_4_var_010();
  iVar12 = log_size_4_var_011();
  iVar13 = log_size_4_var_012();
  iVar14 = log_size_4_var_013();
  iVar15 = log_size_4_var_014();
  iVar16 = log_size_4_var_015();
  iVar17 = log_size_4_var_016();
  iVar18 = log_size_4_var_017();
  iVar19 = log_size_4_var_018();
  iVar20 = log_size_4_var_019();
  iVar21 = log_size_4_var_020();
  iVar22 = log_size_4_var_021();
  iVar23 = log_size_4_var_022();
  iVar24 = log_size_4_var_023();
  iVar25 = log_size_4_var_024();
  iVar26 = log_size_4_var_025();
  iVar27 = log_size_4_var_026();
  iVar28 = log_size_4_var_027();
  iVar29 = log_size_4_var_028();
  iVar30 = log_size_4_var_029();
  iVar31 = log_size_4_var_030();
  iVar32 = log_size_4_var_031();
  iVar33 = log_size_4_var_032();
  iVar34 = log_size_4_var_033();
  iVar35 = log_size_4_var_034();
  iVar36 = log_size_4_var_035();
  iVar37 = log_size_4_var_036();
  iVar38 = log_size_4_var_037();
  iVar39 = log_size_4_var_038();
  iVar40 = log_size_4_var_039();
  iVar41 = log_size_4_var_040();
  iVar42 = log_size_4_var_041();
  iVar43 = log_size_4_var_042();
  iVar44 = log_size_4_var_043();
  iVar45 = log_size_4_var_044();
  iVar46 = log_size_4_var_045();
  iVar47 = log_size_4_var_046();
  iVar48 = log_size_4_var_047();
  iVar49 = log_size_4_var_048();
  iVar50 = log_size_4_var_049();
  iVar51 = log_size_4_var_050();
  iVar52 = log_size_4_var_051();
  iVar53 = log_size_4_var_052();
  iVar54 = log_size_4_var_053();
  iVar55 = log_size_4_var_054();
  iVar56 = log_size_4_var_055();
  iVar57 = log_size_4_var_056();
  iVar58 = log_size_4_var_057();
  iVar59 = log_size_4_var_058();
  iVar60 = log_size_4_var_059();
  iVar61 = log_size_4_var_060();
  iVar62 = log_size_4_var_061();
  iVar63 = log_size_4_var_062();
  iVar64 = log_size_4_var_063();
  iVar65 = log_size_4_var_064();
  iVar66 = log_size_4_var_065();
  iVar67 = log_size_4_var_066();
  iVar68 = log_size_4_var_067();
  iVar69 = log_size_4_var_068();
  iVar70 = log_size_4_var_069();
  iVar71 = log_size_4_var_070();
  iVar72 = log_size_4_var_071();
  iVar73 = log_size_4_var_072();
  iVar74 = log_size_4_var_073();
  iVar75 = log_size_4_var_074();
  iVar76 = log_size_4_var_075();
  iVar77 = log_size_4_var_076();
  iVar78 = log_size_4_var_077();
  iVar79 = log_size_4_var_078();
  iVar80 = log_size_4_var_079();
  iVar81 = log_size_4_var_080();
  iVar82 = log_size_4_var_081();
  iVar83 = log_size_4_var_082();
  iVar84 = log_size_4_var_083();
  iVar85 = log_size_4_var_084();
  iVar86 = log_size_4_var_085();
  iVar87 = log_size_4_var_086();
  iVar88 = log_size_4_var_087();
  iVar89 = log_size_4_var_088();
  iVar90 = log_size_4_var_089();
  iVar91 = log_size_4_var_090();
  iVar92 = log_size_4_var_091();
  iVar93 = log_size_4_var_092();
  iVar94 = log_size_4_var_093();
  iVar95 = log_size_4_var_094();
  iVar96 = log_size_4_var_095();
  iVar97 = log_size_4_var_096();
  iVar98 = log_size_4_var_097();
  iVar99 = log_size_4_var_098();
  iVar100 = log_size_4_var_099();
  if (iVar1 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
      iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + iVar19 + iVar20 + iVar21 +
      iVar22 + iVar23 + iVar24 + iVar25 + iVar26 + iVar27 + iVar28 + iVar29 + iVar30 + iVar31 +
      iVar32 + iVar33 + iVar34 + iVar35 + iVar36 + iVar37 + iVar38 + iVar39 + iVar40 + iVar41 +
      iVar42 + iVar43 + iVar44 + iVar45 + iVar46 + iVar47 + iVar48 + iVar49 + iVar50 + iVar51 +
      iVar52 + iVar53 + iVar54 + iVar55 + iVar56 + iVar57 + iVar58 + iVar59 + iVar60 + iVar61 +
      iVar62 + iVar63 + iVar64 + iVar65 + iVar66 + iVar67 + iVar68 + iVar69 + iVar70 + iVar71 +
      iVar72 + iVar73 + iVar74 + iVar75 + iVar76 + iVar77 + iVar78 + iVar79 + iVar80 + iVar81 +
      iVar82 + iVar83 + iVar84 + iVar85 + iVar86 + iVar87 + iVar88 + iVar89 + iVar90 + iVar91 +
      iVar92 + iVar93 + iVar94 + iVar95 + iVar96 + iVar97 + iVar98 + iVar99 + iVar100 == 0) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  __assert_fail("sum==0","source_complex_with_base_100_funcs_of_size_16.c",0xd3,
                (char *)&__PRETTY_FUNCTION___2306);
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



// WARNING: Removing unreachable block (ram,0x080493cc)
// WARNING: Removing unreachable block (ram,0x080493d5)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x08049418)
// WARNING: Removing unreachable block (ram,0x08049421)

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



undefined4 log_size_4_var_000(void)

{
  return 0;
}



undefined4 log_size_4_var_001(void)

{
  return 0;
}



undefined4 log_size_4_var_002(void)

{
  return 0;
}



undefined4 log_size_4_var_003(void)

{
  return 0;
}



undefined4 log_size_4_var_004(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080496f7)
// WARNING: Removing unreachable block (ram,0x08049701)

undefined4 log_size_4_var_005(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804975f)
// WARNING: Removing unreachable block (ram,0x08049781)

undefined4 log_size_4_var_006(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080497df)

undefined4 log_size_4_var_007(void)

{
  return 0;
}



undefined4 log_size_4_var_008(void)

{
  return 0;
}



undefined4 log_size_4_var_009(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804993e)
// WARNING: Removing unreachable block (ram,0x08049942)

undefined4 log_size_4_var_010(void)

{
  return 0;
}



undefined4 log_size_4_var_011(void)

{
  return 0;
}



undefined4 log_size_4_var_012(void)

{
  return 0;
}



undefined4 log_size_4_var_013(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08049b18)
// WARNING: Removing unreachable block (ram,0x08049b1b)

undefined4 log_size_4_var_014(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08049b74)

undefined4 log_size_4_var_015(void)

{
  return 0;
}



undefined4 log_size_4_var_016(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08049c43)
// WARNING: Removing unreachable block (ram,0x08049c62)

int log_size_4_var_017(void)

{
  char in_AF;
  
  return CONCAT22(0x4e03,(ushort)(byte)(in_AF << 4 | 0x83) << 8 | 0x80) + -0x4e038380;
}



int log_size_4_var_018(void)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  
  uVar1 = 0;
  while ((0xbec3eebfU >> uVar1 & 1) == 0) {
    uVar1 = uVar1 + 1;
  }
  uVar3 = (ushort)uVar1;
  uVar2 = (uint)(ushort)((uVar3 & 0x3fff) / 0xff | (uVar3 & 0x3fff) % 0xff << 8);
  return (uVar2 << 0x14 | (uVar2 | 0x3d620000) >> 0xc) +
         (uVar1 & 0xffff0000 | (uint)(ushort)(uVar3 + 0x265a)) +
         CONCAT22(0x2b87,0xd9a5 < uVar3 | 0x8f04) + -0x2b8b8b7e;
}



undefined4 log_size_4_var_019(void)

{
  return 0;
}



undefined4 log_size_4_var_020(void)

{
  return 0;
}



undefined4 log_size_4_var_021(void)

{
  return 0x1000000;
}



undefined4 log_size_4_var_022(void)

{
  return 0;
}



undefined4 log_size_4_var_023(void)

{
  return 0;
}



undefined4 log_size_4_var_024(void)

{
  return 0;
}



undefined4 log_size_4_var_025(void)

{
  return 0;
}



undefined4 log_size_4_var_026(void)

{
  return 0;
}



undefined4 log_size_4_var_027(void)

{
  return 0;
}



int log_size_4_var_028(void)

{
  uint uVar1;
  char in_AF;
  
  uVar1 = 0x1f;
  while (0xce1d0521U >> uVar1 == 0) {
    uVar1 = uVar1 - 1;
  }
  return (CONCAT22(0xba53,(ushort)(byte)(in_AF << 4) << 8 | 0x1b) | 0x200) +
         (uVar1 & 0xffff0000 | uVar1 >> 7 & 0x1ff) + 0x45acfde5;
}



// WARNING: Removing unreachable block (ram,0x0804a190)

undefined4 log_size_4_var_029(void)

{
  return 0;
}



undefined4 log_size_4_var_030(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804a266)
// WARNING: Removing unreachable block (ram,0x0804a275)

undefined4 log_size_4_var_031(void)

{
  return 0;
}



int log_size_4_var_032(void)

{
  int iVar1;
  
  iVar1 = 0x1f;
  while (0x7cbc020bU >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return iVar1 + -0x1e;
}



// WARNING: Removing unreachable block (ram,0x0804a34a)
// WARNING: Removing unreachable block (ram,0x0804a35e)

undefined4 log_size_4_var_033(void)

{
  return 0;
}



undefined4 log_size_4_var_034(void)

{
  return 0;
}



undefined4 log_size_4_var_035(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804a4ab)

undefined4 log_size_4_var_036(void)

{
  return 0;
}



undefined4 log_size_4_var_037(void)

{
  int iVar1;
  
  iVar1 = 0x1f;
  while (0x9c077785U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return 0xfffffffd;
}



// WARNING: Removing unreachable block (ram,0x0804a585)

undefined4 log_size_4_var_038(void)

{
  return 0;
}



undefined4 log_size_4_var_039(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804a64d)

undefined4 log_size_4_var_040(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804a6c7)
// WARNING: Removing unreachable block (ram,0x0804a6dc)

undefined4 log_size_4_var_041(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804a737)

undefined4 log_size_4_var_042(void)

{
  return 0;
}



undefined4 log_size_4_var_043(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804a834)

undefined4 log_size_4_var_044(void)

{
  return 0;
}



undefined4 log_size_4_var_045(void)

{
  return 0;
}



undefined4 log_size_4_var_046(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804a973)
// WARNING: Removing unreachable block (ram,0x0804a980)

undefined4 log_size_4_var_047(void)

{
  return 0;
}



undefined4 log_size_4_var_048(void)

{
  return 0;
}



undefined4 log_size_4_var_049(void)

{
  return 0;
}



undefined4 log_size_4_var_050(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804ab32)

undefined4 log_size_4_var_051(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804ab9d)

undefined4 log_size_4_var_052(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804ac2a)

undefined4 log_size_4_var_053(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804aca5)
// WARNING: Removing unreachable block (ram,0x0804acac)
// WARNING: Removing unreachable block (ram,0x0804ac9b)

undefined4 log_size_4_var_054(void)

{
  return 0;
}



undefined4 log_size_4_var_055(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804ad7c)

int log_size_4_var_056(void)

{
  int iVar1;
  
  iVar1 = 0x1f;
  while (0xd379aebaU >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return iVar1 + -0x1f;
}



undefined4 log_size_4_var_057(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804ae36)

undefined4 log_size_4_var_058(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804aebb)

undefined4 log_size_4_var_059(void)

{
  return 0;
}



undefined4 log_size_4_var_060(void)

{
  return 0;
}



undefined4 log_size_4_var_061(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804aff8)

undefined4 log_size_4_var_062(void)

{
  return 0;
}



undefined4 log_size_4_var_063(void)

{
  return 0;
}



undefined4 log_size_4_var_064(void)

{
  return 0;
}



undefined4 log_size_4_var_065(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804b1bf)

int log_size_4_var_066(void)

{
  int iVar1;
  ushort uVar2;
  char in_AF;
  
  iVar1 = CONCAT22(0x3c33,CONCAT11(in_AF << 4 | 0x82,0xff)) + 0x54bbe33a;
  uVar2 = -(short)(char)((uint)iVar1 >> 8);
  return CONCAT22(0x3c33,uVar2 & 0xff | (ushort)(byte)-(char)(uVar2 >> 8) << 8) + iVar1 +
         (-0x91dcdad >> ((byte)iVar1 & 0x1f)) + 0x32dd9832;
}



undefined4 log_size_4_var_067(void)

{
  return 0;
}



undefined4 log_size_4_var_068(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804b318)

undefined4 log_size_4_var_069(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804b398)
// WARNING: Removing unreachable block (ram,0x0804b395)
// WARNING: Removing unreachable block (ram,0x0804b39c)

undefined4 log_size_4_var_070(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804b3f5)

undefined4 log_size_4_var_071(void)

{
  return 0;
}



undefined4 log_size_4_var_072(void)

{
  return 0;
}



undefined4 log_size_4_var_073(void)

{
  return 0;
}



undefined4 log_size_4_var_074(void)

{
  return 0xfff80000;
}



// WARNING: Removing unreachable block (ram,0x0804b5ac)
// WARNING: Removing unreachable block (ram,0x0804b5b0)

undefined4 log_size_4_var_075(void)

{
  return 0;
}



undefined4 log_size_4_var_076(void)

{
  return 0;
}



int log_size_4_var_077(void)

{
  int iVar1;
  
  iVar1 = 0;
  while ((0xfd65c23cU >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return ((byte)iVar1 & 0xf3) - 2;
}



undefined4 log_size_4_var_078(void)

{
  return 0;
}



undefined4 log_size_4_var_079(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804b7eb)

undefined4 log_size_4_var_080(void)

{
  return 0;
}



int log_size_4_var_081(void)

{
  uint uVar1;
  ushort uVar2;
  char cVar3;
  
  uVar1 = 0x1f;
  while (0xba05a0a7U >> uVar1 == 0) {
    uVar1 = uVar1 - 1;
  }
  cVar3 = (char)(uVar1 >> 8);
  uVar2 = CONCAT11(cVar3 << 7 | (byte)(CONCAT11(1,cVar3) >> 2),(char)uVar1);
  return (uVar1 & 0xffff0000 | (uint)uVar2) + CONCAT22(0xe09e,uVar2 >> 3 | 0xc000) + 0x1f60f7de;
}



undefined4 log_size_4_var_082(void)

{
  return 0;
}



int log_size_4_var_083(void)

{
  int iVar1;
  
  iVar1 = 0x1f;
  while (0x8d69d07U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return iVar1 + -0x1b;
}



undefined4 log_size_4_var_084(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804ba3c)
// WARNING: Removing unreachable block (ram,0x0804ba45)

undefined4 log_size_4_var_085(void)

{
  return 0;
}



undefined4 log_size_4_var_086(void)

{
  return 0;
}



undefined4 log_size_4_var_087(void)

{
  return 0;
}



undefined4 log_size_4_var_088(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804bbf8)
// WARNING: Removing unreachable block (ram,0x0804bbfd)

undefined4 log_size_4_var_089(void)

{
  return 0;
}



undefined4 log_size_4_var_090(void)

{
  return 0;
}



undefined4 log_size_4_var_091(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804bd5f)

undefined4 log_size_4_var_092(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804bdbd)

undefined4 log_size_4_var_093(void)

{
  return 0;
}



undefined4 log_size_4_var_094(void)

{
  return 0;
}



undefined4 log_size_4_var_095(void)

{
  return 0;
}



int log_size_4_var_096(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  while ((0x65227600U >> uVar1 & 1) == 0) {
    uVar1 = uVar1 + 1;
  }
  uVar2 = uVar1 & 0xffff | 0x27c0000;
  return CONCAT22(0x3a60,((ushort)((ushort)(uVar2 < 0x80b80327) << 8) >> 5) << 8) +
         (uVar1 & 0xffff0000 | 0x7565) + uVar2 + -0x3cdc7d6e;
}



// WARNING: Removing unreachable block (ram,0x0804bf87)

undefined4 log_size_4_var_097(void)

{
  return 0;
}



uint log_size_4_var_098(void)

{
  int iVar1;
  
  iVar1 = 0x1f;
  while (0x5920c8a9U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return iVar1 >> 0x1f & 0xffff0000U | (uint)(iVar1 >> 0x1f) >> 8 & 0xff;
}



undefined4 log_size_4_var_099(void)

{
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


