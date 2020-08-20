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



undefined8 inst_0_values_var_0(void)

{
  short sVar1;
  undefined4 in_EDX;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0xbcb4;
  while ((uVar2 & 1) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000;
  }
  return CONCAT44(in_EDX,CONCAT22(0x6951,sVar1) + -0x69510002);
}



// WARNING: Removing unreachable block (ram,0x08049e3b)

longlong inst_0_flags_var_0(void)

{
  uint in_EDX;
  ushort uVar1;
  
  uVar1 = 0xcee6;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x8000;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_0_values_var_1(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 in_EDX;
  
  uVar1 = 0;
  uVar2 = 0x188e;
  while ((uVar2 & 1) == 0) {
    uVar1 = uVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000;
  }
  return CONCAT44(in_EDX,((uint)uVar1 | 0x13630000) + 0xec9cffff);
}



// WARNING: Removing unreachable block (ram,0x08049eee)

longlong inst_0_flags_var_1(void)

{
  uint in_EDX;
  ushort uVar1;
  
  uVar1 = 0x7fd1;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x8000;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_0_values_var_2(void)

{
  short sVar1;
  undefined4 in_EDX;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0x3bb2;
  while ((uVar2 & 1) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000;
  }
  return CONCAT44(in_EDX,CONCAT22(0x50b,sVar1) + -0x50b0001);
}



// WARNING: Removing unreachable block (ram,0x08049fa1)

longlong inst_0_flags_var_2(void)

{
  uint in_EDX;
  ushort uVar1;
  
  uVar1 = 0x10a6;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x8000;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_0_values_var_3(void)

{
  short sVar1;
  ushort uVar2;
  undefined4 in_EDX;
  
  sVar1 = 0;
  uVar2 = 0x324e;
  while ((uVar2 & 1) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000;
  }
  return CONCAT44(in_EDX,CONCAT22(0xd959,sVar1) + 0x26a6ffff);
}



// WARNING: Removing unreachable block (ram,0x0804a054)

longlong inst_0_flags_var_3(void)

{
  uint in_EDX;
  ushort uVar1;
  
  uVar1 = 0x97c2;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x8000;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_0_values_var_4(void)

{
  short sVar1;
  undefined4 in_EDX;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0x312b;
  while ((uVar2 & 1) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000;
  }
  return CONCAT44(in_EDX,CONCAT22(0xeca2,sVar1) + 0x135e0000);
}



// WARNING: Removing unreachable block (ram,0x0804a107)

longlong inst_0_flags_var_4(void)

{
  ushort uVar1;
  uint in_EDX;
  
  uVar1 = 0x8f4c;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x8000;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_0_values_var_5(void)

{
  short sVar1;
  undefined4 in_EDX;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0xc910;
  while ((uVar2 & 1) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000;
  }
  return CONCAT44(in_EDX,CONCAT22(0x3977,sVar1) + -0x39770004);
}



// WARNING: Removing unreachable block (ram,0x0804a1ba)

longlong inst_0_flags_var_5(void)

{
  uint in_EDX;
  ushort uVar1;
  
  uVar1 = 0x41c8;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x8000;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_0_values_var_6(void)

{
  short sVar1;
  undefined4 in_EDX;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0xcdfd;
  while ((uVar2 & 1) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000;
  }
  return CONCAT44(in_EDX,CONCAT22(0xfc0d,sVar1) + 0x3f30000);
}



// WARNING: Removing unreachable block (ram,0x0804a26d)

longlong inst_0_flags_var_6(void)

{
  ushort uVar1;
  uint in_EDX;
  
  uVar1 = 0x2945;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x8000;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_0_values_var_7(void)

{
  short sVar1;
  undefined4 in_EDX;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0xdff5;
  while ((uVar2 & 1) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000;
  }
  return CONCAT44(in_EDX,CONCAT22(0x5b01,sVar1) + -0x5b010000);
}



undefined8 inst_0_flags_var_7(void)

{
  short sVar1;
  undefined4 in_EDX;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0x2cd3;
  while ((uVar2 & 1) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000;
  }
  return CONCAT44(in_EDX,(uint)(sVar1 == 0));
}



undefined8 inst_0_values_var_8(void)

{
  short sVar1;
  ushort uVar2;
  undefined4 in_EDX;
  
  sVar1 = 0;
  uVar2 = 0x9839;
  while ((uVar2 & 1) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000;
  }
  return CONCAT44(in_EDX,CONCAT22(0xd4e5,sVar1) + 0x2b1b0000);
}



// WARNING: Removing unreachable block (ram,0x0804a3d3)

longlong inst_0_flags_var_8(void)

{
  ushort uVar1;
  uint in_EDX;
  
  uVar1 = 0x89eb;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x8000;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_0_values_var_9(void)

{
  short sVar1;
  ushort uVar2;
  undefined4 in_EDX;
  
  sVar1 = 0;
  uVar2 = 0x8f75;
  while ((uVar2 & 1) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000;
  }
  return CONCAT44(in_EDX,CONCAT22(0xbbd4,sVar1) + 0x442c0000);
}



// WARNING: Removing unreachable block (ram,0x0804a486)

longlong inst_0_flags_var_9(void)

{
  ushort uVar1;
  uint in_EDX;
  
  uVar1 = 0x7319;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x8000;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_1_values_var_0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  iVar1 = 0;
  uVar2 = 0x9aa58e1f;
  while ((uVar2 & 1) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x80000000;
  }
  return CONCAT44(in_EDX,iVar1);
}



// WARNING: Removing unreachable block (ram,0x0804a537)

longlong inst_1_flags_var_0(void)

{
  uint uVar1;
  uint in_EDX;
  
  uVar1 = 0xc7ffce27;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x80000000;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_1_values_var_1(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  iVar1 = 0;
  uVar2 = 0x7038aa17;
  while ((uVar2 & 1) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x80000000;
  }
  return CONCAT44(in_EDX,iVar1);
}



undefined8 inst_1_flags_var_1(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  iVar1 = 0;
  uVar2 = 0x69838772;
  while ((uVar2 & 1) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x80000000;
  }
  return CONCAT44(in_EDX,(uint)(iVar1 == 0));
}



undefined8 inst_1_values_var_2(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  iVar1 = 0;
  uVar2 = 0xebe57e52;
  while ((uVar2 & 1) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x80000000;
  }
  return CONCAT44(in_EDX,iVar1 + -1);
}



undefined8 inst_1_flags_var_2(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  iVar1 = 0;
  uVar2 = 0x6e568742;
  while ((uVar2 & 1) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x80000000;
  }
  return CONCAT44(in_EDX,(uint)(iVar1 == 0));
}



undefined8 inst_1_values_var_3(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  iVar1 = 0;
  uVar2 = 0x388bb41c;
  while ((uVar2 & 1) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x80000000;
  }
  return CONCAT44(in_EDX,iVar1 + -2);
}



// WARNING: Removing unreachable block (ram,0x0804a74a)

longlong inst_1_flags_var_3(void)

{
  uint uVar1;
  uint in_EDX;
  
  uVar1 = 0xd72268b9;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x80000000;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_1_values_var_4(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  iVar1 = 0;
  uVar2 = 0x7a85d1b2;
  while ((uVar2 & 1) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x80000000;
  }
  return CONCAT44(in_EDX,iVar1 + -1);
}



// WARNING: Removing unreachable block (ram,0x0804a7fb)

longlong inst_1_flags_var_4(void)

{
  uint uVar1;
  uint in_EDX;
  
  uVar1 = 0xd90f4ad7;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x80000000;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_1_values_var_5(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  iVar1 = 0;
  uVar2 = 0x69b3e316;
  while ((uVar2 & 1) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x80000000;
  }
  return CONCAT44(in_EDX,iVar1 + -1);
}



// WARNING: Removing unreachable block (ram,0x0804a8ac)

longlong inst_1_flags_var_5(void)

{
  uint uVar1;
  uint in_EDX;
  
  uVar1 = 0x9863cf1c;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x80000000;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_1_values_var_6(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  iVar1 = 0;
  uVar2 = 0xb98be0e7;
  while ((uVar2 & 1) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x80000000;
  }
  return CONCAT44(in_EDX,iVar1);
}



// WARNING: Removing unreachable block (ram,0x0804a95d)

longlong inst_1_flags_var_6(void)

{
  uint uVar1;
  uint in_EDX;
  
  uVar1 = 0x365793d7;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x80000000;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_1_values_var_7(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  iVar1 = 0;
  uVar2 = 0x6b6830c8;
  while ((uVar2 & 1) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x80000000;
  }
  return CONCAT44(in_EDX,iVar1 + -3);
}



// WARNING: Removing unreachable block (ram,0x0804aa0e)

longlong inst_1_flags_var_7(void)

{
  uint uVar1;
  uint in_EDX;
  
  uVar1 = 0x8f0a4f78;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x80000000;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_1_values_var_8(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  iVar1 = 0;
  uVar2 = 0xff889711;
  while ((uVar2 & 1) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x80000000;
  }
  return CONCAT44(in_EDX,iVar1);
}



// WARNING: Removing unreachable block (ram,0x0804aabf)

longlong inst_1_flags_var_8(void)

{
  uint uVar1;
  uint in_EDX;
  
  uVar1 = 0x67dc524b;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x80000000;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_1_values_var_9(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  iVar1 = 0;
  uVar2 = 0xd241fab6;
  while ((uVar2 & 1) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x80000000;
  }
  return CONCAT44(in_EDX,iVar1 + -1);
}



// WARNING: Removing unreachable block (ram,0x0804ab70)

longlong inst_1_flags_var_9(void)

{
  uint uVar1;
  uint in_EDX;
  
  uVar1 = 0xcbf6b649;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x80000000;
  }
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_2_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804ac23)
// WARNING: Removing unreachable block (ram,0x0804ac30)

longlong inst_2_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_2_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804acf3)
// WARNING: Removing unreachable block (ram,0x0804ace6)
// WARNING: Removing unreachable block (ram,0x0804ad05)

longlong inst_2_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_2_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804adb6)
// WARNING: Removing unreachable block (ram,0x0804ada9)
// WARNING: Removing unreachable block (ram,0x0804adc8)

longlong inst_2_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_2_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804ae79)
// WARNING: Removing unreachable block (ram,0x0804ae6c)
// WARNING: Removing unreachable block (ram,0x0804ae8b)

longlong inst_2_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_2_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804af3c)
// WARNING: Removing unreachable block (ram,0x0804af2f)
// WARNING: Removing unreachable block (ram,0x0804af4e)

longlong inst_2_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_2_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804afff)
// WARNING: Removing unreachable block (ram,0x0804aff2)
// WARNING: Removing unreachable block (ram,0x0804b011)

longlong inst_2_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_2_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804b0c2)
// WARNING: Removing unreachable block (ram,0x0804b0b5)
// WARNING: Removing unreachable block (ram,0x0804b0d4)

longlong inst_2_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_2_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804b185)
// WARNING: Removing unreachable block (ram,0x0804b178)
// WARNING: Removing unreachable block (ram,0x0804b197)

longlong inst_2_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_2_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804b248)
// WARNING: Removing unreachable block (ram,0x0804b23b)
// WARNING: Removing unreachable block (ram,0x0804b25a)

longlong inst_2_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_2_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804b2fe)
// WARNING: Removing unreachable block (ram,0x0804b30b)

longlong inst_2_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_3_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804b3ce)
// WARNING: Removing unreachable block (ram,0x0804b3e0)

longlong inst_3_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_3_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804b491)
// WARNING: Removing unreachable block (ram,0x0804b4a3)

longlong inst_3_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_3_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804b554)
// WARNING: Removing unreachable block (ram,0x0804b566)

longlong inst_3_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_3_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804b617)
// WARNING: Removing unreachable block (ram,0x0804b629)

longlong inst_3_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_3_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804b6da)
// WARNING: Removing unreachable block (ram,0x0804b6ec)

longlong inst_3_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_3_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804b79d)
// WARNING: Removing unreachable block (ram,0x0804b7af)

longlong inst_3_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_3_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804b860)
// WARNING: Removing unreachable block (ram,0x0804b872)

longlong inst_3_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_3_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804b923)
// WARNING: Removing unreachable block (ram,0x0804b935)

longlong inst_3_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_3_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804b9e6)
// WARNING: Removing unreachable block (ram,0x0804b9f8)

longlong inst_3_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_3_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804baa9)
// WARNING: Removing unreachable block (ram,0x0804babb)

longlong inst_3_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_4_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804bb6c)
// WARNING: Removing unreachable block (ram,0x0804bb5f)
// WARNING: Removing unreachable block (ram,0x0804bb7e)

longlong inst_4_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_4_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804bc2f)
// WARNING: Removing unreachable block (ram,0x0804bc22)
// WARNING: Removing unreachable block (ram,0x0804bc41)

longlong inst_4_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_4_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804bcf2)
// WARNING: Removing unreachable block (ram,0x0804bce5)
// WARNING: Removing unreachable block (ram,0x0804bd04)

longlong inst_4_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_4_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804bdb5)
// WARNING: Removing unreachable block (ram,0x0804bda8)
// WARNING: Removing unreachable block (ram,0x0804bdc7)

longlong inst_4_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_4_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804be78)
// WARNING: Removing unreachable block (ram,0x0804be6b)
// WARNING: Removing unreachable block (ram,0x0804be8a)

longlong inst_4_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_4_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804bf3b)
// WARNING: Removing unreachable block (ram,0x0804bf2e)
// WARNING: Removing unreachable block (ram,0x0804bf4d)

longlong inst_4_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_4_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804bffe)
// WARNING: Removing unreachable block (ram,0x0804bff1)
// WARNING: Removing unreachable block (ram,0x0804c010)

longlong inst_4_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_4_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804c0c1)
// WARNING: Removing unreachable block (ram,0x0804c0b4)
// WARNING: Removing unreachable block (ram,0x0804c0d3)

longlong inst_4_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_4_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804c184)
// WARNING: Removing unreachable block (ram,0x0804c177)
// WARNING: Removing unreachable block (ram,0x0804c196)

longlong inst_4_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_4_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804c247)
// WARNING: Removing unreachable block (ram,0x0804c23a)
// WARNING: Removing unreachable block (ram,0x0804c259)

longlong inst_4_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_5_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804c2fd)
// WARNING: Removing unreachable block (ram,0x0804c30a)

longlong inst_5_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_5_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804c3c0)
// WARNING: Removing unreachable block (ram,0x0804c3cd)

longlong inst_5_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_5_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804c490)
// WARNING: Removing unreachable block (ram,0x0804c483)
// WARNING: Removing unreachable block (ram,0x0804c4a2)

longlong inst_5_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_5_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804c546)
// WARNING: Removing unreachable block (ram,0x0804c553)

longlong inst_5_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_5_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804c616)
// WARNING: Removing unreachable block (ram,0x0804c609)
// WARNING: Removing unreachable block (ram,0x0804c628)

longlong inst_5_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_5_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804c6cc)
// WARNING: Removing unreachable block (ram,0x0804c6d9)

longlong inst_5_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_5_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804c79c)
// WARNING: Removing unreachable block (ram,0x0804c78f)
// WARNING: Removing unreachable block (ram,0x0804c7ae)

longlong inst_5_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_5_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804c852)
// WARNING: Removing unreachable block (ram,0x0804c85f)

longlong inst_5_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_5_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804c922)
// WARNING: Removing unreachable block (ram,0x0804c915)
// WARNING: Removing unreachable block (ram,0x0804c934)

longlong inst_5_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_5_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804c9e5)
// WARNING: Removing unreachable block (ram,0x0804c9d8)
// WARNING: Removing unreachable block (ram,0x0804c9f7)

longlong inst_5_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_6_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804ca9b)
// WARNING: Removing unreachable block (ram,0x0804caa8)

longlong inst_6_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_6_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804cb56)
// WARNING: Removing unreachable block (ram,0x0804cb63)

longlong inst_6_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_6_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804cc11)
// WARNING: Removing unreachable block (ram,0x0804cc1e)

longlong inst_6_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_6_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804cccc)
// WARNING: Removing unreachable block (ram,0x0804ccd9)

longlong inst_6_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_6_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804cd87)
// WARNING: Removing unreachable block (ram,0x0804cd94)

longlong inst_6_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_6_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804ce42)
// WARNING: Removing unreachable block (ram,0x0804ce4f)

longlong inst_6_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_6_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804cefd)
// WARNING: Removing unreachable block (ram,0x0804cf0a)

longlong inst_6_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_6_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804cfb8)
// WARNING: Removing unreachable block (ram,0x0804cfc5)

longlong inst_6_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_6_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804d073)
// WARNING: Removing unreachable block (ram,0x0804d080)

longlong inst_6_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_6_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804d12e)
// WARNING: Removing unreachable block (ram,0x0804d13b)

longlong inst_6_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_7_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804d1f6)
// WARNING: Removing unreachable block (ram,0x0804d1e9)
// WARNING: Removing unreachable block (ram,0x0804d208)

longlong inst_7_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_7_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804d2b9)

longlong inst_7_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_7_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804d37c)

longlong inst_7_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_7_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804d43f)

longlong inst_7_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_7_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804d502)

longlong inst_7_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_7_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804d5c5)

longlong inst_7_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_7_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804d688)
// WARNING: Removing unreachable block (ram,0x0804d67b)
// WARNING: Removing unreachable block (ram,0x0804d69a)

longlong inst_7_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_7_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804d74b)

longlong inst_7_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_7_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804d80e)
// WARNING: Removing unreachable block (ram,0x0804d801)
// WARNING: Removing unreachable block (ram,0x0804d820)

longlong inst_7_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_7_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804d8d1)

longlong inst_7_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_8_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_8_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_8_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_8_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_8_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_8_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_8_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_8_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_8_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_8_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_8_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_8_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_8_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_8_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_8_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_8_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_8_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_8_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_8_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_8_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_9_values_var_0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_EDX;
  
  uVar1 = 0x4202d7f4;
  uVar2 = 1;
  uVar3 = 0;
  do {
    if ((uVar2 & 0x93119713) != 0) {
      uVar3 = uVar3 | (uVar2 & 0x93119713) * (uVar1 & 1);
      uVar1 = uVar1 >> 1;
    }
    uVar2 = uVar2 << 1;
  } while (uVar2 != 0);
  return CONCAT44(in_EDX,uVar3 + 0xeeee69f0);
}



longlong inst_9_flags_var_0(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 1;
  do {
    iVar1 = iVar1 << 1;
  } while (iVar1 != 0);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_9_values_var_1(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_EDX;
  
  uVar1 = 0x81bf4c35;
  uVar2 = 1;
  uVar3 = 0;
  do {
    if ((uVar2 & 0x90c96721) != 0) {
      uVar3 = uVar3 | (uVar2 & 0x90c96721) * (uVar1 & 1);
      uVar1 = uVar1 >> 1;
    }
    uVar2 = uVar2 << 1;
  } while (uVar2 != 0);
  return CONCAT44(in_EDX,uVar3 + 0xef7fdaff);
}



longlong inst_9_flags_var_1(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 1;
  do {
    iVar1 = iVar1 << 1;
  } while (iVar1 != 0);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_9_values_var_2(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_EDX;
  
  uVar3 = 0x107bd880;
  uVar1 = 1;
  uVar2 = 0;
  do {
    if ((uVar1 & 0xe7c63827) != 0) {
      uVar2 = uVar2 | (uVar1 & 0xe7c63827) * (uVar3 & 1);
      uVar3 = uVar3 >> 1;
    }
    uVar1 = uVar1 << 1;
  } while (uVar1 != 0);
  return CONCAT44(in_EDX,uVar2 + 0x1cfe0000);
}



longlong inst_9_flags_var_2(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 1;
  do {
    iVar1 = iVar1 << 1;
  } while (iVar1 != 0);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_9_values_var_3(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_EDX;
  
  uVar1 = 0x9e93fd34;
  uVar2 = 1;
  uVar3 = 0;
  do {
    if ((uVar2 & 0x9fe09748) != 0) {
      uVar3 = uVar3 | (uVar2 & 0x9fe09748) * (uVar1 & 1);
      uVar1 = uVar1 >> 1;
    }
    uVar2 = uVar2 << 1;
  } while (uVar2 != 0);
  return CONCAT44(in_EDX,uVar3 + 0x60bfeb00);
}



longlong inst_9_flags_var_3(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 1;
  do {
    iVar1 = iVar1 << 1;
  } while (iVar1 != 0);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_9_values_var_4(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_EDX;
  
  uVar1 = 0xd362eff2;
  uVar2 = 1;
  uVar3 = 0;
  do {
    if ((uVar2 & 0x1962da25) != 0) {
      uVar3 = uVar3 | (uVar2 & 0x1962da25) * (uVar1 & 1);
      uVar1 = uVar1 >> 1;
    }
    uVar2 = uVar2 << 1;
  } while (uVar2 != 0);
  return CONCAT44(in_EDX,uVar3 + 0xee9d27fc);
}



longlong inst_9_flags_var_4(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 1;
  do {
    iVar1 = iVar1 << 1;
  } while (iVar1 != 0);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_9_values_var_5(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_EDX;
  
  uVar1 = 0x479d4642;
  uVar2 = 1;
  uVar3 = 0;
  do {
    if ((uVar2 & 0x479d4642) != 0) {
      uVar3 = uVar3 | (uVar2 & 0x479d4642) * (uVar1 & 1);
      uVar1 = uVar1 >> 1;
    }
    uVar2 = uVar2 << 1;
  } while (uVar2 != 0);
  return CONCAT44(in_EDX,uVar3 + 0xfe7bffc0);
}



longlong inst_9_flags_var_5(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 1;
  do {
    iVar1 = iVar1 << 1;
  } while (iVar1 != 0);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_9_values_var_6(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_EDX;
  
  uVar1 = 0x7fc3ecc3;
  uVar2 = 1;
  uVar3 = 0;
  do {
    if ((uVar2 & 0x711b5916) != 0) {
      uVar3 = uVar3 | (uVar2 & 0x711b5916) * (uVar1 & 1);
      uVar1 = uVar1 >> 1;
    }
    uVar2 = uVar2 << 1;
  } while (uVar2 != 0);
  return CONCAT44(in_EDX,uVar3 + 0x9eeebffa);
}



longlong inst_9_flags_var_6(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 1;
  do {
    iVar1 = iVar1 << 1;
  } while (iVar1 != 0);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_9_values_var_7(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_EDX;
  
  uVar1 = 0x32c551e2;
  uVar2 = 1;
  uVar3 = 0;
  do {
    if ((uVar2 & 0x36fa694e) != 0) {
      uVar3 = uVar3 | (uVar2 & 0x36fa694e) * (uVar1 & 1);
      uVar1 = uVar1 >> 1;
    }
    uVar2 = uVar2 << 1;
  } while (uVar2 != 0);
  return CONCAT44(in_EDX,uVar3 + 0xedbd97fc);
}



longlong inst_9_flags_var_7(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 1;
  do {
    iVar1 = iVar1 << 1;
  } while (iVar1 != 0);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_9_values_var_8(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_EDX;
  
  uVar1 = 0x521646a9;
  uVar2 = 1;
  uVar3 = 0;
  do {
    if ((uVar2 & 0x5142d401) != 0) {
      uVar3 = uVar3 | (uVar2 & 0x5142d401) * (uVar1 & 1);
      uVar1 = uVar1 >> 1;
    }
    uVar2 = uVar2 << 1;
  } while (uVar2 != 0);
  return CONCAT44(in_EDX,uVar3 + 0xbefdbfff);
}



longlong inst_9_flags_var_8(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 1;
  do {
    iVar1 = iVar1 << 1;
  } while (iVar1 != 0);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_9_values_var_9(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_EDX;
  
  uVar3 = 0x2018ea76;
  uVar1 = 1;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x6e1afeab) != 0) {
      uVar2 = uVar2 | (uVar1 & 0x6e1afeab) * (uVar3 & 1);
      uVar3 = uVar3 >> 1;
    }
    uVar1 = uVar1 << 1;
  } while (uVar1 != 0);
  return CONCAT44(in_EDX,uVar2 + 0xbde75976);
}



longlong inst_9_flags_var_9(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 1;
  do {
    iVar1 = iVar1 << 1;
  } while (iVar1 != 0);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_10_values_var_0(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  uVar1 = 0x80000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0xe885a562) != 0) {
      uVar2 = uVar2 << 1 | (uint)((uVar1 & 0xc001a142) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return CONCAT44(in_EDX,uVar2 - 0x30ed);
}



longlong inst_10_flags_var_0(void)

{
  uint uVar1;
  uint in_EDX;
  
  uVar1 = 0x80000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_10_values_var_1(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  uVar1 = 0x80000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x607f3869) != 0) {
      uVar2 = uVar2 << 1 | (uint)((uVar1 & 0x201b0001) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return CONCAT44(in_EDX,uVar2 - 0x4d81);
}



longlong inst_10_flags_var_1(void)

{
  uint uVar1;
  uint in_EDX;
  
  uVar1 = 0x80000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_10_values_var_2(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  uVar1 = 0x80000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x1d7d614e) != 0) {
      uVar2 = uVar2 << 1 | (uint)((uVar1 & 0x1451010e) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return CONCAT44(in_EDX,uVar2 - 0x15497);
}



longlong inst_10_flags_var_2(void)

{
  uint uVar1;
  uint in_EDX;
  
  uVar1 = 0x80000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_10_values_var_3(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  uVar1 = 0x80000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x6d16cf2c) != 0) {
      uVar2 = uVar2 << 1 | (uint)((uVar1 & 0x41008524) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return CONCAT44(in_EDX,uVar2 - 0x1112d);
}



longlong inst_10_flags_var_3(void)

{
  uint uVar1;
  uint in_EDX;
  
  uVar1 = 0x80000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_10_values_var_4(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  uVar1 = 0x80000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0xec01e98c) != 0) {
      uVar2 = uVar2 << 1 | (uint)((uVar1 & 0x8001c108) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return CONCAT44(in_EDX,uVar2 - 0x21ca);
}



longlong inst_10_flags_var_4(void)

{
  uint uVar1;
  uint in_EDX;
  
  uVar1 = 0x80000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_10_values_var_5(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  uVar1 = 0x80000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x6e7a36d3) != 0) {
      uVar2 = uVar2 << 1 | (uint)((uVar1 & 0x281212c2) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return CONCAT44(in_EDX,uVar2 - 0x30aba);
}



longlong inst_10_flags_var_5(void)

{
  uint uVar1;
  uint in_EDX;
  
  uVar1 = 0x80000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_10_values_var_6(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  uVar1 = 0x80000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x26cbbcae) != 0) {
      uVar2 = uVar2 << 1 | (uint)((uVar1 & 0x4b1882) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return CONCAT44(in_EDX,uVar2 - 0x3cd1);
}



longlong inst_10_flags_var_6(void)

{
  uint uVar1;
  uint in_EDX;
  
  uVar1 = 0x80000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_10_values_var_7(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  uVar1 = 0x80000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x30d84f21) != 0) {
      uVar2 = uVar2 << 1 | (uint)((uVar1 & 0x30584220) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return CONCAT44(in_EDX,uVar2 - 0x1bca);
}



longlong inst_10_flags_var_7(void)

{
  uint uVar1;
  uint in_EDX;
  
  uVar1 = 0x80000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_10_values_var_8(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  uVar1 = 0x80000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0xa63d178d) != 0) {
      uVar2 = uVar2 << 1 | (uint)((uVar1 & 0x26310001) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return CONCAT44(in_EDX,uVar2 - 0xf901);
}



longlong inst_10_flags_var_8(void)

{
  uint uVar1;
  uint in_EDX;
  
  uVar1 = 0x80000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_10_values_var_9(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  uVar1 = 0x80000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x4ab52866) != 0) {
      uVar2 = uVar2 << 1 | (uint)((uVar1 & 0x4ab52866) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return CONCAT44(in_EDX,uVar2 - 0x3fff);
}



longlong inst_10_flags_var_9(void)

{
  uint uVar1;
  uint in_EDX;
  
  uVar1 = 0x80000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_11_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_11_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_11_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_11_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_11_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_11_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_11_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_11_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_11_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_11_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_11_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_11_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_11_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_11_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_11_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_11_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_11_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_11_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_11_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_11_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_12_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_12_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_12_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_12_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_12_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_12_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_12_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_12_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_12_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_12_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_12_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_12_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_12_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_12_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_12_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_12_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_12_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_12_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_12_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_12_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_13_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_13_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_13_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_13_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_13_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_13_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_13_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_13_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_13_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_13_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_13_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_13_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_13_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_13_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_13_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_13_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_13_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_13_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_13_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_13_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_14_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_14_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_14_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_14_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_14_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_14_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_14_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_14_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_14_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_14_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_14_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_14_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_14_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_14_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_14_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_14_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_14_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_14_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_14_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_14_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_15_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_15_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_15_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08050915)

longlong inst_15_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_15_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_15_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_15_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08050a7b)

longlong inst_15_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_15_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08050b2e)

longlong inst_15_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_15_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08050be1)

longlong inst_15_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_15_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08050c94)

longlong inst_15_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_15_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_15_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_15_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08050dfa)

longlong inst_15_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_15_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08050ead)

longlong inst_15_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_16_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08050f5b)

longlong inst_16_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_16_values_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805100e)

longlong inst_16_flags_var_1(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_16_values_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080510c1)

longlong inst_16_flags_var_2(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_16_values_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_16_flags_var_3(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_16_values_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08051227)

longlong inst_16_flags_var_4(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_16_values_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_16_flags_var_5(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_16_values_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_16_flags_var_6(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_16_values_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_16_flags_var_7(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_16_values_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_16_flags_var_8(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_16_values_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_16_flags_var_9(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_17_values_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  
  iVar1 = crc32(0x15493fd0,0x3d);
  return CONCAT44(in_EDX,iVar1 + -0x5c0dadf6);
}



longlong inst_17_flags_var_0(void)

{
  uint in_EDX;
  
  crc32(0x38727a92,0x92);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_17_values_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = crc32(0x318e972,0x2c);
  return CONCAT44(in_EDX,iVar1 + 0x2a182e3);
}



longlong inst_17_flags_var_1(void)

{
  uint in_EDX;
  
  crc32(0x1f771892,0x2a);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_17_values_var_2(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = crc32(0x7ccaab0c,0xab);
  return CONCAT44(in_EDX,iVar1 + -0x76fd1be6);
}



longlong inst_17_flags_var_2(void)

{
  uint in_EDX;
  
  crc32(0x56c4304e,0x4e);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_17_values_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  
  iVar1 = crc32(0x41e965e6,0x51);
  return CONCAT44(in_EDX,iVar1 + -0x669eff47);
}



longlong inst_17_flags_var_3(void)

{
  uint in_EDX;
  
  crc32(0x58068a4b,0x43);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_17_values_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  
  iVar1 = crc32(0xe33a3ad9,0x86);
  return CONCAT44(in_EDX,iVar1 + -0xfd5dccd);
}



longlong inst_17_flags_var_4(void)

{
  uint in_EDX;
  
  crc32(0x4dc0f06f,0x56);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_17_values_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  
  iVar1 = crc32(0xdea9e1ad,0x3c);
  return CONCAT44(in_EDX,iVar1 + -0x601dd6f5);
}



longlong inst_17_flags_var_5(void)

{
  uint in_EDX;
  
  crc32(0xb2841af6,0xf2);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_17_values_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  
  iVar1 = crc32(0xd68361fc,0x61);
  return CONCAT44(in_EDX,iVar1 + -0x2d5633a5);
}



longlong inst_17_flags_var_6(void)

{
  uint in_EDX;
  
  crc32(0xe0321f4b,0xae);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_17_values_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = crc32(0xc2d0e14f,0x2f);
  return CONCAT44(in_EDX,iVar1 + -0x61044383);
}



longlong inst_17_flags_var_7(void)

{
  uint in_EDX;
  
  crc32(0x798f3f09,0xe7);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_17_values_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  
  iVar1 = crc32(0x2a573895,0xbd);
  return CONCAT44(in_EDX,iVar1 + 0x55b17ed7);
}



longlong inst_17_flags_var_8(void)

{
  uint in_EDX;
  
  crc32(0x2bf4272,0x61);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_17_values_var_9(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = crc32(0xa3665a46,0xbf);
  return CONCAT44(in_EDX,iVar1 + 0x74802d1d);
}



longlong inst_17_flags_var_9(void)

{
  uint in_EDX;
  
  crc32(0x5bfe2b7b,0x45);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_18_values_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = crc32(0x30a03f23,0x29c9);
  return CONCAT44(in_EDX,iVar1 + 0x80ec372);
}



longlong inst_18_flags_var_0(void)

{
  uint in_EDX;
  
  crc32(0x97496901,0xb927);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_18_values_var_1(void)

{
  undefined4 in_EDX;
  int iVar1;
  
  iVar1 = crc32(0x5d3e8413,0xe90b);
  return CONCAT44(in_EDX,iVar1 + -0x7c3fb0b6);
}



longlong inst_18_flags_var_1(void)

{
  uint in_EDX;
  
  crc32(0x26552316,0xb91a);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_18_values_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  
  iVar1 = crc32(0x81ff6d0a,0xc00c);
  return CONCAT44(in_EDX,iVar1 + -0x74ac29b8);
}



longlong inst_18_flags_var_2(void)

{
  uint in_EDX;
  
  crc32(0x3cb89bf0,0xf726);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_18_values_var_3(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = crc32(0xb655fd58,0x878);
  return CONCAT44(in_EDX,iVar1 + 0x46ebd1c2);
}



longlong inst_18_flags_var_3(void)

{
  uint in_EDX;
  
  crc32(0x556d922b,0x922b);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_18_values_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  
  iVar1 = crc32(0x3db748cf,0x37d);
  return CONCAT44(in_EDX,iVar1 + -0x443a53a4);
}



longlong inst_18_flags_var_4(void)

{
  uint in_EDX;
  
  crc32(0x97bd3436,0x9f82);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_18_values_var_5(void)

{
  undefined4 in_EDX;
  int iVar1;
  
  iVar1 = crc32(0xca201f5d,0xbdee);
  return CONCAT44(in_EDX,iVar1 + 0x33e5b06e);
}



longlong inst_18_flags_var_5(void)

{
  uint in_EDX;
  
  crc32(0x84c6bf95,0x7141);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_18_values_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  
  iVar1 = crc32(0x42d5ebfe,0xa401);
  return CONCAT44(in_EDX,iVar1 + 0x4374b832);
}



longlong inst_18_flags_var_6(void)

{
  uint in_EDX;
  
  crc32(0x2bdb4428,0x1143);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_18_values_var_7(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = crc32(0x31f9c1ea,0xbdba);
  return CONCAT44(in_EDX,iVar1 + 0x3f6625f);
}



longlong inst_18_flags_var_7(void)

{
  uint in_EDX;
  
  crc32(0xe12d2dda,0x6db1);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_18_values_var_8(void)

{
  undefined4 in_EDX;
  int iVar1;
  
  iVar1 = crc32(0x88ecca69,0xbe3d);
  return CONCAT44(in_EDX,iVar1 + -0x385a1da7);
}



longlong inst_18_flags_var_8(void)

{
  uint in_EDX;
  
  crc32(0xf0fc5d99,0x3644);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_18_values_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  
  iVar1 = crc32(0x1b6f60f8,0x60f8);
  return CONCAT44(in_EDX,iVar1 + -0x1b6f);
}



longlong inst_18_flags_var_9(void)

{
  uint in_EDX;
  
  crc32(0x58c31c81,0x7d3b);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_19_values_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = crc32(0xd457871,0x62cd4ac8);
  return CONCAT44(in_EDX,iVar1 + 0x3f9418bd);
}



longlong inst_19_flags_var_0(void)

{
  uint in_EDX;
  
  crc32(0xd14a1f62,0x532ff573);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_19_values_var_1(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = crc32(0x32f9bca2,0x4d549e5f);
  return CONCAT44(in_EDX,iVar1 + -0x52b0291b);
}



longlong inst_19_flags_var_1(void)

{
  uint in_EDX;
  
  crc32(0xf136fe4c,0xfa0b2c74);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_19_values_var_2(void)

{
  undefined4 in_EDX;
  int iVar1;
  
  iVar1 = crc32(0xfc1f28fd,0x7a31c1cc);
  return CONCAT44(in_EDX,iVar1 + 0x3eafddd);
}



longlong inst_19_flags_var_2(void)

{
  uint in_EDX;
  
  crc32(0xed01c85b,0x8f54e612);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_19_values_var_3(void)

{
  undefined4 in_EDX;
  int iVar1;
  
  iVar1 = crc32(0xbef4ca2,0xb6181639);
  return CONCAT44(in_EDX,iVar1 + 0x236e2599);
}



longlong inst_19_flags_var_3(void)

{
  uint in_EDX;
  
  crc32(0xd9307f4a,0xd4fc6f68);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_19_values_var_4(void)

{
  undefined4 in_EDX;
  int iVar1;
  
  iVar1 = crc32(0xaf84530,0x544059d0);
  return CONCAT44(in_EDX,iVar1 + -0x23ca2b30);
}



longlong inst_19_flags_var_4(void)

{
  uint in_EDX;
  
  crc32(0x866e6c47,0x866e6c47);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_19_values_var_5(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = crc32(0x5ff74d89,0x22732adc);
  return CONCAT44(in_EDX,iVar1 + 0x32721632);
}



longlong inst_19_flags_var_5(void)

{
  uint in_EDX;
  
  crc32(0xdf485306,0x25caf1a9);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_19_values_var_6(void)

{
  undefined4 in_EDX;
  int iVar1;
  
  iVar1 = crc32(0x8a5c75da,0x16238998);
  return CONCAT44(in_EDX,iVar1 + 0x17de8600);
}



longlong inst_19_flags_var_6(void)

{
  uint in_EDX;
  
  crc32(0xe0e8a525,0x6b179bea);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_19_values_var_7(void)

{
  undefined4 in_EDX;
  int iVar1;
  
  iVar1 = crc32(0xbd323853,0x37aab1a5);
  return CONCAT44(in_EDX,iVar1 + 0x5accde9c);
}



longlong inst_19_flags_var_7(void)

{
  uint in_EDX;
  
  crc32(0x6d71aa00,0xd8ddc5e6);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_19_values_var_8(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = crc32(0x8066e602,0xe37ab502);
  return CONCAT44(in_EDX,iVar1 + 0x3cdbf1ad);
}



longlong inst_19_flags_var_8(void)

{
  uint in_EDX;
  
  crc32(0xa2972a0c,0x33bd2371);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_19_values_var_9(void)

{
  undefined4 in_EDX;
  int iVar1;
  
  iVar1 = crc32(0xd69a3dad,0xb8a54bda);
  return CONCAT44(in_EDX,iVar1 + -0x615c86f0);
}



longlong inst_19_flags_var_9(void)

{
  uint in_EDX;
  
  crc32(0xff31f176,0x429f71b4);
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_20_values_var_0(void)

{
  short sVar1;
  ushort uVar2;
  undefined4 in_EDX;
  
  sVar1 = 0;
  uVar2 = 0x3ea4;
  while ((uVar2 & 0x8000) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT44(in_EDX,CONCAT22(0xc84f,sVar1) + 0x37b0fffe);
}



longlong inst_20_flags_var_0(void)

{
  uint in_EDX;
  ushort uVar1;
  
  uVar1 = 0xc17f;
  while ((uVar1 & 0x8000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_20_values_var_1(void)

{
  short sVar1;
  undefined4 in_EDX;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0xb541;
  while ((uVar2 & 0x8000) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT44(in_EDX,CONCAT22(0x9f10,sVar1) + 0x60f00000);
}



longlong inst_20_flags_var_1(void)

{
  ushort uVar1;
  uint in_EDX;
  
  uVar1 = 0x9a5d;
  while ((uVar1 & 0x8000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_20_values_var_2(void)

{
  short sVar1;
  undefined4 in_EDX;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0xc9bb;
  while ((uVar2 & 0x8000) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT44(in_EDX,CONCAT22(0xd5d5,sVar1) + 0x2a2b0000);
}



longlong inst_20_flags_var_2(void)

{
  ushort uVar1;
  uint in_EDX;
  
  uVar1 = 0xb9ff;
  while ((uVar1 & 0x8000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_20_values_var_3(void)

{
  short sVar1;
  ushort uVar2;
  undefined4 in_EDX;
  
  sVar1 = 0;
  uVar2 = 0xd993;
  while ((uVar2 & 0x8000) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT44(in_EDX,CONCAT22(0x51b7,sVar1) + -0x51b70000);
}



longlong inst_20_flags_var_3(void)

{
  ushort uVar1;
  uint in_EDX;
  
  uVar1 = 0x41c3;
  while ((uVar1 & 0x8000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_20_values_var_4(void)

{
  short sVar1;
  ushort uVar2;
  undefined4 in_EDX;
  
  sVar1 = 0;
  uVar2 = 0x2792;
  while ((uVar2 & 0x8000) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT44(in_EDX,CONCAT22(0x9f04,sVar1) + 0x60fbfffe);
}



longlong inst_20_flags_var_4(void)

{
  uint in_EDX;
  ushort uVar1;
  
  uVar1 = 0x7ab2;
  while ((uVar1 & 0x8000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_20_values_var_5(void)

{
  short sVar1;
  undefined4 in_EDX;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0xae32;
  while ((uVar2 & 0x8000) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT44(in_EDX,CONCAT22(0xe66f,sVar1) + 0x19910000);
}



longlong inst_20_flags_var_5(void)

{
  uint in_EDX;
  ushort uVar1;
  
  uVar1 = 0x9a4d;
  while ((uVar1 & 0x8000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_20_values_var_6(void)

{
  short sVar1;
  ushort uVar2;
  undefined4 in_EDX;
  
  sVar1 = 0;
  uVar2 = 0x927c;
  while ((uVar2 & 0x8000) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT44(in_EDX,CONCAT22(0x2224,sVar1) + -0x22240000);
}



longlong inst_20_flags_var_6(void)

{
  uint in_EDX;
  ushort uVar1;
  
  uVar1 = 0x9ea0;
  while ((uVar1 & 0x8000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_20_values_var_7(void)

{
  short sVar1;
  undefined4 in_EDX;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0x7465;
  while ((uVar2 & 0x8000) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT44(in_EDX,CONCAT22(0x6f52,sVar1) + -0x6f520001);
}



longlong inst_20_flags_var_7(void)

{
  ushort uVar1;
  uint in_EDX;
  
  uVar1 = 0x8c83;
  while ((uVar1 & 0x8000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_20_values_var_8(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 in_EDX;
  
  uVar1 = 0;
  uVar2 = 0x70bb;
  while ((uVar2 & 0x8000) == 0) {
    uVar1 = uVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT44(in_EDX,((uint)uVar1 | 0x39e30000) + 0xc61cffff);
}



longlong inst_20_flags_var_8(void)

{
  uint in_EDX;
  ushort uVar1;
  
  uVar1 = 0x20fe;
  while ((uVar1 & 0x8000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_20_values_var_9(void)

{
  short sVar1;
  undefined4 in_EDX;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0xe92b;
  while ((uVar2 & 0x8000) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT44(in_EDX,CONCAT22(0x181b,sVar1) + -0x181b0000);
}



longlong inst_20_flags_var_9(void)

{
  ushort uVar1;
  uint in_EDX;
  
  uVar1 = 0x30b6;
  while ((uVar1 & 0x8000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_21_values_var_0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  iVar1 = 0;
  uVar2 = 0x101b6de0;
  while ((uVar2 & 0x80000000) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT44(in_EDX,iVar1 + -3);
}



longlong inst_21_flags_var_0(void)

{
  uint uVar1;
  uint in_EDX;
  
  uVar1 = 0x4852b42;
  while ((uVar1 & 0x80000000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_21_values_var_1(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  iVar1 = 0;
  uVar2 = 0x8896e192;
  while ((uVar2 & 0x80000000) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT44(in_EDX,iVar1);
}



longlong inst_21_flags_var_1(void)

{
  uint uVar1;
  uint in_EDX;
  
  uVar1 = 0x4886ce88;
  while ((uVar1 & 0x80000000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_21_values_var_2(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  iVar1 = 0;
  uVar2 = 0x300d3cde;
  while ((uVar2 & 0x80000000) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT44(in_EDX,iVar1 + -2);
}



longlong inst_21_flags_var_2(void)

{
  uint uVar1;
  uint in_EDX;
  
  uVar1 = 0x6d97371d;
  while ((uVar1 & 0x80000000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_21_values_var_3(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  iVar1 = 0;
  uVar2 = 0x2ecca1d2;
  while ((uVar2 & 0x80000000) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT44(in_EDX,iVar1 + -2);
}



longlong inst_21_flags_var_3(void)

{
  uint uVar1;
  uint in_EDX;
  
  uVar1 = 0xd0700dad;
  while ((uVar1 & 0x80000000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_21_values_var_4(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  iVar1 = 0;
  uVar2 = 0x6bcfe309;
  while ((uVar2 & 0x80000000) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT44(in_EDX,iVar1 + -1);
}



longlong inst_21_flags_var_4(void)

{
  uint uVar1;
  uint in_EDX;
  
  uVar1 = 0xa6eab382;
  while ((uVar1 & 0x80000000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_21_values_var_5(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  iVar1 = 0;
  uVar2 = 0x79e8118b;
  while ((uVar2 & 0x80000000) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT44(in_EDX,iVar1 + -1);
}



longlong inst_21_flags_var_5(void)

{
  uint uVar1;
  uint in_EDX;
  
  uVar1 = 0x9144c3b5;
  while ((uVar1 & 0x80000000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_21_values_var_6(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  iVar1 = 0;
  uVar2 = 0x29a03836;
  while ((uVar2 & 0x80000000) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT44(in_EDX,iVar1 + -2);
}



longlong inst_21_flags_var_6(void)

{
  uint uVar1;
  uint in_EDX;
  
  uVar1 = 0xc744ed32;
  while ((uVar1 & 0x80000000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_21_values_var_7(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  iVar1 = 0;
  uVar2 = 0xdee92a00;
  while ((uVar2 & 0x80000000) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT44(in_EDX,iVar1);
}



longlong inst_21_flags_var_7(void)

{
  uint uVar1;
  uint in_EDX;
  
  uVar1 = 0x19ad914e;
  while ((uVar1 & 0x80000000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_21_values_var_8(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  iVar1 = 0;
  uVar2 = 0x40969ba4;
  while ((uVar2 & 0x80000000) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT44(in_EDX,iVar1 + -1);
}



longlong inst_21_flags_var_8(void)

{
  uint uVar1;
  uint in_EDX;
  
  uVar1 = 0x83edc0c0;
  while ((uVar1 & 0x80000000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_21_values_var_9(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_EDX;
  
  iVar1 = 0;
  uVar2 = 0x4ab6b09b;
  while ((uVar2 & 0x80000000) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT44(in_EDX,iVar1 + -1);
}



longlong inst_21_flags_var_9(void)

{
  uint uVar1;
  uint in_EDX;
  
  uVar1 = 0x7935f9f8;
  while ((uVar1 & 0x80000000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
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


