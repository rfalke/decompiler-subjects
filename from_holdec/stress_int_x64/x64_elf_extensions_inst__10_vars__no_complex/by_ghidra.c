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
  long lVar101;
  long lVar102;
  long lVar103;
  long lVar104;
  long lVar105;
  long lVar106;
  long lVar107;
  long lVar108;
  long lVar109;
  long lVar110;
  long lVar111;
  long lVar112;
  long lVar113;
  long lVar114;
  long lVar115;
  long lVar116;
  long lVar117;
  long lVar118;
  long lVar119;
  long lVar120;
  long lVar121;
  long lVar122;
  long lVar123;
  long lVar124;
  long lVar125;
  long lVar126;
  long lVar127;
  long lVar128;
  long lVar129;
  long lVar130;
  long lVar131;
  long lVar132;
  long lVar133;
  long lVar134;
  long lVar135;
  long lVar136;
  long lVar137;
  long lVar138;
  long lVar139;
  long lVar140;
  long lVar141;
  long lVar142;
  long lVar143;
  long lVar144;
  long lVar145;
  long lVar146;
  long lVar147;
  long lVar148;
  long lVar149;
  long lVar150;
  long lVar151;
  long lVar152;
  long lVar153;
  long lVar154;
  long lVar155;
  long lVar156;
  long lVar157;
  long lVar158;
  long lVar159;
  long lVar160;
  long lVar161;
  long lVar162;
  long lVar163;
  long lVar164;
  long lVar165;
  long lVar166;
  long lVar167;
  long lVar168;
  long lVar169;
  long lVar170;
  long lVar171;
  long lVar172;
  long lVar173;
  long lVar174;
  long lVar175;
  long lVar176;
  long lVar177;
  long lVar178;
  long lVar179;
  long lVar180;
  long lVar181;
  long lVar182;
  long lVar183;
  long lVar184;
  long lVar185;
  long lVar186;
  long lVar187;
  long lVar188;
  long lVar189;
  long lVar190;
  long lVar191;
  long lVar192;
  long lVar193;
  long lVar194;
  long lVar195;
  long lVar196;
  long lVar197;
  long lVar198;
  long lVar199;
  long lVar200;
  long lVar201;
  long lVar202;
  long lVar203;
  long lVar204;
  long lVar205;
  long lVar206;
  long lVar207;
  long lVar208;
  long lVar209;
  long lVar210;
  long lVar211;
  long lVar212;
  long lVar213;
  long lVar214;
  long lVar215;
  long lVar216;
  long lVar217;
  long lVar218;
  long lVar219;
  long lVar220;
  long lVar221;
  long lVar222;
  long lVar223;
  long lVar224;
  long lVar225;
  long lVar226;
  long lVar227;
  long lVar228;
  long lVar229;
  long lVar230;
  long lVar231;
  long lVar232;
  long lVar233;
  long lVar234;
  long lVar235;
  long lVar236;
  long lVar237;
  long lVar238;
  long lVar239;
  long lVar240;
  long lVar241;
  long lVar242;
  long lVar243;
  long lVar244;
  long lVar245;
  long lVar246;
  long lVar247;
  long lVar248;
  long lVar249;
  long lVar250;
  long lVar251;
  long lVar252;
  long lVar253;
  long lVar254;
  long lVar255;
  long lVar256;
  long lVar257;
  long lVar258;
  long lVar259;
  long lVar260;
  long lVar261;
  long lVar262;
  long lVar263;
  long lVar264;
  long lVar265;
  long lVar266;
  long lVar267;
  long lVar268;
  long lVar269;
  long lVar270;
  long lVar271;
  long lVar272;
  long lVar273;
  long lVar274;
  long lVar275;
  long lVar276;
  long lVar277;
  long lVar278;
  long lVar279;
  long lVar280;
  long lVar281;
  long lVar282;
  long lVar283;
  long lVar284;
  long lVar285;
  long lVar286;
  long lVar287;
  long lVar288;
  long lVar289;
  long lVar290;
  long lVar291;
  long lVar292;
  long lVar293;
  long lVar294;
  long lVar295;
  long lVar296;
  long lVar297;
  long lVar298;
  long lVar299;
  long lVar300;
  long lVar301;
  long lVar302;
  long lVar303;
  long lVar304;
  long lVar305;
  long lVar306;
  long lVar307;
  long lVar308;
  long lVar309;
  long lVar310;
  long lVar311;
  long lVar312;
  long lVar313;
  long lVar314;
  long lVar315;
  long lVar316;
  long lVar317;
  long lVar318;
  long lVar319;
  long lVar320;
  long lVar321;
  long lVar322;
  long lVar323;
  long lVar324;
  long lVar325;
  long lVar326;
  long lVar327;
  long lVar328;
  long lVar329;
  long lVar330;
  long lVar331;
  long lVar332;
  long lVar333;
  long lVar334;
  long lVar335;
  long lVar336;
  long lVar337;
  long lVar338;
  long lVar339;
  long lVar340;
  long lVar341;
  long lVar342;
  long lVar343;
  long lVar344;
  long lVar345;
  long lVar346;
  long lVar347;
  long lVar348;
  long lVar349;
  long lVar350;
  long lVar351;
  long lVar352;
  long lVar353;
  long lVar354;
  long lVar355;
  long lVar356;
  long lVar357;
  long lVar358;
  long lVar359;
  long lVar360;
  long lVar361;
  long lVar362;
  long lVar363;
  long lVar364;
  long lVar365;
  long lVar366;
  long lVar367;
  long lVar368;
  long lVar369;
  long lVar370;
  long lVar371;
  long lVar372;
  long lVar373;
  long lVar374;
  long lVar375;
  long lVar376;
  long lVar377;
  long lVar378;
  long lVar379;
  long lVar380;
  long lVar381;
  long lVar382;
  long lVar383;
  long lVar384;
  long lVar385;
  long lVar386;
  long lVar387;
  long lVar388;
  long lVar389;
  long lVar390;
  long lVar391;
  long lVar392;
  long lVar393;
  long lVar394;
  long lVar395;
  long lVar396;
  long lVar397;
  long lVar398;
  long lVar399;
  long lVar400;
  long lVar401;
  long lVar402;
  long lVar403;
  long lVar404;
  long lVar405;
  long lVar406;
  long lVar407;
  long lVar408;
  long lVar409;
  long lVar410;
  long lVar411;
  long lVar412;
  long lVar413;
  long lVar414;
  long lVar415;
  long lVar416;
  long lVar417;
  long lVar418;
  long lVar419;
  long lVar420;
  long lVar421;
  long lVar422;
  long lVar423;
  long lVar424;
  long lVar425;
  long lVar426;
  long lVar427;
  long lVar428;
  long lVar429;
  long lVar430;
  long lVar431;
  long lVar432;
  long lVar433;
  long lVar434;
  long lVar435;
  long lVar436;
  long lVar437;
  long lVar438;
  long lVar439;
  long lVar440;
  long lVar441;
  long lVar442;
  long lVar443;
  long lVar444;
  long lVar445;
  long lVar446;
  long lVar447;
  long lVar448;
  long lVar449;
  long lVar450;
  long lVar451;
  long lVar452;
  long lVar453;
  long lVar454;
  long lVar455;
  long lVar456;
  long lVar457;
  long lVar458;
  long lVar459;
  long lVar460;
  long lVar461;
  long lVar462;
  long lVar463;
  long lVar464;
  long lVar465;
  long lVar466;
  long lVar467;
  long lVar468;
  long lVar469;
  long lVar470;
  long lVar471;
  long lVar472;
  long lVar473;
  long lVar474;
  long lVar475;
  long lVar476;
  long lVar477;
  long lVar478;
  long lVar479;
  long lVar480;
  long lVar481;
  long lVar482;
  long lVar483;
  long lVar484;
  long lVar485;
  long lVar486;
  long lVar487;
  long lVar488;
  long lVar489;
  long lVar490;
  long lVar491;
  long lVar492;
  long lVar493;
  long lVar494;
  long lVar495;
  long lVar496;
  long lVar497;
  long lVar498;
  long lVar499;
  long lVar500;
  long lVar501;
  long lVar502;
  long lVar503;
  long lVar504;
  long lVar505;
  long lVar506;
  long lVar507;
  long lVar508;
  long lVar509;
  long lVar510;
  long lVar511;
  long lVar512;
  long lVar513;
  long lVar514;
  long lVar515;
  long lVar516;
  long lVar517;
  long lVar518;
  long lVar519;
  long lVar520;
  long lVar521;
  long lVar522;
  long lVar523;
  long lVar524;
  long lVar525;
  long lVar526;
  long lVar527;
  long lVar528;
  long lVar529;
  long lVar530;
  long lVar531;
  long lVar532;
  long lVar533;
  long lVar534;
  long lVar535;
  long lVar536;
  long lVar537;
  long lVar538;
  long lVar539;
  long lVar540;
  long lVar541;
  long lVar542;
  long lVar543;
  long lVar544;
  long lVar545;
  long lVar546;
  long lVar547;
  long lVar548;
  long lVar549;
  long lVar550;
  long lVar551;
  long lVar552;
  long lVar553;
  long lVar554;
  long lVar555;
  long lVar556;
  long lVar557;
  long lVar558;
  long lVar559;
  long lVar560;
  long lVar561;
  long lVar562;
  long lVar563;
  long lVar564;
  long lVar565;
  long lVar566;
  long lVar567;
  long lVar568;
  long lVar569;
  long lVar570;
  long lVar571;
  long lVar572;
  long lVar573;
  long lVar574;
  long lVar575;
  long lVar576;
  long lVar577;
  long lVar578;
  long lVar579;
  long lVar580;
  long lVar581;
  long lVar582;
  long lVar583;
  long lVar584;
  long lVar585;
  long lVar586;
  long lVar587;
  long lVar588;
  long lVar589;
  long lVar590;
  long lVar591;
  long lVar592;
  long lVar593;
  long lVar594;
  long lVar595;
  long lVar596;
  long lVar597;
  long lVar598;
  long lVar599;
  long lVar600;
  long lVar601;
  long lVar602;
  long lVar603;
  long lVar604;
  long lVar605;
  long lVar606;
  long lVar607;
  long lVar608;
  long lVar609;
  long lVar610;
  long lVar611;
  long lVar612;
  long lVar613;
  long lVar614;
  long lVar615;
  long lVar616;
  long lVar617;
  long lVar618;
  long lVar619;
  long lVar620;
  long lVar621;
  long lVar622;
  long lVar623;
  long lVar624;
  long lVar625;
  long lVar626;
  long lVar627;
  long lVar628;
  long lVar629;
  long lVar630;
  long lVar631;
  long lVar632;
  long lVar633;
  long lVar634;
  long lVar635;
  long lVar636;
  long lVar637;
  long lVar638;
  long lVar639;
  long lVar640;
  long lVar641;
  long lVar642;
  long lVar643;
  long lVar644;
  long lVar645;
  long lVar646;
  long lVar647;
  long lVar648;
  long lVar649;
  long lVar650;
  long lVar651;
  long lVar652;
  long lVar653;
  long lVar654;
  long lVar655;
  long lVar656;
  long lVar657;
  long lVar658;
  long lVar659;
  long lVar660;
  long lVar661;
  long lVar662;
  long lVar663;
  long lVar664;
  long lVar665;
  long lVar666;
  long lVar667;
  long lVar668;
  long lVar669;
  long lVar670;
  long lVar671;
  long lVar672;
  long lVar673;
  long lVar674;
  long lVar675;
  long lVar676;
  long lVar677;
  long lVar678;
  long lVar679;
  long lVar680;
  long lVar681;
  long lVar682;
  long lVar683;
  long lVar684;
  long lVar685;
  long lVar686;
  long lVar687;
  long lVar688;
  long lVar689;
  long lVar690;
  long lVar691;
  long lVar692;
  long lVar693;
  long lVar694;
  long lVar695;
  long lVar696;
  long lVar697;
  long lVar698;
  long lVar699;
  long lVar700;
  long lVar701;
  long lVar702;
  long lVar703;
  long lVar704;
  long lVar705;
  long lVar706;
  long lVar707;
  long lVar708;
  long lVar709;
  long lVar710;
  long lVar711;
  long lVar712;
  long lVar713;
  long lVar714;
  long lVar715;
  long lVar716;
  long lVar717;
  long lVar718;
  long lVar719;
  long lVar720;
  long lVar721;
  long lVar722;
  long lVar723;
  long lVar724;
  long lVar725;
  long lVar726;
  long lVar727;
  long lVar728;
  long lVar729;
  long lVar730;
  long lVar731;
  long lVar732;
  long lVar733;
  long lVar734;
  long lVar735;
  long lVar736;
  long lVar737;
  long lVar738;
  long lVar739;
  long lVar740;
  long lVar741;
  long lVar742;
  long lVar743;
  long lVar744;
  long lVar745;
  long lVar746;
  long lVar747;
  long lVar748;
  long lVar749;
  long lVar750;
  long lVar751;
  long lVar752;
  long lVar753;
  long lVar754;
  long lVar755;
  long lVar756;
  long lVar757;
  long lVar758;
  long lVar759;
  long lVar760;
  long lVar761;
  long lVar762;
  long lVar763;
  long lVar764;
  long lVar765;
  long lVar766;
  long lVar767;
  long lVar768;
  long lVar769;
  long lVar770;
  long lVar771;
  long lVar772;
  long lVar773;
  long lVar774;
  long lVar775;
  long lVar776;
  long lVar777;
  long lVar778;
  long lVar779;
  long lVar780;
  long lVar781;
  long lVar782;
  long lVar783;
  long lVar784;
  long lVar785;
  long lVar786;
  long lVar787;
  long lVar788;
  long lVar789;
  long lVar790;
  long lVar791;
  long lVar792;
  long lVar793;
  long lVar794;
  long lVar795;
  long lVar796;
  long lVar797;
  long lVar798;
  long lVar799;
  long lVar800;
  long lVar801;
  long lVar802;
  long lVar803;
  long lVar804;
  long lVar805;
  long lVar806;
  long lVar807;
  long lVar808;
  long lVar809;
  long lVar810;
  long lVar811;
  long lVar812;
  long lVar813;
  long lVar814;
  long lVar815;
  long lVar816;
  long lVar817;
  long lVar818;
  long lVar819;
  long lVar820;
  long lVar821;
  long lVar822;
  long lVar823;
  long lVar824;
  long lVar825;
  long lVar826;
  long lVar827;
  long lVar828;
  long lVar829;
  long lVar830;
  long lVar831;
  long lVar832;
  long lVar833;
  long lVar834;
  long lVar835;
  long lVar836;
  long lVar837;
  long lVar838;
  long lVar839;
  long lVar840;
  
  lVar1 = inst_0_values_var_0();
  lVar2 = inst_0_flags_var_0();
  lVar3 = inst_0_values_var_1();
  lVar4 = inst_0_flags_var_1();
  lVar5 = inst_0_values_var_2();
  lVar6 = inst_0_flags_var_2();
  lVar7 = inst_0_values_var_3();
  lVar8 = inst_0_flags_var_3();
  lVar9 = inst_0_values_var_4();
  lVar10 = inst_0_flags_var_4();
  lVar11 = inst_0_values_var_5();
  lVar12 = inst_0_flags_var_5();
  lVar13 = inst_0_values_var_6();
  lVar14 = inst_0_flags_var_6();
  lVar15 = inst_0_values_var_7();
  lVar16 = inst_0_flags_var_7();
  lVar17 = inst_0_values_var_8();
  lVar18 = inst_0_flags_var_8();
  lVar19 = inst_0_values_var_9();
  lVar20 = inst_0_flags_var_9();
  lVar21 = inst_1_values_var_0();
  lVar22 = inst_1_flags_var_0();
  lVar23 = inst_1_values_var_1();
  lVar24 = inst_1_flags_var_1();
  lVar25 = inst_1_values_var_2();
  lVar26 = inst_1_flags_var_2();
  lVar27 = inst_1_values_var_3();
  lVar28 = inst_1_flags_var_3();
  lVar29 = inst_1_values_var_4();
  lVar30 = inst_1_flags_var_4();
  lVar31 = inst_1_values_var_5();
  lVar32 = inst_1_flags_var_5();
  lVar33 = inst_1_values_var_6();
  lVar34 = inst_1_flags_var_6();
  lVar35 = inst_1_values_var_7();
  lVar36 = inst_1_flags_var_7();
  lVar37 = inst_1_values_var_8();
  lVar38 = inst_1_flags_var_8();
  lVar39 = inst_1_values_var_9();
  lVar40 = inst_1_flags_var_9();
  lVar41 = inst_2_values_var_0();
  lVar42 = inst_2_flags_var_0();
  lVar43 = inst_2_values_var_1();
  lVar44 = inst_2_flags_var_1();
  lVar45 = inst_2_values_var_2();
  lVar46 = inst_2_flags_var_2();
  lVar47 = inst_2_values_var_3();
  lVar48 = inst_2_flags_var_3();
  lVar49 = inst_2_values_var_4();
  lVar50 = inst_2_flags_var_4();
  lVar51 = inst_2_values_var_5();
  lVar52 = inst_2_flags_var_5();
  lVar53 = inst_2_values_var_6();
  lVar54 = inst_2_flags_var_6();
  lVar55 = inst_2_values_var_7();
  lVar56 = inst_2_flags_var_7();
  lVar57 = inst_2_values_var_8();
  lVar58 = inst_2_flags_var_8();
  lVar59 = inst_2_values_var_9();
  lVar60 = inst_2_flags_var_9();
  lVar61 = inst_3_values_var_0();
  lVar62 = inst_3_flags_var_0();
  lVar63 = inst_3_values_var_1();
  lVar64 = inst_3_flags_var_1();
  lVar65 = inst_3_values_var_2();
  lVar66 = inst_3_flags_var_2();
  lVar67 = inst_3_values_var_3();
  lVar68 = inst_3_flags_var_3();
  lVar69 = inst_3_values_var_4();
  lVar70 = inst_3_flags_var_4();
  lVar71 = inst_3_values_var_5();
  lVar72 = inst_3_flags_var_5();
  lVar73 = inst_3_values_var_6();
  lVar74 = inst_3_flags_var_6();
  lVar75 = inst_3_values_var_7();
  lVar76 = inst_3_flags_var_7();
  lVar77 = inst_3_values_var_8();
  lVar78 = inst_3_flags_var_8();
  lVar79 = inst_3_values_var_9();
  lVar80 = inst_3_flags_var_9();
  lVar81 = inst_4_values_var_0();
  lVar82 = inst_4_flags_var_0();
  lVar83 = inst_4_values_var_1();
  lVar84 = inst_4_flags_var_1();
  lVar85 = inst_4_values_var_2();
  lVar86 = inst_4_flags_var_2();
  lVar87 = inst_4_values_var_3();
  lVar88 = inst_4_flags_var_3();
  lVar89 = inst_4_values_var_4();
  lVar90 = inst_4_flags_var_4();
  lVar91 = inst_4_values_var_5();
  lVar92 = inst_4_flags_var_5();
  lVar93 = inst_4_values_var_6();
  lVar94 = inst_4_flags_var_6();
  lVar95 = inst_4_values_var_7();
  lVar96 = inst_4_flags_var_7();
  lVar97 = inst_4_values_var_8();
  lVar98 = inst_4_flags_var_8();
  lVar99 = inst_4_values_var_9();
  lVar100 = inst_4_flags_var_9();
  lVar101 = inst_5_values_var_0();
  lVar102 = inst_5_flags_var_0();
  lVar103 = inst_5_values_var_1();
  lVar104 = inst_5_flags_var_1();
  lVar105 = inst_5_values_var_2();
  lVar106 = inst_5_flags_var_2();
  lVar107 = inst_5_values_var_3();
  lVar108 = inst_5_flags_var_3();
  lVar109 = inst_5_values_var_4();
  lVar110 = inst_5_flags_var_4();
  lVar111 = inst_5_values_var_5();
  lVar112 = inst_5_flags_var_5();
  lVar113 = inst_5_values_var_6();
  lVar114 = inst_5_flags_var_6();
  lVar115 = inst_5_values_var_7();
  lVar116 = inst_5_flags_var_7();
  lVar117 = inst_5_values_var_8();
  lVar118 = inst_5_flags_var_8();
  lVar119 = inst_5_values_var_9();
  lVar120 = inst_5_flags_var_9();
  lVar121 = inst_6_values_var_0();
  lVar122 = inst_6_flags_var_0();
  lVar123 = inst_6_values_var_1();
  lVar124 = inst_6_flags_var_1();
  lVar125 = inst_6_values_var_2();
  lVar126 = inst_6_flags_var_2();
  lVar127 = inst_6_values_var_3();
  lVar128 = inst_6_flags_var_3();
  lVar129 = inst_6_values_var_4();
  lVar130 = inst_6_flags_var_4();
  lVar131 = inst_6_values_var_5();
  lVar132 = inst_6_flags_var_5();
  lVar133 = inst_6_values_var_6();
  lVar134 = inst_6_flags_var_6();
  lVar135 = inst_6_values_var_7();
  lVar136 = inst_6_flags_var_7();
  lVar137 = inst_6_values_var_8();
  lVar138 = inst_6_flags_var_8();
  lVar139 = inst_6_values_var_9();
  lVar140 = inst_6_flags_var_9();
  lVar141 = inst_7_values_var_0();
  lVar142 = inst_7_flags_var_0();
  lVar143 = inst_7_values_var_1();
  lVar144 = inst_7_flags_var_1();
  lVar145 = inst_7_values_var_2();
  lVar146 = inst_7_flags_var_2();
  lVar147 = inst_7_values_var_3();
  lVar148 = inst_7_flags_var_3();
  lVar149 = inst_7_values_var_4();
  lVar150 = inst_7_flags_var_4();
  lVar151 = inst_7_values_var_5();
  lVar152 = inst_7_flags_var_5();
  lVar153 = inst_7_values_var_6();
  lVar154 = inst_7_flags_var_6();
  lVar155 = inst_7_values_var_7();
  lVar156 = inst_7_flags_var_7();
  lVar157 = inst_7_values_var_8();
  lVar158 = inst_7_flags_var_8();
  lVar159 = inst_7_values_var_9();
  lVar160 = inst_7_flags_var_9();
  lVar161 = inst_8_values_var_0();
  lVar162 = inst_8_flags_var_0();
  lVar163 = inst_8_values_var_1();
  lVar164 = inst_8_flags_var_1();
  lVar165 = inst_8_values_var_2();
  lVar166 = inst_8_flags_var_2();
  lVar167 = inst_8_values_var_3();
  lVar168 = inst_8_flags_var_3();
  lVar169 = inst_8_values_var_4();
  lVar170 = inst_8_flags_var_4();
  lVar171 = inst_8_values_var_5();
  lVar172 = inst_8_flags_var_5();
  lVar173 = inst_8_values_var_6();
  lVar174 = inst_8_flags_var_6();
  lVar175 = inst_8_values_var_7();
  lVar176 = inst_8_flags_var_7();
  lVar177 = inst_8_values_var_8();
  lVar178 = inst_8_flags_var_8();
  lVar179 = inst_8_values_var_9();
  lVar180 = inst_8_flags_var_9();
  lVar181 = inst_9_values_var_0();
  lVar182 = inst_9_flags_var_0();
  lVar183 = inst_9_values_var_1();
  lVar184 = inst_9_flags_var_1();
  lVar185 = inst_9_values_var_2();
  lVar186 = inst_9_flags_var_2();
  lVar187 = inst_9_values_var_3();
  lVar188 = inst_9_flags_var_3();
  lVar189 = inst_9_values_var_4();
  lVar190 = inst_9_flags_var_4();
  lVar191 = inst_9_values_var_5();
  lVar192 = inst_9_flags_var_5();
  lVar193 = inst_9_values_var_6();
  lVar194 = inst_9_flags_var_6();
  lVar195 = inst_9_values_var_7();
  lVar196 = inst_9_flags_var_7();
  lVar197 = inst_9_values_var_8();
  lVar198 = inst_9_flags_var_8();
  lVar199 = inst_9_values_var_9();
  lVar200 = inst_9_flags_var_9();
  lVar201 = inst_10_values_var_0();
  lVar202 = inst_10_flags_var_0();
  lVar203 = inst_10_values_var_1();
  lVar204 = inst_10_flags_var_1();
  lVar205 = inst_10_values_var_2();
  lVar206 = inst_10_flags_var_2();
  lVar207 = inst_10_values_var_3();
  lVar208 = inst_10_flags_var_3();
  lVar209 = inst_10_values_var_4();
  lVar210 = inst_10_flags_var_4();
  lVar211 = inst_10_values_var_5();
  lVar212 = inst_10_flags_var_5();
  lVar213 = inst_10_values_var_6();
  lVar214 = inst_10_flags_var_6();
  lVar215 = inst_10_values_var_7();
  lVar216 = inst_10_flags_var_7();
  lVar217 = inst_10_values_var_8();
  lVar218 = inst_10_flags_var_8();
  lVar219 = inst_10_values_var_9();
  lVar220 = inst_10_flags_var_9();
  lVar221 = inst_11_values_var_0();
  lVar222 = inst_11_flags_var_0();
  lVar223 = inst_11_values_var_1();
  lVar224 = inst_11_flags_var_1();
  lVar225 = inst_11_values_var_2();
  lVar226 = inst_11_flags_var_2();
  lVar227 = inst_11_values_var_3();
  lVar228 = inst_11_flags_var_3();
  lVar229 = inst_11_values_var_4();
  lVar230 = inst_11_flags_var_4();
  lVar231 = inst_11_values_var_5();
  lVar232 = inst_11_flags_var_5();
  lVar233 = inst_11_values_var_6();
  lVar234 = inst_11_flags_var_6();
  lVar235 = inst_11_values_var_7();
  lVar236 = inst_11_flags_var_7();
  lVar237 = inst_11_values_var_8();
  lVar238 = inst_11_flags_var_8();
  lVar239 = inst_11_values_var_9();
  lVar240 = inst_11_flags_var_9();
  lVar241 = inst_12_values_var_0();
  lVar242 = inst_12_flags_var_0();
  lVar243 = inst_12_values_var_1();
  lVar244 = inst_12_flags_var_1();
  lVar245 = inst_12_values_var_2();
  lVar246 = inst_12_flags_var_2();
  lVar247 = inst_12_values_var_3();
  lVar248 = inst_12_flags_var_3();
  lVar249 = inst_12_values_var_4();
  lVar250 = inst_12_flags_var_4();
  lVar251 = inst_12_values_var_5();
  lVar252 = inst_12_flags_var_5();
  lVar253 = inst_12_values_var_6();
  lVar254 = inst_12_flags_var_6();
  lVar255 = inst_12_values_var_7();
  lVar256 = inst_12_flags_var_7();
  lVar257 = inst_12_values_var_8();
  lVar258 = inst_12_flags_var_8();
  lVar259 = inst_12_values_var_9();
  lVar260 = inst_12_flags_var_9();
  lVar261 = inst_13_values_var_0();
  lVar262 = inst_13_flags_var_0();
  lVar263 = inst_13_values_var_1();
  lVar264 = inst_13_flags_var_1();
  lVar265 = inst_13_values_var_2();
  lVar266 = inst_13_flags_var_2();
  lVar267 = inst_13_values_var_3();
  lVar268 = inst_13_flags_var_3();
  lVar269 = inst_13_values_var_4();
  lVar270 = inst_13_flags_var_4();
  lVar271 = inst_13_values_var_5();
  lVar272 = inst_13_flags_var_5();
  lVar273 = inst_13_values_var_6();
  lVar274 = inst_13_flags_var_6();
  lVar275 = inst_13_values_var_7();
  lVar276 = inst_13_flags_var_7();
  lVar277 = inst_13_values_var_8();
  lVar278 = inst_13_flags_var_8();
  lVar279 = inst_13_values_var_9();
  lVar280 = inst_13_flags_var_9();
  lVar281 = inst_14_values_var_0();
  lVar282 = inst_14_flags_var_0();
  lVar283 = inst_14_values_var_1();
  lVar284 = inst_14_flags_var_1();
  lVar285 = inst_14_values_var_2();
  lVar286 = inst_14_flags_var_2();
  lVar287 = inst_14_values_var_3();
  lVar288 = inst_14_flags_var_3();
  lVar289 = inst_14_values_var_4();
  lVar290 = inst_14_flags_var_4();
  lVar291 = inst_14_values_var_5();
  lVar292 = inst_14_flags_var_5();
  lVar293 = inst_14_values_var_6();
  lVar294 = inst_14_flags_var_6();
  lVar295 = inst_14_values_var_7();
  lVar296 = inst_14_flags_var_7();
  lVar297 = inst_14_values_var_8();
  lVar298 = inst_14_flags_var_8();
  lVar299 = inst_14_values_var_9();
  lVar300 = inst_14_flags_var_9();
  lVar301 = inst_15_values_var_0();
  lVar302 = inst_15_flags_var_0();
  lVar303 = inst_15_values_var_1();
  lVar304 = inst_15_flags_var_1();
  lVar305 = inst_15_values_var_2();
  lVar306 = inst_15_flags_var_2();
  lVar307 = inst_15_values_var_3();
  lVar308 = inst_15_flags_var_3();
  lVar309 = inst_15_values_var_4();
  lVar310 = inst_15_flags_var_4();
  lVar311 = inst_15_values_var_5();
  lVar312 = inst_15_flags_var_5();
  lVar313 = inst_15_values_var_6();
  lVar314 = inst_15_flags_var_6();
  lVar315 = inst_15_values_var_7();
  lVar316 = inst_15_flags_var_7();
  lVar317 = inst_15_values_var_8();
  lVar318 = inst_15_flags_var_8();
  lVar319 = inst_15_values_var_9();
  lVar320 = inst_15_flags_var_9();
  lVar321 = inst_16_values_var_0();
  lVar322 = inst_16_flags_var_0();
  lVar323 = inst_16_values_var_1();
  lVar324 = inst_16_flags_var_1();
  lVar325 = inst_16_values_var_2();
  lVar326 = inst_16_flags_var_2();
  lVar327 = inst_16_values_var_3();
  lVar328 = inst_16_flags_var_3();
  lVar329 = inst_16_values_var_4();
  lVar330 = inst_16_flags_var_4();
  lVar331 = inst_16_values_var_5();
  lVar332 = inst_16_flags_var_5();
  lVar333 = inst_16_values_var_6();
  lVar334 = inst_16_flags_var_6();
  lVar335 = inst_16_values_var_7();
  lVar336 = inst_16_flags_var_7();
  lVar337 = inst_16_values_var_8();
  lVar338 = inst_16_flags_var_8();
  lVar339 = inst_16_values_var_9();
  lVar340 = inst_16_flags_var_9();
  lVar341 = inst_17_values_var_0();
  lVar342 = inst_17_flags_var_0();
  lVar343 = inst_17_values_var_1();
  lVar344 = inst_17_flags_var_1();
  lVar345 = inst_17_values_var_2();
  lVar346 = inst_17_flags_var_2();
  lVar347 = inst_17_values_var_3();
  lVar348 = inst_17_flags_var_3();
  lVar349 = inst_17_values_var_4();
  lVar350 = inst_17_flags_var_4();
  lVar351 = inst_17_values_var_5();
  lVar352 = inst_17_flags_var_5();
  lVar353 = inst_17_values_var_6();
  lVar354 = inst_17_flags_var_6();
  lVar355 = inst_17_values_var_7();
  lVar356 = inst_17_flags_var_7();
  lVar357 = inst_17_values_var_8();
  lVar358 = inst_17_flags_var_8();
  lVar359 = inst_17_values_var_9();
  lVar360 = inst_17_flags_var_9();
  lVar361 = inst_18_values_var_0();
  lVar362 = inst_18_flags_var_0();
  lVar363 = inst_18_values_var_1();
  lVar364 = inst_18_flags_var_1();
  lVar365 = inst_18_values_var_2();
  lVar366 = inst_18_flags_var_2();
  lVar367 = inst_18_values_var_3();
  lVar368 = inst_18_flags_var_3();
  lVar369 = inst_18_values_var_4();
  lVar370 = inst_18_flags_var_4();
  lVar371 = inst_18_values_var_5();
  lVar372 = inst_18_flags_var_5();
  lVar373 = inst_18_values_var_6();
  lVar374 = inst_18_flags_var_6();
  lVar375 = inst_18_values_var_7();
  lVar376 = inst_18_flags_var_7();
  lVar377 = inst_18_values_var_8();
  lVar378 = inst_18_flags_var_8();
  lVar379 = inst_18_values_var_9();
  lVar380 = inst_18_flags_var_9();
  lVar381 = inst_19_values_var_0();
  lVar382 = inst_19_flags_var_0();
  lVar383 = inst_19_values_var_1();
  lVar384 = inst_19_flags_var_1();
  lVar385 = inst_19_values_var_2();
  lVar386 = inst_19_flags_var_2();
  lVar387 = inst_19_values_var_3();
  lVar388 = inst_19_flags_var_3();
  lVar389 = inst_19_values_var_4();
  lVar390 = inst_19_flags_var_4();
  lVar391 = inst_19_values_var_5();
  lVar392 = inst_19_flags_var_5();
  lVar393 = inst_19_values_var_6();
  lVar394 = inst_19_flags_var_6();
  lVar395 = inst_19_values_var_7();
  lVar396 = inst_19_flags_var_7();
  lVar397 = inst_19_values_var_8();
  lVar398 = inst_19_flags_var_8();
  lVar399 = inst_19_values_var_9();
  lVar400 = inst_19_flags_var_9();
  lVar401 = inst_20_values_var_0();
  lVar402 = inst_20_flags_var_0();
  lVar403 = inst_20_values_var_1();
  lVar404 = inst_20_flags_var_1();
  lVar405 = inst_20_values_var_2();
  lVar406 = inst_20_flags_var_2();
  lVar407 = inst_20_values_var_3();
  lVar408 = inst_20_flags_var_3();
  lVar409 = inst_20_values_var_4();
  lVar410 = inst_20_flags_var_4();
  lVar411 = inst_20_values_var_5();
  lVar412 = inst_20_flags_var_5();
  lVar413 = inst_20_values_var_6();
  lVar414 = inst_20_flags_var_6();
  lVar415 = inst_20_values_var_7();
  lVar416 = inst_20_flags_var_7();
  lVar417 = inst_20_values_var_8();
  lVar418 = inst_20_flags_var_8();
  lVar419 = inst_20_values_var_9();
  lVar420 = inst_20_flags_var_9();
  lVar421 = inst_21_values_var_0();
  lVar422 = inst_21_flags_var_0();
  lVar423 = inst_21_values_var_1();
  lVar424 = inst_21_flags_var_1();
  lVar425 = inst_21_values_var_2();
  lVar426 = inst_21_flags_var_2();
  lVar427 = inst_21_values_var_3();
  lVar428 = inst_21_flags_var_3();
  lVar429 = inst_21_values_var_4();
  lVar430 = inst_21_flags_var_4();
  lVar431 = inst_21_values_var_5();
  lVar432 = inst_21_flags_var_5();
  lVar433 = inst_21_values_var_6();
  lVar434 = inst_21_flags_var_6();
  lVar435 = inst_21_values_var_7();
  lVar436 = inst_21_flags_var_7();
  lVar437 = inst_21_values_var_8();
  lVar438 = inst_21_flags_var_8();
  lVar439 = inst_21_values_var_9();
  lVar440 = inst_21_flags_var_9();
  lVar441 = inst_22_values_var_0();
  lVar442 = inst_22_flags_var_0();
  lVar443 = inst_22_values_var_1();
  lVar444 = inst_22_flags_var_1();
  lVar445 = inst_22_values_var_2();
  lVar446 = inst_22_flags_var_2();
  lVar447 = inst_22_values_var_3();
  lVar448 = inst_22_flags_var_3();
  lVar449 = inst_22_values_var_4();
  lVar450 = inst_22_flags_var_4();
  lVar451 = inst_22_values_var_5();
  lVar452 = inst_22_flags_var_5();
  lVar453 = inst_22_values_var_6();
  lVar454 = inst_22_flags_var_6();
  lVar455 = inst_22_values_var_7();
  lVar456 = inst_22_flags_var_7();
  lVar457 = inst_22_values_var_8();
  lVar458 = inst_22_flags_var_8();
  lVar459 = inst_22_values_var_9();
  lVar460 = inst_22_flags_var_9();
  lVar461 = inst_23_values_var_0();
  lVar462 = inst_23_flags_var_0();
  lVar463 = inst_23_values_var_1();
  lVar464 = inst_23_flags_var_1();
  lVar465 = inst_23_values_var_2();
  lVar466 = inst_23_flags_var_2();
  lVar467 = inst_23_values_var_3();
  lVar468 = inst_23_flags_var_3();
  lVar469 = inst_23_values_var_4();
  lVar470 = inst_23_flags_var_4();
  lVar471 = inst_23_values_var_5();
  lVar472 = inst_23_flags_var_5();
  lVar473 = inst_23_values_var_6();
  lVar474 = inst_23_flags_var_6();
  lVar475 = inst_23_values_var_7();
  lVar476 = inst_23_flags_var_7();
  lVar477 = inst_23_values_var_8();
  lVar478 = inst_23_flags_var_8();
  lVar479 = inst_23_values_var_9();
  lVar480 = inst_23_flags_var_9();
  lVar481 = inst_24_values_var_0();
  lVar482 = inst_24_flags_var_0();
  lVar483 = inst_24_values_var_1();
  lVar484 = inst_24_flags_var_1();
  lVar485 = inst_24_values_var_2();
  lVar486 = inst_24_flags_var_2();
  lVar487 = inst_24_values_var_3();
  lVar488 = inst_24_flags_var_3();
  lVar489 = inst_24_values_var_4();
  lVar490 = inst_24_flags_var_4();
  lVar491 = inst_24_values_var_5();
  lVar492 = inst_24_flags_var_5();
  lVar493 = inst_24_values_var_6();
  lVar494 = inst_24_flags_var_6();
  lVar495 = inst_24_values_var_7();
  lVar496 = inst_24_flags_var_7();
  lVar497 = inst_24_values_var_8();
  lVar498 = inst_24_flags_var_8();
  lVar499 = inst_24_values_var_9();
  lVar500 = inst_24_flags_var_9();
  lVar501 = inst_25_values_var_0();
  lVar502 = inst_25_flags_var_0();
  lVar503 = inst_25_values_var_1();
  lVar504 = inst_25_flags_var_1();
  lVar505 = inst_25_values_var_2();
  lVar506 = inst_25_flags_var_2();
  lVar507 = inst_25_values_var_3();
  lVar508 = inst_25_flags_var_3();
  lVar509 = inst_25_values_var_4();
  lVar510 = inst_25_flags_var_4();
  lVar511 = inst_25_values_var_5();
  lVar512 = inst_25_flags_var_5();
  lVar513 = inst_25_values_var_6();
  lVar514 = inst_25_flags_var_6();
  lVar515 = inst_25_values_var_7();
  lVar516 = inst_25_flags_var_7();
  lVar517 = inst_25_values_var_8();
  lVar518 = inst_25_flags_var_8();
  lVar519 = inst_25_values_var_9();
  lVar520 = inst_25_flags_var_9();
  lVar521 = inst_26_values_var_0();
  lVar522 = inst_26_flags_var_0();
  lVar523 = inst_26_values_var_1();
  lVar524 = inst_26_flags_var_1();
  lVar525 = inst_26_values_var_2();
  lVar526 = inst_26_flags_var_2();
  lVar527 = inst_26_values_var_3();
  lVar528 = inst_26_flags_var_3();
  lVar529 = inst_26_values_var_4();
  lVar530 = inst_26_flags_var_4();
  lVar531 = inst_26_values_var_5();
  lVar532 = inst_26_flags_var_5();
  lVar533 = inst_26_values_var_6();
  lVar534 = inst_26_flags_var_6();
  lVar535 = inst_26_values_var_7();
  lVar536 = inst_26_flags_var_7();
  lVar537 = inst_26_values_var_8();
  lVar538 = inst_26_flags_var_8();
  lVar539 = inst_26_values_var_9();
  lVar540 = inst_26_flags_var_9();
  lVar541 = inst_27_values_var_0();
  lVar542 = inst_27_flags_var_0();
  lVar543 = inst_27_values_var_1();
  lVar544 = inst_27_flags_var_1();
  lVar545 = inst_27_values_var_2();
  lVar546 = inst_27_flags_var_2();
  lVar547 = inst_27_values_var_3();
  lVar548 = inst_27_flags_var_3();
  lVar549 = inst_27_values_var_4();
  lVar550 = inst_27_flags_var_4();
  lVar551 = inst_27_values_var_5();
  lVar552 = inst_27_flags_var_5();
  lVar553 = inst_27_values_var_6();
  lVar554 = inst_27_flags_var_6();
  lVar555 = inst_27_values_var_7();
  lVar556 = inst_27_flags_var_7();
  lVar557 = inst_27_values_var_8();
  lVar558 = inst_27_flags_var_8();
  lVar559 = inst_27_values_var_9();
  lVar560 = inst_27_flags_var_9();
  lVar561 = inst_28_values_var_0();
  lVar562 = inst_28_flags_var_0();
  lVar563 = inst_28_values_var_1();
  lVar564 = inst_28_flags_var_1();
  lVar565 = inst_28_values_var_2();
  lVar566 = inst_28_flags_var_2();
  lVar567 = inst_28_values_var_3();
  lVar568 = inst_28_flags_var_3();
  lVar569 = inst_28_values_var_4();
  lVar570 = inst_28_flags_var_4();
  lVar571 = inst_28_values_var_5();
  lVar572 = inst_28_flags_var_5();
  lVar573 = inst_28_values_var_6();
  lVar574 = inst_28_flags_var_6();
  lVar575 = inst_28_values_var_7();
  lVar576 = inst_28_flags_var_7();
  lVar577 = inst_28_values_var_8();
  lVar578 = inst_28_flags_var_8();
  lVar579 = inst_28_values_var_9();
  lVar580 = inst_28_flags_var_9();
  lVar581 = inst_29_values_var_0();
  lVar582 = inst_29_flags_var_0();
  lVar583 = inst_29_values_var_1();
  lVar584 = inst_29_flags_var_1();
  lVar585 = inst_29_values_var_2();
  lVar586 = inst_29_flags_var_2();
  lVar587 = inst_29_values_var_3();
  lVar588 = inst_29_flags_var_3();
  lVar589 = inst_29_values_var_4();
  lVar590 = inst_29_flags_var_4();
  lVar591 = inst_29_values_var_5();
  lVar592 = inst_29_flags_var_5();
  lVar593 = inst_29_values_var_6();
  lVar594 = inst_29_flags_var_6();
  lVar595 = inst_29_values_var_7();
  lVar596 = inst_29_flags_var_7();
  lVar597 = inst_29_values_var_8();
  lVar598 = inst_29_flags_var_8();
  lVar599 = inst_29_values_var_9();
  lVar600 = inst_29_flags_var_9();
  lVar601 = inst_30_values_var_0();
  lVar602 = inst_30_flags_var_0();
  lVar603 = inst_30_values_var_1();
  lVar604 = inst_30_flags_var_1();
  lVar605 = inst_30_values_var_2();
  lVar606 = inst_30_flags_var_2();
  lVar607 = inst_30_values_var_3();
  lVar608 = inst_30_flags_var_3();
  lVar609 = inst_30_values_var_4();
  lVar610 = inst_30_flags_var_4();
  lVar611 = inst_30_values_var_5();
  lVar612 = inst_30_flags_var_5();
  lVar613 = inst_30_values_var_6();
  lVar614 = inst_30_flags_var_6();
  lVar615 = inst_30_values_var_7();
  lVar616 = inst_30_flags_var_7();
  lVar617 = inst_30_values_var_8();
  lVar618 = inst_30_flags_var_8();
  lVar619 = inst_30_values_var_9();
  lVar620 = inst_30_flags_var_9();
  lVar621 = inst_31_values_var_0();
  lVar622 = inst_31_flags_var_0();
  lVar623 = inst_31_values_var_1();
  lVar624 = inst_31_flags_var_1();
  lVar625 = inst_31_values_var_2();
  lVar626 = inst_31_flags_var_2();
  lVar627 = inst_31_values_var_3();
  lVar628 = inst_31_flags_var_3();
  lVar629 = inst_31_values_var_4();
  lVar630 = inst_31_flags_var_4();
  lVar631 = inst_31_values_var_5();
  lVar632 = inst_31_flags_var_5();
  lVar633 = inst_31_values_var_6();
  lVar634 = inst_31_flags_var_6();
  lVar635 = inst_31_values_var_7();
  lVar636 = inst_31_flags_var_7();
  lVar637 = inst_31_values_var_8();
  lVar638 = inst_31_flags_var_8();
  lVar639 = inst_31_values_var_9();
  lVar640 = inst_31_flags_var_9();
  lVar641 = inst_32_values_var_0();
  lVar642 = inst_32_flags_var_0();
  lVar643 = inst_32_values_var_1();
  lVar644 = inst_32_flags_var_1();
  lVar645 = inst_32_values_var_2();
  lVar646 = inst_32_flags_var_2();
  lVar647 = inst_32_values_var_3();
  lVar648 = inst_32_flags_var_3();
  lVar649 = inst_32_values_var_4();
  lVar650 = inst_32_flags_var_4();
  lVar651 = inst_32_values_var_5();
  lVar652 = inst_32_flags_var_5();
  lVar653 = inst_32_values_var_6();
  lVar654 = inst_32_flags_var_6();
  lVar655 = inst_32_values_var_7();
  lVar656 = inst_32_flags_var_7();
  lVar657 = inst_32_values_var_8();
  lVar658 = inst_32_flags_var_8();
  lVar659 = inst_32_values_var_9();
  lVar660 = inst_32_flags_var_9();
  lVar661 = inst_33_values_var_0();
  lVar662 = inst_33_flags_var_0();
  lVar663 = inst_33_values_var_1();
  lVar664 = inst_33_flags_var_1();
  lVar665 = inst_33_values_var_2();
  lVar666 = inst_33_flags_var_2();
  lVar667 = inst_33_values_var_3();
  lVar668 = inst_33_flags_var_3();
  lVar669 = inst_33_values_var_4();
  lVar670 = inst_33_flags_var_4();
  lVar671 = inst_33_values_var_5();
  lVar672 = inst_33_flags_var_5();
  lVar673 = inst_33_values_var_6();
  lVar674 = inst_33_flags_var_6();
  lVar675 = inst_33_values_var_7();
  lVar676 = inst_33_flags_var_7();
  lVar677 = inst_33_values_var_8();
  lVar678 = inst_33_flags_var_8();
  lVar679 = inst_33_values_var_9();
  lVar680 = inst_33_flags_var_9();
  lVar681 = inst_34_values_var_0();
  lVar682 = inst_34_flags_var_0();
  lVar683 = inst_34_values_var_1();
  lVar684 = inst_34_flags_var_1();
  lVar685 = inst_34_values_var_2();
  lVar686 = inst_34_flags_var_2();
  lVar687 = inst_34_values_var_3();
  lVar688 = inst_34_flags_var_3();
  lVar689 = inst_34_values_var_4();
  lVar690 = inst_34_flags_var_4();
  lVar691 = inst_34_values_var_5();
  lVar692 = inst_34_flags_var_5();
  lVar693 = inst_34_values_var_6();
  lVar694 = inst_34_flags_var_6();
  lVar695 = inst_34_values_var_7();
  lVar696 = inst_34_flags_var_7();
  lVar697 = inst_34_values_var_8();
  lVar698 = inst_34_flags_var_8();
  lVar699 = inst_34_values_var_9();
  lVar700 = inst_34_flags_var_9();
  lVar701 = inst_35_values_var_0();
  lVar702 = inst_35_flags_var_0();
  lVar703 = inst_35_values_var_1();
  lVar704 = inst_35_flags_var_1();
  lVar705 = inst_35_values_var_2();
  lVar706 = inst_35_flags_var_2();
  lVar707 = inst_35_values_var_3();
  lVar708 = inst_35_flags_var_3();
  lVar709 = inst_35_values_var_4();
  lVar710 = inst_35_flags_var_4();
  lVar711 = inst_35_values_var_5();
  lVar712 = inst_35_flags_var_5();
  lVar713 = inst_35_values_var_6();
  lVar714 = inst_35_flags_var_6();
  lVar715 = inst_35_values_var_7();
  lVar716 = inst_35_flags_var_7();
  lVar717 = inst_35_values_var_8();
  lVar718 = inst_35_flags_var_8();
  lVar719 = inst_35_values_var_9();
  lVar720 = inst_35_flags_var_9();
  lVar721 = inst_36_values_var_0();
  lVar722 = inst_36_flags_var_0();
  lVar723 = inst_36_values_var_1();
  lVar724 = inst_36_flags_var_1();
  lVar725 = inst_36_values_var_2();
  lVar726 = inst_36_flags_var_2();
  lVar727 = inst_36_values_var_3();
  lVar728 = inst_36_flags_var_3();
  lVar729 = inst_36_values_var_4();
  lVar730 = inst_36_flags_var_4();
  lVar731 = inst_36_values_var_5();
  lVar732 = inst_36_flags_var_5();
  lVar733 = inst_36_values_var_6();
  lVar734 = inst_36_flags_var_6();
  lVar735 = inst_36_values_var_7();
  lVar736 = inst_36_flags_var_7();
  lVar737 = inst_36_values_var_8();
  lVar738 = inst_36_flags_var_8();
  lVar739 = inst_36_values_var_9();
  lVar740 = inst_36_flags_var_9();
  lVar741 = inst_37_values_var_0();
  lVar742 = inst_37_flags_var_0();
  lVar743 = inst_37_values_var_1();
  lVar744 = inst_37_flags_var_1();
  lVar745 = inst_37_values_var_2();
  lVar746 = inst_37_flags_var_2();
  lVar747 = inst_37_values_var_3();
  lVar748 = inst_37_flags_var_3();
  lVar749 = inst_37_values_var_4();
  lVar750 = inst_37_flags_var_4();
  lVar751 = inst_37_values_var_5();
  lVar752 = inst_37_flags_var_5();
  lVar753 = inst_37_values_var_6();
  lVar754 = inst_37_flags_var_6();
  lVar755 = inst_37_values_var_7();
  lVar756 = inst_37_flags_var_7();
  lVar757 = inst_37_values_var_8();
  lVar758 = inst_37_flags_var_8();
  lVar759 = inst_37_values_var_9();
  lVar760 = inst_37_flags_var_9();
  lVar761 = inst_38_values_var_0();
  lVar762 = inst_38_flags_var_0();
  lVar763 = inst_38_values_var_1();
  lVar764 = inst_38_flags_var_1();
  lVar765 = inst_38_values_var_2();
  lVar766 = inst_38_flags_var_2();
  lVar767 = inst_38_values_var_3();
  lVar768 = inst_38_flags_var_3();
  lVar769 = inst_38_values_var_4();
  lVar770 = inst_38_flags_var_4();
  lVar771 = inst_38_values_var_5();
  lVar772 = inst_38_flags_var_5();
  lVar773 = inst_38_values_var_6();
  lVar774 = inst_38_flags_var_6();
  lVar775 = inst_38_values_var_7();
  lVar776 = inst_38_flags_var_7();
  lVar777 = inst_38_values_var_8();
  lVar778 = inst_38_flags_var_8();
  lVar779 = inst_38_values_var_9();
  lVar780 = inst_38_flags_var_9();
  lVar781 = inst_39_values_var_0();
  lVar782 = inst_39_flags_var_0();
  lVar783 = inst_39_values_var_1();
  lVar784 = inst_39_flags_var_1();
  lVar785 = inst_39_values_var_2();
  lVar786 = inst_39_flags_var_2();
  lVar787 = inst_39_values_var_3();
  lVar788 = inst_39_flags_var_3();
  lVar789 = inst_39_values_var_4();
  lVar790 = inst_39_flags_var_4();
  lVar791 = inst_39_values_var_5();
  lVar792 = inst_39_flags_var_5();
  lVar793 = inst_39_values_var_6();
  lVar794 = inst_39_flags_var_6();
  lVar795 = inst_39_values_var_7();
  lVar796 = inst_39_flags_var_7();
  lVar797 = inst_39_values_var_8();
  lVar798 = inst_39_flags_var_8();
  lVar799 = inst_39_values_var_9();
  lVar800 = inst_39_flags_var_9();
  lVar801 = inst_40_values_var_0();
  lVar802 = inst_40_flags_var_0();
  lVar803 = inst_40_values_var_1();
  lVar804 = inst_40_flags_var_1();
  lVar805 = inst_40_values_var_2();
  lVar806 = inst_40_flags_var_2();
  lVar807 = inst_40_values_var_3();
  lVar808 = inst_40_flags_var_3();
  lVar809 = inst_40_values_var_4();
  lVar810 = inst_40_flags_var_4();
  lVar811 = inst_40_values_var_5();
  lVar812 = inst_40_flags_var_5();
  lVar813 = inst_40_values_var_6();
  lVar814 = inst_40_flags_var_6();
  lVar815 = inst_40_values_var_7();
  lVar816 = inst_40_flags_var_7();
  lVar817 = inst_40_values_var_8();
  lVar818 = inst_40_flags_var_8();
  lVar819 = inst_40_values_var_9();
  lVar820 = inst_40_flags_var_9();
  lVar821 = inst_41_values_var_0();
  lVar822 = inst_41_flags_var_0();
  lVar823 = inst_41_values_var_1();
  lVar824 = inst_41_flags_var_1();
  lVar825 = inst_41_values_var_2();
  lVar826 = inst_41_flags_var_2();
  lVar827 = inst_41_values_var_3();
  lVar828 = inst_41_flags_var_3();
  lVar829 = inst_41_values_var_4();
  lVar830 = inst_41_flags_var_4();
  lVar831 = inst_41_values_var_5();
  lVar832 = inst_41_flags_var_5();
  lVar833 = inst_41_values_var_6();
  lVar834 = inst_41_flags_var_6();
  lVar835 = inst_41_values_var_7();
  lVar836 = inst_41_flags_var_7();
  lVar837 = inst_41_values_var_8();
  lVar838 = inst_41_flags_var_8();
  lVar839 = inst_41_values_var_9();
  lVar840 = inst_41_flags_var_9();
  if (lVar1 + lVar2 + lVar3 + lVar4 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 + lVar10 + lVar11 +
      lVar12 + lVar13 + lVar14 + lVar15 + lVar16 + lVar17 + lVar18 + lVar19 + lVar20 + lVar21 +
      lVar22 + lVar23 + lVar24 + lVar25 + lVar26 + lVar27 + lVar28 + lVar29 + lVar30 + lVar31 +
      lVar32 + lVar33 + lVar34 + lVar35 + lVar36 + lVar37 + lVar38 + lVar39 + lVar40 + lVar41 +
      lVar42 + lVar43 + lVar44 + lVar45 + lVar46 + lVar47 + lVar48 + lVar49 + lVar50 + lVar51 +
      lVar52 + lVar53 + lVar54 + lVar55 + lVar56 + lVar57 + lVar58 + lVar59 + lVar60 + lVar61 +
      lVar62 + lVar63 + lVar64 + lVar65 + lVar66 + lVar67 + lVar68 + lVar69 + lVar70 + lVar71 +
      lVar72 + lVar73 + lVar74 + lVar75 + lVar76 + lVar77 + lVar78 + lVar79 + lVar80 + lVar81 +
      lVar82 + lVar83 + lVar84 + lVar85 + lVar86 + lVar87 + lVar88 + lVar89 + lVar90 + lVar91 +
      lVar92 + lVar93 + lVar94 + lVar95 + lVar96 + lVar97 + lVar98 + lVar99 + lVar100 + lVar101 +
      lVar102 + lVar103 + lVar104 + lVar105 + lVar106 + lVar107 + lVar108 + lVar109 + lVar110 +
      lVar111 + lVar112 + lVar113 + lVar114 + lVar115 + lVar116 + lVar117 + lVar118 + lVar119 +
      lVar120 + lVar121 + lVar122 + lVar123 + lVar124 + lVar125 + lVar126 + lVar127 + lVar128 +
      lVar129 + lVar130 + lVar131 + lVar132 + lVar133 + lVar134 + lVar135 + lVar136 + lVar137 +
      lVar138 + lVar139 + lVar140 + lVar141 + lVar142 + lVar143 + lVar144 + lVar145 + lVar146 +
      lVar147 + lVar148 + lVar149 + lVar150 + lVar151 + lVar152 + lVar153 + lVar154 + lVar155 +
      lVar156 + lVar157 + lVar158 + lVar159 + lVar160 + lVar161 + lVar162 + lVar163 + lVar164 +
      lVar165 + lVar166 + lVar167 + lVar168 + lVar169 + lVar170 + lVar171 + lVar172 + lVar173 +
      lVar174 + lVar175 + lVar176 + lVar177 + lVar178 + lVar179 + lVar180 + lVar181 + lVar182 +
      lVar183 + lVar184 + lVar185 + lVar186 + lVar187 + lVar188 + lVar189 + lVar190 + lVar191 +
      lVar192 + lVar193 + lVar194 + lVar195 + lVar196 + lVar197 + lVar198 + lVar199 + lVar200 +
      lVar201 + lVar202 + lVar203 + lVar204 + lVar205 + lVar206 + lVar207 + lVar208 + lVar209 +
      lVar210 + lVar211 + lVar212 + lVar213 + lVar214 + lVar215 + lVar216 + lVar217 + lVar218 +
      lVar219 + lVar220 + lVar221 + lVar222 + lVar223 + lVar224 + lVar225 + lVar226 + lVar227 +
      lVar228 + lVar229 + lVar230 + lVar231 + lVar232 + lVar233 + lVar234 + lVar235 + lVar236 +
      lVar237 + lVar238 + lVar239 + lVar240 + lVar241 + lVar242 + lVar243 + lVar244 + lVar245 +
      lVar246 + lVar247 + lVar248 + lVar249 + lVar250 + lVar251 + lVar252 + lVar253 + lVar254 +
      lVar255 + lVar256 + lVar257 + lVar258 + lVar259 + lVar260 + lVar261 + lVar262 + lVar263 +
      lVar264 + lVar265 + lVar266 + lVar267 + lVar268 + lVar269 + lVar270 + lVar271 + lVar272 +
      lVar273 + lVar274 + lVar275 + lVar276 + lVar277 + lVar278 + lVar279 + lVar280 + lVar281 +
      lVar282 + lVar283 + lVar284 + lVar285 + lVar286 + lVar287 + lVar288 + lVar289 + lVar290 +
      lVar291 + lVar292 + lVar293 + lVar294 + lVar295 + lVar296 + lVar297 + lVar298 + lVar299 +
      lVar300 + lVar301 + lVar302 + lVar303 + lVar304 + lVar305 + lVar306 + lVar307 + lVar308 +
      lVar309 + lVar310 + lVar311 + lVar312 + lVar313 + lVar314 + lVar315 + lVar316 + lVar317 +
      lVar318 + lVar319 + lVar320 + lVar321 + lVar322 + lVar323 + lVar324 + lVar325 + lVar326 +
      lVar327 + lVar328 + lVar329 + lVar330 + lVar331 + lVar332 + lVar333 + lVar334 + lVar335 +
      lVar336 + lVar337 + lVar338 + lVar339 + lVar340 + lVar341 + lVar342 + lVar343 + lVar344 +
      lVar345 + lVar346 + lVar347 + lVar348 + lVar349 + lVar350 + lVar351 + lVar352 + lVar353 +
      lVar354 + lVar355 + lVar356 + lVar357 + lVar358 + lVar359 + lVar360 + lVar361 + lVar362 +
      lVar363 + lVar364 + lVar365 + lVar366 + lVar367 + lVar368 + lVar369 + lVar370 + lVar371 +
      lVar372 + lVar373 + lVar374 + lVar375 + lVar376 + lVar377 + lVar378 + lVar379 + lVar380 +
      lVar381 + lVar382 + lVar383 + lVar384 + lVar385 + lVar386 + lVar387 + lVar388 + lVar389 +
      lVar390 + lVar391 + lVar392 + lVar393 + lVar394 + lVar395 + lVar396 + lVar397 + lVar398 +
      lVar399 + lVar400 + lVar401 + lVar402 + lVar403 + lVar404 + lVar405 + lVar406 + lVar407 +
      lVar408 + lVar409 + lVar410 + lVar411 + lVar412 + lVar413 + lVar414 + lVar415 + lVar416 +
      lVar417 + lVar418 + lVar419 + lVar420 + lVar421 + lVar422 + lVar423 + lVar424 + lVar425 +
      lVar426 + lVar427 + lVar428 + lVar429 + lVar430 + lVar431 + lVar432 + lVar433 + lVar434 +
      lVar435 + lVar436 + lVar437 + lVar438 + lVar439 + lVar440 + lVar441 + lVar442 + lVar443 +
      lVar444 + lVar445 + lVar446 + lVar447 + lVar448 + lVar449 + lVar450 + lVar451 + lVar452 +
      lVar453 + lVar454 + lVar455 + lVar456 + lVar457 + lVar458 + lVar459 + lVar460 + lVar461 +
      lVar462 + lVar463 + lVar464 + lVar465 + lVar466 + lVar467 + lVar468 + lVar469 + lVar470 +
      lVar471 + lVar472 + lVar473 + lVar474 + lVar475 + lVar476 + lVar477 + lVar478 + lVar479 +
      lVar480 + lVar481 + lVar482 + lVar483 + lVar484 + lVar485 + lVar486 + lVar487 + lVar488 +
      lVar489 + lVar490 + lVar491 + lVar492 + lVar493 + lVar494 + lVar495 + lVar496 + lVar497 +
      lVar498 + lVar499 + lVar500 + lVar501 + lVar502 + lVar503 + lVar504 + lVar505 + lVar506 +
      lVar507 + lVar508 + lVar509 + lVar510 + lVar511 + lVar512 + lVar513 + lVar514 + lVar515 +
      lVar516 + lVar517 + lVar518 + lVar519 + lVar520 + lVar521 + lVar522 + lVar523 + lVar524 +
      lVar525 + lVar526 + lVar527 + lVar528 + lVar529 + lVar530 + lVar531 + lVar532 + lVar533 +
      lVar534 + lVar535 + lVar536 + lVar537 + lVar538 + lVar539 + lVar540 + lVar541 + lVar542 +
      lVar543 + lVar544 + lVar545 + lVar546 + lVar547 + lVar548 + lVar549 + lVar550 + lVar551 +
      lVar552 + lVar553 + lVar554 + lVar555 + lVar556 + lVar557 + lVar558 + lVar559 + lVar560 +
      lVar561 + lVar562 + lVar563 + lVar564 + lVar565 + lVar566 + lVar567 + lVar568 + lVar569 +
      lVar570 + lVar571 + lVar572 + lVar573 + lVar574 + lVar575 + lVar576 + lVar577 + lVar578 +
      lVar579 + lVar580 + lVar581 + lVar582 + lVar583 + lVar584 + lVar585 + lVar586 + lVar587 +
      lVar588 + lVar589 + lVar590 + lVar591 + lVar592 + lVar593 + lVar594 + lVar595 + lVar596 +
      lVar597 + lVar598 + lVar599 + lVar600 + lVar601 + lVar602 + lVar603 + lVar604 + lVar605 +
      lVar606 + lVar607 + lVar608 + lVar609 + lVar610 + lVar611 + lVar612 + lVar613 + lVar614 +
      lVar615 + lVar616 + lVar617 + lVar618 + lVar619 + lVar620 + lVar621 + lVar622 + lVar623 +
      lVar624 + lVar625 + lVar626 + lVar627 + lVar628 + lVar629 + lVar630 + lVar631 + lVar632 +
      lVar633 + lVar634 + lVar635 + lVar636 + lVar637 + lVar638 + lVar639 + lVar640 + lVar641 +
      lVar642 + lVar643 + lVar644 + lVar645 + lVar646 + lVar647 + lVar648 + lVar649 + lVar650 +
      lVar651 + lVar652 + lVar653 + lVar654 + lVar655 + lVar656 + lVar657 + lVar658 + lVar659 +
      lVar660 + lVar661 + lVar662 + lVar663 + lVar664 + lVar665 + lVar666 + lVar667 + lVar668 +
      lVar669 + lVar670 + lVar671 + lVar672 + lVar673 + lVar674 + lVar675 + lVar676 + lVar677 +
      lVar678 + lVar679 + lVar680 + lVar681 + lVar682 + lVar683 + lVar684 + lVar685 + lVar686 +
      lVar687 + lVar688 + lVar689 + lVar690 + lVar691 + lVar692 + lVar693 + lVar694 + lVar695 +
      lVar696 + lVar697 + lVar698 + lVar699 + lVar700 + lVar701 + lVar702 + lVar703 + lVar704 +
      lVar705 + lVar706 + lVar707 + lVar708 + lVar709 + lVar710 + lVar711 + lVar712 + lVar713 +
      lVar714 + lVar715 + lVar716 + lVar717 + lVar718 + lVar719 + lVar720 + lVar721 + lVar722 +
      lVar723 + lVar724 + lVar725 + lVar726 + lVar727 + lVar728 + lVar729 + lVar730 + lVar731 +
      lVar732 + lVar733 + lVar734 + lVar735 + lVar736 + lVar737 + lVar738 + lVar739 + lVar740 +
      lVar741 + lVar742 + lVar743 + lVar744 + lVar745 + lVar746 + lVar747 + lVar748 + lVar749 +
      lVar750 + lVar751 + lVar752 + lVar753 + lVar754 + lVar755 + lVar756 + lVar757 + lVar758 +
      lVar759 + lVar760 + lVar761 + lVar762 + lVar763 + lVar764 + lVar765 + lVar766 + lVar767 +
      lVar768 + lVar769 + lVar770 + lVar771 + lVar772 + lVar773 + lVar774 + lVar775 + lVar776 +
      lVar777 + lVar778 + lVar779 + lVar780 + lVar781 + lVar782 + lVar783 + lVar784 + lVar785 +
      lVar786 + lVar787 + lVar788 + lVar789 + lVar790 + lVar791 + lVar792 + lVar793 + lVar794 +
      lVar795 + lVar796 + lVar797 + lVar798 + lVar799 + lVar800 + lVar801 + lVar802 + lVar803 +
      lVar804 + lVar805 + lVar806 + lVar807 + lVar808 + lVar809 + lVar810 + lVar811 + lVar812 +
      lVar813 + lVar814 + lVar815 + lVar816 + lVar817 + lVar818 + lVar819 + lVar820 + lVar821 +
      lVar822 + lVar823 + lVar824 + lVar825 + lVar826 + lVar827 + lVar828 + lVar829 + lVar830 +
      lVar831 + lVar832 + lVar833 + lVar834 + lVar835 + lVar836 + lVar837 + lVar838 + lVar839 +
      lVar840 == 0) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  __assert_fail("sum==0","source_extensions_inst__10_vars__no_complex.c",0x69b,
                (char *)&__PRETTY_FUNCTION___4933);
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



// WARNING: Removing unreachable block (ram,0x00402aed)
// WARNING: Removing unreachable block (ram,0x00402af7)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00402b2f)
// WARNING: Removing unreachable block (ram,0x00402b39)

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
  uVar2 = 0x1381;
  while ((uVar2 & 1) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000;
  }
  return CONCAT62(0x5af700311aa8,sVar1) + -0x5af700311aa80000;
}



// WARNING: Removing unreachable block (ram,0x00402d44)

undefined8 inst_0_flags_var_0(void)

{
  ushort uVar1;
  
  uVar1 = 0x7c45;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x8000;
  }
  return 0;
}



long inst_0_values_var_1(void)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0xe9a4;
  while ((uVar2 & 1) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000;
  }
  return CONCAT62(0xf7945e8af24b,sVar1) + 0x86ba1750db4fffe;
}



// WARNING: Removing unreachable block (ram,0x00402f4c)

undefined8 inst_0_flags_var_1(void)

{
  ushort uVar1;
  
  uVar1 = 0xdee4;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x8000;
  }
  return 0;
}



long inst_0_values_var_2(void)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0xbddd;
  while ((uVar2 & 1) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000;
  }
  return CONCAT62(0xc87354e12663,sVar1) + 0x378cab1ed99d0000;
}



// WARNING: Removing unreachable block (ram,0x00403153)

undefined8 inst_0_flags_var_2(void)

{
  ushort uVar1;
  
  uVar1 = 0x13a7;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x8000;
  }
  return 0;
}



long inst_0_values_var_3(void)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0xf0f2;
  while ((uVar2 & 1) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000;
  }
  return CONCAT62(0x45fb01aa92b,sVar1) + -0x45fb01aa92b0001;
}



// WARNING: Removing unreachable block (ram,0x0040335b)

undefined8 inst_0_flags_var_3(void)

{
  ushort uVar1;
  
  uVar1 = 0x4e96;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x8000;
  }
  return 0;
}



long inst_0_values_var_4(void)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0x7eb8;
  while ((uVar2 & 1) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000;
  }
  return CONCAT62(0xb56d271bb577,sVar1) + 0x4a92d8e44a88fffd;
}



// WARNING: Removing unreachable block (ram,0x00403562)

undefined8 inst_0_flags_var_4(void)

{
  ushort uVar1;
  
  uVar1 = 0xc7af;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x8000;
  }
  return 0;
}



long inst_0_values_var_5(void)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0x3095;
  while ((uVar2 & 1) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000;
  }
  return CONCAT62(0xca3eea05d22a,sVar1) + 0x35c115fa2dd60000;
}



// WARNING: Removing unreachable block (ram,0x0040376a)

undefined8 inst_0_flags_var_5(void)

{
  ushort uVar1;
  
  uVar1 = 0xa258;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x8000;
  }
  return 0;
}



long inst_0_values_var_6(void)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0x61a0;
  while ((uVar2 & 1) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000;
  }
  return CONCAT62(0x49a08a6f399a,sVar1) + -0x49a08a6f399a0005;
}



// WARNING: Removing unreachable block (ram,0x00403971)

undefined8 inst_0_flags_var_6(void)

{
  ushort uVar1;
  
  uVar1 = 0x2f07;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x8000;
  }
  return 0;
}



long inst_0_values_var_7(void)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0x2ce5;
  while ((uVar2 & 1) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000;
  }
  return CONCAT62(0x5c030660bc5f,sVar1) + -0x5c030660bc5f0000;
}



// WARNING: Removing unreachable block (ram,0x00403b79)

undefined8 inst_0_flags_var_7(void)

{
  ushort uVar1;
  
  uVar1 = 0xd78;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x8000;
  }
  return 0;
}



long inst_0_values_var_8(void)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0x3199;
  while ((uVar2 & 1) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000;
  }
  return CONCAT62(0x4d41b693ca1,sVar1) + -0x4d41b693ca10000;
}



// WARNING: Removing unreachable block (ram,0x00403d81)

undefined8 inst_0_flags_var_8(void)

{
  ushort uVar1;
  
  uVar1 = 0x8727;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x8000;
  }
  return 0;
}



long inst_0_values_var_9(void)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0x5117;
  while ((uVar2 & 1) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000;
  }
  return CONCAT62(0x948503bdecfc,sVar1) + 0x6b7afc4213040000;
}



// WARNING: Removing unreachable block (ram,0x00403f88)

undefined8 inst_0_flags_var_9(void)

{
  ushort uVar1;
  
  uVar1 = 0x8736;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x8000;
  }
  return 0;
}



undefined8 inst_1_values_var_0(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0x232210d5;
  while ((uVar2 & 1) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x80000000;
  }
  return CONCAT44(0xadfc0dce,iVar1);
}



// WARNING: Removing unreachable block (ram,0x0040418d)

undefined8 inst_1_flags_var_0(void)

{
  uint uVar1;
  
  uVar1 = 0xd1b98c3b;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x80000000;
  }
  return 0;
}



undefined8 inst_1_values_var_1(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0xa98cd731;
  while ((uVar2 & 1) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x80000000;
  }
  return CONCAT44(0x20b753fe,iVar1);
}



// WARNING: Removing unreachable block (ram,0x00404393)

undefined8 inst_1_flags_var_1(void)

{
  uint uVar1;
  
  uVar1 = 0xa7cefdb6;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x80000000;
  }
  return 0;
}



undefined8 inst_1_values_var_2(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0xf97164b1;
  while ((uVar2 & 1) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x80000000;
  }
  return CONCAT44(0x8801e9ab,iVar1);
}



// WARNING: Removing unreachable block (ram,0x00404599)

undefined8 inst_1_flags_var_2(void)

{
  uint uVar1;
  
  uVar1 = 0x901a4ba1;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x80000000;
  }
  return 0;
}



long inst_1_values_var_3(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0xc6719524;
  while ((uVar2 & 1) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x80000000;
  }
  return CONCAT44(0x429c073,iVar1) + -2;
}



// WARNING: Removing unreachable block (ram,0x0040479f)

undefined8 inst_1_flags_var_3(void)

{
  uint uVar1;
  
  uVar1 = 0x14feaac0;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x80000000;
  }
  return 0;
}



undefined8 inst_1_values_var_4(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0x13d26025;
  while ((uVar2 & 1) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x80000000;
  }
  return CONCAT44(0x3e17a6a7,iVar1);
}



// WARNING: Removing unreachable block (ram,0x004049a4)

undefined8 inst_1_flags_var_4(void)

{
  uint uVar1;
  
  uVar1 = 0xc9a6857;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x80000000;
  }
  return 0;
}



undefined8 inst_1_values_var_5(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0x63dc81cd;
  while ((uVar2 & 1) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x80000000;
  }
  return CONCAT44(0x54a9a049,iVar1);
}



// WARNING: Removing unreachable block (ram,0x00404baa)

undefined8 inst_1_flags_var_5(void)

{
  uint uVar1;
  
  uVar1 = 0x5e436e7e;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x80000000;
  }
  return 0;
}



long inst_1_values_var_6(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0xf1aaf00a;
  while ((uVar2 & 1) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x80000000;
  }
  return CONCAT44(0x7b910e1d,iVar1) + -1;
}



// WARNING: Removing unreachable block (ram,0x00404daf)

undefined8 inst_1_flags_var_6(void)

{
  uint uVar1;
  
  uVar1 = 0x4c82e0a3;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x80000000;
  }
  return 0;
}



long inst_1_values_var_7(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0x8936e354;
  while ((uVar2 & 1) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x80000000;
  }
  return CONCAT44(0x99f83a41,iVar1) + -2;
}



// WARNING: Removing unreachable block (ram,0x00404fb5)

undefined8 inst_1_flags_var_7(void)

{
  uint uVar1;
  
  uVar1 = 0x9595bc42;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x80000000;
  }
  return 0;
}



long inst_1_values_var_8(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0xe8039e8c;
  while ((uVar2 & 1) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x80000000;
  }
  return CONCAT44(0xdd202f92,iVar1) + -2;
}



// WARNING: Removing unreachable block (ram,0x004051ba)

undefined8 inst_1_flags_var_8(void)

{
  uint uVar1;
  
  uVar1 = 0xa0f0fdf7;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x80000000;
  }
  return 0;
}



long inst_1_values_var_9(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0xc7f6ef7e;
  while ((uVar2 & 1) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x80000000;
  }
  return CONCAT44(0x548b7dc0,iVar1) + -1;
}



ulong inst_1_flags_var_9(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0xf5832d67;
  while ((uVar2 & 1) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x80000000;
  }
  return (ulong)(iVar1 == 0);
}



long inst_2_values_var_0(void)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  uVar2 = 0x27a2fae710dbcb6f;
  while ((uVar2 & 1) == 0) {
    lVar1 = lVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000000000000000;
  }
  return lVar1;
}



// WARNING: Removing unreachable block (ram,0x004055c4)

undefined8 inst_2_flags_var_0(void)

{
  ulong uVar1;
  
  uVar1 = 0x6d96e803f6b41bee;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x8000000000000000;
  }
  return 0;
}



long inst_2_values_var_1(void)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  uVar2 = 0xb57ae6b5a5fcd600;
  while ((uVar2 & 1) == 0) {
    lVar1 = lVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000000000000000;
  }
  return lVar1 + -9;
}



// WARNING: Removing unreachable block (ram,0x004057ca)

undefined8 inst_2_flags_var_1(void)

{
  ulong uVar1;
  
  uVar1 = 0x40745d0730bf3ab;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x8000000000000000;
  }
  return 0;
}



long inst_2_values_var_2(void)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  uVar2 = 0xf200a3ba8387a820;
  while ((uVar2 & 1) == 0) {
    lVar1 = lVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000000000000000;
  }
  return lVar1 + -5;
}



// WARNING: Removing unreachable block (ram,0x004059d0)

undefined8 inst_2_flags_var_2(void)

{
  ulong uVar1;
  
  uVar1 = 0xbd5451909d33b0f0;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x8000000000000000;
  }
  return 0;
}



long inst_2_values_var_3(void)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  uVar2 = 0x37cbb16d877bf9a1;
  while ((uVar2 & 1) == 0) {
    lVar1 = lVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000000000000000;
  }
  return lVar1;
}



// WARNING: Removing unreachable block (ram,0x00405bd6)

undefined8 inst_2_flags_var_3(void)

{
  ulong uVar1;
  
  uVar1 = 0xec0bce14dc9c73f;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x8000000000000000;
  }
  return 0;
}



long inst_2_values_var_4(void)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  uVar2 = 0x7f477e912622dd2a;
  while ((uVar2 & 1) == 0) {
    lVar1 = lVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000000000000000;
  }
  return lVar1 + -1;
}



// WARNING: Removing unreachable block (ram,0x00405ddc)

undefined8 inst_2_flags_var_4(void)

{
  ulong uVar1;
  
  uVar1 = 0xf5836b15d4f31eef;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x8000000000000000;
  }
  return 0;
}



long inst_2_values_var_5(void)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  uVar2 = 0x68dd2c3e9e626e90;
  while ((uVar2 & 1) == 0) {
    lVar1 = lVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000000000000000;
  }
  return lVar1 + -4;
}



// WARNING: Removing unreachable block (ram,0x00405fe2)

undefined8 inst_2_flags_var_5(void)

{
  ulong uVar1;
  
  uVar1 = 0x6eb1e07edcbc9b92;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x8000000000000000;
  }
  return 0;
}



long inst_2_values_var_6(void)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  uVar2 = 0x5ffccfd26502659;
  while ((uVar2 & 1) == 0) {
    lVar1 = lVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000000000000000;
  }
  return lVar1;
}



// WARNING: Removing unreachable block (ram,0x004061e8)

undefined8 inst_2_flags_var_6(void)

{
  ulong uVar1;
  
  uVar1 = 0x7c7cf29fbd3df244;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x8000000000000000;
  }
  return 0;
}



long inst_2_values_var_7(void)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  uVar2 = 0xcd8a272ef37cf986;
  while ((uVar2 & 1) == 0) {
    lVar1 = lVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000000000000000;
  }
  return lVar1 + -1;
}



// WARNING: Removing unreachable block (ram,0x004063ee)

undefined8 inst_2_flags_var_7(void)

{
  ulong uVar1;
  
  uVar1 = 0x9dabcf001889f7d9;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x8000000000000000;
  }
  return 0;
}



long inst_2_values_var_8(void)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  uVar2 = 0xd7a4b38b6f83c26f;
  while ((uVar2 & 1) == 0) {
    lVar1 = lVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000000000000000;
  }
  return lVar1;
}



ulong inst_2_flags_var_8(void)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  uVar2 = 0x6348d6ece54c736e;
  while ((uVar2 & 1) == 0) {
    lVar1 = lVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000000000000000;
  }
  return (ulong)(lVar1 == 0);
}



long inst_2_values_var_9(void)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  uVar2 = 0x7bca4c27de69c7d4;
  while ((uVar2 & 1) == 0) {
    lVar1 = lVar1 + 1;
    uVar2 = uVar2 >> 1 | 0x8000000000000000;
  }
  return lVar1 + -2;
}



// WARNING: Removing unreachable block (ram,0x004067fa)

undefined8 inst_2_flags_var_9(void)

{
  ulong uVar1;
  
  uVar1 = 0x915d00ee81cc3930;
  while ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1 | 0x8000000000000000;
  }
  return 0;
}



undefined8 inst_3_values_var_0(void)

{
  return 0x69426a7a00000000;
}



// WARNING: Removing unreachable block (ram,0x00406a0d)
// WARNING: Removing unreachable block (ram,0x00406a00)
// WARNING: Removing unreachable block (ram,0x00406a1f)

undefined8 inst_3_flags_var_0(void)

{
  return 0;
}



undefined8 inst_3_values_var_1(void)

{
  return 0xcca0c21400000000;
}



// WARNING: Removing unreachable block (ram,0x00406c23)
// WARNING: Removing unreachable block (ram,0x00406c16)
// WARNING: Removing unreachable block (ram,0x00406c35)

undefined8 inst_3_flags_var_1(void)

{
  return 0;
}



undefined8 inst_3_values_var_2(void)

{
  return 0xa007db900000000;
}



// WARNING: Removing unreachable block (ram,0x00406e2c)
// WARNING: Removing unreachable block (ram,0x00406e39)

undefined8 inst_3_flags_var_2(void)

{
  return 0;
}



undefined8 inst_3_values_var_3(void)

{
  return 0x66fbb88800000000;
}



// WARNING: Removing unreachable block (ram,0x0040704f)
// WARNING: Removing unreachable block (ram,0x00407042)
// WARNING: Removing unreachable block (ram,0x00407061)

undefined8 inst_3_flags_var_3(void)

{
  return 0;
}



undefined8 inst_3_values_var_4(void)

{
  return 0x75f01a6d00000000;
}



// WARNING: Removing unreachable block (ram,0x00407265)
// WARNING: Removing unreachable block (ram,0x00407258)
// WARNING: Removing unreachable block (ram,0x00407277)

undefined8 inst_3_flags_var_4(void)

{
  return 0;
}



undefined8 inst_3_values_var_5(void)

{
  return 0x296f286a00000000;
}



// WARNING: Removing unreachable block (ram,0x0040746e)
// WARNING: Removing unreachable block (ram,0x0040747b)

undefined8 inst_3_flags_var_5(void)

{
  return 0;
}



undefined8 inst_3_values_var_6(void)

{
  return 0x4dc4edf000000000;
}



// WARNING: Removing unreachable block (ram,0x00407691)
// WARNING: Removing unreachable block (ram,0x00407684)
// WARNING: Removing unreachable block (ram,0x004076a3)

undefined8 inst_3_flags_var_6(void)

{
  return 0;
}



undefined8 inst_3_values_var_7(void)

{
  return 0xe313e91700000000;
}



// WARNING: Removing unreachable block (ram,0x004078a7)
// WARNING: Removing unreachable block (ram,0x0040789a)
// WARNING: Removing unreachable block (ram,0x004078b9)

undefined8 inst_3_flags_var_7(void)

{
  return 0;
}



undefined8 inst_3_values_var_8(void)

{
  return 0x76a0a0ae00000000;
}



// WARNING: Removing unreachable block (ram,0x00407abd)
// WARNING: Removing unreachable block (ram,0x00407ab0)
// WARNING: Removing unreachable block (ram,0x00407acf)

undefined8 inst_3_flags_var_8(void)

{
  return 0;
}



undefined8 inst_3_values_var_9(void)

{
  return 0xbe09ace000000000;
}



// WARNING: Removing unreachable block (ram,0x00407cd3)
// WARNING: Removing unreachable block (ram,0x00407cc6)
// WARNING: Removing unreachable block (ram,0x00407ce5)

undefined8 inst_3_flags_var_9(void)

{
  return 0;
}



undefined8 inst_4_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00407ee9)
// WARNING: Removing unreachable block (ram,0x00407edc)
// WARNING: Removing unreachable block (ram,0x00407efb)

undefined8 inst_4_flags_var_0(void)

{
  return 0;
}



undefined8 inst_4_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x004080f2)
// WARNING: Removing unreachable block (ram,0x004080ff)

undefined8 inst_4_flags_var_1(void)

{
  return 0;
}



undefined8 inst_4_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00408315)
// WARNING: Removing unreachable block (ram,0x00408308)
// WARNING: Removing unreachable block (ram,0x00408327)

undefined8 inst_4_flags_var_2(void)

{
  return 0;
}



undefined8 inst_4_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0040852b)
// WARNING: Removing unreachable block (ram,0x0040851e)
// WARNING: Removing unreachable block (ram,0x0040853d)

undefined8 inst_4_flags_var_3(void)

{
  return 0;
}



undefined8 inst_4_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00408734)
// WARNING: Removing unreachable block (ram,0x00408741)

undefined8 inst_4_flags_var_4(void)

{
  return 0;
}



undefined8 inst_4_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00408957)
// WARNING: Removing unreachable block (ram,0x0040894a)
// WARNING: Removing unreachable block (ram,0x00408969)

undefined8 inst_4_flags_var_5(void)

{
  return 0;
}



undefined8 inst_4_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00408b60)
// WARNING: Removing unreachable block (ram,0x00408b6d)

undefined8 inst_4_flags_var_6(void)

{
  return 0;
}



undefined8 inst_4_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00408d83)
// WARNING: Removing unreachable block (ram,0x00408d76)
// WARNING: Removing unreachable block (ram,0x00408d95)

undefined8 inst_4_flags_var_7(void)

{
  return 0;
}



undefined8 inst_4_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00408f99)
// WARNING: Removing unreachable block (ram,0x00408f8c)
// WARNING: Removing unreachable block (ram,0x00408fab)

undefined8 inst_4_flags_var_8(void)

{
  return 0;
}



undefined8 inst_4_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x004091af)
// WARNING: Removing unreachable block (ram,0x004091a2)
// WARNING: Removing unreachable block (ram,0x004091c1)

undefined8 inst_4_flags_var_9(void)

{
  return 0;
}



undefined8 inst_5_values_var_0(void)

{
  return 0x6ebcf62d00000000;
}



// WARNING: Removing unreachable block (ram,0x004093c5)
// WARNING: Removing unreachable block (ram,0x004093d7)

undefined8 inst_5_flags_var_0(void)

{
  return 0;
}



undefined8 inst_5_values_var_1(void)

{
  return 0xdf2fcc1b00000000;
}



// WARNING: Removing unreachable block (ram,0x004095db)
// WARNING: Removing unreachable block (ram,0x004095ed)

undefined8 inst_5_flags_var_1(void)

{
  return 0;
}



undefined8 inst_5_values_var_2(void)

{
  return 0x17f1d2c00000000;
}



// WARNING: Removing unreachable block (ram,0x004097f1)
// WARNING: Removing unreachable block (ram,0x00409803)

undefined8 inst_5_flags_var_2(void)

{
  return 0;
}



undefined8 inst_5_values_var_3(void)

{
  return 0x7081793100000000;
}



// WARNING: Removing unreachable block (ram,0x00409a07)
// WARNING: Removing unreachable block (ram,0x00409a19)

undefined8 inst_5_flags_var_3(void)

{
  return 0;
}



undefined8 inst_5_values_var_4(void)

{
  return 0xf0b8218b00000000;
}



// WARNING: Removing unreachable block (ram,0x00409c1d)
// WARNING: Removing unreachable block (ram,0x00409c2f)

undefined8 inst_5_flags_var_4(void)

{
  return 0;
}



undefined8 inst_5_values_var_5(void)

{
  return 0x67c793c00000000;
}



// WARNING: Removing unreachable block (ram,0x00409e33)
// WARNING: Removing unreachable block (ram,0x00409e45)

undefined8 inst_5_flags_var_5(void)

{
  return 0;
}



undefined8 inst_5_values_var_6(void)

{
  return 0x3cb1423500000000;
}



// WARNING: Removing unreachable block (ram,0x0040a049)
// WARNING: Removing unreachable block (ram,0x0040a05b)

undefined8 inst_5_flags_var_6(void)

{
  return 0;
}



undefined8 inst_5_values_var_7(void)

{
  return 0x53e73ceb00000000;
}



// WARNING: Removing unreachable block (ram,0x0040a25f)
// WARNING: Removing unreachable block (ram,0x0040a271)

undefined8 inst_5_flags_var_7(void)

{
  return 0;
}



undefined8 inst_5_values_var_8(void)

{
  return 0x66860d2800000000;
}



// WARNING: Removing unreachable block (ram,0x0040a475)
// WARNING: Removing unreachable block (ram,0x0040a487)

undefined8 inst_5_flags_var_8(void)

{
  return 0;
}



undefined8 inst_5_values_var_9(void)

{
  return 0xd250758e00000000;
}



// WARNING: Removing unreachable block (ram,0x0040a68b)
// WARNING: Removing unreachable block (ram,0x0040a69d)

undefined8 inst_5_flags_var_9(void)

{
  return 0;
}



undefined8 inst_6_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0040a8a1)
// WARNING: Removing unreachable block (ram,0x0040a8b3)

undefined8 inst_6_flags_var_0(void)

{
  return 0;
}



undefined8 inst_6_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0040aab7)
// WARNING: Removing unreachable block (ram,0x0040aac9)

undefined8 inst_6_flags_var_1(void)

{
  return 0;
}



undefined8 inst_6_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0040accd)
// WARNING: Removing unreachable block (ram,0x0040acdf)

undefined8 inst_6_flags_var_2(void)

{
  return 0;
}



undefined8 inst_6_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0040aee3)
// WARNING: Removing unreachable block (ram,0x0040aef5)

undefined8 inst_6_flags_var_3(void)

{
  return 0;
}



undefined8 inst_6_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0040b0f9)
// WARNING: Removing unreachable block (ram,0x0040b10b)

undefined8 inst_6_flags_var_4(void)

{
  return 0;
}



undefined8 inst_6_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0040b30f)
// WARNING: Removing unreachable block (ram,0x0040b321)

undefined8 inst_6_flags_var_5(void)

{
  return 0;
}



undefined8 inst_6_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0040b525)
// WARNING: Removing unreachable block (ram,0x0040b537)

undefined8 inst_6_flags_var_6(void)

{
  return 0;
}



undefined8 inst_6_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0040b73b)
// WARNING: Removing unreachable block (ram,0x0040b74d)

undefined8 inst_6_flags_var_7(void)

{
  return 0;
}



undefined8 inst_6_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0040b951)
// WARNING: Removing unreachable block (ram,0x0040b963)

undefined8 inst_6_flags_var_8(void)

{
  return 0;
}



undefined8 inst_6_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0040bb67)
// WARNING: Removing unreachable block (ram,0x0040bb79)

undefined8 inst_6_flags_var_9(void)

{
  return 0;
}



undefined8 inst_7_values_var_0(void)

{
  return 0x355856b800000000;
}



// WARNING: Removing unreachable block (ram,0x0040bd7d)
// WARNING: Removing unreachable block (ram,0x0040bd70)
// WARNING: Removing unreachable block (ram,0x0040bd8f)

undefined8 inst_7_flags_var_0(void)

{
  return 0;
}



undefined8 inst_7_values_var_1(void)

{
  return 0xddb4e2c000000000;
}



// WARNING: Removing unreachable block (ram,0x0040bf93)
// WARNING: Removing unreachable block (ram,0x0040bf86)
// WARNING: Removing unreachable block (ram,0x0040bfa5)

undefined8 inst_7_flags_var_1(void)

{
  return 0;
}



undefined8 inst_7_values_var_2(void)

{
  return 0xb7440e0f00000000;
}



// WARNING: Removing unreachable block (ram,0x0040c1a9)
// WARNING: Removing unreachable block (ram,0x0040c19c)
// WARNING: Removing unreachable block (ram,0x0040c1bb)

undefined8 inst_7_flags_var_2(void)

{
  return 0;
}



undefined8 inst_7_values_var_3(void)

{
  return 0x16fa3b2900000000;
}



// WARNING: Removing unreachable block (ram,0x0040c3bf)
// WARNING: Removing unreachable block (ram,0x0040c3b2)
// WARNING: Removing unreachable block (ram,0x0040c3d1)

undefined8 inst_7_flags_var_3(void)

{
  return 0;
}



undefined8 inst_7_values_var_4(void)

{
  return 0x2a57ef9800000000;
}



// WARNING: Removing unreachable block (ram,0x0040c5d5)
// WARNING: Removing unreachable block (ram,0x0040c5c8)
// WARNING: Removing unreachable block (ram,0x0040c5e7)

undefined8 inst_7_flags_var_4(void)

{
  return 0;
}



undefined8 inst_7_values_var_5(void)

{
  return 0xa4956bf200000000;
}



// WARNING: Removing unreachable block (ram,0x0040c7eb)
// WARNING: Removing unreachable block (ram,0x0040c7de)
// WARNING: Removing unreachable block (ram,0x0040c7fd)

undefined8 inst_7_flags_var_5(void)

{
  return 0;
}



undefined8 inst_7_values_var_6(void)

{
  return 0xaf4c506f00000000;
}



// WARNING: Removing unreachable block (ram,0x0040ca01)
// WARNING: Removing unreachable block (ram,0x0040c9f4)
// WARNING: Removing unreachable block (ram,0x0040ca13)

undefined8 inst_7_flags_var_6(void)

{
  return 0;
}



undefined8 inst_7_values_var_7(void)

{
  return 0xd3e27fed00000000;
}



// WARNING: Removing unreachable block (ram,0x0040cc17)
// WARNING: Removing unreachable block (ram,0x0040cc0a)
// WARNING: Removing unreachable block (ram,0x0040cc29)

undefined8 inst_7_flags_var_7(void)

{
  return 0;
}



undefined8 inst_7_values_var_8(void)

{
  return 0x276f032400000000;
}



// WARNING: Removing unreachable block (ram,0x0040ce2d)
// WARNING: Removing unreachable block (ram,0x0040ce20)
// WARNING: Removing unreachable block (ram,0x0040ce3f)

undefined8 inst_7_flags_var_8(void)

{
  return 0;
}



undefined8 inst_7_values_var_9(void)

{
  return 0x25790c2f00000000;
}



// WARNING: Removing unreachable block (ram,0x0040d043)
// WARNING: Removing unreachable block (ram,0x0040d036)
// WARNING: Removing unreachable block (ram,0x0040d055)

undefined8 inst_7_flags_var_9(void)

{
  return 0;
}



undefined8 inst_8_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0040d259)
// WARNING: Removing unreachable block (ram,0x0040d24c)
// WARNING: Removing unreachable block (ram,0x0040d26b)

undefined8 inst_8_flags_var_0(void)

{
  return 0;
}



undefined8 inst_8_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0040d46f)
// WARNING: Removing unreachable block (ram,0x0040d462)
// WARNING: Removing unreachable block (ram,0x0040d481)

undefined8 inst_8_flags_var_1(void)

{
  return 0;
}



undefined8 inst_8_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0040d685)
// WARNING: Removing unreachable block (ram,0x0040d678)
// WARNING: Removing unreachable block (ram,0x0040d697)

undefined8 inst_8_flags_var_2(void)

{
  return 0;
}



undefined8 inst_8_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0040d89b)
// WARNING: Removing unreachable block (ram,0x0040d88e)
// WARNING: Removing unreachable block (ram,0x0040d8ad)

undefined8 inst_8_flags_var_3(void)

{
  return 0;
}



undefined8 inst_8_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0040dab1)
// WARNING: Removing unreachable block (ram,0x0040daa4)
// WARNING: Removing unreachable block (ram,0x0040dac3)

undefined8 inst_8_flags_var_4(void)

{
  return 0;
}



undefined8 inst_8_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0040dcc7)
// WARNING: Removing unreachable block (ram,0x0040dcba)
// WARNING: Removing unreachable block (ram,0x0040dcd9)

undefined8 inst_8_flags_var_5(void)

{
  return 0;
}



undefined8 inst_8_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0040dedd)
// WARNING: Removing unreachable block (ram,0x0040ded0)
// WARNING: Removing unreachable block (ram,0x0040deef)

undefined8 inst_8_flags_var_6(void)

{
  return 0;
}



undefined8 inst_8_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0040e0f3)
// WARNING: Removing unreachable block (ram,0x0040e0e6)
// WARNING: Removing unreachable block (ram,0x0040e105)

undefined8 inst_8_flags_var_7(void)

{
  return 0;
}



undefined8 inst_8_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0040e309)
// WARNING: Removing unreachable block (ram,0x0040e2fc)
// WARNING: Removing unreachable block (ram,0x0040e31b)

undefined8 inst_8_flags_var_8(void)

{
  return 0;
}



undefined8 inst_8_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0040e51f)
// WARNING: Removing unreachable block (ram,0x0040e512)
// WARNING: Removing unreachable block (ram,0x0040e531)

undefined8 inst_8_flags_var_9(void)

{
  return 0;
}



undefined8 inst_9_values_var_0(void)

{
  return 0x1a1a6a3500000000;
}



// WARNING: Removing unreachable block (ram,0x0040e728)
// WARNING: Removing unreachable block (ram,0x0040e735)

undefined8 inst_9_flags_var_0(void)

{
  return 0;
}



undefined8 inst_9_values_var_1(void)

{
  return 0x6de18b0b00000000;
}



// WARNING: Removing unreachable block (ram,0x0040e93e)
// WARNING: Removing unreachable block (ram,0x0040e94b)

undefined8 inst_9_flags_var_1(void)

{
  return 0;
}



undefined8 inst_9_values_var_2(void)

{
  return 0x6c25beff00000000;
}



// WARNING: Removing unreachable block (ram,0x0040eb54)
// WARNING: Removing unreachable block (ram,0x0040eb61)

undefined8 inst_9_flags_var_2(void)

{
  return 0;
}



undefined8 inst_9_values_var_3(void)

{
  return 0xd7eba1c700000000;
}



// WARNING: Removing unreachable block (ram,0x0040ed6a)
// WARNING: Removing unreachable block (ram,0x0040ed77)

undefined8 inst_9_flags_var_3(void)

{
  return 0;
}



undefined8 inst_9_values_var_4(void)

{
  return 0xea2c4c4100000000;
}



// WARNING: Removing unreachable block (ram,0x0040ef8d)
// WARNING: Removing unreachable block (ram,0x0040ef80)
// WARNING: Removing unreachable block (ram,0x0040ef9f)

undefined8 inst_9_flags_var_4(void)

{
  return 0;
}



undefined8 inst_9_values_var_5(void)

{
  return 0x336a3fc800000000;
}



// WARNING: Removing unreachable block (ram,0x0040f1a3)
// WARNING: Removing unreachable block (ram,0x0040f196)
// WARNING: Removing unreachable block (ram,0x0040f1b5)

undefined8 inst_9_flags_var_5(void)

{
  return 0;
}



undefined8 inst_9_values_var_6(void)

{
  return 0xefe2e7eb00000000;
}



// WARNING: Removing unreachable block (ram,0x0040f3ac)
// WARNING: Removing unreachable block (ram,0x0040f3b9)

undefined8 inst_9_flags_var_6(void)

{
  return 0;
}



undefined8 inst_9_values_var_7(void)

{
  return 0xef51e5ac00000000;
}



// WARNING: Removing unreachable block (ram,0x0040f5cf)
// WARNING: Removing unreachable block (ram,0x0040f5c2)
// WARNING: Removing unreachable block (ram,0x0040f5e1)

undefined8 inst_9_flags_var_7(void)

{
  return 0;
}



undefined8 inst_9_values_var_8(void)

{
  return 0xd4cf0c7d00000000;
}



// WARNING: Removing unreachable block (ram,0x0040f7e5)
// WARNING: Removing unreachable block (ram,0x0040f7d8)
// WARNING: Removing unreachable block (ram,0x0040f7f7)

undefined8 inst_9_flags_var_8(void)

{
  return 0;
}



undefined8 inst_9_values_var_9(void)

{
  return 0xd53d47cb00000000;
}



// WARNING: Removing unreachable block (ram,0x0040f9fb)
// WARNING: Removing unreachable block (ram,0x0040f9ee)
// WARNING: Removing unreachable block (ram,0x0040fa0d)

undefined8 inst_9_flags_var_9(void)

{
  return 0;
}



undefined8 inst_10_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0040fc04)
// WARNING: Removing unreachable block (ram,0x0040fc11)

undefined8 inst_10_flags_var_0(void)

{
  return 0;
}



undefined8 inst_10_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0040fe27)
// WARNING: Removing unreachable block (ram,0x0040fe1a)
// WARNING: Removing unreachable block (ram,0x0040fe39)

undefined8 inst_10_flags_var_1(void)

{
  return 0;
}



undefined8 inst_10_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00410030)
// WARNING: Removing unreachable block (ram,0x0041003d)

undefined8 inst_10_flags_var_2(void)

{
  return 0;
}



undefined8 inst_10_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00410246)
// WARNING: Removing unreachable block (ram,0x00410253)

undefined8 inst_10_flags_var_3(void)

{
  return 0;
}



undefined8 inst_10_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0041045c)
// WARNING: Removing unreachable block (ram,0x00410469)

undefined8 inst_10_flags_var_4(void)

{
  return 0;
}



undefined8 inst_10_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0041067f)
// WARNING: Removing unreachable block (ram,0x00410672)
// WARNING: Removing unreachable block (ram,0x00410691)

undefined8 inst_10_flags_var_5(void)

{
  return 0;
}



undefined8 inst_10_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00410895)
// WARNING: Removing unreachable block (ram,0x00410888)
// WARNING: Removing unreachable block (ram,0x004108a7)

undefined8 inst_10_flags_var_6(void)

{
  return 0;
}



undefined8 inst_10_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00410a9e)
// WARNING: Removing unreachable block (ram,0x00410aab)

undefined8 inst_10_flags_var_7(void)

{
  return 0;
}



undefined8 inst_10_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00410cc1)
// WARNING: Removing unreachable block (ram,0x00410cb4)
// WARNING: Removing unreachable block (ram,0x00410cd3)

undefined8 inst_10_flags_var_8(void)

{
  return 0;
}



undefined8 inst_10_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00410ed7)
// WARNING: Removing unreachable block (ram,0x00410eca)
// WARNING: Removing unreachable block (ram,0x00410ee9)

undefined8 inst_10_flags_var_9(void)

{
  return 0;
}



undefined8 inst_11_values_var_0(void)

{
  return 0x824043e00000000;
}



// WARNING: Removing unreachable block (ram,0x004110e0)
// WARNING: Removing unreachable block (ram,0x004110ed)

undefined8 inst_11_flags_var_0(void)

{
  return 0;
}



undefined8 inst_11_values_var_1(void)

{
  return 0x915a630900000000;
}



// WARNING: Removing unreachable block (ram,0x004112ee)
// WARNING: Removing unreachable block (ram,0x004112fb)

undefined8 inst_11_flags_var_1(void)

{
  return 0;
}



undefined8 inst_11_values_var_2(void)

{
  return 0x8a6b234900000000;
}



// WARNING: Removing unreachable block (ram,0x004114fc)
// WARNING: Removing unreachable block (ram,0x00411509)

undefined8 inst_11_flags_var_2(void)

{
  return 0;
}



undefined8 inst_11_values_var_3(void)

{
  return 0xc482201c00000000;
}



// WARNING: Removing unreachable block (ram,0x0041170a)
// WARNING: Removing unreachable block (ram,0x00411717)

undefined8 inst_11_flags_var_3(void)

{
  return 0;
}



undefined8 inst_11_values_var_4(void)

{
  return 0x3494d2f700000000;
}



// WARNING: Removing unreachable block (ram,0x00411918)
// WARNING: Removing unreachable block (ram,0x00411925)

undefined8 inst_11_flags_var_4(void)

{
  return 0;
}



undefined8 inst_11_values_var_5(void)

{
  return 0xf97a590400000000;
}



// WARNING: Removing unreachable block (ram,0x00411b26)
// WARNING: Removing unreachable block (ram,0x00411b33)

undefined8 inst_11_flags_var_5(void)

{
  return 0;
}



undefined8 inst_11_values_var_6(void)

{
  return 0xf609777000000000;
}



// WARNING: Removing unreachable block (ram,0x00411d34)
// WARNING: Removing unreachable block (ram,0x00411d41)

undefined8 inst_11_flags_var_6(void)

{
  return 0;
}



undefined8 inst_11_values_var_7(void)

{
  return 0xa0865f8500000000;
}



// WARNING: Removing unreachable block (ram,0x00411f42)
// WARNING: Removing unreachable block (ram,0x00411f4f)

undefined8 inst_11_flags_var_7(void)

{
  return 0;
}



undefined8 inst_11_values_var_8(void)

{
  return 0x2690a78600000000;
}



// WARNING: Removing unreachable block (ram,0x00412150)
// WARNING: Removing unreachable block (ram,0x0041215d)

undefined8 inst_11_flags_var_8(void)

{
  return 0;
}



undefined8 inst_11_values_var_9(void)

{
  return 0xe347a84f00000000;
}



// WARNING: Removing unreachable block (ram,0x0041235e)
// WARNING: Removing unreachable block (ram,0x0041236b)

undefined8 inst_11_flags_var_9(void)

{
  return 0;
}



undefined8 inst_12_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0041256c)
// WARNING: Removing unreachable block (ram,0x00412579)

undefined8 inst_12_flags_var_0(void)

{
  return 0;
}



undefined8 inst_12_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0041277a)
// WARNING: Removing unreachable block (ram,0x00412787)

undefined8 inst_12_flags_var_1(void)

{
  return 0;
}



undefined8 inst_12_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00412988)
// WARNING: Removing unreachable block (ram,0x00412995)

undefined8 inst_12_flags_var_2(void)

{
  return 0;
}



undefined8 inst_12_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00412b96)
// WARNING: Removing unreachable block (ram,0x00412ba3)

undefined8 inst_12_flags_var_3(void)

{
  return 0;
}



undefined8 inst_12_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00412da4)
// WARNING: Removing unreachable block (ram,0x00412db1)

undefined8 inst_12_flags_var_4(void)

{
  return 0;
}



undefined8 inst_12_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00412fb2)
// WARNING: Removing unreachable block (ram,0x00412fbf)

undefined8 inst_12_flags_var_5(void)

{
  return 0;
}



undefined8 inst_12_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x004131c0)
// WARNING: Removing unreachable block (ram,0x004131cd)

undefined8 inst_12_flags_var_6(void)

{
  return 0;
}



undefined8 inst_12_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x004133ce)
// WARNING: Removing unreachable block (ram,0x004133db)

undefined8 inst_12_flags_var_7(void)

{
  return 0;
}



undefined8 inst_12_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x004135dc)
// WARNING: Removing unreachable block (ram,0x004135e9)

undefined8 inst_12_flags_var_8(void)

{
  return 0;
}



undefined8 inst_12_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x004137ea)
// WARNING: Removing unreachable block (ram,0x004137f7)

undefined8 inst_12_flags_var_9(void)

{
  return 0;
}



undefined8 inst_13_values_var_0(void)

{
  return 0xa64b692300000000;
}



// WARNING: Removing unreachable block (ram,0x00413a05)

undefined8 inst_13_flags_var_0(void)

{
  return 0;
}



undefined8 inst_13_values_var_1(void)

{
  return 0x8d5418a500000000;
}



// WARNING: Removing unreachable block (ram,0x00413c1b)

undefined8 inst_13_flags_var_1(void)

{
  return 0;
}



undefined8 inst_13_values_var_2(void)

{
  return 0x1e86386100000000;
}



// WARNING: Removing unreachable block (ram,0x00413e31)
// WARNING: Removing unreachable block (ram,0x00413e43)

undefined8 inst_13_flags_var_2(void)

{
  return 0;
}



undefined8 inst_13_values_var_3(void)

{
  return 0xd6db088b00000000;
}



// WARNING: Removing unreachable block (ram,0x00414047)
// WARNING: Removing unreachable block (ram,0x00414059)

undefined8 inst_13_flags_var_3(void)

{
  return 0;
}



undefined8 inst_13_values_var_4(void)

{
  return 0xa42c4af900000000;
}



// WARNING: Removing unreachable block (ram,0x0041425d)
// WARNING: Removing unreachable block (ram,0x0041426f)

undefined8 inst_13_flags_var_4(void)

{
  return 0;
}



undefined8 inst_13_values_var_5(void)

{
  return 0x4ec9ffe300000000;
}



// WARNING: Removing unreachable block (ram,0x00414473)
// WARNING: Removing unreachable block (ram,0x00414485)

undefined8 inst_13_flags_var_5(void)

{
  return 0;
}



undefined8 inst_13_values_var_6(void)

{
  return 0xf065074600000000;
}



// WARNING: Removing unreachable block (ram,0x00414689)

undefined8 inst_13_flags_var_6(void)

{
  return 0;
}



undefined8 inst_13_values_var_7(void)

{
  return 0xc6d20f5300000000;
}



// WARNING: Removing unreachable block (ram,0x0041489f)

undefined8 inst_13_flags_var_7(void)

{
  return 0;
}



undefined8 inst_13_values_var_8(void)

{
  return 0x17185d4a00000000;
}



// WARNING: Removing unreachable block (ram,0x00414ab5)
// WARNING: Removing unreachable block (ram,0x00414ac7)

undefined8 inst_13_flags_var_8(void)

{
  return 0;
}



undefined8 inst_13_values_var_9(void)

{
  return 0x288b54d800000000;
}



// WARNING: Removing unreachable block (ram,0x00414ccb)

undefined8 inst_13_flags_var_9(void)

{
  return 0;
}



undefined8 inst_14_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00414ee1)
// WARNING: Removing unreachable block (ram,0x00414ed4)
// WARNING: Removing unreachable block (ram,0x00414ef3)

undefined8 inst_14_flags_var_0(void)

{
  return 0;
}



undefined8 inst_14_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x004150f7)
// WARNING: Removing unreachable block (ram,0x004150ea)
// WARNING: Removing unreachable block (ram,0x00415109)

undefined8 inst_14_flags_var_1(void)

{
  return 0;
}



undefined8 inst_14_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0041530d)
// WARNING: Removing unreachable block (ram,0x00415300)
// WARNING: Removing unreachable block (ram,0x0041531f)

undefined8 inst_14_flags_var_2(void)

{
  return 0;
}



undefined8 inst_14_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00415523)

undefined8 inst_14_flags_var_3(void)

{
  return 0;
}



undefined8 inst_14_values_var_4(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00415739)
// WARNING: Removing unreachable block (ram,0x0041574b)

undefined8 inst_14_flags_var_4(void)

{
  return 0;
}



undefined8 inst_14_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0041594f)
// WARNING: Removing unreachable block (ram,0x00415942)
// WARNING: Removing unreachable block (ram,0x00415961)

undefined8 inst_14_flags_var_5(void)

{
  return 0;
}



undefined8 inst_14_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00415b65)
// WARNING: Removing unreachable block (ram,0x00415b58)
// WARNING: Removing unreachable block (ram,0x00415b77)

undefined8 inst_14_flags_var_6(void)

{
  return 0;
}



undefined8 inst_14_values_var_7(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00415d7b)

undefined8 inst_14_flags_var_7(void)

{
  return 0;
}



undefined8 inst_14_values_var_8(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00415f91)
// WARNING: Removing unreachable block (ram,0x00415f84)
// WARNING: Removing unreachable block (ram,0x00415fa3)

undefined8 inst_14_flags_var_8(void)

{
  return 0;
}



undefined8 inst_14_values_var_9(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x004161a7)

undefined8 inst_14_flags_var_9(void)

{
  return 0;
}



undefined8 inst_15_values_var_0(void)

{
  return 0xa7bc03fc00000000;
}



undefined8 inst_15_flags_var_0(void)

{
  return 0;
}



undefined8 inst_15_values_var_1(void)

{
  return 0x9da7b1d100000000;
}



undefined8 inst_15_flags_var_1(void)

{
  return 0;
}



undefined8 inst_15_values_var_2(void)

{
  return 0xebfb90a600000000;
}



undefined8 inst_15_flags_var_2(void)

{
  return 0;
}



undefined8 inst_15_values_var_3(void)

{
  return 0x601e921700000000;
}



undefined8 inst_15_flags_var_3(void)

{
  return 0;
}



undefined8 inst_15_values_var_4(void)

{
  return 0x53ef24f900000000;
}



undefined8 inst_15_flags_var_4(void)

{
  return 0;
}



undefined8 inst_15_values_var_5(void)

{
  return 0xb713fcc400000000;
}



undefined8 inst_15_flags_var_5(void)

{
  return 0;
}



undefined8 inst_15_values_var_6(void)

{
  return 0x8e6d719b00000000;
}



undefined8 inst_15_flags_var_6(void)

{
  return 0;
}



undefined8 inst_15_values_var_7(void)

{
  return 0xa4bf0e6900000000;
}



undefined8 inst_15_flags_var_7(void)

{
  return 0;
}



undefined8 inst_15_values_var_8(void)

{
  return 0xf0e7b04b00000000;
}



undefined8 inst_15_flags_var_8(void)

{
  return 0;
}



undefined8 inst_15_values_var_9(void)

{
  return 0x2328d9b400000000;
}



undefined8 inst_15_flags_var_9(void)

{
  return 0;
}



long inst_16_values_var_0(void)

{
  return SUB168(ZEXT816(0xbdb4bf99f5d91038) * ZEXT816(0xa2be2b4143e41a0f) >> 0x40,0) +
         -0x78994d735b3aac2f;
}



undefined8 inst_16_flags_var_0(void)

{
  return 0;
}



long inst_16_values_var_1(void)

{
  return SUB168(ZEXT816(0x3673cae1fcd06665) * ZEXT816(0xa006f3054f61603a),0) +
         SUB168(ZEXT816(0x3673cae1fcd06665) * ZEXT816(0xa006f3054f61603a) >> 0x40,0) +
         0x375e77409115d4e6;
}



undefined8 inst_16_flags_var_1(void)

{
  return 0;
}



long inst_16_values_var_2(void)

{
  return SUB168(ZEXT816(0x239da4fb61d3f6d3) * ZEXT816(0x7fd6bea47c3a6dd9) >> 0x40,0) +
         SUB168(ZEXT816(0x239da4fb61d3f6d3) * ZEXT816(0x7fd6bea47c3a6dd9),0) + 0x7ba37a5c310940f3;
}



undefined8 inst_16_flags_var_2(void)

{
  return 0;
}



long inst_16_values_var_3(void)

{
  return SUB168(ZEXT816(0x5703acf9fdce2324) * ZEXT816(0x8354af071ab97247),0) +
         SUB168(ZEXT816(0x5703acf9fdce2324) * ZEXT816(0x8354af071ab97247) >> 0x40,0) +
         -0x2497e216d92b9201;
}



undefined8 inst_16_flags_var_3(void)

{
  return 0;
}



long inst_16_values_var_4(void)

{
  return SUB168(ZEXT816(0xabf182f747dcae83) * ZEXT816(0x71f23ad87a805fa4),0) +
         SUB168(ZEXT816(0xabf182f747dcae83) * ZEXT816(0x71f23ad87a805fa4) >> 0x40,0) +
         0x2cb0033e5029671b;
}



undefined8 inst_16_flags_var_4(void)

{
  return 0;
}



long inst_16_values_var_5(void)

{
  return SUB168(ZEXT816(0xe9626c74240fe315) * ZEXT816(0xd275b6513e15179d),0) +
         SUB168(ZEXT816(0xe9626c74240fe315) * ZEXT816(0xd275b6513e15179d) >> 0x40,0) +
         -0x764c9592225f9dab;
}



undefined8 inst_16_flags_var_5(void)

{
  return 0;
}



long inst_16_values_var_6(void)

{
  return SUB168(ZEXT816(0x778dcb1ecc239fa6) * ZEXT816(0x1e87b9ad2a7f873c),0) +
         SUB168(ZEXT816(0x778dcb1ecc239fa6) * ZEXT816(0x1e87b9ad2a7f873c) >> 0x40,0) +
         -0x25bd03420821f8e;
}



undefined8 inst_16_flags_var_6(void)

{
  return 0;
}



long inst_16_values_var_7(void)

{
  return SUB168(ZEXT816(0x8666da6adf921a78) * ZEXT816(0xff7aca6c8c9a901),0) +
         SUB168(ZEXT816(0x8666da6adf921a78) * ZEXT816(0xff7aca6c8c9a901) >> 0x40,0) +
         -0x25daeee48656419f;
}



undefined8 inst_16_flags_var_7(void)

{
  return 0;
}



long inst_16_values_var_8(void)

{
  return SUB168(ZEXT816(0x5005cd17e32e698d) * ZEXT816(0x9317670d236933f8),0) +
         SUB168(ZEXT816(0x5005cd17e32e698d) * ZEXT816(0x9317670d236933f8) >> 0x40,0) +
         0x19314b7884b2e459;
}



undefined8 inst_16_flags_var_8(void)

{
  return 0;
}



long inst_16_values_var_9(void)

{
  return SUB168(ZEXT816(0x2cc2815a991bc1c4) * ZEXT816(0x39bab3021f62aeba),0) +
         SUB168(ZEXT816(0x2cc2815a991bc1c4) * ZEXT816(0x39bab3021f62aeba) >> 0x40,0) +
         -0x47aa0bee8c449727;
}



undefined8 inst_16_flags_var_9(void)

{
  return 0;
}



long inst_17_values_var_0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0x1b01f20a;
  uVar1 = 1;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x16a07a7a) != 0) {
      uVar2 = uVar2 | (uVar1 & 0x16a07a7a) * (uVar3 & 1);
      uVar3 = uVar3 >> 1;
    }
    uVar1 = uVar1 << 1;
  } while (uVar1 != 0);
  return CONCAT44(0xbe903e0a,uVar2) + -0x16004028;
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



long inst_17_values_var_1(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0xee47d61d;
  uVar1 = 1;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x65b53f6d) != 0) {
      uVar2 = uVar2 | (uVar1 & 0x65b53f6d) * (uVar3 & 1);
      uVar3 = uVar3 >> 1;
    }
    uVar1 = uVar1 << 1;
  } while (uVar1 != 0);
  return CONCAT44(0x7f61eb2b,uVar2) + -0x25a43069;
}



undefined8 inst_17_flags_var_1(void)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    iVar1 = iVar1 << 1;
  } while (iVar1 != 0);
  return 0;
}



long inst_17_values_var_2(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0x4257b098;
  uVar1 = 1;
  uVar2 = 0;
  do {
    if ((uVar1 & 0xe8d57cf3) != 0) {
      uVar2 = uVar2 | (uVar1 & 0xe8d57cf3) * (uVar3 & 1);
      uVar3 = uVar3 >> 1;
    }
    uVar1 = uVar1 << 1;
  } while (uVar1 != 0);
  return CONCAT44(0xf8232c97,uVar2) + -0x68940860;
}



undefined8 inst_17_flags_var_2(void)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    iVar1 = iVar1 << 1;
  } while (iVar1 != 0);
  return 0;
}



long inst_17_values_var_3(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0x7694ba29;
  uVar1 = 1;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x511e922a) != 0) {
      uVar2 = uVar2 | (uVar1 & 0x511e922a) * (uVar3 & 1);
      uVar3 = uVar3 >> 1;
    }
    uVar1 = uVar1 << 1;
  } while (uVar1 != 0);
  return CONCAT44(0x1e8c51a8,uVar2) + -0x50108202;
}



undefined8 inst_17_flags_var_3(void)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    iVar1 = iVar1 << 1;
  } while (iVar1 != 0);
  return 0;
}



long inst_17_values_var_4(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0xe760bf33;
  uVar1 = 1;
  uVar2 = 0;
  do {
    if ((uVar1 & 0xa7b6570e) != 0) {
      uVar2 = uVar2 | (uVar1 & 0xa7b6570e) * (uVar3 & 1);
      uVar3 = uVar3 >> 1;
    }
    uVar1 = uVar1 << 1;
  } while (uVar1 != 0);
  return CONCAT44(0xf2e91fea,uVar2) + -0x5b60606;
}



undefined8 inst_17_flags_var_4(void)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    iVar1 = iVar1 << 1;
  } while (iVar1 != 0);
  return 0;
}



long inst_17_values_var_5(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0xfc338e87;
  uVar1 = 1;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x86c1bdda) != 0) {
      uVar2 = uVar2 | (uVar1 & 0x86c1bdda) * (uVar3 & 1);
      uVar3 = uVar3 >> 1;
    }
    uVar1 = uVar1 << 1;
  } while (uVar1 != 0);
  return CONCAT44(0xd57f867a,uVar2) + -0x8401a81a;
}



undefined8 inst_17_flags_var_5(void)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    iVar1 = iVar1 << 1;
  } while (iVar1 != 0);
  return 0;
}



long inst_17_values_var_6(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0x5741d275;
  uVar1 = 1;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x1cd97acc) != 0) {
      uVar2 = uVar2 | (uVar1 & 0x1cd97acc) * (uVar3 & 1);
      uVar3 = uVar3 >> 1;
    }
    uVar1 = uVar1 << 1;
  } while (uVar1 != 0);
  return CONCAT44(0xa66e2b8,uVar2) + -0x1c411a44;
}



undefined8 inst_17_flags_var_6(void)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    iVar1 = iVar1 << 1;
  } while (iVar1 != 0);
  return 0;
}



long inst_17_values_var_7(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0x906b4942;
  uVar1 = 1;
  uVar2 = 0;
  do {
    if ((uVar1 & 0xf7c4b62e) != 0) {
      uVar2 = uVar2 | (uVar1 & 0xf7c4b62e) * (uVar3 & 1);
      uVar3 = uVar3 >> 1;
    }
    uVar1 = uVar1 << 1;
  } while (uVar1 != 0);
  return CONCAT44(0xa868ea9d,uVar2) + -0x64809004;
}



undefined8 inst_17_flags_var_7(void)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    iVar1 = iVar1 << 1;
  } while (iVar1 != 0);
  return 0;
}



long inst_17_values_var_8(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0x2af8a9d5;
  uVar1 = 1;
  uVar2 = 0;
  do {
    if ((uVar1 & 0xb5618327) != 0) {
      uVar2 = uVar2 | (uVar1 & 0xb5618327) * (uVar3 & 1);
      uVar3 = uVar3 >> 1;
    }
    uVar1 = uVar1 << 1;
  } while (uVar1 != 0);
  return CONCAT44(0x9dc86617,uVar2) + -0x24218105;
}



undefined8 inst_17_flags_var_8(void)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    iVar1 = iVar1 << 1;
  } while (iVar1 != 0);
  return 0;
}



long inst_17_values_var_9(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0x539dc87f;
  uVar1 = 1;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x539dc87f) != 0) {
      uVar2 = uVar2 | (uVar1 & 0x539dc87f) * (uVar3 & 1);
      uVar3 = uVar3 >> 1;
    }
    uVar1 = uVar1 << 1;
  } while (uVar1 != 0);
  return CONCAT44(0xa2bb39fd,uVar2) + -0x4384007f;
}



undefined8 inst_17_flags_var_9(void)

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
  
  uVar1 = 0x3a92df717d46e4c9;
  uVar2 = 1;
  uVar3 = 0;
  do {
    if ((uVar2 & 0x9d6fcf32762f1ea3) != 0) {
      uVar3 = uVar3 | (uVar2 & 0x9d6fcf32762f1ea3) * (uVar1 & 1);
      uVar1 = uVar1 >> 1;
    }
    uVar2 = uVar2 << 1;
  } while (uVar2 != 0);
  return uVar3 + 0x6fb075fda9fbe77f;
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



long inst_18_values_var_1(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = 0x7dfe0a589f08abf6;
  uVar2 = 1;
  uVar3 = 0;
  do {
    if ((uVar2 & 0xac3425d0e9ea211) != 0) {
      uVar3 = uVar3 | (uVar2 & 0xac3425d0e9ea211) * (uVar1 & 1);
      uVar1 = uVar1 >> 1;
    }
    uVar2 = uVar2 << 1;
  } while (uVar2 != 0);
  return uVar3 + 0xf5ffbff6fb617df0;
}



undefined8 inst_18_flags_var_1(void)

{
  long lVar1;
  
  lVar1 = 1;
  do {
    lVar1 = lVar1 << 1;
  } while (lVar1 != 0);
  return 0;
}



long inst_18_values_var_2(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = 0xb250c47e856d3391;
  uVar2 = 1;
  uVar3 = 0;
  do {
    if ((uVar2 & 0x780b865fec80532) != 0) {
      uVar3 = uVar3 | (uVar2 & 0x780b865fec80532) * (uVar1 & 1);
      uVar1 = uVar1 >> 1;
    }
    uVar2 = uVar2 << 1;
  } while (uVar2 != 0);
  return uVar3 + 0xfaff57bb997ffbfe;
}



undefined8 inst_18_flags_var_2(void)

{
  long lVar1;
  
  lVar1 = 1;
  do {
    lVar1 = lVar1 << 1;
  } while (lVar1 != 0);
  return 0;
}



long inst_18_values_var_3(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = 0xcd549b2ec9e6a02a;
  uVar2 = 1;
  uVar3 = 0;
  do {
    if ((uVar2 & 0xcd549b2ec9e6a02a) != 0) {
      uVar3 = uVar3 | (uVar2 & 0xcd549b2ec9e6a02a) * (uVar1 & 1);
      uVar1 = uVar1 >> 1;
    }
    uVar2 = uVar2 << 1;
  } while (uVar2 != 0);
  return uVar3 + 0x7beb6edb7ffddff8;
}



undefined8 inst_18_flags_var_3(void)

{
  long lVar1;
  
  lVar1 = 1;
  do {
    lVar1 = lVar1 << 1;
  } while (lVar1 != 0);
  return 0;
}



long inst_18_values_var_4(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = 0x195415fa3727697d;
  uVar2 = 1;
  uVar3 = 0;
  do {
    if ((uVar2 & 0x90f2b806d5694115) != 0) {
      uVar3 = uVar3 | (uVar2 & 0x90f2b806d5694115) * (uVar1 & 1);
      uVar1 = uVar1 >> 1;
    }
    uVar2 = uVar2 << 1;
  } while (uVar2 != 0);
  return uVar3 + 0x6f6fc7fd6fb6beef;
}



undefined8 inst_18_flags_var_4(void)

{
  long lVar1;
  
  lVar1 = 1;
  do {
    lVar1 = lVar1 << 1;
  } while (lVar1 != 0);
  return 0;
}



long inst_18_values_var_5(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = 0x73c6199582968aca;
  uVar2 = 1;
  uVar3 = 0;
  do {
    if ((uVar2 & 0x3f1e3342162aec94) != 0) {
      uVar3 = uVar3 | (uVar2 & 0x3f1e3342162aec94) * (uVar1 & 1);
      uVar1 = uVar1 >> 1;
    }
    uVar2 = uVar2 << 1;
  } while (uVar2 != 0);
  return uVar3 + 0xfdededbffdf73bf0;
}



undefined8 inst_18_flags_var_5(void)

{
  long lVar1;
  
  lVar1 = 1;
  do {
    lVar1 = lVar1 << 1;
  } while (lVar1 != 0);
  return 0;
}



long inst_18_values_var_6(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = 0x420c4c46c5a81829;
  uVar2 = 1;
  uVar3 = 0;
  do {
    if ((uVar2 & 0xa4a81f71d4384125) != 0) {
      uVar3 = uVar3 | (uVar2 & 0xa4a81f71d4384125) * (uVar1 & 1);
      uVar1 = uVar1 >> 1;
    }
    uVar2 = uVar2 << 1;
  } while (uVar2 != 0);
  return uVar3 + 0x7b77f7fe7ff7feff;
}



undefined8 inst_18_flags_var_6(void)

{
  long lVar1;
  
  lVar1 = 1;
  do {
    lVar1 = lVar1 << 1;
  } while (lVar1 != 0);
  return 0;
}



long inst_18_values_var_7(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = 0x237567b2f13e7c7;
  uVar2 = 1;
  uVar3 = 0;
  do {
    if ((uVar2 & 0x2f56bb1c0bcad207) != 0) {
      uVar3 = uVar3 | (uVar2 & 0x2f56bb1c0bcad207) * (uVar1 & 1);
      uVar1 = uVar1 >> 1;
    }
    uVar2 = uVar2 << 1;
  } while (uVar2 != 0);
  return uVar3 + 0xfaabeee3f7357ff9;
}



undefined8 inst_18_flags_var_7(void)

{
  long lVar1;
  
  lVar1 = 1;
  do {
    lVar1 = lVar1 << 1;
  } while (lVar1 != 0);
  return 0;
}



long inst_18_values_var_8(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = 0xed37f87f580e5c39;
  uVar2 = 1;
  uVar3 = 0;
  do {
    if ((uVar2 & 0xface31e479cbf011) != 0) {
      uVar3 = uVar3 | (uVar2 & 0xface31e479cbf011) * (uVar1 & 1);
      uVar1 = uVar1 >> 1;
    }
    uVar2 = uVar2 << 1;
  } while (uVar2 != 0);
  return uVar3 + 0x2d7fff1fd67f1fff;
}



undefined8 inst_18_flags_var_8(void)

{
  long lVar1;
  
  lVar1 = 1;
  do {
    lVar1 = lVar1 << 1;
  } while (lVar1 != 0);
  return 0;
}



long inst_18_values_var_9(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = 0x564ababb1317f0e1;
  uVar2 = 1;
  uVar3 = 0;
  do {
    if ((uVar2 & 0x564ababb1317f0e1) != 0) {
      uVar3 = uVar3 | (uVar2 & 0x564ababb1317f0e1) * (uVar1 & 1);
      uVar1 = uVar1 >> 1;
    }
    uVar2 = uVar2 << 1;
  } while (uVar2 != 0);
  return uVar3 + 0xbfbf5f64ecff1fff;
}



undefined8 inst_18_flags_var_9(void)

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
    if ((uVar1 & 0x20b2cd8e) != 0) {
      uVar2 = uVar2 << 1 | (uint)((uVar1 & 0x928c80) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return CONCAT44(0x8a252495,uVar2) + -0x1768;
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



long inst_19_values_var_1(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x80000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0xfad1b7c9) != 0) {
      uVar2 = uVar2 << 1 | (uint)((uVar1 & 0x68c09600) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return CONCAT44(0x88d6b704,uVar2) + -0x6b2e0;
}



undefined8 inst_19_flags_var_1(void)

{
  uint uVar1;
  
  uVar1 = 0x80000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return 0;
}



long inst_19_values_var_2(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x80000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x251d5947) != 0) {
      uVar2 = uVar2 << 1 | (uint)((uVar1 & 0x4095807) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return CONCAT44(0x4985d00f,uVar2) + -0x25e7;
}



undefined8 inst_19_flags_var_2(void)

{
  uint uVar1;
  
  uVar1 = 0x80000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return 0;
}



long inst_19_values_var_3(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x80000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x7126cfd1) != 0) {
      uVar2 = uVar2 << 1 | (uint)((uVar1 & 0x224bc0) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return CONCAT44(0x9704920d,uVar2) + -0x15bc;
}



undefined8 inst_19_flags_var_3(void)

{
  uint uVar1;
  
  uVar1 = 0x80000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return 0;
}



long inst_19_values_var_4(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x80000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x2372ea9d) != 0) {
      uVar2 = uVar2 << 1 | (uint)((uVar1 & 0x22528289) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return CONCAT44(0xbeef7d53,uVar2) + -0x1ae35;
}



undefined8 inst_19_flags_var_4(void)

{
  uint uVar1;
  
  uVar1 = 0x80000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return 0;
}



long inst_19_values_var_5(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x80000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0xc8518945) != 0) {
      uVar2 = uVar2 << 1 | (uint)((uVar1 & 0x8500945) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return CONCAT44(0xfd831370,uVar2) + -0x39f;
}



undefined8 inst_19_flags_var_5(void)

{
  uint uVar1;
  
  uVar1 = 0x80000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return 0;
}



long inst_19_values_var_6(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x80000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x582dfb7d) != 0) {
      uVar2 = uVar2 << 1 | (uint)((uVar1 & 0x580db84d) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return CONCAT44(0xafc06807,uVar2) + -0xef727;
}



undefined8 inst_19_flags_var_6(void)

{
  uint uVar1;
  
  uVar1 = 0x80000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return 0;
}



long inst_19_values_var_7(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x80000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0xfa131f35) != 0) {
      uVar2 = uVar2 << 1 | (uint)((uVar1 & 0xf2021301) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return CONCAT44(0x152fa29b,uVar2) + -0x3d531;
}



undefined8 inst_19_flags_var_7(void)

{
  uint uVar1;
  
  uVar1 = 0x80000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return 0;
}



long inst_19_values_var_8(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x80000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0xf87d160d) != 0) {
      uVar2 = uVar2 << 1 | (uint)((uVar1 & 0x10290608) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return CONCAT44(0x4e36b4d6,uVar2) + -0x255c;
}



undefined8 inst_19_flags_var_8(void)

{
  uint uVar1;
  
  uVar1 = 0x80000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return 0;
}



long inst_19_values_var_9(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x80000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0xc64a76a4) != 0) {
      uVar2 = uVar2 << 1 | (uint)((uVar1 & 0x20022a0) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return ((ulong)uVar2 | 0x177fd8f800000000) - 0x84e;
}



undefined8 inst_19_flags_var_9(void)

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
    if ((uVar1 & 0x613e1144091978c7) != 0) {
      uVar2 = uVar2 << 1 | (ulong)((uVar1 & 0x1120104081130c6) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return uVar2 - 0xa56ade;
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



long inst_20_values_var_1(void)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x8000000000000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x66a5ae7970a196ce) != 0) {
      uVar2 = uVar2 << 1 | (ulong)((uVar1 & 0x4a00e5840a19046) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return uVar2 - 0x587b4f8b;
}



undefined8 inst_20_flags_var_1(void)

{
  ulong uVar1;
  
  uVar1 = 0x8000000000000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return 0;
}



long inst_20_values_var_2(void)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x8000000000000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0xafa55c13e7ab6ea1) != 0) {
      uVar2 = uVar2 << 1 | (ulong)((uVar1 & 0x8a05141245084400) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return uVar2 - 0xa8d72a490;
}



undefined8 inst_20_flags_var_2(void)

{
  ulong uVar1;
  
  uVar1 = 0x8000000000000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return 0;
}



long inst_20_values_var_3(void)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x8000000000000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x4cbc28deb02baa66) != 0) {
      uVar2 = uVar2 << 1 | (ulong)((uVar1 & 0x44a4209e90012826) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return uVar2 - 0x5cd7d167;
}



undefined8 inst_20_flags_var_3(void)

{
  ulong uVar1;
  
  uVar1 = 0x8000000000000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return 0;
}



long inst_20_values_var_4(void)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x8000000000000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x529170155708e0a3) != 0) {
      uVar2 = uVar2 << 1 | (ulong)((uVar1 & 0x5011100056002001) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return uVar2 - 0x1991e11;
}



undefined8 inst_20_flags_var_4(void)

{
  ulong uVar1;
  
  uVar1 = 0x8000000000000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return 0;
}



long inst_20_values_var_5(void)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x8000000000000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x9155102648d9b524) != 0) {
      uVar2 = uVar2 << 1 | (ulong)((uVar1 & 0x1100002648499004) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return uVar2 - 0xc1f5d1;
}



undefined8 inst_20_flags_var_5(void)

{
  ulong uVar1;
  
  uVar1 = 0x8000000000000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return 0;
}



long inst_20_values_var_6(void)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x8000000000000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x4789fb352dbdfcbf) != 0) {
      uVar2 = uVar2 << 1 | (ulong)((uVar1 & 0x4089e0200c35c8b9) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return uVar2 - 0x11f84337979;
}



undefined8 inst_20_flags_var_6(void)

{
  ulong uVar1;
  
  uVar1 = 0x8000000000000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return 0;
}



long inst_20_values_var_7(void)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x8000000000000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x1d4c7d747cd46a31) != 0) {
      uVar2 = uVar2 << 1 | (ulong)((uVar1 & 0x114079646cd02001) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return uVar2 - 0x133dddf21;
}



undefined8 inst_20_flags_var_7(void)

{
  ulong uVar1;
  
  uVar1 = 0x8000000000000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return 0;
}



long inst_20_values_var_8(void)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x8000000000000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x7c9c0367d5eb91da) != 0) {
      uVar2 = uVar2 << 1 | (ulong)((uVar1 & 0x4c8400064468000a) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return uVar2 - 0x4e4329c03;
}



undefined8 inst_20_flags_var_8(void)

{
  ulong uVar1;
  
  uVar1 = 0x8000000000000000;
  do {
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return 0;
}



long inst_20_values_var_9(void)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x8000000000000000;
  uVar2 = 0;
  do {
    if ((uVar1 & 0x8798504b2a0281a8) != 0) {
      uVar2 = uVar2 << 1 | (ulong)((uVar1 & 0x82904049220081a0) != 0);
    }
    uVar1 = uVar1 >> 1;
  } while (uVar1 != 0);
  return uVar2 - 0x2b5b5e;
}



undefined8 inst_20_flags_var_9(void)

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
  return 0x2fd7ee4900000000;
}



undefined8 inst_21_flags_var_0(void)

{
  return 0;
}



undefined8 inst_21_values_var_1(void)

{
  return 0x5a822e9600000000;
}



undefined8 inst_21_flags_var_1(void)

{
  return 0;
}



undefined8 inst_21_values_var_2(void)

{
  return 0x340a7e1300000000;
}



undefined8 inst_21_flags_var_2(void)

{
  return 0;
}



undefined8 inst_21_values_var_3(void)

{
  return 0xf643d8b00000000;
}



undefined8 inst_21_flags_var_3(void)

{
  return 0;
}



undefined8 inst_21_values_var_4(void)

{
  return 0x59b1806f00000000;
}



undefined8 inst_21_flags_var_4(void)

{
  return 0;
}



undefined8 inst_21_values_var_5(void)

{
  return 0xf34c8c7000000000;
}



undefined8 inst_21_flags_var_5(void)

{
  return 0;
}



undefined8 inst_21_values_var_6(void)

{
  return 0x719febe000000000;
}



undefined8 inst_21_flags_var_6(void)

{
  return 0;
}



undefined8 inst_21_values_var_7(void)

{
  return 0x64c2d69500000000;
}



undefined8 inst_21_flags_var_7(void)

{
  return 0;
}



undefined8 inst_21_values_var_8(void)

{
  return 0x839f740900000000;
}



undefined8 inst_21_flags_var_8(void)

{
  return 0;
}



undefined8 inst_21_values_var_9(void)

{
  return 0xdd1984ce00000000;
}



undefined8 inst_21_flags_var_9(void)

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



undefined8 inst_22_values_var_1(void)

{
  return 0;
}



undefined8 inst_22_flags_var_1(void)

{
  return 0;
}



undefined8 inst_22_values_var_2(void)

{
  return 0;
}



undefined8 inst_22_flags_var_2(void)

{
  return 0;
}



undefined8 inst_22_values_var_3(void)

{
  return 0;
}



undefined8 inst_22_flags_var_3(void)

{
  return 0;
}



undefined8 inst_22_values_var_4(void)

{
  return 0;
}



undefined8 inst_22_flags_var_4(void)

{
  return 0;
}



undefined8 inst_22_values_var_5(void)

{
  return 0;
}



undefined8 inst_22_flags_var_5(void)

{
  return 0;
}



undefined8 inst_22_values_var_6(void)

{
  return 0;
}



undefined8 inst_22_flags_var_6(void)

{
  return 0;
}



undefined8 inst_22_values_var_7(void)

{
  return 0;
}



undefined8 inst_22_flags_var_7(void)

{
  return 0;
}



undefined8 inst_22_values_var_8(void)

{
  return 0;
}



undefined8 inst_22_flags_var_8(void)

{
  return 0;
}



undefined8 inst_22_values_var_9(void)

{
  return 0;
}



undefined8 inst_22_flags_var_9(void)

{
  return 0;
}



undefined8 inst_23_values_var_0(void)

{
  return 0xa75acd7400000000;
}



undefined8 inst_23_flags_var_0(void)

{
  return 0;
}



undefined8 inst_23_values_var_1(void)

{
  return 0x21c939de00000000;
}



undefined8 inst_23_flags_var_1(void)

{
  return 0;
}



undefined8 inst_23_values_var_2(void)

{
  return 0xb566077300000000;
}



undefined8 inst_23_flags_var_2(void)

{
  return 0;
}



undefined8 inst_23_values_var_3(void)

{
  return 0xf17d80c700000000;
}



undefined8 inst_23_flags_var_3(void)

{
  return 0;
}



undefined8 inst_23_values_var_4(void)

{
  return 0xfc2b8d9100000000;
}



undefined8 inst_23_flags_var_4(void)

{
  return 0;
}



undefined8 inst_23_values_var_5(void)

{
  return 0xf0dd1e9a00000000;
}



undefined8 inst_23_flags_var_5(void)

{
  return 0;
}



undefined8 inst_23_values_var_6(void)

{
  return 0xb5e982ae00000000;
}



undefined8 inst_23_flags_var_6(void)

{
  return 0;
}



undefined8 inst_23_values_var_7(void)

{
  return 0x9861c18b00000000;
}



undefined8 inst_23_flags_var_7(void)

{
  return 0;
}



undefined8 inst_23_values_var_8(void)

{
  return 0xbcb5403200000000;
}



undefined8 inst_23_flags_var_8(void)

{
  return 0;
}



undefined8 inst_23_values_var_9(void)

{
  return 0x1bf99d1400000000;
}



undefined8 inst_23_flags_var_9(void)

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



undefined8 inst_24_values_var_1(void)

{
  return 0;
}



undefined8 inst_24_flags_var_1(void)

{
  return 0;
}



undefined8 inst_24_values_var_2(void)

{
  return 0;
}



undefined8 inst_24_flags_var_2(void)

{
  return 0;
}



undefined8 inst_24_values_var_3(void)

{
  return 0;
}



undefined8 inst_24_flags_var_3(void)

{
  return 0;
}



undefined8 inst_24_values_var_4(void)

{
  return 0;
}



undefined8 inst_24_flags_var_4(void)

{
  return 0;
}



undefined8 inst_24_values_var_5(void)

{
  return 0;
}



undefined8 inst_24_flags_var_5(void)

{
  return 0;
}



undefined8 inst_24_values_var_6(void)

{
  return 0;
}



undefined8 inst_24_flags_var_6(void)

{
  return 0;
}



undefined8 inst_24_values_var_7(void)

{
  return 0;
}



undefined8 inst_24_flags_var_7(void)

{
  return 0;
}



undefined8 inst_24_values_var_8(void)

{
  return 0;
}



undefined8 inst_24_flags_var_8(void)

{
  return 0;
}



undefined8 inst_24_values_var_9(void)

{
  return 0;
}



undefined8 inst_24_flags_var_9(void)

{
  return 0;
}



undefined8 inst_25_values_var_0(void)

{
  return 0x97bf8bb500000000;
}



undefined8 inst_25_flags_var_0(void)

{
  return 0;
}



undefined8 inst_25_values_var_1(void)

{
  return 0x16e5760800000000;
}



undefined8 inst_25_flags_var_1(void)

{
  return 0;
}



undefined8 inst_25_values_var_2(void)

{
  return 0xec57bc3900000000;
}



undefined8 inst_25_flags_var_2(void)

{
  return 0;
}



undefined8 inst_25_values_var_3(void)

{
  return 0x6d7d8b8500000000;
}



undefined8 inst_25_flags_var_3(void)

{
  return 0;
}



undefined8 inst_25_values_var_4(void)

{
  return 0x471941aa00000000;
}



undefined8 inst_25_flags_var_4(void)

{
  return 0;
}



undefined8 inst_25_values_var_5(void)

{
  return 0x3f60f72600000000;
}



undefined8 inst_25_flags_var_5(void)

{
  return 0;
}



undefined8 inst_25_values_var_6(void)

{
  return 0xa4061c3700000000;
}



undefined8 inst_25_flags_var_6(void)

{
  return 0;
}



undefined8 inst_25_values_var_7(void)

{
  return 0x4e87ffc300000000;
}



undefined8 inst_25_flags_var_7(void)

{
  return 0;
}



undefined8 inst_25_values_var_8(void)

{
  return 0x9da140e600000000;
}



undefined8 inst_25_flags_var_8(void)

{
  return 0;
}



undefined8 inst_25_values_var_9(void)

{
  return 0xb95773df00000000;
}



undefined8 inst_25_flags_var_9(void)

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



undefined8 inst_26_values_var_1(void)

{
  return 0;
}



undefined8 inst_26_flags_var_1(void)

{
  return 0;
}



undefined8 inst_26_values_var_2(void)

{
  return 0;
}



undefined8 inst_26_flags_var_2(void)

{
  return 0;
}



undefined8 inst_26_values_var_3(void)

{
  return 0;
}



undefined8 inst_26_flags_var_3(void)

{
  return 0;
}



undefined8 inst_26_values_var_4(void)

{
  return 0;
}



undefined8 inst_26_flags_var_4(void)

{
  return 0;
}



undefined8 inst_26_values_var_5(void)

{
  return 0;
}



undefined8 inst_26_flags_var_5(void)

{
  return 0;
}



undefined8 inst_26_values_var_6(void)

{
  return 0;
}



undefined8 inst_26_flags_var_6(void)

{
  return 0;
}



undefined8 inst_26_values_var_7(void)

{
  return 0;
}



undefined8 inst_26_flags_var_7(void)

{
  return 0;
}



undefined8 inst_26_values_var_8(void)

{
  return 0;
}



undefined8 inst_26_flags_var_8(void)

{
  return 0;
}



undefined8 inst_26_values_var_9(void)

{
  return 0;
}



undefined8 inst_26_flags_var_9(void)

{
  return 0;
}



undefined8 inst_27_values_var_0(void)

{
  return 0x4e001c5c00000000;
}



undefined8 inst_27_flags_var_0(void)

{
  return 0;
}



undefined8 inst_27_values_var_1(void)

{
  return 0xd0b1ff7300000000;
}



undefined8 inst_27_flags_var_1(void)

{
  return 0;
}



undefined8 inst_27_values_var_2(void)

{
  return 0xa754df6f00000000;
}



undefined8 inst_27_flags_var_2(void)

{
  return 0;
}



undefined8 inst_27_values_var_3(void)

{
  return 0x48492bd200000000;
}



undefined8 inst_27_flags_var_3(void)

{
  return 0;
}



undefined8 inst_27_values_var_4(void)

{
  return 0x1668fca700000000;
}



undefined8 inst_27_flags_var_4(void)

{
  return 0;
}



undefined8 inst_27_values_var_5(void)

{
  return 0xccc1a71500000000;
}



undefined8 inst_27_flags_var_5(void)

{
  return 0;
}



undefined8 inst_27_values_var_6(void)

{
  return 0x8dbd4ee100000000;
}



undefined8 inst_27_flags_var_6(void)

{
  return 0;
}



undefined8 inst_27_values_var_7(void)

{
  return 0x1c9694ca00000000;
}



undefined8 inst_27_flags_var_7(void)

{
  return 0;
}



undefined8 inst_27_values_var_8(void)

{
  return 0xca8cc24900000000;
}



undefined8 inst_27_flags_var_8(void)

{
  return 0;
}



undefined8 inst_27_values_var_9(void)

{
  return 0xfe37f2db00000000;
}



undefined8 inst_27_flags_var_9(void)

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



undefined8 inst_28_values_var_1(void)

{
  return 0;
}



undefined8 inst_28_flags_var_1(void)

{
  return 0;
}



undefined8 inst_28_values_var_2(void)

{
  return 0;
}



undefined8 inst_28_flags_var_2(void)

{
  return 0;
}



undefined8 inst_28_values_var_3(void)

{
  return 0;
}



undefined8 inst_28_flags_var_3(void)

{
  return 0;
}



undefined8 inst_28_values_var_4(void)

{
  return 0;
}



undefined8 inst_28_flags_var_4(void)

{
  return 0;
}



undefined8 inst_28_values_var_5(void)

{
  return 0;
}



undefined8 inst_28_flags_var_5(void)

{
  return 0;
}



undefined8 inst_28_values_var_6(void)

{
  return 0;
}



undefined8 inst_28_flags_var_6(void)

{
  return 0;
}



undefined8 inst_28_values_var_7(void)

{
  return 0;
}



undefined8 inst_28_flags_var_7(void)

{
  return 0;
}



undefined8 inst_28_values_var_8(void)

{
  return 0;
}



undefined8 inst_28_flags_var_8(void)

{
  return 0;
}



undefined8 inst_28_values_var_9(void)

{
  return 0;
}



undefined8 inst_28_flags_var_9(void)

{
  return 0;
}



undefined8 inst_29_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00427ac6)

undefined8 inst_29_flags_var_0(void)

{
  return 0;
}



undefined8 inst_29_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00427ccd)

undefined8 inst_29_flags_var_1(void)

{
  return 0;
}



undefined8 inst_29_values_var_2(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x00427ed5)

undefined8 inst_29_flags_var_2(void)

{
  return 0;
}



undefined8 inst_29_values_var_3(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x004280dc)

undefined8 inst_29_flags_var_3(void)

{
  return 0;
}



undefined8 inst_29_values_var_4(void)

{
  return 0;
}



undefined8 inst_29_flags_var_4(void)

{
  return 0;
}



undefined8 inst_29_values_var_5(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x004284eb)

undefined8 inst_29_flags_var_5(void)

{
  return 0;
}



undefined8 inst_29_values_var_6(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x004286f3)

undefined8 inst_29_flags_var_6(void)

{
  return 0;
}



undefined8 inst_29_values_var_7(void)

{
  return 0;
}



undefined8 inst_29_flags_var_7(void)

{
  return 0;
}



undefined8 inst_29_values_var_8(void)

{
  return 0;
}



undefined8 inst_29_flags_var_8(void)

{
  return 0;
}



undefined8 inst_29_values_var_9(void)

{
  return 0;
}



undefined8 inst_29_flags_var_9(void)

{
  return 0;
}



undefined8 inst_30_values_var_0(void)

{
  return 0;
}



undefined8 inst_30_flags_var_0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((char)((unkuint9)0x7824a70cec671df0 + (unkuint9)0x2e32907700cc43b + (unkuint9)0 >> 0x40) !=
      '\0') {
    uVar1 = 2;
  }
  return uVar1;
}



undefined8 inst_30_values_var_1(void)

{
  return 0;
}



long inst_30_flags_var_1(void)

{
  long lVar1;
  
  lVar1 = 0;
  if ((char)((unkuint9)0xf2ae877dc592ebbd + (unkuint9)0x9aa152cbe46e3ada + (unkuint9)0 >> 0x40) !=
      '\0') {
    lVar1 = 2;
  }
  return lVar1 + -2;
}



undefined8 inst_30_values_var_2(void)

{
  return 0;
}



long inst_30_flags_var_2(void)

{
  long lVar1;
  
  lVar1 = 0;
  if ((char)((unkuint9)0x617dd840761548a6 + (unkuint9)0xf34ef49f14dfe7b5 + (unkuint9)0 >> 0x40) !=
      '\0') {
    lVar1 = 2;
  }
  return lVar1 + -2;
}



undefined8 inst_30_values_var_3(void)

{
  return 0;
}



long inst_30_flags_var_3(void)

{
  long lVar1;
  
  lVar1 = 0;
  if ((char)((unkuint9)0xe1f90ca0451a76e + (unkuint9)0xf454730b2fd5b10e + (unkuint9)0 >> 0x40) !=
      '\0') {
    lVar1 = 2;
  }
  return lVar1 + -2;
}



undefined8 inst_30_values_var_4(void)

{
  return 0;
}



long inst_30_flags_var_4(void)

{
  long lVar1;
  
  lVar1 = 0;
  if ((char)((unkuint9)0xec00f2a35b44a21a + (unkuint9)0xa33b1f1d06a7ffb5 + (unkuint9)0 >> 0x40) !=
      '\0') {
    lVar1 = 2;
  }
  return lVar1 + -2;
}



undefined8 inst_30_values_var_5(void)

{
  return 0;
}



long inst_30_flags_var_5(void)

{
  long lVar1;
  
  lVar1 = 0;
  if ((char)((unkuint9)0xee9f15ef3ca7b1aa + (unkuint9)0x9d68808ae060b532 + (unkuint9)0 >> 0x40) !=
      '\0') {
    lVar1 = 2;
  }
  return lVar1 + -2;
}



undefined8 inst_30_values_var_6(void)

{
  return 0;
}



undefined8 inst_30_flags_var_6(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((char)((unkuint9)0x1eb3b978a45b4bf3 + (unkuint9)0x19a341ae8eeeaabb + (unkuint9)0 >> 0x40) !=
      '\0') {
    uVar1 = 2;
  }
  return uVar1;
}



undefined8 inst_30_values_var_7(void)

{
  return 0;
}



undefined8 inst_30_flags_var_7(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((char)((unkuint9)0x4d4f547beceb4c87 + (unkuint9)0x55e6b2e2169add84 + (unkuint9)0 >> 0x40) !=
      '\0') {
    uVar1 = 2;
  }
  return uVar1;
}



undefined8 inst_30_values_var_8(void)

{
  return 0;
}



undefined8 inst_30_flags_var_8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((char)((unkuint9)0x2c4dcdc3f391bc80 + (unkuint9)0x4089b31209efafb1 + (unkuint9)0 >> 0x40) !=
      '\0') {
    uVar1 = 2;
  }
  return uVar1;
}



undefined8 inst_30_values_var_9(void)

{
  return 0;
}



long inst_30_flags_var_9(void)

{
  long lVar1;
  
  lVar1 = 0;
  if ((char)((unkuint9)0xd7fb99f33f3cabb9 + (unkuint9)0xce7f086bb31ef6e0 + (unkuint9)0 >> 0x40) !=
      '\0') {
    lVar1 = 2;
  }
  return lVar1 + -2;
}



undefined8 inst_31_values_var_0(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0042a35d)

undefined8 inst_31_flags_var_0(void)

{
  return 0;
}



undefined8 inst_31_values_var_1(void)

{
  return 0;
}



// WARNING: Removing unreachable block (ram,0x0042a565)

undefined8 inst_31_flags_var_1(void)

{
  return 0;
}



undefined8 inst_31_values_var_2(void)

{
  return 0;
}



undefined8 inst_31_flags_var_2(void)

{
  return 0;
}



undefined8 inst_31_values_var_3(void)

{
  return 0;
}



undefined8 inst_31_flags_var_3(void)

{
  return 0;
}



undefined8 inst_31_values_var_4(void)

{
  return 0;
}



undefined8 inst_31_flags_var_4(void)

{
  return 0;
}



undefined8 inst_31_values_var_5(void)

{
  return 0;
}



undefined8 inst_31_flags_var_5(void)

{
  return 0;
}



undefined8 inst_31_values_var_6(void)

{
  return 0;
}



undefined8 inst_31_flags_var_6(void)

{
  return 0;
}



undefined8 inst_31_values_var_7(void)

{
  return 0;
}



undefined8 inst_31_flags_var_7(void)

{
  return 0;
}



undefined8 inst_31_values_var_8(void)

{
  return 0;
}



undefined8 inst_31_flags_var_8(void)

{
  return 0;
}



undefined8 inst_31_values_var_9(void)

{
  return 0;
}



undefined8 inst_31_flags_var_9(void)

{
  return 0;
}



undefined8 inst_32_values_var_0(void)

{
  return 0;
}



ulong inst_32_flags_var_0(void)

{
  return (ulong)((char)((unkuint9)0xec0e8d4f509919e + (unkuint9)0xc2bef608cef5dc44 + (unkuint9)1 >>
                       0x40) != '\0');
}



undefined8 inst_32_values_var_1(void)

{
  return 0;
}



long inst_32_flags_var_1(void)

{
  return (ulong)((char)((unkuint9)0x89f47d3cd9eadf20 + (unkuint9)0xed92044ac526e623 + (unkuint9)1 >>
                       0x40) != '\0') - 1;
}



undefined8 inst_32_values_var_2(void)

{
  return 0;
}



long inst_32_flags_var_2(void)

{
  return (ulong)((char)((unkuint9)0xefd127bb5074661a + (unkuint9)0x69658c0733ba44d2 + (unkuint9)1 >>
                       0x40) != '\0') - 1;
}



undefined8 inst_32_values_var_3(void)

{
  return 0;
}



ulong inst_32_flags_var_3(void)

{
  return (ulong)((char)((unkuint9)0x4c30641bbd529f95 + (unkuint9)0xa3e0275fe89ba00f + (unkuint9)1 >>
                       0x40) != '\0');
}



undefined8 inst_32_values_var_4(void)

{
  return 0;
}



long inst_32_flags_var_4(void)

{
  return (ulong)((char)((unkuint9)0xd5262d3ada83f1f5 + (unkuint9)0x5d884dcaa8fefcc0 + (unkuint9)1 >>
                       0x40) != '\0') - 1;
}



undefined8 inst_32_values_var_5(void)

{
  return 0;
}



ulong inst_32_flags_var_5(void)

{
  return (ulong)((char)((unkuint9)0x27225914dee0e501 + (unkuint9)0x12668bf6166e0166 + (unkuint9)1 >>
                       0x40) != '\0');
}



undefined8 inst_32_values_var_6(void)

{
  return 0;
}



long inst_32_flags_var_6(void)

{
  return (ulong)((char)((unkuint9)0x2602cb94bcb4b72f + (unkuint9)0xe9c0f990d2c1b356 + (unkuint9)1 >>
                       0x40) != '\0') - 1;
}



undefined8 inst_32_values_var_7(void)

{
  return 0;
}



long inst_32_flags_var_7(void)

{
  return (ulong)((char)((unkuint9)0xc67e4e366535957e + (unkuint9)0x4a1673b98accba27 + (unkuint9)1 >>
                       0x40) != '\0') - 1;
}



undefined8 inst_32_values_var_8(void)

{
  return 0;
}



long inst_32_flags_var_8(void)

{
  return (ulong)((char)((unkuint9)0xe14df1d7e69ac1b8 + (unkuint9)0x4c51ddb052c60cb3 + (unkuint9)1 >>
                       0x40) != '\0') - 1;
}



undefined8 inst_32_values_var_9(void)

{
  return 0;
}



long inst_32_flags_var_9(void)

{
  return (ulong)((char)((unkuint9)0xf5a4615f59fd85c4 + (unkuint9)0xadd6d0505bdd5319 + (unkuint9)1 >>
                       0x40) != '\0') - 1;
}



long inst_33_values_var_0(void)

{
  uint uVar1;
  
  uVar1 = crc32(0xa83fe7d3,0xae);
  return (ulong)uVar1 - 0xce182739;
}



undefined8 inst_33_flags_var_0(void)

{
  crc32(0x5314b81b,0xac);
  return 0;
}



long inst_33_values_var_1(void)

{
  uint uVar1;
  
  uVar1 = crc32(0xe722e7ad,0x96);
  return (ulong)uVar1 - 0xa98dc06d;
}



undefined8 inst_33_flags_var_1(void)

{
  crc32(0x1cb459fb,0xd6);
  return 0;
}



long inst_33_values_var_2(void)

{
  uint uVar1;
  
  uVar1 = crc32(0xcf651cfa,0xbb);
  return (ulong)uVar1 - 0xb3dffba3;
}



undefined8 inst_33_flags_var_2(void)

{
  crc32(0xc3ab50f4,0x80);
  return 0;
}



long inst_33_values_var_3(void)

{
  uint uVar1;
  
  uVar1 = crc32(0xe68c1a87,0x42);
  return (ulong)uVar1 - 0xf69abec2;
}



undefined8 inst_33_flags_var_3(void)

{
  crc32(0xf02362b7,0x2a);
  return 0;
}



long inst_33_values_var_4(void)

{
  uint uVar1;
  
  uVar1 = crc32(0xb22c7a96,0xc1);
  return (ulong)uVar1 - 0x855d9242;
}



undefined8 inst_33_flags_var_4(void)

{
  crc32(0x8a495618,0xd4);
  return 0;
}



long inst_33_values_var_5(void)

{
  uint uVar1;
  
  uVar1 = crc32(0x50a98b09,0xd7);
  return (ulong)uVar1 - 0x7ffbf707;
}



undefined8 inst_33_flags_var_5(void)

{
  crc32(0x16202114,0xff);
  return 0;
}



long inst_33_values_var_6(void)

{
  uint uVar1;
  
  uVar1 = crc32(0x6a30f6dc,0xbe);
  return (ulong)uVar1 - 0x8097d363;
}



undefined8 inst_33_flags_var_6(void)

{
  crc32(0xf57e5e05,0xa2);
  return 0;
}



long inst_33_values_var_7(void)

{
  uint uVar1;
  
  uVar1 = crc32(0x3583a779,0x79);
  return (ulong)uVar1 - 0x3583a7;
}



undefined8 inst_33_flags_var_7(void)

{
  crc32(0xc3bd5dd1,0x9e);
  return 0;
}



long inst_33_values_var_8(void)

{
  uint uVar1;
  
  uVar1 = crc32(0x79c71320,0x20);
  return (ulong)uVar1 - 0x79c713;
}



undefined8 inst_33_flags_var_8(void)

{
  crc32(0xbeec77d,0x10);
  return 0;
}



long inst_33_values_var_9(void)

{
  uint uVar1;
  
  uVar1 = crc32(0x41688fc6,0x9e);
  return (ulong)uVar1 - 0xdbbdea93;
}



undefined8 inst_33_flags_var_9(void)

{
  crc32(0x989979a8,0x32);
  return 0;
}



long inst_34_values_var_0(void)

{
  uint uVar1;
  
  uVar1 = crc32(0x7ecb9ce7,0xe7);
  return (ulong)uVar1 - 0x7ecb9c;
}



undefined8 inst_34_flags_var_0(void)

{
  crc32(0x771dc68c,3);
  return 0;
}



long inst_34_values_var_1(void)

{
  uint uVar1;
  
  uVar1 = crc32(0xa7000081,0x81);
  return (ulong)uVar1 - 0xa70000;
}



undefined8 inst_34_flags_var_1(void)

{
  crc32(0xd718b080,0x6a);
  return 0;
}



long inst_34_values_var_2(void)

{
  uint uVar1;
  
  uVar1 = crc32(0x5eaca4bc,0xc6);
  return (ulong)uVar1 - 0x1a24d091;
}



undefined8 inst_34_flags_var_2(void)

{
  crc32(0x5af83122,0x8f);
  return 0;
}



long inst_34_values_var_3(void)

{
  uint uVar1;
  
  uVar1 = crc32(0xcfff82e3,0xf3);
  return (ulong)uVar1 - 0x109138ed;
}



undefined8 inst_34_flags_var_3(void)

{
  crc32(0x5a31afbb,0x70);
  return 0;
}



long inst_34_values_var_4(void)

{
  uint uVar1;
  
  uVar1 = crc32(0xe9a73f63,0x71);
  return (ulong)uVar1 - 0xf18c10a7;
}



undefined8 inst_34_flags_var_4(void)

{
  crc32(0xa995932d,0x2e);
  return 0;
}



long inst_34_values_var_5(void)

{
  uint uVar1;
  
  uVar1 = crc32(0x4464d1dd,0xa7);
  return (ulong)uVar1 - 0x1a3e18e4;
}



undefined8 inst_34_flags_var_5(void)

{
  crc32(0xf09f8078,0x2d);
  return 0;
}



long inst_34_values_var_6(void)

{
  uint uVar1;
  
  uVar1 = crc32(0x3e715646,0xda);
  return (ulong)uVar1 - 0xdfd54291;
}



undefined8 inst_34_flags_var_6(void)

{
  crc32(0x6706dc6,0x3f);
  return 0;
}



long inst_34_values_var_7(void)

{
  uint uVar1;
  
  uVar1 = crc32(0x1ba524f,0x12);
  return (ulong)uVar1 - 0xee0c2c52;
}



undefined8 inst_34_flags_var_7(void)

{
  crc32(0x8e1f665b,0x7c);
  return 0;
}



long inst_34_values_var_8(void)

{
  uint uVar1;
  
  uVar1 = crc32(0x197922b,0xb4);
  return (ulong)uVar1 - 0xccba57a1;
}



undefined8 inst_34_flags_var_8(void)

{
  crc32(0x26a4b9df,0x25);
  return 0;
}



long inst_34_values_var_9(void)

{
  uint uVar1;
  
  uVar1 = crc32(0x5a4f0562,0xc4);
  return (ulong)uVar1 - 0x84b01d4b;
}



undefined8 inst_34_flags_var_9(void)

{
  crc32(0xe3b5fb14,0x71);
  return 0;
}



long inst_35_values_var_0(void)

{
  uint uVar1;
  
  uVar1 = crc32(0x82ae1d75,0x820f);
  return (ulong)uVar1 - 0xc9b3654c;
}



undefined8 inst_35_flags_var_0(void)

{
  crc32(0x283f5d6a,0x593);
  return 0;
}



long inst_35_values_var_1(void)

{
  uint uVar1;
  
  uVar1 = crc32(0xeb34ddfd,0xf855);
  return (ulong)uVar1 - 0xc10abb5;
}



undefined8 inst_35_flags_var_1(void)

{
  crc32(0x14a7934d,0xd293);
  return 0;
}



long inst_35_values_var_2(void)

{
  uint uVar1;
  
  uVar1 = crc32(0x259d99f7,0xb2fa);
  return (ulong)uVar1 - 0x79083a6b;
}



undefined8 inst_35_flags_var_2(void)

{
  crc32(0xf68a1aff,0x178f);
  return 0;
}



long inst_35_values_var_3(void)

{
  uint uVar1;
  
  uVar1 = crc32(0xac38f71,0x87bf);
  return (ulong)uVar1 - 0x7ad6fc7b;
}



undefined8 inst_35_flags_var_3(void)

{
  crc32(0xa2820da3,0xee26);
  return 0;
}



long inst_35_values_var_4(void)

{
  uint uVar1;
  
  uVar1 = crc32(0xcf032cd9,0xa541);
  return (ulong)uVar1 - 0xa356e777;
}



undefined8 inst_35_flags_var_4(void)

{
  crc32(0x3bd34260,0xe568);
  return 0;
}



long inst_35_values_var_5(void)

{
  uint uVar1;
  
  uVar1 = crc32(0xb6b8740e,0xac32);
  return (ulong)uVar1 - 0xcadabf3b;
}



undefined8 inst_35_flags_var_5(void)

{
  crc32(0xc262c7fe,0xff20);
  return 0;
}



long inst_35_values_var_6(void)

{
  uint uVar1;
  
  uVar1 = crc32(0x224d783b,0xde3b);
  return (ulong)uVar1 - 0x84ea7003;
}



undefined8 inst_35_flags_var_6(void)

{
  crc32(0xfa645aca,0xeee0);
  return 0;
}



long inst_35_values_var_7(void)

{
  uint uVar1;
  
  uVar1 = crc32(0x31e3437f,0x991b);
  return (ulong)uVar1 - 0x7627bcaa;
}



undefined8 inst_35_flags_var_7(void)

{
  crc32(0x25d78da,0x319f);
  return 0;
}



long inst_35_values_var_8(void)

{
  uint uVar1;
  
  uVar1 = crc32(0xa09ad970,0xfb5e);
  return (ulong)uVar1 - 0x4ad62f3b;
}



undefined8 inst_35_flags_var_8(void)

{
  crc32(0x60336ac1,0x5e58);
  return 0;
}



long inst_35_values_var_9(void)

{
  uint uVar1;
  
  uVar1 = crc32(0x5eefa784,0xc229);
  return (ulong)uVar1 - 0x1043fa79;
}



undefined8 inst_35_flags_var_9(void)

{
  crc32(0x3589f821,0xccb0);
  return 0;
}



long inst_36_values_var_0(void)

{
  uint uVar1;
  
  uVar1 = crc32(0x571b5613,0x19fa34cc);
  return (ulong)uVar1 - 0x1396301a;
}



undefined8 inst_36_flags_var_0(void)

{
  crc32(0x594d0554,0x1887553d);
  return 0;
}



long inst_36_values_var_1(void)

{
  uint uVar1;
  
  uVar1 = crc32(0xde0b5499,0x269ee3f4);
  return (ulong)uVar1 - 0xa208e31c;
}



undefined8 inst_36_flags_var_1(void)

{
  crc32(0x63e02fe7,0x40a2606b);
  return 0;
}



long inst_36_values_var_2(void)

{
  uint uVar1;
  
  uVar1 = crc32(0x3ff1f77,0x95896369);
  return (ulong)uVar1 - 0x49f6c27b;
}



undefined8 inst_36_flags_var_2(void)

{
  crc32(0x84947c29,0xcf0d9395);
  return 0;
}



ulong inst_36_values_var_3(void)

{
  uint uVar1;
  
  uVar1 = crc32(0x25f6398a,0x25f6398a);
  return (ulong)uVar1;
}



undefined8 inst_36_flags_var_3(void)

{
  crc32(0x372222f9,0x906a02e8);
  return 0;
}



long inst_36_values_var_4(void)

{
  uint uVar1;
  
  uVar1 = crc32(0xfb285b9b,0x244371b0);
  return (ulong)uVar1 - 0x7196fa20;
}



undefined8 inst_36_flags_var_4(void)

{
  crc32(0xa1d7cfa,0xf3ff7c03);
  return 0;
}



long inst_36_values_var_5(void)

{
  uint uVar1;
  
  uVar1 = crc32(0x6030635a,0x90e79c1b);
  return (ulong)uVar1 - 0x55f4b5bb;
}



undefined8 inst_36_flags_var_5(void)

{
  crc32(0xa6c0773f,0x9c01660f);
  return 0;
}



long inst_36_values_var_6(void)

{
  uint uVar1;
  
  uVar1 = crc32(0xf47e8b3a,0x21b81bcf);
  return (ulong)uVar1 - 0x119c3a94;
}



undefined8 inst_36_flags_var_6(void)

{
  crc32(0xa99e7298,0xbb27f3c);
  return 0;
}



long inst_36_values_var_7(void)

{
  uint uVar1;
  
  uVar1 = crc32(0xadd774c6,0xeffd7277);
  return (ulong)uVar1 - 0x58f4d39;
}



undefined8 inst_36_flags_var_7(void)

{
  crc32(0x7ceeba0b,0xd723834c);
  return 0;
}



long inst_36_values_var_8(void)

{
  uint uVar1;
  
  uVar1 = crc32(0x870880e1,0x11937d8d);
  return (ulong)uVar1 - 0xf6731b7a;
}



undefined8 inst_36_flags_var_8(void)

{
  crc32(0x1eaa12d5,0xb2a67ef7);
  return 0;
}



long inst_36_values_var_9(void)

{
  uint uVar1;
  
  uVar1 = crc32(0xbc0dcd05,0xd0f4e2d8);
  return (ulong)uVar1 - 0xb0d57f3;
}



undefined8 inst_36_flags_var_9(void)

{
  crc32(0x83c02be2,0x83c02be2);
  return 0;
}



long inst_37_values_var_0(void)

{
  long lVar1;
  
  lVar1 = crc32(0x993c71321fbd08c4,0xef);
  return lVar1 + -0xb92b98ed;
}



undefined8 inst_37_flags_var_0(void)

{
  crc32(0xa21eb9dae96039cb,0x5a);
  return 0;
}



long inst_37_values_var_1(void)

{
  long lVar1;
  
  lVar1 = crc32(0x9edfc3d2de246457,0xb3);
  return lVar1 + -0x24741b61;
}



undefined8 inst_37_flags_var_1(void)

{
  crc32(0xdbc916087a5766ea,4);
  return 0;
}



long inst_37_values_var_2(void)

{
  long lVar1;
  
  lVar1 = crc32(0x8b853a1986ac650d,0xad);
  return lVar1 + -0xa2cd19c3;
}



undefined8 inst_37_flags_var_2(void)

{
  crc32(0xd7d7271734183d22,0x4f);
  return 0;
}



long inst_37_values_var_3(void)

{
  long lVar1;
  
  lVar1 = crc32(0x22fba2619019d05a,0x5a);
  return lVar1 + -0x9019d0;
}



undefined8 inst_37_flags_var_3(void)

{
  crc32(0xfa07b7bffb0caa52,0xc);
  return 0;
}



long inst_37_values_var_4(void)

{
  long lVar1;
  
  lVar1 = crc32(0xa278954b086170be,0xbe);
  return lVar1 + -0x86170;
}



undefined8 inst_37_flags_var_4(void)

{
  crc32(0x783b2a6007fd3176,0x92);
  return 0;
}



long inst_37_values_var_5(void)

{
  long lVar1;
  
  lVar1 = crc32(0x8eb651b690bdd662,0x91);
  return lVar1 + -0xe0ae2157;
}



undefined8 inst_37_flags_var_5(void)

{
  crc32(0x9015bccce2f63cb0,0xd);
  return 0;
}



long inst_37_values_var_6(void)

{
  long lVar1;
  
  lVar1 = crc32(0x9804dcca97277c45,0x86);
  return lVar1 + -0xd04af24c;
}



undefined8 inst_37_flags_var_6(void)

{
  crc32(0x687913faa6b66ebc,0xd4);
  return 0;
}



long inst_37_values_var_7(void)

{
  long lVar1;
  
  lVar1 = crc32(0x2c5bfaab00553edd,0x3f);
  return lVar1 + -0x20b8dd3;
}



undefined8 inst_37_flags_var_7(void)

{
  crc32(0xa926af1bad013a18,99);
  return 0;
}



long inst_37_values_var_8(void)

{
  long lVar1;
  
  lVar1 = crc32(0xa2ccae183b821ffa,0xbb);
  return lVar1 + -0xb32b1ca0;
}



undefined8 inst_37_flags_var_8(void)

{
  crc32(0x483b93caa1b970f9,199);
  return 0;
}



long inst_37_values_var_9(void)

{
  long lVar1;
  
  lVar1 = crc32(0xad500ed6ad02a37d,0x2b);
  return lVar1 + -0x77293f98;
}



undefined8 inst_37_flags_var_9(void)

{
  crc32(0x6d61f4536b5ed270,0x28);
  return 0;
}



long inst_38_values_var_0(void)

{
  long lVar1;
  
  lVar1 = crc32(0x615a7b37140f44cb,0x82febe27d19e6dc7);
  return lVar1 + -0x244834bb;
}



undefined8 inst_38_flags_var_0(void)

{
  crc32(0xd7b402e023aed321,0x1001e333ac4fe425);
  return 0;
}



long inst_38_values_var_1(void)

{
  long lVar1;
  
  lVar1 = crc32(0x5ad7e0498f7b6d4e,0x90d17bc2318ffefd);
  return lVar1 + -0x85ac8ec6;
}



undefined8 inst_38_flags_var_1(void)

{
  crc32(0x7fdffb2b9df05263,0xe36fd7c53c051caa);
  return 0;
}



long inst_38_values_var_2(void)

{
  long lVar1;
  
  lVar1 = crc32(0x68e8ecd191f6b7f9,0xc02d508791b72886);
  return lVar1 + -0x70805cc8;
}



undefined8 inst_38_flags_var_2(void)

{
  crc32(0x20a205a5b3cbee05,0x3c9226ab322b6943);
  return 0;
}



long inst_38_values_var_3(void)

{
  long lVar1;
  
  lVar1 = crc32(0xa1805758c60a1995,0xf22518831911be8b);
  return lVar1 + -0xc70976e0;
}



undefined8 inst_38_flags_var_3(void)

{
  crc32(0xef8bcff2ea728876,0x5984c55d96409453);
  return 0;
}



long inst_38_values_var_4(void)

{
  long lVar1;
  
  lVar1 = crc32(0x2e5df395ce7e74e3,0x35c25e728599b988);
  return lVar1 + -0x7bf85ae5;
}



undefined8 inst_38_flags_var_4(void)

{
  crc32(0x30d79fbf020b3ef3,0x32f922bae0c6d118);
  return 0;
}



long inst_38_values_var_5(void)

{
  long lVar1;
  
  lVar1 = crc32(0xb55613fa5ca1dcde,0x3ed5c3b0a691128b);
  return lVar1 + -0x4fae557d;
}



undefined8 inst_38_flags_var_5(void)

{
  crc32(0x2be0d3e8441d87da,0x9dff5b6932569d1e);
  return 0;
}



long inst_38_values_var_6(void)

{
  long lVar1;
  
  lVar1 = crc32(0xefdfd26bb11e48b,0x6ef93d0d377c238f);
  return lVar1 + -0x8b0b7d66;
}



undefined8 inst_38_flags_var_6(void)

{
  crc32(0xfdcbfe03236cba36,0xfd742862da198ee5);
  return 0;
}



long inst_38_values_var_7(void)

{
  long lVar1;
  
  lVar1 = crc32(0x90922b2ef64f166,0x82cf70c586873599);
  return lVar1 + -0xce65000f;
}



undefined8 inst_38_flags_var_7(void)

{
  crc32(0x1b83a43e12253ca2,0x1b83a43e12253ca2);
  return 0;
}



long inst_38_values_var_8(void)

{
  long lVar1;
  
  lVar1 = crc32(0xc38a2be59c5c60be,0xf0172507cc5a8b17);
  return lVar1 + -0xd2bb36fa;
}



undefined8 inst_38_flags_var_8(void)

{
  crc32(0xca0c3d4bc485c614,0xcaf5697ee070afa7);
  return 0;
}



long inst_38_values_var_9(void)

{
  long lVar1;
  
  lVar1 = crc32(0x680d68386756b0a2,0x8c7fc198004f8a3d);
  return lVar1 + -0xcf9d8581;
}



undefined8 inst_38_flags_var_9(void)

{
  crc32(0x9d94e480d4669349,0xfa1ac712a6a49c7f);
  return 0;
}



long inst_39_values_var_0(void)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0x95f8;
  while ((uVar2 & 0x8000) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT62(0x2ee4a3eb22fe,sVar1) + -0x2ee4a3eb22fe0000;
}



undefined8 inst_39_flags_var_0(void)

{
  ushort uVar1;
  
  uVar1 = 0xb93c;
  while ((uVar1 & 0x8000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return 0;
}



long inst_39_values_var_1(void)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0x51b0;
  while ((uVar2 & 0x8000) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT62(0x1c5e0405e9e0,sVar1) + -0x1c5e0405e9e00001;
}



undefined8 inst_39_flags_var_1(void)

{
  ushort uVar1;
  
  uVar1 = 0xbbd0;
  while ((uVar1 & 0x8000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return 0;
}



long inst_39_values_var_2(void)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0x1f86;
  while ((uVar2 & 0x8000) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT62(0xeef6677e008c,sVar1) + 0x11099881ff73fffd;
}



undefined8 inst_39_flags_var_2(void)

{
  ushort uVar1;
  
  uVar1 = 0x5d41;
  while ((uVar1 & 0x8000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return 0;
}



long inst_39_values_var_3(void)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0xa5df;
  while ((uVar2 & 0x8000) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT62(0xa577979bffc2,sVar1) + 0x5a886864003e0000;
}



undefined8 inst_39_flags_var_3(void)

{
  ushort uVar1;
  
  uVar1 = 0x82d9;
  while ((uVar1 & 0x8000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return 0;
}



long inst_39_values_var_4(void)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0x9a61;
  while ((uVar2 & 0x8000) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT62(0xa6c06ff67512,sVar1) + 0x593f90098aee0000;
}



undefined8 inst_39_flags_var_4(void)

{
  ushort uVar1;
  
  uVar1 = 0x7ca0;
  while ((uVar1 & 0x8000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return 0;
}



long inst_39_values_var_5(void)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0xbffd;
  while ((uVar2 & 0x8000) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT62(0xf92e68749a6d,sVar1) + 0x6d1978b65930000;
}



undefined8 inst_39_flags_var_5(void)

{
  ushort uVar1;
  
  uVar1 = 0x98de;
  while ((uVar1 & 0x8000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return 0;
}



long inst_39_values_var_6(void)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = 0;
  uVar2 = 0x9cce;
  while ((uVar2 & 0x8000) == 0) {
    uVar1 = uVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return ((ulong)uVar1 | 0x8424b514ac070000) + 0x7bdb4aeb53f90000;
}



undefined8 inst_39_flags_var_6(void)

{
  ushort uVar1;
  
  uVar1 = 0x47f0;
  while ((uVar1 & 0x8000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return 0;
}



long inst_39_values_var_7(void)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0x825d;
  while ((uVar2 & 0x8000) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT62(0x37de0994b433,sVar1) + -0x37de0994b4330000;
}



undefined8 inst_39_flags_var_7(void)

{
  ushort uVar1;
  
  uVar1 = 0xa672;
  while ((uVar1 & 0x8000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return 0;
}



long inst_39_values_var_8(void)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0x5195;
  while ((uVar2 & 0x8000) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT62(0x18440ca8bbb0,sVar1) + -0x18440ca8bbb00001;
}



undefined8 inst_39_flags_var_8(void)

{
  ushort uVar1;
  
  uVar1 = 0x6f24;
  while ((uVar1 & 0x8000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return 0;
}



long inst_39_values_var_9(void)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = 0;
  uVar2 = 0x10d3;
  while ((uVar2 & 0x8000) == 0) {
    sVar1 = sVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT62(0xb2e21f313463,sVar1) + 0x4d1de0cecb9cfffd;
}



undefined8 inst_39_flags_var_9(void)

{
  ushort uVar1;
  
  uVar1 = 0x7af9;
  while ((uVar1 & 0x8000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return 0;
}



undefined8 inst_40_values_var_0(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0x8d8d1fdb;
  while ((uVar2 & 0x80000000) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT44(0x568e3b47,iVar1);
}



undefined8 inst_40_flags_var_0(void)

{
  uint uVar1;
  
  uVar1 = 0x2bd2ac23;
  while ((uVar1 & 0x80000000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return 0;
}



long inst_40_values_var_1(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0x46477870;
  while ((uVar2 & 0x80000000) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT44(0x80b3fbb6,iVar1) + -1;
}



undefined8 inst_40_flags_var_1(void)

{
  uint uVar1;
  
  uVar1 = 0xb1188c54;
  while ((uVar1 & 0x80000000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return 0;
}



undefined8 inst_40_values_var_2(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0xe1893c03;
  while ((uVar2 & 0x80000000) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT44(0x2a8a0f65,iVar1);
}



undefined8 inst_40_flags_var_2(void)

{
  uint uVar1;
  
  uVar1 = 0xffce5427;
  while ((uVar1 & 0x80000000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return 0;
}



long inst_40_values_var_3(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0x51adfe19;
  while ((uVar2 & 0x80000000) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT44(0x9e4083c4,iVar1) + -1;
}



undefined8 inst_40_flags_var_3(void)

{
  uint uVar1;
  
  uVar1 = 0xe86df95e;
  while ((uVar1 & 0x80000000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return 0;
}



ulong inst_40_values_var_4(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  uVar2 = 0x96d5e710;
  while ((uVar2 & 0x80000000) == 0) {
    uVar1 = uVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return (ulong)uVar1 | 0x2306488200000000;
}



undefined8 inst_40_flags_var_4(void)

{
  uint uVar1;
  
  uVar1 = 0x8dbda7ac;
  while ((uVar1 & 0x80000000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return 0;
}



long inst_40_values_var_5(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0x2a904f50;
  while ((uVar2 & 0x80000000) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT44(0xb355f288,iVar1) + -2;
}



undefined8 inst_40_flags_var_5(void)

{
  uint uVar1;
  
  uVar1 = 0xb8528357;
  while ((uVar1 & 0x80000000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return 0;
}



undefined8 inst_40_values_var_6(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0x835ee6a2;
  while ((uVar2 & 0x80000000) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT44(0xaa45ef5c,iVar1);
}



undefined8 inst_40_flags_var_6(void)

{
  uint uVar1;
  
  uVar1 = 0x4866596;
  while ((uVar1 & 0x80000000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return 0;
}



long inst_40_values_var_7(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0x724a283d;
  while ((uVar2 & 0x80000000) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT44(0xbd5e85b3,iVar1) + -1;
}



undefined8 inst_40_flags_var_7(void)

{
  uint uVar1;
  
  uVar1 = 0x5356be6b;
  while ((uVar1 & 0x80000000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return 0;
}



undefined8 inst_40_values_var_8(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0xb9b5aec5;
  while ((uVar2 & 0x80000000) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT44(0x3b858ba6,iVar1);
}



undefined8 inst_40_flags_var_8(void)

{
  uint uVar1;
  
  uVar1 = 0x550ee758;
  while ((uVar1 & 0x80000000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return 0;
}



undefined8 inst_40_values_var_9(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0xe415abc7;
  while ((uVar2 & 0x80000000) == 0) {
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return CONCAT44(0x46ccc5c4,iVar1);
}



undefined8 inst_40_flags_var_9(void)

{
  uint uVar1;
  
  uVar1 = 0x149f2734;
  while ((uVar1 & 0x80000000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return 0;
}



long inst_41_values_var_0(void)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  uVar2 = 0x3da8a05aaa3014ce;
  while ((uVar2 & 0x8000000000000000) == 0) {
    lVar1 = lVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return lVar1 + -2;
}



undefined8 inst_41_flags_var_0(void)

{
  ulong uVar1;
  
  uVar1 = 0x1478bc2cbae07dfd;
  while ((uVar1 & 0x8000000000000000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return 0;
}



long inst_41_values_var_1(void)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  uVar2 = 0x4f579e733c3eee0f;
  while ((uVar2 & 0x8000000000000000) == 0) {
    lVar1 = lVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return lVar1 + -1;
}



undefined8 inst_41_flags_var_1(void)

{
  ulong uVar1;
  
  uVar1 = 0x40bfbde240f0df9a;
  while ((uVar1 & 0x8000000000000000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return 0;
}



long inst_41_values_var_2(void)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  uVar2 = 0x328083f0ad1fdebb;
  while ((uVar2 & 0x8000000000000000) == 0) {
    lVar1 = lVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return lVar1 + -2;
}



undefined8 inst_41_flags_var_2(void)

{
  ulong uVar1;
  
  uVar1 = 0x1fe0d0cb4285ea4d;
  while ((uVar1 & 0x8000000000000000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return 0;
}



long inst_41_values_var_3(void)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  uVar2 = 0x9803296bdc835ecb;
  while ((uVar2 & 0x8000000000000000) == 0) {
    lVar1 = lVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return lVar1;
}



undefined8 inst_41_flags_var_3(void)

{
  ulong uVar1;
  
  uVar1 = 0xfce3197edfa20fa1;
  while ((uVar1 & 0x8000000000000000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return 0;
}



long inst_41_values_var_4(void)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  uVar2 = 0xdfaf9c6d5b2ad506;
  while ((uVar2 & 0x8000000000000000) == 0) {
    lVar1 = lVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return lVar1;
}



undefined8 inst_41_flags_var_4(void)

{
  ulong uVar1;
  
  uVar1 = 0x7c20016d536b4bd2;
  while ((uVar1 & 0x8000000000000000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return 0;
}



long inst_41_values_var_5(void)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  uVar2 = 0x12a78115df21d2cd;
  while ((uVar2 & 0x8000000000000000) == 0) {
    lVar1 = lVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return lVar1 + -3;
}



undefined8 inst_41_flags_var_5(void)

{
  ulong uVar1;
  
  uVar1 = 0xfa73084c4400546d;
  while ((uVar1 & 0x8000000000000000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return 0;
}



long inst_41_values_var_6(void)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  uVar2 = 0x2d7ab015ad3deddc;
  while ((uVar2 & 0x8000000000000000) == 0) {
    lVar1 = lVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return lVar1 + -2;
}



undefined8 inst_41_flags_var_6(void)

{
  ulong uVar1;
  
  uVar1 = 0xfcfbfeff5f6a1cd8;
  while ((uVar1 & 0x8000000000000000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return 0;
}



long inst_41_values_var_7(void)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  uVar2 = 0xe8d8929e5bd8d0b;
  while ((uVar2 & 0x8000000000000000) == 0) {
    lVar1 = lVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return lVar1 + -4;
}



undefined8 inst_41_flags_var_7(void)

{
  ulong uVar1;
  
  uVar1 = 0x37de199c012597a1;
  while ((uVar1 & 0x8000000000000000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return 0;
}



long inst_41_values_var_8(void)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  uVar2 = 0x5298500a601efdc9;
  while ((uVar2 & 0x8000000000000000) == 0) {
    lVar1 = lVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return lVar1 + -1;
}



undefined8 inst_41_flags_var_8(void)

{
  ulong uVar1;
  
  uVar1 = 0x5f369ba5b516cf54;
  while ((uVar1 & 0x8000000000000000) == 0) {
    uVar1 = uVar1 << 1 | 1;
  }
  return 0;
}



long inst_41_values_var_9(void)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  uVar2 = 0x1600ae8abc3d1412;
  while ((uVar2 & 0x8000000000000000) == 0) {
    lVar1 = lVar1 + 1;
    uVar2 = uVar2 << 1 | 1;
  }
  return lVar1 + -3;
}



undefined8 inst_41_flags_var_9(void)

{
  ulong uVar1;
  
  uVar1 = 0xc48647a8d6047c26;
  while ((uVar1 & 0x8000000000000000) == 0) {
    uVar1 = uVar1 << 1 | 1;
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


