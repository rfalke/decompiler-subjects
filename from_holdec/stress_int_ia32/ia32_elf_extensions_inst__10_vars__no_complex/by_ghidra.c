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
    DT_GNU_XHASH=1879047924,
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

typedef struct NoteAbiTag NoteAbiTag, *PNoteAbiTag;

struct NoteAbiTag {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    dword abiType; // 0 == Linux
    dword requiredKernelVersion[3]; // Major.minor.patch
};

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
};

typedef enum Elf_ProgramHeaderType_x86 {
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

typedef struct GnuBuildId GnuBuildId, *PGnuBuildId;

struct GnuBuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    byte hash[20];
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



// WARNING: Unknown calling convention -- yet parameter storage is locked

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
  int iVar101;
  int iVar102;
  int iVar103;
  int iVar104;
  int iVar105;
  int iVar106;
  int iVar107;
  int iVar108;
  int iVar109;
  int iVar110;
  int iVar111;
  int iVar112;
  int iVar113;
  int iVar114;
  int iVar115;
  int iVar116;
  int iVar117;
  int iVar118;
  int iVar119;
  int iVar120;
  int iVar121;
  int iVar122;
  int iVar123;
  int iVar124;
  int iVar125;
  int iVar126;
  int iVar127;
  int iVar128;
  int iVar129;
  int iVar130;
  int iVar131;
  int iVar132;
  int iVar133;
  int iVar134;
  int iVar135;
  int iVar136;
  int iVar137;
  int iVar138;
  int iVar139;
  int iVar140;
  int iVar141;
  int iVar142;
  int iVar143;
  int iVar144;
  int iVar145;
  int iVar146;
  int iVar147;
  int iVar148;
  int iVar149;
  int iVar150;
  int iVar151;
  int iVar152;
  int iVar153;
  int iVar154;
  int iVar155;
  int iVar156;
  int iVar157;
  int iVar158;
  int iVar159;
  int iVar160;
  int iVar161;
  int iVar162;
  int iVar163;
  int iVar164;
  int iVar165;
  int iVar166;
  int iVar167;
  int iVar168;
  int iVar169;
  int iVar170;
  int iVar171;
  int iVar172;
  int iVar173;
  int iVar174;
  int iVar175;
  int iVar176;
  int iVar177;
  int iVar178;
  int iVar179;
  int iVar180;
  int iVar181;
  int iVar182;
  int iVar183;
  int iVar184;
  int iVar185;
  int iVar186;
  int iVar187;
  int iVar188;
  int iVar189;
  int iVar190;
  int iVar191;
  int iVar192;
  int iVar193;
  int iVar194;
  int iVar195;
  int iVar196;
  int iVar197;
  int iVar198;
  int iVar199;
  int iVar200;
  int iVar201;
  int iVar202;
  int iVar203;
  int iVar204;
  int iVar205;
  int iVar206;
  int iVar207;
  int iVar208;
  int iVar209;
  int iVar210;
  int iVar211;
  int iVar212;
  int iVar213;
  int iVar214;
  int iVar215;
  int iVar216;
  int iVar217;
  int iVar218;
  int iVar219;
  int iVar220;
  int iVar221;
  int iVar222;
  int iVar223;
  int iVar224;
  int iVar225;
  int iVar226;
  int iVar227;
  int iVar228;
  int iVar229;
  int iVar230;
  int iVar231;
  int iVar232;
  int iVar233;
  int iVar234;
  int iVar235;
  int iVar236;
  int iVar237;
  int iVar238;
  int iVar239;
  int iVar240;
  int iVar241;
  int iVar242;
  int iVar243;
  int iVar244;
  int iVar245;
  int iVar246;
  int iVar247;
  int iVar248;
  int iVar249;
  int iVar250;
  int iVar251;
  int iVar252;
  int iVar253;
  int iVar254;
  int iVar255;
  int iVar256;
  int iVar257;
  int iVar258;
  int iVar259;
  int iVar260;
  int iVar261;
  int iVar262;
  int iVar263;
  int iVar264;
  int iVar265;
  int iVar266;
  int iVar267;
  int iVar268;
  int iVar269;
  int iVar270;
  int iVar271;
  int iVar272;
  int iVar273;
  int iVar274;
  int iVar275;
  int iVar276;
  int iVar277;
  int iVar278;
  int iVar279;
  int iVar280;
  int iVar281;
  int iVar282;
  int iVar283;
  int iVar284;
  int iVar285;
  int iVar286;
  int iVar287;
  int iVar288;
  int iVar289;
  int iVar290;
  int iVar291;
  int iVar292;
  int iVar293;
  int iVar294;
  int iVar295;
  int iVar296;
  int iVar297;
  int iVar298;
  int iVar299;
  int iVar300;
  int iVar301;
  int iVar302;
  int iVar303;
  int iVar304;
  int iVar305;
  int iVar306;
  int iVar307;
  int iVar308;
  int iVar309;
  int iVar310;
  int iVar311;
  int iVar312;
  int iVar313;
  int iVar314;
  int iVar315;
  int iVar316;
  int iVar317;
  int iVar318;
  int iVar319;
  int iVar320;
  int iVar321;
  int iVar322;
  int iVar323;
  int iVar324;
  int iVar325;
  int iVar326;
  int iVar327;
  int iVar328;
  int iVar329;
  int iVar330;
  int iVar331;
  int iVar332;
  int iVar333;
  int iVar334;
  int iVar335;
  int iVar336;
  int iVar337;
  int iVar338;
  int iVar339;
  int iVar340;
  int iVar341;
  int iVar342;
  int iVar343;
  int iVar344;
  int iVar345;
  int iVar346;
  int iVar347;
  int iVar348;
  int iVar349;
  int iVar350;
  int iVar351;
  int iVar352;
  int iVar353;
  int iVar354;
  int iVar355;
  int iVar356;
  int iVar357;
  int iVar358;
  int iVar359;
  int iVar360;
  int iVar361;
  int iVar362;
  int iVar363;
  int iVar364;
  int iVar365;
  int iVar366;
  int iVar367;
  int iVar368;
  int iVar369;
  int iVar370;
  int iVar371;
  int iVar372;
  int iVar373;
  int iVar374;
  int iVar375;
  int iVar376;
  int iVar377;
  int iVar378;
  int iVar379;
  int iVar380;
  int iVar381;
  int iVar382;
  int iVar383;
  int iVar384;
  int iVar385;
  int iVar386;
  int iVar387;
  int iVar388;
  int iVar389;
  int iVar390;
  int iVar391;
  int iVar392;
  int iVar393;
  int iVar394;
  int iVar395;
  int iVar396;
  int iVar397;
  int iVar398;
  int iVar399;
  int iVar400;
  int iVar401;
  int iVar402;
  int iVar403;
  int iVar404;
  int iVar405;
  int iVar406;
  int iVar407;
  int iVar408;
  int iVar409;
  int iVar410;
  int iVar411;
  int iVar412;
  int iVar413;
  int iVar414;
  int iVar415;
  int iVar416;
  int iVar417;
  int iVar418;
  int iVar419;
  int iVar420;
  int iVar421;
  int iVar422;
  int iVar423;
  int iVar424;
  int iVar425;
  int iVar426;
  int iVar427;
  int iVar428;
  int iVar429;
  int iVar430;
  int iVar431;
  int iVar432;
  int iVar433;
  int iVar434;
  int iVar435;
  int iVar436;
  int iVar437;
  int iVar438;
  int iVar439;
  int iVar440;
  
  iVar1 = inst_0_values_var_0(&stack0x00000004);
  iVar2 = inst_0_flags_var_0();
  iVar3 = inst_0_values_var_1();
  iVar4 = inst_0_flags_var_1();
  iVar5 = inst_0_values_var_2();
  iVar6 = inst_0_flags_var_2();
  iVar7 = inst_0_values_var_3();
  iVar8 = inst_0_flags_var_3();
  iVar9 = inst_0_values_var_4();
  iVar10 = inst_0_flags_var_4();
  iVar11 = inst_0_values_var_5();
  iVar12 = inst_0_flags_var_5();
  iVar13 = inst_0_values_var_6();
  iVar14 = inst_0_flags_var_6();
  iVar15 = inst_0_values_var_7();
  iVar16 = inst_0_flags_var_7();
  iVar17 = inst_0_values_var_8();
  iVar18 = inst_0_flags_var_8();
  iVar19 = inst_0_values_var_9();
  iVar20 = inst_0_flags_var_9();
  iVar21 = inst_1_values_var_0();
  iVar22 = inst_1_flags_var_0();
  iVar23 = inst_1_values_var_1();
  iVar24 = inst_1_flags_var_1();
  iVar25 = inst_1_values_var_2();
  iVar26 = inst_1_flags_var_2();
  iVar27 = inst_1_values_var_3();
  iVar28 = inst_1_flags_var_3();
  iVar29 = inst_1_values_var_4();
  iVar30 = inst_1_flags_var_4();
  iVar31 = inst_1_values_var_5();
  iVar32 = inst_1_flags_var_5();
  iVar33 = inst_1_values_var_6();
  iVar34 = inst_1_flags_var_6();
  iVar35 = inst_1_values_var_7();
  iVar36 = inst_1_flags_var_7();
  iVar37 = inst_1_values_var_8();
  iVar38 = inst_1_flags_var_8();
  iVar39 = inst_1_values_var_9();
  iVar40 = inst_1_flags_var_9();
  iVar41 = inst_2_values_var_0();
  iVar42 = inst_2_flags_var_0();
  iVar43 = inst_2_values_var_1();
  iVar44 = inst_2_flags_var_1();
  iVar45 = inst_2_values_var_2();
  iVar46 = inst_2_flags_var_2();
  iVar47 = inst_2_values_var_3();
  iVar48 = inst_2_flags_var_3();
  iVar49 = inst_2_values_var_4();
  iVar50 = inst_2_flags_var_4();
  iVar51 = inst_2_values_var_5();
  iVar52 = inst_2_flags_var_5();
  iVar53 = inst_2_values_var_6();
  iVar54 = inst_2_flags_var_6();
  iVar55 = inst_2_values_var_7();
  iVar56 = inst_2_flags_var_7();
  iVar57 = inst_2_values_var_8();
  iVar58 = inst_2_flags_var_8();
  iVar59 = inst_2_values_var_9();
  iVar60 = inst_2_flags_var_9();
  iVar61 = inst_3_values_var_0();
  iVar62 = inst_3_flags_var_0();
  iVar63 = inst_3_values_var_1();
  iVar64 = inst_3_flags_var_1();
  iVar65 = inst_3_values_var_2();
  iVar66 = inst_3_flags_var_2();
  iVar67 = inst_3_values_var_3();
  iVar68 = inst_3_flags_var_3();
  iVar69 = inst_3_values_var_4();
  iVar70 = inst_3_flags_var_4();
  iVar71 = inst_3_values_var_5();
  iVar72 = inst_3_flags_var_5();
  iVar73 = inst_3_values_var_6();
  iVar74 = inst_3_flags_var_6();
  iVar75 = inst_3_values_var_7();
  iVar76 = inst_3_flags_var_7();
  iVar77 = inst_3_values_var_8();
  iVar78 = inst_3_flags_var_8();
  iVar79 = inst_3_values_var_9();
  iVar80 = inst_3_flags_var_9();
  iVar81 = inst_4_values_var_0();
  iVar82 = inst_4_flags_var_0();
  iVar83 = inst_4_values_var_1();
  iVar84 = inst_4_flags_var_1();
  iVar85 = inst_4_values_var_2();
  iVar86 = inst_4_flags_var_2();
  iVar87 = inst_4_values_var_3();
  iVar88 = inst_4_flags_var_3();
  iVar89 = inst_4_values_var_4();
  iVar90 = inst_4_flags_var_4();
  iVar91 = inst_4_values_var_5();
  iVar92 = inst_4_flags_var_5();
  iVar93 = inst_4_values_var_6();
  iVar94 = inst_4_flags_var_6();
  iVar95 = inst_4_values_var_7();
  iVar96 = inst_4_flags_var_7();
  iVar97 = inst_4_values_var_8();
  iVar98 = inst_4_flags_var_8();
  iVar99 = inst_4_values_var_9();
  iVar100 = inst_4_flags_var_9();
  iVar101 = inst_5_values_var_0();
  iVar102 = inst_5_flags_var_0();
  iVar103 = inst_5_values_var_1();
  iVar104 = inst_5_flags_var_1();
  iVar105 = inst_5_values_var_2();
  iVar106 = inst_5_flags_var_2();
  iVar107 = inst_5_values_var_3();
  iVar108 = inst_5_flags_var_3();
  iVar109 = inst_5_values_var_4();
  iVar110 = inst_5_flags_var_4();
  iVar111 = inst_5_values_var_5();
  iVar112 = inst_5_flags_var_5();
  iVar113 = inst_5_values_var_6();
  iVar114 = inst_5_flags_var_6();
  iVar115 = inst_5_values_var_7();
  iVar116 = inst_5_flags_var_7();
  iVar117 = inst_5_values_var_8();
  iVar118 = inst_5_flags_var_8();
  iVar119 = inst_5_values_var_9();
  iVar120 = inst_5_flags_var_9();
  iVar121 = inst_6_values_var_0();
  iVar122 = inst_6_flags_var_0();
  iVar123 = inst_6_values_var_1();
  iVar124 = inst_6_flags_var_1();
  iVar125 = inst_6_values_var_2();
  iVar126 = inst_6_flags_var_2();
  iVar127 = inst_6_values_var_3();
  iVar128 = inst_6_flags_var_3();
  iVar129 = inst_6_values_var_4();
  iVar130 = inst_6_flags_var_4();
  iVar131 = inst_6_values_var_5();
  iVar132 = inst_6_flags_var_5();
  iVar133 = inst_6_values_var_6();
  iVar134 = inst_6_flags_var_6();
  iVar135 = inst_6_values_var_7();
  iVar136 = inst_6_flags_var_7();
  iVar137 = inst_6_values_var_8();
  iVar138 = inst_6_flags_var_8();
  iVar139 = inst_6_values_var_9();
  iVar140 = inst_6_flags_var_9();
  iVar141 = inst_7_values_var_0();
  iVar142 = inst_7_flags_var_0();
  iVar143 = inst_7_values_var_1();
  iVar144 = inst_7_flags_var_1();
  iVar145 = inst_7_values_var_2();
  iVar146 = inst_7_flags_var_2();
  iVar147 = inst_7_values_var_3();
  iVar148 = inst_7_flags_var_3();
  iVar149 = inst_7_values_var_4();
  iVar150 = inst_7_flags_var_4();
  iVar151 = inst_7_values_var_5();
  iVar152 = inst_7_flags_var_5();
  iVar153 = inst_7_values_var_6();
  iVar154 = inst_7_flags_var_6();
  iVar155 = inst_7_values_var_7();
  iVar156 = inst_7_flags_var_7();
  iVar157 = inst_7_values_var_8();
  iVar158 = inst_7_flags_var_8();
  iVar159 = inst_7_values_var_9();
  iVar160 = inst_7_flags_var_9();
  iVar161 = inst_8_values_var_0();
  iVar162 = inst_8_flags_var_0();
  iVar163 = inst_8_values_var_1();
  iVar164 = inst_8_flags_var_1();
  iVar165 = inst_8_values_var_2();
  iVar166 = inst_8_flags_var_2();
  iVar167 = inst_8_values_var_3();
  iVar168 = inst_8_flags_var_3();
  iVar169 = inst_8_values_var_4();
  iVar170 = inst_8_flags_var_4();
  iVar171 = inst_8_values_var_5();
  iVar172 = inst_8_flags_var_5();
  iVar173 = inst_8_values_var_6();
  iVar174 = inst_8_flags_var_6();
  iVar175 = inst_8_values_var_7();
  iVar176 = inst_8_flags_var_7();
  iVar177 = inst_8_values_var_8();
  iVar178 = inst_8_flags_var_8();
  iVar179 = inst_8_values_var_9();
  iVar180 = inst_8_flags_var_9();
  iVar181 = inst_9_values_var_0();
  iVar182 = inst_9_flags_var_0();
  iVar183 = inst_9_values_var_1();
  iVar184 = inst_9_flags_var_1();
  iVar185 = inst_9_values_var_2();
  iVar186 = inst_9_flags_var_2();
  iVar187 = inst_9_values_var_3();
  iVar188 = inst_9_flags_var_3();
  iVar189 = inst_9_values_var_4();
  iVar190 = inst_9_flags_var_4();
  iVar191 = inst_9_values_var_5();
  iVar192 = inst_9_flags_var_5();
  iVar193 = inst_9_values_var_6();
  iVar194 = inst_9_flags_var_6();
  iVar195 = inst_9_values_var_7();
  iVar196 = inst_9_flags_var_7();
  iVar197 = inst_9_values_var_8();
  iVar198 = inst_9_flags_var_8();
  iVar199 = inst_9_values_var_9();
  iVar200 = inst_9_flags_var_9();
  iVar201 = inst_10_values_var_0();
  iVar202 = inst_10_flags_var_0();
  iVar203 = inst_10_values_var_1();
  iVar204 = inst_10_flags_var_1();
  iVar205 = inst_10_values_var_2();
  iVar206 = inst_10_flags_var_2();
  iVar207 = inst_10_values_var_3();
  iVar208 = inst_10_flags_var_3();
  iVar209 = inst_10_values_var_4();
  iVar210 = inst_10_flags_var_4();
  iVar211 = inst_10_values_var_5();
  iVar212 = inst_10_flags_var_5();
  iVar213 = inst_10_values_var_6();
  iVar214 = inst_10_flags_var_6();
  iVar215 = inst_10_values_var_7();
  iVar216 = inst_10_flags_var_7();
  iVar217 = inst_10_values_var_8();
  iVar218 = inst_10_flags_var_8();
  iVar219 = inst_10_values_var_9();
  iVar220 = inst_10_flags_var_9();
  iVar221 = inst_11_values_var_0();
  iVar222 = inst_11_flags_var_0();
  iVar223 = inst_11_values_var_1();
  iVar224 = inst_11_flags_var_1();
  iVar225 = inst_11_values_var_2();
  iVar226 = inst_11_flags_var_2();
  iVar227 = inst_11_values_var_3();
  iVar228 = inst_11_flags_var_3();
  iVar229 = inst_11_values_var_4();
  iVar230 = inst_11_flags_var_4();
  iVar231 = inst_11_values_var_5();
  iVar232 = inst_11_flags_var_5();
  iVar233 = inst_11_values_var_6();
  iVar234 = inst_11_flags_var_6();
  iVar235 = inst_11_values_var_7();
  iVar236 = inst_11_flags_var_7();
  iVar237 = inst_11_values_var_8();
  iVar238 = inst_11_flags_var_8();
  iVar239 = inst_11_values_var_9();
  iVar240 = inst_11_flags_var_9();
  iVar241 = inst_12_values_var_0();
  iVar242 = inst_12_flags_var_0();
  iVar243 = inst_12_values_var_1();
  iVar244 = inst_12_flags_var_1();
  iVar245 = inst_12_values_var_2();
  iVar246 = inst_12_flags_var_2();
  iVar247 = inst_12_values_var_3();
  iVar248 = inst_12_flags_var_3();
  iVar249 = inst_12_values_var_4();
  iVar250 = inst_12_flags_var_4();
  iVar251 = inst_12_values_var_5();
  iVar252 = inst_12_flags_var_5();
  iVar253 = inst_12_values_var_6();
  iVar254 = inst_12_flags_var_6();
  iVar255 = inst_12_values_var_7();
  iVar256 = inst_12_flags_var_7();
  iVar257 = inst_12_values_var_8();
  iVar258 = inst_12_flags_var_8();
  iVar259 = inst_12_values_var_9();
  iVar260 = inst_12_flags_var_9();
  iVar261 = inst_13_values_var_0();
  iVar262 = inst_13_flags_var_0();
  iVar263 = inst_13_values_var_1();
  iVar264 = inst_13_flags_var_1();
  iVar265 = inst_13_values_var_2();
  iVar266 = inst_13_flags_var_2();
  iVar267 = inst_13_values_var_3();
  iVar268 = inst_13_flags_var_3();
  iVar269 = inst_13_values_var_4();
  iVar270 = inst_13_flags_var_4();
  iVar271 = inst_13_values_var_5();
  iVar272 = inst_13_flags_var_5();
  iVar273 = inst_13_values_var_6();
  iVar274 = inst_13_flags_var_6();
  iVar275 = inst_13_values_var_7();
  iVar276 = inst_13_flags_var_7();
  iVar277 = inst_13_values_var_8();
  iVar278 = inst_13_flags_var_8();
  iVar279 = inst_13_values_var_9();
  iVar280 = inst_13_flags_var_9();
  iVar281 = inst_14_values_var_0();
  iVar282 = inst_14_flags_var_0();
  iVar283 = inst_14_values_var_1();
  iVar284 = inst_14_flags_var_1();
  iVar285 = inst_14_values_var_2();
  iVar286 = inst_14_flags_var_2();
  iVar287 = inst_14_values_var_3();
  iVar288 = inst_14_flags_var_3();
  iVar289 = inst_14_values_var_4();
  iVar290 = inst_14_flags_var_4();
  iVar291 = inst_14_values_var_5();
  iVar292 = inst_14_flags_var_5();
  iVar293 = inst_14_values_var_6();
  iVar294 = inst_14_flags_var_6();
  iVar295 = inst_14_values_var_7();
  iVar296 = inst_14_flags_var_7();
  iVar297 = inst_14_values_var_8();
  iVar298 = inst_14_flags_var_8();
  iVar299 = inst_14_values_var_9();
  iVar300 = inst_14_flags_var_9();
  iVar301 = inst_15_values_var_0();
  iVar302 = inst_15_flags_var_0();
  iVar303 = inst_15_values_var_1();
  iVar304 = inst_15_flags_var_1();
  iVar305 = inst_15_values_var_2();
  iVar306 = inst_15_flags_var_2();
  iVar307 = inst_15_values_var_3();
  iVar308 = inst_15_flags_var_3();
  iVar309 = inst_15_values_var_4();
  iVar310 = inst_15_flags_var_4();
  iVar311 = inst_15_values_var_5();
  iVar312 = inst_15_flags_var_5();
  iVar313 = inst_15_values_var_6();
  iVar314 = inst_15_flags_var_6();
  iVar315 = inst_15_values_var_7();
  iVar316 = inst_15_flags_var_7();
  iVar317 = inst_15_values_var_8();
  iVar318 = inst_15_flags_var_8();
  iVar319 = inst_15_values_var_9();
  iVar320 = inst_15_flags_var_9();
  iVar321 = inst_16_values_var_0();
  iVar322 = inst_16_flags_var_0();
  iVar323 = inst_16_values_var_1();
  iVar324 = inst_16_flags_var_1();
  iVar325 = inst_16_values_var_2();
  iVar326 = inst_16_flags_var_2();
  iVar327 = inst_16_values_var_3();
  iVar328 = inst_16_flags_var_3();
  iVar329 = inst_16_values_var_4();
  iVar330 = inst_16_flags_var_4();
  iVar331 = inst_16_values_var_5();
  iVar332 = inst_16_flags_var_5();
  iVar333 = inst_16_values_var_6();
  iVar334 = inst_16_flags_var_6();
  iVar335 = inst_16_values_var_7();
  iVar336 = inst_16_flags_var_7();
  iVar337 = inst_16_values_var_8();
  iVar338 = inst_16_flags_var_8();
  iVar339 = inst_16_values_var_9();
  iVar340 = inst_16_flags_var_9();
  iVar341 = inst_17_values_var_0();
  iVar342 = inst_17_flags_var_0();
  iVar343 = inst_17_values_var_1();
  iVar344 = inst_17_flags_var_1();
  iVar345 = inst_17_values_var_2();
  iVar346 = inst_17_flags_var_2();
  iVar347 = inst_17_values_var_3();
  iVar348 = inst_17_flags_var_3();
  iVar349 = inst_17_values_var_4();
  iVar350 = inst_17_flags_var_4();
  iVar351 = inst_17_values_var_5();
  iVar352 = inst_17_flags_var_5();
  iVar353 = inst_17_values_var_6();
  iVar354 = inst_17_flags_var_6();
  iVar355 = inst_17_values_var_7();
  iVar356 = inst_17_flags_var_7();
  iVar357 = inst_17_values_var_8();
  iVar358 = inst_17_flags_var_8();
  iVar359 = inst_17_values_var_9();
  iVar360 = inst_17_flags_var_9();
  iVar361 = inst_18_values_var_0();
  iVar362 = inst_18_flags_var_0();
  iVar363 = inst_18_values_var_1();
  iVar364 = inst_18_flags_var_1();
  iVar365 = inst_18_values_var_2();
  iVar366 = inst_18_flags_var_2();
  iVar367 = inst_18_values_var_3();
  iVar368 = inst_18_flags_var_3();
  iVar369 = inst_18_values_var_4();
  iVar370 = inst_18_flags_var_4();
  iVar371 = inst_18_values_var_5();
  iVar372 = inst_18_flags_var_5();
  iVar373 = inst_18_values_var_6();
  iVar374 = inst_18_flags_var_6();
  iVar375 = inst_18_values_var_7();
  iVar376 = inst_18_flags_var_7();
  iVar377 = inst_18_values_var_8();
  iVar378 = inst_18_flags_var_8();
  iVar379 = inst_18_values_var_9();
  iVar380 = inst_18_flags_var_9();
  iVar381 = inst_19_values_var_0();
  iVar382 = inst_19_flags_var_0();
  iVar383 = inst_19_values_var_1();
  iVar384 = inst_19_flags_var_1();
  iVar385 = inst_19_values_var_2();
  iVar386 = inst_19_flags_var_2();
  iVar387 = inst_19_values_var_3();
  iVar388 = inst_19_flags_var_3();
  iVar389 = inst_19_values_var_4();
  iVar390 = inst_19_flags_var_4();
  iVar391 = inst_19_values_var_5();
  iVar392 = inst_19_flags_var_5();
  iVar393 = inst_19_values_var_6();
  iVar394 = inst_19_flags_var_6();
  iVar395 = inst_19_values_var_7();
  iVar396 = inst_19_flags_var_7();
  iVar397 = inst_19_values_var_8();
  iVar398 = inst_19_flags_var_8();
  iVar399 = inst_19_values_var_9();
  iVar400 = inst_19_flags_var_9();
  iVar401 = inst_20_values_var_0();
  iVar402 = inst_20_flags_var_0();
  iVar403 = inst_20_values_var_1();
  iVar404 = inst_20_flags_var_1();
  iVar405 = inst_20_values_var_2();
  iVar406 = inst_20_flags_var_2();
  iVar407 = inst_20_values_var_3();
  iVar408 = inst_20_flags_var_3();
  iVar409 = inst_20_values_var_4();
  iVar410 = inst_20_flags_var_4();
  iVar411 = inst_20_values_var_5();
  iVar412 = inst_20_flags_var_5();
  iVar413 = inst_20_values_var_6();
  iVar414 = inst_20_flags_var_6();
  iVar415 = inst_20_values_var_7();
  iVar416 = inst_20_flags_var_7();
  iVar417 = inst_20_values_var_8();
  iVar418 = inst_20_flags_var_8();
  iVar419 = inst_20_values_var_9();
  iVar420 = inst_20_flags_var_9();
  iVar421 = inst_21_values_var_0();
  iVar422 = inst_21_flags_var_0();
  iVar423 = inst_21_values_var_1();
  iVar424 = inst_21_flags_var_1();
  iVar425 = inst_21_values_var_2();
  iVar426 = inst_21_flags_var_2();
  iVar427 = inst_21_values_var_3();
  iVar428 = inst_21_flags_var_3();
  iVar429 = inst_21_values_var_4();
  iVar430 = inst_21_flags_var_4();
  iVar431 = inst_21_values_var_5();
  iVar432 = inst_21_flags_var_5();
  iVar433 = inst_21_values_var_6();
  iVar434 = inst_21_flags_var_6();
  iVar435 = inst_21_values_var_7();
  iVar436 = inst_21_flags_var_7();
  iVar437 = inst_21_values_var_8();
  iVar438 = inst_21_flags_var_8();
  iVar439 = inst_21_values_var_9();
  iVar440 = inst_21_flags_var_9();
  if (iVar1 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
      iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + iVar19 + iVar20 + iVar21 +
      iVar22 + iVar23 + iVar24 + iVar25 + iVar26 + iVar27 + iVar28 + iVar29 + iVar30 + iVar31 +
      iVar32 + iVar33 + iVar34 + iVar35 + iVar36 + iVar37 + iVar38 + iVar39 + iVar40 + iVar41 +
      iVar42 + iVar43 + iVar44 + iVar45 + iVar46 + iVar47 + iVar48 + iVar49 + iVar50 + iVar51 +
      iVar52 + iVar53 + iVar54 + iVar55 + iVar56 + iVar57 + iVar58 + iVar59 + iVar60 + iVar61 +
      iVar62 + iVar63 + iVar64 + iVar65 + iVar66 + iVar67 + iVar68 + iVar69 + iVar70 + iVar71 +
      iVar72 + iVar73 + iVar74 + iVar75 + iVar76 + iVar77 + iVar78 + iVar79 + iVar80 + iVar81 +
      iVar82 + iVar83 + iVar84 + iVar85 + iVar86 + iVar87 + iVar88 + iVar89 + iVar90 + iVar91 +
      iVar92 + iVar93 + iVar94 + iVar95 + iVar96 + iVar97 + iVar98 + iVar99 + iVar100 + iVar101 +
      iVar102 + iVar103 + iVar104 + iVar105 + iVar106 + iVar107 + iVar108 + iVar109 + iVar110 +
      iVar111 + iVar112 + iVar113 + iVar114 + iVar115 + iVar116 + iVar117 + iVar118 + iVar119 +
      iVar120 + iVar121 + iVar122 + iVar123 + iVar124 + iVar125 + iVar126 + iVar127 + iVar128 +
      iVar129 + iVar130 + iVar131 + iVar132 + iVar133 + iVar134 + iVar135 + iVar136 + iVar137 +
      iVar138 + iVar139 + iVar140 + iVar141 + iVar142 + iVar143 + iVar144 + iVar145 + iVar146 +
      iVar147 + iVar148 + iVar149 + iVar150 + iVar151 + iVar152 + iVar153 + iVar154 + iVar155 +
      iVar156 + iVar157 + iVar158 + iVar159 + iVar160 + iVar161 + iVar162 + iVar163 + iVar164 +
      iVar165 + iVar166 + iVar167 + iVar168 + iVar169 + iVar170 + iVar171 + iVar172 + iVar173 +
      iVar174 + iVar175 + iVar176 + iVar177 + iVar178 + iVar179 + iVar180 + iVar181 + iVar182 +
      iVar183 + iVar184 + iVar185 + iVar186 + iVar187 + iVar188 + iVar189 + iVar190 + iVar191 +
      iVar192 + iVar193 + iVar194 + iVar195 + iVar196 + iVar197 + iVar198 + iVar199 + iVar200 +
      iVar201 + iVar202 + iVar203 + iVar204 + iVar205 + iVar206 + iVar207 + iVar208 + iVar209 +
      iVar210 + iVar211 + iVar212 + iVar213 + iVar214 + iVar215 + iVar216 + iVar217 + iVar218 +
      iVar219 + iVar220 + iVar221 + iVar222 + iVar223 + iVar224 + iVar225 + iVar226 + iVar227 +
      iVar228 + iVar229 + iVar230 + iVar231 + iVar232 + iVar233 + iVar234 + iVar235 + iVar236 +
      iVar237 + iVar238 + iVar239 + iVar240 + iVar241 + iVar242 + iVar243 + iVar244 + iVar245 +
      iVar246 + iVar247 + iVar248 + iVar249 + iVar250 + iVar251 + iVar252 + iVar253 + iVar254 +
      iVar255 + iVar256 + iVar257 + iVar258 + iVar259 + iVar260 + iVar261 + iVar262 + iVar263 +
      iVar264 + iVar265 + iVar266 + iVar267 + iVar268 + iVar269 + iVar270 + iVar271 + iVar272 +
      iVar273 + iVar274 + iVar275 + iVar276 + iVar277 + iVar278 + iVar279 + iVar280 + iVar281 +
      iVar282 + iVar283 + iVar284 + iVar285 + iVar286 + iVar287 + iVar288 + iVar289 + iVar290 +
      iVar291 + iVar292 + iVar293 + iVar294 + iVar295 + iVar296 + iVar297 + iVar298 + iVar299 +
      iVar300 + iVar301 + iVar302 + iVar303 + iVar304 + iVar305 + iVar306 + iVar307 + iVar308 +
      iVar309 + iVar310 + iVar311 + iVar312 + iVar313 + iVar314 + iVar315 + iVar316 + iVar317 +
      iVar318 + iVar319 + iVar320 + iVar321 + iVar322 + iVar323 + iVar324 + iVar325 + iVar326 +
      iVar327 + iVar328 + iVar329 + iVar330 + iVar331 + iVar332 + iVar333 + iVar334 + iVar335 +
      iVar336 + iVar337 + iVar338 + iVar339 + iVar340 + iVar341 + iVar342 + iVar343 + iVar344 +
      iVar345 + iVar346 + iVar347 + iVar348 + iVar349 + iVar350 + iVar351 + iVar352 + iVar353 +
      iVar354 + iVar355 + iVar356 + iVar357 + iVar358 + iVar359 + iVar360 + iVar361 + iVar362 +
      iVar363 + iVar364 + iVar365 + iVar366 + iVar367 + iVar368 + iVar369 + iVar370 + iVar371 +
      iVar372 + iVar373 + iVar374 + iVar375 + iVar376 + iVar377 + iVar378 + iVar379 + iVar380 +
      iVar381 + iVar382 + iVar383 + iVar384 + iVar385 + iVar386 + iVar387 + iVar388 + iVar389 +
      iVar390 + iVar391 + iVar392 + iVar393 + iVar394 + iVar395 + iVar396 + iVar397 + iVar398 +
      iVar399 + iVar400 + iVar401 + iVar402 + iVar403 + iVar404 + iVar405 + iVar406 + iVar407 +
      iVar408 + iVar409 + iVar410 + iVar411 + iVar412 + iVar413 + iVar414 + iVar415 + iVar416 +
      iVar417 + iVar418 + iVar419 + iVar420 + iVar421 + iVar422 + iVar423 + iVar424 + iVar425 +
      iVar426 + iVar427 + iVar428 + iVar429 + iVar430 + iVar431 + iVar432 + iVar433 + iVar434 +
      iVar435 + iVar436 + iVar437 + iVar438 + iVar439 + iVar440 == 0) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  __assert_fail("sum==0","source_extensions_inst__10_vars__no_complex.c",0x37b,
                (char *)&__PRETTY_FUNCTION___3326);
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,__libc_csu_init,__libc_csu_fini,param_1,auStack_4)
  ;
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



// WARNING: Removing unreachable block (ram,0x08049d0c)
// WARNING: Removing unreachable block (ram,0x08049d15)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x08049d58)
// WARNING: Removing unreachable block (ram,0x08049d61)

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
  for (uVar2 = 0xa687; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x8000) {
    sVar1 = sVar1 + 1;
  }
  return CONCAT22(0x7671,sVar1) + -0x76710000;
}



// WARNING: Removing unreachable block (ram,0x08049e38)

undefined4 inst_0_flags_var_0(void)

{
  ushort uVar1;
  
  for (uVar1 = 0x10ef; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x8000) {
  }
  return 0;
}



int inst_0_values_var_1(void)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0;
  for (uVar2 = 0x22a9; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x8000) {
    sVar1 = sVar1 + 1;
  }
  return CONCAT22(0xc2e,sVar1) + -0xc2e0000;
}



// WARNING: Removing unreachable block (ram,0x08049ee7)

undefined4 inst_0_flags_var_1(void)

{
  ushort uVar1;
  
  for (uVar1 = 0x970; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x8000) {
  }
  return 0;
}



int inst_0_values_var_2(void)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0;
  for (uVar2 = 0x2077; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x8000) {
    sVar1 = sVar1 + 1;
  }
  return CONCAT22(0x9ead,sVar1) + 0x61530000;
}



// WARNING: Removing unreachable block (ram,0x08049f96)

undefined4 inst_0_flags_var_2(void)

{
  ushort uVar1;
  
  for (uVar1 = 0x81d8; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x8000) {
  }
  return 0;
}



int inst_0_values_var_3(void)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0;
  for (uVar2 = 0x6764; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x8000) {
    sVar1 = sVar1 + 1;
  }
  return CONCAT22(0x8380,sVar1) + 0x7c7ffffe;
}



// WARNING: Removing unreachable block (ram,0x0804a045)

undefined4 inst_0_flags_var_3(void)

{
  ushort uVar1;
  
  for (uVar1 = 0xe1f9; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x8000) {
  }
  return 0;
}



int inst_0_values_var_4(void)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0;
  for (uVar2 = 0x50cc; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x8000) {
    sVar1 = sVar1 + 1;
  }
  return CONCAT22(0x7531,sVar1) + -0x75310002;
}



// WARNING: Removing unreachable block (ram,0x0804a0f4)

undefined4 inst_0_flags_var_4(void)

{
  ushort uVar1;
  
  for (uVar1 = 0xfe1d; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x8000) {
  }
  return 0;
}



int inst_0_values_var_5(void)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0;
  for (uVar2 = 0xe7e4; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x8000) {
    sVar1 = sVar1 + 1;
  }
  return CONCAT22(0xe873,sVar1) + 0x178cfffe;
}



// WARNING: Removing unreachable block (ram,0x0804a1a3)

undefined4 inst_0_flags_var_5(void)

{
  ushort uVar1;
  
  for (uVar1 = 0x94e0; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x8000) {
  }
  return 0;
}



int inst_0_values_var_6(void)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0;
  for (uVar2 = 0x5db8; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x8000) {
    sVar1 = sVar1 + 1;
  }
  return CONCAT22(0xe915,sVar1) + 0x16eafffd;
}



// WARNING: Removing unreachable block (ram,0x0804a252)

undefined4 inst_0_flags_var_6(void)

{
  ushort uVar1;
  
  for (uVar1 = 0x72ce; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x8000) {
  }
  return 0;
}



int inst_0_values_var_7(void)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0;
  for (uVar2 = 0x720a; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x8000) {
    sVar1 = sVar1 + 1;
  }
  return CONCAT22(0x4dbf,sVar1) + -0x4dbf0001;
}



// WARNING: Removing unreachable block (ram,0x0804a301)

undefined4 inst_0_flags_var_7(void)

{
  ushort uVar1;
  
  for (uVar1 = 0xb014; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x8000) {
  }
  return 0;
}



int inst_0_values_var_8(void)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0;
  for (uVar2 = 0x6983; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x8000) {
    sVar1 = sVar1 + 1;
  }
  return CONCAT22(0xe0cb,sVar1) + 0x1f350000;
}



// WARNING: Removing unreachable block (ram,0x0804a3b0)

undefined4 inst_0_flags_var_8(void)

{
  ushort uVar1;
  
  for (uVar1 = 0x950e; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x8000) {
  }
  return 0;
}



int inst_0_values_var_9(void)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0;
  for (uVar2 = 0x375c; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x8000) {
    sVar1 = sVar1 + 1;
  }
  return CONCAT22(0x3b91,sVar1) + -0x3b910002;
}



// WARNING: Removing unreachable block (ram,0x0804a45f)

undefined4 inst_0_flags_var_9(void)

{
  ushort uVar1;
  
  for (uVar1 = 0x1d7e; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x8000) {
  }
  return 0;
}



int inst_1_values_var_0(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  for (uVar2 = 0x10632017; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



// WARNING: Removing unreachable block (ram,0x0804a50c)

undefined4 inst_1_flags_var_0(void)

{
  uint uVar1;
  
  for (uVar1 = 0xf2d2a31; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x80000000) {
  }
  return 0;
}



int inst_1_values_var_1(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  for (uVar2 = 0x144fd8d6; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
    iVar1 = iVar1 + 1;
  }
  return iVar1 + -1;
}



// WARNING: Removing unreachable block (ram,0x0804a5b9)

undefined4 inst_1_flags_var_1(void)

{
  uint uVar1;
  
  for (uVar1 = 0x2b8cbf5b; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x80000000) {
  }
  return 0;
}



int inst_1_values_var_2(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  for (uVar2 = 0xe64aaea0; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
    iVar1 = iVar1 + 1;
  }
  return iVar1 + -5;
}



// WARNING: Removing unreachable block (ram,0x0804a666)

undefined4 inst_1_flags_var_2(void)

{
  uint uVar1;
  
  for (uVar1 = 0xe57c7ba; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x80000000) {
  }
  return 0;
}



int inst_1_values_var_3(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  for (uVar2 = 0xf36d311; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



// WARNING: Removing unreachable block (ram,0x0804a713)

undefined4 inst_1_flags_var_3(void)

{
  uint uVar1;
  
  for (uVar1 = 0xa1e08aa; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x80000000) {
  }
  return 0;
}



int inst_1_values_var_4(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  for (uVar2 = 0xb4a832eb; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



// WARNING: Removing unreachable block (ram,0x0804a7c0)

undefined4 inst_1_flags_var_4(void)

{
  uint uVar1;
  
  for (uVar1 = 0xf1e40875; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x80000000) {
  }
  return 0;
}



int inst_1_values_var_5(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  for (uVar2 = 0xe3626229; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



// WARNING: Removing unreachable block (ram,0x0804a86d)

undefined4 inst_1_flags_var_5(void)

{
  uint uVar1;
  
  for (uVar1 = 0xcb0c8df; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x80000000) {
  }
  return 0;
}



int inst_1_values_var_6(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  for (uVar2 = 0x780bac86; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
    iVar1 = iVar1 + 1;
  }
  return iVar1 + -1;
}



// WARNING: Removing unreachable block (ram,0x0804a91a)

undefined4 inst_1_flags_var_6(void)

{
  uint uVar1;
  
  for (uVar1 = 0x67514072; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x80000000) {
  }
  return 0;
}



int inst_1_values_var_7(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  for (uVar2 = 0xfff0386b; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



// WARNING: Removing unreachable block (ram,0x0804a9c7)

undefined4 inst_1_flags_var_7(void)

{
  uint uVar1;
  
  for (uVar1 = 0x491c132e; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x80000000) {
  }
  return 0;
}



int inst_1_values_var_8(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  for (uVar2 = 0xffaa671e; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
    iVar1 = iVar1 + 1;
  }
  return iVar1 + -1;
}



// WARNING: Removing unreachable block (ram,0x0804aa74)

undefined4 inst_1_flags_var_8(void)

{
  uint uVar1;
  
  for (uVar1 = 0xd6c88f99; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x80000000) {
  }
  return 0;
}



int inst_1_values_var_9(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  for (uVar2 = 0x4d66da30; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
    iVar1 = iVar1 + 1;
  }
  return iVar1 + -4;
}



// WARNING: Removing unreachable block (ram,0x0804ab21)

undefined4 inst_1_flags_var_9(void)

{
  uint uVar1;
  
  for (uVar1 = 0xa881e9c7; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x80000000) {
  }
  return 0;
}



undefined4 inst_2_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804abd0)
// WARNING: Removing unreachable block (ram,0x0804abdd)

undefined4 inst_2_flags_var_0(void)

{
  return 0;
}



undefined4 inst_2_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804ac8f)
// WARNING: Removing unreachable block (ram,0x0804ac9c)

undefined4 inst_2_flags_var_1(void)

{
  return 0;
}



undefined4 inst_2_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804ad5b)
// WARNING: Removing unreachable block (ram,0x0804ad4e)
// WARNING: Removing unreachable block (ram,0x0804ad6d)

undefined4 inst_2_flags_var_2(void)

{
  return 0;
}



undefined4 inst_2_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804ae0d)
// WARNING: Removing unreachable block (ram,0x0804ae1a)

undefined4 inst_2_flags_var_3(void)

{
  return 0;
}



undefined4 inst_2_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804aed9)
// WARNING: Removing unreachable block (ram,0x0804aecc)
// WARNING: Removing unreachable block (ram,0x0804aeeb)

undefined4 inst_2_flags_var_4(void)

{
  return 0;
}



undefined4 inst_2_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804af98)
// WARNING: Removing unreachable block (ram,0x0804af8b)
// WARNING: Removing unreachable block (ram,0x0804afaa)

undefined4 inst_2_flags_var_5(void)

{
  return 0;
}



undefined4 inst_2_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804b057)
// WARNING: Removing unreachable block (ram,0x0804b04a)
// WARNING: Removing unreachable block (ram,0x0804b069)

undefined4 inst_2_flags_var_6(void)

{
  return 0;
}



undefined4 inst_2_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804b116)
// WARNING: Removing unreachable block (ram,0x0804b109)
// WARNING: Removing unreachable block (ram,0x0804b128)

undefined4 inst_2_flags_var_7(void)

{
  return 0;
}



undefined4 inst_2_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804b1d5)
// WARNING: Removing unreachable block (ram,0x0804b1c8)
// WARNING: Removing unreachable block (ram,0x0804b1e7)

undefined4 inst_2_flags_var_8(void)

{
  return 0;
}



undefined4 inst_2_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804b294)
// WARNING: Removing unreachable block (ram,0x0804b287)
// WARNING: Removing unreachable block (ram,0x0804b2a6)

undefined4 inst_2_flags_var_9(void)

{
  return 0;
}



undefined4 inst_3_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804b353)
// WARNING: Removing unreachable block (ram,0x0804b365)

undefined4 inst_3_flags_var_0(void)

{
  return 0;
}



undefined4 inst_3_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804b412)
// WARNING: Removing unreachable block (ram,0x0804b424)

undefined4 inst_3_flags_var_1(void)

{
  return 0;
}



undefined4 inst_3_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804b4d1)
// WARNING: Removing unreachable block (ram,0x0804b4e3)

undefined4 inst_3_flags_var_2(void)

{
  return 0;
}



undefined4 inst_3_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804b590)
// WARNING: Removing unreachable block (ram,0x0804b5a2)

undefined4 inst_3_flags_var_3(void)

{
  return 0;
}



undefined4 inst_3_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804b64f)
// WARNING: Removing unreachable block (ram,0x0804b661)

undefined4 inst_3_flags_var_4(void)

{
  return 0;
}



undefined4 inst_3_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804b70e)
// WARNING: Removing unreachable block (ram,0x0804b720)

undefined4 inst_3_flags_var_5(void)

{
  return 0;
}



undefined4 inst_3_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804b7cd)
// WARNING: Removing unreachable block (ram,0x0804b7df)

undefined4 inst_3_flags_var_6(void)

{
  return 0;
}



undefined4 inst_3_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804b88c)
// WARNING: Removing unreachable block (ram,0x0804b89e)

undefined4 inst_3_flags_var_7(void)

{
  return 0;
}



undefined4 inst_3_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804b94b)
// WARNING: Removing unreachable block (ram,0x0804b95d)

undefined4 inst_3_flags_var_8(void)

{
  return 0;
}



undefined4 inst_3_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804ba0a)
// WARNING: Removing unreachable block (ram,0x0804ba1c)

undefined4 inst_3_flags_var_9(void)

{
  return 0;
}



undefined4 inst_4_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804bac9)
// WARNING: Removing unreachable block (ram,0x0804babc)
// WARNING: Removing unreachable block (ram,0x0804badb)

undefined4 inst_4_flags_var_0(void)

{
  return 0;
}



undefined4 inst_4_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804bb88)
// WARNING: Removing unreachable block (ram,0x0804bb7b)
// WARNING: Removing unreachable block (ram,0x0804bb9a)

undefined4 inst_4_flags_var_1(void)

{
  return 0;
}



undefined4 inst_4_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804bc47)
// WARNING: Removing unreachable block (ram,0x0804bc3a)
// WARNING: Removing unreachable block (ram,0x0804bc59)

undefined4 inst_4_flags_var_2(void)

{
  return 0;
}



undefined4 inst_4_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804bd06)
// WARNING: Removing unreachable block (ram,0x0804bcf9)
// WARNING: Removing unreachable block (ram,0x0804bd18)

undefined4 inst_4_flags_var_3(void)

{
  return 0;
}



undefined4 inst_4_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804bdc5)
// WARNING: Removing unreachable block (ram,0x0804bdb8)
// WARNING: Removing unreachable block (ram,0x0804bdd7)

undefined4 inst_4_flags_var_4(void)

{
  return 0;
}



undefined4 inst_4_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804be84)
// WARNING: Removing unreachable block (ram,0x0804be77)
// WARNING: Removing unreachable block (ram,0x0804be96)

undefined4 inst_4_flags_var_5(void)

{
  return 0;
}



undefined4 inst_4_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804bf43)
// WARNING: Removing unreachable block (ram,0x0804bf36)
// WARNING: Removing unreachable block (ram,0x0804bf55)

undefined4 inst_4_flags_var_6(void)

{
  return 0;
}



undefined4 inst_4_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804c002)
// WARNING: Removing unreachable block (ram,0x0804bff5)
// WARNING: Removing unreachable block (ram,0x0804c014)

undefined4 inst_4_flags_var_7(void)

{
  return 0;
}



undefined4 inst_4_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804c0c1)
// WARNING: Removing unreachable block (ram,0x0804c0b4)
// WARNING: Removing unreachable block (ram,0x0804c0d3)

undefined4 inst_4_flags_var_8(void)

{
  return 0;
}



undefined4 inst_4_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804c180)
// WARNING: Removing unreachable block (ram,0x0804c173)
// WARNING: Removing unreachable block (ram,0x0804c192)

undefined4 inst_4_flags_var_9(void)

{
  return 0;
}



undefined4 inst_5_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804c23f)
// WARNING: Removing unreachable block (ram,0x0804c232)
// WARNING: Removing unreachable block (ram,0x0804c251)

undefined4 inst_5_flags_var_0(void)

{
  return 0;
}



undefined4 inst_5_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804c2f1)
// WARNING: Removing unreachable block (ram,0x0804c2fe)

undefined4 inst_5_flags_var_1(void)

{
  return 0;
}



undefined4 inst_5_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804c3bd)
// WARNING: Removing unreachable block (ram,0x0804c3b0)
// WARNING: Removing unreachable block (ram,0x0804c3cf)

undefined4 inst_5_flags_var_2(void)

{
  return 0;
}



undefined4 inst_5_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804c47c)
// WARNING: Removing unreachable block (ram,0x0804c46f)
// WARNING: Removing unreachable block (ram,0x0804c48e)

undefined4 inst_5_flags_var_3(void)

{
  return 0;
}



undefined4 inst_5_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804c53b)
// WARNING: Removing unreachable block (ram,0x0804c52e)
// WARNING: Removing unreachable block (ram,0x0804c54d)

undefined4 inst_5_flags_var_4(void)

{
  return 0;
}



undefined4 inst_5_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804c5fa)
// WARNING: Removing unreachable block (ram,0x0804c5ed)
// WARNING: Removing unreachable block (ram,0x0804c60c)

undefined4 inst_5_flags_var_5(void)

{
  return 0;
}



undefined4 inst_5_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804c6ac)
// WARNING: Removing unreachable block (ram,0x0804c6b9)

undefined4 inst_5_flags_var_6(void)

{
  return 0;
}



undefined4 inst_5_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804c778)
// WARNING: Removing unreachable block (ram,0x0804c76b)
// WARNING: Removing unreachable block (ram,0x0804c78a)

undefined4 inst_5_flags_var_7(void)

{
  return 0;
}



undefined4 inst_5_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804c82a)
// WARNING: Removing unreachable block (ram,0x0804c837)

undefined4 inst_5_flags_var_8(void)

{
  return 0;
}



undefined4 inst_5_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804c8f6)
// WARNING: Removing unreachable block (ram,0x0804c8e9)
// WARNING: Removing unreachable block (ram,0x0804c908)

undefined4 inst_5_flags_var_9(void)

{
  return 0;
}



undefined4 inst_6_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804c9a8)
// WARNING: Removing unreachable block (ram,0x0804c9b5)

undefined4 inst_6_flags_var_0(void)

{
  return 0;
}



undefined4 inst_6_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804ca5f)
// WARNING: Removing unreachable block (ram,0x0804ca6c)

undefined4 inst_6_flags_var_1(void)

{
  return 0;
}



undefined4 inst_6_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804cb16)
// WARNING: Removing unreachable block (ram,0x0804cb23)

undefined4 inst_6_flags_var_2(void)

{
  return 0;
}



undefined4 inst_6_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804cbcd)
// WARNING: Removing unreachable block (ram,0x0804cbda)

undefined4 inst_6_flags_var_3(void)

{
  return 0;
}



undefined4 inst_6_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804cc84)
// WARNING: Removing unreachable block (ram,0x0804cc91)

undefined4 inst_6_flags_var_4(void)

{
  return 0;
}



undefined4 inst_6_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804cd3b)
// WARNING: Removing unreachable block (ram,0x0804cd48)

undefined4 inst_6_flags_var_5(void)

{
  return 0;
}



undefined4 inst_6_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804cdf2)
// WARNING: Removing unreachable block (ram,0x0804cdff)

undefined4 inst_6_flags_var_6(void)

{
  return 0;
}



undefined4 inst_6_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804cea9)
// WARNING: Removing unreachable block (ram,0x0804ceb6)

undefined4 inst_6_flags_var_7(void)

{
  return 0;
}



undefined4 inst_6_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804cf60)
// WARNING: Removing unreachable block (ram,0x0804cf6d)

undefined4 inst_6_flags_var_8(void)

{
  return 0;
}



undefined4 inst_6_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804d017)
// WARNING: Removing unreachable block (ram,0x0804d024)

undefined4 inst_6_flags_var_9(void)

{
  return 0;
}



undefined4 inst_7_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804d0db)

undefined4 inst_7_flags_var_0(void)

{
  return 0;
}



undefined4 inst_7_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804d19a)

undefined4 inst_7_flags_var_1(void)

{
  return 0;
}



undefined4 inst_7_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804d259)

undefined4 inst_7_flags_var_2(void)

{
  return 0;
}



undefined4 inst_7_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804d318)
// WARNING: Removing unreachable block (ram,0x0804d32a)

undefined4 inst_7_flags_var_3(void)

{
  return 0;
}



undefined4 inst_7_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804d3d7)

undefined4 inst_7_flags_var_4(void)

{
  return 0;
}



undefined4 inst_7_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804d496)
// WARNING: Removing unreachable block (ram,0x0804d4a8)

undefined4 inst_7_flags_var_5(void)

{
  return 0;
}



undefined4 inst_7_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804d555)
// WARNING: Removing unreachable block (ram,0x0804d567)

undefined4 inst_7_flags_var_6(void)

{
  return 0;
}



undefined4 inst_7_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804d614)

undefined4 inst_7_flags_var_7(void)

{
  return 0;
}



undefined4 inst_7_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804d6d3)

undefined4 inst_7_flags_var_8(void)

{
  return 0;
}



undefined4 inst_7_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0804d792)

undefined4 inst_7_flags_var_9(void)

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



undefined4 inst_8_values_var_1(void)

{
  return 0;
}



undefined4 inst_8_flags_var_1(void)

{
  return 0;
}



undefined4 inst_8_values_var_2(void)

{
  return 0;
}



undefined4 inst_8_flags_var_2(void)

{
  return 0;
}



undefined4 inst_8_values_var_3(void)

{
  return 0;
}



undefined4 inst_8_flags_var_3(void)

{
  return 0;
}



undefined4 inst_8_values_var_4(void)

{
  return 0;
}



undefined4 inst_8_flags_var_4(void)

{
  return 0;
}



undefined4 inst_8_values_var_5(void)

{
  return 0;
}



undefined4 inst_8_flags_var_5(void)

{
  return 0;
}



undefined4 inst_8_values_var_6(void)

{
  return 0;
}



undefined4 inst_8_flags_var_6(void)

{
  return 0;
}



undefined4 inst_8_values_var_7(void)

{
  return 0;
}



undefined4 inst_8_flags_var_7(void)

{
  return 0;
}



undefined4 inst_8_values_var_8(void)

{
  return 0;
}



undefined4 inst_8_flags_var_8(void)

{
  return 0;
}



undefined4 inst_8_values_var_9(void)

{
  return 0;
}



undefined4 inst_8_flags_var_9(void)

{
  return 0;
}



int inst_9_values_var_0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0x304ed485;
  uVar2 = 1;
  uVar3 = 0;
  do {
    if ((uVar2 & 0xe131999e) != 0) {
      uVar3 = uVar3 | (uVar2 & 0xe131999e) * (uVar1 & 1);
      uVar1 = uVar1 >> 1;
    }
    uVar2 = uVar2 << 1;
  } while (uVar2 != 0);
  return uVar3 + 0x3eefeff6;
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



int inst_9_values_var_1(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0x265ca3f;
  uVar1 = 1;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x8b675774) != 0) {
      uVar2 = uVar2 | (uVar1 & 0x8b675774) * (uVar3 & 1);
      uVar3 = uVar3 >> 1;
    }
    uVar1 = uVar1 << 1;
  } while (uVar1 != 0);
  return uVar2 + 0xf4fafc8c;
}



undefined4 inst_9_flags_var_1(void)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    iVar1 = iVar1 << 1;
  } while (iVar1 != 0);
  return 0;
}



int inst_9_values_var_2(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0xcb23c238;
  uVar2 = 1;
  uVar3 = 0;
  do {
    if ((uVar2 & 0xcb23c238) != 0) {
      uVar3 = uVar3 | (uVar2 & 0xcb23c238) * (uVar1 & 1);
      uVar1 = uVar1 >> 1;
    }
    uVar2 = uVar2 << 1;
  } while (uVar2 != 0);
  return uVar3 + 0xfeff3e00;
}



undefined4 inst_9_flags_var_2(void)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    iVar1 = iVar1 << 1;
  } while (iVar1 != 0);
  return 0;
}



int inst_9_values_var_3(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0x5ee7a019;
  uVar2 = 1;
  uVar3 = 0;
  do {
    if ((uVar2 & 0x75c722fb) != 0) {
      uVar3 = uVar3 | (uVar2 & 0x75c722fb) * (uVar1 & 1);
      uVar1 = uVar1 >> 1;
    }
    uVar2 = uVar2 << 1;
  } while (uVar2 != 0);
  return uVar3 + 0x8b7fffcf;
}



undefined4 inst_9_flags_var_3(void)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    iVar1 = iVar1 << 1;
  } while (iVar1 != 0);
  return 0;
}



int inst_9_values_var_4(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0x26182b5a;
  uVar2 = 1;
  uVar3 = 0;
  do {
    if ((uVar2 & 0x362c6575) != 0) {
      uVar3 = uVar3 | (uVar2 & 0x362c6575) * (uVar1 & 1);
      uVar1 = uVar1 >> 1;
    }
    uVar2 = uVar2 << 1;
  } while (uVar2 != 0);
  return uVar3 + 0xfbdbbb9c;
}



undefined4 inst_9_flags_var_4(void)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    iVar1 = iVar1 << 1;
  } while (iVar1 != 0);
  return 0;
}



int inst_9_values_var_5(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0x947d5ec8;
  uVar2 = 1;
  uVar3 = 0;
  do {
    if ((uVar2 & 0x816a712) != 0) {
      uVar3 = uVar3 | (uVar2 & 0x816a712) * (uVar1 & 1);
      uVar1 = uVar1 >> 1;
    }
    uVar2 = uVar2 << 1;
  } while (uVar2 != 0);
  return uVar3 + 0xf7ed7e00;
}



undefined4 inst_9_flags_var_5(void)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    iVar1 = iVar1 << 1;
  } while (iVar1 != 0);
  return 0;
}



int inst_9_values_var_6(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0x4898c336;
  uVar1 = 1;
  uVar2 = 0;
  do {
    if ((uVar1 & 0xd3cbe89d) != 0) {
      uVar2 = uVar2 | (uVar1 & 0xd3cbe89d) * (uVar3 & 1);
      uVar3 = uVar3 >> 1;
    }
    uVar1 = uVar1 << 1;
  } while (uVar1 != 0);
  return uVar2 + 0xfcfe7774;
}



undefined4 inst_9_flags_var_6(void)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    iVar1 = iVar1 << 1;
  } while (iVar1 != 0);
  return 0;
}



int inst_9_values_var_7(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0x89d51b3e;
  uVar1 = 1;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x89d51b3e) != 0) {
      uVar2 = uVar2 | (uVar1 & 0x89d51b3e) * (uVar3 & 1);
      uVar3 = uVar3 >> 1;
    }
    uVar1 = uVar1 << 1;
  } while (uVar1 != 0);
  return uVar2 + 0x7faeeec4;
}



undefined4 inst_9_flags_var_7(void)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    iVar1 = iVar1 << 1;
  } while (iVar1 != 0);
  return 0;
}



int inst_9_values_var_8(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0x2adc213f;
  uVar2 = 1;
  uVar3 = 0;
  do {
    if ((uVar2 & 0xa155bfa8) != 0) {
      uVar3 = uVar3 | (uVar2 & 0xa155bfa8) * (uVar1 & 1);
      uVar1 = uVar1 >> 1;
    }
    uVar2 = uVar2 << 1;
  } while (uVar2 != 0);
  return uVar3 - 0x4027a8;
}



undefined4 inst_9_flags_var_8(void)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    iVar1 = iVar1 << 1;
  } while (iVar1 != 0);
  return 0;
}



int inst_9_values_var_9(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0xc86d9c37;
  uVar2 = 1;
  uVar3 = 0;
  do {
    if ((uVar2 & 0xc86d9c37) != 0) {
      uVar3 = uVar3 | (uVar2 & 0xc86d9c37) * (uVar1 & 1);
      uVar1 = uVar1 >> 1;
    }
    uVar2 = uVar2 << 1;
  } while (uVar2 != 0);
  return uVar3 + 0x3fd3fbd9;
}



undefined4 inst_9_flags_var_9(void)

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
    if ((uVar1 & 0x6373bc81) != 0) {
      uVar2 = uVar2 << 1 | (uint)((uVar1 & 0x61108000) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return uVar2 - 0xd240;
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



int inst_10_values_var_1(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x80000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0xadac7378) != 0) {
      uVar2 = uVar2 << 1 | (uint)((uVar1 & 0x9086030) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return uVar2 - 0xa586;
}



undefined4 inst_10_flags_var_1(void)

{
  uint uVar1;
  
  uVar1 = 0x80000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return 0;
}



int inst_10_values_var_2(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x80000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x83b7a538) != 0) {
      uVar2 = uVar2 << 1 | (uint)((uVar1 & 0x82208418) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return uVar2 - 0xc853;
}



undefined4 inst_10_flags_var_2(void)

{
  uint uVar1;
  
  uVar1 = 0x80000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return 0;
}



int inst_10_values_var_3(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x80000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0xda5b3677) != 0) {
      uVar2 = uVar2 << 1 | (uint)((uVar1 & 0x88490271) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return uVar2 - 0x95479;
}



undefined4 inst_10_flags_var_3(void)

{
  uint uVar1;
  
  uVar1 = 0x80000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return 0;
}



int inst_10_values_var_4(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x80000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0xd108387c) != 0) {
      uVar2 = uVar2 << 1 | (uint)((uVar1 & 0xd108387c) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return uVar2 - 0x1fff;
}



undefined4 inst_10_flags_var_4(void)

{
  uint uVar1;
  
  uVar1 = 0x80000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return 0;
}



int inst_10_values_var_5(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x80000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x9adf2191) != 0) {
      uVar2 = uVar2 << 1 | (uint)((uVar1 & 0x9a580100) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return uVar2 - 0xf708;
}



undefined4 inst_10_flags_var_5(void)

{
  uint uVar1;
  
  uVar1 = 0x80000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return 0;
}



int inst_10_values_var_6(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x80000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0xa7832e39) != 0) {
      uVar2 = uVar2 << 1 | (uint)((uVar1 & 0x6022401) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return uVar2 - 0x32a1;
}



undefined4 inst_10_flags_var_6(void)

{
  uint uVar1;
  
  uVar1 = 0x80000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return 0;
}



int inst_10_values_var_7(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x80000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x2f587a4e) != 0) {
      uVar2 = uVar2 << 1 | (uint)((uVar1 & 0x24183208) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return uVar2 - 0x146d4;
}



undefined4 inst_10_flags_var_7(void)

{
  uint uVar1;
  
  uVar1 = 0x80000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return 0;
}



int inst_10_values_var_8(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x80000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x6433bd35) != 0) {
      uVar2 = uVar2 << 1 | (uint)((uVar1 & 0x64338030) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return uVar2 - 0x1fe0c;
}



undefined4 inst_10_flags_var_8(void)

{
  uint uVar1;
  
  uVar1 = 0x80000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return 0;
}



int inst_10_values_var_9(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x80000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x24313861) != 0) {
      uVar2 = uVar2 << 1 | (uint)((uVar1 & 0x20200001) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return uVar2 - 0x501;
}



undefined4 inst_10_flags_var_9(void)

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



undefined4 inst_11_values_var_1(void)

{
  return 0;
}



undefined4 inst_11_flags_var_1(void)

{
  return 0;
}



undefined4 inst_11_values_var_2(void)

{
  return 0;
}



undefined4 inst_11_flags_var_2(void)

{
  return 0;
}



undefined4 inst_11_values_var_3(void)

{
  return 0;
}



undefined4 inst_11_flags_var_3(void)

{
  return 0;
}



undefined4 inst_11_values_var_4(void)

{
  return 0;
}



undefined4 inst_11_flags_var_4(void)

{
  return 0;
}



undefined4 inst_11_values_var_5(void)

{
  return 0;
}



undefined4 inst_11_flags_var_5(void)

{
  return 0;
}



undefined4 inst_11_values_var_6(void)

{
  return 0;
}



undefined4 inst_11_flags_var_6(void)

{
  return 0;
}



undefined4 inst_11_values_var_7(void)

{
  return 0;
}



undefined4 inst_11_flags_var_7(void)

{
  return 0;
}



undefined4 inst_11_values_var_8(void)

{
  return 0;
}



undefined4 inst_11_flags_var_8(void)

{
  return 0;
}



undefined4 inst_11_values_var_9(void)

{
  return 0;
}



undefined4 inst_11_flags_var_9(void)

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



undefined4 inst_12_values_var_1(void)

{
  return 0;
}



undefined4 inst_12_flags_var_1(void)

{
  return 0;
}



undefined4 inst_12_values_var_2(void)

{
  return 0;
}



undefined4 inst_12_flags_var_2(void)

{
  return 0;
}



undefined4 inst_12_values_var_3(void)

{
  return 0;
}



undefined4 inst_12_flags_var_3(void)

{
  return 0;
}



undefined4 inst_12_values_var_4(void)

{
  return 0;
}



undefined4 inst_12_flags_var_4(void)

{
  return 0;
}



undefined4 inst_12_values_var_5(void)

{
  return 0;
}



undefined4 inst_12_flags_var_5(void)

{
  return 0;
}



undefined4 inst_12_values_var_6(void)

{
  return 0;
}



undefined4 inst_12_flags_var_6(void)

{
  return 0;
}



undefined4 inst_12_values_var_7(void)

{
  return 0;
}



undefined4 inst_12_flags_var_7(void)

{
  return 0;
}



undefined4 inst_12_values_var_8(void)

{
  return 0;
}



undefined4 inst_12_flags_var_8(void)

{
  return 0;
}



undefined4 inst_12_values_var_9(void)

{
  return 0;
}



undefined4 inst_12_flags_var_9(void)

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



undefined4 inst_13_values_var_1(void)

{
  return 0;
}



undefined4 inst_13_flags_var_1(void)

{
  return 0;
}



undefined4 inst_13_values_var_2(void)

{
  return 0;
}



undefined4 inst_13_flags_var_2(void)

{
  return 0;
}



undefined4 inst_13_values_var_3(void)

{
  return 0;
}



undefined4 inst_13_flags_var_3(void)

{
  return 0;
}



undefined4 inst_13_values_var_4(void)

{
  return 0;
}



undefined4 inst_13_flags_var_4(void)

{
  return 0;
}



undefined4 inst_13_values_var_5(void)

{
  return 0;
}



undefined4 inst_13_flags_var_5(void)

{
  return 0;
}



undefined4 inst_13_values_var_6(void)

{
  return 0;
}



undefined4 inst_13_flags_var_6(void)

{
  return 0;
}



undefined4 inst_13_values_var_7(void)

{
  return 0;
}



undefined4 inst_13_flags_var_7(void)

{
  return 0;
}



undefined4 inst_13_values_var_8(void)

{
  return 0;
}



undefined4 inst_13_flags_var_8(void)

{
  return 0;
}



undefined4 inst_13_values_var_9(void)

{
  return 0;
}



undefined4 inst_13_flags_var_9(void)

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



undefined4 inst_14_values_var_1(void)

{
  return 0;
}



undefined4 inst_14_flags_var_1(void)

{
  return 0;
}



undefined4 inst_14_values_var_2(void)

{
  return 0;
}



undefined4 inst_14_flags_var_2(void)

{
  return 0;
}



undefined4 inst_14_values_var_3(void)

{
  return 0;
}



undefined4 inst_14_flags_var_3(void)

{
  return 0;
}



undefined4 inst_14_values_var_4(void)

{
  return 0;
}



undefined4 inst_14_flags_var_4(void)

{
  return 0;
}



undefined4 inst_14_values_var_5(void)

{
  return 0;
}



undefined4 inst_14_flags_var_5(void)

{
  return 0;
}



undefined4 inst_14_values_var_6(void)

{
  return 0;
}



undefined4 inst_14_flags_var_6(void)

{
  return 0;
}



undefined4 inst_14_values_var_7(void)

{
  return 0;
}



undefined4 inst_14_flags_var_7(void)

{
  return 0;
}



undefined4 inst_14_values_var_8(void)

{
  return 0;
}



undefined4 inst_14_flags_var_8(void)

{
  return 0;
}



undefined4 inst_14_values_var_9(void)

{
  return 0;
}



undefined4 inst_14_flags_var_9(void)

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



undefined4 inst_15_values_var_1(void)

{
  return 0;
}



undefined4 inst_15_flags_var_1(void)

{
  return 0;
}



undefined4 inst_15_values_var_2(void)

{
  return 0;
}



undefined4 inst_15_flags_var_2(void)

{
  return 0;
}



undefined4 inst_15_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08050814)

undefined4 inst_15_flags_var_3(void)

{
  return 0;
}



undefined4 inst_15_values_var_4(void)

{
  return 0;
}



undefined4 inst_15_flags_var_4(void)

{
  return 0;
}



undefined4 inst_15_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08050972)

undefined4 inst_15_flags_var_5(void)

{
  return 0;
}



undefined4 inst_15_values_var_6(void)

{
  return 0;
}



undefined4 inst_15_flags_var_6(void)

{
  return 0;
}



undefined4 inst_15_values_var_7(void)

{
  return 0;
}



undefined4 inst_15_flags_var_7(void)

{
  return 0;
}



undefined4 inst_15_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08050b7f)

undefined4 inst_15_flags_var_8(void)

{
  return 0;
}



undefined4 inst_15_values_var_9(void)

{
  return 0;
}



undefined4 inst_15_flags_var_9(void)

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



undefined4 inst_16_values_var_1(void)

{
  return 0;
}



undefined4 inst_16_flags_var_1(void)

{
  return 0;
}



undefined4 inst_16_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08050e36)

undefined4 inst_16_flags_var_2(void)

{
  return 0;
}



undefined4 inst_16_values_var_3(void)

{
  return 0;
}



undefined4 inst_16_flags_var_3(void)

{
  return 0;
}



undefined4 inst_16_values_var_4(void)

{
  return 0;
}



undefined4 inst_16_flags_var_4(void)

{
  return 0;
}



undefined4 inst_16_values_var_5(void)

{
  return 0;
}



undefined4 inst_16_flags_var_5(void)

{
  return 0;
}



undefined4 inst_16_values_var_6(void)

{
  return 0;
}



undefined4 inst_16_flags_var_6(void)

{
  return 0;
}



undefined4 inst_16_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080511a1)

undefined4 inst_16_flags_var_7(void)

{
  return 0;
}



undefined4 inst_16_values_var_8(void)

{
  return 0;
}



undefined4 inst_16_flags_var_8(void)

{
  return 0;
}



undefined4 inst_16_values_var_9(void)

{
  return 0;
}



undefined4 inst_16_flags_var_9(void)

{
  return 0;
}



int inst_17_values_var_0(void)

{
  int iVar1;
  
  iVar1 = crc32(0x4ab86d13,0x9d);
  return iVar1 + -0x2ec43c32;
}



undefined4 inst_17_flags_var_0(void)

{
  crc32(0x74a7e490,0xe8);
  return 0;
}



int inst_17_values_var_1(void)

{
  int iVar1;
  
  iVar1 = crc32(0xf97dd608,0x16);
  return iVar1 + 0x4320fa62;
}



undefined4 inst_17_flags_var_1(void)

{
  crc32(0x8f82b58a,0xcc);
  return 0;
}



int inst_17_values_var_2(void)

{
  int iVar1;
  
  iVar1 = crc32(0xe00c88a3,0xaa);
  return iVar1 + -0x7852d744;
}



undefined4 inst_17_flags_var_2(void)

{
  crc32(0x68989a18,0x9a);
  return 0;
}



int inst_17_values_var_3(void)

{
  int iVar1;
  
  iVar1 = crc32(0x7c3475c8,0xb3);
  return iVar1 + 0x179234bd;
}



undefined4 inst_17_flags_var_3(void)

{
  crc32(0x918501a7,0xd7);
  return 0;
}



int inst_17_values_var_4(void)

{
  int iVar1;
  
  iVar1 = crc32(0x2d1b4de5,0xbc);
  return iVar1 + -0x29ba1a52;
}



undefined4 inst_17_flags_var_4(void)

{
  crc32(0x67cde30a,0xf8);
  return 0;
}



int inst_17_values_var_5(void)

{
  int iVar1;
  
  iVar1 = crc32(0x6d04e388,0x29);
  return iVar1 + -0x504d3246;
}



undefined4 inst_17_flags_var_5(void)

{
  crc32(0xd1dd3802,0x9e);
  return 0;
}



int inst_17_values_var_6(void)

{
  int iVar1;
  
  iVar1 = crc32(0xb632cc96,0xf1);
  return iVar1 + 0x4a453abb;
}



undefined4 inst_17_flags_var_6(void)

{
  crc32(0x8094eab2,0xfa);
  return 0;
}



int inst_17_values_var_7(void)

{
  int iVar1;
  
  iVar1 = crc32(0x2827d8bf,0x61);
  return iVar1 + -0x7f837954;
}



undefined4 inst_17_flags_var_7(void)

{
  crc32(0xab392156,0xb);
  return 0;
}



int inst_17_values_var_8(void)

{
  int iVar1;
  
  iVar1 = crc32(0x9db0968a,0x42);
  return iVar1 + -0x49c9ce9d;
}



undefined4 inst_17_flags_var_8(void)

{
  crc32(0x92530e3d,0xf6);
  return 0;
}



int inst_17_values_var_9(void)

{
  int iVar1;
  
  iVar1 = crc32(0xacda6ed1,0x8e);
  return iVar1 + -0xf9a3c99;
}



undefined4 inst_17_flags_var_9(void)

{
  crc32(0x36d74c3c,0xb8);
  return 0;
}



int inst_18_values_var_0(void)

{
  int iVar1;
  
  iVar1 = crc32(0xb263322b,0x322b);
  return iVar1 + -0xb263;
}



undefined4 inst_18_flags_var_0(void)

{
  crc32(0x4d5ad2b5,0x712e);
  return 0;
}



int inst_18_values_var_1(void)

{
  int iVar1;
  
  iVar1 = crc32(0x3910e455,0xe455);
  return iVar1 + -0x3910;
}



undefined4 inst_18_flags_var_1(void)

{
  crc32(0xf5cf393d,0x6e65);
  return 0;
}



int inst_18_values_var_2(void)

{
  int iVar1;
  
  iVar1 = crc32(0xf4a046e0,0x565b);
  return iVar1 + -0x220b094;
}



undefined4 inst_18_flags_var_2(void)

{
  crc32(0x7208fa4f,0x212c);
  return 0;
}



int inst_18_values_var_3(void)

{
  int iVar1;
  
  iVar1 = crc32(0xbcc6137b,0xd5fc);
  return iVar1 + -0x64824e56;
}



undefined4 inst_18_flags_var_3(void)

{
  crc32(0xe6376b17,0xafd7);
  return 0;
}



int inst_18_values_var_4(void)

{
  int iVar1;
  
  iVar1 = crc32(0x32176262,0xd58b);
  return iVar1 + 0x6cc95ffb;
}



undefined4 inst_18_flags_var_4(void)

{
  crc32(0x57850a45,0x76cb);
  return 0;
}



int inst_18_values_var_5(void)

{
  int iVar1;
  
  iVar1 = crc32(0xbd2b6234,0xf236);
  return iVar1 + 0x4a128e2e;
}



undefined4 inst_18_flags_var_5(void)

{
  crc32(0x8e26adda,0xfdac);
  return 0;
}



int inst_18_values_var_6(void)

{
  int iVar1;
  
  iVar1 = crc32(0xb3ce5af,0x9463);
  return iVar1 + -0x54b942ab;
}



undefined4 inst_18_flags_var_6(void)

{
  crc32(0xe9c8e7e2,0xb54e);
  return 0;
}



int inst_18_values_var_7(void)

{
  int iVar1;
  
  iVar1 = crc32(0x61b99c79,0xb0d7);
  return iVar1 + -0x1d6dabc6;
}



undefined4 inst_18_flags_var_7(void)

{
  crc32(0x558a193e,0x5566);
  return 0;
}



int inst_18_values_var_8(void)

{
  int iVar1;
  
  iVar1 = crc32(0x69f1932a,0xbc23);
  return iVar1 + 0xfe77f3c;
}



undefined4 inst_18_flags_var_8(void)

{
  crc32(0x160ac8c8,0xce26);
  return 0;
}



int inst_18_values_var_9(void)

{
  int iVar1;
  
  iVar1 = crc32(0x8f10e762,0x16a5);
  return iVar1 + -0x7fbc96de;
}



undefined4 inst_18_flags_var_9(void)

{
  crc32(0xd285eebd,0xc8b1);
  return 0;
}



int inst_19_values_var_0(void)

{
  int iVar1;
  
  iVar1 = crc32(0xae92486c,0x7ad52968);
  return iVar1 + -0x6971a1b5;
}



undefined4 inst_19_flags_var_0(void)

{
  crc32(0x40d0a5ac,0xdefd415e);
  return 0;
}



undefined4 inst_19_values_var_1(void)

{
  undefined4 uVar1;
  
  uVar1 = crc32(0x784bc3f,0x784bc3f);
  return uVar1;
}



undefined4 inst_19_flags_var_1(void)

{
  crc32(0x804396fe,0x9aef578);
  return 0;
}



int inst_19_values_var_2(void)

{
  int iVar1;
  
  iVar1 = crc32(0x6ff2ad4e,0x298109cd);
  return iVar1 + -0x285bee01;
}



undefined4 inst_19_flags_var_2(void)

{
  crc32(0xcb0ff725,0x54ac1f34);
  return 0;
}



int inst_19_values_var_3(void)

{
  int iVar1;
  
  iVar1 = crc32(0xf726871b,0x9f972362);
  return iVar1 + -0x96ba0e2;
}



undefined4 inst_19_flags_var_3(void)

{
  crc32(0x2c3e2472,0x5b0af8b2);
  return 0;
}



int inst_19_values_var_4(void)

{
  int iVar1;
  
  iVar1 = crc32(0xe583d949,0xee2fc47e);
  return iVar1 + 0x658d870d;
}



undefined4 inst_19_flags_var_4(void)

{
  crc32(0x38b81ab1,0x3161b047);
  return 0;
}



int inst_19_values_var_5(void)

{
  int iVar1;
  
  iVar1 = crc32(0x84b4bc0,0xbc31d2ec);
  return iVar1 + -0x4c5122eb;
}



undefined4 inst_19_flags_var_5(void)

{
  crc32(0xe27e524d,0xef54b62f);
  return 0;
}



int inst_19_values_var_6(void)

{
  int iVar1;
  
  iVar1 = crc32(0x1ad76c1d,0x551d8a82);
  return iVar1 + 0x7625487c;
}



undefined4 inst_19_flags_var_6(void)

{
  crc32(0x858d2ceb,0x7f6704be);
  return 0;
}



undefined4 inst_19_values_var_7(void)

{
  undefined4 uVar1;
  
  uVar1 = crc32(0x4aeaf243,0x4aeaf243);
  return uVar1;
}



undefined4 inst_19_flags_var_7(void)

{
  crc32(0x12f1dfb6,0x833e6314);
  return 0;
}



int inst_19_values_var_8(void)

{
  int iVar1;
  
  iVar1 = crc32(0x3fb0eb81,0x8b14bc15);
  return iVar1 + 0x4363b2c6;
}



undefined4 inst_19_flags_var_8(void)

{
  crc32(0xd4141be,0x91250253);
  return 0;
}



int inst_19_values_var_9(void)

{
  int iVar1;
  
  iVar1 = crc32(0xb443efa1,0xc6a5f631);
  return iVar1 + 0x2bbafcfc;
}



undefined4 inst_19_flags_var_9(void)

{
  crc32(0xa673e0e,0x3b15628b);
  return 0;
}



undefined4 inst_20_values_var_0(void)

{
  return 0;
}



undefined4 inst_20_flags_var_0(void)

{
  return 0;
}



undefined4 inst_20_values_var_1(void)

{
  return 0;
}



undefined4 inst_20_flags_var_1(void)

{
  return 0;
}



undefined4 inst_20_values_var_2(void)

{
  return 0;
}



undefined4 inst_20_flags_var_2(void)

{
  return 0;
}



undefined4 inst_20_values_var_3(void)

{
  return 0;
}



undefined4 inst_20_flags_var_3(void)

{
  return 0;
}



undefined4 inst_20_values_var_4(void)

{
  return 0;
}



undefined4 inst_20_flags_var_4(void)

{
  return 0;
}



undefined4 inst_20_values_var_5(void)

{
  return 0;
}



undefined4 inst_20_flags_var_5(void)

{
  return 0;
}



undefined4 inst_20_values_var_6(void)

{
  return 0;
}



undefined4 inst_20_flags_var_6(void)

{
  return 0;
}



undefined4 inst_20_values_var_7(void)

{
  return 0;
}



undefined4 inst_20_flags_var_7(void)

{
  return 0;
}



undefined4 inst_20_values_var_8(void)

{
  return 0;
}



undefined4 inst_20_flags_var_8(void)

{
  return 0;
}



undefined4 inst_20_values_var_9(void)

{
  return 0;
}



undefined4 inst_20_flags_var_9(void)

{
  return 0;
}



undefined4 inst_21_values_var_0(void)

{
  return 0;
}



undefined4 inst_21_flags_var_0(void)

{
  return 0;
}



undefined4 inst_21_values_var_1(void)

{
  return 0;
}



undefined4 inst_21_flags_var_1(void)

{
  return 0;
}



undefined4 inst_21_values_var_2(void)

{
  return 0;
}



undefined4 inst_21_flags_var_2(void)

{
  return 0;
}



undefined4 inst_21_values_var_3(void)

{
  return 0;
}



undefined4 inst_21_flags_var_3(void)

{
  return 0;
}



undefined4 inst_21_values_var_4(void)

{
  return 0;
}



undefined4 inst_21_flags_var_4(void)

{
  return 0;
}



undefined4 inst_21_values_var_5(void)

{
  return 0;
}



undefined4 inst_21_flags_var_5(void)

{
  return 0;
}



undefined4 inst_21_values_var_6(void)

{
  return 0;
}



undefined4 inst_21_flags_var_6(void)

{
  return 0;
}



undefined4 inst_21_values_var_7(void)

{
  return 0;
}



undefined4 inst_21_flags_var_7(void)

{
  return 0;
}



undefined4 inst_21_values_var_8(void)

{
  return 0;
}



undefined4 inst_21_flags_var_8(void)

{
  return 0;
}



undefined4 inst_21_values_var_9(void)

{
  return 0;
}



undefined4 inst_21_flags_var_9(void)

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


