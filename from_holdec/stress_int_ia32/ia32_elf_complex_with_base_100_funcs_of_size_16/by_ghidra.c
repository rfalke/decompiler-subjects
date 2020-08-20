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



longlong log_size_4_var_000(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 log_size_4_var_001(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  uVar2 = 0x1f;
  while (0xd8215683U >> uVar2 == 0) {
    uVar2 = uVar2 - 1;
  }
  iVar1 = 0;
  while ((0xbf201840U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return CONCAT44(in_EDX,iVar1 + (uVar2 >> 3 | 0xa0000000) + 0x5ffffff7);
}



undefined8 log_size_4_var_002(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0;
  while ((0x9b92d049U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return CONCAT44(in_EDX,0xee9);
}



longlong log_size_4_var_003(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08049665)

longlong log_size_4_var_004(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 log_size_4_var_005(void)

{
  uint uVar1;
  undefined4 in_EDX;
  bool in_PF;
  
  uVar1 = 0x1f;
  while (0xd3cdecdbU >> uVar1 == 0) {
    uVar1 = uVar1 - 1;
  }
  return CONCAT44(in_EDX,(uVar1 & 0xffff0000 | (uint)CONCAT11(!in_PF,(byte)uVar1)) +
                         (-0x681795dd >> ((byte)uVar1 & 0x1f)) + -0x1e);
}



undefined8 log_size_4_var_006(void)

{
  uint uVar1;
  undefined4 in_EDX;
  
  uVar1 = 0;
  while ((0x1041aba8U >> uVar1 & 1) == 0) {
    uVar1 = uVar1 + 1;
  }
  return CONCAT44(in_EDX,(~(1 << (uVar1 & 0x1f)) & 0x2bdde3e5U) + uVar1 + -0x2bdde3e8);
}



// WARNING: Removing unreachable block (ram,0x080497df)

longlong log_size_4_var_007(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08049830)

longlong log_size_4_var_008(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 log_size_4_var_009(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0;
  while ((0xf3c9018aU >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return CONCAT44(in_EDX,iVar1 + -0x201);
}



longlong log_size_4_var_010(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong log_size_4_var_011(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080499f5)

longlong log_size_4_var_012(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong log_size_4_var_013(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 log_size_4_var_014(void)

{
  int iVar1;
  undefined4 in_EDX;
  bool in_PF;
  
  iVar1 = -0x95921ad;
  if (!in_PF) {
    iVar1 = -0x95992f0;
  }
  return CONCAT44(in_EDX,iVar1 + CONCAT22(0xc13c,CONCAT11(!in_PF,0xc4)) + 0x481d1fe9);
}



undefined8 log_size_4_var_015(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x4efe63c0);
}



// WARNING: Removing unreachable block (ram,0x08049bc5)

longlong log_size_4_var_016(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 log_size_4_var_017(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfff7ffb6);
}



// WARNING: Removing unreachable block (ram,0x08049c93)

undefined8 log_size_4_var_018(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfa62eb34);
}



undefined8 log_size_4_var_019(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffb8f6);
}



undefined8 log_size_4_var_020(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x25f6bb7f;
  if (in_PF) {
    iVar1 = 0x57f9e2f9;
  }
  return CONCAT44(in_EDX,iVar1 + 0x25f6bb7f);
}



longlong log_size_4_var_021(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 log_size_4_var_022(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffff68);
}



longlong log_size_4_var_023(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08049f3d)

longlong log_size_4_var_024(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 log_size_4_var_025(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffffc9);
}



// WARNING: Removing unreachable block (ram,0x0804a031)

longlong log_size_4_var_026(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804a082)

undefined8 log_size_4_var_027(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffff00e);
}



// WARNING: Removing unreachable block (ram,0x0804a110)

longlong log_size_4_var_028(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong log_size_4_var_029(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 log_size_4_var_030(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x644990bf;
  if (in_PF) {
    iVar1 = -0x413e542c;
  }
  return CONCAT44(in_EDX,iVar1 + 0x413e542c);
}



longlong log_size_4_var_031(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 log_size_4_var_032(void)

{
  uint uVar1;
  undefined4 in_EDX;
  char in_PF;
  
  uVar1 = 0;
  while ((0xbbe8f012U >> uVar1 & 1) == 0) {
    uVar1 = uVar1 + 1;
  }
  return CONCAT44(in_EDX,(uVar1 & 0xffff0000 |
                         (uint)(ushort)(CONCAT11(in_PF << 2,(char)uVar1) | 0x1300)) + uVar1 +
                         -0x1702);
}



undefined8 log_size_4_var_033(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x1aee);
}



// WARNING: Removing unreachable block (ram,0x0804a3c8)

longlong log_size_4_var_034(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong log_size_4_var_035(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong log_size_4_var_036(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 log_size_4_var_037(void)

{
  undefined4 in_EDX;
  undefined in_PF;
  
  return CONCAT44(in_EDX,((uint)CONCAT11(in_PF,0xb4) | 0x79b80000) + 0x8647fe4c);
}



longlong log_size_4_var_038(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong log_size_4_var_039(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong log_size_4_var_040(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong log_size_4_var_041(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong log_size_4_var_042(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong log_size_4_var_043(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804a834)

longlong log_size_4_var_044(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804a8a0)

undefined8 log_size_4_var_045(void)

{
  undefined4 in_EDX;
  uint uVar1;
  
  uVar1 = 0x1f;
  while (0x5865e85eU >> uVar1 == 0) {
    uVar1 = uVar1 - 1;
  }
  uVar1 = uVar1 & 0xffffff00 | (uint)(byte)((byte)uVar1 ^ 0x9b);
  return CONCAT44(in_EDX,uVar1 + ((uint)(ushort)(1 << ((ushort)uVar1 & 0xf) | 0x7cf6) | 0x83c90000)
                         + 0x7c368285);
}



undefined8 log_size_4_var_046(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfc000000);
}



longlong log_size_4_var_047(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804a9ed)
// WARNING: Removing unreachable block (ram,0x0804a9ff)

longlong log_size_4_var_048(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong log_size_4_var_049(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804aaeb)

undefined8 log_size_4_var_050(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffff791);
}



longlong log_size_4_var_051(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong log_size_4_var_052(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong log_size_4_var_053(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 log_size_4_var_054(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x1000000);
}



longlong log_size_4_var_055(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 log_size_4_var_056(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x10000);
}



longlong log_size_4_var_057(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong log_size_4_var_058(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 log_size_4_var_059(void)

{
  uint uVar1;
  undefined4 in_EDX;
  
  uVar1 = 0;
  while ((0xf188c295U >> uVar1 & 1) == 0) {
    uVar1 = uVar1 + 1;
  }
  return CONCAT44(in_EDX,(uVar1 ^ (uVar1 >> 2 & 1) << 2) - 4);
}



undefined8 log_size_4_var_060(void)

{
  undefined4 in_EDX;
  undefined in_PF;
  
  return CONCAT44(in_EDX,CONCAT22(0x18fb,CONCAT11(in_PF,1) + 0x69b4) + -0x18fb69b5);
}



undefined8 log_size_4_var_061(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x8b98facd);
}



undefined8 log_size_4_var_062(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffff8682);
}



longlong log_size_4_var_063(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 log_size_4_var_064(void)

{
  uint uVar1;
  undefined4 in_EDX;
  
  uVar1 = 0;
  while ((0x17488682U >> uVar1 & 1) == 0) {
    uVar1 = uVar1 + 1;
  }
  return CONCAT44(in_EDX,(uVar1 & 0xffff0000 | (uint)(ushort)((short)uVar1 + 0xcd7c)) - 0xcd7d);
}



longlong log_size_4_var_065(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804b211)

undefined8 log_size_4_var_066(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x28);
}



longlong log_size_4_var_067(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 log_size_4_var_068(void)

{
  ushort uVar1;
  undefined4 in_EDX;
  char in_PF;
  char in_AF;
  
  uVar1 = ((ushort)(byte)(in_AF << 4 | in_PF << 2 | 2) << 8 | 0x48) >> 1;
  return CONCAT44(in_EDX,CONCAT22(0xe05c,uVar1) +
                         ((uint)CONCAT11('\x03' - (char)uVar1,0xb7) | 0xad4e0000) + 0x72551d25);
}



undefined8 log_size_4_var_069(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x1566aaee);
}



undefined8 log_size_4_var_070(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x9b2c8d59);
}



longlong log_size_4_var_071(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 log_size_4_var_072(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x745585c5;
  if (!in_PF) {
    iVar1 = 0x77fde73b;
  }
  return CONCAT44(in_EDX,iVar1 + 0x745585c5);
}



// WARNING: Removing unreachable block (ram,0x0804b52b)

undefined8 log_size_4_var_073(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xa9b8b9df);
}



undefined8 log_size_4_var_074(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xcbccd20d);
}



longlong log_size_4_var_075(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong log_size_4_var_076(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 log_size_4_var_077(void)

{
  ushort uVar1;
  uint uVar2;
  undefined4 in_EDX;
  ushort uVar3;
  bool in_PF;
  
  uVar2 = 0x8f89923;
  if (!in_PF) {
    uVar2 = 0x8c24571c;
  }
  uVar1 = (ushort)uVar2;
  uVar3 = (ushort)(uVar1 == 0xa7b7) * (uVar1 ^ 0xa7b7) ^ 0xa7b7;
  _uVar1 = uVar2 & 0xffff0000 | (uint)(ushort)(uVar1 ^ (ushort)(uVar1 == 0xa7b7) * (uVar1 & uVar3));
  uVar2 = (_uVar1 & 0x7fffff80) << 1;
  uVar3 = uVar3 - 1;
  return CONCAT44(in_EDX,(uVar2 | -1 < (int)_uVar1) +
                         ((uint)(ushort)((short)(uVar3 & 0xff |
                                                (ushort)(byte)((byte)(uVar3 >> 9) | 0x80) << 8) >>
                                        0x1c) | 0xec420000) +
                         CONCAT22(0x6e63,CONCAT11((byte)(uVar2 >> 8) & 0x34,0xdc)) + -0x72ef53db);
}



longlong log_size_4_var_078(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong log_size_4_var_079(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804b84e)

longlong log_size_4_var_080(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 log_size_4_var_081(void)

{
  undefined4 in_EDX;
  undefined in_PF;
  
  return CONCAT44(in_EDX,((uint)(CONCAT11(in_PF,0x86) & 0xff7f) | 0xfff30000) + 0xcfefa);
}



longlong log_size_4_var_082(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong log_size_4_var_083(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 log_size_4_var_084(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x31608516);
}



undefined8 log_size_4_var_085(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0x1f;
  while (0x2488fbb0U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return CONCAT44(in_EDX,iVar1 + 0xe218);
}



// WARNING: Removing unreachable block (ram,0x0804bb05)

undefined8 log_size_4_var_086(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0x1f;
  while (0x9852475cU >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return CONCAT44(in_EDX,iVar1 + -0x1f);
}



longlong log_size_4_var_087(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804bbe5)

undefined8 log_size_4_var_088(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x85);
}



longlong log_size_4_var_089(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 log_size_4_var_090(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x410dffd4;
  if (!in_PF) {
    iVar1 = -0x3dca514e;
  }
  return CONCAT44(in_EDX,iVar1 + 0x3dca514e);
}



longlong log_size_4_var_091(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0;
  while ((0x7b1e9b18U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 log_size_4_var_092(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xb);
}



undefined8 log_size_4_var_093(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x2974);
}



longlong log_size_4_var_094(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong log_size_4_var_095(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 log_size_4_var_096(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  ushort uVar7;
  undefined4 in_EDX;
  
  uVar1 = 0x1f;
  while (0x4d058716U >> uVar1 == 0) {
    uVar1 = uVar1 - 1;
  }
  uVar3 = (uVar1 & 0xffff) * 0xa087;
  uVar4 = uVar3 & 0xffff;
  uVar6 = uVar4 | 0xb28e0000;
  uVar2 = 0x1f;
  if (uVar6 != 0) {
    while (uVar6 >> uVar2 == 0) {
      uVar2 = uVar2 - 1;
    }
  }
  uVar5 = (ushort)uVar4;
  uVar7 = (ushort)uVar1;
  uVar7 = uVar7 ^ (ushort)(uVar5 == uVar7) * (uVar7 ^ uVar5);
  uVar5 = uVar5 ^ (ushort)(uVar5 == uVar7) * (uVar5 & uVar7);
  return CONCAT44(in_EDX,((uint)uVar5 | 0xb28e0000) +
                         (uVar1 & 0xffff0000 |
                         (uint)(ushort)(uVar7 & 0xff |
                                       (ushort)(byte)((char)((uint)uVar7 >> 8) + -99 +
                                                     (uVar5 < uVar7)) << 8)) +
                         CONCAT22(0x4d05,(short)(uVar3 >> 0x10)) +
                         (uVar2 & 0xffff0000 | (uint)(ushort)((ushort)uVar2 | 1 << (uVar5 & 0xf))) +
                         0x6c2293);
}



undefined8 log_size_4_var_097(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x5a123426);
}



// WARNING: Removing unreachable block (ram,0x0804c036)

undefined8 log_size_4_var_098(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x3bbb);
}



longlong log_size_4_var_099(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
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


