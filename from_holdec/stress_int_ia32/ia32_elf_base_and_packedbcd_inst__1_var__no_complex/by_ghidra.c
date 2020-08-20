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
  int iVar441;
  int iVar442;
  int iVar443;
  int iVar444;
  int iVar445;
  int iVar446;
  int iVar447;
  int iVar448;
  int iVar449;
  int iVar450;
  int iVar451;
  int iVar452;
  int iVar453;
  int iVar454;
  int iVar455;
  int iVar456;
  int iVar457;
  int iVar458;
  int iVar459;
  int iVar460;
  int iVar461;
  int iVar462;
  int iVar463;
  int iVar464;
  int iVar465;
  int iVar466;
  int iVar467;
  int iVar468;
  int iVar469;
  int iVar470;
  int iVar471;
  int iVar472;
  int iVar473;
  int iVar474;
  int iVar475;
  int iVar476;
  int iVar477;
  int iVar478;
  int iVar479;
  int iVar480;
  int iVar481;
  int iVar482;
  int iVar483;
  int iVar484;
  int iVar485;
  int iVar486;
  int iVar487;
  int iVar488;
  int iVar489;
  int iVar490;
  int iVar491;
  int iVar492;
  int iVar493;
  int iVar494;
  int iVar495;
  int iVar496;
  int iVar497;
  int iVar498;
  int iVar499;
  int iVar500;
  int iVar501;
  int iVar502;
  int iVar503;
  int iVar504;
  int iVar505;
  int iVar506;
  int iVar507;
  int iVar508;
  int iVar509;
  int iVar510;
  int iVar511;
  int iVar512;
  int iVar513;
  int iVar514;
  int iVar515;
  int iVar516;
  int iVar517;
  int iVar518;
  int iVar519;
  int iVar520;
  int iVar521;
  int iVar522;
  int iVar523;
  int iVar524;
  int iVar525;
  int iVar526;
  int iVar527;
  int iVar528;
  int iVar529;
  int iVar530;
  int iVar531;
  int iVar532;
  int iVar533;
  int iVar534;
  int iVar535;
  int iVar536;
  int iVar537;
  int iVar538;
  int iVar539;
  int iVar540;
  int iVar541;
  int iVar542;
  int iVar543;
  int iVar544;
  int iVar545;
  int iVar546;
  int iVar547;
  int iVar548;
  int iVar549;
  int iVar550;
  int iVar551;
  int iVar552;
  int iVar553;
  int iVar554;
  int iVar555;
  int iVar556;
  int iVar557;
  int iVar558;
  int iVar559;
  int iVar560;
  int iVar561;
  int iVar562;
  int iVar563;
  int iVar564;
  int iVar565;
  int iVar566;
  int iVar567;
  int iVar568;
  int iVar569;
  int iVar570;
  int iVar571;
  int iVar572;
  int iVar573;
  int iVar574;
  int iVar575;
  int iVar576;
  int iVar577;
  int iVar578;
  int iVar579;
  int iVar580;
  int iVar581;
  int iVar582;
  int iVar583;
  int iVar584;
  int iVar585;
  int iVar586;
  int iVar587;
  int iVar588;
  int iVar589;
  int iVar590;
  int iVar591;
  int iVar592;
  
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
  iVar45 = inst_22_values_var_0();
  iVar46 = inst_22_flags_var_0();
  iVar47 = inst_23_values_var_0();
  iVar48 = inst_23_flags_var_0();
  iVar49 = inst_24_values_var_0();
  iVar50 = inst_24_flags_var_0();
  iVar51 = inst_25_values_var_0();
  iVar52 = inst_25_flags_var_0();
  iVar53 = inst_26_values_var_0();
  iVar54 = inst_26_flags_var_0();
  iVar55 = inst_27_values_var_0();
  iVar56 = inst_27_flags_var_0();
  iVar57 = inst_28_values_var_0();
  iVar58 = inst_28_flags_var_0();
  iVar59 = inst_29_values_var_0();
  iVar60 = inst_29_flags_var_0();
  iVar61 = inst_30_values_var_0();
  iVar62 = inst_30_flags_var_0();
  iVar63 = inst_31_values_var_0();
  iVar64 = inst_31_flags_var_0();
  iVar65 = inst_32_values_var_0();
  iVar66 = inst_32_flags_var_0();
  iVar67 = inst_33_values_var_0();
  iVar68 = inst_33_flags_var_0();
  iVar69 = inst_34_values_var_0();
  iVar70 = inst_34_flags_var_0();
  iVar71 = inst_35_values_var_0();
  iVar72 = inst_35_flags_var_0();
  iVar73 = inst_36_values_var_0();
  iVar74 = inst_36_flags_var_0();
  iVar75 = inst_37_values_var_0();
  iVar76 = inst_37_flags_var_0();
  iVar77 = inst_38_values_var_0();
  iVar78 = inst_38_flags_var_0();
  iVar79 = inst_39_values_var_0();
  iVar80 = inst_39_flags_var_0();
  iVar81 = inst_40_values_var_0();
  iVar82 = inst_40_flags_var_0();
  iVar83 = inst_41_values_var_0();
  iVar84 = inst_41_flags_var_0();
  iVar85 = inst_42_values_var_0();
  iVar86 = inst_42_flags_var_0();
  iVar87 = inst_43_values_var_0();
  iVar88 = inst_43_flags_var_0();
  iVar89 = inst_44_values_var_0();
  iVar90 = inst_44_flags_var_0();
  iVar91 = inst_45_values_var_0();
  iVar92 = inst_45_flags_var_0();
  iVar93 = inst_46_values_var_0();
  iVar94 = inst_46_flags_var_0();
  iVar95 = inst_47_values_var_0();
  iVar96 = inst_47_flags_var_0();
  iVar97 = inst_48_values_var_0();
  iVar98 = inst_48_flags_var_0();
  iVar99 = inst_49_values_var_0();
  iVar100 = inst_49_flags_var_0();
  iVar101 = inst_50_values_var_0();
  iVar102 = inst_50_flags_var_0();
  iVar103 = inst_51_values_var_0();
  iVar104 = inst_51_flags_var_0();
  iVar105 = inst_52_values_var_0();
  iVar106 = inst_52_flags_var_0();
  iVar107 = inst_53_values_var_0();
  iVar108 = inst_53_flags_var_0();
  iVar109 = inst_54_values_var_0();
  iVar110 = inst_54_flags_var_0();
  iVar111 = inst_55_values_var_0();
  iVar112 = inst_55_flags_var_0();
  iVar113 = inst_56_values_var_0();
  iVar114 = inst_56_flags_var_0();
  iVar115 = inst_57_values_var_0();
  iVar116 = inst_57_flags_var_0();
  iVar117 = inst_58_values_var_0();
  iVar118 = inst_58_flags_var_0();
  iVar119 = inst_59_values_var_0();
  iVar120 = inst_59_flags_var_0();
  iVar121 = inst_60_values_var_0();
  iVar122 = inst_60_flags_var_0();
  iVar123 = inst_61_values_var_0();
  iVar124 = inst_61_flags_var_0();
  iVar125 = inst_62_values_var_0();
  iVar126 = inst_62_flags_var_0();
  iVar127 = inst_63_values_var_0();
  iVar128 = inst_63_flags_var_0();
  iVar129 = inst_64_values_var_0();
  iVar130 = inst_64_flags_var_0();
  iVar131 = inst_65_values_var_0();
  iVar132 = inst_65_flags_var_0();
  iVar133 = inst_66_values_var_0();
  iVar134 = inst_66_flags_var_0();
  iVar135 = inst_67_values_var_0();
  iVar136 = inst_67_flags_var_0();
  iVar137 = inst_68_values_var_0();
  iVar138 = inst_68_flags_var_0();
  iVar139 = inst_69_values_var_0();
  iVar140 = inst_69_flags_var_0();
  iVar141 = inst_70_values_var_0();
  iVar142 = inst_70_flags_var_0();
  iVar143 = inst_71_values_var_0();
  iVar144 = inst_71_flags_var_0();
  iVar145 = inst_72_values_var_0();
  iVar146 = inst_72_flags_var_0();
  iVar147 = inst_73_values_var_0();
  iVar148 = inst_73_flags_var_0();
  iVar149 = inst_74_values_var_0();
  iVar150 = inst_74_flags_var_0();
  iVar151 = inst_75_values_var_0();
  iVar152 = inst_75_flags_var_0();
  iVar153 = inst_76_values_var_0();
  iVar154 = inst_76_flags_var_0();
  iVar155 = inst_77_values_var_0();
  iVar156 = inst_77_flags_var_0();
  iVar157 = inst_78_values_var_0();
  iVar158 = inst_78_flags_var_0();
  iVar159 = inst_79_values_var_0();
  iVar160 = inst_79_flags_var_0();
  iVar161 = inst_80_values_var_0();
  iVar162 = inst_80_flags_var_0();
  iVar163 = inst_81_values_var_0();
  iVar164 = inst_81_flags_var_0();
  iVar165 = inst_82_values_var_0();
  iVar166 = inst_82_flags_var_0();
  iVar167 = inst_83_values_var_0();
  iVar168 = inst_83_flags_var_0();
  iVar169 = inst_84_values_var_0();
  iVar170 = inst_84_flags_var_0();
  iVar171 = inst_85_values_var_0();
  iVar172 = inst_85_flags_var_0();
  iVar173 = inst_86_values_var_0();
  iVar174 = inst_86_flags_var_0();
  iVar175 = inst_87_values_var_0();
  iVar176 = inst_87_flags_var_0();
  iVar177 = inst_88_values_var_0();
  iVar178 = inst_88_flags_var_0();
  iVar179 = inst_89_values_var_0();
  iVar180 = inst_89_flags_var_0();
  iVar181 = inst_90_values_var_0();
  iVar182 = inst_90_flags_var_0();
  iVar183 = inst_91_values_var_0();
  iVar184 = inst_91_flags_var_0();
  iVar185 = inst_92_values_var_0();
  iVar186 = inst_92_flags_var_0();
  iVar187 = inst_93_values_var_0();
  iVar188 = inst_93_flags_var_0();
  iVar189 = inst_94_values_var_0();
  iVar190 = inst_94_flags_var_0();
  iVar191 = inst_95_values_var_0();
  iVar192 = inst_95_flags_var_0();
  iVar193 = inst_96_values_var_0();
  iVar194 = inst_96_flags_var_0();
  iVar195 = inst_97_values_var_0();
  iVar196 = inst_97_flags_var_0();
  iVar197 = inst_98_values_var_0();
  iVar198 = inst_98_flags_var_0();
  iVar199 = inst_99_values_var_0();
  iVar200 = inst_99_flags_var_0();
  iVar201 = inst_100_values_var_0();
  iVar202 = inst_100_flags_var_0();
  iVar203 = inst_101_values_var_0();
  iVar204 = inst_101_flags_var_0();
  iVar205 = inst_102_values_var_0();
  iVar206 = inst_102_flags_var_0();
  iVar207 = inst_103_values_var_0();
  iVar208 = inst_103_flags_var_0();
  iVar209 = inst_104_values_var_0();
  iVar210 = inst_104_flags_var_0();
  iVar211 = inst_105_values_var_0();
  iVar212 = inst_105_flags_var_0();
  iVar213 = inst_106_values_var_0();
  iVar214 = inst_106_flags_var_0();
  iVar215 = inst_107_values_var_0();
  iVar216 = inst_107_flags_var_0();
  iVar217 = inst_108_values_var_0();
  iVar218 = inst_108_flags_var_0();
  iVar219 = inst_109_values_var_0();
  iVar220 = inst_109_flags_var_0();
  iVar221 = inst_110_values_var_0();
  iVar222 = inst_110_flags_var_0();
  iVar223 = inst_111_values_var_0();
  iVar224 = inst_111_flags_var_0();
  iVar225 = inst_112_values_var_0();
  iVar226 = inst_112_flags_var_0();
  iVar227 = inst_113_values_var_0();
  iVar228 = inst_113_flags_var_0();
  iVar229 = inst_114_values_var_0();
  iVar230 = inst_114_flags_var_0();
  iVar231 = inst_115_values_var_0();
  iVar232 = inst_115_flags_var_0();
  iVar233 = inst_116_values_var_0();
  iVar234 = inst_116_flags_var_0();
  iVar235 = inst_117_values_var_0();
  iVar236 = inst_117_flags_var_0();
  iVar237 = inst_118_values_var_0();
  iVar238 = inst_118_flags_var_0();
  iVar239 = inst_119_values_var_0();
  iVar240 = inst_119_flags_var_0();
  iVar241 = inst_120_values_var_0();
  iVar242 = inst_120_flags_var_0();
  iVar243 = inst_121_values_var_0();
  iVar244 = inst_121_flags_var_0();
  iVar245 = inst_122_values_var_0();
  iVar246 = inst_122_flags_var_0();
  iVar247 = inst_123_values_var_0();
  iVar248 = inst_123_flags_var_0();
  iVar249 = inst_124_values_var_0();
  iVar250 = inst_124_flags_var_0();
  iVar251 = inst_125_values_var_0();
  iVar252 = inst_125_flags_var_0();
  iVar253 = inst_126_values_var_0();
  iVar254 = inst_126_flags_var_0();
  iVar255 = inst_127_values_var_0();
  iVar256 = inst_127_flags_var_0();
  iVar257 = inst_128_values_var_0();
  iVar258 = inst_128_flags_var_0();
  iVar259 = inst_129_values_var_0();
  iVar260 = inst_129_flags_var_0();
  iVar261 = inst_130_values_var_0();
  iVar262 = inst_130_flags_var_0();
  iVar263 = inst_131_values_var_0();
  iVar264 = inst_131_flags_var_0();
  iVar265 = inst_132_values_var_0();
  iVar266 = inst_132_flags_var_0();
  iVar267 = inst_133_values_var_0();
  iVar268 = inst_133_flags_var_0();
  iVar269 = inst_134_values_var_0();
  iVar270 = inst_134_flags_var_0();
  iVar271 = inst_135_values_var_0();
  iVar272 = inst_135_flags_var_0();
  iVar273 = inst_136_values_var_0();
  iVar274 = inst_136_flags_var_0();
  iVar275 = inst_137_values_var_0();
  iVar276 = inst_137_flags_var_0();
  iVar277 = inst_138_values_var_0();
  iVar278 = inst_138_flags_var_0();
  iVar279 = inst_139_values_var_0();
  iVar280 = inst_139_flags_var_0();
  iVar281 = inst_140_values_var_0();
  iVar282 = inst_140_flags_var_0();
  iVar283 = inst_141_values_var_0();
  iVar284 = inst_141_flags_var_0();
  iVar285 = inst_142_values_var_0();
  iVar286 = inst_142_flags_var_0();
  iVar287 = inst_143_values_var_0();
  iVar288 = inst_143_flags_var_0();
  iVar289 = inst_144_values_var_0();
  iVar290 = inst_144_flags_var_0();
  iVar291 = inst_145_values_var_0();
  iVar292 = inst_145_flags_var_0();
  iVar293 = inst_146_values_var_0();
  iVar294 = inst_146_flags_var_0();
  iVar295 = inst_147_values_var_0();
  iVar296 = inst_147_flags_var_0();
  iVar297 = inst_148_values_var_0();
  iVar298 = inst_148_flags_var_0();
  iVar299 = inst_149_values_var_0();
  iVar300 = inst_149_flags_var_0();
  iVar301 = inst_150_values_var_0();
  iVar302 = inst_150_flags_var_0();
  iVar303 = inst_151_values_var_0();
  iVar304 = inst_151_flags_var_0();
  iVar305 = inst_152_values_var_0();
  iVar306 = inst_152_flags_var_0();
  iVar307 = inst_153_values_var_0();
  iVar308 = inst_153_flags_var_0();
  iVar309 = inst_154_values_var_0();
  iVar310 = inst_154_flags_var_0();
  iVar311 = inst_155_values_var_0();
  iVar312 = inst_155_flags_var_0();
  iVar313 = inst_156_values_var_0();
  iVar314 = inst_156_flags_var_0();
  iVar315 = inst_157_values_var_0();
  iVar316 = inst_157_flags_var_0();
  iVar317 = inst_158_values_var_0();
  iVar318 = inst_158_flags_var_0();
  iVar319 = inst_159_values_var_0();
  iVar320 = inst_159_flags_var_0();
  iVar321 = inst_160_values_var_0();
  iVar322 = inst_160_flags_var_0();
  iVar323 = inst_161_values_var_0();
  iVar324 = inst_161_flags_var_0();
  iVar325 = inst_162_values_var_0();
  iVar326 = inst_162_flags_var_0();
  iVar327 = inst_163_values_var_0();
  iVar328 = inst_163_flags_var_0();
  iVar329 = inst_164_values_var_0();
  iVar330 = inst_164_flags_var_0();
  iVar331 = inst_165_values_var_0();
  iVar332 = inst_165_flags_var_0();
  iVar333 = inst_166_values_var_0();
  iVar334 = inst_166_flags_var_0();
  iVar335 = inst_167_values_var_0();
  iVar336 = inst_167_flags_var_0();
  iVar337 = inst_168_values_var_0();
  iVar338 = inst_168_flags_var_0();
  iVar339 = inst_169_values_var_0();
  iVar340 = inst_169_flags_var_0();
  iVar341 = inst_170_values_var_0();
  iVar342 = inst_170_flags_var_0();
  iVar343 = inst_171_values_var_0();
  iVar344 = inst_171_flags_var_0();
  iVar345 = inst_172_values_var_0();
  iVar346 = inst_172_flags_var_0();
  iVar347 = inst_173_values_var_0();
  iVar348 = inst_173_flags_var_0();
  iVar349 = inst_174_values_var_0();
  iVar350 = inst_174_flags_var_0();
  iVar351 = inst_175_values_var_0();
  iVar352 = inst_175_flags_var_0();
  iVar353 = inst_176_values_var_0();
  iVar354 = inst_176_flags_var_0();
  iVar355 = inst_177_values_var_0();
  iVar356 = inst_177_flags_var_0();
  iVar357 = inst_178_values_var_0();
  iVar358 = inst_178_flags_var_0();
  iVar359 = inst_179_values_var_0();
  iVar360 = inst_179_flags_var_0();
  iVar361 = inst_180_values_var_0();
  iVar362 = inst_180_flags_var_0();
  iVar363 = inst_181_values_var_0();
  iVar364 = inst_181_flags_var_0();
  iVar365 = inst_182_values_var_0();
  iVar366 = inst_182_flags_var_0();
  iVar367 = inst_183_values_var_0();
  iVar368 = inst_183_flags_var_0();
  iVar369 = inst_184_values_var_0();
  iVar370 = inst_184_flags_var_0();
  iVar371 = inst_185_values_var_0();
  iVar372 = inst_185_flags_var_0();
  iVar373 = inst_186_values_var_0();
  iVar374 = inst_186_flags_var_0();
  iVar375 = inst_187_values_var_0();
  iVar376 = inst_187_flags_var_0();
  iVar377 = inst_188_values_var_0();
  iVar378 = inst_188_flags_var_0();
  iVar379 = inst_189_values_var_0();
  iVar380 = inst_189_flags_var_0();
  iVar381 = inst_190_values_var_0();
  iVar382 = inst_190_flags_var_0();
  iVar383 = inst_191_values_var_0();
  iVar384 = inst_191_flags_var_0();
  iVar385 = inst_192_values_var_0();
  iVar386 = inst_192_flags_var_0();
  iVar387 = inst_193_values_var_0();
  iVar388 = inst_193_flags_var_0();
  iVar389 = inst_194_values_var_0();
  iVar390 = inst_194_flags_var_0();
  iVar391 = inst_195_values_var_0();
  iVar392 = inst_195_flags_var_0();
  iVar393 = inst_196_values_var_0();
  iVar394 = inst_196_flags_var_0();
  iVar395 = inst_197_values_var_0();
  iVar396 = inst_197_flags_var_0();
  iVar397 = inst_198_values_var_0();
  iVar398 = inst_198_flags_var_0();
  iVar399 = inst_199_values_var_0();
  iVar400 = inst_199_flags_var_0();
  iVar401 = inst_200_values_var_0();
  iVar402 = inst_200_flags_var_0();
  iVar403 = inst_201_values_var_0();
  iVar404 = inst_201_flags_var_0();
  iVar405 = inst_202_values_var_0();
  iVar406 = inst_202_flags_var_0();
  iVar407 = inst_203_values_var_0();
  iVar408 = inst_203_flags_var_0();
  iVar409 = inst_204_values_var_0();
  iVar410 = inst_204_flags_var_0();
  iVar411 = inst_205_values_var_0();
  iVar412 = inst_205_flags_var_0();
  iVar413 = inst_206_values_var_0();
  iVar414 = inst_206_flags_var_0();
  iVar415 = inst_207_values_var_0();
  iVar416 = inst_207_flags_var_0();
  iVar417 = inst_208_values_var_0();
  iVar418 = inst_208_flags_var_0();
  iVar419 = inst_209_values_var_0();
  iVar420 = inst_209_flags_var_0();
  iVar421 = inst_210_values_var_0();
  iVar422 = inst_210_flags_var_0();
  iVar423 = inst_211_values_var_0();
  iVar424 = inst_211_flags_var_0();
  iVar425 = inst_212_values_var_0();
  iVar426 = inst_212_flags_var_0();
  iVar427 = inst_213_values_var_0();
  iVar428 = inst_213_flags_var_0();
  iVar429 = inst_214_values_var_0();
  iVar430 = inst_214_flags_var_0();
  iVar431 = inst_215_values_var_0();
  iVar432 = inst_215_flags_var_0();
  iVar433 = inst_216_values_var_0();
  iVar434 = inst_216_flags_var_0();
  iVar435 = inst_217_values_var_0();
  iVar436 = inst_217_flags_var_0();
  iVar437 = inst_218_values_var_0();
  iVar438 = inst_218_flags_var_0();
  iVar439 = inst_219_values_var_0();
  iVar440 = inst_219_flags_var_0();
  iVar441 = inst_220_values_var_0();
  iVar442 = inst_220_flags_var_0();
  iVar443 = inst_221_values_var_0();
  iVar444 = inst_221_flags_var_0();
  iVar445 = inst_222_values_var_0();
  iVar446 = inst_222_flags_var_0();
  iVar447 = inst_223_values_var_0();
  iVar448 = inst_223_flags_var_0();
  iVar449 = inst_224_values_var_0();
  iVar450 = inst_224_flags_var_0();
  iVar451 = inst_225_values_var_0();
  iVar452 = inst_225_flags_var_0();
  iVar453 = inst_226_values_var_0();
  iVar454 = inst_226_flags_var_0();
  iVar455 = inst_227_values_var_0();
  iVar456 = inst_227_flags_var_0();
  iVar457 = inst_228_values_var_0();
  iVar458 = inst_228_flags_var_0();
  iVar459 = inst_229_values_var_0();
  iVar460 = inst_229_flags_var_0();
  iVar461 = inst_230_values_var_0();
  iVar462 = inst_230_flags_var_0();
  iVar463 = inst_231_values_var_0();
  iVar464 = inst_231_flags_var_0();
  iVar465 = inst_232_values_var_0();
  iVar466 = inst_232_flags_var_0();
  iVar467 = inst_233_values_var_0();
  iVar468 = inst_233_flags_var_0();
  iVar469 = inst_234_values_var_0();
  iVar470 = inst_234_flags_var_0();
  iVar471 = inst_235_values_var_0();
  iVar472 = inst_235_flags_var_0();
  iVar473 = inst_236_values_var_0();
  iVar474 = inst_236_flags_var_0();
  iVar475 = inst_237_values_var_0();
  iVar476 = inst_237_flags_var_0();
  iVar477 = inst_238_values_var_0();
  iVar478 = inst_238_flags_var_0();
  iVar479 = inst_239_values_var_0();
  iVar480 = inst_239_flags_var_0();
  iVar481 = inst_240_values_var_0();
  iVar482 = inst_240_flags_var_0();
  iVar483 = inst_241_values_var_0();
  iVar484 = inst_241_flags_var_0();
  iVar485 = inst_242_values_var_0();
  iVar486 = inst_242_flags_var_0();
  iVar487 = inst_243_values_var_0();
  iVar488 = inst_243_flags_var_0();
  iVar489 = inst_244_values_var_0();
  iVar490 = inst_244_flags_var_0();
  iVar491 = inst_245_values_var_0();
  iVar492 = inst_245_flags_var_0();
  iVar493 = inst_246_values_var_0();
  iVar494 = inst_246_flags_var_0();
  iVar495 = inst_247_values_var_0();
  iVar496 = inst_247_flags_var_0();
  iVar497 = inst_248_values_var_0();
  iVar498 = inst_248_flags_var_0();
  iVar499 = inst_249_values_var_0();
  iVar500 = inst_249_flags_var_0();
  iVar501 = inst_250_values_var_0();
  iVar502 = inst_250_flags_var_0();
  iVar503 = inst_251_values_var_0();
  iVar504 = inst_251_flags_var_0();
  iVar505 = inst_252_values_var_0();
  iVar506 = inst_252_flags_var_0();
  iVar507 = inst_253_values_var_0();
  iVar508 = inst_253_flags_var_0();
  iVar509 = inst_254_values_var_0();
  iVar510 = inst_254_flags_var_0();
  iVar511 = inst_255_values_var_0();
  iVar512 = inst_255_flags_var_0();
  iVar513 = inst_256_values_var_0();
  iVar514 = inst_256_flags_var_0();
  iVar515 = inst_257_values_var_0();
  iVar516 = inst_257_flags_var_0();
  iVar517 = inst_258_values_var_0();
  iVar518 = inst_258_flags_var_0();
  iVar519 = inst_259_values_var_0();
  iVar520 = inst_259_flags_var_0();
  iVar521 = inst_260_values_var_0();
  iVar522 = inst_260_flags_var_0();
  iVar523 = inst_261_values_var_0();
  iVar524 = inst_261_flags_var_0();
  iVar525 = inst_262_values_var_0();
  iVar526 = inst_262_flags_var_0();
  iVar527 = inst_263_values_var_0();
  iVar528 = inst_263_flags_var_0();
  iVar529 = inst_264_values_var_0();
  iVar530 = inst_264_flags_var_0();
  iVar531 = inst_265_values_var_0();
  iVar532 = inst_265_flags_var_0();
  iVar533 = inst_266_values_var_0();
  iVar534 = inst_266_flags_var_0();
  iVar535 = inst_267_values_var_0();
  iVar536 = inst_267_flags_var_0();
  iVar537 = inst_268_values_var_0();
  iVar538 = inst_268_flags_var_0();
  iVar539 = inst_269_values_var_0();
  iVar540 = inst_269_flags_var_0();
  iVar541 = inst_270_values_var_0();
  iVar542 = inst_270_flags_var_0();
  iVar543 = inst_271_values_var_0();
  iVar544 = inst_271_flags_var_0();
  iVar545 = inst_272_values_var_0();
  iVar546 = inst_272_flags_var_0();
  iVar547 = inst_273_values_var_0();
  iVar548 = inst_273_flags_var_0();
  iVar549 = inst_274_values_var_0();
  iVar550 = inst_274_flags_var_0();
  iVar551 = inst_275_values_var_0();
  iVar552 = inst_275_flags_var_0();
  iVar553 = inst_276_values_var_0();
  iVar554 = inst_276_flags_var_0();
  iVar555 = inst_277_values_var_0();
  iVar556 = inst_277_flags_var_0();
  iVar557 = inst_278_values_var_0();
  iVar558 = inst_278_flags_var_0();
  iVar559 = inst_279_values_var_0();
  iVar560 = inst_279_flags_var_0();
  iVar561 = inst_280_values_var_0();
  iVar562 = inst_280_flags_var_0();
  iVar563 = inst_281_values_var_0();
  iVar564 = inst_281_flags_var_0();
  iVar565 = inst_282_values_var_0();
  iVar566 = inst_282_flags_var_0();
  iVar567 = inst_283_values_var_0();
  iVar568 = inst_283_flags_var_0();
  iVar569 = inst_284_values_var_0();
  iVar570 = inst_284_flags_var_0();
  iVar571 = inst_285_values_var_0();
  iVar572 = inst_285_flags_var_0();
  iVar573 = inst_286_values_var_0();
  iVar574 = inst_286_flags_var_0();
  iVar575 = inst_287_values_var_0();
  iVar576 = inst_287_flags_var_0();
  iVar577 = inst_288_values_var_0();
  iVar578 = inst_288_flags_var_0();
  iVar579 = inst_289_values_var_0();
  iVar580 = inst_289_flags_var_0();
  iVar581 = inst_290_values_var_0();
  iVar582 = inst_290_flags_var_0();
  iVar583 = inst_291_values_var_0();
  iVar584 = inst_291_flags_var_0();
  iVar585 = inst_292_values_var_0();
  iVar586 = inst_292_flags_var_0();
  iVar587 = inst_293_values_var_0();
  iVar588 = inst_293_flags_var_0();
  iVar589 = inst_294_values_var_0();
  iVar590 = inst_294_flags_var_0();
  iVar591 = inst_295_values_var_0();
  iVar592 = inst_295_flags_var_0();
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
      iVar435 + iVar436 + iVar437 + iVar438 + iVar439 + iVar440 + iVar441 + iVar442 + iVar443 +
      iVar444 + iVar445 + iVar446 + iVar447 + iVar448 + iVar449 + iVar450 + iVar451 + iVar452 +
      iVar453 + iVar454 + iVar455 + iVar456 + iVar457 + iVar458 + iVar459 + iVar460 + iVar461 +
      iVar462 + iVar463 + iVar464 + iVar465 + iVar466 + iVar467 + iVar468 + iVar469 + iVar470 +
      iVar471 + iVar472 + iVar473 + iVar474 + iVar475 + iVar476 + iVar477 + iVar478 + iVar479 +
      iVar480 + iVar481 + iVar482 + iVar483 + iVar484 + iVar485 + iVar486 + iVar487 + iVar488 +
      iVar489 + iVar490 + iVar491 + iVar492 + iVar493 + iVar494 + iVar495 + iVar496 + iVar497 +
      iVar498 + iVar499 + iVar500 + iVar501 + iVar502 + iVar503 + iVar504 + iVar505 + iVar506 +
      iVar507 + iVar508 + iVar509 + iVar510 + iVar511 + iVar512 + iVar513 + iVar514 + iVar515 +
      iVar516 + iVar517 + iVar518 + iVar519 + iVar520 + iVar521 + iVar522 + iVar523 + iVar524 +
      iVar525 + iVar526 + iVar527 + iVar528 + iVar529 + iVar530 + iVar531 + iVar532 + iVar533 +
      iVar534 + iVar535 + iVar536 + iVar537 + iVar538 + iVar539 + iVar540 + iVar541 + iVar542 +
      iVar543 + iVar544 + iVar545 + iVar546 + iVar547 + iVar548 + iVar549 + iVar550 + iVar551 +
      iVar552 + iVar553 + iVar554 + iVar555 + iVar556 + iVar557 + iVar558 + iVar559 + iVar560 +
      iVar561 + iVar562 + iVar563 + iVar564 + iVar565 + iVar566 + iVar567 + iVar568 + iVar569 +
      iVar570 + iVar571 + iVar572 + iVar573 + iVar574 + iVar575 + iVar576 + iVar577 + iVar578 +
      iVar579 + iVar580 + iVar581 + iVar582 + iVar583 + iVar584 + iVar585 + iVar586 + iVar587 +
      iVar588 + iVar589 + iVar590 + iVar591 + iVar592 == 0) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  __assert_fail("sum==0","source_base_and_packedbcd_inst__1_var__no_complex.c",0x4ab,
                (char *)&__PRETTY_FUNCTION___3782);
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



// WARNING: Removing unreachable block (ram,0x0804a13c)
// WARNING: Removing unreachable block (ram,0x0804a145)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0804a188)
// WARNING: Removing unreachable block (ram,0x0804a191)

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
  undefined4 in_EDX;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(CONCAT11(in_AF + 'O',in_AF * '\x06' + '\x12') & 0xff0f) |
                         0xc6d40000) + 0x392baff8);
}



undefined8 inst_0_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  byte in_AF;
  
  iVar1 = 0;
  if ((bool)(in_AF | 1)) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)(in_AF | 1) + iVar1 + -0x11);
}



longlong inst_1_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804a332)

undefined8 inst_1_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_2_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804a3e7)

undefined8 inst_2_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



undefined8 inst_3_values_var_0(void)

{
  undefined4 in_EDX;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(CONCAT11('2' - in_AF,in_AF * -6 + -0x7c) & 0xff0f) | 0xeb680000) +
                         0x1497cef2);
}



undefined8 inst_3_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  byte in_AF;
  
  iVar1 = 0;
  if ((bool)(in_AF | 1)) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)(in_AF | 1) + iVar1 + -0x11);
}



longlong inst_4_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804a563)
// WARNING: Removing unreachable block (ram,0x0804a573)

undefined8 inst_4_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_5_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804a633)
// WARNING: Removing unreachable block (ram,0x0804a60c)
// WARNING: Removing unreachable block (ram,0x0804a619)
// WARNING: Removing unreachable block (ram,0x0804a643)

undefined8 inst_5_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_6_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804a6e2)
// WARNING: Removing unreachable block (ram,0x0804a719)

undefined8 inst_6_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_7_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804a7c1)
// WARNING: Removing unreachable block (ram,0x0804a7db)

undefined8 inst_7_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0x10);
}



longlong inst_8_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804a899)
// WARNING: Removing unreachable block (ram,0x0804a8b3)

undefined8 inst_8_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0xc);
}



longlong inst_9_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804a983)

undefined8 inst_9_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0x10);
}



longlong inst_10_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804aa3c)

undefined8 inst_10_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_11_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804ab0e)
// WARNING: Removing unreachable block (ram,0x0804ab28)

undefined8 inst_11_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_12_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804ac00)
// WARNING: Removing unreachable block (ram,0x0804abe6)
// WARNING: Removing unreachable block (ram,0x0804ac10)

undefined8 inst_12_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x14);
}



longlong inst_13_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804acad)
// WARNING: Removing unreachable block (ram,0x0804acba)

undefined8 inst_13_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + 0xc);
}



longlong inst_14_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804ad93)
// WARNING: Removing unreachable block (ram,0x0804ad86)
// WARNING: Removing unreachable block (ram,0x0804adbd)

undefined8 inst_14_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_15_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804ae7f)

undefined8 inst_15_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_16_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804af39)
// WARNING: Removing unreachable block (ram,0x0804af2c)
// WARNING: Removing unreachable block (ram,0x0804af63)

undefined8 inst_16_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_17_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804b025)
// WARNING: Removing unreachable block (ram,0x0804b00b)
// WARNING: Removing unreachable block (ram,0x0804b035)

undefined8 inst_17_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_18_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804b0e3)
// WARNING: Removing unreachable block (ram,0x0804b0fd)

undefined8 inst_18_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_19_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804b1d1)
// WARNING: Removing unreachable block (ram,0x0804b1e1)

undefined8 inst_19_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_20_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804b290)
// WARNING: Removing unreachable block (ram,0x0804b2aa)

undefined8 inst_20_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_21_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804b37c)

undefined8 inst_21_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_22_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804b434)
// WARNING: Removing unreachable block (ram,0x0804b427)
// WARNING: Removing unreachable block (ram,0x0804b44e)

undefined8 inst_22_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_23_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804b504)
// WARNING: Removing unreachable block (ram,0x0804b51e)

undefined8 inst_23_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_24_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804b5cc)
// WARNING: Removing unreachable block (ram,0x0804b5d9)

undefined8 inst_24_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_25_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804b6ab)

undefined8 inst_25_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_26_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804b775)
// WARNING: Removing unreachable block (ram,0x0804b782)

undefined8 inst_26_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_27_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804b845)
// WARNING: Removing unreachable block (ram,0x0804b852)

undefined8 inst_27_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_28_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804b924)
// WARNING: Removing unreachable block (ram,0x0804b917)
// WARNING: Removing unreachable block (ram,0x0804b93e)

undefined8 inst_28_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_29_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804b9dc)
// WARNING: Removing unreachable block (ram,0x0804b9e9)

undefined8 inst_29_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_30_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804bab3)
// WARNING: Removing unreachable block (ram,0x0804baa6)
// WARNING: Removing unreachable block (ram,0x0804bacd)

undefined8 inst_30_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_31_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804bb7a)
// WARNING: Removing unreachable block (ram,0x0804bb6d)
// WARNING: Removing unreachable block (ram,0x0804bb94)

undefined8 inst_31_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_32_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804bc3a)
// WARNING: Removing unreachable block (ram,0x0804bc47)

undefined8 inst_32_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_33_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804bd0c)
// WARNING: Removing unreachable block (ram,0x0804bcff)
// WARNING: Removing unreachable block (ram,0x0804bd26)

undefined8 inst_33_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



undefined8 inst_34_values_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0;
  while ((0x874669e5U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return CONCAT44(in_EDX,iVar1);
}



longlong inst_34_flags_var_0(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0;
  while ((0xb7aa7da8U >> iVar1 & 1) == 0) {
    iVar1 = iVar1 + 1;
  }
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_35_values_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = 0x1f;
  while (0xd737482cU >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return CONCAT44(in_EDX,iVar1 + -0x1f);
}



longlong inst_35_flags_var_0(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = 0x1f;
  while (0xd76255d0U >> iVar1 == 0) {
    iVar1 = iVar1 + -1;
  }
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_36_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_36_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_37_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_37_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_38_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804c05c)

longlong inst_38_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_39_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804c10b)

longlong inst_39_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_40_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804c1be)

longlong inst_40_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_41_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804c26f)

longlong inst_41_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_42_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804c320)

longlong inst_42_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_43_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_43_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_44_values_var_0(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xffffff00);
}



longlong inst_44_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_45_values_var_0(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffff000);
}



longlong inst_45_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_46_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_46_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_47_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_47_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_48_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804c746)

longlong inst_48_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_49_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804c7f7)

longlong inst_49_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_50_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804c8a8)

longlong inst_50_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_51_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_51_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_52_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804ca0a)

longlong inst_52_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_53_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_53_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_54_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_54_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_55_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_55_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_56_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_56_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_57_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_57_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_58_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804cdf6)

longlong inst_58_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_59_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804cea1)

longlong inst_59_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804cefb)

longlong inst_60_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804cf44)

longlong inst_60_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804cfa4)

longlong inst_61_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804cfec)

longlong inst_61_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_62_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_62_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_63_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_63_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_64_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_64_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_65_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_65_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804d2eb)

longlong inst_66_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804d334)

longlong inst_66_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804d394)

longlong inst_67_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804d3dc)

longlong inst_67_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804d43b)

longlong inst_68_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804d484)

longlong inst_68_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804d4e4)

longlong inst_69_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804d52c)

longlong inst_69_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_70_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_70_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_71_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_71_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_72_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_72_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_73_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_73_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804d82b)

longlong inst_74_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804d874)

longlong inst_74_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804d8d4)

longlong inst_75_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804d91c)

longlong inst_75_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804d97b)

longlong inst_76_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_76_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804da24)

longlong inst_77_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_77_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804dacb)

longlong inst_78_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_78_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_79_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804dbbc)

longlong inst_79_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_80_values_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x13a2ffda;
  if (in_PF) {
    iVar1 = -0x13a2f7c1;
  }
  return CONCAT44(in_EDX,iVar1 + 0x13a2ffda);
}



longlong inst_80_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_81_values_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = -0x11b367e7;
  if (in_PF) {
    iVar1 = -0x12f63f52;
  }
  return CONCAT44(in_EDX,iVar1 + 0x12f63f52);
}



longlong inst_81_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_82_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_82_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_83_values_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0x58fcd4c;
  if (!in_PF) {
    iVar1 = 0x55482e5c;
  }
  return CONCAT44(in_EDX,iVar1 + -0x55482e5c);
}



longlong inst_83_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_84_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_84_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_85_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_85_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804e00b)

longlong inst_86_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_86_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_87_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_87_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804e15b)

longlong inst_88_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_88_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_89_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804e24c)

longlong inst_89_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804e2ab)

longlong inst_90_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804e2f4)

longlong inst_90_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804e354)

longlong inst_91_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804e39c)

longlong inst_91_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_92_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804e45d)

undefined8 inst_92_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_93_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804e520)
// WARNING: Removing unreachable block (ram,0x0804e52d)

undefined8 inst_93_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_94_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804e5f6)
// WARNING: Removing unreachable block (ram,0x0804e603)

undefined8 inst_94_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_95_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804e6d5)
// WARNING: Removing unreachable block (ram,0x0804e6ef)

undefined8 inst_95_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_96_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804e7ac)

undefined8 inst_96_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_97_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804e87c)

undefined8 inst_97_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



undefined8 inst_98_values_var_0(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffd);
}



// WARNING: Removing unreachable block (ram,0x0804e941)
// WARNING: Removing unreachable block (ram,0x0804e968)

undefined8 inst_98_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



undefined8 inst_99_values_var_0(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x281);
}



// WARNING: Removing unreachable block (ram,0x0804ea22)
// WARNING: Removing unreachable block (ram,0x0804ea15)
// WARNING: Removing unreachable block (ram,0x0804ea3c)

undefined8 inst_99_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



undefined8 inst_100_values_var_0(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0x92492ed5);
}



// WARNING: Removing unreachable block (ram,0x0804eaf4)
// WARNING: Removing unreachable block (ram,0x0804eae7)
// WARNING: Removing unreachable block (ram,0x0804eb0e)

undefined8 inst_100_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



undefined8 inst_101_values_var_0(void)

{
  byte bVar1;
  undefined4 in_EDX;
  char in_AF;
  
  bVar1 = in_AF * '\x06' + 0x80;
  return CONCAT44(in_EDX,CONCAT31(0xef15f2,bVar1 + (0x90 < (bVar1 & 0xf0) |
                                                   in_AF * (0xf9 < bVar1) | 1U) * '`') + 0x10ea0d20)
  ;
}



undefined8 inst_101_flags_var_0(void)

{
  byte bVar1;
  int iVar2;
  undefined4 in_EDX;
  int iVar3;
  bool in_PF;
  bool in_AF;
  
  bVar1 = in_AF * '\x06' - 0x3c;
  iVar3 = 0;
  if (in_PF) {
    iVar3 = 4;
  }
  iVar2 = 0;
  if (in_AF) {
    iVar2 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)(byte)(0x90 < (bVar1 & 0xf0) | in_AF * (0xf9 < bVar1) | 1U) + iVar3 +
                         iVar2 + -9);
}



undefined8 inst_102_values_var_0(void)

{
  byte bVar1;
  undefined4 in_EDX;
  char in_AF;
  
  bVar1 = in_AF * -6 + 0x76;
  return CONCAT44(in_EDX,CONCAT31(0xb8d44f,bVar1 + (0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) * -0x60
                                 ) + 0x472bb0f0);
}



undefined8 inst_102_flags_var_0(void)

{
  byte bVar1;
  int iVar2;
  undefined4 in_EDX;
  int iVar3;
  bool in_PF;
  bool in_AF;
  
  bVar1 = in_AF * -6 + 0x25;
  iVar3 = 0;
  if (in_PF) {
    iVar3 = 4;
  }
  iVar2 = 0;
  if (in_AF) {
    iVar2 = 0x10;
  }
  return CONCAT44(in_EDX,(uint)(byte)(0x9f < bVar1 | in_AF * (bVar1 < 6) | 1U) + iVar3 + iVar2 +
                         -0x11);
}



longlong inst_103_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804ed48)
// WARNING: Removing unreachable block (ram,0x0804ed62)

undefined8 inst_103_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_104_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804ee10)
// WARNING: Removing unreachable block (ram,0x0804ee2a)

undefined8 inst_104_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_105_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804eed6)
// WARNING: Removing unreachable block (ram,0x0804eef0)

undefined8 inst_105_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_106_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804ef9e)

undefined8 inst_106_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_107_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804f066)

undefined8 inst_107_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_108_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804f12c)
// WARNING: Removing unreachable block (ram,0x0804f146)

undefined8 inst_108_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_109_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_109_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_110_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_110_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_111_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_111_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_112_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0804f419)
// WARNING: Removing unreachable block (ram,0x0804f426)

longlong inst_112_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_113_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_113_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_114_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_114_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_115_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_115_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_116_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_116_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_117_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_117_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_118_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_118_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_119_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_119_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_120_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_120_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_121_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_121_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_122_values_var_0(void)

{
  undefined4 in_EDX;
  char in_PF;
  char in_AF;
  
  return CONCAT44(in_EDX,((uint)(ushort)(CONCAT11(in_AF << 4 | 0x80U | in_PF << 2,0x81) | 0x300) |
                         0xb00e0000) + 0x4ff1687f);
}



longlong inst_122_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_123_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_123_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_124_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_124_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_125_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_125_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_126_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_126_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_127_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_127_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_128_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_128_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_129_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_129_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_130_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_130_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_131_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_131_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_132_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_132_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_133_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_133_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_134_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_134_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_135_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_135_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_136_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_136_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_137_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805052b)

undefined8 inst_137_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_138_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080505fd)
// WARNING: Removing unreachable block (ram,0x08050617)

undefined8 inst_138_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_139_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080506cd)

undefined8 inst_139_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_140_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_140_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_141_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_141_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_142_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_142_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_143_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_143_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_144_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08050a26)
// WARNING: Removing unreachable block (ram,0x08050a33)

undefined8 inst_144_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_145_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08050aeb)
// WARNING: Removing unreachable block (ram,0x08050af8)

undefined8 inst_145_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_146_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08050bb6)
// WARNING: Removing unreachable block (ram,0x08050bc3)

undefined8 inst_146_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_147_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08050c7d)
// WARNING: Removing unreachable block (ram,0x08050c8a)

undefined8 inst_147_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_148_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08050d57)
// WARNING: Removing unreachable block (ram,0x08050d4a)
// WARNING: Removing unreachable block (ram,0x08050d71)

undefined8 inst_148_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_149_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08050e0f)
// WARNING: Removing unreachable block (ram,0x08050e1c)

undefined8 inst_149_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_150_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_150_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_151_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08050f96)

longlong inst_151_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_152_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805104b)

longlong inst_152_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_153_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08051100)

longlong inst_153_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_154_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080511a8)
// WARNING: Removing unreachable block (ram,0x080511b5)

undefined8 inst_154_flags_var_0(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffe);
}



longlong inst_155_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805125f)
// WARNING: Removing unreachable block (ram,0x0805126c)

longlong inst_155_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_156_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08051316)

longlong inst_156_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_157_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080513da)

longlong inst_157_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_158_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_158_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_159_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08051548)

longlong inst_159_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_160_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080515f0)

longlong inst_160_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_161_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080516a5)

longlong inst_161_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_162_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805175a)
// WARNING: Removing unreachable block (ram,0x08051767)

longlong inst_162_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_163_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805180f)

longlong inst_163_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_164_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080518d1)

undefined8 inst_164_flags_var_0(void)

{
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,0xfffffffe);
}



longlong inst_165_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_165_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_166_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_166_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_167_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_167_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_168_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_168_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_169_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_169_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_170_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_170_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_171_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_171_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_172_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_172_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_173_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_173_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_174_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_174_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_175_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_175_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_176_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_176_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_177_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_177_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_178_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_178_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_179_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_179_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_180_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_180_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_181_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_181_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_182_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_182_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_183_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_183_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_184_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_184_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_185_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_185_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_186_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_186_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_187_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_187_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_188_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_188_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_189_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_189_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_190_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_190_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_191_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_191_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_192_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_192_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_193_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_193_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_194_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_194_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_195_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08052d01)

longlong inst_195_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_196_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08052db6)
// WARNING: Removing unreachable block (ram,0x08052dc3)

longlong inst_196_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_197_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08052e6d)

longlong inst_197_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_198_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08052f24)

longlong inst_198_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_199_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_199_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_200_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_200_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_201_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_201_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_202_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08053209)

longlong inst_202_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_203_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080532b5)
// WARNING: Removing unreachable block (ram,0x080532c2)

longlong inst_203_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_204_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805337b)

longlong inst_204_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_205_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08053432)

longlong inst_205_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_206_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080534e9)

longlong inst_206_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_207_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080535a0)

longlong inst_207_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_208_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_208_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_209_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_209_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_210_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080537bc)

longlong inst_210_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_211_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08053873)

longlong inst_211_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_212_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805392a)
// WARNING: Removing unreachable block (ram,0x08053937)

longlong inst_212_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_213_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_213_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_214_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_214_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_215_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_215_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_216_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_216_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_217_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_217_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_218_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_218_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_219_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_219_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_220_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_220_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_221_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_221_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_222_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_222_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_223_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_223_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_224_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_224_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_225_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080541ad)

longlong inst_225_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_226_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080542ae)

undefined8 inst_226_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_227_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08054354)

undefined8 inst_227_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_228_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08054454)

undefined8 inst_228_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_229_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080544fc)

undefined8 inst_229_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_230_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080545ed)
// WARNING: Removing unreachable block (ram,0x080545c6)
// WARNING: Removing unreachable block (ram,0x080545fd)

undefined8 inst_230_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_231_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080546cd)

undefined8 inst_231_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_232_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08054777)
// WARNING: Removing unreachable block (ram,0x0805476a)
// WARNING: Removing unreachable block (ram,0x080547a1)

undefined8 inst_232_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_233_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08054849)

undefined8 inst_233_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_234_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08054914)
// WARNING: Removing unreachable block (ram,0x0805493b)

undefined8 inst_234_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_235_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08054a0f)
// WARNING: Removing unreachable block (ram,0x080549e8)
// WARNING: Removing unreachable block (ram,0x080549f5)
// WARNING: Removing unreachable block (ram,0x08054a1f)

undefined8 inst_235_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_236_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08054ae8)
// WARNING: Removing unreachable block (ram,0x08054ac1)
// WARNING: Removing unreachable block (ram,0x08054ace)
// WARNING: Removing unreachable block (ram,0x08054af8)

undefined8 inst_236_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_237_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08054ba0)

undefined8 inst_237_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_238_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08054c74)

undefined8 inst_238_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_239_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08054d60)
// WARNING: Removing unreachable block (ram,0x08054d39)
// WARNING: Removing unreachable block (ram,0x08054d46)
// WARNING: Removing unreachable block (ram,0x08054d70)

undefined8 inst_239_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_240_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08054e38)
// WARNING: Removing unreachable block (ram,0x08054e11)
// WARNING: Removing unreachable block (ram,0x08054e1e)
// WARNING: Removing unreachable block (ram,0x08054e48)

undefined8 inst_240_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_241_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08054f0c)
// WARNING: Removing unreachable block (ram,0x08054ee5)
// WARNING: Removing unreachable block (ram,0x08054ef2)
// WARNING: Removing unreachable block (ram,0x08054f1c)

undefined8 inst_241_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_242_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08054fe6)
// WARNING: Removing unreachable block (ram,0x08054fbf)
// WARNING: Removing unreachable block (ram,0x08054fcc)
// WARNING: Removing unreachable block (ram,0x08054ff6)

undefined8 inst_242_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -0x10);
}



longlong inst_243_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080550b8)
// WARNING: Removing unreachable block (ram,0x08055091)
// WARNING: Removing unreachable block (ram,0x0805509e)
// WARNING: Removing unreachable block (ram,0x080550c8)

undefined8 inst_243_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_244_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_244_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_245_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_245_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_246_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_246_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_247_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_247_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_248_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_248_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_249_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_249_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_250_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_250_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_251_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_251_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_252_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_252_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_253_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_253_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_254_values_var_0(void)

{
  undefined4 in_EDX;
  byte in_PF;
  
  return CONCAT44(in_EDX,((uint)in_PF | 0xaf551500) + 0x50aaeb00);
}



longlong inst_254_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_255_values_var_0(void)

{
  undefined4 in_EDX;
  bool in_PF;
  
  return CONCAT44(in_EDX,CONCAT22(0xfa4,CONCAT11(!in_PF,0xe4)) + -0xfa400e4);
}



longlong inst_255_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_256_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_256_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_257_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_257_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_258_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_258_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_259_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_259_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_260_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08055be4)

undefined8 inst_260_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_261_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08055cad)
// WARNING: Removing unreachable block (ram,0x08055ca0)
// WARNING: Removing unreachable block (ram,0x08055cc7)

undefined8 inst_261_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_262_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08055d92)

undefined8 inst_262_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_263_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08055e41)

undefined8 inst_263_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_264_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_264_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_265_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_265_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_266_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_266_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_267_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_267_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_268_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_268_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_269_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_269_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_270_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_270_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_271_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_271_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_272_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805644f)
// WARNING: Removing unreachable block (ram,0x08056476)

undefined8 inst_272_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_273_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805651f)
// WARNING: Removing unreachable block (ram,0x0805652c)

undefined8 inst_273_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_274_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08056601)

undefined8 inst_274_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x10);
}



longlong inst_275_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080566d3)
// WARNING: Removing unreachable block (ram,0x080566c6)
// WARNING: Removing unreachable block (ram,0x080566ed)

undefined8 inst_275_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_276_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



undefined8 inst_276_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_277_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805686e)
// WARNING: Removing unreachable block (ram,0x0805687b)

undefined8 inst_277_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1);
}



longlong inst_278_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805693f)
// WARNING: Removing unreachable block (ram,0x0805694c)

undefined8 inst_278_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_279_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08056a11)
// WARNING: Removing unreachable block (ram,0x08056a04)
// WARNING: Removing unreachable block (ram,0x08056a2b)

undefined8 inst_279_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_280_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08056acf)
// WARNING: Removing unreachable block (ram,0x08056adc)

undefined8 inst_280_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_281_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08056ba3)
// WARNING: Removing unreachable block (ram,0x08056b96)
// WARNING: Removing unreachable block (ram,0x08056bbd)

undefined8 inst_281_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_282_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08056c70)
// WARNING: Removing unreachable block (ram,0x08056c63)
// WARNING: Removing unreachable block (ram,0x08056c8a)

undefined8 inst_282_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_283_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08056d35)
// WARNING: Removing unreachable block (ram,0x08056d28)
// WARNING: Removing unreachable block (ram,0x08056d4f)

undefined8 inst_283_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_284_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08056def)

undefined8 inst_284_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_285_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08056ed0)
// WARNING: Removing unreachable block (ram,0x08056ec3)
// WARNING: Removing unreachable block (ram,0x08056eea)

undefined8 inst_285_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -0x14);
}



longlong inst_286_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08056fbc)

undefined8 inst_286_flags_var_0(void)

{
  int iVar1;
  undefined4 in_EDX;
  int iVar2;
  bool in_PF;
  bool in_AF;
  
  iVar2 = 0;
  if (in_PF) {
    iVar2 = 4;
  }
  iVar1 = 0;
  if (in_AF) {
    iVar1 = 0x10;
  }
  return CONCAT44(in_EDX,iVar2 + iVar1 + -4);
}



longlong inst_287_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_287_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_288_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_288_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_289_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_289_flags_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



longlong inst_290_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08057255)
// WARNING: Removing unreachable block (ram,0x08057262)

undefined8 inst_290_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_291_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805731a)
// WARNING: Removing unreachable block (ram,0x08057327)

undefined8 inst_291_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_292_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080573e4)
// WARNING: Removing unreachable block (ram,0x080573f1)

undefined8 inst_292_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_293_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x080574ab)
// WARNING: Removing unreachable block (ram,0x080574b8)

undefined8 inst_293_flags_var_0(void)

{
  undefined4 in_EDX;
  int iVar1;
  bool in_PF;
  
  iVar1 = 0;
  if (in_PF) {
    iVar1 = 4;
  }
  return CONCAT44(in_EDX,iVar1 + -4);
}



longlong inst_294_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x08057578)
// WARNING: Removing unreachable block (ram,0x08057585)

undefined8 inst_294_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
}



longlong inst_295_values_var_0(void)

{
  uint in_EDX;
  
  return (ulonglong)in_EDX << 0x20;
}



// WARNING: Removing unreachable block (ram,0x0805763d)
// WARNING: Removing unreachable block (ram,0x0805764a)

undefined8 inst_295_flags_var_0(void)

{
  undefined4 in_EDX;
  undefined4 uVar1;
  bool in_PF;
  
  uVar1 = 0;
  if (in_PF) {
    uVar1 = 4;
  }
  return CONCAT44(in_EDX,uVar1);
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


