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
} Elf64_DynTag;

typedef enum Elf_ProgramHeaderType {
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
    PT_GNU_RELRO=1685382482
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
    SHT_GNU_versym=1879048191
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



// WARNING: Removing unreachable block (ram,0x0040152d)

undefined8 log_size_4_var_000(void)

{
  return 0;
}



long log_size_4_var_001(void)

{
  undefined auVar1 [16];
  
  auVar1 = ZEXT816(0xbb089eceb3d4a8dd) * ZEXT816(0x515b2271e7cae944);
  return CONCAT62(SUB166(auVar1 >> 0x10,0),(short)SUB161(auVar1,0)) + SUB168(auVar1 >> 0x40,0) +
         -0x287e4dc8332ec95f;
}



// WARNING: Removing unreachable block (ram,0x00401771)
// WARNING: Removing unreachable block (ram,0x00401785)

long log_size_4_var_002(void)

{
  ushort uVar1;
  
  for (uVar1 = 0; (0x6a1cU >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
  }
  return ((ulong)uVar1 | 0x4c181037d470000) + 0xfb3e7efc82b8fffe;
}



undefined8 log_size_4_var_003(void)

{
  return SUB168(SEXT816(1) * SEXT816(0x1471ade2094b48b7) >> 0x40,0);
}



// WARNING: Removing unreachable block (ram,0x00401a03)

undefined8 log_size_4_var_004(void)

{
  return 0xffffffffffffdb00;
}



// WARNING: Removing unreachable block (ram,0x00401b21)

undefined8 log_size_4_var_005(void)

{
  return 0;
}



undefined8 log_size_4_var_006(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00401d74)
// WARNING: Removing unreachable block (ram,0x00401d7d)

long log_size_4_var_007(void)

{
  uint uVar1;
  char in_AF;
  
  uVar1 = ((uint3)(CONCAT21(0xc9e7,in_AF << 4) | 3) & 0x3fffff) << 8 | 0xaa;
  return CONCAT62(0xa288ef9cd82f,(short)(uVar1 / 0xcd0a)) +
         ((ulong)(ushort)(uVar1 % 0xcd0a) | 0xa6340000) + 0x5d771062819cd49b;
}



undefined8 log_size_4_var_008(void)

{
  return 0;
}



long log_size_4_var_009(void)

{
  short sVar1;
  
  for (sVar1 = 0xf; 0x6c51U >> sVar1 == 0; sVar1 = sVar1 + -1) {
  }
  return CONCAT62(0x889bc94aa4a4,sVar1) + 0x776436b55b5bfff2;
}



long log_size_4_var_010(void)

{
  ulong uVar1;
  undefined auVar2 [16];
  
  auVar2 = ZEXT116(1) << 0x40 | ZEXT816(0x4ef1e3a3303438d);
  auVar2 = CONCAT88(SUB168(auVar2 << 0x16,0) | SUB168(auVar2 >> 0x2b,0),0x179e2df32186ef01) &
           (undefined  [16])0xffffffffffffffff;
  uVar1 = (long)SUB164(auVar2 / ZEXT816(0xf939698b0ab6082a),0) *
          (long)SUB164(auVar2 % ZEXT816(0xf939698b0ab6082a),0);
  return (uVar1 & 0xffffffff) + (uVar1 >> 0x20) + -0x733c77d7;
}



long log_size_4_var_011(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = (ulong)(SEXT816(0x5906f1cdfef0771a) != SEXT816(-0x67238979350dc977) * SEXT416(-0x535c836))
          << 0x20 | 0x4adab78b;
  uVar2 = uVar1 >> 0x17;
  lVar3 = uVar1 << 10;
  return (ulong)((uint)lVar3 & 0xffff0000 | (uint)(ushort)(((ushort)uVar2 | (ushort)lVar3) + 0x3797)
                ) + (ulong)((int)uVar2 << 0x1f | 0xebba89) + -0xebca20b5;
}



undefined8 log_size_4_var_012(void)

{
  return 0;
}



undefined8 log_size_4_var_013(void)

{
  return 0;
}



undefined8 log_size_4_var_014(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00402711)
// WARNING: Removing unreachable block (ram,0x0040271d)

undefined8 log_size_4_var_015(void)

{
  return 0;
}



undefined8 log_size_4_var_016(void)

{
  return 0;
}



long log_size_4_var_017(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  char in_AF;
  
  uVar3 = (uint)CONCAT62(0x4a01e131927a,CONCAT11(in_AF << 4 | 0x84,0x8a));
  uVar1 = uVar3 & 0xffff | 0x29100200;
  uVar2 = uVar1 % 0xf1c2;
  uVar4 = (ulong)(ushort)uVar2;
  uVar5 = uVar4 | 0x4359c73122e60000;
  uVar6 = uVar5 + 0x694e606f3999f1c2;
  return (ulong)(uVar3 & 0xff7f0000 | uVar1 / 0xf1c2) +
         (uVar4 & 0xffffffffffffff00 | 0x4359c73122e60000 |
         (ulong)(byte)(((char)uVar2 + 'Y') - (0x96b19f90c6660e3d < uVar5))) +
         (uVar6 & 0xffffffffffffff00 | (ulong)(byte)((byte)uVar6 >> 1 | 0x80)) + 0xffe112dee1e514d;
}



// WARNING: Removing unreachable block (ram,0x00402ab3)

long log_size_4_var_018(void)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  ulong uVar3;
  
  uVar3 = 0xab088958c594db54;
  auVar1 = ZEXT116(0) << 0x40 | ZEXT816(0xe2866e0667d281f2);
  auVar2 = auVar1 >> 0x32;
  if ((auVar2 & (undefined  [16])0xec) != (undefined  [16])0x0) {
    uVar3 = 0xab088958c594ffb2;
  }
  return (SUB168(auVar2,0) | SUB168(auVar1 << 0xf,0)) +
         (uVar3 & 0xffffffffffff0000 | uVar3 >> 1 & 0x7fff) + 0x1df442bdf9724786;
}



// WARNING: Removing unreachable block (ram,0x00402be3)
// WARNING: Removing unreachable block (ram,0x00402bf8)

undefined8 log_size_4_var_019(void)

{
  return 0;
}



long log_size_4_var_020(void)

{
  uint uVar1;
  undefined auVar2 [16];
  byte bVar3;
  int iVar4;
  byte bVar5;
  
  auVar2 = ZEXT816(0x1ee655bfc0ae85a6) * ZEXT816(0x39370f78d5238f53);
  iVar4 = SUB164(auVar2 >> 0x10,0);
  uVar1 = iVar4 * 0x40000 + 0x9328c3a4;
  bVar5 = SUB161(auVar2 >> 0x40,0);
  bVar3 = bVar5 & 0x1f;
  return (ulong)((uint)(iVar4 * 0x10000) >> (bVar5 & 0x1f)) + SUB168(auVar2 >> 0x40,0) +
         (ulong)(uint)(int)SUB162(auVar2 >> 0x40,0) +
         (ulong)(uVar1 << bVar3 | uVar1 >> 0x20 - bVar3) + -0x6e7ee73f6768ef3;
}



undefined8 log_size_4_var_021(void)

{
  return 0;
}



undefined8 log_size_4_var_022(void)

{
  return 0;
}



long log_size_4_var_023(void)

{
  ushort uVar1;
  
  for (uVar1 = 0xf; 0x4b5bU >> uVar1 == 0; uVar1 = uVar1 - 1) {
  }
  return ((ulong)uVar1 | 0xffffffffff8f0000) + 0x70fff2;
}



undefined8 log_size_4_var_024(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00403358)

undefined8 log_size_4_var_025(void)

{
  return 0;
}



undefined8 log_size_4_var_026(void)

{
  return 0;
}



undefined8 log_size_4_var_027(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x004036b8)

long log_size_4_var_028(void)

{
  uint uVar1;
  
  for (uVar1 = 0; (0x5c9219a6U >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
  }
  return (ulong)uVar1 - 1;
}



undefined8 log_size_4_var_029(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00403947)

undefined8 log_size_4_var_030(void)

{
  return 0;
}



long log_size_4_var_031(void)

{
  uint uVar1;
  
  for (uVar1 = 0x1f; 0xac5a618fU >> uVar1 == 0; uVar1 = uVar1 - 1) {
  }
  return (ulong)((uVar1 & 0xffffff00 | (uint)(byte)((byte)uVar1 >> 2 | (byte)uVar1 << 6)) << 0x11) -
         0x18e0000;
}



// WARNING: Removing unreachable block (ram,0x00403bb6)

undefined8 log_size_4_var_032(void)

{
  return 0;
}



undefined8 log_size_4_var_033(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00403def)
// WARNING: Removing unreachable block (ram,0x00403df6)

undefined8 log_size_4_var_034(void)

{
  return 0;
}



undefined8 log_size_4_var_035(void)

{
  return 0;
}



undefined8 log_size_4_var_036(void)

{
  return 0;
}



long log_size_4_var_037(void)

{
  uint uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  char in_AF;
  
  auVar3 = ZEXT116(0) << 0x40 | ZEXT816(0x88f51ee4e1790501);
  auVar2 = ZEXT116(1) << 0x40 | ZEXT816(0x980577a11cd3474e);
  for (uVar1 = 0; (0xc99bee1bU >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
  }
  return CONCAT71(CONCAT61(0x9c20938b2b71,in_AF << 4 | 0x87),1) + (ulong)uVar1 +
         (SUB168(auVar3 >> 0x36,0) | SUB168(auVar3 << 0xb,0)) +
         (SUB168(auVar2 << 0x36,0) | SUB168(auVar2 >> 0xb,0)) + -0x18cabb45e7bd3b8c;
}



undefined8 log_size_4_var_038(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x004043f5)
// WARNING: Removing unreachable block (ram,0x004043e7)
// WARNING: Removing unreachable block (ram,0x004043fa)

undefined8 log_size_4_var_039(void)

{
  return 0;
}



undefined8 log_size_4_var_040(void)

{
  return 0;
}



undefined8 log_size_4_var_041(void)

{
  return 0;
}



undefined8 log_size_4_var_042(void)

{
  return 0;
}



long log_size_4_var_043(void)

{
  undefined auVar1 [16];
  
  auVar1 = ZEXT116(0) << 0x40 | ZEXT816(0x62ed807d5a21f3a8);
  return (SUB168(auVar1 << 0xf,0) | SUB168(auVar1 >> 0x32,0)) + 0x3fc152ef062be745;
}



undefined8 log_size_4_var_044(void)

{
  return 0;
}



undefined8 log_size_4_var_045(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00404c1f)

long log_size_4_var_046(void)

{
  undefined auVar1 [16];
  byte bVar2;
  byte bVar3;
  
  auVar1 = ZEXT816(0xa71478d592375510) * ZEXT816(0x16eb1064de8bb846);
  bVar2 = SUB161(auVar1,0);
  bVar3 = (bVar2 == 0x47) * -0x13 ^ 0x47;
  return CONCAT71(SUB167(auVar1 >> 8,0),bVar2 ^ (bVar2 != 0x47) * (bVar2 ^ bVar3)) +
         CONCAT62(0xeaa5191cdcbf,(ushort)bVar3 << 8 | 0x83) +
         (SUB168(auVar1 >> 0x40,0) & 0xfffffffffffffffd) + -0x396d6b8af3db571c;
}



// WARNING: Removing unreachable block (ram,0x00404d51)
// WARNING: Removing unreachable block (ram,0x00404d74)

undefined8 log_size_4_var_047(void)

{
  return 0;
}



undefined8 log_size_4_var_048(void)

{
  return 0;
}



undefined8 log_size_4_var_049(void)

{
  return 0;
}



long log_size_4_var_050(void)

{
  short sVar1;
  
  for (sVar1 = 0xf; 0x2bbaU >> sVar1 == 0; sVar1 = sVar1 + -1) {
  }
  return CONCAT62(0x873b67e8b29c,sVar1) + 0x78c498174d63fff3;
}



long log_size_4_var_051(void)

{
  long lVar1;
  
  for (lVar1 = 0x3f; 0x3785fbacdc73f035U >> lVar1 == 0; lVar1 = lVar1 + -1) {
  }
  return lVar1 + -0x3d;
}



undefined8 log_size_4_var_052(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00405490)
// WARNING: Removing unreachable block (ram,0x004054b5)

long log_size_4_var_053(void)

{
  undefined auVar1 [16];
  
  auVar1 = ZEXT116(0) << 0x40 | ZEXT816(0xd77695492fb4242f);
  return (SUB168(auVar1 << 0x14,0) | SUB168(auVar1 >> 0x2d,0)) + 0xab6d04bdbd09444c;
}



// WARNING: Removing unreachable block (ram,0x004055e0)

undefined8 log_size_4_var_054(void)

{
  return 0;
}



long log_size_4_var_055(void)

{
  short sVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  
  for (sVar1 = 0; (0x8acbU >> sVar1 & 1) == 0; sVar1 = sVar1 + 1) {
  }
  auVar3 = ZEXT116(1) << 0x40 | ZEXT816(0x477689a4da8e668e);
  auVar2 = ZEXT116(0) << 0x40 | ZEXT816(0xdb058ec347ab9062);
  return CONCAT62(0x61fcd5ee6e1e,(ushort)SUB161(auVar2 >> 0x18,0) * 6) +
         (SUB168(auVar2 >> 0x18,0) | SUB168(auVar2 << 0x29,0)) +
         (SUB168(auVar3 >> 0xc,0) | SUB168(auVar3 << 0x35,0)) + 0x750dedcdf2059229;
}



long log_size_4_var_056(void)

{
  ulong uVar1;
  ulong uVar2;
  ushort uVar3;
  ushort uVar4;
  
  for (uVar2 = 0x3f; 0xa2d4359878b42eddU >> uVar2 == 0; uVar2 = uVar2 - 1) {
  }
  uVar1 = uVar2 + 0xd30f6b896a4ff7c;
  uVar3 = (ushort)uVar2;
  uVar4 = uVar3 ^ (ushort)(uVar3 == 0x8eec) * (uVar3 ^ 0x452e);
  uVar3 = (ushort)(uVar3 != 0x8eec) * (uVar4 ^ 0x8eec) ^ 0x8eec;
  return CONCAT62(0xaed8b7561452,uVar3) +
         (uVar1 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar1 + (char)uVar3 + 1)) +
         (uVar2 & 0xffffffffffff0000 | (ulong)uVar4) + (ulong)(uint)(int)(short)uVar1 +
         0x43f651f05508ffcc;
}



long log_size_4_var_057(void)

{
  undefined auVar1 [16];
  ulong uVar2;
  
  auVar1 = ZEXT816(0x5221f5a9b072f620) * ZEXT816(0x49abe8de48b8566d);
  uVar2 = SUB168(auVar1 >> 0x40,0);
  return (CONCAT62(SUB166(auVar1 >> 0x10,0),SUB162(auVar1,0) >> 1) | 0x8000) +
         (~(1 << (uVar2 & 0x3f)) & 0xbc994629f0f4e838U) + uVar2 + -0x3aee4ebe2aa9d543;
}



// WARNING: Removing unreachable block (ram,0x00405aa5)
// WARNING: Removing unreachable block (ram,0x00405aba)

long log_size_4_var_058(void)

{
  ushort uVar1;
  
  for (uVar1 = 0; (0x11c9U >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
  }
  return ((ulong)uVar1 | 0x443b6fbcc310000) + 0xfbbc490433cf0000;
}



// WARNING: Removing unreachable block (ram,0x00405be5)

undefined8 log_size_4_var_059(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00405d02)

long log_size_4_var_060(void)

{
  uint uVar1;
  long lVar2;
  
  for (uVar1 = 0; (0x5db81d88U >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
  }
  for (lVar2 = 0x3f; 0x8693efc637eea000U >> lVar2 == 0; lVar2 = lVar2 + -1) {
  }
  return lVar2 + (ulong)uVar1 + -0x42;
}



undefined8 log_size_4_var_061(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00405fa1)

undefined8 log_size_4_var_062(void)

{
  return 0;
}



undefined8 log_size_4_var_063(void)

{
  return 0;
}



long log_size_4_var_064(void)

{
  undefined auVar1 [16];
  
  auVar1 = ZEXT116(0) << 0x40 | ZEXT816(0x4277175917eef6ba);
  return (SUB168(auVar1 >> 0x32,0) | SUB168(auVar1 << 0xf,0)) + 0x7453740884a2ef63;
}



long log_size_4_var_065(void)

{
  return SUB168(CONCAT88(0x3e88a10b559cc24c,0xc7462a3a300f007b) / ZEXT816(0xe4b54edf84340fb6),0) +
         SUB168(CONCAT88(0x3e88a10b559cc24c,0xc7462a3a300f007b) % ZEXT816(0xe4b54edf84340fb6),0) +
         0x36156fbbdaa3fc5e;
}



undefined8 log_size_4_var_066(void)

{
  return 0;
}



undefined8 log_size_4_var_067(void)

{
  return 0;
}



long log_size_4_var_068(void)

{
  long lVar1;
  
  for (lVar1 = 0; (0xbb7d33653f68924aU >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
  }
  return lVar1 + -1;
}



// WARNING: Removing unreachable block (ram,0x004067fa)

undefined8 log_size_4_var_069(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00406930)
// WARNING: Removing unreachable block (ram,0x00406934)

long log_size_4_var_070(void)

{
  ulong uVar1;
  
  uVar1 = SUB168(SEXT816(-0x7063955a4dc625d8) * SEXT816(0x61ef4e7acc395be2) >> 0x56,0);
  return ((ulong)CONCAT11((byte)(uVar1 >> 8) ^ 0x5b,0xf6) | 0xf7ff6e7fec390000) + uVar1 +
         CONCAT62(0x7ab2a55c16ad,
                  (ushort)(SEXT816(-0x71b40394a57930b0) !=
                          SEXT816(-0x7063955a4dc625d8) * SEXT816(0x61ef4e7acc395be2)) << 0xf |
                  0x248e) + -0x72b2172fbd2589ce;
}



undefined8 log_size_4_var_071(void)

{
  return 0xffffffffffffff8c;
}



long log_size_4_var_072(void)

{
  return SUB168(ZEXT816(0x30482c2060f21eca) * ZEXT816(0x2930000000000000),0) +
         SUB168(ZEXT816(0x30482c2060f21eca) * ZEXT816(0x2930000000000000) >> 0x40,0) +
         -0x27a49c9b7598f454;
}



undefined8 log_size_4_var_073(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00406dd6)

undefined8 log_size_4_var_074(void)

{
  return 0;
}



undefined8 log_size_4_var_075(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00407046)

long log_size_4_var_076(void)

{
  return SUB168(ZEXT816(0xdaa1ce2a5072b7d8) * ZEXT816(0xd17fa341298a6ca2),0) +
         SUB168(ZEXT816(0xdaa1ce2a5072b7d8) * ZEXT816(0xd17fa341298a6ca2) >> 0x40,0) +
         -0x3e525eda801773ac;
}



long log_size_4_var_077(void)

{
  long lVar1;
  
  for (lVar1 = 0; (0x51bfb40000000000U >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
  }
  return lVar1 + -0x2a;
}



// WARNING: Removing unreachable block (ram,0x004072b2)

long log_size_4_var_078(void)

{
  return SUB168(ZEXT416(0x44) * ZEXT816(0x3d05f82c23e26c00),0) +
         SUB168(ZEXT416(0x44) * ZEXT816(0x3d05f82c23e26c00) >> 0x40,0) + -0x3595ebb98824b010;
}



undefined8 log_size_4_var_079(void)

{
  short sVar1;
  
  for (sVar1 = 0xf; 0xb3aU >> sVar1 == 0; sVar1 = sVar1 + -1) {
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00407512)

undefined8 log_size_4_var_080(void)

{
  return 0;
}



long log_size_4_var_081(void)

{
  ulong uVar1;
  
  for (uVar1 = 0x3f; 0x7c3dda5c9184b5f9U >> uVar1 == 0; uVar1 = uVar1 - 1) {
  }
  return (uVar1 & 0xffffffffffffff00 | (ulong)(byte)((char)uVar1 + 0x2f)) - 0x6d;
}



// WARNING: Removing unreachable block (ram,0x0040775f)
// WARNING: Removing unreachable block (ram,0x0040777d)

undefined8 log_size_4_var_082(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00407893)
// WARNING: Removing unreachable block (ram,0x004078b5)

long log_size_4_var_083(void)

{
  return (ulong)(SUB164(ZEXT816(0xaf306e9db427edec) * ZEXT816(0xbb53d11d82cac5fe),0) + 0xf0eb31c5) +
         (SUB168(ZEXT816(0xaf306e9db427edec) * ZEXT816(0xbb53d11d82cac5fe) >> 0x40,0) << 0x2b) +
         -0x39bc8002cf15ad15;
}



// WARNING: Removing unreachable block (ram,0x004079ba)

undefined8 log_size_4_var_084(void)

{
  return 0;
}



undefined8 log_size_4_var_085(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00407c33)

undefined8 log_size_4_var_086(void)

{
  return 0;
}



undefined8 log_size_4_var_087(void)

{
  return 0;
}



undefined8 log_size_4_var_088(void)

{
  return 0;
}



undefined8 log_size_4_var_089(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x004080eb)

undefined8 log_size_4_var_090(void)

{
  return 0;
}



undefined8 log_size_4_var_091(void)

{
  return 0;
}



long log_size_4_var_092(void)

{
  short sVar1;
  byte bVar2;
  
  for (sVar1 = 0; (0xcec1U >> sVar1 & 1) == 0; sVar1 = sVar1 + 1) {
  }
  bVar2 = (byte)sVar1 & 0x1f;
  return CONCAT62(0xd7e71c667513,sVar1) +
         (ulong)(((uint)(0x57d0e76e << bVar2) | (uint)(0x57d0e76e >> 0x21 - bVar2)) & 0xd20f8e8d) +
         0x2818e39938ec79f4;
}



// WARNING: Removing unreachable block (ram,0x00408472)

undefined8 log_size_4_var_093(void)

{
  return 0;
}



long log_size_4_var_094(void)

{
  uint uVar1;
  ulong uVar2;
  
  for (uVar1 = 0; (0xd35c4809U >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
  }
  uVar2 = 0x3f;
  if ((ulong)uVar1 != 0) {
    for (; uVar1 >> uVar2 == 0; uVar2 = uVar2 - 1) {
    }
  }
  return (ulong)uVar1 +
         (ulong)((uint)((uVar2 & 0xffffffff) << 0x19) | (uint)((uVar2 & 0xffffffff) >> 8)) +
         -0x200a8f4;
}



undefined8 log_size_4_var_095(void)

{
  return 0;
}



long log_size_4_var_096(void)

{
  undefined auVar1 [16];
  
  auVar1 = ZEXT416(0xdb4dd831) * ZEXT816(0x67d433f1f6f5ba0f);
  return CONCAT62(SUB166(auVar1 >> 0x10,0),SUB161(auVar1,0) * 0x56) + SUB168(auVar1 >> 0x40,0) +
         0x7682683c4184f024;
}



undefined8 log_size_4_var_097(void)

{
  return 0;
}



undefined8 log_size_4_var_098(void)

{
  return 0;
}



undefined8 log_size_4_var_099(void)

{
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


