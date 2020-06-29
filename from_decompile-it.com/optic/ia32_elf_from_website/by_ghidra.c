typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    word;
typedef ulong size_t;

typedef int integer(kind=4);

typedef undefined complex(kind=8)[16];

typedef double real(kind=8);

typedef dword logical(kind=4);

typedef longlong integer(kind=8);

typedef struct hdr_type hdr_type, *Phdr_type;

struct hdr_type { // Missing member istwfk : integer(kind=4)[1] at offset 0x4c [Unsupported interior flex array: integer(kind=4)[1]]
Missing member lmn_size : integer(kind=4)[1] at offset 0x64 [Unsupported interior flex array: integer(kind=4)[1]]
Missing member nband : integer(kind=4)[1] at offset 0x7c [Unsupported interior flex array: integer(kind=4)[1]]
Missing member npwarr : integer(kind=4)[1] at offset 0x94 [Unsupported interior flex array: integer(kind=4)[1]]
Missing member pspcod : integer(kind=4)[1] at offset 0xac [Unsupported interior flex array: integer(kind=4)[1]]
Missing member pspdat : integer(kind=4)[1] at offset 0xc4 [Unsupported interior flex array: integer(kind=4)[1]]
Missing member pspso : integer(kind=4)[1] at offset 0xdc [Unsupported interior flex array: integer(kind=4)[1]]
Missing member pspxc : integer(kind=4)[1] at offset 0xf4 [Unsupported interior flex array: integer(kind=4)[1]]
Missing member so_typat : integer(kind=4)[1] at offset 0x10c [Unsupported interior flex array: integer(kind=4)[1]]
Missing member symafm : integer(kind=4)[1] at offset 0x124 [Unsupported interior flex array: integer(kind=4)[1]]
Missing member symrel : integer(kind=4)[1][1][1] at offset 0x13c [Unsupported interior flex array: integer(kind=4)[1][1][1]]
Missing member typat : integer(kind=4)[1] at offset 0x16c [Unsupported interior flex array: integer(kind=4)[1]]
Missing member rprimd : real(kind=8)[4][4] at offset 0x1d4 [conflict with qptn]
Missing member kptns : real(kind=8)[1][1] at offset 0x234 [Unsupported interior flex array: real(kind=8)[1][1]]
Missing member occ : real(kind=8)[1] at offset 0x258 [Unsupported interior flex array: real(kind=8)[1]]
Missing member tnons : real(kind=8)[1][1] at offset 0x270 [Unsupported interior flex array: real(kind=8)[1][1]]
Missing member wtk : real(kind=8)[1] at offset 0x294 [Unsupported interior flex array: real(kind=8)[1]]
Missing member xred : real(kind=8)[1][1] at offset 0x2ac [Unsupported interior flex array: real(kind=8)[1][1]]
Missing member zionpsp : real(kind=8)[1] at offset 0x2d0 [Unsupported interior flex array: real(kind=8)[1]]
Missing member znuclpsp : real(kind=8)[1] at offset 0x2e8 [Unsupported interior flex array: real(kind=8)[1]]
Missing member znucltypat : real(kind=8)[1] at offset 0x300 [Unsupported interior flex array: real(kind=8)[1]]
Missing member title : void {0} [1] at offset 0x320 [Unsupported interior flex array: void {0} [1]]
Missing member pawrhoij : pawrhoij_type[1] at offset 0x338 [Unsupported interior flex array: pawrhoij_type[1]]
    integer(kind=4) bantot;
    integer(kind=4) date;
    integer(kind=4) headform;
    integer(kind=4) intxc;
    integer(kind=4) ixc;
    integer(kind=4) natom;
    integer(kind=4) nkpt;
    integer(kind=4) npsp;
    integer(kind=4) nspden;
    integer(kind=4) nspinor;
    integer(kind=4) nsppol;
    integer(kind=4) nsym;
    integer(kind=4) ntypat;
    integer(kind=4) occopt;
    integer(kind=4) pertcase;
    integer(kind=4) usepaw;
    integer(kind=4) ngfft[4];
    undefined field_0x50;
    undefined field_0x51;
    undefined field_0x52;
    undefined field_0x53;
    undefined field_0x54;
    undefined field_0x55;
    undefined field_0x56;
    undefined field_0x57;
    undefined field_0x58;
    undefined field_0x59;
    undefined field_0x5a;
    undefined field_0x5b;
    undefined field_0x5c;
    undefined field_0x5d;
    undefined field_0x5e;
    undefined field_0x5f;
    undefined field_0x60;
    undefined field_0x61;
    undefined field_0x62;
    undefined field_0x63;
    undefined field_0x64;
    undefined field_0x65;
    undefined field_0x66;
    undefined field_0x67;
    undefined field_0x68;
    undefined field_0x69;
    undefined field_0x6a;
    undefined field_0x6b;
    undefined field_0x6c;
    undefined field_0x6d;
    undefined field_0x6e;
    undefined field_0x6f;
    undefined field_0x70;
    undefined field_0x71;
    undefined field_0x72;
    undefined field_0x73;
    undefined field_0x74;
    undefined field_0x75;
    undefined field_0x76;
    undefined field_0x77;
    undefined field_0x78;
    undefined field_0x79;
    undefined field_0x7a;
    undefined field_0x7b;
    undefined field_0x7c;
    undefined field_0x7d;
    undefined field_0x7e;
    undefined field_0x7f;
    undefined field_0x80;
    undefined field_0x81;
    undefined field_0x82;
    undefined field_0x83;
    undefined field_0x84;
    undefined field_0x85;
    undefined field_0x86;
    undefined field_0x87;
    undefined field_0x88;
    undefined field_0x89;
    undefined field_0x8a;
    undefined field_0x8b;
    undefined field_0x8c;
    undefined field_0x8d;
    undefined field_0x8e;
    undefined field_0x8f;
    undefined field_0x90;
    undefined field_0x91;
    undefined field_0x92;
    undefined field_0x93;
    undefined field_0x94;
    undefined field_0x95;
    undefined field_0x96;
    undefined field_0x97;
    undefined field_0x98;
    undefined field_0x99;
    undefined field_0x9a;
    undefined field_0x9b;
    undefined field_0x9c;
    undefined field_0x9d;
    undefined field_0x9e;
    undefined field_0x9f;
    undefined field_0xa0;
    undefined field_0xa1;
    undefined field_0xa2;
    undefined field_0xa3;
    undefined field_0xa4;
    undefined field_0xa5;
    undefined field_0xa6;
    undefined field_0xa7;
    undefined field_0xa8;
    undefined field_0xa9;
    undefined field_0xaa;
    undefined field_0xab;
    undefined field_0xac;
    undefined field_0xad;
    undefined field_0xae;
    undefined field_0xaf;
    undefined field_0xb0;
    undefined field_0xb1;
    undefined field_0xb2;
    undefined field_0xb3;
    undefined field_0xb4;
    undefined field_0xb5;
    undefined field_0xb6;
    undefined field_0xb7;
    undefined field_0xb8;
    undefined field_0xb9;
    undefined field_0xba;
    undefined field_0xbb;
    undefined field_0xbc;
    undefined field_0xbd;
    undefined field_0xbe;
    undefined field_0xbf;
    undefined field_0xc0;
    undefined field_0xc1;
    undefined field_0xc2;
    undefined field_0xc3;
    undefined field_0xc4;
    undefined field_0xc5;
    undefined field_0xc6;
    undefined field_0xc7;
    undefined field_0xc8;
    undefined field_0xc9;
    undefined field_0xca;
    undefined field_0xcb;
    undefined field_0xcc;
    undefined field_0xcd;
    undefined field_0xce;
    undefined field_0xcf;
    undefined field_0xd0;
    undefined field_0xd1;
    undefined field_0xd2;
    undefined field_0xd3;
    undefined field_0xd4;
    undefined field_0xd5;
    undefined field_0xd6;
    undefined field_0xd7;
    undefined field_0xd8;
    undefined field_0xd9;
    undefined field_0xda;
    undefined field_0xdb;
    undefined field_0xdc;
    undefined field_0xdd;
    undefined field_0xde;
    undefined field_0xdf;
    undefined field_0xe0;
    undefined field_0xe1;
    undefined field_0xe2;
    undefined field_0xe3;
    undefined field_0xe4;
    undefined field_0xe5;
    undefined field_0xe6;
    undefined field_0xe7;
    undefined field_0xe8;
    undefined field_0xe9;
    undefined field_0xea;
    undefined field_0xeb;
    undefined field_0xec;
    undefined field_0xed;
    undefined field_0xee;
    undefined field_0xef;
    undefined field_0xf0;
    undefined field_0xf1;
    undefined field_0xf2;
    undefined field_0xf3;
    undefined field_0xf4;
    undefined field_0xf5;
    undefined field_0xf6;
    undefined field_0xf7;
    undefined field_0xf8;
    undefined field_0xf9;
    undefined field_0xfa;
    undefined field_0xfb;
    undefined field_0xfc;
    undefined field_0xfd;
    undefined field_0xfe;
    undefined field_0xff;
    undefined field_0x100;
    undefined field_0x101;
    undefined field_0x102;
    undefined field_0x103;
    undefined field_0x104;
    undefined field_0x105;
    undefined field_0x106;
    undefined field_0x107;
    undefined field_0x108;
    undefined field_0x109;
    undefined field_0x10a;
    undefined field_0x10b;
    undefined field_0x10c;
    undefined field_0x10d;
    undefined field_0x10e;
    undefined field_0x10f;
    undefined field_0x110;
    undefined field_0x111;
    undefined field_0x112;
    undefined field_0x113;
    undefined field_0x114;
    undefined field_0x115;
    undefined field_0x116;
    undefined field_0x117;
    undefined field_0x118;
    undefined field_0x119;
    undefined field_0x11a;
    undefined field_0x11b;
    undefined field_0x11c;
    undefined field_0x11d;
    undefined field_0x11e;
    undefined field_0x11f;
    undefined field_0x120;
    undefined field_0x121;
    undefined field_0x122;
    undefined field_0x123;
    undefined field_0x124;
    undefined field_0x125;
    undefined field_0x126;
    undefined field_0x127;
    undefined field_0x128;
    undefined field_0x129;
    undefined field_0x12a;
    undefined field_0x12b;
    undefined field_0x12c;
    undefined field_0x12d;
    undefined field_0x12e;
    undefined field_0x12f;
    undefined field_0x130;
    undefined field_0x131;
    undefined field_0x132;
    undefined field_0x133;
    undefined field_0x134;
    undefined field_0x135;
    undefined field_0x136;
    undefined field_0x137;
    undefined field_0x138;
    undefined field_0x139;
    undefined field_0x13a;
    undefined field_0x13b;
    undefined field_0x13c;
    undefined field_0x13d;
    undefined field_0x13e;
    undefined field_0x13f;
    undefined field_0x140;
    undefined field_0x141;
    undefined field_0x142;
    undefined field_0x143;
    undefined field_0x144;
    undefined field_0x145;
    undefined field_0x146;
    undefined field_0x147;
    undefined field_0x148;
    undefined field_0x149;
    undefined field_0x14a;
    undefined field_0x14b;
    undefined field_0x14c;
    undefined field_0x14d;
    undefined field_0x14e;
    undefined field_0x14f;
    undefined field_0x150;
    undefined field_0x151;
    undefined field_0x152;
    undefined field_0x153;
    undefined field_0x154;
    undefined field_0x155;
    undefined field_0x156;
    undefined field_0x157;
    undefined field_0x158;
    undefined field_0x159;
    undefined field_0x15a;
    undefined field_0x15b;
    undefined field_0x15c;
    undefined field_0x15d;
    undefined field_0x15e;
    undefined field_0x15f;
    undefined field_0x160;
    undefined field_0x161;
    undefined field_0x162;
    undefined field_0x163;
    undefined field_0x164;
    undefined field_0x165;
    undefined field_0x166;
    undefined field_0x167;
    undefined field_0x168;
    undefined field_0x169;
    undefined field_0x16a;
    undefined field_0x16b;
    undefined field_0x16c;
    undefined field_0x16d;
    undefined field_0x16e;
    undefined field_0x16f;
    undefined field_0x170;
    undefined field_0x171;
    undefined field_0x172;
    undefined field_0x173;
    undefined field_0x174;
    undefined field_0x175;
    undefined field_0x176;
    undefined field_0x177;
    undefined field_0x178;
    undefined field_0x179;
    undefined field_0x17a;
    undefined field_0x17b;
    undefined field_0x17c;
    undefined field_0x17d;
    undefined field_0x17e;
    undefined field_0x17f;
    undefined field_0x180;
    undefined field_0x181;
    undefined field_0x182;
    undefined field_0x183;
    real(kind=8) ecut;
    real(kind=8) ecutdg;
    real(kind=8) ecutsm;
    real(kind=8) ecut_eff;
    real(kind=8) etot;
    real(kind=8) fermie;
    real(kind=8) residm;
    real(kind=8) qptn[4];
    undefined field_0x1dc;
    undefined field_0x1dd;
    undefined field_0x1de;
    undefined field_0x1df;
    undefined field_0x1e0;
    undefined field_0x1e1;
    undefined field_0x1e2;
    undefined field_0x1e3;
    undefined field_0x1e4;
    undefined field_0x1e5;
    undefined field_0x1e6;
    undefined field_0x1e7;
    undefined field_0x1e8;
    undefined field_0x1e9;
    undefined field_0x1ea;
    undefined field_0x1eb;
    undefined field_0x1ec;
    undefined field_0x1ed;
    undefined field_0x1ee;
    undefined field_0x1ef;
    undefined field_0x1f0;
    undefined field_0x1f1;
    undefined field_0x1f2;
    undefined field_0x1f3;
    undefined field_0x1f4;
    undefined field_0x1f5;
    undefined field_0x1f6;
    undefined field_0x1f7;
    undefined field_0x1f8;
    undefined field_0x1f9;
    undefined field_0x1fa;
    undefined field_0x1fb;
    undefined field_0x1fc;
    undefined field_0x1fd;
    undefined field_0x1fe;
    undefined field_0x1ff;
    undefined field_0x200;
    undefined field_0x201;
    undefined field_0x202;
    undefined field_0x203;
    undefined field_0x204;
    undefined field_0x205;
    undefined field_0x206;
    undefined field_0x207;
    undefined field_0x208;
    undefined field_0x209;
    undefined field_0x20a;
    undefined field_0x20b;
    undefined field_0x20c;
    undefined field_0x20d;
    undefined field_0x20e;
    undefined field_0x20f;
    undefined field_0x210;
    undefined field_0x211;
    undefined field_0x212;
    undefined field_0x213;
    undefined field_0x214;
    undefined field_0x215;
    undefined field_0x216;
    undefined field_0x217;
    undefined field_0x218;
    undefined field_0x219;
    undefined field_0x21a;
    undefined field_0x21b;
    real(kind=8) stmbias;
    real(kind=8) tphysel;
    real(kind=8) tsmear;
    undefined field_0x234;
    undefined field_0x235;
    undefined field_0x236;
    undefined field_0x237;
    undefined field_0x238;
    undefined field_0x239;
    undefined field_0x23a;
    undefined field_0x23b;
    undefined field_0x23c;
    undefined field_0x23d;
    undefined field_0x23e;
    undefined field_0x23f;
    undefined field_0x240;
    undefined field_0x241;
    undefined field_0x242;
    undefined field_0x243;
    undefined field_0x244;
    undefined field_0x245;
    undefined field_0x246;
    undefined field_0x247;
    undefined field_0x248;
    undefined field_0x249;
    undefined field_0x24a;
    undefined field_0x24b;
    undefined field_0x24c;
    undefined field_0x24d;
    undefined field_0x24e;
    undefined field_0x24f;
    undefined field_0x250;
    undefined field_0x251;
    undefined field_0x252;
    undefined field_0x253;
    undefined field_0x254;
    undefined field_0x255;
    undefined field_0x256;
    undefined field_0x257;
    undefined field_0x258;
    undefined field_0x259;
    undefined field_0x25a;
    undefined field_0x25b;
    undefined field_0x25c;
    undefined field_0x25d;
    undefined field_0x25e;
    undefined field_0x25f;
    undefined field_0x260;
    undefined field_0x261;
    undefined field_0x262;
    undefined field_0x263;
    undefined field_0x264;
    undefined field_0x265;
    undefined field_0x266;
    undefined field_0x267;
    undefined field_0x268;
    undefined field_0x269;
    undefined field_0x26a;
    undefined field_0x26b;
    undefined field_0x26c;
    undefined field_0x26d;
    undefined field_0x26e;
    undefined field_0x26f;
    undefined field_0x270;
    undefined field_0x271;
    undefined field_0x272;
    undefined field_0x273;
    undefined field_0x274;
    undefined field_0x275;
    undefined field_0x276;
    undefined field_0x277;
    undefined field_0x278;
    undefined field_0x279;
    undefined field_0x27a;
    undefined field_0x27b;
    undefined field_0x27c;
    undefined field_0x27d;
    undefined field_0x27e;
    undefined field_0x27f;
    undefined field_0x280;
    undefined field_0x281;
    undefined field_0x282;
    undefined field_0x283;
    undefined field_0x284;
    undefined field_0x285;
    undefined field_0x286;
    undefined field_0x287;
    undefined field_0x288;
    undefined field_0x289;
    undefined field_0x28a;
    undefined field_0x28b;
    undefined field_0x28c;
    undefined field_0x28d;
    undefined field_0x28e;
    undefined field_0x28f;
    undefined field_0x290;
    undefined field_0x291;
    undefined field_0x292;
    undefined field_0x293;
    undefined field_0x294;
    undefined field_0x295;
    undefined field_0x296;
    undefined field_0x297;
    undefined field_0x298;
    undefined field_0x299;
    undefined field_0x29a;
    undefined field_0x29b;
    undefined field_0x29c;
    undefined field_0x29d;
    undefined field_0x29e;
    undefined field_0x29f;
    undefined field_0x2a0;
    undefined field_0x2a1;
    undefined field_0x2a2;
    undefined field_0x2a3;
    undefined field_0x2a4;
    undefined field_0x2a5;
    undefined field_0x2a6;
    undefined field_0x2a7;
    undefined field_0x2a8;
    undefined field_0x2a9;
    undefined field_0x2aa;
    undefined field_0x2ab;
    undefined field_0x2ac;
    undefined field_0x2ad;
    undefined field_0x2ae;
    undefined field_0x2af;
    undefined field_0x2b0;
    undefined field_0x2b1;
    undefined field_0x2b2;
    undefined field_0x2b3;
    undefined field_0x2b4;
    undefined field_0x2b5;
    undefined field_0x2b6;
    undefined field_0x2b7;
    undefined field_0x2b8;
    undefined field_0x2b9;
    undefined field_0x2ba;
    undefined field_0x2bb;
    undefined field_0x2bc;
    undefined field_0x2bd;
    undefined field_0x2be;
    undefined field_0x2bf;
    undefined field_0x2c0;
    undefined field_0x2c1;
    undefined field_0x2c2;
    undefined field_0x2c3;
    undefined field_0x2c4;
    undefined field_0x2c5;
    undefined field_0x2c6;
    undefined field_0x2c7;
    undefined field_0x2c8;
    undefined field_0x2c9;
    undefined field_0x2ca;
    undefined field_0x2cb;
    undefined field_0x2cc;
    undefined field_0x2cd;
    undefined field_0x2ce;
    undefined field_0x2cf;
    undefined field_0x2d0;
    undefined field_0x2d1;
    undefined field_0x2d2;
    undefined field_0x2d3;
    undefined field_0x2d4;
    undefined field_0x2d5;
    undefined field_0x2d6;
    undefined field_0x2d7;
    undefined field_0x2d8;
    undefined field_0x2d9;
    undefined field_0x2da;
    undefined field_0x2db;
    undefined field_0x2dc;
    undefined field_0x2dd;
    undefined field_0x2de;
    undefined field_0x2df;
    undefined field_0x2e0;
    undefined field_0x2e1;
    undefined field_0x2e2;
    undefined field_0x2e3;
    undefined field_0x2e4;
    undefined field_0x2e5;
    undefined field_0x2e6;
    undefined field_0x2e7;
    undefined field_0x2e8;
    undefined field_0x2e9;
    undefined field_0x2ea;
    undefined field_0x2eb;
    undefined field_0x2ec;
    undefined field_0x2ed;
    undefined field_0x2ee;
    undefined field_0x2ef;
    undefined field_0x2f0;
    undefined field_0x2f1;
    undefined field_0x2f2;
    undefined field_0x2f3;
    undefined field_0x2f4;
    undefined field_0x2f5;
    undefined field_0x2f6;
    undefined field_0x2f7;
    undefined field_0x2f8;
    undefined field_0x2f9;
    undefined field_0x2fa;
    undefined field_0x2fb;
    undefined field_0x2fc;
    undefined field_0x2fd;
    undefined field_0x2fe;
    undefined field_0x2ff;
    undefined field_0x300;
    undefined field_0x301;
    undefined field_0x302;
    undefined field_0x303;
    undefined field_0x304;
    undefined field_0x305;
    undefined field_0x306;
    undefined field_0x307;
    undefined field_0x308;
    undefined field_0x309;
    undefined field_0x30a;
    undefined field_0x30b;
    undefined field_0x30c;
    undefined field_0x30d;
    undefined field_0x30e;
    undefined field_0x30f;
    undefined field_0x310;
    undefined field_0x311;
    undefined field_0x312;
    undefined field_0x313;
    undefined field_0x314;
    undefined field_0x315;
    undefined field_0x316;
    undefined field_0x317;
    undefined field_0x318;
    undefined field_0x319;
    undefined field_0x31a;
    undefined field_0x31b;
    undefined field_0x31c;
    undefined field_0x31d;
    undefined field_0x31e;
    undefined field_0x31f;
    undefined field_0x320;
    undefined field_0x321;
    undefined field_0x322;
    undefined field_0x323;
    undefined field_0x324;
    undefined field_0x325;
    undefined field_0x326;
    undefined field_0x327;
    undefined field_0x328;
    undefined field_0x329;
    undefined field_0x32a;
    undefined field_0x32b;
    undefined field_0x32c;
    undefined field_0x32d;
    undefined field_0x32e;
    undefined field_0x32f;
    undefined field_0x330;
    undefined field_0x331;
    undefined field_0x332;
    undefined field_0x333;
    undefined field_0x334;
    undefined field_0x335;
    undefined field_0x336;
    undefined field_0x337;
    undefined field_0x338;
    undefined field_0x339;
    undefined field_0x33a;
    undefined field_0x33b;
    undefined field_0x33c;
    undefined field_0x33d;
    undefined field_0x33e;
    undefined field_0x33f;
    undefined field_0x340;
    undefined field_0x341;
    undefined field_0x342;
    undefined field_0x343;
    undefined field_0x344;
    undefined field_0x345;
    undefined field_0x346;
    undefined field_0x347;
    undefined field_0x348;
    undefined field_0x349;
    undefined field_0x34a;
    undefined field_0x34b;
    undefined field_0x34c;
    undefined field_0x34d;
    undefined field_0x34e;
    undefined field_0x34f;
};

typedef struct wffile_type wffile_type, *Pwffile_type;

struct wffile_type {
    integer(kind=4) unwff;
    integer(kind=4) accesswff;
    integer(kind=4) formwff;
    integer(kind=4) kgwff;
    undefined field_0x10;
    undefined field_0x11;
    undefined field_0x12;
    undefined field_0x13;
    undefined field_0x14;
    undefined field_0x15;
    undefined field_0x16;
    undefined field_0x17;
    undefined field_0x18;
    undefined field_0x19;
    undefined field_0x1a;
    undefined field_0x1b;
    undefined field_0x1c;
    undefined field_0x1d;
    undefined field_0x1e;
    undefined field_0x1f;
    undefined field_0x20;
    undefined field_0x21;
    undefined field_0x22;
    undefined field_0x23;
    undefined field_0x24;
    undefined field_0x25;
    undefined field_0x26;
    undefined field_0x27;
    undefined field_0x28;
    undefined field_0x29;
    undefined field_0x2a;
    undefined field_0x2b;
    undefined field_0x2c;
    undefined field_0x2d;
    undefined field_0x2e;
    undefined field_0x2f;
    undefined field_0x30;
    undefined field_0x31;
    undefined field_0x32;
    undefined field_0x33;
    undefined field_0x34;
    undefined field_0x35;
    undefined field_0x36;
    undefined field_0x37;
    undefined field_0x38;
    undefined field_0x39;
    undefined field_0x3a;
    undefined field_0x3b;
    undefined field_0x3c;
    undefined field_0x3d;
    undefined field_0x3e;
    undefined field_0x3f;
    undefined field_0x40;
    undefined field_0x41;
    undefined field_0x42;
    undefined field_0x43;
    undefined field_0x44;
    undefined field_0x45;
    undefined field_0x46;
    undefined field_0x47;
    undefined field_0x48;
    undefined field_0x49;
    undefined field_0x4a;
    undefined field_0x4b;
    undefined field_0x4c;
    undefined field_0x4d;
    undefined field_0x4e;
    undefined field_0x4f;
    undefined field_0x50;
    undefined field_0x51;
    undefined field_0x52;
    undefined field_0x53;
    undefined field_0x54;
    undefined field_0x55;
    undefined field_0x56;
    undefined field_0x57;
    undefined field_0x58;
    undefined field_0x59;
    undefined field_0x5a;
    undefined field_0x5b;
    undefined field_0x5c;
    undefined field_0x5d;
    undefined field_0x5e;
    undefined field_0x5f;
    undefined field_0x60;
    undefined field_0x61;
    undefined field_0x62;
    undefined field_0x63;
    undefined field_0x64;
    undefined field_0x65;
    undefined field_0x66;
    undefined field_0x67;
    undefined field_0x68;
    undefined field_0x69;
    undefined field_0x6a;
    undefined field_0x6b;
    undefined field_0x6c;
    undefined field_0x6d;
    undefined field_0x6e;
    undefined field_0x6f;
    undefined field_0x70;
    undefined field_0x71;
    undefined field_0x72;
    undefined field_0x73;
    undefined field_0x74;
    undefined field_0x75;
    undefined field_0x76;
    undefined field_0x77;
    undefined field_0x78;
    undefined field_0x79;
    undefined field_0x7a;
    undefined field_0x7b;
    undefined field_0x7c;
    undefined field_0x7d;
    undefined field_0x7e;
    undefined field_0x7f;
    undefined field_0x80;
    undefined field_0x81;
    undefined field_0x82;
    undefined field_0x83;
    undefined field_0x84;
    undefined field_0x85;
    undefined field_0x86;
    undefined field_0x87;
    undefined field_0x88;
    undefined field_0x89;
    undefined field_0x8a;
    undefined field_0x8b;
    undefined field_0x8c;
    undefined field_0x8d;
    undefined field_0x8e;
    undefined field_0x8f;
    undefined field_0x90;
    undefined field_0x91;
    undefined field_0x92;
    undefined field_0x93;
    integer(kind=4) master;
    integer(kind=4) me;
    integer(kind=4) nproc;
    integer(kind=4) spacecomm;
    integer(kind=4) fhwff;
    integer(kind=4) nboct_int;
    integer(kind=4) nboct_dp;
    integer(kind=4) nboct_ch;
    integer(kind=4) lght_recs;
    integer(kind=8) offwff;
    integer(kind=8) off_recs;
};

typedef struct pawrhoij_type pawrhoij_type, *Ppawrhoij_type;

struct pawrhoij_type { // Missing member nrhoijsel : integer(kind=4)[1] at offset 0x18 [Unsupported interior flex array: integer(kind=4)[1]]
Missing member kpawmix : integer(kind=4)[1] at offset 0x30 [Unsupported interior flex array: integer(kind=4)[1]]
Missing member rhoijselect : integer(kind=4)[1][1] at offset 0x48 [Unsupported interior flex array: integer(kind=4)[1][1]]
Missing member grhoij : real(kind=8)[1][1][1] at offset 0x6c [Unsupported interior flex array: real(kind=8)[1][1][1]]
Missing member rhoij_ : real(kind=8)[1][1] at offset 0x9c [Unsupported interior flex array: real(kind=8)[1][1]]
Missing member rhoijp : real(kind=8)[1][1] at offset 0xc0 [Unsupported interior flex array: real(kind=8)[1][1]]
Missing member rhoijres : real(kind=8)[1][1] at offset 0xe4 [Unsupported interior flex array: real(kind=8)[1][1]]
    integer(kind=4) lmn_size;
    integer(kind=4) lmn2_size;
    integer(kind=4) lmnmix_sz;
    integer(kind=4) ngrhoij;
    integer(kind=4) nspden;
    integer(kind=4) nsppol;
    undefined field_0x18;
    undefined field_0x19;
    undefined field_0x1a;
    undefined field_0x1b;
    undefined field_0x1c;
    undefined field_0x1d;
    undefined field_0x1e;
    undefined field_0x1f;
    undefined field_0x20;
    undefined field_0x21;
    undefined field_0x22;
    undefined field_0x23;
    undefined field_0x24;
    undefined field_0x25;
    undefined field_0x26;
    undefined field_0x27;
    undefined field_0x28;
    undefined field_0x29;
    undefined field_0x2a;
    undefined field_0x2b;
    undefined field_0x2c;
    undefined field_0x2d;
    undefined field_0x2e;
    undefined field_0x2f;
    undefined field_0x30;
    undefined field_0x31;
    undefined field_0x32;
    undefined field_0x33;
    undefined field_0x34;
    undefined field_0x35;
    undefined field_0x36;
    undefined field_0x37;
    undefined field_0x38;
    undefined field_0x39;
    undefined field_0x3a;
    undefined field_0x3b;
    undefined field_0x3c;
    undefined field_0x3d;
    undefined field_0x3e;
    undefined field_0x3f;
    undefined field_0x40;
    undefined field_0x41;
    undefined field_0x42;
    undefined field_0x43;
    undefined field_0x44;
    undefined field_0x45;
    undefined field_0x46;
    undefined field_0x47;
    undefined field_0x48;
    undefined field_0x49;
    undefined field_0x4a;
    undefined field_0x4b;
    undefined field_0x4c;
    undefined field_0x4d;
    undefined field_0x4e;
    undefined field_0x4f;
    undefined field_0x50;
    undefined field_0x51;
    undefined field_0x52;
    undefined field_0x53;
    undefined field_0x54;
    undefined field_0x55;
    undefined field_0x56;
    undefined field_0x57;
    undefined field_0x58;
    undefined field_0x59;
    undefined field_0x5a;
    undefined field_0x5b;
    undefined field_0x5c;
    undefined field_0x5d;
    undefined field_0x5e;
    undefined field_0x5f;
    undefined field_0x60;
    undefined field_0x61;
    undefined field_0x62;
    undefined field_0x63;
    undefined field_0x64;
    undefined field_0x65;
    undefined field_0x66;
    undefined field_0x67;
    undefined field_0x68;
    undefined field_0x69;
    undefined field_0x6a;
    undefined field_0x6b;
    undefined field_0x6c;
    undefined field_0x6d;
    undefined field_0x6e;
    undefined field_0x6f;
    undefined field_0x70;
    undefined field_0x71;
    undefined field_0x72;
    undefined field_0x73;
    undefined field_0x74;
    undefined field_0x75;
    undefined field_0x76;
    undefined field_0x77;
    undefined field_0x78;
    undefined field_0x79;
    undefined field_0x7a;
    undefined field_0x7b;
    undefined field_0x7c;
    undefined field_0x7d;
    undefined field_0x7e;
    undefined field_0x7f;
    undefined field_0x80;
    undefined field_0x81;
    undefined field_0x82;
    undefined field_0x83;
    undefined field_0x84;
    undefined field_0x85;
    undefined field_0x86;
    undefined field_0x87;
    undefined field_0x88;
    undefined field_0x89;
    undefined field_0x8a;
    undefined field_0x8b;
    undefined field_0x8c;
    undefined field_0x8d;
    undefined field_0x8e;
    undefined field_0x8f;
    undefined field_0x90;
    undefined field_0x91;
    undefined field_0x92;
    undefined field_0x93;
    undefined field_0x94;
    undefined field_0x95;
    undefined field_0x96;
    undefined field_0x97;
    undefined field_0x98;
    undefined field_0x99;
    undefined field_0x9a;
    undefined field_0x9b;
    undefined field_0x9c;
    undefined field_0x9d;
    undefined field_0x9e;
    undefined field_0x9f;
    undefined field_0xa0;
    undefined field_0xa1;
    undefined field_0xa2;
    undefined field_0xa3;
    undefined field_0xa4;
    undefined field_0xa5;
    undefined field_0xa6;
    undefined field_0xa7;
    undefined field_0xa8;
    undefined field_0xa9;
    undefined field_0xaa;
    undefined field_0xab;
    undefined field_0xac;
    undefined field_0xad;
    undefined field_0xae;
    undefined field_0xaf;
    undefined field_0xb0;
    undefined field_0xb1;
    undefined field_0xb2;
    undefined field_0xb3;
    undefined field_0xb4;
    undefined field_0xb5;
    undefined field_0xb6;
    undefined field_0xb7;
    undefined field_0xb8;
    undefined field_0xb9;
    undefined field_0xba;
    undefined field_0xbb;
    undefined field_0xbc;
    undefined field_0xbd;
    undefined field_0xbe;
    undefined field_0xbf;
    undefined field_0xc0;
    undefined field_0xc1;
    undefined field_0xc2;
    undefined field_0xc3;
    undefined field_0xc4;
    undefined field_0xc5;
    undefined field_0xc6;
    undefined field_0xc7;
    undefined field_0xc8;
    undefined field_0xc9;
    undefined field_0xca;
    undefined field_0xcb;
    undefined field_0xcc;
    undefined field_0xcd;
    undefined field_0xce;
    undefined field_0xcf;
    undefined field_0xd0;
    undefined field_0xd1;
    undefined field_0xd2;
    undefined field_0xd3;
    undefined field_0xd4;
    undefined field_0xd5;
    undefined field_0xd6;
    undefined field_0xd7;
    undefined field_0xd8;
    undefined field_0xd9;
    undefined field_0xda;
    undefined field_0xdb;
    undefined field_0xdc;
    undefined field_0xdd;
    undefined field_0xde;
    undefined field_0xdf;
    undefined field_0xe0;
    undefined field_0xe1;
    undefined field_0xe2;
    undefined field_0xe3;
    undefined field_0xe4;
    undefined field_0xe5;
    undefined field_0xe6;
    undefined field_0xe7;
    undefined field_0xe8;
    undefined field_0xe9;
    undefined field_0xea;
    undefined field_0xeb;
    undefined field_0xec;
    undefined field_0xed;
    undefined field_0xee;
    undefined field_0xef;
    undefined field_0xf0;
    undefined field_0xf1;
    undefined field_0xf2;
    undefined field_0xf3;
    undefined field_0xf4;
    undefined field_0xf5;
    undefined field_0xf6;
    undefined field_0xf7;
    undefined field_0xf8;
    undefined field_0xf9;
    undefined field_0xfa;
    undefined field_0xfb;
    undefined field_0xfc;
    undefined field_0xfd;
    undefined field_0xfe;
    undefined field_0xff;
    undefined field_0x100;
    undefined field_0x101;
    undefined field_0x102;
    undefined field_0x103;
    undefined field_0x104;
    undefined field_0x105;
    undefined field_0x106;
    undefined field_0x107;
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

typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

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

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
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




int _init(EVP_PKEY_CTX *ctx)

{
  int iStack12;
  
  __gmon_start__();
  frame_dummy();
  __do_global_ctors_aux();
  return iStack12;
}



void _gfortran_os_error(void)

{
  _gfortran_os_error();
  return;
}



void _gfortran_exit_i4(void)

{
  _gfortran_exit_i4();
  return;
}



void _gfortran_st_open(void)

{
  _gfortran_st_open();
  return;
}



void dgemm_(void)

{
  dgemm_();
  return;
}



void _gfortran_st_write_done(void)

{
  _gfortran_st_write_done();
  return;
}



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



void _gfortran_date_and_time(void)

{
  _gfortran_date_and_time();
  return;
}



void _gfortran_st_inquire(void)

{
  _gfortran_st_inquire();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}



void _gfortran_transfer_complex(void)

{
  _gfortran_transfer_complex();
  return;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



void _gfortran_transfer_array(void)

{
  _gfortran_transfer_array();
  return;
}



void _gfortran_st_read_done(void)

{
  _gfortran_st_read_done();
  return;
}



void _gfortran_set_options(void)

{
  _gfortran_set_options();
  return;
}



void _gfortran_set_args(void)

{
  _gfortran_set_args();
  return;
}



void _gfortran_internal_unpack(void)

{
  _gfortran_internal_unpack();
  return;
}



void _gfortran_concat_string(void)

{
  _gfortran_concat_string();
  return;
}



void _gfortran_runtime_error_at(void)

{
  _gfortran_runtime_error_at();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

double acos(double __x)

{
  float10 extraout_ST0;
  
  acos(__x);
  return (double)extraout_ST0;
}



void _gfortran_transfer_integer(void)

{
  _gfortran_transfer_integer();
  return;
}



void _gfortran_system_clock_4(void)

{
  _gfortran_system_clock_4();
  return;
}



void _gfortran_st_close(void)

{
  _gfortran_st_close();
  return;
}



void _gfortran_runtime_error(void)

{
  _gfortran_runtime_error();
  return;
}



void _gfortran_st_backspace(void)

{
  _gfortran_st_backspace();
  return;
}



void _gfortran_string_trim(void)

{
  _gfortran_string_trim();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

double cabs(double __z)

{
  float10 extraout_ST0;
  
  cabs(__z);
  return (double)extraout_ST0;
}



void _gfortran_transfer_character(void)

{
  _gfortran_transfer_character();
  return;
}



void _gfortran_st_write(void)

{
  _gfortran_st_write();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



void _gfortran_internal_pack(void)

{
  _gfortran_internal_pack();
  return;
}



void _gfortran_string_index(void)

{
  _gfortran_string_index();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memmove(__dest,__src,__n);
  return pvVar1;
}



void _gfortran_st_rewind(void)

{
  _gfortran_st_rewind();
  return;
}



void _gfortran_st_read(void)

{
  _gfortran_st_read();
  return;
}



void dgemv_(void)

{
  dgemv_();
  return;
}



void _gfortran_transfer_real(void)

{
  _gfortran_transfer_real();
  return;
}



void _gfortran_stop_numeric(void)

{
  _gfortran_stop_numeric();
  return;
}



void _gfortran_compare_string(void)

{
  _gfortran_compare_string();
  return;
}



void _gfortran_pow_i4_i4(void)

{
  _gfortran_pow_i4_i4();
  return;
}



void _gfortran_store_exe_path(void)

{
  _gfortran_store_exe_path();
  return;
}



void _start(void)

{
  __libc_start_main(main);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x08048dfa)
// WARNING: Removing unreachable block (ram,0x08048e00)

void __do_global_dtors_aux(void)

{
  if (completed_7065 == '\0') {
    completed_7065 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x08048e48)

void frame_dummy(void)

{
  return;
}



void optic(void)

{
  int iVar1;
  size_t __size;
  integer_kind_4_ (*local_14c8) [4] [4] [1];
  void *__ptr;
  wffile_type *pwVar2;
  real_kind_8_ (*paaaaarVar3) [3] [1] [1] [1] [1];
  integer_kind_4_ (*local_14cc) [4] [4] [1];
  hdr_type *__ptr_00;
  complex_kind_8_ (*local_14c4) [1] [1] [1] [4] [1];
  void *__ptr_01;
  int iVar4;
  int extraout_EDX;
  hdr_type *phVar5;
  void *unaff_EBX;
  undefined8 *puVar6;
  int unaff_EDI;
  bool bVar7;
  char *local_14d8;
  hdr_type **local_14d4;
  integer_kind_4_ (*local_14d0) [4] [4] [1];
  wffile_type *local_14c0;
  wffile_type *local_14bc;
  int local_1460;
  int local_145c;
  int local_1458;
  int local_1454;
  int local_1440;
  int local_143c;
  int local_1438;
  int local_1434;
  integer_kind_4_ (*local_1430) [4] [4] [1];
  int local_142c;
  int local_1428;
  hdr_type *local_1424;
  int local_1420;
  int local_141c;
  int local_1418;
  int local_1414;
  int local_1410;
  int local_140c;
  int local_13e4;
  int local_13e0;
  int local_13dc;
  real_kind_8_ (*local_13d8) [4] [1];
  int local_13d4;
  int local_13d0;
  int local_13cc;
  int local_13c8;
  int local_13c4;
  int local_13c0;
  int local_13bc;
  int local_13b4;
  hdr_type *local_135c;
  hdr_type *local_1344;
  undefined4 local_1340;
  undefined4 local_133c;
  undefined4 local_1338;
  undefined4 local_1334;
  int local_1330;
  undefined4 local_132c;
  undefined4 local_1328;
  int local_1324;
  undefined *local_1320;
  char *local_1314;
  undefined4 local_1310;
  undefined4 local_130c;
  undefined4 local_1308;
  integer_kind_4_ (*local_11f0) [4] [4] [1];
  undefined4 local_11ec;
  undefined4 local_11e8;
  int local_11e4;
  undefined4 local_11e0;
  int local_11dc;
  int local_11d8;
  undefined4 local_11d4;
  int local_11d0;
  void *local_11cc;
  int local_11c8;
  void *local_11c4;
  int local_11c0;
  void *local_11bc;
  int local_11b8;
  void *local_11b4;
  int local_11b0;
  void *local_11ac;
  int local_11a8;
  void *local_11a4;
  int local_11a0;
  void *local_119c;
  int local_1198;
  int *local_1194;
  undefined4 local_1190;
  undefined4 local_118c;
  undefined4 local_1188;
  undefined4 local_1184;
  int local_1180;
  int *local_117c;
  undefined4 local_1178;
  undefined4 local_1174;
  undefined4 local_1170;
  undefined4 local_116c;
  int local_1168;
  int *local_1164;
  undefined4 local_1160;
  undefined4 local_115c;
  undefined4 local_1158;
  undefined4 local_1154;
  hdr_type *local_1150;
  int *local_114c;
  undefined4 local_1148;
  undefined4 local_1144;
  undefined4 local_1140;
  undefined4 local_113c;
  hdr_type *local_1138;
  double local_1134;
  undefined *local_1128;
  undefined4 local_1124;
  undefined4 local_1120;
  undefined4 local_111c;
  undefined4 local_1118;
  undefined4 local_1114;
  undefined *local_1110;
  undefined4 local_110c;
  undefined4 local_1108;
  undefined4 local_1104;
  undefined4 local_1100;
  undefined4 local_10fc;
  real_kind_8_ *local_10f8;
  undefined4 local_10f4;
  undefined4 local_10f0;
  undefined4 local_10ec;
  undefined4 local_10e8;
  undefined4 local_10e4;
  undefined4 local_10e0;
  undefined4 local_10dc;
  undefined4 local_10d8;
  undefined4 local_10d4;
  void *local_10c4;
  int local_10c0;
  integer_kind_4_ (*local_10bc) [4] [4] [1];
  undefined4 local_10b8;
  undefined4 local_10b4;
  undefined4 local_10b0;
  undefined4 local_10ac;
  hdr_type *local_10a8;
  wffile_type local_10a4;
  wffile_type local_fdc;
  wffile_type local_f14;
  wffile_type local_e4c;
  integer_kind_4_ local_d84 [2];
  undefined local_d7c [8];
  undefined local_d74 [8];
  undefined local_d6c [2];
  undefined auStack3434 [254];
  integer_kind_4_ local_c6c;
  integer_kind_4_ (*local_c68) [4] [4] [1];
  integer_kind_4_ local_c64;
  integer_kind_4_ local_c60;
  int local_c5c;
  int local_c58;
  int local_c54;
  int local_c50;
  int local_c4c;
  int local_c48;
  int local_c44;
  int local_c40;
  int local_c3c;
  integer_kind_4_ (*local_c38) [4] [4] [1];
  undefined4 local_c34;
  undefined4 local_c30;
  undefined4 local_c2c;
  int local_c28;
  int local_c24;
  undefined4 local_c20;
  int local_c1c;
  int local_c18;
  int local_c14;
  int local_c10;
  int local_c0c;
  integer_kind_4_ (*local_c08) [4] [4] [1];
  undefined4 local_c04;
  undefined4 local_c00;
  undefined4 local_bfc;
  undefined4 local_bf8;
  undefined4 local_bf4;
  undefined4 local_bf0;
  undefined4 local_bec;
  undefined4 local_be8;
  undefined4 local_be4;
  undefined4 local_be0;
  int local_bdc;
  integer_kind_4_ local_bd8;
  undefined local_bd4 [12];
  undefined local_bc8 [4];
  undefined local_bc4 [4];
  undefined local_bc0 [4];
  undefined8 local_bbc;
  undefined auStack2996 [8];
  undefined auStack2988 [56];
  integer_kind_4_ local_b74 [18];
  integer_kind_4_ local_b2c;
  complex_kind_8_ (*local_b28) [1] [1] [1] [4] [1];
  hdr_type *local_b24;
  integer_kind_4_ local_b20;
  integer_kind_4_ local_b1c;
  integer_kind_4_ local_b18;
  integer_kind_4_ local_b14;
  integer_kind_4_ local_b10;
  integer_kind_4_ local_b0c;
  integer_kind_4_ local_b08;
  int local_b04;
  undefined4 local_b00;
  int local_afc;
  int local_af8;
  undefined4 local_af4;
  hdr_type *local_af0;
  int local_aec;
  undefined4 local_ae8;
  undefined4 local_ae4;
  int local_ae0;
  undefined4 local_adc;
  int local_ad8;
  wffile_type *local_ad4;
  undefined4 local_ad0;
  undefined4 local_acc;
  int local_ac8;
  undefined4 local_ac4;
  int local_ac0;
  integer_kind_4_ local_abc;
  integer_kind_4_ local_ab8;
  int local_ab4;
  int local_ab0 [27];
  int local_a44;
  int local_a40;
  int local_a3c;
  hdr_type *local_a38;
  int local_a34;
  hdr_type *local_a30;
  int local_a2c;
  integer_kind_4_ local_a28;
  int local_a24;
  integer_kind_4_ local_a20;
  int local_a1c;
  integer_kind_4_ local_a18;
  int local_a14;
  hdr_type *local_a10;
  integer_kind_4_ local_a0c;
  integer_kind_4_ local_a08;
  double local_a04;
  integer_kind_4_ local_9f8;
  int local_9f4 [9];
  int local_9d0;
  int local_9cc;
  real_kind_8_ (*local_9c8) [4] [1];
  undefined4 local_9c4;
  undefined4 local_9c0;
  int local_9bc;
  int local_9b8;
  undefined4 local_9b4;
  int local_9b0;
  int local_9ac;
  hdr_type *local_9a8;
  int local_9a4;
  hdr_type *local_9a0;
  integer_kind_4_ local_99c;
  integer_kind_4_ local_998;
  undefined local_994 [128];
  int local_914;
  int local_90c;
  int local_858;
  int local_854;
  int local_84c;
  int local_848;
  int local_844;
  int local_840;
  hdr_type *local_83c;
  int local_838;
  int local_834;
  hdr_type *local_830;
  int local_82c;
  real_kind_8_ local_7f8;
  real_kind_8_ local_7e8;
  undefined8 local_7c0 [12];
  int local_760;
  int local_75c;
  int local_754;
  int local_750;
  int local_74c;
  int local_748;
  hdr_type *local_744;
  int local_740;
  undefined8 *local_73c;
  undefined4 local_738;
  int local_730;
  undefined local_644 [72];
  real_kind_8_ local_5fc [9];
  real_kind_8_ local_5b4 [9];
  undefined4 local_56c;
  undefined local_568 [256];
  undefined local_468 [132];
  undefined local_3e4 [132];
  undefined local_360 [132];
  undefined local_2dc [132];
  undefined local_258 [132];
  undefined local_1d4 [132];
  integer_kind_4_ local_150;
  double local_14c;
  void *local_144;
  integer_kind_4_ local_140;
  undefined4 local_13c;
  int local_138;
  undefined4 local_134;
  int local_130;
  real_kind_8_ (*local_12c) [3] [1] [1] [1] [1];
  int local_128;
  undefined4 local_124;
  hdr_type *local_120;
  undefined4 local_11c;
  int local_118;
  real_kind_8_ (*local_114) [3] [1] [1] [1] [1];
  int local_110;
  undefined4 local_10c;
  int local_108;
  undefined4 local_104;
  int local_100;
  real_kind_8_ (*local_fc) [3] [1] [1] [1] [1];
  int local_f8;
  undefined4 local_f4;
  int local_f0;
  undefined4 local_ec;
  int local_e8;
  wffile_type *local_e4;
  int local_e0;
  undefined4 local_dc;
  int local_d8;
  undefined4 local_d4;
  int local_d0;
  void *local_cc;
  int local_c8;
  undefined4 local_c4;
  int local_c0;
  undefined4 local_bc;
  integer_kind_4_ local_b8;
  real_kind_8_ local_b4;
  double local_ac;
  void *local_a4;
  integer_kind_4_ local_a0;
  integer_kind_4_ local_9c;
  integer_kind_4_ local_98;
  undefined4 local_94;
  int local_90;
  void *local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  void *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  undefined local_5c [24];
  integer_kind_4_ accesswff;
  integer_kind_4_ bantot;
  integer_kind_4_ bdtot0_index;
  integer_kind_4_ bdtot_index;
  hdr_type *local_30;
  int local_2c;
  
  local_74 = (void *)0x0;
  local_8c = (void *)0x0;
  local_a4 = (void *)0x0;
  local_cc = (void *)0x0;
  local_e4 = (wffile_type *)0x0;
  local_fc = (real_kind_8_ (*) [3] [1] [1] [1] [1])0x0;
  local_114 = (real_kind_8_ (*) [3] [1] [1] [1] [1])0x0;
  local_12c = (real_kind_8_ (*) [3] [1] [1] [1] [1])0x0;
  local_144 = (void *)0x0;
  local_9c8 = (real_kind_8_ (*) [4] [1])0x0;
  local_a30 = (hdr_type *)0x0;
  local_ad4 = (wffile_type *)0x0;
  local_b28 = (complex_kind_8_ (*) [1] [1] [1] [4] [1])0x0;
  local_c08 = (integer_kind_4_ (*) [4] [4] [1])0x0;
  local_c38 = (integer_kind_4_ (*) [4] [4] [1])0x0;
  local_c68 = (integer_kind_4_ (*) [4] [4] [1])0x0;
  local_10bc = (integer_kind_4_ (*) [4] [4] [1])0x0;
  _gfortran_set_options(8,options_0_1730);
  memmove(local_5c,&DAT_08070900,0x18);
  herald_(local_5c,"5.3.4 optic.F90",&DAT_08070918,0x18,6);
  local_133c = 0x8070922;
  local_1338 = 0x8b;
  local_1314 = &DAT_0807092c;
  local_1310 = 3;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 6;
  _gfortran_st_write(&local_1344);
  _gfortran_transfer_character(&local_1344," Please, give the name of the data file ...",0x2b);
  _gfortran_st_write_done(&local_1344);
  local_133c = 0x8070922;
  local_1338 = 0x8c;
  local_1314 = &DAT_0807092c;
  local_1310 = 3;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 5;
  _gfortran_st_read(&local_1344);
  _gfortran_transfer_character(&local_1344,local_1d4,0x84);
  _gfortran_st_read_done(&local_1344);
  local_133c = 0x8070922;
  local_1338 = 0x8d;
  local_1314 = &DAT_0807092c;
  local_1310 = 3;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 6;
  _gfortran_st_write(&local_1344);
  _gfortran_transfer_character(&local_1344," The name of the data file is :",0x1f);
  _gfortran_transfer_character(&local_1344,local_1d4,0x84);
  _gfortran_st_write_done(&local_1344);
  local_133c = 0x8070922;
  local_1338 = 0x8e;
  local_1314 = &DAT_0807092c;
  local_1310 = 3;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 6;
  _gfortran_st_write(&local_1344);
  _gfortran_transfer_character(&local_1344," Please, give the name of the output file ...",0x2d);
  _gfortran_st_write_done(&local_1344);
  local_133c = 0x8070922;
  local_1338 = 0x8f;
  local_1314 = &DAT_0807092c;
  local_1310 = 3;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 5;
  _gfortran_st_read(&local_1344);
  _gfortran_transfer_character(&local_1344,local_468,0x84);
  _gfortran_st_read_done(&local_1344);
  local_133c = 0x8070922;
  local_1338 = 0x90;
  local_1314 = &DAT_0807092c;
  local_1310 = 3;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 6;
  _gfortran_st_write(&local_1344);
  _gfortran_transfer_character(&local_1344," The name of the output file is :",0x21);
  _gfortran_transfer_character(&local_1344,local_468,0x84);
  _gfortran_st_write_done(&local_1344);
  local_133c = 0x8070922;
  local_1338 = 0x91;
  local_1314 = &DAT_0807092c;
  local_1310 = 3;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 6;
  _gfortran_st_write(&local_1344);
  _gfortran_transfer_character
            (&local_1344,
                          
             " Please, give the root name for the (non)linear optical data output file ... The root name of the output files is :formatted\n"
             ,0x4c);
  _gfortran_st_write_done(&local_1344);
  local_133c = 0x8070922;
  local_1338 = 0x92;
  local_1314 = &DAT_0807092c;
  local_1310 = 3;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 5;
  _gfortran_st_read(&local_1344);
  _gfortran_transfer_character(&local_1344,local_568,0x100);
  _gfortran_st_read_done(&local_1344);
  local_133c = 0x8070922;
  local_1338 = 0x93;
  local_1314 = &DAT_0807092c;
  local_1310 = 3;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 6;
  _gfortran_st_write(&local_1344);
  _gfortran_transfer_character(&local_1344,0x8070a1c,0x27);
  _gfortran_string_trim(&local_10c0,&local_10c4,0x100,local_568);
  _gfortran_transfer_character(&local_1344,local_10c4,local_10c0);
  if ((0 < local_10c0) && (local_10c4 != (void *)0x0)) {
    free(local_10c4);
  }
  _gfortran_st_write_done(&local_1344);
  local_133c = 0x8070922;
  local_1338 = 0x96;
  local_1320 = local_1d4;
  local_1324 = 0x84;
  local_130c = 0x8070a43;
  local_1308 = 9;
  local_1344 = (hdr_type *)0x900;
  local_1340 = 0xf;
  _gfortran_st_open(&local_1344);
  local_10d8 = 0x8070922;
  local_10d4 = 0x97;
  local_10e0 = 0;
  local_10dc = 0xf;
  _gfortran_st_rewind(&local_10e0);
  local_133c = 0x8070922;
  local_1338 = 0x98;
  local_1314 = &DAT_0807092c;
  local_1310 = 3;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 0xf;
  _gfortran_st_read(&local_1344);
  _gfortran_transfer_character(&local_1344,local_2dc,0x84);
  _gfortran_st_read_done(&local_1344);
  local_133c = 0x8070922;
  local_1338 = 0x99;
  local_1314 = &DAT_0807092c;
  local_1310 = 3;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 0xf;
  _gfortran_st_read(&local_1344);
  _gfortran_transfer_character(&local_1344,local_360,0x84);
  _gfortran_st_read_done(&local_1344);
  local_133c = 0x8070922;
  local_1338 = 0x9a;
  local_1314 = &DAT_0807092c;
  local_1310 = 3;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 0xf;
  _gfortran_st_read(&local_1344);
  _gfortran_transfer_character(&local_1344,local_3e4,0x84);
  _gfortran_st_read_done(&local_1344);
  local_133c = 0x8070922;
  local_1338 = 0x9b;
  local_1314 = &DAT_0807092c;
  local_1310 = 3;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 0xf;
  _gfortran_st_read(&local_1344);
  _gfortran_transfer_character(&local_1344,local_258,0x84);
  _gfortran_st_read_done(&local_1344);
  accesswff = 0;
  local_bd8 = 0;
  local_9f8 = 0;
  local_a0c = 0;
  wffopen(&accesswff,&local_bd8,local_258,&local_99c,&local_e4c,&local_9f8,&local_a0c,0x8070a4c,0x84
         );
  wffopen(&accesswff,&local_bd8,local_2dc,&local_99c,&local_f14,&local_9f8,&local_a0c,&DAT_08070a50,
          0x84);
  wffopen(&accesswff,&local_bd8,local_360,&local_99c,&local_fdc,&local_9f8,&local_a0c,&DAT_08070a54,
          0x84);
  local_14bc = (wffile_type *)0x84;
  local_14c0 = (wffile_type *)&DAT_08070a58;
  local_14c4 = (complex_kind_8_ (*) [1] [1] [1] [4] [1])&local_a0c;
  wffopen(&accesswff,&local_bd8,local_3e4,&local_99c,&local_10a4,&local_9f8,local_14c4,&DAT_08070a58
          ,0x84);
  local_b2c = 1;
  local_14d8 = local_994;
  hdr_io_wfftype(&local_150,(hdr_type *)local_14d8,&local_b2c,&local_e4c);
  local_998 = local_994._8_4_;
  local_b4 = local_7f8;
  local_a18 = local_994._20_4_;
  local_a38 = local_994._24_4_;
  local_ab8 = local_994._40_4_;
  puVar6 = local_7c0;
  iVar1 = 1;
  while (iVar1 < 4) {
    unaff_EDI = iVar1 * 3 + -4;
    iVar4 = 1;
    while (iVar4 < 4) {
      unaff_EBX = (void *)(iVar4 + unaff_EDI);
      *(undefined8 *)(&local_bbc + (iVar4 + iVar1 * 3 + -4) * 8) = puVar6[(int)unaff_EBX];
      iVar4 = iVar4 + 1;
    }
    iVar1 = iVar1 + 1;
  }
  local_a28 = 0x109;
  local_a20 = 1;
  local_a1c = local_994._40_4_ * (int)local_994._24_4_;
  local_a24 = 1;
  iVar1 = 0;
  if (-1 < local_994._40_4_ * (int)local_994._24_4_) {
    iVar1 = local_994._40_4_ * (int)local_994._24_4_;
  }
  if (local_994._40_4_ * (int)local_994._24_4_ < 1) {
    __size = 0;
  }
  else {
    __size = iVar1 * 4;
  }
  if (local_a30 == (hdr_type *)0x0) {
    if ((int)__size < 0) {
      __size = _gfortran_runtime_error
                         ("Attempt to allocate negative amount of memory. Possible integer overflow"
                         );
    }
    if ((int)__size < 1) {
      __size = 1;
    }
    __ptr_00 = (hdr_type *)malloc(__size);
    if (__ptr_00 == (hdr_type *)0x0) {
      __ptr_00 = (hdr_type *)_gfortran_os_error("Out of memory");
    }
    local_a2c = -1;
    local_acc = 0x219;
    local_ac4 = 1;
    local_ac0 = local_994._0_4_;
    local_ac8 = 1;
    iVar1 = 0;
    if (-1 < local_994._0_4_) {
      iVar1 = local_994._0_4_;
    }
    local_a30 = __ptr_00;
    if (local_994._0_4_ < 1) goto LAB_08049a41;
    __size = iVar1 * 8;
  }
  else {
    local_14d8 = "Attempting to allocate already allocated array \'%s\'";
    _gfortran_runtime_error_at
              ("At line 180 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'","nband");
LAB_08049a41:
    __size = 0;
  }
  if (local_ad4 == (wffile_type *)0x0) {
    if ((int)__size < 0) {
      __size = _gfortran_runtime_error
                         ("Attempt to allocate negative amount of memory. Possible integer overflow"
                         );
    }
    if ((int)__size < 1) {
      __size = 1;
    }
    unaff_EBX = malloc(__size);
    if (unaff_EBX == (void *)0x0) {
      unaff_EBX = (void *)_gfortran_os_error("Out of memory");
    }
    local_ad0 = 0xffffffff;
    local_14c = (double)local_7e8;
    local_145c = local_994._0_4_;
    local_1460 = -1;
    local_1454 = local_730;
    local_1458 = local_ac8;
    iVar1 = 1;
    puVar6 = local_73c;
    unaff_EDI = local_738;
    local_ad4 = (wffile_type *)unaff_EBX;
  }
  else {
    local_14d8 = "Attempting to allocate already allocated array \'%s\'";
    _gfortran_runtime_error_at
              ("At line 180 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'",&DAT_08070b0e);
    iVar1 = extraout_EDX;
  }
  while (__ptr_00 = local_a30, iVar1 <= local_145c) {
    *(undefined8 *)((int)unaff_EBX + (local_1458 * iVar1 + local_1460) * 8) =
         puVar6[local_1454 * iVar1 + unaff_EDI];
    iVar1 = iVar1 + 1;
  }
  iVar1 = 1;
  while (iVar1 <= (int)local_a38 * local_ab8) {
    (&local_a30->bantot)[local_a24 * iVar1 + local_a2c] =
         (&(local_994._124_4_)->bantot)[local_90c * iVar1 + local_914];
    iVar1 = iVar1 + 1;
  }
  local_abc = local_994._44_4_;
  local_c60 = 0x10b;
  local_c58 = 1;
  local_c54 = 3;
  local_c5c = 1;
  local_c4c = 1;
  local_c48 = 3;
  local_c50 = 3;
  local_c40 = 1;
  local_c3c = local_994._44_4_;
  local_c44 = 9;
  iVar1 = 0;
  if (-1 < local_994._44_4_) {
    iVar1 = local_994._44_4_;
  }
  if (local_994._44_4_ < 1) {
    __size = 0;
  }
  else {
    __size = iVar1 * 0x24;
  }
  if (local_c68 == (integer_kind_4_ (*) [4] [4] [1])0x0) {
    if ((int)__size < 0) {
      __size = _gfortran_runtime_error
                         ("Attempt to allocate negative amount of memory. Possible integer overflow"
                         );
    }
    if ((int)__size < 1) {
      __size = 1;
    }
    local_14c8 = (integer_kind_4_ (*) [4] [4] [1])malloc(__size);
    if (local_14c8 == (integer_kind_4_ (*) [4] [4] [1])0x0) {
      local_14c8 = (integer_kind_4_ (*) [4] [4] [1])_gfortran_os_error("Out of memory");
    }
    local_c64 = -0xd;
    local_c30 = 0x10b;
    local_c28 = 1;
    local_c24 = 3;
    local_c2c = 1;
    local_c1c = 1;
    local_c18 = 3;
    local_c20 = 3;
    local_c10 = 1;
    local_c0c = local_abc;
    local_c14 = 9;
    iVar1 = 0;
    if (-1 < local_abc) {
      iVar1 = local_abc;
    }
    local_c68 = local_14c8;
    if (local_abc < 1) goto LAB_08049d6f;
    __size = iVar1 * 0x24;
  }
  else {
    local_14d8 = "Attempting to allocate already allocated array \'%s\'";
    _gfortran_runtime_error_at
              ("At line 186 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'","symrel");
LAB_08049d6f:
    __size = 0;
  }
  if (local_c38 == (integer_kind_4_ (*) [4] [4] [1])0x0) {
    if ((int)__size < 0) {
      __size = _gfortran_runtime_error
                         ("Attempt to allocate negative amount of memory. Possible integer overflow"
                         );
    }
    if ((int)__size < 1) {
      __size = 1;
    }
    local_14c8 = (integer_kind_4_ (*) [4] [4] [1])malloc(__size);
    if (local_14c8 == (integer_kind_4_ (*) [4] [4] [1])0x0) {
      local_14c8 = (integer_kind_4_ (*) [4] [4] [1])_gfortran_os_error("Out of memory");
    }
    local_c34 = 0xfffffff3;
    local_1414 = local_858;
    local_1418 = local_854;
    local_141c = local_848;
    local_1420 = local_844;
    local_1424 = local_83c;
    local_1428 = local_838;
    local_142c = local_82c;
    local_1430 = local_c68;
    local_1434 = local_c64;
    local_1438 = local_c58 - local_848;
    local_143c = local_c4c - (int)local_83c;
    local_1440 = local_c40 - (int)local_830;
    local_140c = local_84c;
    local_1410 = local_c5c;
    __ptr_00 = local_830;
    local_c38 = local_14c8;
  }
  else {
    local_14d8 = "Attempting to allocate already allocated array \'%s\'";
    _gfortran_runtime_error_at
              ("At line 186 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'","symrec");
    local_830 = local_994._124_4_;
  }
  while (iVar1 = local_abc, (int)local_830 <= local_142c) {
    __ptr_00 = local_1424;
    while ((int)__ptr_00 <= local_1428) {
      iVar1 = local_141c;
      while (iVar1 <= local_1420) {
        *(undefined4 *)
         ((int)*local_1430 +
         (local_1434 + local_c44 * ((int)&local_830->bantot + local_1440) +
          local_c50 * ((int)&__ptr_00->bantot + local_143c) + (iVar1 + local_1438) * local_1410) * 4
         ) = *(undefined4 *)
              (local_1414 +
              (local_140c * iVar1 +
              local_1418 + local_834 * (int)local_830 + local_840 * (int)__ptr_00) * 4);
        iVar1 = iVar1 + 1;
      }
      __ptr_00 = (hdr_type *)((int)&__ptr_00->bantot + 1);
    }
    local_830 = (hdr_type *)((int)&local_830->bantot + 1);
  }
  local_2c = 1;
  if (0 < local_abc) {
    do {
      local_11e8 = 0x10a;
      local_11e0 = 1;
      local_11dc = (1 - local_c58) + local_c54;
      local_11e4 = local_c5c;
      local_11d4 = 1;
      local_11d0 = (1 - local_c4c) + local_c48;
      local_11d8 = local_c50;
      local_11f0 = (integer_kind_4_ (*) [4] [4] [1])
                   ((int)*local_c68 + local_c44 * (local_2c - local_c40) * 4);
      local_11ec = 0;
      local_14c8 = (integer_kind_4_ (*) [4] [4] [1])_gfortran_internal_pack(&local_11f0,local_14d8);
      local_133c = 0x10a;
      local_1334 = 1;
      local_1330 = (1 - local_c28) + local_c24;
      local_1338 = local_c2c;
      local_1328 = 1;
      local_1324 = (1 - local_c1c) + local_c18;
      local_132c = local_c20;
      local_1344 = (hdr_type *)(*local_c38 + local_c14 * (local_2c - local_c10));
      local_1340 = 0;
      __ptr_00 = (hdr_type *)_gfortran_internal_pack(&local_1344);
      local_14d8 = (char *)__ptr_00;
      mati3inv(local_14c8);
      if ((local_11f0 != local_14c8) && (local_14c8 != (integer_kind_4_ (*) [4] [4] [1])0x0)) {
        free(local_14c8);
      }
      if ((local_1344 != __ptr_00) &&
         (local_14d8 = (char *)__ptr_00, _gfortran_internal_unpack(&local_1344),
         __ptr_00 != (hdr_type *)0x0)) {
        free(__ptr_00);
      }
      bVar7 = local_2c != iVar1;
      local_2c = local_2c + 1;
    } while (bVar7);
  }
  local_9c0 = 0x21a;
  local_9b8 = 1;
  local_9b4 = 3;
  local_9bc = 1;
  local_9ac = 1;
  local_9a8 = local_a38;
  local_9b0 = 3;
  phVar5 = (hdr_type *)0x0;
  if (-1 < (int)local_a38) {
    phVar5 = local_a38;
  }
  if ((int)local_a38 < 1) {
    __size = 0;
  }
  else {
    __size = (int)phVar5 * 0x18;
  }
  if (local_9c8 == (real_kind_8_ (*) [4] [1])0x0) {
    if ((int)__size < 0) {
      __size = _gfortran_runtime_error
                         ("Attempt to allocate negative amount of memory. Possible integer overflow"
                         );
    }
    if ((int)__size < 1) {
      __size = 1;
    }
    local_13d8 = (real_kind_8_ (*) [4] [1])malloc(__size);
    if (local_13d8 == (real_kind_8_ (*) [4] [1])0x0) {
      local_13d8 = (real_kind_8_ (*) [4] [1])_gfortran_os_error("Out of memory");
    }
    local_9c4 = 0xfffffffc;
    local_13c4 = local_760;
    local_13c8 = local_75c;
    local_13cc = local_750;
    local_13d0 = local_74c;
    local_13d4 = local_740;
    local_13dc = -4;
    local_13e0 = local_9b8 - local_750;
    local_13e4 = local_9ac - (int)local_744;
    local_13bc = local_754;
    local_13c0 = local_9bc;
    __ptr_00 = local_744;
    local_9c8 = local_13d8;
  }
  else {
    _gfortran_runtime_error_at
              ("At line 192 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'",&DAT_08070b3e);
  }
  while ((int)__ptr_00 <= local_13d4) {
    iVar1 = local_13cc;
    while (iVar1 <= local_13d0) {
      (*local_13d8)
      [(iVar1 + local_13e0) * local_13c0 +
       local_9b0 * ((int)&__ptr_00->bantot + local_13e4) + local_13dc] =
           *(real_kind_8_ *)
            (local_13c4 + (local_13bc * iVar1 + local_748 * (int)__ptr_00 + local_13c8) * 8);
      iVar1 = iVar1 + 1;
    }
    __ptr_00 = (hdr_type *)((int)&__ptr_00->bantot + 1);
  }
  local_a08 = -0x80000000;
  iVar1 = local_a20;
  while (iVar1 <= local_a1c) {
    if (local_a08 < (&local_a30->bantot)[iVar1 * local_a24 + local_a2c]) {
      local_a08 = (&local_a30->bantot)[iVar1 * local_a24 + local_a2c];
    }
    iVar1 = iVar1 + 1;
  }
  local_30 = (hdr_type *)0x1;
  __ptr_00 = local_a38;
  phVar5 = local_a30;
  if (0 < (int)local_a38) {
    do {
      phVar5 = (hdr_type *)(local_a24 * (int)local_30);
      if ((&local_a30->bantot)[(int)&phVar5->bantot + local_a2c] != local_a08) {
        local_133c = 0x8070922;
        local_1338 = 199;
        local_1344 = (hdr_type *)0x80;
        local_1340 = 6;
        _gfortran_st_write(&local_1344);
        _gfortran_transfer_character
                  (&local_1344,
                                      
                   "optic : Error : nband must be constant across kpts(a,3f10.5,a) rprimd(bohr)      =                    (a,i8) natom             =(a,2i8) nkpt,mband        =(a, f10.5,a) ecut              = Ha(a,f10.5,a,f10.5,a) fermie            = eVeigtmp"
                   ,0x32);
        _gfortran_st_write_done(&local_1344);
        __ptr_00 = (hdr_type *)_gfortran_stop_numeric(0xffffffff);
      }
      bVar7 = local_30 != __ptr_00;
      local_30 = (hdr_type *)((int)&local_30->bantot + 1);
    } while (bVar7);
  }
  local_133c = 0x8070922;
  local_1338 = 0xcc;
  local_1344 = (hdr_type *)0x80;
  local_1340 = 6;
  _gfortran_st_write(&local_1344);
  _gfortran_st_write_done(&local_1344);
  local_133c = 0x8070922;
  local_1338 = 0xcd;
  local_1314 = 
  "(a,3f10.5,a) rprimd(bohr)      =                    (a,i8) natom             =(a,2i8) nkpt,mband        =(a, f10.5,a) ecut              = Ha(a,f10.5,a,f10.5,a) fermie            = eVeigtmp"
  ;
  local_1310 = 0xc;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 6;
  _gfortran_st_write(&local_1344);
  _gfortran_transfer_character(&local_1344,0x8070b9e,0x14);
  local_10f0 = 0x219;
  local_10e8 = 1;
  local_10e4 = 3;
  local_10ec = 3;
  local_10f8 = (real_kind_8_ *)&local_bbc;
  local_10f4 = 0xfffffffc;
  _gfortran_transfer_array(&local_1344,&local_10f8,8,0);
  _gfortran_st_write_done(&local_1344);
  local_133c = 0x8070922;
  local_1338 = 0xce;
  local_1314 = 
  "(a,3f10.5,a) rprimd(bohr)      =                    (a,i8) natom             =(a,2i8) nkpt,mband        =(a, f10.5,a) ecut              = Ha(a,f10.5,a,f10.5,a) fermie            = eVeigtmp"
  ;
  local_1310 = 0xc;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 6;
  _gfortran_st_write(&local_1344);
  _gfortran_transfer_character(&local_1344,0x8070bb2,0x14);
  local_1108 = 0x219;
  local_1100 = 1;
  local_10fc = 3;
  local_1104 = 3;
  local_1110 = &local_bbc + 8;
  local_110c = 0xfffffffc;
  _gfortran_transfer_array(&local_1344,&local_1110,8,0);
  _gfortran_st_write_done(&local_1344);
  local_133c = 0x8070922;
  local_1338 = 0xcf;
  local_1314 = 
  "(a,3f10.5,a) rprimd(bohr)      =                    (a,i8) natom             =(a,2i8) nkpt,mband        =(a, f10.5,a) ecut              = Ha(a,f10.5,a,f10.5,a) fermie            = eVeigtmp"
  ;
  local_1310 = 0xc;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 6;
  _gfortran_st_write(&local_1344);
  _gfortran_transfer_character(&local_1344,0x8070bb2,0x14);
  local_1120 = 0x219;
  local_1118 = 1;
  local_1114 = 3;
  local_111c = 3;
  local_1128 = auStack2988;
  local_1124 = 0xfffffffc;
  _gfortran_transfer_array(&local_1344,&local_1128,8,0);
  _gfortran_st_write_done(&local_1344);
  local_133c = 0x8070922;
  local_1338 = 0xd0;
  local_1314 = 
  "(a,i8) natom             =(a,2i8) nkpt,mband        =(a, f10.5,a) ecut              = Ha(a,f10.5,a,f10.5,a) fermie            = eVeigtmp"
  ;
  local_1310 = 6;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 6;
  _gfortran_st_write(&local_1344);
  _gfortran_transfer_character(&local_1344,0x8070bcc,0x14);
  _gfortran_transfer_integer(&local_1344,&local_a18,4);
  _gfortran_st_write_done(&local_1344);
  local_133c = 0x8070922;
  local_1338 = 0xd1;
  local_1314 = 
  "(a,2i8) nkpt,mband        =(a, f10.5,a) ecut              = Ha(a,f10.5,a,f10.5,a) fermie            = eVeigtmp"
  ;
  local_1310 = 7;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 6;
  _gfortran_st_write(&local_1344);
  _gfortran_transfer_character(&local_1344,0x8070be7,0x14);
  _gfortran_transfer_integer(&local_1344,&local_a38,4);
  _gfortran_transfer_integer(&local_1344,&local_a08,4);
  _gfortran_st_write_done(&local_1344);
  local_133c = 0x8070922;
  local_1338 = 0xd2;
  local_1314 = "(a, f10.5,a) ecut              = Ha(a,f10.5,a,f10.5,a) fermie            = eVeigtmp"
  ;
  local_1310 = 0xc;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 6;
  _gfortran_st_write(&local_1344);
  _gfortran_transfer_character(&local_1344,0x8070c07,0x14);
  _gfortran_transfer_real(&local_1344,&local_b4,8);
  _gfortran_transfer_character(&local_1344,0x8070c1b,3);
  _gfortran_st_write_done(&local_1344);
  local_133c = 0x8070922;
  local_1338 = 0xd3;
  local_1314 = "(a,f10.5,a,f10.5,a) fermie            = eVeigtmp";
  local_1310 = 0x13;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 6;
  _gfortran_st_write(&local_1344);
  _gfortran_transfer_character(&local_1344,0x8070c31,0x14);
  _gfortran_transfer_real(&local_1344,&local_14c,8);
  _gfortran_transfer_character(&local_1344,0x8070c1b,3);
  local_1134 = local_14c * 27.21138450;
  _gfortran_transfer_real(&local_1344,&local_1134,8);
  _gfortran_transfer_character(&local_1344,0x8070c45,3);
  _gfortran_st_write_done(&local_1344);
  local_56c = 1;
  local_c6c = 0;
  local_13c = 0x219;
  local_134 = 1;
  local_130 = local_a08 * local_a08 * 2;
  local_138 = 1;
  iVar1 = local_a08 * local_a08 * 2;
  iVar4 = 0;
  if (-1 < iVar1) {
    iVar4 = iVar1;
  }
  if (local_a08 * local_a08 * 2 < 1) {
    __size = 0;
  }
  else {
    __size = iVar4 * 8;
  }
  if (local_144 == (void *)0x0) {
    if ((int)__size < 0) {
      __size = _gfortran_runtime_error
                         ("Attempt to allocate negative amount of memory. Possible integer overflow"
                         );
    }
    if ((int)__size < 1) {
      __size = 1;
    }
    __ptr = malloc(__size);
    if (__ptr == (void *)0x0) {
      __ptr = (void *)_gfortran_os_error("Out of memory");
    }
    local_140 = -1;
    local_c4 = 0x219;
    local_bc = 1;
    local_b8 = local_a08;
    local_c0 = 1;
    iVar1 = 0;
    if (-1 < local_a08) {
      iVar1 = local_a08;
    }
    local_144 = __ptr;
    if (local_a08 < 1) goto LAB_0804ac9d;
    __size = iVar1 * 8;
  }
  else {
    _gfortran_runtime_error_at
              ("At line 215 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'",0x8070c48);
LAB_0804ac9d:
    __size = 0;
  }
  if (local_cc == (void *)0x0) {
    if ((int)__size < 0) {
      __size = _gfortran_runtime_error
                         ("Attempt to allocate negative amount of memory. Possible integer overflow"
                         );
    }
    if ((int)__size < 1) {
      __size = 1;
    }
    __ptr = malloc(__size);
    if (__ptr == (void *)0x0) {
      __ptr = (void *)_gfortran_os_error("Out of memory");
    }
    local_c8 = -1;
    local_cc = __ptr;
    hdr_skip_wfftype(&local_f14,&local_99c);
    hdr_skip_wfftype(&local_fdc,&local_99c);
    hdr_skip_wfftype(&local_10a4,&local_99c);
    local_dc = 0x219;
    local_d4 = 1;
    local_d0 = local_ab8 * local_a08 * (int)local_a38;
    local_d8 = 1;
    iVar4 = local_ab8 * local_a08 * (int)local_a38;
    iVar1 = 0;
    if (-1 < iVar4) {
      iVar1 = iVar4;
    }
    if (local_ab8 * local_a08 * (int)local_a38 < 1) goto LAB_0804ade3;
    __size = iVar1 * 8;
  }
  else {
    _gfortran_runtime_error_at
              ("At line 215 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'","eig0tmp");
LAB_0804ade3:
    __size = 0;
  }
  if (local_e4 == (wffile_type *)0x0) {
    if ((int)__size < 0) {
      __size = _gfortran_runtime_error
                         ("Attempt to allocate negative amount of memory. Possible integer overflow"
                         );
    }
    if ((int)__size < 1) {
      __size = 1;
    }
    pwVar2 = (wffile_type *)malloc(__size);
    if (pwVar2 == (wffile_type *)0x0) {
      pwVar2 = (wffile_type *)_gfortran_os_error("Out of memory");
    }
    local_e0 = -1;
    local_f4 = 0x219;
    local_ec = 1;
    local_e8 = local_ab8 * local_a08 * local_a08 * 2 * (int)local_a38;
    local_f0 = 1;
    iVar4 = local_ab8 * local_a08 * local_a08 * 2 * (int)local_a38;
    iVar1 = 0;
    if (-1 < iVar4) {
      iVar1 = iVar4;
    }
    local_e4 = pwVar2;
    if (local_ab8 * local_a08 * local_a08 * 2 * (int)local_a38 < 1) goto LAB_0804af05;
    __size = iVar1 * 8;
  }
  else {
    _gfortran_runtime_error_at
              ("At line 221 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'","eigen0");
LAB_0804af05:
    __size = 0;
  }
  if (local_fc == (real_kind_8_ (*) [3] [1] [1] [1] [1])0x0) {
    if ((int)__size < 0) {
      __size = _gfortran_runtime_error
                         ("Attempt to allocate negative amount of memory. Possible integer overflow"
                         );
    }
    if ((int)__size < 1) {
      __size = 1;
    }
    paaaaarVar3 = (real_kind_8_ (*) [3] [1] [1] [1] [1])malloc(__size);
    if (paaaaarVar3 == (real_kind_8_ (*) [3] [1] [1] [1] [1])0x0) {
      paaaaarVar3 = (real_kind_8_ (*) [3] [1] [1] [1] [1])_gfortran_os_error("Out of memory");
    }
    local_f8 = -1;
    local_10c = 0x219;
    local_104 = 1;
    local_100 = local_ab8 * local_a08 * local_a08 * 2 * (int)local_a38;
    local_108 = 1;
    iVar4 = local_ab8 * local_a08 * local_a08 * 2 * (int)local_a38;
    iVar1 = 0;
    if (-1 < iVar4) {
      iVar1 = iVar4;
    }
    local_fc = paaaaarVar3;
    if (local_ab8 * local_a08 * local_a08 * 2 * (int)local_a38 < 1) goto LAB_0804b027;
    __size = iVar1 * 8;
  }
  else {
    _gfortran_runtime_error_at
              ("At line 222 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'","eigen11");
LAB_0804b027:
    __size = 0;
  }
  if (local_114 == (real_kind_8_ (*) [3] [1] [1] [1] [1])0x0) {
    if ((int)__size < 0) {
      __size = _gfortran_runtime_error
                         ("Attempt to allocate negative amount of memory. Possible integer overflow"
                         );
    }
    if ((int)__size < 1) {
      __size = 1;
    }
    paaaaarVar3 = (real_kind_8_ (*) [3] [1] [1] [1] [1])malloc(__size);
    if (paaaaarVar3 == (real_kind_8_ (*) [3] [1] [1] [1] [1])0x0) {
      paaaaarVar3 = (real_kind_8_ (*) [3] [1] [1] [1] [1])_gfortran_os_error("Out of memory");
    }
    local_110 = -1;
    local_124 = 0x219;
    local_11c = 1;
    local_118 = local_ab8 * local_a08 * local_a08 * 2 * (int)local_a38;
    local_120 = (hdr_type *)0x1;
    iVar4 = local_ab8 * local_a08 * local_a08 * 2 * (int)local_a38;
    iVar1 = 0;
    if (-1 < iVar4) {
      iVar1 = iVar4;
    }
    local_114 = paaaaarVar3;
    if (local_ab8 * local_a08 * local_a08 * 2 * (int)local_a38 < 1) goto LAB_0804b149;
    __size = iVar1 * 8;
  }
  else {
    _gfortran_runtime_error_at
              ("At line 223 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'","eigen12");
LAB_0804b149:
    __size = 0;
  }
  if (local_12c == (real_kind_8_ (*) [3] [1] [1] [1] [1])0x0) {
    if ((int)__size < 0) {
      __size = _gfortran_runtime_error
                         ("Attempt to allocate negative amount of memory. Possible integer overflow"
                         );
    }
    if ((int)__size < 1) {
      __size = 1;
    }
    paaaaarVar3 = (real_kind_8_ (*) [3] [1] [1] [1] [1])malloc(__size);
    if (paaaaarVar3 == (real_kind_8_ (*) [3] [1] [1] [1] [1])0x0) {
      paaaaarVar3 = (real_kind_8_ (*) [3] [1] [1] [1] [1])_gfortran_os_error("Out of memory");
    }
    local_128 = -1;
    bdtot0_index = 0;
    bdtot_index = 0;
    local_13b4 = local_ab8;
    local_9a4 = 1;
    local_12c = paaaaarVar3;
    if (0 < local_ab8) goto LAB_0804b1f7;
  }
  else {
    _gfortran_runtime_error_at
              ("At line 224 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'","eigen13");
LAB_0804b1f7:
    do {
      __ptr_00 = local_a38;
      local_9a0 = (hdr_type *)0x1;
      phVar5 = local_a38;
      if (0 < (int)local_a38) {
        do {
          local_a34 = (&local_a30->bantot)
                      [(int)((int)&local_9a0->bantot + (local_9a4 + -1) * (int)local_a38) *
                       local_a24 + local_a2c];
          wffreadeigk(local_cc,&DAT_08070d0c,&local_998,&local_9a0,&local_9a4,&local_a08,&local_a34,
                      &local_c6c,&local_e4c);
          iVar1 = 1;
          while (iVar1 <= local_a34) {
            *(real_kind_8_ *)(&local_e4->unwff + local_e0 + (iVar1 + bdtot0_index) * local_d8) =
                 *(real_kind_8_ *)((int)local_cc + (local_c8 + iVar1 * local_c0) * 8);
            iVar1 = iVar1 + 1;
          }
          wffreadeigk(local_144,&local_56c,&local_998,&local_9a0,&local_9a4,&local_a08,&local_a34,
                      &local_c6c,&local_f14);
          iVar1 = 1;
          while (iVar1 <= local_a34 * local_a34 * 2) {
            (*local_fc)[local_f8 + (iVar1 + bdtot_index) * local_f0] =
                 *(real_kind_8_ *)((int)local_144 + (local_140 + iVar1 * local_138) * 8);
            iVar1 = iVar1 + 1;
          }
          wffreadeigk(local_144,&local_56c,&local_998,&local_9a0,&local_9a4,&local_a08,&local_a34,
                      &local_c6c,&local_fdc);
          iVar1 = 1;
          while (iVar1 <= local_a34 * local_a34 * 2) {
            (*local_114)[local_110 + (iVar1 + bdtot_index) * local_108] =
                 *(real_kind_8_ *)((int)local_144 + (local_140 + iVar1 * local_138) * 8);
            iVar1 = iVar1 + 1;
          }
          local_14bc = &local_10a4;
          local_14c0 = (wffile_type *)&local_c6c;
          local_14c4 = (complex_kind_8_ (*) [1] [1] [1] [4] [1])&local_a34;
          wffreadeigk(local_144,&local_56c,&local_998,&local_9a0,&local_9a4,&local_a08,local_14c4,
                      local_14c0,local_14bc);
          iVar1 = 1;
          while (iVar1 <= local_a34 * local_a34 * 2) {
            (*local_12c)[local_128 + (iVar1 + bdtot_index) * (int)local_120] =
                 *(real_kind_8_ *)((int)local_144 + (local_140 + iVar1 * local_138) * 8);
            iVar1 = iVar1 + 1;
          }
          bdtot0_index = bdtot0_index + local_a34;
          bdtot_index = bdtot_index + local_a34 * local_a34 * 2;
          bVar7 = local_9a0 != __ptr_00;
          local_9a0 = (hdr_type *)((int)&local_9a0->bantot + 1);
          phVar5 = local_120;
        } while (bVar7);
      }
      bVar7 = local_9a4 != local_13b4;
      local_9a4 = local_9a4 + 1;
    } while (bVar7);
  }
  wffclose(&local_e4c,&local_99c);
  wffclose(&local_f14,&local_99c);
  wffclose(&local_fdc,&local_99c);
  wffclose(&local_10a4,&local_99c);
  if (local_144 == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 246 of file optic.F90","Attempt to DEALLOCATE unallocated \'%s\'",0x8070c48)
    ;
  }
  free(local_144);
  local_144 = (void *)0x0;
  if (local_cc == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 246 of file optic.F90","Attempt to DEALLOCATE unallocated \'%s\'","eig0tmp")
    ;
  }
  free(local_cc);
  local_cc = (void *)0x0;
  local_14c8 = (integer_kind_4_ (*) [4] [4] [1])local_d84;
  local_14cc = (integer_kind_4_ (*) [4] [4] [1])&local_bbc;
  local_14d0 = (integer_kind_4_ (*) [4] [4] [1])local_b74;
  metric(local_5b4,local_644,&DAT_08070d58,local_14d0,local_14cc,local_14c8);
  matr3inv((real_kind_8_ (*) [4] [4])local_5b4,(real_kind_8_ (*) [4] [4])local_5fc);
  local_10b4 = 0x219;
  local_10ac = 1;
  local_10a8 = local_a38;
  local_10b0 = 1;
  __ptr_00 = (hdr_type *)0x0;
  if (-1 < (int)local_a38) {
    __ptr_00 = local_a38;
  }
  if ((int)local_a38 < 1) {
    __size = 0;
  }
  else {
    __size = (int)__ptr_00 * 8;
  }
  if (local_10bc == (integer_kind_4_ (*) [4] [4] [1])0x0) {
    if ((int)__size < 0) {
      __size = _gfortran_runtime_error
                         ("Attempt to allocate negative amount of memory. Possible integer overflow"
                         );
    }
    if ((int)__size < 1) {
      __size = 1;
    }
    local_14cc = (integer_kind_4_ (*) [4] [4] [1])malloc(__size);
    if (local_14cc == (integer_kind_4_ (*) [4] [4] [1])0x0) {
      local_14cc = (integer_kind_4_ (*) [4] [4] [1])_gfortran_os_error("Out of memory");
    }
    local_10b8 = 0xffffffff;
    local_14d0 = local_c38;
    local_10bc = local_14cc;
    getwtk(local_9c8,(integer_kind_4_ *)&local_a38,&local_abc,local_c38,
           (real_kind_8_ (*) [1])local_14cc);
    local_9c = 0x219;
    local_94 = 1;
    local_90 = local_ab8 * local_a08 * (int)local_a38;
    local_98 = 1;
    iVar4 = local_ab8 * local_a08 * (int)local_a38;
    iVar1 = 0;
    if (-1 < iVar4) {
      iVar1 = iVar4;
    }
    if (local_ab8 * local_a08 * (int)local_a38 < 1) goto LAB_0804b9c9;
    __size = iVar1 * 8;
  }
  else {
    _gfortran_runtime_error_at
              ("At line 256 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'",&DAT_08070d5c);
LAB_0804b9c9:
    __size = 0;
  }
  if (local_a4 == (void *)0x0) {
    if ((int)__size < 0) {
      __size = _gfortran_runtime_error
                         ("Attempt to allocate negative amount of memory. Possible integer overflow"
                         );
    }
    if ((int)__size < 1) {
      __size = 1;
    }
    __ptr = malloc(__size);
    if (__ptr == (void *)0x0) {
      __ptr = (void *)_gfortran_os_error("Out of memory");
    }
    local_a0 = -1;
    local_133c = 0x8070922;
    local_1338 = 0x105;
    local_1344 = (hdr_type *)0x80;
    local_1340 = 0xf;
    local_a4 = __ptr;
    _gfortran_st_read(&local_1344);
    _gfortran_transfer_real(&local_1344,local_d7c,8);
    _gfortran_st_read_done(&local_1344);
    local_133c = 0x8070922;
    local_1338 = 0x117;
    local_1344 = (hdr_type *)0x80;
    local_1340 = 0xf;
    _gfortran_st_read(&local_1344);
    _gfortran_transfer_real(&local_1344,&local_ac,8);
    _gfortran_transfer_real(&local_1344,&local_a04,8);
    _gfortran_st_read_done(&local_1344);
    local_ab4 = (int)ROUND(local_a04 / local_ac);
    local_a04 = local_ac * (double)local_ab4;
    local_84 = 0x219;
    local_7c = 1;
    local_80 = 1;
    iVar1 = 0;
    if (-1 < local_ab4) {
      iVar1 = local_ab4;
    }
    local_78 = local_ab4;
    if (local_ab4 < 1) goto LAB_0804bbcf;
    __size = iVar1 * 8;
  }
  else {
    _gfortran_runtime_error_at
              ("At line 259 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'","doccde");
LAB_0804bbcf:
    __size = 0;
  }
  if (local_8c == (void *)0x0) {
    if ((int)__size < 0) {
      __size = _gfortran_runtime_error
                         ("Attempt to allocate negative amount of memory. Possible integer overflow"
                         );
    }
    if ((int)__size < 1) {
      __size = 1;
    }
    __ptr = malloc(__size);
    if (__ptr == (void *)0x0) {
      __ptr = (void *)_gfortran_os_error("Out of memory");
    }
    local_88 = 0xffffffff;
    local_6c = 0x219;
    local_64 = 1;
    local_60 = local_ab4;
    local_68 = 1;
    iVar1 = 0;
    if (-1 < local_ab4) {
      iVar1 = local_ab4;
    }
    local_8c = __ptr;
    if (local_ab4 < 1) goto LAB_0804bc8b;
    __size = iVar1 * 8;
  }
  else {
    _gfortran_runtime_error_at
              ("At line 282 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'","cond_nd");
LAB_0804bc8b:
    __size = 0;
  }
  if (local_74 == (void *)0x0) {
    if ((int)__size < 0) {
      __size = _gfortran_runtime_error
                         ("Attempt to allocate negative amount of memory. Possible integer overflow"
                         );
    }
    if ((int)__size < 1) {
      __size = 1;
    }
    __ptr = malloc(__size);
    if (__ptr == (void *)0x0) {
      __ptr = (void *)_gfortran_os_error("Out of memory");
    }
    local_70 = 0xffffffff;
    local_133c = 0x8070922;
    local_1338 = 0x11d;
    local_1344 = (hdr_type *)0x80;
    local_1340 = 0xf;
    local_74 = __ptr;
    _gfortran_st_read(&local_1344);
    _gfortran_transfer_real(&local_1344,local_bd4,8);
    _gfortran_st_read_done(&local_1344);
    local_133c = 0x8070922;
    local_1338 = 0x11e;
    local_1314 = "(a,f10.5,a) Scissor shift     = Tolerance on closeness to singularities     =";
    local_1310 = 0xb;
    local_1344 = (hdr_type *)0x1000;
    local_1340 = 6;
    _gfortran_st_write(&local_1344);
    _gfortran_transfer_character(&local_1344,0x8070dd4,0x14);
    _gfortran_transfer_real(&local_1344,local_bd4,8);
    _gfortran_transfer_character(&local_1344,0x8070c1b,3);
    _gfortran_st_write_done(&local_1344);
    local_133c = 0x8070922;
    local_1338 = 0x120;
    local_1344 = (hdr_type *)0x80;
    local_1340 = 0xf;
    _gfortran_st_read(&local_1344);
    _gfortran_transfer_real(&local_1344,local_d74,8);
    _gfortran_st_read_done(&local_1344);
    local_133c = 0x8070922;
    local_1338 = 0x121;
    local_1314 = "(a,f10.5,a) Scissor shift     = Tolerance on closeness to singularities     =";
    local_1310 = 0xb;
    local_1344 = (hdr_type *)0x1000;
    local_1340 = 6;
    _gfortran_st_write(&local_1344);
    _gfortran_transfer_character(&local_1344,0x8070de8,0x2e);
    _gfortran_transfer_real(&local_1344,local_d74,8);
    _gfortran_transfer_character(&local_1344,0x8070c1b,3);
    _gfortran_st_write_done(&local_1344);
    local_133c = 0x8070922;
    local_1338 = 0x123;
    local_1344 = (hdr_type *)0x80;
    local_1340 = 0xf;
    _gfortran_st_read(&local_1344);
    _gfortran_transfer_integer(&local_1344,&local_a10,4);
    _gfortran_st_read_done(&local_1344);
    local_133c = 0x8070922;
    local_1338 = 0x124;
    local_1344 = (hdr_type *)0x80;
    local_1340 = 0xf;
    _gfortran_st_read(&local_1344);
    local_1144 = 0x109;
    local_113c = 1;
    local_1138 = local_a10;
    local_1140 = 1;
    local_114c = local_9f4;
    local_1148 = 0xffffffff;
    _gfortran_transfer_array(&local_1344,&local_114c,4,0);
    _gfortran_st_read_done(&local_1344);
    local_133c = 0x8070922;
    local_1338 = 0x125;
    local_1314 = &DAT_0807092c;
    local_1310 = 3;
    local_1344 = (hdr_type *)0x1000;
    local_1340 = 6;
    _gfortran_st_write(&local_1344);
    _gfortran_transfer_character(&local_1344," linear coeffs to be calculated : (9i3)",0x22);
    _gfortran_st_write_done(&local_1344);
    local_133c = 0x8070922;
    local_1338 = 0x127;
    local_1314 = "(9i3)";
    local_1310 = 5;
    local_1344 = (hdr_type *)0x1000;
    local_1340 = 6;
    _gfortran_st_write(&local_1344);
    local_115c = 0x109;
    local_1154 = 1;
    local_1150 = local_a10;
    local_1158 = 1;
    local_1164 = local_9f4;
    local_1160 = 0xffffffff;
    _gfortran_transfer_array(&local_1344,&local_1164,4,0);
    _gfortran_st_write_done(&local_1344);
    local_133c = 0x8070922;
    local_1338 = 0x128;
    local_1344 = (hdr_type *)0x80;
    local_1340 = 0xf;
    _gfortran_st_read(&local_1344);
    _gfortran_transfer_integer(&local_1344,&local_a14,4);
    _gfortran_st_read_done(&local_1344);
    local_133c = 0x8070922;
    local_1338 = 0x129;
    local_1344 = (hdr_type *)0x80;
    local_1340 = 0xf;
    _gfortran_st_read(&local_1344);
    local_1174 = 0x109;
    local_116c = 1;
    local_1168 = local_a14;
    local_1170 = 1;
    local_117c = local_ab0;
    local_1178 = 0xffffffff;
    _gfortran_transfer_array(&local_1344,&local_117c,4,0);
    _gfortran_st_read_done(&local_1344);
    local_133c = 0x8070922;
    local_1338 = 0x12a;
    local_1314 = &DAT_0807092c;
    local_1310 = 3;
    local_1344 = (hdr_type *)0x1000;
    local_1340 = 6;
    _gfortran_st_write(&local_1344);
    _gfortran_transfer_character
              (&local_1344," non-linear coeffs to be calculated : (27i4)cond_kg",0x26);
    _gfortran_st_write_done(&local_1344);
    local_133c = 0x8070922;
    local_1338 = 300;
    local_1314 = "(27i4)cond_kg";
    local_1310 = 6;
    local_1344 = (hdr_type *)0x1000;
    local_1340 = 6;
    _gfortran_st_write(&local_1344);
    local_118c = 0x109;
    local_1184 = 1;
    local_1180 = local_a14;
    local_1188 = 1;
    local_1194 = local_ab0;
    local_1190 = 0xffffffff;
    local_14d0 = (integer_kind_4_ (*) [4] [4] [1])0x0;
    _gfortran_transfer_array(&local_1344,&local_1194,4,0);
    _gfortran_st_write_done(&local_1344);
    local_133c = 0x8070922;
    local_1338 = 0x12e;
    local_1344 = (hdr_type *)0x0;
    local_1340 = 0xf;
    _gfortran_st_close(&local_1344);
    local_c00 = 0x21b;
    local_bf8 = 1;
    local_bf4 = 3;
    local_bfc = 1;
    local_bec = 1;
    local_be8 = 3;
    local_bf0 = 3;
    local_be0 = 1;
    local_bdc = local_abc;
    local_be4 = 9;
    iVar1 = 0;
    if (-1 < local_abc) {
      iVar1 = local_abc;
    }
    if (local_abc < 1) goto LAB_0804c480;
    __size = iVar1 * 0x48;
  }
  else {
    _gfortran_runtime_error_at
              ("At line 282 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'",0x8070e6c);
LAB_0804c480:
    __size = 0;
  }
  if (local_c08 == (integer_kind_4_ (*) [4] [4] [1])0x0) {
    if ((int)__size < 0) {
      __size = _gfortran_runtime_error
                         ("Attempt to allocate negative amount of memory. Possible integer overflow"
                         );
    }
    if ((int)__size < 1) {
      __size = 1;
    }
    local_14cc = (integer_kind_4_ (*) [4] [4] [1])malloc(__size);
    if (local_14cc == (integer_kind_4_ (*) [4] [4] [1])0x0) {
      local_14cc = (integer_kind_4_ (*) [4] [4] [1])_gfortran_os_error("Out of memory");
    }
    local_c04 = 0xfffffff3;
    local_14d0 = local_c68;
    local_c08 = local_14cc;
    sym2cart(local_644,&local_abc,&local_bbc,local_c68,local_14cc);
    local_b20 = 0x426;
    local_b18 = 1;
    local_b14 = 2;
    local_b1c = 1;
    local_b0c = 1;
    local_b08 = local_a08;
    local_b10 = 2;
    iVar1 = local_a08;
    if (local_a08 < 0) {
      iVar1 = 0;
    }
    local_b04 = iVar1 * 2;
    local_b00 = 1;
    local_afc = local_a08;
    local_af8 = local_a08;
    if (local_a08 < 0) {
      local_af8 = 0;
    }
    local_af8 = local_af8 * local_b04;
    local_af4 = 1;
    local_af0 = local_a38;
    __ptr_00 = local_a38;
    if ((int)local_a38 < 0) {
      __ptr_00 = (hdr_type *)0x0;
    }
    local_aec = (int)__ptr_00 * local_af8;
    local_ae8 = 1;
    local_ae4 = 3;
    local_ae0 = local_aec * 3;
    local_adc = 1;
    local_ad8 = local_ab8;
    iVar4 = local_ab8;
    if (local_ab8 < 0) {
      iVar4 = 0;
    }
    phVar5 = (hdr_type *)(((iVar1 * -2 + -3) - local_af8) + local_aec * -4);
    if (local_ab8 < 1 || (local_a08 < 1 || (int)local_a38 < 1)) goto LAB_0804c6a4;
    __size = iVar4 * local_ae0 * 0x10;
  }
  else {
    _gfortran_runtime_error_at
              ("At line 304 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'","symcart");
LAB_0804c6a4:
    __size = 0;
  }
  if (local_b28 == (complex_kind_8_ (*) [1] [1] [1] [4] [1])0x0) {
    if ((int)__size < 0) {
      __size = _gfortran_runtime_error
                         ("Attempt to allocate negative amount of memory. Possible integer overflow"
                         );
    }
    if ((int)__size < 1) {
      __size = 1;
    }
    local_14c4 = (complex_kind_8_ (*) [1] [1] [1] [4] [1])malloc(__size);
    if (local_14c4 == (complex_kind_8_ (*) [1] [1] [1] [4] [1])0x0) {
      local_14c4 = (complex_kind_8_ (*) [1] [1] [1] [4] [1])_gfortran_os_error("Out of memory");
    }
    local_133c = 0x8070922;
    local_1338 = 0x134;
    local_1344 = (hdr_type *)0x80;
    local_1340 = 6;
    local_b28 = local_14c4;
    local_b24 = phVar5;
    _gfortran_st_write(&local_1344);
    _gfortran_transfer_character(&local_1344," optic : Call pmat2cart optic : Call linoptpmat",0x17)
    ;
    _gfortran_st_write_done(&local_1344);
    local_14c0 = (wffile_type *)&local_bbc;
    local_14c8 = (integer_kind_4_ (*) [4] [4] [1])&local_ab8;
    local_14cc = (integer_kind_4_ (*) [4] [4] [1])&local_a38;
    local_14d0 = (integer_kind_4_ (*) [4] [4] [1])&local_a08;
    local_14c4 = local_b28;
    pmat2cart(local_fc,local_114,local_12c,(integer_kind_4_ *)local_14d0,
              (integer_kind_4_ *)local_14cc,(integer_kind_4_ *)local_14c8,local_b28,
              (real_kind_8_ (*) [4] [4])local_14c0);
    local_133c = 0x8070922;
    local_1338 = 0x141;
    local_1344 = (hdr_type *)0x80;
    local_1340 = 6;
    _gfortran_st_write(&local_1344);
    local_14d4 = (hdr_type **)0x14;
    local_14d8 = " optic : Call linoptpmat";
    _gfortran_transfer_character(&local_1344,0x8070eb1,0x14);
    _gfortran_st_write_done(&local_1344);
    local_135c = local_a10;
    local_30 = (hdr_type *)0x1;
    if ((int)local_a10 < 1) goto LAB_0804ce95;
  }
  else {
    local_14d4 = (hdr_type **)0x8070ec5;
    local_14d8 = "Attempting to allocate already allocated array \'%s\'";
    _gfortran_runtime_error_at
              ("At line 307 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'",0x8070ec5);
  }
  do {
    local_9cc = (int)ROUND((double)local_9f4[&local_30[-1].field_0x34f] / 10.00000000);
    local_9d0 = local_9f4[&local_30[-1].field_0x34f] % 10;
    local_133c = 0x8070922;
    local_1338 = 0x146;
    local_1344 = (hdr_type *)0x80;
    local_1340 = 6;
    _gfortran_st_write(&local_1344,local_14d8,local_14d4,local_14d0,local_14cc,local_14c8,local_14c4
                       ,local_14c0,local_14bc);
    _gfortran_transfer_character
              (&local_1344," linopt Attempt to allocate a negative amount of memory.",8);
    _gfortran_transfer_integer(&local_1344,&local_9cc,4);
    _gfortran_transfer_integer(&local_1344,&local_9d0,4);
    _gfortran_st_write_done(&local_1344);
    int2char4(&local_9cc,local_bc0,4);
    int2char4(&local_9d0,local_bc4,4);
    _gfortran_string_trim(&local_11a8,&local_11ac,0x100,local_568);
    __size = (local_11a8 + 1) * 0x20;
    if ((int)__size < 0) {
      __size = _gfortran_runtime_error(0x8070ef0);
    }
    if ((int)__size < 1) {
      __size = 1;
    }
    __ptr = malloc(__size);
    if (__ptr == (void *)0x0) {
      __ptr = (void *)_gfortran_os_error("Memory allocation failed");
    }
    _gfortran_concat_string
              (local_11a8 + 1,__ptr,local_11a8,local_11ac,1,
               "_ optic : Call nlinopt nlinopt At line 351 of file optic.F90");
    if ((0 < local_11a8) && (local_11ac != (void *)0x0)) {
      free(local_11ac);
    }
    _gfortran_string_trim(&local_11a0,&local_11a4,4,local_bc0);
    __size = (local_11a8 + 1 + local_11a0) * 0x20;
    if ((int)__size < 0) {
      __size = _gfortran_runtime_error(0x8070ef0);
    }
    if ((int)__size < 1) {
      __size = 1;
    }
    __ptr_01 = malloc(__size);
    if (__ptr_01 == (void *)0x0) {
      __ptr_01 = (void *)_gfortran_os_error("Memory allocation failed");
    }
    _gfortran_concat_string
              (local_11a8 + 1 + local_11a0,__ptr_01,local_11a8 + 1,__ptr,local_11a0,local_11a4);
    if ((0 < local_11a0) && (local_11a4 != (void *)0x0)) {
      free(local_11a4);
    }
    if (__ptr != (void *)0x0) {
      free(__ptr);
    }
    __size = (local_11a8 + local_11a0 + 2) * 0x20;
    if ((int)__size < 0) {
      __size = _gfortran_runtime_error(0x8070ef0);
    }
    if ((int)__size < 1) {
      __size = 1;
    }
    __ptr = malloc(__size);
    if (__ptr == (void *)0x0) {
      __ptr = (void *)_gfortran_os_error("Memory allocation failed");
    }
    _gfortran_concat_string
              (local_11a8 + local_11a0 + 2,__ptr,local_11a8 + 1 + local_11a0,__ptr_01,1,
               "_ optic : Call nlinopt nlinopt At line 351 of file optic.F90");
    if (__ptr_01 != (void *)0x0) {
      free(__ptr_01);
    }
    _gfortran_string_trim(&local_1198,&local_119c,4,local_bc4);
    __size = (local_11a8 + local_11a0 + 2 + local_1198) * 0x20;
    if ((int)__size < 0) {
      __size = _gfortran_runtime_error(0x8070ef0);
    }
    if ((int)__size < 1) {
      __size = 1;
    }
    __ptr_01 = malloc(__size);
    if (__ptr_01 == (void *)0x0) {
      __ptr_01 = (void *)_gfortran_os_error("Memory allocation failed");
    }
    _gfortran_concat_string
              (local_11a8 + local_11a0 + 2 + local_1198,__ptr_01,local_11a8 + local_11a0 + 2,__ptr,
               local_1198,local_119c);
    if ((0 < local_1198) && (local_119c != (void *)0x0)) {
      free(local_119c);
    }
    if (__ptr != (void *)0x0) {
      free(__ptr);
    }
    __size = local_11a8 + local_11a0 + 2 + local_1198;
    if ((int)__size < 0x100) {
      memmove(local_d6c,__ptr_01,__size);
      memset(auStack3434 + (__size - 2),0x20,0x100 - __size);
    }
    else {
      memmove(local_d6c,__ptr_01,0x100);
    }
    if (__ptr_01 != (void *)0x0) {
      free(__ptr_01);
    }
    local_14c4 = (complex_kind_8_ (*) [1] [1] [1] [4] [1])&local_a08;
    local_14cc = (integer_kind_4_ (*) [4] [4] [1])&local_abc;
    local_14d4 = &local_a38;
    local_14d8 = (char *)local_d84;
    local_14d0 = local_10bc;
    local_14c8 = local_c08;
    local_14c0 = local_ad4;
    local_14bc = local_e4;
    linopt(&local_ab8);
    bVar7 = local_30 != local_135c;
    local_30 = (hdr_type *)((int)&local_30->bantot + 1);
  } while (bVar7);
LAB_0804ce95:
  local_133c = 0x8070922;
  local_1338 = 0x150;
  local_1344 = (hdr_type *)0x80;
  local_1340 = 6;
  _gfortran_st_write(&local_1344,local_14d8,local_14d4,local_14d0,local_14cc,local_14c8,local_14c4,
                     local_14c0,local_14bc);
  _gfortran_transfer_character(&local_1344,0x8070f3b,0x15);
  _gfortran_st_write_done(&local_1344);
  local_30 = (hdr_type *)0x1;
  if (0 < local_a14) {
    do {
      local_a3c = (int)ROUND((double)local_ab0[(int)local_30 + -1] / 100.00000000);
      local_a40 = (int)ROUND(((double)(int)ROUND((double)local_ab0[(int)local_30 + -1] /
                                                 100.00000000) * -100.00000000 +
                             (double)local_ab0[(int)local_30 + -1]) / 10.00000000);
      local_a44 = local_ab0[(int)local_30 + -1] % 10;
      int2char4(&local_a3c,local_bc0,4,local_14d0,local_14cc,local_14c8,local_14c4,local_14c0,
                local_14bc);
      int2char4(&local_a40,local_bc4,4);
      int2char4(&local_a44,local_bc8,4);
      _gfortran_string_trim(&local_11c8,&local_11cc,0x100,local_568);
      __size = (local_11c8 + 1) * 0x20;
      if ((int)__size < 0) {
        __size = _gfortran_runtime_error(0x8070ef0);
      }
      if ((int)__size < 1) {
        __size = 1;
      }
      __ptr = malloc(__size);
      if (__ptr == (void *)0x0) {
        __ptr = (void *)_gfortran_os_error("Memory allocation failed");
      }
      _gfortran_concat_string
                (local_11c8 + 1,__ptr,local_11c8,local_11cc,1,
                 "_ optic : Call nlinopt nlinopt At line 351 of file optic.F90");
      if ((0 < local_11c8) && (local_11cc != (void *)0x0)) {
        free(local_11cc);
      }
      _gfortran_string_trim(&local_11c0,&local_11c4,4,local_bc0);
      __size = (local_11c8 + 1 + local_11c0) * 0x20;
      if ((int)__size < 0) {
        __size = _gfortran_runtime_error(0x8070ef0);
      }
      if ((int)__size < 1) {
        __size = 1;
      }
      __ptr_01 = malloc(__size);
      if (__ptr_01 == (void *)0x0) {
        __ptr_01 = (void *)_gfortran_os_error("Memory allocation failed");
      }
      _gfortran_concat_string
                (local_11c8 + 1 + local_11c0,__ptr_01,local_11c8 + 1,__ptr,local_11c0,local_11c4);
      if ((0 < local_11c0) && (local_11c4 != (void *)0x0)) {
        free(local_11c4);
      }
      if (__ptr != (void *)0x0) {
        free(__ptr);
      }
      __size = (local_11c8 + local_11c0 + 2) * 0x20;
      if ((int)__size < 0) {
        __size = _gfortran_runtime_error(0x8070ef0);
      }
      if ((int)__size < 1) {
        __size = 1;
      }
      __ptr = malloc(__size);
      if (__ptr == (void *)0x0) {
        __ptr = (void *)_gfortran_os_error("Memory allocation failed");
      }
      _gfortran_concat_string
                (local_11c8 + local_11c0 + 2,__ptr,local_11c8 + 1 + local_11c0,__ptr_01,1,
                 "_ optic : Call nlinopt nlinopt At line 351 of file optic.F90");
      if (__ptr_01 != (void *)0x0) {
        free(__ptr_01);
      }
      _gfortran_string_trim(&local_11b8,&local_11bc,4,local_bc4);
      __size = (local_11c8 + local_11c0 + 2 + local_11b8) * 0x20;
      if ((int)__size < 0) {
        __size = _gfortran_runtime_error(0x8070ef0);
      }
      if ((int)__size < 1) {
        __size = 1;
      }
      __ptr_01 = malloc(__size);
      if (__ptr_01 == (void *)0x0) {
        __ptr_01 = (void *)_gfortran_os_error("Memory allocation failed");
      }
      _gfortran_concat_string
                (local_11c8 + local_11c0 + 2 + local_11b8,__ptr_01,local_11c8 + local_11c0 + 2,__ptr
                 ,local_11b8,local_11bc);
      if ((0 < local_11b8) && (local_11bc != (void *)0x0)) {
        free(local_11bc);
      }
      if (__ptr != (void *)0x0) {
        free(__ptr);
      }
      __size = (local_11c8 + local_11c0 + local_11b8 + 3) * 0x20;
      if ((int)__size < 0) {
        __size = _gfortran_runtime_error(0x8070ef0);
      }
      if ((int)__size < 1) {
        __size = 1;
      }
      __ptr = malloc(__size);
      if (__ptr == (void *)0x0) {
        __ptr = (void *)_gfortran_os_error("Memory allocation failed");
      }
      _gfortran_concat_string
                (local_11c8 + local_11c0 + local_11b8 + 3,__ptr,
                 local_11c8 + local_11c0 + 2 + local_11b8,__ptr_01,1,
                 "_ optic : Call nlinopt nlinopt At line 351 of file optic.F90");
      if (__ptr_01 != (void *)0x0) {
        free(__ptr_01);
      }
      _gfortran_string_trim(&local_11b0,&local_11b4,4,local_bc8);
      __size = (local_11c8 + local_11c0 + local_11b8 + 3 + local_11b0) * 0x20;
      if ((int)__size < 0) {
        __size = _gfortran_runtime_error(0x8070ef0);
      }
      if ((int)__size < 1) {
        __size = 1;
      }
      __ptr_01 = malloc(__size);
      if (__ptr_01 == (void *)0x0) {
        __ptr_01 = (void *)_gfortran_os_error("Memory allocation failed");
      }
      _gfortran_concat_string
                (local_11c8 + local_11c0 + local_11b8 + 3 + local_11b0,__ptr_01,
                 local_11c8 + local_11c0 + local_11b8 + 3,__ptr,local_11b0,local_11b4);
      if ((0 < local_11b0) && (local_11b4 != (void *)0x0)) {
        free(local_11b4);
      }
      if (__ptr != (void *)0x0) {
        free(__ptr);
      }
      __size = local_11c8 + local_11c0 + local_11b8 + 3 + local_11b0;
      if ((int)__size < 0x100) {
        memmove(local_d6c,__ptr_01,__size);
        memset(auStack3434 + (__size - 2),0x20,0x100 - __size);
      }
      else {
        memmove(local_d6c,__ptr_01,0x100);
      }
      if (__ptr_01 != (void *)0x0) {
        free(__ptr_01);
      }
      local_133c = 0x8070922;
      local_1338 = 0x15a;
      local_1344 = (hdr_type *)0x80;
      local_1340 = 6;
      _gfortran_st_write(&local_1344);
      _gfortran_transfer_character(&local_1344,0x8070f50,9);
      _gfortran_transfer_integer(&local_1344,local_ab0 + (int)local_30 + -1,4);
      _gfortran_transfer_integer(&local_1344,&local_a3c,4);
      _gfortran_transfer_integer(&local_1344,&local_a40,4);
      _gfortran_transfer_integer(&local_1344,&local_a44,4);
      _gfortran_st_write_done(&local_1344);
      local_14bc = (wffile_type *)&local_14c;
      local_14c4 = (complex_kind_8_ (*) [1] [1] [1] [4] [1])&local_a08;
      local_14cc = (integer_kind_4_ (*) [4] [4] [1])&local_abc;
      local_14d0 = local_10bc;
      local_14c8 = local_c08;
      local_14c0 = local_e4;
      nlinopt(&local_ab8,local_d84,&local_a38);
      bVar7 = local_30 != (hdr_type *)local_a14;
      local_30 = (hdr_type *)((int)local_30 + 1);
    } while (bVar7);
  }
  if (local_a30 == (hdr_type *)0x0) {
    _gfortran_runtime_error_at(0x8070f59,"Attempt to DEALLOCATE unallocated \'%s\'","nband");
  }
  free(local_a30);
  local_a30 = (hdr_type *)0x0;
  if (local_ad4 == (wffile_type *)0x0) {
    _gfortran_runtime_error_at
              ("At line 352 of file optic.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08070b0e);
  }
  free(local_ad4);
  local_ad4 = (wffile_type *)0x0;
  if (local_fc == (real_kind_8_ (*) [3] [1] [1] [1] [1])0x0) {
    _gfortran_runtime_error_at
              ("At line 353 of file optic.F90","Attempt to DEALLOCATE unallocated \'%s\'","eigen11")
    ;
  }
  free(local_fc);
  local_fc = (real_kind_8_ (*) [3] [1] [1] [1] [1])0x0;
  if (local_114 == (real_kind_8_ (*) [3] [1] [1] [1] [1])0x0) {
    _gfortran_runtime_error_at
              ("At line 353 of file optic.F90","Attempt to DEALLOCATE unallocated \'%s\'","eigen12")
    ;
  }
  free(local_114);
  local_114 = (real_kind_8_ (*) [3] [1] [1] [1] [1])0x0;
  if (local_12c == (real_kind_8_ (*) [3] [1] [1] [1] [1])0x0) {
    _gfortran_runtime_error_at
              ("At line 353 of file optic.F90","Attempt to DEALLOCATE unallocated \'%s\'","eigen13")
    ;
  }
  free(local_12c);
  local_12c = (real_kind_8_ (*) [3] [1] [1] [1] [1])0x0;
  if (local_e4 == (wffile_type *)0x0) {
    _gfortran_runtime_error_at
              ("At line 354 of file optic.F90","Attempt to DEALLOCATE unallocated \'%s\'","eigen0");
  }
  free(local_e4);
  local_e4 = (wffile_type *)0x0;
  if (local_a4 == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 354 of file optic.F90","Attempt to DEALLOCATE unallocated \'%s\'","doccde");
  }
  free(local_a4);
  local_a4 = (void *)0x0;
  if (local_10bc == (integer_kind_4_ (*) [4] [4] [1])0x0) {
    _gfortran_runtime_error_at
              ("At line 354 of file optic.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08070d5c);
  }
  free(local_10bc);
  local_10bc = (integer_kind_4_ (*) [4] [4] [1])0x0;
  if (local_8c == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 355 of file optic.F90","Attempt to DEALLOCATE unallocated \'%s\'","cond_nd")
    ;
  }
  free(local_8c);
  local_8c = (void *)0x0;
  if (local_74 == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 355 of file optic.F90","Attempt to DEALLOCATE unallocated \'%s\'",0x8070e6c)
    ;
  }
  free(local_74);
  local_74 = (void *)0x0;
  if (local_9c8 == (real_kind_8_ (*) [4] [1])0x0) {
    _gfortran_runtime_error_at
              ("At line 357 of file optic.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08070b3e);
  }
  free(local_9c8);
  local_9c8 = (real_kind_8_ (*) [4] [1])0x0;
  if (local_c68 == (integer_kind_4_ (*) [4] [4] [1])0x0) {
    _gfortran_runtime_error_at
              ("At line 357 of file optic.F90","Attempt to DEALLOCATE unallocated \'%s\'","symrel");
  }
  free(local_c68);
  local_c68 = (integer_kind_4_ (*) [4] [4] [1])0x0;
  if (local_c08 == (integer_kind_4_ (*) [4] [4] [1])0x0) {
    _gfortran_runtime_error_at
              ("At line 357 of file optic.F90","Attempt to DEALLOCATE unallocated \'%s\'","symcart")
    ;
  }
  free(local_c08);
  local_c08 = (integer_kind_4_ (*) [4] [4] [1])0x0;
  if (local_b28 == (complex_kind_8_ (*) [1] [1] [1] [4] [1])0x0) {
    _gfortran_runtime_error_at
              ("At line 357 of file optic.F90","Attempt to DEALLOCATE unallocated \'%s\'",0x8070ec5)
    ;
  }
  free(local_b28);
  local_b28 = (complex_kind_8_ (*) [1] [1] [1] [4] [1])0x0;
  hdr_clean((hdr_type *)local_994);
  if (local_10bc != (integer_kind_4_ (*) [4] [4] [1])0x0) {
    free(local_10bc);
  }
  local_10bc = (integer_kind_4_ (*) [4] [4] [1])0x0;
  if (local_c68 != (integer_kind_4_ (*) [4] [4] [1])0x0) {
    free(local_c68);
  }
  local_c68 = (integer_kind_4_ (*) [4] [4] [1])0x0;
  if (local_c38 != (integer_kind_4_ (*) [4] [4] [1])0x0) {
    free(local_c38);
  }
  local_c38 = (integer_kind_4_ (*) [4] [4] [1])0x0;
  if (local_c08 != (integer_kind_4_ (*) [4] [4] [1])0x0) {
    free(local_c08);
  }
  local_c08 = (integer_kind_4_ (*) [4] [4] [1])0x0;
  if (local_b28 != (complex_kind_8_ (*) [1] [1] [1] [4] [1])0x0) {
    free(local_b28);
  }
  local_b28 = (complex_kind_8_ (*) [1] [1] [1] [4] [1])0x0;
  if (local_ad4 != (wffile_type *)0x0) {
    free(local_ad4);
  }
  local_ad4 = (wffile_type *)0x0;
  if (local_a30 != (hdr_type *)0x0) {
    free(local_a30);
  }
  local_a30 = (hdr_type *)0x0;
  if (local_9c8 != (real_kind_8_ (*) [4] [1])0x0) {
    free(local_9c8);
  }
  local_9c8 = (real_kind_8_ (*) [4] [1])0x0;
  if (local_144 != (void *)0x0) {
    free(local_144);
  }
  local_144 = (void *)0x0;
  if (local_12c != (real_kind_8_ (*) [3] [1] [1] [1] [1])0x0) {
    free(local_12c);
  }
  local_12c = (real_kind_8_ (*) [3] [1] [1] [1] [1])0x0;
  if (local_114 != (real_kind_8_ (*) [3] [1] [1] [1] [1])0x0) {
    free(local_114);
  }
  local_114 = (real_kind_8_ (*) [3] [1] [1] [1] [1])0x0;
  if (local_fc != (real_kind_8_ (*) [3] [1] [1] [1] [1])0x0) {
    free(local_fc);
  }
  local_fc = (real_kind_8_ (*) [3] [1] [1] [1] [1])0x0;
  if (local_e4 != (wffile_type *)0x0) {
    free(local_e4);
  }
  local_e4 = (wffile_type *)0x0;
  if (local_cc != (void *)0x0) {
    free(local_cc);
  }
  local_cc = (void *)0x0;
  if (local_a4 != (void *)0x0) {
    free(local_a4);
  }
  local_a4 = (void *)0x0;
  if (local_8c != (void *)0x0) {
    free(local_8c);
  }
  local_8c = (void *)0x0;
  if (local_74 != (void *)0x0) {
    free(local_74);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0804ee9a)
// WARNING: Removing unreachable block (ram,0x08050b37)
// WARNING: Could not reconcile some variable overlaps

void linopt(int *param_1,double *param_2,int *param_3,int param_4,int *param_5,int param_6,
           uint *param_7,int param_8,int param_9,double *param_10,int param_11,int *param_12,
           int *param_13,int *param_14,double *param_15,double *param_16,double *param_17)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  void *__ptr;
  void *pvVar13;
  size_t __size;
  int *__src;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  size_t __size_00;
  size_t extraout_EDX;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  bool bVar29;
  int *piVar30;
  undefined4 uVar31;
  undefined8 *puVar32;
  char *pcVar33;
  undefined8 local_524;
  undefined4 uVar34;
  undefined4 local_420;
  undefined4 local_41c;
  char *local_418;
  undefined4 local_414;
  undefined4 local_400;
  undefined *local_3fc;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_3d0;
  undefined4 local_3cc;
  double local_2cc;
  undefined8 local_2c4;
  undefined8 local_2bc;
  double local_2b4;
  double local_2ac;
  double local_2a4;
  double local_29c;
  double local_294;
  double local_28c;
  void *local_284;
  int local_280;
  double local_27c;
  double local_274;
  void *local_268;
  int local_264;
  undefined4 local_260;
  int local_25c;
  int local_258;
  int local_254;
  int local_250;
  int local_24c;
  int local_248;
  void *local_244;
  int local_240;
  undefined4 local_23c;
  int local_238;
  int local_234;
  undefined4 local_230;
  int local_22c;
  int local_228;
  undefined4 local_224;
  int local_220;
  double local_21c;
  double local_214;
  undefined local_20c [11];
  undefined auStack513 [245];
  complex_kind_8_ eps [1];
  int local_fc;
  real_kind_8_ ene;
  complex_kind_8_ chi [1];
  complex_kind_8_ b12;
  complex_kind_8_ b11;
  real_kind_8_ const;
  real_kind_8_ corec;
  real_kind_8_ e1;
  real_kind_8_ e12;
  real_kind_8_ e2;
  real_kind_8_ emax;
  real_kind_8_ emin;
  integer_kind_4_ ubound_0;
  integer_kind_4_ ubound_1;
  integer_kind_4_ ubound_3;
  double local_6c;
  int local_64;
  int local_60;
  uint local_5c;
  uint local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  
  uVar15 = 0;
  if (-1 < (int)*param_7) {
    uVar15 = *param_7;
  }
  iVar21 = 0;
  if (-1 < (int)(uVar15 * *param_1)) {
    iVar21 = uVar15 * *param_1;
  }
  iVar22 = ~uVar15 - iVar21;
  uVar16 = 0;
  if (-1 < (int)*param_7) {
    uVar16 = *param_7;
  }
  iVar26 = 0;
  if (-1 < (int)(uVar16 * *param_7)) {
    iVar26 = uVar16 * *param_7;
  }
  iVar17 = 0;
  if (-1 < iVar26 * *param_3) {
    iVar17 = iVar26 * *param_3;
  }
  iVar27 = 0;
  if (-1 < iVar17 * 3) {
    iVar27 = iVar17 * 3;
  }
  iVar23 = ((~uVar16 - iVar26) - iVar17) - iVar27;
  uVar18 = 0;
  if (-1 < (int)*param_7) {
    uVar18 = *param_7;
  }
  iVar28 = 0;
  if (-1 < (int)(uVar18 * *param_1)) {
    iVar28 = uVar18 * *param_1;
  }
  eps[0]._0_4_ = (void *)0x0;
  local_244 = (void *)0x0;
  local_268 = (void *)0x0;
  if ((((*param_12 < 1) || (*param_13 < 1)) || (3 < *param_12)) || (3 < *param_13)) {
    local_418 = "linopt.F90";
    local_414 = 0x6a;
    local_420 = 0x80;
    local_41c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    local_418 = "linopt.F90";
    local_414 = 0x6b;
    local_420 = 0x80;
    local_41c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    local_418 = "linopt.F90";
    local_414 = 0x6c;
    local_420 = 0x80;
    local_41c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    local_418 = "linopt.F90";
    local_414 = 0x6d;
    local_420 = 0x80;
    local_41c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    local_418 = "linopt.F90";
    local_414 = 0x6e;
    local_420 = 0x80;
    local_41c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    _gfortran_stop_numeric();
  }
  if (*param_14 < 1) {
    local_418 = "linopt.F90";
    local_414 = 0x73;
    local_420 = 0x80;
    local_41c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    local_418 = "linopt.F90";
    local_414 = 0x74;
    local_420 = 0x80;
    local_41c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    local_418 = "linopt.F90";
    local_414 = 0x75;
    local_420 = 0x80;
    local_41c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    local_418 = "linopt.F90";
    local_414 = 0x76;
    local_420 = 0x80;
    local_41c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    local_418 = "linopt.F90";
    local_414 = 0x77;
    local_420 = 0x80;
    local_41c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    local_418 = "linopt.F90";
    local_414 = 0x78;
    local_420 = 0x80;
    local_41c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    _gfortran_stop_numeric();
  }
  if (*param_15 <= 0.00000000) {
    local_418 = "linopt.F90";
    local_414 = 0x7d;
    local_420 = 0x80;
    local_41c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    local_418 = "linopt.F90";
    local_414 = 0x7e;
    local_420 = 0x80;
    local_41c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    local_418 = "linopt.F90";
    local_414 = 0x7f;
    local_420 = 0x80;
    local_41c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    local_418 = "linopt.F90";
    local_414 = 0x80;
    local_420 = 0x80;
    local_41c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    local_418 = "linopt.F90";
    local_414 = 0x81;
    local_420 = 0x80;
    local_41c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    local_418 = "linopt.F90";
    local_414 = 0x82;
    local_420 = 0x80;
    local_41c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    _gfortran_stop_numeric();
  }
  if (*param_16 < 0.00000000) {
    local_418 = "linopt.F90";
    local_414 = 0x87;
    local_420 = 0x80;
    local_41c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    local_418 = "linopt.F90";
    local_414 = 0x88;
    local_420 = 0x80;
    local_41c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    local_418 = "linopt.F90";
    local_414 = 0x89;
    local_420 = 0x80;
    local_41c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    local_418 = "linopt.F90";
    local_414 = 0x8a;
    local_420 = 0x80;
    local_41c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    local_418 = "linopt.F90";
    local_414 = 0x8b;
    local_420 = 0x80;
    local_41c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    _gfortran_stop_numeric();
  }
  if (*param_17 <= 0.00900000) {
    if (0.01500000 < *param_17) {
      local_418 = "linopt.F90";
      local_414 = 0x95;
      local_420 = 0x80;
      local_41c = 6;
      _gfortran_st_write();
      _gfortran_transfer_character();
      _gfortran_st_write_done();
      local_418 = "linopt.F90";
      local_414 = 0x96;
      local_420 = 0x80;
      local_41c = 6;
      _gfortran_st_write();
      _gfortran_transfer_character();
      _gfortran_st_write_done();
      local_418 = "linopt.F90";
      local_414 = 0x97;
      local_420 = 0x80;
      local_41c = 6;
      _gfortran_st_write();
      _gfortran_transfer_character();
      _gfortran_st_write_done();
      local_418 = "linopt.F90";
      local_414 = 0x98;
      local_420 = 0x80;
      local_41c = 6;
      _gfortran_st_write();
      _gfortran_transfer_character();
      _gfortran_st_write_done();
    }
  }
  else {
    local_418 = "linopt.F90";
    local_414 = 0x90;
    local_420 = 0x80;
    local_41c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    local_418 = "linopt.F90";
    local_414 = 0x91;
    local_420 = 0x80;
    local_41c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    local_418 = "linopt.F90";
    local_414 = 0x92;
    local_420 = 0x80;
    local_41c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
    local_418 = "linopt.F90";
    local_414 = 0x93;
    local_420 = 0x80;
    local_41c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character();
    _gfortran_st_write_done();
  }
  iVar6 = *param_14;
  iVar24 = 0;
  if (-1 < *param_14) {
    iVar24 = *param_14;
  }
  if (*param_14 < 1) {
    __size_00 = 0;
  }
  else {
    __size_00 = iVar24 << 4;
  }
  if ((int)__size_00 < 0) {
    __size_00 = _gfortran_runtime_error();
  }
  if ((int)__size_00 < 1) {
    __size_00 = 1;
  }
  __ptr = malloc(__size_00);
  if (__ptr == (void *)0x0) {
    __ptr = (void *)_gfortran_os_error();
  }
  iVar24 = *param_14;
  iVar19 = 0;
  if (-1 < *param_14) {
    iVar19 = *param_14;
  }
  if (*param_14 < 1) {
    __size_00 = 0;
  }
  else {
    __size_00 = iVar19 << 4;
  }
  local_fc = 1;
  eps[0]._12_4_ = 1;
  eps[0]._8_4_ = 0x421;
  if (eps[0]._0_4_ == (void *)0x0) {
    if ((int)__size_00 < 0) {
      __size_00 = _gfortran_runtime_error();
    }
    if ((int)__size_00 < 1) {
      __size_00 = 1;
    }
    pvVar13 = malloc(__size_00);
    if (pvVar13 == (void *)0x0) {
      pvVar13 = (void *)_gfortran_os_error();
    }
    eps[0]._4_4_ = -1;
    local_23c = 0x21a;
    local_234 = 1;
    local_230 = 3;
    local_238 = 1;
    local_228 = 1;
    local_224 = 3;
    local_22c = 3;
    eps[0]._0_4_ = pvVar13;
    if (local_244 == (void *)0x0) goto LAB_0804ef83;
    _gfortran_runtime_error_at();
LAB_0804f020:
    pvVar13 = malloc(0x48);
    if (pvVar13 == (void *)0x0) {
      pvVar13 = (void *)_gfortran_os_error();
    }
    local_264 = -4;
    local_21c = *param_17 * 0.00000000 - 0.00000000;
    local_214 = *param_17 + 0.00000000;
    const = (real_kind_8_)(1.00000000 / ((double)*param_5 * *param_2));
    local_6c = 27.21138382;
    local_268 = pvVar13;
    _gfortran_string_trim();
    __size_00 = (local_280 + 0xb) * 0x20;
    if (-1 < (int)__size_00) goto LAB_0804f101;
  }
  else {
    _gfortran_runtime_error_at();
LAB_0804ef83:
    pvVar13 = malloc(0x48);
    if (pvVar13 == (void *)0x0) {
      pvVar13 = (void *)_gfortran_os_error();
    }
    local_240 = -4;
    local_260 = 0x21a;
    local_258 = 1;
    local_254 = 3;
    local_25c = 1;
    local_24c = 1;
    local_248 = 3;
    local_250 = 3;
    local_244 = pvVar13;
    if (local_268 == (void *)0x0) goto LAB_0804f020;
    _gfortran_runtime_error_at();
  }
  _gfortran_runtime_error();
  __size_00 = extraout_EDX;
LAB_0804f101:
  __size = 1;
  if (0 < (int)__size_00) {
    __size = __size_00;
  }
  __src = (int *)malloc(__size);
  if (__src == (int *)0x0) {
    __src = (int *)_gfortran_os_error();
  }
  pvVar13 = local_284;
  _gfortran_concat_string();
  if ((0 < local_280) && (local_284 != (void *)0x0)) {
    free(local_284);
  }
  __size_00 = local_280 + 0xb;
  if ((int)__size_00 < 0x100) {
    memmove(local_20c,__src,__size_00);
    local_524 = CONCAT44(pvVar13,0x100 - __size_00);
    piVar30 = (int *)0x20;
    memset(auStack513 + local_280,0x20,0x100 - __size_00);
  }
  else {
    local_524 = CONCAT44(pvVar13,0x100);
    piVar30 = __src;
    memmove(local_20c,__src,0x100);
  }
  if (__src != (int *)0x0) {
    free(__src);
  }
  uVar31 = (undefined4)((ulonglong)local_524 >> 0x20);
  iVar19 = local_24c;
  while (iVar19 <= local_248) {
    iVar25 = local_258;
    while (iVar25 <= local_254) {
      *(undefined8 *)((int)local_268 + (local_264 + local_250 * iVar19 + iVar25 * local_25c) * 8) =
           0;
      iVar25 = iVar25 + 1;
    }
    iVar19 = iVar19 + 1;
  }
  iVar19 = *param_5;
  local_54 = 1;
  if (0 < iVar19) {
    do {
      iVar25 = 1;
      while (iVar25 < 4) {
        iVar20 = 1;
        while (iVar20 < 4) {
          *(undefined8 *)
           ((int)local_244 +
           ((iVar20 + local_234 + -1) * local_238 +
           local_22c * (iVar25 + local_228 + -1) + local_240) * 8) =
               *(undefined8 *)(param_6 + (iVar20 + local_54 * 9 + -0xd + iVar25 * 3) * 8);
          iVar20 = iVar20 + 1;
        }
        iVar25 = iVar25 + 1;
      }
      local_64 = 1;
      do {
        local_4c = 1;
        do {
          *(double *)
           ((int)local_268 + (local_25c * local_64 + local_250 * local_4c + local_264) * 8) =
               *(double *)
                ((int)local_244 + (local_238 * local_4c + local_22c * *param_13 + local_240) * 8) *
               *(double *)
                ((int)local_244 + (local_238 * local_64 + local_22c * *param_12 + local_240) * 8) +
               *(double *)
                ((int)local_268 + (local_25c * local_64 + local_250 * local_4c + local_264) * 8);
          bVar29 = local_4c != 3;
          local_4c = local_4c + 1;
        } while (bVar29);
        bVar29 = local_64 != 3;
        local_64 = local_64 + 1;
      } while (bVar29);
      bVar29 = local_54 != iVar19;
      local_54 = local_54 + 1;
    } while (bVar29);
  }
  emin = 0.00000000;
  emax = 0.00000000;
  local_220 = 1;
  if (0 < *param_3) {
    do {
      local_60 = 1;
      if (0 < *param_1) {
        do {
          local_5c = 1;
          if (0 < (int)*param_7) {
            do {
              dVar1 = *(double *)
                       (param_9 + (uVar15 * local_60 + local_220 * iVar21 + local_5c + iVar22) * 8);
              if (dVar1 < (double)emin) {
                emin = (real_kind_8_)dVar1;
              }
              dVar1 = *(double *)
                       (param_9 + (uVar15 * local_60 + local_220 * iVar21 + local_5c + iVar22) * 8);
              if ((double)emax < dVar1) {
                emax = (real_kind_8_)dVar1;
              }
              bVar29 = local_5c != *param_7;
              local_5c = local_5c + 1;
            } while (bVar29);
          }
          bVar29 = local_60 != *param_1;
          local_60 = local_60 + 1;
        } while (bVar29);
      }
      bVar29 = local_220 != *param_3;
      local_220 = local_220 + 1;
    } while (bVar29);
  }
  iVar19 = 1;
  while (iVar19 <= iVar6) {
    iVar25 = (iVar19 + -1) * 0x10;
    *(undefined8 *)(iVar25 + (int)__ptr) = 0;
    *(undefined8 *)(iVar25 + 8 + (int)__ptr) = 0;
    iVar19 = iVar19 + 1;
  }
  iVar6 = *param_3;
  local_220 = 1;
  if (0 < iVar6) {
    do {
      uVar31 = (undefined4)((ulonglong)local_524 >> 0x20);
      local_418 = "linopt.F90";
      local_414 = 0xbc;
      local_420 = 0x80;
      local_41c = 6;
      _gfortran_st_write(&local_420,piVar30,local_524);
      _gfortran_transfer_integer();
      _gfortran_transfer_character();
      local_524 = CONCAT44(uVar31,4);
      piVar30 = param_3;
      _gfortran_transfer_integer();
      _gfortran_st_write_done();
      uVar31 = (undefined4)((ulonglong)local_524 >> 0x20);
      iVar19 = *param_1;
      local_60 = 1;
      if (0 < iVar19) {
        do {
          uVar7 = *param_7;
          local_5c = 1;
          if (0 < (int)uVar7) {
            do {
              dVar1 = *(double *)
                       (param_9 + (uVar15 * local_60 + local_220 * iVar21 + local_5c + iVar22) * 8);
              if (dVar1 < *param_10) {
                uVar8 = *param_7;
                local_58 = local_5c;
                if ((int)local_5c <= (int)uVar8) {
                  do {
                    dVar2 = *(double *)
                             (param_9 +
                             (uVar15 * local_60 + local_220 * iVar21 + local_58 + iVar22) * 8);
                    if (*param_10 < dVar2) {
                      dVar2 = (dVar1 - dVar2) - *param_16;
                      dVar9 = dVar2 / (*param_16 + dVar2);
                      b11._0_8_ = 0.00000000;
                      b11._8_8_ = 0.00000000;
                      local_48 = 1;
                      do {
                        local_44 = 1;
                        do {
                          dVar3 = *(double *)
                                   ((int)local_268 +
                                   (local_25c * local_48 + local_250 * local_44 + local_264) * 8);
                          iVar25 = (uVar16 * local_58 + local_220 * iVar26 + local_5c +
                                    iVar27 * local_60 + iVar17 * local_48 + iVar23) * 0x10;
                          dVar4 = *(double *)(iVar25 + param_11);
                          dVar5 = *(double *)(iVar25 + 8 + param_11);
                          dVar10 = dVar3 * dVar4 - dVar5 * 0.00000000;
                          dVar4 = dVar4 * 0.00000000 + dVar5 * dVar3;
                          iVar25 = (uVar16 * local_58 + local_220 * iVar26 + local_5c +
                                    iVar27 * local_60 + iVar17 * local_44 + iVar23) * 0x10;
                          dVar3 = *(double *)(iVar25 + param_11);
                          dVar5 = -*(double *)(iVar25 + 8 + param_11);
                          b11._0_8_ = b11._0_8_ + (dVar10 * dVar3 - dVar4 * dVar5);
                          b11._8_8_ = b11._8_8_ + dVar3 * dVar4 + dVar5 * dVar10;
                          bVar29 = local_44 != 3;
                          local_44 = local_44 + 1;
                        } while (bVar29);
                        bVar29 = local_48 != 3;
                        local_48 = local_48 + 1;
                      } while (bVar29);
                      dVar4 = (double)const * b11._0_8_ - b11._8_8_ * 0.00000000;
                      dVar3 = b11._0_8_ * 0.00000000 + b11._8_8_ * (double)const;
                      dVar5 = dVar4 * dVar9 - dVar3 * 0.00000000;
                      dVar4 = dVar9 * dVar3 + dVar4 * 0.00000000;
                      dVar3 = dVar5 * dVar9 - dVar4 * 0.00000000;
                      dVar4 = dVar9 * dVar4 + dVar5 * 0.00000000;
                      dVar9 = (dVar2 * dVar2) / 1.00000000;
                      dVar5 = dVar3 * dVar9 - dVar4 * 0.00000000;
                      dVar9 = dVar3 * 0.00000000 + dVar9 * dVar4;
                      iVar25 = *param_14;
                      local_50 = 2;
                      if (1 < iVar25) {
                        do {
                          local_27c = local_21c + *param_15 * (double)(local_50 + -1);
                          local_274 = local_214 + 0.00000000;
                          iVar20 = (local_50 + -1) * 0x10;
                          dVar3 = *(double *)(iVar20 + 8 + (int)__ptr);
                          dVar12 = (*(double *)
                                     (param_8 +
                                     (uVar18 * local_60 + local_220 * iVar28 + local_5c +
                                     (~uVar18 - iVar28)) * 8) -
                                   *(double *)
                                    (param_8 +
                                    (uVar18 * local_60 + local_220 * iVar28 + local_58 +
                                    (~uVar18 - iVar28)) * 8)) *
                                   *(double *)(param_4 + (local_220 + -1) * 8);
                          dVar4 = -dVar2 - local_27c;
                          dVar10 = 0.00000000 - local_274;
                          if (ABS(dVar10) <= ABS(dVar4)) {
                            dVar11 = dVar10 / dVar4;
                            dVar4 = dVar10 * dVar11 + dVar4;
                            dVar10 = (dVar9 * dVar11 + dVar5) / dVar4;
                            dVar4 = dVar4 / (dVar9 - dVar5 * dVar11);
                          }
                          else {
                            dVar11 = dVar4 / dVar10;
                            dVar4 = dVar4 * dVar11 + dVar10;
                            dVar10 = (dVar5 * dVar11 + dVar9) / dVar4;
                            dVar4 = (dVar9 * dVar11 - dVar5) / dVar4;
                          }
                          iVar14 = (local_50 + -1) * 0x10;
                          *(double *)(iVar14 + (int)__ptr) =
                               (dVar12 * dVar10 - dVar4 * 0.00000000) +
                               *(double *)(iVar20 + (int)__ptr);
                          *(double *)(iVar14 + 8 + (int)__ptr) =
                               dVar4 * dVar12 + dVar10 * 0.00000000 + dVar3;
                          bVar29 = local_50 != iVar25;
                          local_50 = local_50 + 1;
                        } while (bVar29);
                      }
                    }
                    bVar29 = local_58 != uVar8;
                    local_58 = local_58 + 1;
                  } while (bVar29);
                }
              }
              bVar29 = local_5c != uVar7;
              local_5c = local_5c + 1;
            } while (bVar29);
          }
          bVar29 = local_60 != iVar19;
          local_60 = local_60 + 1;
        } while (bVar29);
      }
      bVar29 = local_220 != iVar6;
      local_220 = local_220 + 1;
    } while (bVar29);
  }
  local_418 = "linopt.F90";
  local_414 = 0xe1;
  local_3fc = local_20c;
  local_400 = 0x100;
  local_3e8 = 0x8071457;
  local_3e4 = 9;
  local_3cc = 0x8071460;
  local_3d0 = 5;
  local_420 = 0x4900;
  local_41c = 0x5c;
  _gfortran_st_open();
  local_418 = "linopt.F90";
  local_414 = 0xe3;
  local_3f0 = 0x8071465;
  local_3ec = 3;
  local_420 = 0x1000;
  local_41c = 0x5c;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_420,0x8071468,0x21,uVar31);
  _gfortran_st_write_done();
  local_418 = "linopt.F90";
  local_414 = 0xe4;
  local_3f0 = 0x8071489;
  local_3ec = 9;
  local_420 = 0x1000;
  local_41c = 0x5c;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_420,0x8071492,0x1b,uVar31);
  _gfortran_transfer_integer(&local_420,param_12,4,uVar31);
  _gfortran_transfer_integer(&local_420,param_13,4,uVar31);
  _gfortran_transfer_character(&local_420,0x80714ad,0x18,uVar31);
  _gfortran_st_write_done();
  local_418 = "linopt.F90";
  local_414 = 0xe5;
  local_420 = 0x80;
  local_41c = 6;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_420,0x80714c5,0x19,uVar31);
  _gfortran_transfer_integer(&local_420,param_12,4,uVar31);
  _gfortran_transfer_integer(&local_420,param_13,4,uVar31);
  _gfortran_transfer_character(&local_420,0x80714ad,0x18,uVar31);
  _gfortran_st_write_done();
  local_418 = "linopt.F90";
  local_414 = 0xe6;
  local_3f0 = 0x80714de;
  local_3ec = 0xb;
  local_420 = 0x1000;
  local_41c = 0x5c;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_420,0x80714e9,0xd,uVar31);
  local_28c = local_21c;
  _gfortran_transfer_real(&local_420,&local_28c,8,uVar31);
  local_294 = local_214;
  _gfortran_transfer_real(&local_420,&local_294,8,uVar31);
  _gfortran_st_write_done();
  local_418 = "linopt.F90";
  local_414 = 0xe7;
  local_420 = 0x80;
  local_41c = 6;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_420,0x80714f6,0x11,uVar31);
  _gfortran_transfer_complex(&local_420,&local_21c,8,uVar31);
  _gfortran_st_write_done();
  local_418 = "linopt.F90";
  local_414 = 0xe8;
  local_3f0 = 0x8071507;
  local_3ec = 10;
  local_420 = 0x1000;
  local_41c = 0x5c;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_420,0x8071511,0x11,uVar31);
  _gfortran_transfer_real(&local_420,param_16,8,uVar31);
  _gfortran_st_write_done();
  local_418 = "linopt.F90";
  local_414 = 0xe9;
  local_420 = 0x80;
  local_41c = 6;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_420,0x8071522,0x13,uVar31);
  local_524 = CONCAT44(uVar31,8);
  _gfortran_transfer_real();
  uVar31 = (undefined4)((ulonglong)local_524 >> 0x20);
  _gfortran_st_write_done(&local_420,param_16,local_524);
  local_418 = "linopt.F90";
  local_414 = 0xea;
  local_3f0 = 0x8071535;
  local_3ec = 0x15;
  local_420 = 0x1000;
  local_41c = 0x5c;
  _gfortran_st_write();
  _gfortran_transfer_character();
  local_29c = ((double)emax - (double)emin) * local_6c;
  _gfortran_transfer_real();
  _gfortran_transfer_character();
  local_2a4 = (double)emax - (double)emin;
  _gfortran_transfer_real();
  local_524 = CONCAT44(uVar31,2);
  uVar31 = 0x807155c;
  _gfortran_transfer_character();
  uVar34 = (undefined4)((ulonglong)local_524 >> 0x20);
  _gfortran_st_write_done(&local_420,uVar31,local_524);
  local_418 = "linopt.F90";
  local_414 = 0xeb;
  local_420 = 0x80;
  local_41c = 6;
  _gfortran_st_write();
  _gfortran_transfer_character();
  local_2ac = ((double)emax - (double)emin) * local_6c;
  _gfortran_transfer_real();
  _gfortran_transfer_character();
  local_2b4 = (double)emax - (double)emin;
  _gfortran_transfer_real();
  local_524 = CONCAT44(uVar34,2);
  puVar32 = (undefined8 *)
            (
            "-linopt.outofFORMATTEDWRITE(a) # Energy(eV)         Im(chi1(w))(a,2i3,a) #calculated the component:of linear susceptibilitycalculated the component:(a,2es16.6) #broadening: with broadening:(a,es16.6) #scissors shift:and scissors shift:(a,es16.6,a,es16.6,a) #energy window:eVHaenergy window:(2es16.6)"
            + 0x112);
  _gfortran_transfer_character();
  _gfortran_st_write_done(&local_420,puVar32,local_524);
  while (local_fc <= iVar24) {
    iVar21 = (local_fc * eps[0]._12_4_ + eps[0]._4_4_) * 0x10;
    *(undefined8 *)(iVar21 + (int)eps[0]._0_4_) = 0;
    *(undefined8 *)(iVar21 + 8 + (int)eps[0]._0_4_) = 0;
    local_fc = local_fc + 1;
  }
  iVar21 = *param_14;
  local_50 = 2;
  if (1 < iVar21) {
    do {
      uVar31 = (undefined4)((ulonglong)local_524 >> 0x20);
      ene = (real_kind_8_)(*param_15 * (double)(local_50 + -1) * local_6c);
      iVar22 = (local_50 + -1) * 0x10;
      dVar1 = *(double *)(iVar22 + (int)__ptr);
      dVar2 = *(double *)(iVar22 + 8 + (int)__ptr);
      iVar22 = (eps[0]._12_4_ * local_50 + eps[0]._4_4_) * 0x10;
      *(double *)(iVar22 + (int)eps[0]._0_4_) =
           (dVar1 * 12.56637061 - dVar2 * 0.00000000) + 1.00000000;
      *(double *)(iVar22 + 8 + (int)eps[0]._0_4_) =
           dVar2 * 12.56637061 + dVar1 * 0.00000000 + 0.00000000;
      local_418 = "linopt.F90";
      local_414 = 0xf1;
      local_3f0 = 0x807156c;
      local_3ec = 9;
      local_420 = 0x1000;
      local_41c = 0x5c;
      _gfortran_st_write(&local_420,puVar32,local_524);
      _gfortran_transfer_real();
      local_2bc = *(undefined8 *)
                   ((eps[0]._12_4_ * local_50 + eps[0]._4_4_) * 0x10 + 8 + (int)eps[0]._0_4_);
      local_524 = CONCAT44(uVar31,8);
      puVar32 = &local_2bc;
      _gfortran_transfer_real();
      _gfortran_st_write_done();
      bVar29 = local_50 != iVar21;
      local_50 = local_50 + 1;
    } while (bVar29);
  }
  uVar31 = (undefined4)((ulonglong)local_524 >> 0x20);
  local_418 = "linopt.F90";
  local_414 = 0xf3;
  local_420 = 0x80;
  local_41c = 0x5c;
  _gfortran_st_write(&local_420,puVar32,local_524);
  _gfortran_st_write_done();
  local_418 = "linopt.F90";
  local_414 = 0xf4;
  local_420 = 0x80;
  local_41c = 0x5c;
  _gfortran_st_write();
  _gfortran_st_write_done();
  local_418 = "linopt.F90";
  local_414 = 0xf5;
  local_3f0 = 0x8071465;
  local_3ec = 3;
  local_420 = 0x1000;
  local_41c = 0x5c;
  _gfortran_st_write();
  local_524 = CONCAT44(uVar31,0x21);
  pcVar33 = " # Energy(eV)         Re(chi1(w))";
  _gfortran_transfer_character(&local_420," # Energy(eV)         Re(chi1(w))",0x21,uVar31);
  _gfortran_st_write_done();
  iVar21 = *param_14;
  local_50 = 2;
  if (1 < iVar21) {
    do {
      uVar31 = (undefined4)((ulonglong)local_524 >> 0x20);
      ene = (real_kind_8_)(*param_15 * (double)(local_50 + -1) * local_6c);
      local_418 = "linopt.F90";
      local_414 = 0xf9;
      local_3f0 = 0x807156c;
      local_3ec = 9;
      local_420 = 0x1000;
      local_41c = 0x5c;
      _gfortran_st_write(&local_420,pcVar33,local_524);
      _gfortran_transfer_real();
      local_2c4 = *(undefined8 *)
                   ((eps[0]._12_4_ * local_50 + eps[0]._4_4_) * 0x10 + (int)eps[0]._0_4_);
      local_524 = CONCAT44(uVar31,8);
      pcVar33 = (char *)&local_2c4;
      _gfortran_transfer_real();
      _gfortran_st_write_done();
      bVar29 = local_50 != iVar21;
      local_50 = local_50 + 1;
    } while (bVar29);
  }
  uVar31 = (undefined4)((ulonglong)local_524 >> 0x20);
  local_418 = "linopt.F90";
  local_414 = 0xfb;
  local_420 = 0x80;
  local_41c = 0x5c;
  _gfortran_st_write(&local_420,pcVar33,local_524);
  _gfortran_st_write_done();
  local_418 = "linopt.F90";
  local_414 = 0xfc;
  local_420 = 0x80;
  local_41c = 0x5c;
  _gfortran_st_write();
  _gfortran_st_write_done();
  local_418 = "linopt.F90";
  local_414 = 0xfd;
  local_3f0 = 0x8071465;
  local_3ec = 3;
  local_420 = 0x1000;
  local_41c = 0x5c;
  _gfortran_st_write();
  local_524 = CONCAT44(uVar31,0x22);
  pcVar33 = " # Energy(eV)         abs(chi1(w))";
  _gfortran_transfer_character(&local_420," # Energy(eV)         abs(chi1(w))",0x22,uVar31);
  _gfortran_st_write_done();
  uVar31 = (undefined4)((ulonglong)local_524 >> 0x20);
  iVar21 = *param_14;
  local_50 = 2;
  if (1 < iVar21) {
    do {
      uVar31 = (undefined4)((ulonglong)local_524 >> 0x20);
      ene = (real_kind_8_)(*param_15 * (double)(local_50 + -1) * local_6c);
      local_418 = "linopt.F90";
      local_414 = 0x101;
      local_3f0 = 0x807156c;
      local_3ec = 9;
      local_420 = 0x1000;
      local_41c = 0x5c;
      _gfortran_st_write(&local_420,pcVar33,local_524);
      _gfortran_transfer_real(&local_420,&ene,8,uVar31);
      iVar22 = (eps[0]._12_4_ * local_50 + eps[0]._4_4_) * 0x10;
      uVar31 = (undefined4)((ulonglong)*(undefined8 *)(iVar22 + 8 + (int)eps[0]._0_4_) >> 0x20);
      local_2cc = cabs(*(double *)(iVar22 + (int)eps[0]._0_4_));
      local_524 = CONCAT44(uVar31,8);
      pcVar33 = (char *)&local_2cc;
      _gfortran_transfer_real();
      _gfortran_st_write_done();
      uVar31 = (undefined4)((ulonglong)local_524 >> 0x20);
      bVar29 = local_50 != iVar21;
      local_50 = local_50 + 1;
    } while (bVar29);
  }
  local_418 = "linopt.F90";
  local_414 = 0x105;
  local_420 = 0;
  local_41c = 0x5c;
  _gfortran_st_close();
  if (local_244 == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 263 of file linopt.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_080713d7,uVar31);
  }
  free(local_244);
  local_244 = (void *)0x0;
  if (local_268 == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 263 of file linopt.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_080713fb,uVar31);
  }
  free(local_268);
  local_268 = (void *)0x0;
  if (__ptr == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 263 of file linopt.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_0807137b,uVar31);
  }
  free(__ptr);
  if (eps[0]._0_4_ == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 263 of file linopt.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_080713d3,uVar31);
  }
  free(eps[0]._0_4_);
  eps[0]._0_4_ = (void *)0x0;
  if (local_268 != (void *)0x0) {
    free(local_268);
  }
  local_268 = (void *)0x0;
  if (local_244 != (void *)0x0) {
    free(local_244);
  }
  local_244 = (void *)0x0;
  if (eps[0]._0_4_ != (void *)0x0) {
    free(eps[0]._0_4_);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x08052f7a)
// WARNING: Removing unreachable block (ram,0x0805acb1)
// WARNING: Could not reconcile some variable overlaps

void nlinopt(int *param_1,double *param_2,int *param_3,int param_4,int *param_5,int param_6,
            uint *param_7,int param_8,double *param_9,int param_10,int *param_11,int *param_12,
            int *param_13,int *param_14,double *param_15,double *param_16,double *param_17,
            double *param_18)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  size_t __size;
  void *__src;
  int *__src_00;
  uint uVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  void *pvVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  int extraout_ECX;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  bool bVar39;
  char *pcVar40;
  undefined4 uVar41;
  double *pdVar42;
  undefined8 local_e64;
  undefined4 uVar43;
  int local_d94;
  int local_d90;
  int local_d8c;
  int local_d88;
  int local_d84;
  int local_d80;
  void *local_d7c;
  int local_d78;
  undefined4 local_ca0;
  undefined4 local_c9c;
  undefined4 local_c98;
  undefined4 local_c94;
  undefined4 local_c80;
  undefined *local_c7c;
  undefined4 local_c70;
  undefined4 local_c6c;
  undefined4 local_c68;
  undefined4 local_c64;
  undefined4 local_c50;
  undefined4 local_c4c;
  double local_b4c;
  double local_b44;
  double local_b3c;
  double local_b34;
  double local_b2c;
  double local_b24;
  double local_b1c;
  double local_b14;
  double local_b0c;
  double local_b04;
  double local_afc;
  double local_af4;
  double local_aec;
  double local_ae4;
  double local_adc;
  double local_ad4;
  double local_acc;
  double local_ac4;
  double local_abc;
  double local_ab4;
  double local_aac;
  double local_aa4;
  double local_a9c;
  void *local_a94;
  int local_a90;
  void *local_a8c;
  int local_a88;
  void *local_a84;
  int local_a80;
  void *local_a7c;
  int local_a78;
  void *local_a74;
  int local_a70;
  double local_a6c;
  double local_a64;
  double local_a5c;
  double local_a54;
  double local_a4c;
  double local_a44;
  double local_a3c;
  void *local_a30;
  int local_a2c;
  undefined4 local_a28;
  int local_a24;
  int local_a20;
  int local_a1c;
  int local_a18;
  int local_a14;
  int local_a10;
  int local_a0c;
  int local_a08;
  int local_a04;
  void *local_a00;
  int local_9fc;
  undefined4 local_9f8;
  int local_9f4;
  int local_9f0;
  undefined4 local_9ec;
  int local_9e8;
  int local_9e4;
  undefined4 local_9e0;
  void *local_9dc;
  int local_9d8;
  undefined4 local_9d4;
  int local_9d0;
  undefined4 local_9cc;
  uint local_9c8;
  uint local_9c4;
  undefined4 local_9c0;
  uint local_9bc;
  int local_9b8;
  undefined4 local_9b4;
  undefined4 local_9b0;
  int local_9ac;
  undefined4 local_9a8;
  undefined4 local_9a4;
  int local_9a0;
  undefined4 local_99c;
  undefined4 local_998;
  void *local_994;
  int local_990;
  undefined4 local_98c;
  int local_988;
  undefined4 local_984;
  uint local_980;
  uint local_97c;
  undefined4 local_978;
  uint local_974;
  int local_970;
  undefined4 local_96c;
  undefined4 local_968;
  int local_964;
  undefined4 local_960;
  undefined4 local_95c;
  int local_958;
  undefined4 local_954;
  undefined4 local_950;
  void *local_94c;
  int local_948;
  undefined4 local_944;
  int local_940;
  undefined4 local_93c;
  uint local_938;
  uint local_934;
  undefined4 local_930;
  uint local_92c;
  int local_928;
  undefined4 local_924;
  undefined4 local_920;
  int local_91c;
  undefined4 local_918;
  undefined4 local_914;
  int local_910;
  undefined4 local_90c;
  undefined4 local_908;
  double local_904;
  double local_8fc;
  double local_8f4;
  double local_8ec;
  double local_8e4;
  double local_8dc;
  double local_8d4;
  double local_8cc;
  double local_8c4;
  double local_8bc;
  void *local_8b0;
  int local_8ac;
  undefined4 local_8a8;
  int local_8a4;
  int local_8a0;
  int local_89c;
  void *local_898;
  int local_894;
  undefined4 local_890;
  int local_88c;
  int local_888;
  int local_884;
  void *local_880;
  int local_87c;
  undefined4 local_878;
  int local_874;
  int local_870;
  int local_86c;
  void *local_868;
  int local_864;
  undefined4 local_860;
  int local_85c;
  int local_858;
  int local_854;
  int local_850;
  double local_84c;
  double local_844;
  undefined local_83c [11];
  undefined auStack2097 [245];
  undefined local_73c [10];
  undefined auStack1842 [246];
  undefined local_63c [10];
  undefined auStack1586 [246];
  undefined local_53c [13];
  undefined auStack1327 [243];
  undefined local_43c [13];
  undefined auStack1071 [243];
  real_kind_8_ ene;
  complex_kind_8_ delta [1] [1] [1];
  int local_324;
  uint local_320;
  uint local_31c;
  int local_318;
  uint local_314;
  int local_310;
  int local_30c;
  int local_308;
  complex_kind_8_ b331;
  complex_kind_8_ b31_32;
  complex_kind_8_ b313;
  complex_kind_8_ b312;
  complex_kind_8_ b311;
  complex_kind_8_ b243;
  complex_kind_8_ b242;
  complex_kind_8_ b241;
  complex_kind_8_ b24;
  complex_kind_8_ b231;
  complex_kind_8_ b223;
  complex_kind_8_ b222;
  complex_kind_8_ b221;
  complex_kind_8_ b21_22;
  complex_kind_8_ b213;
  complex_kind_8_ b212;
  complex_kind_8_ b211;
  complex_kind_8_ b133;
  complex_kind_8_ b132;
  complex_kind_8_ b131;
  complex_kind_8_ b12_13;
  complex_kind_8_ b123;
  complex_kind_8_ b122;
  complex_kind_8_ b121;
  complex_kind_8_ b113;
  complex_kind_8_ b112;
  complex_kind_8_ b111;
  complex_kind_8_ b11;
  real_kind_8_ au2esu;
  real_kind_8_ const;
  real_kind_8_ const_au;
  real_kind_8_ corec;
  real_kind_8_ e1;
  real_kind_8_ e12;
  real_kind_8_ e2;
  real_kind_8_ el;
  real_kind_8_ em;
  real_kind_8_ emax;
  real_kind_8_ emin;
  real_kind_8_ en;
  integer_kind_4_ ubound_0;
  integer_kind_4_ ubound_1;
  integer_kind_4_ ubound_3;
  int local_cc;
  int local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  double local_4c;
  double local_44;
  double local_3c;
  double local_2c;
  
  uVar29 = 0;
  if (-1 < (int)*param_7) {
    uVar29 = *param_7;
  }
  iVar37 = 0;
  if (-1 < (int)(uVar29 * *param_1)) {
    iVar37 = uVar29 * *param_1;
  }
  iVar32 = ~uVar29 - iVar37;
  uVar30 = 0;
  if (-1 < (int)*param_7) {
    uVar30 = *param_7;
  }
  iVar34 = 0;
  if (-1 < (int)(uVar30 * *param_7)) {
    iVar34 = uVar30 * *param_7;
  }
  iVar35 = 0;
  if (-1 < iVar34 * *param_3) {
    iVar35 = iVar34 * *param_3;
  }
  iVar36 = 0;
  if (-1 < iVar35 * 3) {
    iVar36 = iVar35 * 3;
  }
  iVar38 = ((~uVar30 - iVar34) - iVar35) - iVar36;
  local_868 = (void *)0x0;
  local_880 = (void *)0x0;
  local_898 = (void *)0x0;
  local_8b0 = (void *)0x0;
  local_94c = (void *)0x0;
  local_994 = (void *)0x0;
  local_9dc = (void *)0x0;
  local_a00 = (void *)0x0;
  local_a30 = (void *)0x0;
  local_a6c = 0.00000000;
  local_a64 = 1.00000000;
  local_84c = *param_17 * 0.00000000 - 0.00000000;
  local_844 = *param_17 * 1.00000000 + 0.00000000;
  dVar17 = (-2.00000000 / ((double)*param_5 * *param_2)) * 0.00000006;
  _gfortran_string_trim();
  __size = (local_a70 + 0xd) * 0x20;
  if ((int)__size < 0) {
    __size = _gfortran_runtime_error();
  }
  if ((int)__size < 1) {
    __size = 1;
  }
  __src = malloc(__size);
  if (__src == (void *)0x0) {
    __src = (void *)_gfortran_os_error();
  }
  _gfortran_concat_string();
  if ((0 < local_a70) && (local_a74 != (void *)0x0)) {
    free(local_a74);
  }
  __size = local_a70 + 0xd;
  if ((int)__size < 0x100) {
    memmove(local_43c,__src,__size);
    memset(auStack1071 + local_a70,0x20,0x100 - __size);
  }
  else {
    memmove(local_43c,__src,0x100);
  }
  if (__src != (void *)0x0) {
    free(__src);
  }
  _gfortran_string_trim();
  __size = (local_a78 + 0xd) * 0x20;
  if ((int)__size < 0) {
    __size = _gfortran_runtime_error();
  }
  if ((int)__size < 1) {
    __size = 1;
  }
  __src = malloc(__size);
  if (__src == (void *)0x0) {
    __src = (void *)_gfortran_os_error();
  }
  _gfortran_concat_string();
  if ((0 < local_a78) && (local_a7c != (void *)0x0)) {
    free(local_a7c);
  }
  __size = local_a78 + 0xd;
  if ((int)__size < 0x100) {
    memmove(local_53c,__src,__size);
    memset(auStack1327 + local_a78,0x20,0x100 - __size);
  }
  else {
    memmove(local_53c,__src,0x100);
  }
  if (__src != (void *)0x0) {
    free(__src);
  }
  _gfortran_string_trim();
  __size = (local_a80 + 10) * 0x20;
  if ((int)__size < 0) {
    __size = _gfortran_runtime_error();
  }
  if ((int)__size < 1) {
    __size = 1;
  }
  __src = malloc(__size);
  if (__src == (void *)0x0) {
    __src = (void *)_gfortran_os_error();
  }
  _gfortran_concat_string();
  if ((0 < local_a80) && (local_a84 != (void *)0x0)) {
    free(local_a84);
  }
  __size = local_a80 + 10;
  if ((int)__size < 0x100) {
    memmove(local_63c,__src,__size);
    memset(auStack1586 + local_a80,0x20,0x100 - __size);
  }
  else {
    memmove(local_63c,__src,0x100);
  }
  if (__src != (void *)0x0) {
    free(__src);
  }
  _gfortran_string_trim();
  __size = (local_a88 + 10) * 0x20;
  if ((int)__size < 0) {
    __size = _gfortran_runtime_error();
  }
  if ((int)__size < 1) {
    __size = 1;
  }
  __src = malloc(__size);
  if (__src == (void *)0x0) {
    __src = (void *)_gfortran_os_error();
  }
  _gfortran_concat_string();
  if ((0 < local_a88) && (local_a8c != (void *)0x0)) {
    free(local_a8c);
  }
  __size = local_a88 + 10;
  if ((int)__size < 0x100) {
    memmove(local_73c,__src,__size);
    memset(auStack1842 + local_a88,0x20,0x100 - __size);
  }
  else {
    memmove(local_73c,__src,0x100);
  }
  if (__src != (void *)0x0) {
    free(__src);
  }
  _gfortran_string_trim();
  __size = (local_a90 + 0xb) * 0x20;
  if ((int)__size < 0) {
    __size = _gfortran_runtime_error();
  }
  if ((int)__size < 1) {
    __size = 1;
  }
  __src_00 = (int *)malloc(__size);
  if (__src_00 == (int *)0x0) {
    __src_00 = (int *)_gfortran_os_error();
  }
  __src = local_a94;
  _gfortran_concat_string();
  if ((0 < local_a90) && (local_a94 != (void *)0x0)) {
    free(local_a94);
  }
  __size = local_a90 + 0xb;
  if ((int)__size < 0x100) {
    memmove(local_83c,__src_00,__size);
    local_e64 = CONCAT44(__src,0x100 - __size);
    pcVar40 = (char *)0x20;
    memset(auStack2097 + local_a90,0x20,0x100 - __size);
  }
  else {
    local_e64 = CONCAT44(__src,0x100);
    pcVar40 = (char *)__src_00;
    memmove(local_83c,__src_00,0x100);
  }
  if (__src_00 != (int *)0x0) {
    free(__src_00);
  }
  iVar23 = *param_5;
  local_a4 = 1;
  if (0 < iVar23) {
    do {
      uVar41 = (undefined4)((ulonglong)local_e64 >> 0x20);
      if (((((ABS(*(double *)(param_6 + (local_a4 + -1) * 0x48) + 1.00000000) < 0.00000000) &&
            (ABS(*(double *)(param_6 + (local_a4 * 9 + -5) * 8) + 1.00000000) < 0.00000000)) &&
           (ABS(*(double *)(param_6 + (local_a4 * 9 + -1) * 8) + 1.00000000) < 0.00000000)) &&
          (((ABS(*(double *)(param_6 + (local_a4 * 9 + -6) * 8)) < 0.00000000 &&
            (ABS(*(double *)(param_6 + (local_a4 * 9 + -3) * 8)) < 0.00000000)) &&
           ((ABS(*(double *)(param_6 + (local_a4 * 9 + -8) * 8)) < 0.00000000 &&
            ((ABS(*(double *)(param_6 + (local_a4 * 9 + -2) * 8)) < 0.00000000 &&
             (ABS(*(double *)(param_6 + (local_a4 * 9 + -7) * 8)) < 0.00000000)))))))) &&
         (ABS(*(double *)(param_6 + ((local_a4 + 1) * 9 + -0xd) * 8)) < 0.00000000)) {
        local_c98 = 0x80716ab;
        local_c94 = 0xb0;
        local_ca0 = 0x80;
        local_c9c = 6;
        _gfortran_st_write();
        _gfortran_transfer_character
                  (&local_ca0,"-----------------------------------------",0x29,uVar41);
        _gfortran_st_write_done();
        local_c98 = 0x80716ab;
        local_c94 = 0xb1;
        local_ca0 = 0x80;
        local_c9c = 6;
        _gfortran_st_write();
        _gfortran_transfer_character();
        _gfortran_st_write_done();
        local_c98 = 0x80716ab;
        local_c94 = 0xb2;
        local_ca0 = 0x80;
        local_c9c = 6;
        _gfortran_st_write();
        _gfortran_transfer_character();
        _gfortran_st_write_done();
        local_c98 = 0x80716ab;
        local_c94 = 0xb3;
        local_ca0 = 0x80;
        local_c9c = 6;
        _gfortran_st_write();
        local_e64 = CONCAT44(uVar41,0x29);
        pcVar40 = "-----------------------------------------";
        _gfortran_transfer_character();
        _gfortran_st_write_done();
        _gfortran_stop_numeric();
        iVar23 = extraout_ECX;
      }
      bVar39 = local_a4 != iVar23;
      local_a4 = local_a4 + 1;
    } while (bVar39);
  }
  uVar41 = (undefined4)((ulonglong)local_e64 >> 0x20);
  if (((((*param_11 < 1) || (*param_12 < 1)) || (*param_13 < 1)) ||
      ((3 < *param_11 || (3 < *param_12)))) || (3 < *param_13)) {
    local_c98 = 0x80716ab;
    local_c94 = 0xba;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"---------------------------------------------",0x2d,uVar41);
    _gfortran_st_write_done();
    local_c98 = 0x80716ab;
    local_c94 = 0xbb;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"    Error in nlinopt:                        ",0x2d,uVar41);
    _gfortran_st_write_done();
    local_c98 = 0x80716ab;
    local_c94 = 0xbc;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"    the polarisation directions incorrect    ",0x2d,uVar41);
    _gfortran_st_write_done();
    local_c98 = 0x80716ab;
    local_c94 = 0xbd;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"    1=x,  2=y  and 3=z                       ",0x2d,uVar41);
    _gfortran_st_write_done();
    local_c98 = 0x80716ab;
    local_c94 = 0xbe;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    local_e64 = CONCAT44(uVar41,0x2d);
    pcVar40 = "---------------------------------------------";
    _gfortran_transfer_character
              (&local_ca0,"---------------------------------------------",0x2d,uVar41);
    _gfortran_st_write_done();
    _gfortran_stop_numeric();
  }
  uVar41 = (undefined4)((ulonglong)local_e64 >> 0x20);
  if (*param_14 < 1) {
    local_c98 = 0x80716ab;
    local_c94 = 0xc3;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"---------------------------------------------",0x2d,uVar41);
    _gfortran_st_write_done();
    local_c98 = 0x80716ab;
    local_c94 = 0xc4;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"    Error in nlinopt:                        ",0x2d,uVar41);
    _gfortran_st_write_done();
    local_c98 = 0x80716ab;
    local_c94 = 0xc5;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"    number of energy mesh points incorrect   ",0x2d,uVar41);
    _gfortran_st_write_done();
    local_c98 = 0x80716ab;
    local_c94 = 0xc6;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"    number has to integer greater than 0     ",0x2d,uVar41);
    _gfortran_st_write_done();
    local_c98 = 0x80716ab;
    local_c94 = 199;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"    nmesh*de = max energy for calculation    ",0x2d,uVar41);
    _gfortran_st_write_done();
    local_c98 = 0x80716ab;
    local_c94 = 200;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    local_e64 = CONCAT44(uVar41,0x2d);
    pcVar40 = "---------------------------------------------";
    _gfortran_transfer_character
              (&local_ca0,"---------------------------------------------",0x2d,uVar41);
    _gfortran_st_write_done();
    _gfortran_stop_numeric();
  }
  uVar41 = (undefined4)((ulonglong)local_e64 >> 0x20);
  if (*param_15 <= 0.00000000) {
    local_c98 = 0x80716ab;
    local_c94 = 0xcd;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"---------------------------------------------",0x2d,uVar41);
    _gfortran_st_write_done();
    local_c98 = 0x80716ab;
    local_c94 = 0xce;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"    Error in nlinopt:                        ",0x2d,uVar41);
    _gfortran_st_write_done();
    local_c98 = 0x80716ab;
    local_c94 = 0xcf;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"    energy step is incorrect                 ",0x2d,uVar41);
    _gfortran_st_write_done();
    local_c98 = 0x80716ab;
    local_c94 = 0xd0;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"    number has to real greater than 0.0      ",0x2d,uVar41);
    _gfortran_st_write_done();
    local_c98 = 0x80716ab;
    local_c94 = 0xd1;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"    nmesh*de = max energy for calculation    ",0x2d,uVar41);
    _gfortran_st_write_done();
    local_c98 = 0x80716ab;
    local_c94 = 0xd2;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    local_e64 = CONCAT44(uVar41,0x2d);
    pcVar40 = "---------------------------------------------";
    _gfortran_transfer_character
              (&local_ca0,"---------------------------------------------",0x2d,uVar41);
    _gfortran_st_write_done();
    _gfortran_stop_numeric();
  }
  uVar41 = (undefined4)((ulonglong)local_e64 >> 0x20);
  if (*param_16 < 0.00000000) {
    local_c98 = 0x80716ab;
    local_c94 = 0xd7;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"---------------------------------------------",0x2d,uVar41);
    _gfortran_st_write_done();
    local_c98 = 0x80716ab;
    local_c94 = 0xd8;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"    Error in nlinopt:                        ",0x2d,uVar41);
    _gfortran_st_write_done();
    local_c98 = 0x80716ab;
    local_c94 = 0xd9;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"    scissors shift is incorrect              ",0x2d,uVar41);
    _gfortran_st_write_done();
    local_c98 = 0x80716ab;
    local_c94 = 0xda;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"    number has to real greater than 0.0      ",0x2d,uVar41);
    _gfortran_st_write_done();
    local_c98 = 0x80716ab;
    local_c94 = 0xdb;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    local_e64 = CONCAT44(uVar41,0x2d);
    pcVar40 = "---------------------------------------------";
    _gfortran_transfer_character
              (&local_ca0,"---------------------------------------------",0x2d,uVar41);
    _gfortran_st_write_done();
    _gfortran_stop_numeric();
  }
  uVar41 = (undefined4)((ulonglong)local_e64 >> 0x20);
  if (*param_17 <= 0.00900000) {
    if (0.01500000 < *param_17) {
      local_c98 = 0x80716ab;
      local_c94 = 0xe5;
      local_ca0 = 0x80;
      local_c9c = 6;
      _gfortran_st_write();
      _gfortran_transfer_character
                (&local_ca0,
                                  
                 "----------------------------------------    ATTENTION: broadening is too high       ideally should be less than 0.005       ATTENTION: tolerance is too high        ideally should be less than 0.004   Attempt to allocate negative amount of memory. Possible integer overflow"
                 ,0x28,uVar41);
      _gfortran_st_write_done();
      local_c98 = 0x80716ab;
      local_c94 = 0xe6;
      local_ca0 = 0x80;
      local_c9c = 6;
      _gfortran_st_write();
      _gfortran_transfer_character(&local_ca0,0x80719a4,0x28,uVar41);
      _gfortran_st_write_done();
      local_c98 = 0x80716ab;
      local_c94 = 0xe7;
      local_ca0 = 0x80;
      local_c9c = 6;
      _gfortran_st_write();
      _gfortran_transfer_character(&local_ca0,0x80719cc,0x28,uVar41);
      _gfortran_st_write_done();
      local_c98 = 0x80716ab;
      local_c94 = 0xe8;
      local_ca0 = 0x80;
      local_c9c = 6;
      _gfortran_st_write();
      local_e64 = CONCAT44(uVar41,0x28);
      pcVar40 = 
      "----------------------------------------    ATTENTION: broadening is too high       ideally should be less than 0.005       ATTENTION: tolerance is too high        ideally should be less than 0.004   Attempt to allocate negative amount of memory. Possible integer overflow"
      ;
      _gfortran_transfer_character
                (&local_ca0,
                                  
                 "----------------------------------------    ATTENTION: broadening is too high       ideally should be less than 0.005       ATTENTION: tolerance is too high        ideally should be less than 0.004   Attempt to allocate negative amount of memory. Possible integer overflow"
                 ,0x28,uVar41);
      _gfortran_st_write_done();
    }
  }
  else {
    local_c98 = 0x80716ab;
    local_c94 = 0xe0;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"---------------------------------------------",0x2d,uVar41);
    _gfortran_st_write_done();
    local_c98 = 0x80716ab;
    local_c94 = 0xe1;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"    ATTENTION: broadening is quite high      ",0x2d,uVar41);
    _gfortran_st_write_done();
    local_c98 = 0x80716ab;
    local_c94 = 0xe2;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"    ideally should be less than 0.005        ",0x2d,uVar41);
    _gfortran_st_write_done();
    local_c98 = 0x80716ab;
    local_c94 = 0xe3;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    local_e64 = CONCAT44(uVar41,0x2d);
    pcVar40 = "---------------------------------------------";
    _gfortran_transfer_character
              (&local_ca0,"---------------------------------------------",0x2d,uVar41);
    _gfortran_st_write_done();
  }
  uVar41 = (undefined4)((ulonglong)local_e64 >> 0x20);
  if (0.00600000 < *param_18) {
    local_c98 = 0x80716ab;
    local_c94 = 0xec;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,
                              
               "----------------------------------------    ATTENTION: broadening is too high       ideally should be less than 0.005       ATTENTION: tolerance is too high        ideally should be less than 0.004   Attempt to allocate negative amount of memory. Possible integer overflow"
               ,0x28,uVar41);
    _gfortran_st_write_done();
    local_c98 = 0x80716ab;
    local_c94 = 0xed;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character(&local_ca0,0x80719f4,0x28,uVar41);
    _gfortran_st_write_done();
    local_c98 = 0x80716ab;
    local_c94 = 0xee;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character(&local_ca0,0x8071a1c,0x28,uVar41);
    _gfortran_st_write_done();
    local_c98 = 0x80716ab;
    local_c94 = 0xef;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    local_e64 = CONCAT44(uVar41,0x28);
    pcVar40 = 
    "----------------------------------------    ATTENTION: broadening is too high       ideally should be less than 0.005       ATTENTION: tolerance is too high        ideally should be less than 0.004   Attempt to allocate negative amount of memory. Possible integer overflow"
    ;
    _gfortran_transfer_character
              (&local_ca0,
                              
               "----------------------------------------    ATTENTION: broadening is too high       ideally should be less than 0.005       ATTENTION: tolerance is too high        ideally should be less than 0.004   Attempt to allocate negative amount of memory. Possible integer overflow"
               ,0x28,uVar41);
    _gfortran_st_write_done();
  }
  local_944 = 0x425;
  local_93c = 1;
  local_938 = *param_7;
  local_940 = 1;
  uVar25 = 0;
  if (-1 < (int)*param_7) {
    uVar25 = *param_7;
  }
  local_930 = 1;
  local_92c = *param_7;
  uVar22 = *param_7;
  if ((int)uVar22 < 0) {
    uVar22 = 0;
  }
  local_928 = uVar22 * uVar25;
  local_924 = 1;
  local_920 = 3;
  local_91c = local_928 * 3;
  local_918 = 1;
  local_914 = 3;
  local_910 = local_928 * 9;
  local_90c = 1;
  local_908 = 3;
  iVar23 = ~uVar25 + local_928 * -0xd;
  if ((int)*param_7 < 1 || (int)*param_7 < 1) {
    __size = 0;
  }
  else {
    __size = local_928 * 0x1b0;
  }
  local_934 = uVar25;
  if (local_94c == (void *)0x0) {
    if ((int)__size < 0) {
      __size = _gfortran_runtime_error();
    }
    if ((int)__size < 1) {
      __size = 1;
    }
    __src = malloc(__size);
    if (__src == (void *)0x0) {
      __src = (void *)_gfortran_os_error();
    }
    local_98c = 0x425;
    local_984 = 1;
    local_980 = *param_7;
    local_988 = 1;
    uVar25 = 0;
    if (-1 < (int)*param_7) {
      uVar25 = *param_7;
    }
    local_978 = 1;
    local_974 = *param_7;
    uVar22 = *param_7;
    if ((int)uVar22 < 0) {
      uVar22 = 0;
    }
    local_970 = uVar22 * uVar25;
    local_96c = 1;
    local_968 = 3;
    local_964 = local_970 * 3;
    local_960 = 1;
    local_95c = 3;
    local_958 = local_970 * 9;
    local_954 = 1;
    local_950 = 3;
    iVar24 = ~uVar25 + local_970 * -0xd;
    local_97c = uVar25;
    local_94c = __src;
    local_948 = iVar23;
    if ((int)*param_7 < 1 || (int)*param_7 < 1) goto LAB_08052907;
    __size = local_970 * 0x1b0;
  }
  else {
    uVar41 = (undefined4)((ulonglong)local_e64 >> 0x20);
    local_e64 = CONCAT44(uVar41,0x8071a9b);
    pcVar40 = "Attempting to allocate already allocated array \'%s\'";
    _gfortran_runtime_error_at
              ("At line 245 of file nlinopt.F90",
               "Attempting to allocate already allocated array \'%s\'",&DAT_08071a9b,uVar41);
    iVar24 = iVar23;
LAB_08052907:
    __size = 0;
  }
  if (local_994 == (void *)0x0) {
    if ((int)__size < 0) {
      __size = _gfortran_runtime_error();
    }
    if ((int)__size < 1) {
      __size = 1;
    }
    __src = malloc(__size);
    if (__src == (void *)0x0) {
      __src = (void *)_gfortran_os_error();
    }
    local_9d4 = 0x425;
    local_9cc = 1;
    local_9c8 = *param_7;
    local_9d0 = 1;
    uVar25 = 0;
    if (-1 < (int)*param_7) {
      uVar25 = *param_7;
    }
    local_9c0 = 1;
    local_9bc = *param_7;
    uVar22 = *param_7;
    if ((int)uVar22 < 0) {
      uVar22 = 0;
    }
    local_9b8 = uVar22 * uVar25;
    local_9b4 = 1;
    local_9b0 = 3;
    local_9ac = local_9b8 * 3;
    local_9a8 = 1;
    local_9a4 = 3;
    local_9a0 = local_9b8 * 9;
    local_99c = 1;
    local_998 = 3;
    iVar23 = ~uVar25 + local_9b8 * -0xd;
    local_9c4 = uVar25;
    local_994 = __src;
    local_990 = iVar24;
    if ((int)*param_7 < 1 || (int)*param_7 < 1) goto LAB_08052a77;
    __size = local_9b8 * 0x1b0;
  }
  else {
    uVar41 = (undefined4)((ulonglong)local_e64 >> 0x20);
    local_e64 = CONCAT44(uVar41,0x8071af4);
    pcVar40 = "Attempting to allocate already allocated array \'%s\'";
    _gfortran_runtime_error_at
              ("At line 246 of file nlinopt.F90",
               "Attempting to allocate already allocated array \'%s\'",&DAT_08071af4,uVar41);
    iVar23 = iVar24;
LAB_08052a77:
    __size = 0;
  }
  if (local_9dc == (void *)0x0) {
    if ((int)__size < 0) {
      __size = _gfortran_runtime_error();
    }
    if ((int)__size < 1) {
      __size = 1;
    }
    __src = malloc(__size);
    if (__src == (void *)0x0) {
      __src = (void *)_gfortran_os_error();
    }
    local_878 = 0x421;
    local_870 = 1;
    local_86c = *param_14;
    local_874 = 1;
    iVar24 = 0;
    if (-1 < *param_14) {
      iVar24 = *param_14;
    }
    local_9dc = __src;
    local_9d8 = iVar23;
    if (*param_14 < 1) goto LAB_08052b38;
    __size = iVar24 << 4;
  }
  else {
    uVar41 = (undefined4)((ulonglong)local_e64 >> 0x20);
    local_e64 = CONCAT44(uVar41,0x8071b18);
    pcVar40 = "Attempting to allocate already allocated array \'%s\'";
    _gfortran_runtime_error_at
              ("At line 247 of file nlinopt.F90",
               "Attempting to allocate already allocated array \'%s\'",&DAT_08071b18,uVar41);
LAB_08052b38:
    __size = 0;
  }
  if (local_880 == (void *)0x0) {
    if ((int)__size < 0) {
      __size = _gfortran_runtime_error();
    }
    if ((int)__size < 1) {
      __size = 1;
    }
    __src = malloc(__size);
    if (__src == (void *)0x0) {
      __src = (void *)_gfortran_os_error();
    }
    local_87c = -1;
    local_860 = 0x421;
    local_858 = 1;
    local_854 = *param_14;
    local_85c = 1;
    iVar24 = 0;
    if (-1 < *param_14) {
      iVar24 = *param_14;
    }
    local_880 = __src;
    if (*param_14 < 1) goto LAB_08052bfb;
    __size = iVar24 << 4;
  }
  else {
    uVar41 = (undefined4)((ulonglong)local_e64 >> 0x20);
    local_e64 = CONCAT44(uVar41,0x8071b3c);
    pcVar40 = "Attempting to allocate already allocated array \'%s\'";
    _gfortran_runtime_error_at
              ("At line 248 of file nlinopt.F90",
               "Attempting to allocate already allocated array \'%s\'","inter2w",uVar41);
LAB_08052bfb:
    __size = 0;
  }
  if (local_868 == (void *)0x0) {
    if ((int)__size < 0) {
      __size = _gfortran_runtime_error();
    }
    if ((int)__size < 1) {
      __size = 1;
    }
    __src = malloc(__size);
    if (__src == (void *)0x0) {
      __src = (void *)_gfortran_os_error();
    }
    local_864 = -1;
    local_8a8 = 0x421;
    local_8a0 = 1;
    local_89c = *param_14;
    local_8a4 = 1;
    iVar24 = 0;
    if (-1 < *param_14) {
      iVar24 = *param_14;
    }
    local_868 = __src;
    if (*param_14 < 1) goto LAB_08052cbe;
    __size = iVar24 << 4;
  }
  else {
    uVar41 = (undefined4)((ulonglong)local_e64 >> 0x20);
    local_e64 = CONCAT44(uVar41,0x8071b64);
    pcVar40 = "Attempting to allocate already allocated array \'%s\'";
    _gfortran_runtime_error_at
              ("At line 249 of file nlinopt.F90",
               "Attempting to allocate already allocated array \'%s\'","inter1w",uVar41);
LAB_08052cbe:
    __size = 0;
  }
  if (local_8b0 == (void *)0x0) {
    if ((int)__size < 0) {
      __size = _gfortran_runtime_error();
    }
    if ((int)__size < 1) {
      __size = 1;
    }
    __src = malloc(__size);
    if (__src == (void *)0x0) {
      __src = (void *)_gfortran_os_error();
    }
    local_8ac = -1;
    local_890 = 0x421;
    local_888 = 1;
    local_884 = *param_14;
    local_88c = 1;
    iVar24 = 0;
    if (-1 < *param_14) {
      iVar24 = *param_14;
    }
    local_8b0 = __src;
    if (*param_14 < 1) goto LAB_08052d81;
    __size = iVar24 << 4;
  }
  else {
    uVar41 = (undefined4)((ulonglong)local_e64 >> 0x20);
    local_e64 = CONCAT44(uVar41,0x8071b8c);
    pcVar40 = "Attempting to allocate already allocated array \'%s\'";
    _gfortran_runtime_error_at
              ("At line 250 of file nlinopt.F90",
               "Attempting to allocate already allocated array \'%s\'","intra2w",uVar41);
LAB_08052d81:
    __size = 0;
  }
  if (local_898 == (void *)0x0) {
    if ((int)__size < 0) {
      __size = _gfortran_runtime_error();
    }
    if ((int)__size < 1) {
      __size = 1;
    }
    __src = malloc(__size);
    if (__src == (void *)0x0) {
      __src = (void *)_gfortran_os_error();
    }
    local_894 = -1;
    local_324 = 1;
    local_320 = *param_7;
    delta[0][0][0]._12_4_ = 1;
    local_31c = 0;
    if (-1 < (int)*param_7) {
      local_31c = *param_7;
    }
    local_318 = 1;
    local_314 = *param_7;
    uVar25 = *param_7;
    if ((int)uVar25 < 0) {
      uVar25 = 0;
    }
    local_310 = uVar25 * local_31c;
    local_30c = 1;
    local_308 = 3;
    iVar23 = local_310 * 3;
    uVar25 = ~local_31c - local_310;
    local_898 = __src;
    if ((int)*param_7 < 1 || (int)*param_7 < 1) goto LAB_08052ead;
    __size = local_310 * 0x30;
  }
  else {
    uVar41 = (undefined4)((ulonglong)local_e64 >> 0x20);
    local_e64 = CONCAT44(uVar41,0x8071bb4);
    pcVar40 = "Attempting to allocate already allocated array \'%s\'";
    _gfortran_runtime_error_at
              ("At line 251 of file nlinopt.F90",
               "Attempting to allocate already allocated array \'%s\'","intra1w",uVar41);
LAB_08052ead:
    __size = 0;
  }
  if ((int)__size < 0) {
    __size = _gfortran_runtime_error();
  }
  if ((int)__size < 1) {
    __size = 1;
  }
  __src = malloc(__size);
  if (__src == (void *)0x0) {
    __src = (void *)_gfortran_os_error();
  }
  local_a28 = 0x21b;
  local_a20 = 1;
  local_a1c = 3;
  local_a24 = 1;
  local_a14 = 1;
  local_a10 = 3;
  local_a18 = 3;
  local_a08 = 1;
  local_a04 = 3;
  local_a0c = 9;
  if (local_a30 == (void *)0x0) {
    local_a04 = 3;
    local_a08 = 1;
    local_a0c = 9;
    local_a10 = 3;
    local_a14 = 1;
    local_a18 = 3;
    local_a1c = 3;
    local_a20 = 1;
    local_a24 = 1;
    local_a28 = 0x21b;
    pvVar26 = malloc(0xd8);
    if (pvVar26 == (void *)0x0) {
      pvVar26 = (void *)_gfortran_os_error();
    }
    local_a2c = -0xd;
    local_9f8 = 0x21a;
    local_9f0 = 1;
    local_9ec = 3;
    local_9f4 = 1;
    local_9e4 = 1;
    local_9e0 = 3;
    local_9e8 = 3;
    local_a30 = pvVar26;
    if (local_a00 != (void *)0x0) {
      uVar41 = (undefined4)((ulonglong)local_e64 >> 0x20);
      local_e64 = CONCAT44(uVar41,0x8071c28);
      pcVar40 = "Attempting to allocate already allocated array \'%s\'";
      _gfortran_runtime_error_at
                ("At line 254 of file nlinopt.F90",
                 "Attempting to allocate already allocated array \'%s\'",&DAT_08071c28,uVar41);
      goto LAB_080530e5;
    }
  }
  else {
    uVar41 = (undefined4)((ulonglong)local_e64 >> 0x20);
    local_e64 = CONCAT44(uVar41,0x8071c04);
    pcVar40 = "Attempting to allocate already allocated array \'%s\'";
    _gfortran_runtime_error_at
              ("At line 253 of file nlinopt.F90",
               "Attempting to allocate already allocated array \'%s\'",&DAT_08071c04,uVar41);
  }
  pvVar26 = malloc(0x48);
  if (pvVar26 == (void *)0x0) {
    pvVar26 = (void *)_gfortran_os_error();
  }
  local_9fc = -4;
  local_d7c = local_a30;
  local_d80 = local_a2c;
  local_d84 = local_a20;
  local_d88 = local_a1c;
  local_d8c = local_a14;
  local_d90 = local_a10;
  local_d94 = local_a04;
  local_d78 = local_a24;
  iVar23 = local_a08;
  local_a00 = pvVar26;
LAB_080530e5:
  while (uVar41 = (undefined4)((ulonglong)local_e64 >> 0x20), iVar23 <= local_d94) {
    iVar24 = local_d8c;
    while (iVar24 <= local_d90) {
      iVar33 = local_d84;
      while (iVar33 <= local_d88) {
        *(undefined8 *)
         ((int)local_d7c +
         (local_a18 * iVar24 + local_a0c * iVar23 + local_d80 + local_d78 * iVar33) * 8) = 0;
        iVar33 = iVar33 + 1;
      }
      iVar24 = iVar24 + 1;
    }
    iVar23 = iVar23 + 1;
  }
  iVar23 = *param_5;
  local_a4 = 1;
  iVar24 = local_870;
  if (0 < iVar23) {
    do {
      iVar33 = 1;
      while (iVar33 < 4) {
        iVar31 = 1;
        while (iVar31 < 4) {
          *(undefined8 *)
           ((int)local_a00 +
           ((iVar31 + local_9f0 + -1) * local_9f4 +
           local_9e8 * (iVar33 + local_9e4 + -1) + local_9fc) * 8) =
               *(undefined8 *)(param_6 + (iVar31 + local_a4 * 9 + -0xd + iVar33 * 3) * 8);
          iVar31 = iVar31 + 1;
        }
        iVar33 = iVar33 + 1;
      }
      local_cc = 1;
      do {
        local_9c = 1;
        do {
          local_98 = 1;
          do {
            *(double *)
             ((int)local_a30 +
             (local_a24 * local_cc + local_a18 * local_9c + local_a0c * local_98 + local_a2c) * 8) =
                 *(double *)
                  ((int)local_a00 + (local_9f4 * local_98 + local_9e8 * *param_13 + local_9fc) * 8)
                 * *(double *)
                    ((int)local_a00 + (local_9f4 * local_9c + local_9e8 * *param_12 + local_9fc) * 8
                    ) * *(double *)
                         ((int)local_a00 +
                         (local_9f4 * local_cc + local_9e8 * *param_11 + local_9fc) * 8) +
                 *(double *)
                  ((int)local_a30 +
                  (local_a24 * local_cc + local_a18 * local_9c + local_a0c * local_98 + local_a2c) *
                  8);
            bVar39 = local_98 != 3;
            local_98 = local_98 + 1;
          } while (bVar39);
          bVar39 = local_9c != 3;
          local_9c = local_9c + 1;
        } while (bVar39);
        bVar39 = local_cc != 3;
        local_cc = local_cc + 1;
      } while (bVar39);
      bVar39 = local_a4 != iVar23;
      local_a4 = local_a4 + 1;
    } while (bVar39);
  }
  while (iVar23 = local_858, iVar24 <= local_86c) {
    iVar23 = (iVar24 * local_874 + local_87c) * 0x10;
    *(undefined8 *)(iVar23 + (int)local_880) = 0;
    *(undefined8 *)(iVar23 + 8 + (int)local_880) = 0;
    iVar24 = iVar24 + 1;
  }
  while (iVar24 = local_8a0, iVar23 <= local_854) {
    iVar24 = (iVar23 * local_85c + local_864) * 0x10;
    *(undefined8 *)(iVar24 + (int)local_868) = 0;
    *(undefined8 *)(iVar24 + 8 + (int)local_868) = 0;
    iVar23 = iVar23 + 1;
  }
  while (iVar23 = local_888, iVar24 <= local_89c) {
    iVar23 = (iVar24 * local_8a4 + local_8ac) * 0x10;
    *(undefined8 *)(iVar23 + (int)local_8b0) = 0;
    *(undefined8 *)(iVar23 + 8 + (int)local_8b0) = 0;
    iVar24 = iVar24 + 1;
  }
  while (iVar23 <= local_884) {
    iVar24 = (iVar23 * local_88c + local_894) * 0x10;
    *(undefined8 *)(iVar24 + (int)local_898) = 0;
    *(undefined8 *)(iVar24 + 8 + (int)local_898) = 0;
    iVar23 = iVar23 + 1;
  }
  while (local_30c <= local_308) {
    iVar23 = local_318;
    while (iVar23 <= (int)local_314) {
      iVar24 = local_324;
      while (iVar24 <= (int)local_320) {
        iVar33 = (delta[0][0][0]._12_4_ * iVar24 +
                 local_31c * iVar23 + uVar25 + local_310 * local_30c) * 0x10;
        *(undefined8 *)(iVar33 + (int)__src) = 0;
        *(undefined8 *)(iVar33 + 8 + (int)__src) = 0;
        iVar24 = iVar24 + 1;
      }
      iVar23 = iVar23 + 1;
    }
    local_30c = local_30c + 1;
  }
  emin = 0.00000000;
  emax = 0.00000000;
  iVar23 = *param_3;
  local_850 = 1;
  if (0 < iVar23) {
    do {
      uVar41 = (undefined4)((ulonglong)local_e64 >> 0x20);
      local_c98 = 0x80716ab;
      local_c94 = 0x115;
      local_ca0 = 0x80;
      local_c9c = 6;
      _gfortran_st_write(&local_ca0,pcVar40,local_e64);
      _gfortran_transfer_integer();
      _gfortran_transfer_character();
      local_e64 = CONCAT44(uVar41,4);
      pcVar40 = (char *)param_3;
      _gfortran_transfer_integer();
      _gfortran_st_write_done();
      uVar41 = (undefined4)((ulonglong)local_e64 >> 0x20);
      iVar24 = *param_1;
      local_bc = 1;
      if (0 < iVar24) {
        do {
          uVar22 = *param_7;
          local_b8 = 1;
          if (0 < (int)uVar22) {
            do {
              dVar1 = *(double *)
                       (param_8 + (uVar29 * local_bc + local_850 * iVar37 + local_b8 + iVar32) * 8);
              if (dVar1 < *param_9) {
                uVar16 = *param_7;
                local_b4 = 1;
                if (0 < (int)uVar16) {
                  do {
                    dVar2 = *(double *)
                             (param_8 +
                             (uVar29 * local_bc + local_850 * iVar37 + local_b4 + iVar32) * 8);
                    if (*param_9 < dVar2) {
                      dVar2 = dVar1 - dVar2;
                      dVar2 = (dVar2 - *param_16) / dVar2;
                      iVar33 = 1;
                      while (iVar33 < 4) {
                        iVar31 = (iVar35 * iVar33 +
                                 iVar36 * local_bc +
                                 iVar34 * local_850 + local_b4 * uVar30 + local_b8 + iVar38) * 0x10;
                        dVar3 = *(double *)(iVar31 + param_10);
                        dVar4 = *(double *)(iVar31 + 8 + param_10);
                        iVar31 = (iVar33 * iVar35 +
                                 local_bc * iVar36 +
                                 iVar34 * local_850 + uVar30 * local_b4 + iVar38 + local_b8) * 0x10;
                        *(double *)(iVar31 + param_10) = dVar3 * dVar2 - dVar4 * 0.00000000;
                        *(double *)(iVar31 + 8 + param_10) = dVar2 * dVar4 + dVar3 * 0.00000000;
                        iVar33 = iVar33 + 1;
                      }
                      local_94 = 1;
                      do {
                        local_90 = 1;
                        do {
                          local_8c = 1;
                          do {
                            dVar2 = *(double *)
                                     ((int)local_a30 +
                                     (local_a24 * local_90 + local_a18 * local_94 +
                                      local_a0c * local_8c + local_a2c) * 8);
                            dVar3 = *(double *)
                                     ((int)local_a30 +
                                     (local_a24 * local_90 + local_a18 * local_8c +
                                      local_a0c * local_94 + local_a2c) * 8);
                            dVar4 = *(double *)
                                     ((int)local_a30 +
                                     (local_a24 * local_8c + local_a18 * local_94 +
                                      local_a0c * local_90 + local_a2c) * 8);
                            dVar5 = *(double *)
                                     ((int)local_a30 +
                                     (local_a24 * local_8c + local_a18 * local_90 +
                                      local_a0c * local_94 + local_a2c) * 8);
                            dVar8 = (double)(int)ROUND(*(double *)
                                                        ((int)local_a30 +
                                                        (local_a24 * local_94 + local_a18 * local_8c
                                                         + local_a0c * local_90 + local_a2c) * 8) +
                                                       *(double *)
                                                        ((int)local_a30 +
                                                        (local_a24 * local_94 + local_a18 * local_90
                                                         + local_a0c * local_8c + local_a2c) * 8));
                            iVar33 = (uVar30 * local_b4 + local_850 * iVar34 + local_b8 +
                                      iVar36 * local_bc + iVar35 * local_94 + iVar38) * 0x10;
                            dVar6 = *(double *)(iVar33 + param_10);
                            dVar7 = *(double *)(iVar33 + 8 + param_10);
                            iVar33 = (local_940 * local_b8 + local_934 * local_b4 +
                                      local_91c * local_90 + local_928 * local_94 +
                                      local_910 * local_8c + local_948) * 0x10;
                            *(double *)(iVar33 + (int)local_94c) =
                                 dVar8 * dVar6 - dVar7 * 0.00000000;
                            *(double *)(iVar33 + 8 + (int)local_94c) =
                                 dVar6 * 0.00000000 + dVar7 * dVar8;
                            dVar6 = (double)(int)ROUND(dVar3 + dVar2);
                            iVar33 = (uVar30 * local_b8 + local_850 * iVar34 + local_b4 +
                                      iVar36 * local_bc + iVar35 * local_94 + iVar38) * 0x10;
                            dVar2 = *(double *)(iVar33 + param_10);
                            dVar3 = *(double *)(iVar33 + 8 + param_10);
                            iVar33 = (local_988 * local_b4 + local_97c * local_b8 +
                                      local_964 * local_90 + local_970 * local_94 +
                                      local_958 * local_8c + local_990) * 0x10;
                            *(double *)(iVar33 + (int)local_994) =
                                 dVar6 * dVar2 - dVar3 * 0.00000000;
                            *(double *)(iVar33 + 8 + (int)local_994) =
                                 dVar2 * 0.00000000 + dVar3 * dVar6;
                            dVar4 = (double)(int)ROUND(dVar5 + dVar4);
                            iVar33 = (uVar30 * local_b8 + local_850 * iVar34 + local_b4 +
                                      iVar36 * local_bc + iVar35 * local_94 + iVar38) * 0x10;
                            dVar2 = *(double *)(iVar33 + param_10);
                            dVar3 = *(double *)(iVar33 + 8 + param_10);
                            iVar33 = (local_9d0 * local_b4 + local_9c4 * local_b8 +
                                      local_9ac * local_90 + local_9b8 * local_94 +
                                      local_9a0 * local_8c + local_9d8) * 0x10;
                            *(double *)(iVar33 + (int)local_9dc) =
                                 dVar4 * dVar2 - dVar3 * 0.00000000;
                            *(double *)(iVar33 + 8 + (int)local_9dc) =
                                 dVar2 * 0.00000000 + dVar3 * dVar4;
                            bVar39 = local_8c != 3;
                            local_8c = local_8c + 1;
                          } while (bVar39);
                          bVar39 = local_90 != 3;
                          local_90 = local_90 + 1;
                        } while (bVar39);
                        bVar39 = local_94 != 3;
                        local_94 = local_94 + 1;
                      } while (bVar39);
                    }
                    bVar39 = local_b4 != uVar16;
                    local_b4 = local_b4 + 1;
                  } while (bVar39);
                }
              }
              bVar39 = local_b8 != uVar22;
              local_b8 = local_b8 + 1;
            } while (bVar39);
          }
          uVar22 = *param_7;
          local_b8 = 1;
          if (0 < (int)uVar22) {
            do {
              dVar1 = *(double *)
                       (param_8 + (uVar29 * local_bc + local_850 * iVar37 + local_b8 + iVar32) * 8);
              if (dVar1 < (double)emin) {
                emin = (real_kind_8_)dVar1;
              }
              dVar1 = *(double *)
                       (param_8 + (uVar29 * local_bc + local_850 * iVar37 + local_b8 + iVar32) * 8);
              if ((double)emax < dVar1) {
                emax = (real_kind_8_)dVar1;
              }
              uVar16 = *param_7;
              local_b4 = 1;
              if (0 < (int)uVar16) {
                do {
                  iVar33 = 1;
                  while (iVar33 < 4) {
                    iVar31 = (iVar35 * iVar33 +
                             iVar36 * local_bc +
                             iVar34 * local_850 + local_b8 * uVar30 + local_b8 + iVar38) * 0x10;
                    dVar1 = *(double *)(iVar31 + 8 + param_10);
                    iVar27 = (iVar35 * iVar33 +
                             local_bc * iVar36 +
                             iVar34 * local_850 + uVar30 * local_b4 + iVar38 + local_b4) * 0x10;
                    dVar2 = *(double *)(iVar27 + 8 + param_10);
                    iVar28 = (iVar33 * local_310 +
                             local_31c * local_b4 + delta[0][0][0]._12_4_ * local_b8 + uVar25) *
                             0x10;
                    *(double *)(iVar28 + (int)__src) =
                         *(double *)(iVar31 + param_10) - *(double *)(iVar27 + param_10);
                    *(double *)(iVar28 + 8 + (int)__src) = dVar1 - dVar2;
                    iVar33 = iVar33 + 1;
                  }
                  bVar39 = local_b4 != uVar16;
                  local_b4 = local_b4 + 1;
                } while (bVar39);
              }
              bVar39 = local_b8 != uVar22;
              local_b8 = local_b8 + 1;
            } while (bVar39);
          }
          b312._0_8_ = 0.00000000;
          b312._8_8_ = 0.00000000;
          uVar22 = *param_7;
          local_a8 = 1;
          if (0 < (int)uVar22) {
            do {
              dVar1 = *(double *)
                       (param_8 + (uVar29 * local_bc + local_850 * iVar37 + local_a8 + iVar32) * 8);
              if (dVar1 < *param_9) {
                uVar16 = *param_7;
                local_ac = 1;
                if (0 < (int)uVar16) {
                  do {
                    dVar2 = *(double *)
                             (param_8 +
                             (uVar29 * local_bc + local_850 * iVar37 + local_ac + iVar32) * 8);
                    if (*param_9 < dVar2) {
                      dVar2 = dVar2 + *param_16;
                      dVar3 = dVar2 - dVar1;
                      dVar4 = -dVar3;
                      local_904 = 0.00000000;
                      local_8fc = 0.00000000;
                      local_8e4 = 0.00000000;
                      local_8dc = 0.00000000;
                      local_94 = 1;
                      do {
                        local_90 = 1;
                        do {
                          local_8c = 1;
                          do {
                            iVar33 = (local_940 * local_a8 + local_934 * local_ac +
                                      local_91c * local_90 + local_928 * local_94 +
                                      local_910 * local_8c + local_948) * 0x10;
                            dVar5 = *(double *)(iVar33 + (int)local_94c);
                            dVar6 = *(double *)(iVar33 + 8 + (int)local_94c);
                            iVar33 = (uVar30 * local_a8 + local_850 * iVar34 + local_ac +
                                      iVar36 * local_bc + iVar35 * local_8c + iVar38) * 0x10;
                            dVar7 = *(double *)(iVar33 + param_10);
                            dVar8 = *(double *)(iVar33 + 8 + param_10);
                            dVar13 = dVar5 * dVar7 - dVar6 * dVar8;
                            dVar7 = dVar7 * dVar6 + dVar8 * dVar5;
                            iVar33 = (delta[0][0][0]._12_4_ * local_ac + local_31c * local_a8 +
                                      local_310 * local_90 + uVar25) * 0x10;
                            dVar5 = *(double *)(iVar33 + (int)__src);
                            dVar6 = *(double *)(iVar33 + 8 + (int)__src);
                            local_904 = local_904 + (dVar13 * dVar5 - dVar7 * dVar6);
                            local_8fc = local_8fc + dVar5 * dVar7 + dVar6 * dVar13;
                            iVar33 = (local_940 * local_a8 + local_934 * local_ac +
                                      local_91c * local_90 + local_928 * local_94 +
                                      local_910 * local_8c + local_948) * 0x10;
                            dVar5 = *(double *)(iVar33 + (int)local_94c);
                            dVar6 = *(double *)(iVar33 + 8 + (int)local_94c);
                            iVar33 = (uVar30 * local_a8 + local_850 * iVar34 + local_ac +
                                      iVar36 * local_bc + iVar35 * local_90 + iVar38) * 0x10;
                            dVar7 = *(double *)(iVar33 + param_10);
                            dVar8 = *(double *)(iVar33 + 8 + param_10);
                            dVar13 = dVar5 * dVar7 - dVar6 * dVar8;
                            dVar7 = dVar7 * dVar6 + dVar8 * dVar5;
                            iVar33 = (delta[0][0][0]._12_4_ * local_ac + local_31c * local_a8 +
                                      local_310 * local_8c + uVar25) * 0x10;
                            dVar5 = *(double *)(iVar33 + (int)__src);
                            dVar6 = *(double *)(iVar33 + 8 + (int)__src);
                            local_8e4 = local_8e4 + (dVar13 * dVar5 - dVar7 * dVar6);
                            local_8dc = local_8dc + dVar5 * dVar7 + dVar6 * dVar13;
                            bVar39 = local_8c != 3;
                            local_8c = local_8c + 1;
                          } while (bVar39);
                          bVar39 = local_90 != 3;
                          local_90 = local_90 + 1;
                        } while (bVar39);
                        bVar39 = local_94 != 3;
                        local_94 = local_94 + 1;
                      } while (bVar39);
                      b11._0_8_ = 0.00000000;
                      b11._8_8_ = 0.00000000;
                      b12_13._0_8_ = 0.00000000;
                      b12_13._8_8_ = 0.00000000;
                      b24._0_8_ = 0.00000000;
                      b24._8_8_ = 0.00000000;
                      b31_32._0_8_ = 0.00000000;
                      b31_32._8_8_ = 0.00000000;
                      b21_22._0_8_ = 0.00000000;
                      b21_22._8_8_ = 0.00000000;
                      dVar6 = local_904 * 8.00000000 - local_8fc * 0.00000000;
                      dVar5 = local_8fc * 8.00000000 + local_904 * 0.00000000;
                      if (0.00000000 <= ABS(dVar3)) {
                        dVar13 = 0.00000000 / dVar3;
                        dVar7 = dVar3 + dVar13 * 0.00000000;
                        dVar8 = (dVar5 * dVar13 + dVar6) / dVar7;
                        dVar7 = (dVar5 - dVar6 * dVar13) / dVar7;
                      }
                      else {
                        dVar13 = dVar3 / 0.00000000;
                        dVar7 = dVar3 * dVar13 + 0.00000000;
                        dVar8 = (dVar6 * dVar13 + dVar5) / dVar7;
                        dVar7 = (dVar5 * dVar13 - dVar6) / dVar7;
                      }
                      if (0.00000000 <= ABS(dVar4)) {
                        dVar13 = 0.00000000 / dVar4;
                        dVar5 = dVar4 + dVar13 * 0.00000000;
                        dVar6 = (local_8dc * dVar13 + local_8e4) / dVar5;
                        dVar5 = dVar5 / (local_8dc - local_8e4 * dVar13);
                      }
                      else {
                        dVar13 = dVar4 / 0.00000000;
                        dVar5 = dVar4 * dVar13 + 0.00000000;
                        dVar6 = (local_8e4 * dVar13 + local_8dc) / dVar5;
                        dVar5 = dVar5 / (local_8dc * dVar13 - local_8e4);
                      }
                      local_b0 = 1;
                      if (0 < (int)(local_a8 - 1)) {
                        do {
                          b241._8_8_ = *(double *)
                                        (param_8 +
                                        (uVar29 * local_bc + local_850 * iVar37 + local_b0 + iVar32)
                                        * 8);
                          dVar13 = b241._8_8_ - dVar1;
                          b241._8_8_ = dVar2 - b241._8_8_;
                          b311._8_8_ = -b241._8_8_;
                          local_8f4 = 0.00000000;
                          local_8ec = 0.00000000;
                          local_8c4 = 0.00000000;
                          local_8bc = 0.00000000;
                          local_8d4 = 0.00000000;
                          local_8cc = 0.00000000;
                          local_94 = 1;
                          do {
                            local_90 = 1;
                            do {
                              local_8c = 1;
                              do {
                                iVar33 = (local_940 * local_a8 + local_934 * local_ac +
                                          local_91c * local_90 + local_928 * local_94 +
                                          local_910 * local_8c + local_948) * 0x10;
                                dVar9 = *(double *)(iVar33 + (int)local_94c);
                                dVar10 = *(double *)(iVar33 + 8 + (int)local_94c);
                                iVar33 = (uVar30 * local_b0 + local_850 * iVar34 + local_ac +
                                          iVar36 * local_bc + iVar35 * local_90 + iVar38) * 0x10;
                                dVar11 = *(double *)(iVar33 + param_10);
                                dVar12 = *(double *)(iVar33 + 8 + param_10);
                                dVar14 = dVar9 * dVar11 - dVar10 * dVar12;
                                dVar11 = dVar11 * dVar10 + dVar12 * dVar9;
                                iVar33 = (uVar30 * local_a8 + local_850 * iVar34 + local_b0 +
                                          iVar36 * local_bc + iVar35 * local_8c + iVar38) * 0x10;
                                dVar9 = *(double *)(iVar33 + param_10);
                                dVar10 = *(double *)(iVar33 + 8 + param_10);
                                local_8f4 = local_8f4 + (dVar14 * dVar9 - dVar11 * dVar10);
                                local_8ec = local_8ec + dVar9 * dVar11 + dVar10 * dVar14;
                                iVar33 = (local_988 * local_ac + local_97c * local_a8 +
                                          local_964 * local_90 + local_970 * local_94 +
                                          local_958 * local_8c + local_990) * 0x10;
                                dVar9 = *(double *)(iVar33 + (int)local_994);
                                dVar10 = *(double *)(iVar33 + 8 + (int)local_994);
                                iVar33 = (uVar30 * local_ac + local_850 * iVar34 + local_b0 +
                                          iVar36 * local_bc + iVar35 * local_8c + iVar38) * 0x10;
                                dVar11 = *(double *)(iVar33 + param_10);
                                dVar12 = *(double *)(iVar33 + 8 + param_10);
                                dVar14 = dVar9 * dVar11 - dVar10 * dVar12;
                                dVar11 = dVar11 * dVar10 + dVar12 * dVar9;
                                iVar33 = (uVar30 * local_b0 + local_850 * iVar34 + local_a8 +
                                          iVar36 * local_bc + iVar35 * local_90 + iVar38) * 0x10;
                                dVar9 = *(double *)(iVar33 + param_10);
                                dVar10 = *(double *)(iVar33 + 8 + param_10);
                                local_8c4 = local_8c4 + (dVar14 * dVar9 - dVar11 * dVar10);
                                local_8bc = local_8bc + dVar9 * dVar11 + dVar10 * dVar14;
                                iVar33 = (local_9d0 * local_ac + local_9c4 * local_a8 +
                                          local_9ac * local_90 + local_9b8 * local_94 +
                                          local_9a0 * local_8c + local_9d8) * 0x10;
                                dVar9 = *(double *)(iVar33 + (int)local_9dc);
                                dVar10 = *(double *)(iVar33 + 8 + (int)local_9dc);
                                iVar33 = (uVar30 * local_ac + local_850 * iVar34 + local_b0 +
                                          iVar36 * local_bc + iVar35 * local_8c + iVar38) * 0x10;
                                dVar11 = *(double *)(iVar33 + param_10);
                                dVar12 = *(double *)(iVar33 + 8 + param_10);
                                dVar14 = dVar9 * dVar11 - dVar10 * dVar12;
                                dVar11 = dVar11 * dVar10 + dVar12 * dVar9;
                                iVar33 = (uVar30 * local_b0 + local_850 * iVar34 + local_a8 +
                                          iVar36 * local_bc + iVar35 * local_90 + iVar38) * 0x10;
                                dVar9 = *(double *)(iVar33 + param_10);
                                dVar10 = *(double *)(iVar33 + 8 + param_10);
                                local_8d4 = local_8d4 + (dVar14 * dVar9 - dVar11 * dVar10);
                                local_8cc = local_8cc + dVar9 * dVar11 + dVar10 * dVar14;
                                bVar39 = local_8c != 3;
                                local_8c = local_8c + 1;
                              } while (bVar39);
                              bVar39 = local_90 != 3;
                              local_90 = local_90 + 1;
                            } while (bVar39);
                            bVar39 = local_94 != 3;
                            local_94 = local_94 + 1;
                          } while (bVar39);
                          dVar9 = 1.00000000 / (dVar13 + b311._8_8_);
                          dVar11 = dVar9 * local_8f4 - local_8ec * 0.00000000;
                          dVar9 = local_8f4 * 0.00000000 + local_8ec * dVar9;
                          dVar10 = dVar11 * (1.00000000 / b311._8_8_) - dVar9 * 0.00000000;
                          dVar9 = (1.00000000 / b311._8_8_) * dVar9 + dVar11 * 0.00000000;
                          dVar11 = 1.00000000 / (dVar4 + b311._8_8_);
                          dVar14 = dVar11 * local_8c4 - local_8bc * 0.00000000;
                          dVar11 = local_8c4 * 0.00000000 + local_8bc * dVar11;
                          dVar12 = dVar14 * (1.00000000 / b311._8_8_) - dVar11 * 0.00000000;
                          dVar11 = (1.00000000 / b311._8_8_) * dVar11 + dVar14 * 0.00000000;
                          dVar15 = (1.00000000 / b311._8_8_) * local_8d4 - local_8cc * 0.00000000;
                          dVar14 = local_8d4 * 0.00000000 + local_8cc * (1.00000000 / b311._8_8_);
                          if (0.00000000 <= ABS(b241._8_8_)) {
                            dVar18 = 0.00000000 / b241._8_8_;
                            b21_22._8_8_ = b241._8_8_ + dVar18 * 0.00000000;
                            b21_22._0_8_ = (local_8bc * dVar18 + local_8c4) / b21_22._8_8_;
                            b21_22._8_8_ = b21_22._8_8_ / (local_8bc - local_8c4 * dVar18);
                          }
                          else {
                            dVar18 = b241._8_8_ / 0.00000000;
                            b21_22._8_8_ = b241._8_8_ * dVar18 + 0.00000000;
                            b21_22._0_8_ = (local_8c4 * dVar18 + local_8bc) / b21_22._8_8_;
                            b21_22._8_8_ = b21_22._8_8_ / (local_8bc * dVar18 - local_8c4);
                          }
                          if (0.00000000 <= ABS(b241._8_8_)) {
                            dVar18 = 0.00000000 / b241._8_8_;
                            b241._8_8_ = b241._8_8_ + dVar18 * 0.00000000;
                            b241._0_8_ = (local_8ec * dVar18 + local_8f4) / b241._8_8_;
                            b241._8_8_ = b241._8_8_ / (local_8ec - local_8f4 * dVar18);
                          }
                          else {
                            dVar18 = b241._8_8_ / 0.00000000;
                            b241._8_8_ = b241._8_8_ * dVar18 + 0.00000000;
                            b241._0_8_ = (local_8f4 * dVar18 + local_8ec) / b241._8_8_;
                            b241._8_8_ = b241._8_8_ / (local_8ec * dVar18 - local_8f4);
                          }
                          b241._0_8_ = -b241._0_8_;
                          b241._8_8_ = -b241._8_8_;
                          if (0.00000000 <= ABS(b311._8_8_)) {
                            dVar18 = 0.00000000 / b311._8_8_;
                            b311._8_8_ = b311._8_8_ + dVar18 * 0.00000000;
                            b311._0_8_ = (local_8cc * dVar18 + local_8d4) / b311._8_8_;
                            b311._8_8_ = b311._8_8_ / (local_8cc - local_8d4 * dVar18);
                          }
                          else {
                            dVar18 = b311._8_8_ / 0.00000000;
                            b311._8_8_ = b311._8_8_ * dVar18 + 0.00000000;
                            b311._0_8_ = (local_8d4 * dVar18 + local_8cc) / b311._8_8_;
                            b311._8_8_ = b311._8_8_ / (local_8cc * dVar18 - local_8d4);
                          }
                          if (ABS(dVar13) <= *param_18) {
                            b111._0_8_ = 0.00000000;
                            b111._8_8_ = 0.00000000;
                            b121._0_8_ = 0.00000000;
                            b121._8_8_ = 0.00000000;
                            b131._0_8_ = 0.00000000;
                            b131._8_8_ = 0.00000000;
                            b221._0_8_ = 0.00000000;
                            b221._8_8_ = 0.00000000;
                          }
                          else {
                            if (0.00000000 <= ABS(dVar13)) {
                              dVar18 = 0.00000000 / dVar13;
                              b111._8_8_ = dVar13 + dVar18 * 0.00000000;
                              b111._0_8_ = (dVar9 * dVar18 + dVar10) / b111._8_8_;
                              b111._8_8_ = b111._8_8_ / (dVar9 - dVar10 * dVar18);
                            }
                            else {
                              dVar18 = dVar13 / 0.00000000;
                              b111._8_8_ = dVar13 * dVar18 + 0.00000000;
                              b111._0_8_ = (dVar10 * dVar18 + dVar9) / b111._8_8_;
                              b111._8_8_ = b111._8_8_ / (dVar9 * dVar18 - dVar10);
                            }
                            if (0.00000000 <= ABS(dVar13)) {
                              dVar9 = 0.00000000 / dVar13;
                              b121._8_8_ = dVar13 + dVar9 * 0.00000000;
                              b121._0_8_ = (dVar11 * dVar9 + dVar12) / b121._8_8_;
                              b121._8_8_ = b121._8_8_ / (dVar11 - dVar12 * dVar9);
                            }
                            else {
                              dVar9 = dVar13 / 0.00000000;
                              b121._8_8_ = dVar13 * dVar9 + 0.00000000;
                              b121._0_8_ = (dVar12 * dVar9 + dVar11) / b121._8_8_;
                              b121._8_8_ = b121._8_8_ / (dVar11 * dVar9 - dVar12);
                            }
                            if (0.00000000 <= ABS(dVar13)) {
                              dVar9 = 0.00000000 / dVar13;
                              b131._8_8_ = dVar13 + dVar9 * 0.00000000;
                              b131._0_8_ = (dVar14 * dVar9 + dVar15) / b131._8_8_;
                              b131._8_8_ = b131._8_8_ / (dVar14 - dVar15 * dVar9);
                            }
                            else {
                              dVar9 = dVar13 / 0.00000000;
                              b131._8_8_ = dVar13 * dVar9 + 0.00000000;
                              b131._0_8_ = (dVar15 * dVar9 + dVar14) / b131._8_8_;
                              b131._8_8_ = b131._8_8_ / (dVar14 * dVar9 - dVar15);
                            }
                            if (0.00000000 <= ABS(dVar13)) {
                              dVar9 = 0.00000000 / dVar13;
                              b221._8_8_ = dVar13 + dVar9 * 0.00000000;
                              b221._0_8_ = (local_8cc * dVar9 + local_8d4) / b221._8_8_;
                              b221._8_8_ = b221._8_8_ / (local_8cc - local_8d4 * dVar9);
                            }
                            else {
                              dVar9 = dVar13 / 0.00000000;
                              b221._8_8_ = dVar13 * dVar9 + 0.00000000;
                              b221._0_8_ = (local_8d4 * dVar9 + local_8cc) / b221._8_8_;
                              b221._8_8_ = b221._8_8_ / (local_8cc * dVar9 - local_8d4);
                            }
                            if (0.00000000 <= ABS(dVar13)) {
                              dVar11 = 0.00000000 / dVar13;
                              dVar9 = dVar13 + dVar11 * 0.00000000;
                              dVar10 = (local_8ec * dVar11 + local_8f4) / dVar9;
                              dVar9 = dVar9 / (local_8ec - local_8f4 * dVar11);
                            }
                            else {
                              dVar11 = dVar13 / 0.00000000;
                              dVar9 = dVar13 * dVar11 + 0.00000000;
                              dVar10 = (local_8f4 * dVar11 + local_8ec) / dVar9;
                              dVar9 = dVar9 / (local_8ec * dVar11 - local_8f4);
                            }
                            b241._0_8_ = b241._0_8_ + dVar10;
                            b241._8_8_ = b241._8_8_ + dVar9;
                            if (0.00000000 <= ABS(dVar13)) {
                              dVar11 = 0.00000000 / dVar13;
                              dVar9 = dVar13 + dVar11 * 0.00000000;
                              dVar10 = (local_8bc * dVar11 + local_8c4) / dVar9;
                              dVar9 = dVar9 / (local_8bc - local_8c4 * dVar11);
                            }
                            else {
                              dVar11 = dVar13 / 0.00000000;
                              dVar9 = dVar13 * dVar11 + 0.00000000;
                              dVar10 = (local_8c4 * dVar11 + local_8bc) / dVar9;
                              dVar9 = dVar9 / (local_8bc * dVar11 - local_8c4);
                            }
                            b311._0_8_ = b311._0_8_ + dVar10;
                            b311._8_8_ = b311._8_8_ + dVar9;
                          }
                          dVar13 = dVar13 - dVar4;
                          if (ABS(dVar13) <= *param_18) {
                            b131._0_8_ = 0.00000000;
                            b131._8_8_ = 0.00000000;
                          }
                          else {
                            if (0.00000000 <= ABS(dVar13)) {
                              dVar10 = 0.00000000 / dVar13;
                              dVar13 = dVar13 + dVar10 * 0.00000000;
                              dVar9 = b131._0_8_ * dVar10;
                              b131._0_8_ = (b131._8_8_ * dVar10 + b131._0_8_) / dVar13;
                              b131._8_8_ = dVar13 / (b131._8_8_ - dVar9);
                            }
                            else {
                              dVar10 = dVar13 / 0.00000000;
                              dVar13 = dVar13 * dVar10 + 0.00000000;
                              dVar9 = b131._8_8_ * dVar10 - b131._0_8_;
                              b131._0_8_ = (b131._0_8_ * dVar10 + b131._8_8_) / dVar13;
                              b131._8_8_ = dVar13 / dVar9;
                            }
                          }
                          b11._0_8_ = b11._0_8_ +
                                      (b111._0_8_ * -2.00000000 - b111._8_8_ * -0.00000000);
                          b11._8_8_ = b11._8_8_ +
                                      b111._8_8_ * -2.00000000 + b111._0_8_ * -0.00000000;
                          b12_13._0_8_ = b131._0_8_ + b121._0_8_ + b12_13._0_8_;
                          b12_13._8_8_ = b131._8_8_ + b121._8_8_ + b12_13._8_8_;
                          b21_22._0_8_ = b221._0_8_ - b21_22._0_8_;
                          b21_22._8_8_ = b221._8_8_ - b21_22._8_8_;
                          b24._0_8_ = b24._0_8_ +
                                      ((b241._0_8_ + b241._0_8_) - b241._8_8_ * 0.00000000);
                          b24._8_8_ = b24._8_8_ + b241._8_8_ + b241._8_8_ + b241._0_8_ * 0.00000000;
                          b31_32._0_8_ = b311._0_8_ + b31_32._0_8_;
                          b31_32._8_8_ = b311._8_8_ + b31_32._8_8_;
                          bVar39 = local_b0 != local_a8 - 1;
                          local_b0 = local_b0 + 1;
                        } while (bVar39);
                      }
                      local_b0 = local_a8 + 1;
                      if ((int)local_b0 <= (int)(local_ac - 1)) {
                        do {
                          el = *(real_kind_8_ *)
                                (param_8 +
                                (uVar29 * local_bc + local_850 * iVar37 + local_b0 + iVar32) * 8);
                          local_8f4 = 0.00000000;
                          local_8ec = 0.00000000;
                          local_8c4 = 0.00000000;
                          local_8bc = 0.00000000;
                          local_8d4 = 0.00000000;
                          local_8cc = 0.00000000;
                          local_94 = 1;
                          do {
                            local_90 = 1;
                            do {
                              local_8c = 1;
                              do {
                                iVar33 = (local_940 * local_a8 + local_934 * local_ac +
                                          local_91c * local_90 + local_928 * local_94 +
                                          local_910 * local_8c + local_948) * 0x10;
                                dVar13 = *(double *)(iVar33 + (int)local_94c);
                                dVar9 = *(double *)(iVar33 + 8 + (int)local_94c);
                                iVar33 = (uVar30 * local_b0 + local_850 * iVar34 + local_ac +
                                          iVar36 * local_bc + iVar35 * local_90 + iVar38) * 0x10;
                                dVar10 = *(double *)(iVar33 + param_10);
                                dVar11 = *(double *)(iVar33 + 8 + param_10);
                                dVar12 = dVar13 * dVar10 - dVar9 * dVar11;
                                dVar10 = dVar10 * dVar9 + dVar11 * dVar13;
                                iVar33 = (uVar30 * local_a8 + local_850 * iVar34 + local_b0 +
                                          iVar36 * local_bc + iVar35 * local_8c + iVar38) * 0x10;
                                dVar13 = *(double *)(iVar33 + param_10);
                                dVar9 = *(double *)(iVar33 + 8 + param_10);
                                local_8f4 = local_8f4 + (dVar12 * dVar13 - dVar10 * dVar9);
                                local_8ec = local_8ec + dVar13 * dVar10 + dVar9 * dVar12;
                                iVar33 = (local_988 * local_ac + local_97c * local_a8 +
                                          local_964 * local_90 + local_970 * local_94 +
                                          local_958 * local_8c + local_990) * 0x10;
                                dVar13 = *(double *)(iVar33 + (int)local_994);
                                dVar9 = *(double *)(iVar33 + 8 + (int)local_994);
                                iVar33 = (uVar30 * local_ac + local_850 * iVar34 + local_b0 +
                                          iVar36 * local_bc + iVar35 * local_8c + iVar38) * 0x10;
                                dVar10 = *(double *)(iVar33 + param_10);
                                dVar11 = *(double *)(iVar33 + 8 + param_10);
                                dVar12 = dVar13 * dVar10 - dVar9 * dVar11;
                                dVar10 = dVar10 * dVar9 + dVar11 * dVar13;
                                iVar33 = (uVar30 * local_b0 + local_850 * iVar34 + local_a8 +
                                          iVar36 * local_bc + iVar35 * local_90 + iVar38) * 0x10;
                                dVar13 = *(double *)(iVar33 + param_10);
                                dVar9 = *(double *)(iVar33 + 8 + param_10);
                                local_8c4 = local_8c4 + (dVar12 * dVar13 - dVar10 * dVar9);
                                local_8bc = local_8bc + dVar13 * dVar10 + dVar9 * dVar12;
                                iVar33 = (local_9d0 * local_ac + local_9c4 * local_a8 +
                                          local_9ac * local_90 + local_9b8 * local_94 +
                                          local_9a0 * local_8c + local_9d8) * 0x10;
                                dVar13 = *(double *)(iVar33 + (int)local_9dc);
                                dVar9 = *(double *)(iVar33 + 8 + (int)local_9dc);
                                iVar33 = (uVar30 * local_ac + local_850 * iVar34 + local_b0 +
                                          iVar36 * local_bc + iVar35 * local_8c + iVar38) * 0x10;
                                dVar10 = *(double *)(iVar33 + param_10);
                                dVar11 = *(double *)(iVar33 + 8 + param_10);
                                dVar12 = dVar13 * dVar10 - dVar9 * dVar11;
                                dVar10 = dVar10 * dVar9 + dVar11 * dVar13;
                                iVar33 = (uVar30 * local_b0 + local_850 * iVar34 + local_a8 +
                                          iVar36 * local_bc + iVar35 * local_90 + iVar38) * 0x10;
                                dVar13 = *(double *)(iVar33 + param_10);
                                dVar9 = *(double *)(iVar33 + 8 + param_10);
                                local_8d4 = local_8d4 + (dVar12 * dVar13 - dVar10 * dVar9);
                                local_8cc = local_8cc + dVar13 * dVar10 + dVar9 * dVar12;
                                bVar39 = local_8c != 3;
                                local_8c = local_8c + 1;
                              } while (bVar39);
                              bVar39 = local_90 != 3;
                              local_90 = local_90 + 1;
                            } while (bVar39);
                            bVar39 = local_94 != 3;
                            local_94 = local_94 + 1;
                          } while (bVar39);
                          if (*param_9 <= (double)el) {
                            el = (real_kind_8_)((double)el + *param_16);
                          }
                          local_44 = (double)el - dVar1;
                          local_2c = -local_44;
                          local_3c = dVar2 - (double)el;
                          local_4c = -local_3c;
                          b112._0_8_ = 0.00000000;
                          b112._8_8_ = 0.00000000;
                          dVar13 = 1.00000000 / (dVar4 + local_4c);
                          dVar9 = dVar13 * local_8c4 - local_8bc * 0.00000000;
                          dVar13 = local_8c4 * 0.00000000 + local_8bc * dVar13;
                          dVar10 = 1.00000000 / (dVar4 + local_2c);
                          dVar11 = dVar10 * local_8d4 - local_8cc * 0.00000000;
                          dVar10 = local_8d4 * 0.00000000 + local_8cc * dVar10;
                          b242._0_8_ = 0.00000000;
                          b242._8_8_ = 0.00000000;
                          b222._0_8_ = 0.00000000;
                          b222._8_8_ = 0.00000000;
                          if (ABS(local_2c) <= *param_18) {
                            b122._0_8_ = 0.00000000;
                            b122._8_8_ = 0.00000000;
                            b132._0_8_ = 0.00000000;
                            b132._8_8_ = 0.00000000;
                          }
                          else {
                            if (0.00000000 <= ABS(local_44)) {
                              dVar12 = 0.00000000 / local_44;
                              b112._8_8_ = local_44 + dVar12 * 0.00000000;
                              b112._0_8_ = (local_8ec * dVar12 + local_8f4) / b112._8_8_;
                              b112._8_8_ = b112._8_8_ / (local_8ec - local_8f4 * dVar12);
                            }
                            else {
                              dVar12 = local_44 / 0.00000000;
                              b112._8_8_ = local_44 * dVar12 + 0.00000000;
                              b112._0_8_ = (local_8f4 * dVar12 + local_8ec) / b112._8_8_;
                              b112._8_8_ = b112._8_8_ / (local_8ec * dVar12 - local_8f4);
                            }
                            if (0.00000000 <= ABS(local_2c)) {
                              dVar12 = 0.00000000 / local_2c;
                              b122._8_8_ = local_2c + dVar12 * 0.00000000;
                              b122._0_8_ = (dVar13 * dVar12 + dVar9) / b122._8_8_;
                              b122._8_8_ = b122._8_8_ / (dVar13 - dVar9 * dVar12);
                            }
                            else {
                              dVar12 = local_2c / 0.00000000;
                              b122._8_8_ = local_2c * dVar12 + 0.00000000;
                              b122._0_8_ = (dVar9 * dVar12 + dVar13) / b122._8_8_;
                              b122._8_8_ = b122._8_8_ / (dVar13 * dVar12 - dVar9);
                            }
                            if (0.00000000 <= ABS(local_2c)) {
                              dVar13 = 0.00000000 / local_2c;
                              b132._8_8_ = local_2c + dVar13 * 0.00000000;
                              b132._0_8_ = (dVar10 * dVar13 + dVar11) / b132._8_8_;
                              b132._8_8_ = b132._8_8_ / (dVar10 - dVar11 * dVar13);
                            }
                            else {
                              dVar13 = local_2c / 0.00000000;
                              b132._8_8_ = local_2c * dVar13 + 0.00000000;
                              b132._0_8_ = (dVar11 * dVar13 + dVar10) / b132._8_8_;
                              b132._8_8_ = b132._8_8_ / (dVar10 * dVar13 - dVar11);
                            }
                            if (0.00000000 <= ABS(local_44)) {
                              dVar13 = 0.00000000 / local_44;
                              b242._8_8_ = local_44 + dVar13 * 0.00000000;
                              b242._0_8_ = (local_8ec * dVar13 + local_8f4) / b242._8_8_;
                              b242._8_8_ = b242._8_8_ / (local_8ec - local_8f4 * dVar13);
                            }
                            else {
                              dVar13 = local_44 / 0.00000000;
                              b242._8_8_ = local_44 * dVar13 + 0.00000000;
                              b242._0_8_ = (local_8f4 * dVar13 + local_8ec) / b242._8_8_;
                              b242._8_8_ = b242._8_8_ / (local_8ec * dVar13 - local_8f4);
                            }
                            if (0.00000000 <= ABS(local_44)) {
                              dVar13 = 0.00000000 / local_44;
                              b222._8_8_ = local_44 + dVar13 * 0.00000000;
                              b222._0_8_ = (local_8cc * dVar13 + local_8d4) / b222._8_8_;
                              b222._8_8_ = b222._8_8_ / (local_8cc - local_8d4 * dVar13);
                            }
                            else {
                              dVar13 = local_44 / 0.00000000;
                              b222._8_8_ = local_44 * dVar13 + 0.00000000;
                              b222._0_8_ = (local_8d4 * dVar13 + local_8cc) / b222._8_8_;
                              b222._8_8_ = b222._8_8_ / (local_8cc * dVar13 - local_8d4);
                            }
                            if (0.00000000 <= ABS(local_44)) {
                              dVar13 = 0.00000000 / local_44;
                              b312._8_8_ = local_44 + dVar13 * 0.00000000;
                              b312._0_8_ = (local_8bc * dVar13 + local_8c4) / b312._8_8_;
                              b312._8_8_ = b312._8_8_ / (local_8bc - local_8c4 * dVar13);
                            }
                            else {
                              dVar13 = local_44 / 0.00000000;
                              b312._8_8_ = local_44 * dVar13 + 0.00000000;
                              b312._0_8_ = (local_8c4 * dVar13 + local_8bc) / b312._8_8_;
                              b312._8_8_ = b312._8_8_ / (local_8bc * dVar13 - local_8c4);
                            }
                          }
                          if (ABS(local_4c) <= *param_18) {
                            b112._0_8_ = 0.00000000;
                            b112._8_8_ = 0.00000000;
                            b122._0_8_ = 0.00000000;
                            b122._8_8_ = 0.00000000;
                            b132._0_8_ = 0.00000000;
                            b132._8_8_ = 0.00000000;
                            b212._0_8_ = 0.00000000;
                            b212._8_8_ = 0.00000000;
                          }
                          else {
                            if (0.00000000 <= ABS(local_3c)) {
                              dVar10 = 0.00000000 / local_3c;
                              dVar9 = local_3c + dVar10 * 0.00000000;
                              dVar13 = b112._0_8_ * dVar10;
                              b112._0_8_ = (b112._8_8_ * dVar10 + b112._0_8_) / dVar9;
                              b112._8_8_ = dVar9 / (b112._8_8_ - dVar13);
                            }
                            else {
                              dVar10 = local_3c / 0.00000000;
                              dVar13 = local_3c * dVar10 + 0.00000000;
                              dVar9 = b112._8_8_ * dVar10 - b112._0_8_;
                              b112._0_8_ = (b112._0_8_ * dVar10 + b112._8_8_) / dVar13;
                              b112._8_8_ = dVar13 / dVar9;
                            }
                            if (0.00000000 <= ABS(local_4c)) {
                              dVar10 = 0.00000000 / local_4c;
                              dVar9 = local_4c + dVar10 * 0.00000000;
                              dVar13 = b122._0_8_ * dVar10;
                              b122._0_8_ = (b122._8_8_ * dVar10 + b122._0_8_) / dVar9;
                              b122._8_8_ = dVar9 / (b122._8_8_ - dVar13);
                            }
                            else {
                              dVar10 = local_4c / 0.00000000;
                              dVar13 = local_4c * dVar10 + 0.00000000;
                              dVar9 = b122._8_8_ * dVar10 - b122._0_8_;
                              b122._0_8_ = (b122._0_8_ * dVar10 + b122._8_8_) / dVar13;
                              b122._8_8_ = dVar13 / dVar9;
                            }
                            if (0.00000000 <= ABS(local_4c)) {
                              dVar10 = 0.00000000 / local_4c;
                              dVar9 = local_4c + dVar10 * 0.00000000;
                              dVar13 = b132._0_8_ * dVar10;
                              b132._0_8_ = (b132._8_8_ * dVar10 + b132._0_8_) / dVar9;
                              b132._8_8_ = dVar9 / (b132._8_8_ - dVar13);
                            }
                            else {
                              dVar10 = local_4c / 0.00000000;
                              dVar13 = local_4c * dVar10 + 0.00000000;
                              dVar9 = b132._8_8_ * dVar10 - b132._0_8_;
                              b132._0_8_ = (b132._0_8_ * dVar10 + b132._8_8_) / dVar13;
                              b132._8_8_ = dVar13 / dVar9;
                            }
                            if (0.00000000 <= ABS(local_3c)) {
                              dVar10 = 0.00000000 / local_3c;
                              dVar13 = local_3c + dVar10 * 0.00000000;
                              dVar9 = (local_8ec * dVar10 + local_8f4) / dVar13;
                              dVar13 = dVar13 / (local_8ec - local_8f4 * dVar10);
                            }
                            else {
                              dVar10 = local_3c / 0.00000000;
                              dVar13 = local_3c * dVar10 + 0.00000000;
                              dVar9 = (local_8f4 * dVar10 + local_8ec) / dVar13;
                              dVar13 = dVar13 / (local_8ec * dVar10 - local_8f4);
                            }
                            b242._0_8_ = b242._0_8_ - dVar9;
                            b242._8_8_ = b242._8_8_ - dVar13;
                            if (0.00000000 <= ABS(local_3c)) {
                              dVar13 = 0.00000000 / local_3c;
                              b212._8_8_ = local_3c + dVar13 * 0.00000000;
                              b212._0_8_ = (local_8bc * dVar13 + local_8c4) / b212._8_8_;
                              b212._8_8_ = b212._8_8_ / (local_8bc - local_8c4 * dVar13);
                            }
                            else {
                              dVar13 = local_3c / 0.00000000;
                              b212._8_8_ = local_3c * dVar13 + 0.00000000;
                              b212._0_8_ = (local_8c4 * dVar13 + local_8bc) / b212._8_8_;
                              b212._8_8_ = b212._8_8_ / (local_8bc * dVar13 - local_8c4);
                            }
                            if (0.00000000 <= ABS(local_4c)) {
                              dVar10 = 0.00000000 / local_4c;
                              dVar13 = local_4c + dVar10 * 0.00000000;
                              dVar9 = (local_8cc * dVar10 + local_8d4) / dVar13;
                              dVar13 = dVar13 / (local_8cc - local_8d4 * dVar10);
                            }
                            else {
                              dVar10 = local_4c / 0.00000000;
                              dVar13 = local_4c * dVar10 + 0.00000000;
                              dVar9 = (local_8d4 * dVar10 + local_8cc) / dVar13;
                              dVar13 = dVar13 / (local_8cc * dVar10 - local_8d4);
                            }
                            b312._0_8_ = b312._0_8_ + dVar9;
                            b312._8_8_ = b312._8_8_ + dVar13;
                          }
                          local_4c = local_4c - local_2c;
                          if (ABS(local_4c) <= *param_18) {
                            b112._0_8_ = 0.00000000;
                            b112._8_8_ = 0.00000000;
                          }
                          else {
                            if (0.00000000 <= ABS(local_4c)) {
                              dVar9 = 0.00000000 / local_4c;
                              local_4c = local_4c + dVar9 * 0.00000000;
                              dVar13 = b112._0_8_ * dVar9;
                              b112._0_8_ = (b112._8_8_ * dVar9 + b112._0_8_) / local_4c;
                              b112._8_8_ = local_4c / (b112._8_8_ - dVar13);
                            }
                            else {
                              dVar10 = local_4c / 0.00000000;
                              dVar13 = local_4c * dVar10 + 0.00000000;
                              dVar9 = b112._8_8_ * dVar10 - b112._0_8_;
                              b112._0_8_ = (b112._0_8_ * dVar10 + b112._8_8_) / dVar13;
                              b112._8_8_ = dVar13 / dVar9;
                            }
                          }
                          b11._0_8_ = b11._0_8_ +
                                      ((b112._0_8_ + b112._0_8_) - b112._8_8_ * 0.00000000);
                          b11._8_8_ = b11._8_8_ + b112._8_8_ + b112._8_8_ + b112._0_8_ * 0.00000000;
                          b12_13._0_8_ = b132._0_8_ + (b12_13._0_8_ - b122._0_8_);
                          b12_13._8_8_ = b132._8_8_ + (b12_13._8_8_ - b122._8_8_);
                          b24._0_8_ = b24._0_8_ +
                                      ((b242._0_8_ + b242._0_8_) - b242._8_8_ * 0.00000000);
                          b24._8_8_ = b24._8_8_ + b242._8_8_ + b242._8_8_ + b242._0_8_ * 0.00000000;
                          b21_22._0_8_ = b222._0_8_ + (b21_22._0_8_ - b212._0_8_);
                          b21_22._8_8_ = b222._8_8_ + (b21_22._8_8_ - b212._8_8_);
                          b31_32._0_8_ = b312._0_8_ + b31_32._0_8_;
                          b31_32._8_8_ = b312._8_8_ + b31_32._8_8_;
                          bVar39 = local_b0 != local_ac - 1;
                          local_b0 = local_b0 + 1;
                        } while (bVar39);
                      }
                      local_b0 = local_ac + 1;
                      if ((int)local_b0 <= (int)*param_7) {
                        do {
                          dVar13 = *param_16 +
                                   *(double *)
                                    (param_8 +
                                    (uVar29 * local_bc + local_850 * iVar37 + local_b0 + iVar32) * 8
                                    );
                          dVar9 = dVar13 - dVar1;
                          b313._8_8_ = -dVar9;
                          dVar13 = dVar2 - dVar13;
                          dVar10 = -dVar13;
                          local_8f4 = 0.00000000;
                          local_8ec = 0.00000000;
                          local_8c4 = 0.00000000;
                          local_8bc = 0.00000000;
                          local_8d4 = 0.00000000;
                          local_8cc = 0.00000000;
                          local_94 = 1;
                          do {
                            local_90 = 1;
                            do {
                              local_8c = 1;
                              do {
                                iVar33 = (local_940 * local_a8 + local_934 * local_ac +
                                          local_91c * local_90 + local_928 * local_94 +
                                          local_910 * local_8c + local_948) * 0x10;
                                dVar11 = *(double *)(iVar33 + (int)local_94c);
                                dVar12 = *(double *)(iVar33 + 8 + (int)local_94c);
                                iVar33 = (uVar30 * local_b0 + local_850 * iVar34 + local_ac +
                                          iVar36 * local_bc + iVar35 * local_90 + iVar38) * 0x10;
                                dVar14 = *(double *)(iVar33 + param_10);
                                dVar15 = *(double *)(iVar33 + 8 + param_10);
                                dVar18 = dVar11 * dVar14 - dVar12 * dVar15;
                                dVar14 = dVar14 * dVar12 + dVar15 * dVar11;
                                iVar33 = (uVar30 * local_a8 + local_850 * iVar34 + local_b0 +
                                          iVar36 * local_bc + iVar35 * local_8c + iVar38) * 0x10;
                                dVar11 = *(double *)(iVar33 + param_10);
                                dVar12 = *(double *)(iVar33 + 8 + param_10);
                                local_8f4 = local_8f4 + (dVar18 * dVar11 - dVar14 * dVar12);
                                local_8ec = local_8ec + dVar11 * dVar14 + dVar12 * dVar18;
                                iVar33 = (local_988 * local_ac + local_97c * local_a8 +
                                          local_964 * local_90 + local_970 * local_94 +
                                          local_958 * local_8c + local_990) * 0x10;
                                dVar11 = *(double *)(iVar33 + (int)local_994);
                                dVar12 = *(double *)(iVar33 + 8 + (int)local_994);
                                iVar33 = (uVar30 * local_ac + local_850 * iVar34 + local_b0 +
                                          iVar36 * local_bc + iVar35 * local_8c + iVar38) * 0x10;
                                dVar14 = *(double *)(iVar33 + param_10);
                                dVar15 = *(double *)(iVar33 + 8 + param_10);
                                dVar18 = dVar11 * dVar14 - dVar12 * dVar15;
                                dVar14 = dVar14 * dVar12 + dVar15 * dVar11;
                                iVar33 = (uVar30 * local_b0 + local_850 * iVar34 + local_a8 +
                                          iVar36 * local_bc + iVar35 * local_90 + iVar38) * 0x10;
                                dVar11 = *(double *)(iVar33 + param_10);
                                dVar12 = *(double *)(iVar33 + 8 + param_10);
                                local_8c4 = local_8c4 + (dVar18 * dVar11 - dVar14 * dVar12);
                                local_8bc = local_8bc + dVar11 * dVar14 + dVar12 * dVar18;
                                iVar33 = (local_9d0 * local_ac + local_9c4 * local_a8 +
                                          local_9ac * local_90 + local_9b8 * local_94 +
                                          local_9a0 * local_8c + local_9d8) * 0x10;
                                dVar11 = *(double *)(iVar33 + (int)local_9dc);
                                dVar12 = *(double *)(iVar33 + 8 + (int)local_9dc);
                                iVar33 = (uVar30 * local_ac + local_850 * iVar34 + local_b0 +
                                          iVar36 * local_bc + iVar35 * local_8c + iVar38) * 0x10;
                                dVar14 = *(double *)(iVar33 + param_10);
                                dVar15 = *(double *)(iVar33 + 8 + param_10);
                                dVar18 = dVar11 * dVar14 - dVar12 * dVar15;
                                dVar14 = dVar14 * dVar12 + dVar15 * dVar11;
                                iVar33 = (uVar30 * local_b0 + local_850 * iVar34 + local_a8 +
                                          iVar36 * local_bc + iVar35 * local_90 + iVar38) * 0x10;
                                dVar11 = *(double *)(iVar33 + param_10);
                                dVar12 = *(double *)(iVar33 + 8 + param_10);
                                local_8d4 = local_8d4 + (dVar18 * dVar11 - dVar14 * dVar12);
                                local_8cc = local_8cc + dVar11 * dVar14 + dVar12 * dVar18;
                                bVar39 = local_8c != 3;
                                local_8c = local_8c + 1;
                              } while (bVar39);
                              bVar39 = local_90 != 3;
                              local_90 = local_90 + 1;
                            } while (bVar39);
                            bVar39 = local_94 != 3;
                            local_94 = local_94 + 1;
                          } while (bVar39);
                          dVar11 = 1.00000000 / (b313._8_8_ + dVar13);
                          dVar14 = dVar11 * local_8f4 - local_8ec * 0.00000000;
                          dVar11 = local_8f4 * 0.00000000 + local_8ec * dVar11;
                          dVar12 = dVar14 * (1.00000000 / b313._8_8_) - dVar11 * 0.00000000;
                          dVar11 = (1.00000000 / b313._8_8_) * dVar11 + dVar14 * 0.00000000;
                          dVar15 = (1.00000000 / b313._8_8_) * local_8c4 - local_8bc * 0.00000000;
                          dVar14 = local_8c4 * 0.00000000 + local_8bc * (1.00000000 / b313._8_8_);
                          dVar21 = (1.00000000 / b313._8_8_) * local_8d4 - local_8cc * 0.00000000;
                          dVar18 = local_8d4 * 0.00000000 + local_8cc * (1.00000000 / b313._8_8_);
                          dVar20 = 1.00000000 / (b313._8_8_ + dVar4);
                          dVar19 = dVar21 * dVar20 - dVar18 * 0.00000000;
                          dVar18 = dVar20 * dVar18 + dVar21 * 0.00000000;
                          if (0.00000000 <= ABS(dVar9)) {
                            dVar20 = 0.00000000 / dVar9;
                            b243._8_8_ = dVar9 + dVar20 * 0.00000000;
                            b243._0_8_ = (local_8ec * dVar20 + local_8f4) / b243._8_8_;
                            b243._8_8_ = b243._8_8_ / (local_8ec - local_8f4 * dVar20);
                          }
                          else {
                            dVar20 = dVar9 / 0.00000000;
                            b243._8_8_ = dVar9 * dVar20 + 0.00000000;
                            b243._0_8_ = (local_8f4 * dVar20 + local_8ec) / b243._8_8_;
                            b243._8_8_ = b243._8_8_ / (local_8ec * dVar20 - local_8f4);
                          }
                          if (0.00000000 <= ABS(dVar9)) {
                            dVar21 = 0.00000000 / dVar9;
                            dVar9 = dVar9 + dVar21 * 0.00000000;
                            dVar20 = (local_8cc * dVar21 + local_8d4) / dVar9;
                            dVar9 = dVar9 / (local_8cc - local_8d4 * dVar21);
                          }
                          else {
                            dVar21 = dVar9 / 0.00000000;
                            dVar9 = dVar9 * dVar21 + 0.00000000;
                            dVar20 = (local_8d4 * dVar21 + local_8cc) / dVar9;
                            dVar9 = dVar9 / (local_8cc * dVar21 - local_8d4);
                          }
                          b213._0_8_ = 0.00000000;
                          b213._8_8_ = 0.00000000;
                          if (0.00000000 <= ABS(b313._8_8_)) {
                            dVar21 = 0.00000000 / b313._8_8_;
                            b313._8_8_ = b313._8_8_ + dVar21 * 0.00000000;
                            b313._0_8_ = (local_8bc * dVar21 + local_8c4) / b313._8_8_;
                            b313._8_8_ = b313._8_8_ / (local_8bc - local_8c4 * dVar21);
                          }
                          else {
                            dVar21 = b313._8_8_ / 0.00000000;
                            b313._8_8_ = b313._8_8_ * dVar21 + 0.00000000;
                            b313._0_8_ = (local_8c4 * dVar21 + local_8bc) / b313._8_8_;
                            b313._8_8_ = b313._8_8_ / (local_8bc * dVar21 - local_8c4);
                          }
                          b313._0_8_ = -b313._0_8_;
                          b313._8_8_ = -b313._8_8_;
                          if (ABS(dVar13) <= *param_18) {
                            b113._0_8_ = 0.00000000;
                            b113._8_8_ = 0.00000000;
                            b123._0_8_ = 0.00000000;
                            b123._8_8_ = 0.00000000;
                            b133._0_8_ = 0.00000000;
                            b133._8_8_ = 0.00000000;
                          }
                          else {
                            if (0.00000000 <= ABS(dVar13)) {
                              dVar21 = 0.00000000 / dVar13;
                              b113._8_8_ = dVar13 + dVar21 * 0.00000000;
                              b113._0_8_ = (dVar11 * dVar21 + dVar12) / b113._8_8_;
                              b113._8_8_ = b113._8_8_ / (dVar11 - dVar12 * dVar21);
                            }
                            else {
                              dVar21 = dVar13 / 0.00000000;
                              b113._8_8_ = dVar13 * dVar21 + 0.00000000;
                              b113._0_8_ = (dVar12 * dVar21 + dVar11) / b113._8_8_;
                              b113._8_8_ = b113._8_8_ / (dVar11 * dVar21 - dVar12);
                            }
                            if (0.00000000 <= ABS(dVar13)) {
                              dVar11 = 0.00000000 / dVar13;
                              b123._8_8_ = dVar13 + dVar11 * 0.00000000;
                              b123._0_8_ = (dVar14 * dVar11 + dVar15) / b123._8_8_;
                              b123._8_8_ = b123._8_8_ / (dVar14 - dVar15 * dVar11);
                            }
                            else {
                              dVar11 = dVar13 / 0.00000000;
                              b123._8_8_ = dVar13 * dVar11 + 0.00000000;
                              b123._0_8_ = (dVar15 * dVar11 + dVar14) / b123._8_8_;
                              b123._8_8_ = b123._8_8_ / (dVar14 * dVar11 - dVar15);
                            }
                            if (0.00000000 <= ABS(dVar13)) {
                              dVar11 = 0.00000000 / dVar13;
                              b133._8_8_ = dVar13 + dVar11 * 0.00000000;
                              b133._0_8_ = (dVar18 * dVar11 + dVar19) / b133._8_8_;
                              b133._8_8_ = b133._8_8_ / (dVar18 - dVar19 * dVar11);
                            }
                            else {
                              dVar11 = dVar13 / 0.00000000;
                              b133._8_8_ = dVar13 * dVar11 + 0.00000000;
                              b133._0_8_ = (dVar19 * dVar11 + dVar18) / b133._8_8_;
                              b133._8_8_ = b133._8_8_ / (dVar18 * dVar11 - dVar19);
                            }
                            if (0.00000000 <= ABS(dVar13)) {
                              dVar14 = 0.00000000 / dVar13;
                              dVar11 = dVar13 + dVar14 * 0.00000000;
                              dVar12 = (local_8ec * dVar14 + local_8f4) / dVar11;
                              dVar11 = dVar11 / (local_8ec - local_8f4 * dVar14);
                            }
                            else {
                              dVar14 = dVar13 / 0.00000000;
                              dVar11 = dVar13 * dVar14 + 0.00000000;
                              dVar12 = (local_8f4 * dVar14 + local_8ec) / dVar11;
                              dVar11 = dVar11 / (local_8ec * dVar14 - local_8f4);
                            }
                            b243._0_8_ = b243._0_8_ - dVar12;
                            b243._8_8_ = b243._8_8_ - dVar11;
                            if (0.00000000 <= ABS(dVar13)) {
                              dVar11 = 0.00000000 / dVar13;
                              b213._8_8_ = dVar13 + dVar11 * 0.00000000;
                              b213._0_8_ = (local_8bc * dVar11 + local_8c4) / b213._8_8_;
                              b213._8_8_ = b213._8_8_ / (local_8bc - local_8c4 * dVar11);
                            }
                            else {
                              dVar11 = dVar13 / 0.00000000;
                              b213._8_8_ = dVar13 * dVar11 + 0.00000000;
                              b213._0_8_ = (local_8c4 * dVar11 + local_8bc) / b213._8_8_;
                              b213._8_8_ = b213._8_8_ / (local_8bc * dVar11 - local_8c4);
                            }
                            if (0.00000000 <= ABS(dVar10)) {
                              dVar12 = 0.00000000 / dVar10;
                              dVar10 = dVar10 + dVar12 * 0.00000000;
                              dVar11 = (local_8cc * dVar12 + local_8d4) / dVar10;
                              dVar10 = dVar10 / (local_8cc - local_8d4 * dVar12);
                            }
                            else {
                              dVar12 = dVar10 / 0.00000000;
                              dVar10 = dVar10 * dVar12 + 0.00000000;
                              dVar11 = (local_8d4 * dVar12 + local_8cc) / dVar10;
                              dVar10 = dVar10 / (local_8cc * dVar12 - local_8d4);
                            }
                            b313._0_8_ = b313._0_8_ + dVar11;
                            b313._8_8_ = b313._8_8_ + dVar10;
                          }
                          dVar13 = dVar4 - dVar13;
                          if (ABS(dVar13) <= *param_18) {
                            b123._0_8_ = 0.00000000;
                            b123._8_8_ = 0.00000000;
                          }
                          else {
                            if (0.00000000 <= ABS(dVar13)) {
                              dVar11 = 0.00000000 / dVar13;
                              dVar13 = dVar13 + dVar11 * 0.00000000;
                              dVar10 = b123._0_8_ * dVar11;
                              b123._0_8_ = (b123._8_8_ * dVar11 + b123._0_8_) / dVar13;
                              b123._8_8_ = dVar13 / (b123._8_8_ - dVar10);
                            }
                            else {
                              dVar11 = dVar13 / 0.00000000;
                              dVar13 = dVar13 * dVar11 + 0.00000000;
                              dVar10 = b123._8_8_ * dVar11 - b123._0_8_;
                              b123._0_8_ = (b123._0_8_ * dVar11 + b123._8_8_) / dVar13;
                              b123._8_8_ = dVar13 / dVar10;
                            }
                          }
                          b11._0_8_ = b11._0_8_ +
                                      ((b113._0_8_ + b113._0_8_) - b113._8_8_ * 0.00000000);
                          b11._8_8_ = b11._8_8_ + b113._8_8_ + b113._8_8_ + b113._0_8_ * 0.00000000;
                          b12_13._0_8_ = (b123._0_8_ + b12_13._0_8_) - b133._0_8_;
                          b12_13._8_8_ = (b123._8_8_ + b12_13._8_8_) - b133._8_8_;
                          b21_22._0_8_ = dVar20 + (b21_22._0_8_ - b213._0_8_);
                          b21_22._8_8_ = dVar9 + (b21_22._8_8_ - b213._8_8_);
                          b24._0_8_ = b24._0_8_ +
                                      ((b243._0_8_ + b243._0_8_) - b243._8_8_ * 0.00000000);
                          b24._8_8_ = b24._8_8_ + b243._8_8_ + b243._8_8_ + b243._0_8_ * 0.00000000;
                          b31_32._0_8_ = b313._0_8_ + b31_32._0_8_;
                          b31_32._8_8_ = b313._8_8_ + b31_32._8_8_;
                          bVar39 = local_b0 != *param_7;
                          local_b0 = local_b0 + 1;
                        } while (bVar39);
                      }
                      dVar13 = b11._0_8_ * local_a6c - b11._8_8_ * local_a64;
                      dVar2 = local_a6c * b11._8_8_ + local_a64 * b11._0_8_;
                      dVar9 = dVar13 * (1.00000000 / dVar4) - dVar2 * 0.00000000;
                      dVar2 = (1.00000000 / dVar4) * dVar2 + dVar13 * 0.00000000;
                      dVar13 = dVar9 * dVar17 - dVar2 * 0.00000000;
                      dVar2 = dVar17 * dVar2 + dVar9 * 0.00000000;
                      dVar10 = b12_13._0_8_ * local_a6c - b12_13._8_8_ * local_a64;
                      dVar9 = local_a6c * b12_13._8_8_ + local_a64 * b12_13._0_8_;
                      dVar11 = dVar10 * (1.00000000 / dVar4) - dVar9 * 0.00000000;
                      dVar9 = (1.00000000 / dVar4) * dVar9 + dVar10 * 0.00000000;
                      dVar10 = dVar11 * dVar17 - dVar9 * 0.00000000;
                      dVar9 = dVar17 * dVar9 + dVar11 * 0.00000000;
                      dVar12 = (dVar8 + b24._0_8_) * local_a6c - (dVar7 + b24._8_8_) * local_a64;
                      dVar8 = local_a6c * (dVar7 + b24._8_8_) + local_a64 * (dVar8 + b24._0_8_);
                      dVar7 = (dVar4 * dVar4 * dVar4) / 1.00000000;
                      dVar11 = dVar12 * dVar7 - dVar8 * 0.00000000;
                      dVar7 = dVar12 * 0.00000000 + dVar7 * dVar8;
                      dVar8 = dVar11 * dVar17 - dVar7 * 0.00000000;
                      dVar7 = dVar17 * dVar7 + dVar11 * 0.00000000;
                      dVar12 = b21_22._0_8_ * local_a6c - b21_22._8_8_ * local_a64;
                      dVar14 = local_a6c * b21_22._8_8_ + local_a64 * b21_22._0_8_;
                      dVar4 = (dVar4 * dVar4 * dVar4) / 1.00000000;
                      dVar11 = dVar12 * dVar4 - dVar14 * 0.00000000;
                      dVar4 = dVar12 * 0.00000000 + dVar4 * dVar14;
                      dVar14 = (b31_32._0_8_ - dVar6) * local_a6c -
                               (b31_32._8_8_ - dVar5) * local_a64;
                      dVar6 = local_a6c * (b31_32._8_8_ - dVar5) +
                              local_a64 * (b31_32._0_8_ - dVar6);
                      dVar5 = (dVar3 * dVar3 * dVar3) / 1.00000000;
                      dVar12 = dVar14 * dVar5 - dVar6 * 0.00000000;
                      dVar5 = dVar14 * 0.00000000 + dVar5 * dVar6;
                      dVar6 = dVar12 * dVar17 - dVar5 * 0.00000000;
                      dVar5 = dVar17 * dVar5 + dVar12 * 0.00000000;
                      iVar33 = *param_14;
                      local_a0 = 1;
                      if (0 < iVar33) {
                        do {
                          local_a5c = local_84c + *param_15 * (double)(local_a0 + -1);
                          local_a54 = local_844 + 0.00000000;
                          iVar31 = (local_874 * local_a0 + local_87c) * 0x10;
                          dVar12 = *(double *)(iVar31 + 8 + (int)local_880);
                          dVar14 = *(double *)(param_4 + (local_850 + -1) * 8);
                          dVar15 = (local_a5c * -2.00000000 - local_a54 * -0.00000000) + dVar3;
                          dVar18 = local_a54 * -2.00000000 + local_a5c * -0.00000000 + 0.00000000;
                          if (ABS(dVar18) <= ABS(dVar15)) {
                            dVar19 = dVar18 / dVar15;
                            dVar18 = dVar18 * dVar19 + dVar15;
                            dVar15 = (dVar2 * dVar19 + dVar13) / dVar18;
                            dVar18 = dVar18 / (dVar2 - dVar13 * dVar19);
                          }
                          else {
                            dVar19 = dVar15 / dVar18;
                            dVar18 = dVar15 * dVar19 + dVar18;
                            dVar15 = (dVar13 * dVar19 + dVar2) / dVar18;
                            dVar18 = (dVar2 * dVar19 - dVar13) / dVar18;
                          }
                          iVar27 = (local_874 * local_a0 + local_87c) * 0x10;
                          *(double *)(iVar27 + (int)local_880) =
                               (dVar14 * dVar15 - dVar18 * 0.00000000) +
                               *(double *)(iVar31 + (int)local_880);
                          *(double *)(iVar27 + 8 + (int)local_880) =
                               dVar18 * dVar14 + dVar15 * 0.00000000 + dVar12;
                          iVar31 = (local_85c * local_a0 + local_864) * 0x10;
                          dVar12 = *(double *)(iVar31 + 8 + (int)local_868);
                          dVar14 = *(double *)(param_4 + (local_850 + -1) * 8);
                          dVar15 = dVar3 - local_a5c;
                          dVar18 = 0.00000000 - local_a54;
                          if (ABS(dVar18) <= ABS(dVar15)) {
                            dVar19 = dVar18 / dVar15;
                            dVar15 = dVar18 * dVar19 + dVar15;
                            dVar18 = (dVar9 * dVar19 + dVar10) / dVar15;
                            dVar15 = dVar15 / (dVar9 - dVar10 * dVar19);
                          }
                          else {
                            dVar19 = dVar15 / dVar18;
                            dVar15 = dVar15 * dVar19 + dVar18;
                            dVar18 = (dVar10 * dVar19 + dVar9) / dVar15;
                            dVar15 = (dVar9 * dVar19 - dVar10) / dVar15;
                          }
                          iVar27 = (local_85c * local_a0 + local_864) * 0x10;
                          *(double *)(iVar27 + (int)local_868) =
                               (dVar14 * dVar18 - dVar15 * 0.00000000) +
                               *(double *)(iVar31 + (int)local_868);
                          *(double *)(iVar27 + 8 + (int)local_868) =
                               dVar15 * dVar14 + dVar18 * 0.00000000 + dVar12;
                          iVar31 = (local_8a4 * local_a0 + local_8ac) * 0x10;
                          dVar12 = *(double *)(iVar31 + 8 + (int)local_8b0);
                          dVar14 = *(double *)(param_4 + (local_850 + -1) * 8);
                          dVar15 = (local_a5c * -2.00000000 - local_a54 * -0.00000000) + dVar3;
                          dVar18 = local_a54 * -2.00000000 + local_a5c * -0.00000000 + 0.00000000;
                          if (ABS(dVar18) <= ABS(dVar15)) {
                            dVar19 = dVar18 / dVar15;
                            dVar18 = dVar18 * dVar19 + dVar15;
                            dVar15 = (dVar7 * dVar19 + dVar8) / dVar18;
                            dVar18 = dVar18 / (dVar7 - dVar8 * dVar19);
                          }
                          else {
                            dVar19 = dVar15 / dVar18;
                            dVar18 = dVar15 * dVar19 + dVar18;
                            dVar15 = (dVar8 * dVar19 + dVar7) / dVar18;
                            dVar18 = (dVar7 * dVar19 - dVar8) / dVar18;
                          }
                          iVar27 = (local_8a4 * local_a0 + local_8ac) * 0x10;
                          *(double *)(iVar27 + (int)local_8b0) =
                               (dVar14 * dVar15 - dVar18 * 0.00000000) +
                               *(double *)(iVar31 + (int)local_8b0);
                          *(double *)(iVar27 + 8 + (int)local_8b0) =
                               dVar18 * dVar14 + dVar15 * 0.00000000 + dVar12;
                          iVar31 = (local_88c * local_a0 + local_894) * 0x10;
                          dVar12 = *(double *)(iVar31 + 8 + (int)local_898);
                          dVar14 = *(double *)(param_4 + (local_850 + -1) * 8);
                          dVar18 = (dVar6 * 0.50000000 - dVar5 * 0.00000000) +
                                   (dVar11 * dVar17 - dVar4 * 0.00000000);
                          dVar20 = dVar5 * 0.50000000 + dVar6 * 0.00000000 +
                                   dVar17 * dVar4 + dVar11 * 0.00000000;
                          dVar15 = dVar3 - local_a5c;
                          dVar19 = 0.00000000 - local_a54;
                          if (ABS(dVar19) <= ABS(dVar15)) {
                            dVar21 = dVar19 / dVar15;
                            dVar15 = dVar19 * dVar21 + dVar15;
                            dVar19 = (dVar20 * dVar21 + dVar18) / dVar15;
                            dVar15 = (dVar20 - dVar18 * dVar21) / dVar15;
                          }
                          else {
                            dVar21 = dVar15 / dVar19;
                            dVar15 = dVar15 * dVar21 + dVar19;
                            dVar19 = (dVar18 * dVar21 + dVar20) / dVar15;
                            dVar15 = dVar15 / (dVar20 * dVar21 - dVar18);
                          }
                          iVar27 = (local_88c * local_a0 + local_894) * 0x10;
                          *(double *)(iVar27 + (int)local_898) =
                               (dVar14 * dVar19 - dVar15 * 0.00000000) +
                               *(double *)(iVar31 + (int)local_898);
                          *(double *)(iVar27 + 8 + (int)local_898) =
                               dVar15 * dVar14 + dVar19 * 0.00000000 + dVar12;
                          bVar39 = local_a0 != iVar33;
                          local_a0 = local_a0 + 1;
                        } while (bVar39);
                      }
                    }
                    bVar39 = local_ac != uVar16;
                    local_ac = local_ac + 1;
                  } while (bVar39);
                }
              }
              bVar39 = local_a8 != uVar22;
              local_a8 = local_a8 + 1;
            } while (bVar39);
          }
          bVar39 = local_bc != iVar24;
          local_bc = local_bc + 1;
        } while (bVar39);
      }
      bVar39 = local_850 != iVar23;
      local_850 = local_850 + 1;
    } while (bVar39);
  }
  local_c98 = 0x80716ab;
  local_c94 = 0x25f;
  local_c7c = local_43c;
  local_c80 = 0x100;
  local_c68 = 0x8071c4e;
  local_c64 = 9;
  local_c4c = 0x8071c57;
  local_c50 = 5;
  local_ca0 = 0x4900;
  local_c9c = 0x5c;
  _gfortran_st_open();
  local_c98 = 0x80716ab;
  local_c94 = 0x260;
  local_c7c = local_53c;
  local_c80 = 0x100;
  local_c68 = 0x8071c4e;
  local_c64 = 9;
  local_c4c = 0x8071c57;
  local_c50 = 5;
  local_ca0 = 0x4900;
  local_c9c = 0x5d;
  _gfortran_st_open();
  local_c98 = 0x80716ab;
  local_c94 = 0x261;
  local_c7c = local_63c;
  local_c80 = 0x100;
  local_c68 = 0x8071c4e;
  local_c64 = 9;
  local_c4c = 0x8071c57;
  local_c50 = 5;
  local_ca0 = 0x4900;
  local_c9c = 0x5e;
  _gfortran_st_open();
  local_c98 = 0x80716ab;
  local_c94 = 0x262;
  local_c7c = local_73c;
  local_c80 = 0x100;
  local_c68 = 0x8071c4e;
  local_c64 = 9;
  local_c4c = 0x8071c57;
  local_c50 = 5;
  local_ca0 = 0x4900;
  local_c9c = 0x5f;
  _gfortran_st_open();
  local_c98 = 0x80716ab;
  local_c94 = 0x263;
  local_c7c = local_83c;
  local_c80 = 0x100;
  local_c68 = 0x8071c4e;
  local_c64 = 9;
  local_c4c = 0x8071c57;
  local_c50 = 5;
  local_ca0 = 0x4900;
  local_c9c = 0x60;
  _gfortran_st_open();
  local_c98 = 0x80716ab;
  local_c94 = 0x265;
  local_c70 = 0x8071c5c;
  local_c6c = 7;
  local_ca0 = 0x1000;
  local_c9c = 0x5c;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0,0x8071c63,0x1b,uVar41);
  _gfortran_transfer_integer(&local_ca0,param_11,4,uVar41);
  _gfortran_transfer_integer(&local_ca0,param_12,4,uVar41);
  _gfortran_transfer_integer(&local_ca0,param_13,4,uVar41);
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x266;
  local_c70 = 0x8071c7e;
  local_c6c = 10;
  local_ca0 = 0x1000;
  local_c9c = 0x5c;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0,0x8071c88,0xc,uVar41);
  _gfortran_transfer_real(&local_ca0,param_18,8,uVar41);
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x267;
  local_c70 = 0x8071c94;
  local_c6c = 0xc;
  local_ca0 = 0x1000;
  local_c9c = 0x5c;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0,0x8071ca0,0xd,uVar41);
  _gfortran_transfer_real(&local_ca0,param_17,8,uVar41);
  _gfortran_transfer_character(&local_ca0,0x8071cad,2,uVar41);
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x268;
  local_c70 = 0x8071c94;
  local_c6c = 0xc;
  local_ca0 = 0x1000;
  local_c9c = 0x5c;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0,0x8071caf,0x11,uVar41);
  _gfortran_transfer_real(&local_ca0,param_16,8,uVar41);
  _gfortran_transfer_character(&local_ca0,0x8071cad,2,uVar41);
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x269;
  local_c70 = 0x8071cc0;
  local_c6c = 0x15;
  local_ca0 = 0x1000;
  local_c9c = 0x5c;
  _gfortran_st_write();
  _gfortran_transfer_character();
  local_a9c = ((double)emax - (double)emin) * 27.21138382;
  _gfortran_transfer_real();
  _gfortran_transfer_character();
  local_aa4 = (double)emax - (double)emin;
  _gfortran_transfer_real();
  _gfortran_transfer_character();
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x26a;
  local_c70 = 0x8071ce7;
  local_c6c = 3;
  local_ca0 = 0x1000;
  local_c9c = 0x5c;
  _gfortran_st_write();
  _gfortran_transfer_character();
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x26b;
  local_c70 = 0x8071ce7;
  local_c6c = 3;
  local_ca0 = 0x1000;
  local_c9c = 0x5c;
  _gfortran_st_write();
  _gfortran_transfer_character();
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x26c;
  local_c70 = 0x8071ce7;
  local_c6c = 3;
  local_ca0 = 0x1000;
  local_c9c = 0x5c;
  _gfortran_st_write();
  _gfortran_transfer_character();
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x26e;
  local_c70 = 0x8071c5c;
  local_c6c = 7;
  local_ca0 = 0x1000;
  local_c9c = 0x5d;
  _gfortran_st_write();
  _gfortran_transfer_character();
  _gfortran_transfer_integer();
  _gfortran_transfer_integer();
  _gfortran_transfer_integer();
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x26f;
  local_c70 = 0x8071c7e;
  local_c6c = 10;
  local_ca0 = 0x1000;
  local_c9c = 0x5d;
  _gfortran_st_write();
  _gfortran_transfer_character();
  _gfortran_transfer_real();
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x270;
  local_c70 = 0x8071c94;
  local_c6c = 0xc;
  local_ca0 = 0x1000;
  local_c9c = 0x5d;
  _gfortran_st_write();
  _gfortran_transfer_character();
  _gfortran_transfer_real();
  _gfortran_transfer_character();
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x271;
  local_c70 = 0x8071c94;
  local_c6c = 0xc;
  local_ca0 = 0x1000;
  local_c9c = 0x5d;
  _gfortran_st_write();
  _gfortran_transfer_character();
  _gfortran_transfer_real();
  _gfortran_transfer_character();
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x272;
  local_c70 = 0x8071cc0;
  local_c6c = 0x15;
  local_ca0 = 0x1000;
  local_c9c = 0x5d;
  _gfortran_st_write();
  _gfortran_transfer_character();
  local_aac = ((double)emax - (double)emin) * 27.21138382;
  _gfortran_transfer_real();
  _gfortran_transfer_character();
  local_ab4 = (double)emax - (double)emin;
  _gfortran_transfer_real();
  _gfortran_transfer_character();
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x273;
  local_c70 = 0x8071ce7;
  local_c6c = 3;
  local_ca0 = 0x1000;
  local_c9c = 0x5d;
  _gfortran_st_write();
  _gfortran_transfer_character();
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x274;
  local_c70 = 0x8071ce7;
  local_c6c = 3;
  local_ca0 = 0x1000;
  local_c9c = 0x5d;
  _gfortran_st_write();
  _gfortran_transfer_character();
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x275;
  local_c70 = 0x8071ce7;
  local_c6c = 3;
  local_ca0 = 0x1000;
  local_c9c = 0x5d;
  _gfortran_st_write();
  _gfortran_transfer_character();
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x277;
  local_c70 = 0x8071c5c;
  local_c6c = 7;
  local_ca0 = 0x1000;
  local_c9c = 0x5e;
  _gfortran_st_write();
  _gfortran_transfer_character();
  _gfortran_transfer_integer();
  _gfortran_transfer_integer();
  _gfortran_transfer_integer(&local_ca0,param_13,4,uVar41);
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x278;
  local_c70 = 0x8071c7e;
  local_c6c = 10;
  local_ca0 = 0x1000;
  local_c9c = 0x5e;
  _gfortran_st_write();
  _gfortran_transfer_character();
  _gfortran_transfer_real(&local_ca0,param_18,8,uVar41);
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x279;
  local_c70 = 0x8071c94;
  local_c6c = 0xc;
  local_ca0 = 0x1000;
  local_c9c = 0x5e;
  _gfortran_st_write();
  _gfortran_transfer_character();
  _gfortran_transfer_real(&local_ca0,param_17,8,uVar41);
  _gfortran_transfer_character(&local_ca0,0x8071cad,2,uVar41);
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x27a;
  local_c70 = 0x8071c94;
  local_c6c = 0xc;
  local_ca0 = 0x1000;
  local_c9c = 0x5e;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0,0x8071caf,0x11,uVar41);
  _gfortran_transfer_real(&local_ca0,param_16,8,uVar41);
  _gfortran_transfer_character(&local_ca0,0x8071cad,2,uVar41);
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x27b;
  local_c70 = 0x8071cc0;
  local_c6c = 0x15;
  local_ca0 = 0x1000;
  local_c9c = 0x5e;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0,0x8071cd5,0x10,uVar41);
  local_abc = ((double)emax - (double)emin) * 27.21138382;
  _gfortran_transfer_real(&local_ca0,&local_abc,8,uVar41);
  _gfortran_transfer_character();
  local_ac4 = (double)emax - (double)emin;
  _gfortran_transfer_real(&local_ca0,&local_ac4,8,uVar41);
  _gfortran_transfer_character(&local_ca0,0x8071cad,2,uVar41);
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x27c;
  local_c70 = 0x8071ce7;
  local_c6c = 3;
  local_ca0 = 0x1000;
  local_c9c = 0x5e;
  _gfortran_st_write();
  _gfortran_transfer_character
            (&local_ca0," # Energy(eV) Inter(2w) inter(1w) intra(2w) intra(1w) # in esu",0x35,uVar41
            );
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x27d;
  local_c70 = 0x8071ce7;
  local_c6c = 3;
  local_ca0 = 0x1000;
  local_c9c = 0x5e;
  _gfortran_st_write();
  local_e64 = CONCAT44(uVar41,9);
  uVar41 = 0x8071d95;
  _gfortran_transfer_character();
  uVar43 = (undefined4)((ulonglong)local_e64 >> 0x20);
  _gfortran_st_write_done(&local_ca0,uVar41,local_e64);
  local_c98 = 0x80716ab;
  local_c94 = 0x27e;
  local_c70 = 0x8071ce7;
  local_c6c = 3;
  local_ca0 = 0x1000;
  local_c9c = 0x5e;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0,0x8071d5a,3,uVar43);
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x280;
  local_c70 = 0x8071c5c;
  local_c6c = 7;
  local_ca0 = 0x1000;
  local_c9c = 0x5f;
  _gfortran_st_write();
  _gfortran_transfer_character();
  _gfortran_transfer_integer(&local_ca0,param_11,4,uVar43);
  _gfortran_transfer_integer();
  _gfortran_transfer_integer(&local_ca0,param_13,4,uVar43);
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x281;
  local_c70 = 0x8071c7e;
  local_c6c = 10;
  local_ca0 = 0x1000;
  local_c9c = 0x5f;
  _gfortran_st_write();
  _gfortran_transfer_character();
  _gfortran_transfer_real(&local_ca0,param_18,8,uVar43);
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x282;
  local_c70 = 0x8071c94;
  local_c6c = 0xc;
  local_ca0 = 0x1000;
  local_c9c = 0x5f;
  _gfortran_st_write();
  _gfortran_transfer_character();
  _gfortran_transfer_real();
  _gfortran_transfer_character(&local_ca0,0x8071cad,2,uVar43);
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x283;
  local_c70 = 0x8071c94;
  local_c6c = 0xc;
  local_ca0 = 0x1000;
  local_c9c = 0x5f;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0,0x8071caf,0x11,uVar43);
  _gfortran_transfer_real(&local_ca0,param_16,8,uVar43);
  _gfortran_transfer_character(&local_ca0,0x8071cad,2,uVar43);
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x284;
  local_c70 = 0x8071cc0;
  local_c6c = 0x15;
  local_ca0 = 0x1000;
  local_c9c = 0x5f;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0,0x8071cd5,0x10,uVar43);
  local_acc = ((double)emax - (double)emin) * 27.21138382;
  _gfortran_transfer_real(&local_ca0,&local_acc,8,uVar43);
  _gfortran_transfer_character(&local_ca0,0x8071ce5,2,uVar43);
  local_ad4 = (double)emax - (double)emin;
  _gfortran_transfer_real(&local_ca0,&local_ad4,8,uVar43);
  _gfortran_transfer_character(&local_ca0,0x8071cad,2,uVar43);
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x285;
  local_c70 = 0x8071ce7;
  local_c6c = 3;
  local_ca0 = 0x1000;
  local_c9c = 0x5f;
  _gfortran_st_write();
  _gfortran_transfer_character
            (&local_ca0," # Energy(eV) Inter(2w) inter(1w) intra(2w) intra(1w) # in esu",0x35,uVar43
            );
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x286;
  local_c70 = 0x8071ce7;
  local_c6c = 3;
  local_ca0 = 0x1000;
  local_c9c = 0x5f;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0,0x8071d95,9,uVar43);
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x287;
  local_c70 = 0x8071ce7;
  local_c6c = 3;
  local_ca0 = 0x1000;
  local_c9c = 0x5f;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0,0x8071d5a,3,uVar43);
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x289;
  local_c70 = 0x8071c5c;
  local_c6c = 7;
  local_ca0 = 0x1000;
  local_c9c = 0x60;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0,0x8071c63,0x1b,uVar43);
  _gfortran_transfer_integer(&local_ca0,param_11,4,uVar43);
  _gfortran_transfer_integer(&local_ca0,param_12,4,uVar43);
  _gfortran_transfer_integer(&local_ca0,param_13,4,uVar43);
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x28a;
  local_c70 = 0x8071c7e;
  local_c6c = 10;
  local_ca0 = 0x1000;
  local_c9c = 0x60;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0,0x8071c88,0xc,uVar43);
  _gfortran_transfer_real(&local_ca0,param_18,8,uVar43);
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x28b;
  local_c70 = 0x8071c94;
  local_c6c = 0xc;
  local_ca0 = 0x1000;
  local_c9c = 0x60;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0,0x8071ca0,0xd,uVar43);
  _gfortran_transfer_real(&local_ca0,param_17,8,uVar43);
  _gfortran_transfer_character(&local_ca0,0x8071cad,2,uVar43);
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x28c;
  local_c70 = 0x8071c94;
  local_c6c = 0xc;
  local_ca0 = 0x1000;
  local_c9c = 0x60;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0,0x8071caf,0x11,uVar43);
  _gfortran_transfer_real(&local_ca0,param_16,8,uVar43);
  _gfortran_transfer_character(&local_ca0,0x8071cad,2,uVar43);
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x28d;
  local_c70 = 0x8071cc0;
  local_c6c = 0x15;
  local_ca0 = 0x1000;
  local_c9c = 0x60;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0,0x8071cd5,0x10,uVar43);
  local_adc = ((double)emax - (double)emin) * 27.21138382;
  _gfortran_transfer_real(&local_ca0,&local_adc,8,uVar43);
  _gfortran_transfer_character(&local_ca0,0x8071ce5,2,uVar43);
  local_ae4 = (double)emax - (double)emin;
  _gfortran_transfer_real(&local_ca0,&local_ae4,8,uVar43);
  _gfortran_transfer_character(&local_ca0,0x8071cad,2,uVar43);
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x28e;
  local_c70 = 0x8071ce7;
  local_c6c = 3;
  local_ca0 = 0x1000;
  local_c9c = 0x60;
  _gfortran_st_write();
  _gfortran_transfer_character
            (&local_ca0,
             " # Energy(eV)  |TotChi(-2w,w,w)|   |Tot Chi(-2w,w,w)|(f15.6,2es15.6)(f15.6,4es15.6)",
             0x35,uVar43);
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x28f;
  local_c70 = 0x8071ce7;
  local_c6c = 3;
  local_ca0 = 0x1000;
  local_c9c = 0x60;
  _gfortran_st_write();
  _gfortran_transfer_character
            (&local_ca0," # eV          *10^-7 esu        *10^-12 m/V SI units  # ",0x36,uVar43);
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x290;
  local_c70 = 0x8071ce7;
  local_c6c = 3;
  local_ca0 = 0x1000;
  local_c9c = 0x60;
  _gfortran_st_write();
  local_e64 = CONCAT44(uVar43,3);
  pdVar42 = (double *)0x8071d5a;
  _gfortran_transfer_character(&local_ca0,0x8071d5a,3,uVar43);
  _gfortran_st_write_done();
  uVar41 = (undefined4)((ulonglong)local_e64 >> 0x20);
  local_a44 = 0.00000000;
  local_a4c = 0.00000000;
  iVar37 = *param_14;
  local_a0 = 2;
  if (1 < iVar37) {
    do {
      uVar41 = (undefined4)((ulonglong)local_e64 >> 0x20);
      local_a3c = 0.00000000;
      ene = (real_kind_8_)(*param_15 * (double)(local_a0 + -1) * 27.21138382);
      local_a44 = (*(double *)((local_88c * local_a0 + local_894) * 0x10 + 8 + (int)local_898) +
                  *(double *)((local_8a4 * local_a0 + local_8ac) * 0x10 + 8 + (int)local_8b0) +
                  *(double *)((local_85c * local_a0 + local_864) * 0x10 + 8 + (int)local_868) +
                  *(double *)((local_874 * local_a0 + local_87c) * 0x10 + 8 + (int)local_880)) /
                  0.00000010;
      local_c98 = 0x80716ab;
      local_c94 = 0x29a;
      local_c70 = 0x8071dd5;
      local_c6c = 0xf;
      local_ca0 = 0x1000;
      local_c9c = 0x5c;
      _gfortran_st_write(&local_ca0,pdVar42,local_e64);
      _gfortran_transfer_real(&local_ca0,&ene,8,uVar41);
      _gfortran_transfer_real(&local_ca0,&local_a44,8,uVar41);
      local_aec = local_a44 * 4.00000000 * 3.14159265 * 0.00003333 * 100000.00000000;
      local_e64 = CONCAT44(uVar41,8);
      pdVar42 = &local_aec;
      _gfortran_transfer_real();
      uVar41 = (undefined4)((ulonglong)local_e64 >> 0x20);
      _gfortran_st_write_done(&local_ca0,pdVar42,local_e64);
      local_a44 = 0.00000000;
      local_a4c = (*(double *)((local_88c * local_a0 + local_894) * 0x10 + (int)local_898) +
                  *(double *)((local_8a4 * local_a0 + local_8ac) * 0x10 + (int)local_8b0) +
                  *(double *)((local_85c * local_a0 + local_864) * 0x10 + (int)local_868) +
                  *(double *)((local_874 * local_a0 + local_87c) * 0x10 + (int)local_880)) /
                  0.00000010;
      local_c98 = 0x80716ab;
      local_c94 = 0x29e;
      local_c70 = 0x8071dd5;
      local_c6c = 0xf;
      local_ca0 = 0x1000;
      local_c9c = 0x5d;
      _gfortran_st_write();
      _gfortran_transfer_real();
      _gfortran_transfer_real();
      local_af4 = local_a4c * 4.00000000 * 3.14159265 * 0.00003333 * 100000.00000000;
      local_e64 = CONCAT44(uVar41,8);
      pdVar42 = &local_af4;
      _gfortran_transfer_real();
      uVar41 = (undefined4)((ulonglong)local_e64 >> 0x20);
      _gfortran_st_write_done(&local_ca0,pdVar42,local_e64);
      local_a4c = 0.00000000;
      local_c98 = 0x80716ab;
      local_c94 = 0x2a2;
      local_c70 = 0x8071de4;
      local_c6c = 0xf;
      local_ca0 = 0x1000;
      local_c9c = 0x5e;
      _gfortran_st_write();
      _gfortran_transfer_real();
      local_afc = *(double *)((local_874 * local_a0 + local_87c) * 0x10 + 8 + (int)local_880) /
                  0.00000010;
      _gfortran_transfer_real();
      local_b04 = *(double *)((local_85c * local_a0 + local_864) * 0x10 + 8 + (int)local_868) /
                  0.00000010;
      _gfortran_transfer_real();
      local_b0c = *(double *)((local_8a4 * local_a0 + local_8ac) * 0x10 + 8 + (int)local_8b0) /
                  0.00000010;
      _gfortran_transfer_real();
      local_b14 = *(double *)((local_88c * local_a0 + local_894) * 0x10 + 8 + (int)local_898) /
                  0.00000010;
      local_e64 = CONCAT44(uVar41,8);
      pdVar42 = &local_b14;
      _gfortran_transfer_real();
      uVar41 = (undefined4)((ulonglong)local_e64 >> 0x20);
      _gfortran_st_write_done(&local_ca0,pdVar42,local_e64);
      local_c98 = 0x80716ab;
      local_c94 = 0x2a5;
      local_c70 = 0x8071de4;
      local_c6c = 0xf;
      local_ca0 = 0x1000;
      local_c9c = 0x5f;
      _gfortran_st_write();
      _gfortran_transfer_real();
      local_b1c = *(double *)((local_874 * local_a0 + local_87c) * 0x10 + (int)local_880) /
                  0.00000010;
      _gfortran_transfer_real();
      local_b24 = *(double *)((local_85c * local_a0 + local_864) * 0x10 + (int)local_868) /
                  0.00000010;
      _gfortran_transfer_real();
      local_b2c = *(double *)((local_8a4 * local_a0 + local_8ac) * 0x10 + (int)local_8b0) /
                  0.00000010;
      _gfortran_transfer_real();
      local_b34 = *(double *)((local_88c * local_a0 + local_894) * 0x10 + (int)local_898) /
                  0.00000010;
      local_e64 = CONCAT44(uVar41,8);
      pdVar42 = &local_b34;
      _gfortran_transfer_real();
      _gfortran_st_write_done(&local_ca0,pdVar42,local_e64);
      iVar32 = (local_874 * local_a0 + local_87c) * 0x10;
      iVar34 = (local_85c * local_a0 + local_864) * 0x10;
      iVar35 = (local_8a4 * local_a0 + local_8ac) * 0x10;
      iVar36 = (local_88c * local_a0 + local_894) * 0x10;
      uVar41 = (undefined4)
               ((ulonglong)
                (*(double *)(iVar36 + 8 + (int)local_898) +
                *(double *)(iVar35 + 8 + (int)local_8b0) +
                *(double *)(iVar34 + 8 + (int)local_868) + *(double *)(iVar32 + 8 + (int)local_880))
               >> 0x20);
      local_a3c = cabs(*(double *)(iVar36 + (int)local_898) +
                       *(double *)(iVar35 + (int)local_8b0) +
                       *(double *)(iVar34 + (int)local_868) + *(double *)(iVar32 + (int)local_880));
      local_a3c = local_a3c / 0.00000010;
      local_c98 = 0x80716ab;
      local_c94 = 0x2a8;
      local_c70 = 0x8071dd5;
      local_c6c = 0xf;
      local_ca0 = 0x1000;
      local_c9c = 0x60;
      _gfortran_st_write();
      _gfortran_transfer_real();
      _gfortran_transfer_real();
      local_b3c = local_a3c * 4.00000000 * 3.14159265 * 0.00003333 * 100000.00000000;
      local_e64 = CONCAT44(uVar41,8);
      pdVar42 = &local_b3c;
      _gfortran_transfer_real();
      _gfortran_st_write_done();
      uVar41 = (undefined4)((ulonglong)local_e64 >> 0x20);
      bVar39 = local_a0 != iVar37;
      local_a0 = local_a0 + 1;
    } while (bVar39);
  }
  local_a3c = 0.00000000;
  if (local_94c == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 684 of file nlinopt.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071a9b,uVar41);
  }
  free(local_94c);
  local_94c = (void *)0x0;
  if (local_994 == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 684 of file nlinopt.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071af4,uVar41);
  }
  free(local_994);
  local_994 = (void *)0x0;
  if (local_9dc == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 684 of file nlinopt.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071b18,uVar41);
  }
  free(local_9dc);
  local_9dc = (void *)0x0;
  if (local_a30 == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 684 of file nlinopt.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071c04,uVar41);
  }
  free(local_a30);
  local_a30 = (void *)0x0;
  if (local_a00 == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 684 of file nlinopt.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071c28,uVar41);
  }
  free(local_a00);
  local_a00 = (void *)0x0;
  if (local_880 == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 685 of file nlinopt.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               "inter2w",uVar41);
  }
  free(local_880);
  local_880 = (void *)0x0;
  if (local_868 == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 685 of file nlinopt.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               "inter1w",uVar41);
  }
  free(local_868);
  local_868 = (void *)0x0;
  if (local_8b0 == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 685 of file nlinopt.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               "intra2w",uVar41);
  }
  free(local_8b0);
  local_8b0 = (void *)0x0;
  if (local_898 == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 685 of file nlinopt.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               "intra1w",uVar41);
  }
  free(local_898);
  local_898 = (void *)0x0;
  if (__src == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 685 of file nlinopt.F90","Attempt to DEALLOCATE unallocated \'%s\'","delta",
               uVar41);
  }
  free(__src);
  local_c98 = 0x80716ab;
  local_c94 = 0x2ae;
  local_ca0 = 0;
  local_c9c = 0x5c;
  _gfortran_st_close();
  local_c98 = 0x80716ab;
  local_c94 = 0x2af;
  local_ca0 = 0;
  local_c9c = 0x5d;
  _gfortran_st_close();
  local_c98 = 0x80716ab;
  local_c94 = 0x2b0;
  local_ca0 = 0;
  local_c9c = 0x5e;
  _gfortran_st_close();
  local_c98 = 0x80716ab;
  local_c94 = 0x2b1;
  local_ca0 = 0;
  local_c9c = 0x5f;
  _gfortran_st_close();
  local_c98 = 0x80716ab;
  local_c94 = 0x2b2;
  local_ca0 = 0;
  local_c9c = 0x60;
  _gfortran_st_close();
  local_c98 = 0x80716ab;
  local_c94 = 0x2b4;
  local_ca0 = 0x80;
  local_c9c = 6;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0,&DAT_08071e5c,1,uVar41);
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x2b5;
  local_ca0 = 0x80;
  local_c9c = 6;
  _gfortran_st_write();
  _gfortran_transfer_character
            (&local_ca0,
                          
             "information about calculation just performed:calculated the component:of second order susceptibilitytolerence:"
             ,0x2d,uVar41);
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x2b6;
  local_ca0 = 0x80;
  local_c9c = 6;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0,&DAT_08071e5c,1,uVar41);
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x2b7;
  local_ca0 = 0x80;
  local_c9c = 6;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0,0x8071e8d,0x19,uVar41);
  _gfortran_transfer_integer(&local_ca0,param_11,4,uVar41);
  _gfortran_transfer_integer(&local_ca0,param_12,4,uVar41);
  _gfortran_transfer_integer(&local_ca0,param_13,4,uVar41);
  _gfortran_transfer_character(&local_ca0,0x8071ea6,0x1e,uVar41);
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x2b8;
  local_ca0 = 0x80;
  local_c9c = 6;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0,0x8071ec4,10,uVar41);
  _gfortran_transfer_real(&local_ca0,param_18,8,uVar41);
  _gfortran_st_write_done();
  if (0.00800000 < *param_18) {
    local_c98 = 0x80716ab;
    local_c94 = 0x2b9;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"ATTENTION: tolerence is too highbroadening:Hartree",0x20,uVar41);
    _gfortran_st_write_done();
  }
  local_c98 = 0x80716ab;
  local_c94 = 0x2ba;
  local_ca0 = 0x80;
  local_c9c = 6;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0,0x8071ef0,0xb,uVar41);
  _gfortran_transfer_real(&local_ca0,param_17,8,uVar41);
  _gfortran_transfer_character(&local_ca0,0x8071efb,7,uVar41);
  _gfortran_st_write_done();
  if (*param_17 <= 0.00900000) {
    if (0.01500000 < *param_17) {
      local_c98 = 0x80716ab;
      local_c94 = 0x2c0;
      local_ca0 = 0x80;
      local_c9c = 6;
      _gfortran_st_write();
      _gfortran_transfer_character(&local_ca0,&DAT_08071e5c,1,uVar41);
      _gfortran_st_write_done();
      local_c98 = 0x80716ab;
      local_c94 = 0x2c1;
      local_ca0 = 0x80;
      local_c9c = 6;
      _gfortran_st_write();
      _gfortran_transfer_character
                (&local_ca0,"ATTENTION: broadening is too highscissors shift:energy window:",0x21,
                 uVar41);
      _gfortran_st_write_done();
      local_c98 = 0x80716ab;
      local_c94 = 0x2c2;
      local_ca0 = 0x80;
      local_c9c = 6;
      _gfortran_st_write();
      _gfortran_transfer_character(&local_ca0,&DAT_08071e5c,1,uVar41);
      _gfortran_st_write_done();
    }
  }
  else {
    local_c98 = 0x80716ab;
    local_c94 = 700;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character(&local_ca0,&DAT_08071e5c,1,uVar41);
    _gfortran_st_write_done();
    local_c98 = 0x80716ab;
    local_c94 = 0x2bd;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character(&local_ca0,"ATTENTION: broadening is quite high",0x23,uVar41);
    _gfortran_st_write_done();
    local_c98 = 0x80716ab;
    local_c94 = 0x2be;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character(&local_ca0,&DAT_08071e5c,1,uVar41);
    _gfortran_st_write_done();
  }
  local_c98 = 0x80716ab;
  local_c94 = 0x2c4;
  local_ca0 = 0x80;
  local_c9c = 6;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0,0x8071f49,0xf,uVar41);
  _gfortran_transfer_real(&local_ca0,param_16,8,uVar41);
  _gfortran_transfer_character(&local_ca0,0x8071efb,7,uVar41);
  _gfortran_st_write_done();
  local_c98 = 0x80716ab;
  local_c94 = 0x2c5;
  local_ca0 = 0x80;
  local_c9c = 6;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0,0x8071f58,0xe,uVar41);
  local_b44 = ((double)emax - (double)emin) * 27.21138382;
  _gfortran_transfer_real(&local_ca0,&local_b44,8,uVar41);
  _gfortran_transfer_character(&local_ca0,0x8071ce5,2,uVar41);
  local_b4c = (double)emax - (double)emin;
  _gfortran_transfer_real(&local_ca0,&local_b4c,8,uVar41);
  _gfortran_transfer_character(&local_ca0,0x8071efb,7,uVar41);
  _gfortran_st_write_done();
  if (local_a30 != (void *)0x0) {
    free(local_a30);
  }
  local_a30 = (void *)0x0;
  if (local_a00 != (void *)0x0) {
    free(local_a00);
  }
  local_a00 = (void *)0x0;
  if (local_9dc != (void *)0x0) {
    free(local_9dc);
  }
  local_9dc = (void *)0x0;
  if (local_994 != (void *)0x0) {
    free(local_994);
  }
  local_994 = (void *)0x0;
  if (local_94c != (void *)0x0) {
    free(local_94c);
  }
  local_94c = (void *)0x0;
  if (local_8b0 != (void *)0x0) {
    free(local_8b0);
  }
  local_8b0 = (void *)0x0;
  if (local_898 != (void *)0x0) {
    free(local_898);
  }
  local_898 = (void *)0x0;
  if (local_880 != (void *)0x0) {
    free(local_880);
  }
  local_880 = (void *)0x0;
  if (local_868 != (void *)0x0) {
    free(local_868);
  }
  return;
}



void hdr_clean(hdr_type *hdr)

{
  int iVar1;
  bool bVar2;
  integer_kind_4_ iatom;
  
  if (hdr->ngfft[3] == 0) {
    _gfortran_runtime_error_at
              ("At line 59 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free((void *)hdr->ngfft[3]);
  hdr->ngfft[3] = 0;
  if (*(int *)&hdr->field_0x234 == 0) {
    _gfortran_runtime_error_at
              ("At line 60 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)&hdr->field_0x234);
  *(undefined4 *)&hdr->field_0x234 = 0;
  if (*(int *)&hdr->field_0x64 == 0) {
    _gfortran_runtime_error_at
              ("At line 61 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)&hdr->field_0x64);
  *(undefined4 *)&hdr->field_0x64 = 0;
  if (*(int *)&hdr->field_0x7c == 0) {
    _gfortran_runtime_error_at
              ("At line 62 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)&hdr->field_0x7c);
  *(undefined4 *)&hdr->field_0x7c = 0;
  if (*(int *)&hdr->field_0x94 == 0) {
    _gfortran_runtime_error_at
              ("At line 63 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)&hdr->field_0x94);
  *(undefined4 *)&hdr->field_0x94 = 0;
  if (*(int *)&hdr->field_0x258 == 0) {
    _gfortran_runtime_error_at
              ("At line 64 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)&hdr->field_0x258);
  *(undefined4 *)&hdr->field_0x258 = 0;
  if (*(int *)&hdr->field_0xac == 0) {
    _gfortran_runtime_error_at
              ("At line 65 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)&hdr->field_0xac);
  *(undefined4 *)&hdr->field_0xac = 0;
  if (*(int *)&hdr->field_0xc4 == 0) {
    _gfortran_runtime_error_at
              ("At line 66 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)&hdr->field_0xc4);
  *(undefined4 *)&hdr->field_0xc4 = 0;
  if (*(int *)&hdr->field_0xdc == 0) {
    _gfortran_runtime_error_at
              ("At line 67 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)&hdr->field_0xdc);
  *(undefined4 *)&hdr->field_0xdc = 0;
  if (*(int *)&hdr->field_0xf4 == 0) {
    _gfortran_runtime_error_at
              ("At line 68 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)&hdr->field_0xf4);
  *(undefined4 *)&hdr->field_0xf4 = 0;
  if (*(int *)&hdr->field_0x10c == 0) {
    _gfortran_runtime_error_at
              ("At line 69 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)&hdr->field_0x10c);
  *(undefined4 *)&hdr->field_0x10c = 0;
  if (*(int *)&hdr->field_0x124 == 0) {
    _gfortran_runtime_error_at
              ("At line 70 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)&hdr->field_0x124);
  *(undefined4 *)&hdr->field_0x124 = 0;
  if (*(int *)&hdr->field_0x13c == 0) {
    _gfortran_runtime_error_at
              ("At line 71 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)&hdr->field_0x13c);
  *(undefined4 *)&hdr->field_0x13c = 0;
  if (*(int *)&hdr->field_0x320 == 0) {
    _gfortran_runtime_error_at
              ("At line 72 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)&hdr->field_0x320);
  *(undefined4 *)&hdr->field_0x320 = 0;
  if (*(int *)&hdr->field_0x270 == 0) {
    _gfortran_runtime_error_at
              ("At line 73 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)&hdr->field_0x270);
  *(undefined4 *)&hdr->field_0x270 = 0;
  if (*(int *)&hdr->field_0x16c == 0) {
    _gfortran_runtime_error_at
              ("At line 74 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)&hdr->field_0x16c);
  *(undefined4 *)&hdr->field_0x16c = 0;
  if (*(int *)&hdr->field_0x294 == 0) {
    _gfortran_runtime_error_at
              ("At line 75 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)&hdr->field_0x294);
  *(undefined4 *)&hdr->field_0x294 = 0;
  if (*(int *)&hdr->field_0x2ac == 0) {
    _gfortran_runtime_error_at
              ("At line 76 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)&hdr->field_0x2ac);
  *(undefined4 *)&hdr->field_0x2ac = 0;
  if (*(int *)&hdr->field_0x2d0 == 0) {
    _gfortran_runtime_error_at
              ("At line 77 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)&hdr->field_0x2d0);
  *(undefined4 *)&hdr->field_0x2d0 = 0;
  if (*(int *)&hdr->field_0x2e8 == 0) {
    _gfortran_runtime_error_at
              ("At line 78 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)&hdr->field_0x2e8);
  *(undefined4 *)&hdr->field_0x2e8 = 0;
  if (*(int *)&hdr->field_0x300 == 0) {
    _gfortran_runtime_error_at
              ("At line 79 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)&hdr->field_0x300);
  *(undefined4 *)&hdr->field_0x300 = 0;
  if (hdr->usepaw == 1) {
    iVar1 = hdr->natom;
    iatom = 1;
    if (0 < iVar1) {
      do {
        if (*(int *)((*(int *)&hdr->field_0x344 * iatom + *(int *)&hdr->field_0x33c) * 0x108 +
                     *(int *)&hdr->field_0x338 + 0x18) == 0) {
          _gfortran_runtime_error_at
                    ("At line 82 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
                     &DAT_08071fe0);
        }
        free(*(void **)((*(int *)&hdr->field_0x344 * iatom + *(int *)&hdr->field_0x33c) * 0x108 +
                        *(int *)&hdr->field_0x338 + 0x18));
        *(undefined4 *)
         ((*(int *)&hdr->field_0x344 * iatom + *(int *)&hdr->field_0x33c) * 0x108 +
          *(int *)&hdr->field_0x338 + 0x18) = 0;
        if (*(int *)((*(int *)&hdr->field_0x344 * iatom + *(int *)&hdr->field_0x33c) * 0x108 +
                     *(int *)&hdr->field_0x338 + 0xc0) == 0) {
          _gfortran_runtime_error_at
                    ("At line 83 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
                     &DAT_08071fe0);
        }
        free(*(void **)((*(int *)&hdr->field_0x344 * iatom + *(int *)&hdr->field_0x33c) * 0x108 +
                        *(int *)&hdr->field_0x338 + 0xc0));
        *(undefined4 *)
         ((*(int *)&hdr->field_0x344 * iatom + *(int *)&hdr->field_0x33c) * 0x108 +
          *(int *)&hdr->field_0x338 + 0xc0) = 0;
        if (*(int *)((*(int *)&hdr->field_0x344 * iatom + *(int *)&hdr->field_0x33c) * 0x108 +
                     *(int *)&hdr->field_0x338 + 0x48) == 0) {
          _gfortran_runtime_error_at
                    ("At line 84 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
                     &DAT_08071fe0);
        }
        free(*(void **)((*(int *)&hdr->field_0x344 * iatom + *(int *)&hdr->field_0x33c) * 0x108 +
                        *(int *)&hdr->field_0x338 + 0x48));
        *(undefined4 *)
         ((*(int *)&hdr->field_0x344 * iatom + *(int *)&hdr->field_0x33c) * 0x108 +
          *(int *)&hdr->field_0x338 + 0x48) = 0;
        bVar2 = iatom != iVar1;
        iatom = iatom + 1;
      } while (bVar2);
    }
    if (*(int *)&hdr->field_0x338 == 0) {
      _gfortran_runtime_error_at
                ("At line 86 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
                 &DAT_08071fe0);
    }
    free(*(void **)&hdr->field_0x338);
    *(undefined4 *)&hdr->field_0x338 = 0;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0805b711)
// WARNING: Removing unreachable block (ram,0x0805b688)
// WARNING: Removing unreachable block (ram,0x0805b69a)
// WARNING: Removing unreachable block (ram,0x0805b89c)

void wffreadeigk(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,int *param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9)

{
  void *pvVar1;
  size_t __size;
  int iVar2;
  undefined4 local_7c;
  undefined4 local_78;
  void *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  undefined local_5c [4];
  undefined local_58 [4];
  undefined local_54 [4];
  undefined4 local_50;
  void *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined local_24 [20];
  int local_10;
  
  local_10 = _gfortran_pow_i4_i4(*param_6 * 2,*param_2);
  local_10 = local_10 * *param_6;
  local_28 = 0;
  local_2c = 0;
  local_30 = 1;
  local_34 = 3;
  local_38 = 3;
  local_3c = 1;
  local_40 = 1;
  local_44 = 0x10a;
  local_4c = (void *)0x0;
  local_50 = 1;
  local_74 = (void *)0x0;
  local_78 = 3;
  local_7c = 0;
  pvVar1 = malloc(1);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)_gfortran_os_error("Out of memory");
  }
  local_60 = *param_6;
  iVar2 = 0;
  if (-1 < *param_6) {
    iVar2 = *param_6;
  }
  if (*param_6 < 1) {
    __size = 0;
  }
  else {
    __size = iVar2 * 8;
  }
  local_48 = 0xfffffffc;
  local_64 = 1;
  local_68 = 1;
  local_6c = 0x219;
  local_4c = pvVar1;
  if (local_74 == (void *)0x0) {
    if ((int)__size < 0) {
      __size = _gfortran_runtime_error
                         ("Attempt to allocate negative amount of memory. Possible integer overflow"
                         );
    }
    if ((int)__size < 1) {
      __size = 1;
    }
    pvVar1 = malloc(__size);
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)_gfortran_os_error("Out of memory");
    }
    local_70 = 0xffffffff;
    local_74 = pvVar1;
    rwwf(local_24,param_1,param_2,param_3,&local_28,param_4,param_5,local_4c,param_6,&local_50,
         param_7,local_54,local_58,local_5c,pvVar1,&local_78,&local_7c,param_8,param_9);
    if (local_4c != (void *)0x0) goto LAB_0805b84e;
  }
  else {
    _gfortran_runtime_error_at
              ("At line 88 of file WffReadEigK.F90",
               "Attempting to allocate already allocated array \'%s\'","occ_dum");
  }
  _gfortran_runtime_error_at
            ("At line 97 of file WffReadEigK.F90","Attempt to DEALLOCATE unallocated \'%s\'",
             "kg_dum");
LAB_0805b84e:
  free(local_4c);
  local_4c = (void *)0x0;
  if (local_74 == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 97 of file WffReadEigK.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               "occ_dum");
  }
  free(local_74);
  local_74 = (void *)0x0;
  if (local_4c != (void *)0x0) {
    free(local_4c);
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps

void getwtk(real_kind_8_ (*kpt) [4] [1],integer_kind_4_ *nkpt,integer_kind_4_ *nsym,
           integer_kind_4_ (*symrel) [4] [4] [1],real_kind_8_ (*wtk) [1])

{
  int iVar1;
  double dVar2;
  int iVar3;
  size_t __size;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  real_kind_8_ (*__ptr_03) [4] [1];
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  real_kind_8_ *local_2d8;
  void *local_230;
  undefined4 local_22c;
  char *local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  real_kind_8_ (*local_dc) [4] [1];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  double local_c4;
  real_kind_8_ local_bc;
  real_kind_8_ local_b4;
  real_kind_8_ tmp;
  double local_a4 [3];
  real_kind_8_ shift;
  integer_kind_4_ ikpt;
  real_kind_8_ dkpt [4];
  integer_kind_4_ isym;
  integer_kind_4_ itim;
  integer_kind_4_ ubound_0;
  integer_kind_4_ ubound_2;
  real_kind_8_ (*kptstar) [4] [1];
  integer_kind_4_ new;
  integer_kind_4_ nkpt_tot;
  integer_kind_4_ ubound_4;
  integer_kind_4_ (*nstar) [1];
  integer_kind_4_ ubound_6;
  real_kind_8_ (*rsymrel) [4] [4] [1];
  integer_kind_4_ ubound_8;
  real_kind_8_ timsign;
  integer_kind_4_ ubound_10;
  
  iVar3 = *nsym * *nkpt * 2;
  iVar1 = iVar3 * 3;
  iVar5 = 0;
  if (-1 < iVar1) {
    iVar5 = iVar1;
  }
  __size = iVar5 * 8;
  if ((int)__size < 0) {
    __size = _gfortran_runtime_error("Attempt to allocate a negative amount of memory.");
  }
  if ((int)__size < 1) {
    __size = 1;
  }
  __ptr = malloc(__size);
  if (__ptr == (void *)0x0) {
    __ptr = (void *)_gfortran_os_error("Memory allocation failed");
  }
  iVar1 = *nkpt;
  iVar5 = 0;
  if (-1 < iVar1) {
    iVar5 = iVar1;
  }
  __size = iVar5 * 4;
  if ((int)__size < 0) {
    __size = _gfortran_runtime_error("Attempt to allocate a negative amount of memory.");
  }
  if ((int)__size < 1) {
    __size = 1;
  }
  __ptr_00 = malloc(__size);
  if (__ptr_00 == (void *)0x0) {
    __ptr_00 = (void *)_gfortran_os_error("Memory allocation failed");
  }
  iVar5 = 0;
  if (-1 < *nsym * 9) {
    iVar5 = *nsym * 9;
  }
  __size = iVar5 * 8;
  if ((int)__size < 0) {
    __size = _gfortran_runtime_error("Attempt to allocate a negative amount of memory.");
  }
  if ((int)__size < 1) {
    __size = 1;
  }
  __ptr_01 = malloc(__size);
  if (__ptr_01 == (void *)0x0) {
    __ptr_01 = (void *)_gfortran_os_error("Memory allocation failed");
  }
  iVar5 = *nsym;
  isym = 1;
  if (0 < iVar5) {
    do {
      iVar6 = 1;
      while (iVar6 < 4) {
        iVar7 = 1;
        while (iVar7 < 4) {
          *(double *)((int)__ptr_01 + (iVar7 + isym * 9 + -0xd + iVar6 * 3) * 8) =
               (double)(*symrel)[iVar7 + isym * 9 + -0xd + iVar6 * 3];
          iVar7 = iVar7 + 1;
        }
        iVar6 = iVar6 + 1;
      }
      bVar8 = isym != iVar5;
      isym = isym + 1;
    } while (bVar8);
  }
  iVar5 = *nkpt;
  ikpt = 1;
  if (0 < iVar5) {
    do {
      local_228 = "getwtk.F90";
      local_224 = 0x4a;
      local_230 = (void *)0x80;
      local_22c = 6;
      _gfortran_st_write(&local_230);
      _gfortran_transfer_character(&local_230," getwtk : ikpt = ",0x11);
      local_2d8 = (real_kind_8_ *)&ikpt;
      _gfortran_transfer_integer(&local_230,local_2d8,4);
      _gfortran_st_write_done(&local_230);
      *(undefined4 *)((int)__ptr_00 + (ikpt + -1) * 4) = 0;
      iVar6 = 1;
      while (iVar6 <= iVar3) {
        iVar7 = 1;
        while (iVar7 < 4) {
          *(undefined8 *)((int)__ptr + (iVar7 + iVar6 * 3 + -4) * 8) = 0;
          iVar7 = iVar7 + 1;
        }
        iVar6 = iVar6 + 1;
      }
      iVar6 = *nsym;
      isym = 1;
      if (0 < iVar6) {
        do {
          local_228 = (char *)0x21a;
          local_220 = 1;
          local_21c = 3;
          local_224 = 1;
          local_214 = 1;
          local_210 = 3;
          local_218 = 3;
          local_230 = (void *)((isym + -1) * 0x48 + (int)__ptr_01);
          local_22c = 0xfffffff3;
          __ptr_02 = (void *)_gfortran_internal_pack(&local_230,local_2d8);
          local_d4 = 0x219;
          local_cc = 1;
          local_c8 = 3;
          local_d0 = 1;
          local_dc = (real_kind_8_ (*) [4] [1])(*kpt + (ikpt + -1) * 3);
          local_d8 = 0xfffffffc;
          __ptr_03 = (real_kind_8_ (*) [4] [1])_gfortran_internal_pack(&local_dc);
          dgemv_(&DAT_08072528,&DAT_08072518,&DAT_08072518,&DAT_08072520,__ptr_02,&DAT_08072518,
                 __ptr_03,&DAT_08072508,&DAT_08072510,local_a4,&DAT_08072508,1);
          if ((local_230 != __ptr_02) &&
             (_gfortran_internal_unpack(&local_230), __ptr_02 != (void *)0x0)) {
            free(__ptr_02);
          }
          if ((local_dc != __ptr_03) &&
             (_gfortran_internal_unpack(&local_dc), __ptr_03 != (real_kind_8_ (*) [4] [1])0x0)) {
            free(__ptr_03);
          }
          itim = 0;
          do {
            iVar7 = 1;
            while (iVar7 < 4) {
              (&local_c4)[iVar7 + -1] =
                   local_a4[iVar7 + -1] * ((double)itim * -2.00000000 + 1.00000000);
              iVar7 = iVar7 + 1;
            }
            canon9((real_kind_8_ *)&local_c4,&tmp,&shift);
            local_c4 = tmp;
            canon9(&local_bc,&tmp,&shift);
            local_bc = tmp;
            local_2d8 = &tmp;
            canon9(&local_b4,local_2d8,&shift);
            local_b4 = tmp;
            bVar8 = true;
            iVar7 = *(int *)((int)__ptr_00 + (ikpt + -1) * 4);
            dkpt[3]._4_4_ = 1;
            if (0 < iVar7) {
              do {
                iVar4 = 1;
                while (iVar4 < 4) {
                  *(double *)(dkpt + iVar4 + -1) =
                       ABS((&local_c4)[iVar4 + -1] -
                           *(double *)((int)__ptr + (iVar4 + dkpt[3]._4_4_ * 3 + -4) * 8));
                  iVar4 = iVar4 + 1;
                }
                dVar2 = 0.00000000;
                iVar4 = 1;
                while (iVar4 < 4) {
                  dVar2 = (double)dkpt[iVar4 + -1] + dVar2;
                  iVar4 = iVar4 + 1;
                }
                if (dVar2 < 0.00000100) {
                  bVar8 = false;
                  break;
                }
                bVar9 = dkpt[3]._4_4_ != iVar7;
                dkpt[3]._4_4_ = dkpt[3]._4_4_ + 1;
              } while (bVar9);
            }
            if (bVar8) {
              *(int *)((int)__ptr_00 + (ikpt + -1) * 4) =
                   *(int *)((int)__ptr_00 + (ikpt + -1) * 4) + 1;
              iVar7 = *(int *)((int)__ptr_00 + (ikpt + -1) * 4);
              iVar4 = 1;
              while (iVar4 < 4) {
                *(double *)((int)__ptr + (iVar4 + iVar7 * 3 + -4) * 8) = (&local_c4)[iVar4 + -1];
                iVar4 = iVar4 + 1;
              }
            }
            bVar8 = itim != 1;
            itim = itim + 1;
          } while (bVar8);
          local_b4 = tmp;
          bVar8 = isym != iVar6;
          isym = isym + 1;
        } while (bVar8);
      }
      bVar8 = ikpt != iVar5;
      ikpt = ikpt + 1;
    } while (bVar8);
  }
  iVar3 = 0;
  iVar5 = 1;
  while (iVar5 <= iVar1) {
    iVar3 = iVar3 + *(int *)((int)__ptr_00 + (iVar5 + -1) * 4);
    iVar5 = iVar5 + 1;
  }
  iVar1 = *nkpt;
  ikpt = 1;
  if (0 < iVar1) {
    do {
      *(double *)(wtk + ikpt + -1) =
           (double)*(int *)((int)__ptr_00 + (ikpt + -1) * 4) / (double)iVar3;
      bVar8 = ikpt != iVar1;
      ikpt = ikpt + 1;
    } while (bVar8);
  }
  if (__ptr_01 != (void *)0x0) {
    free(__ptr_01);
  }
  if (__ptr_00 != (void *)0x0) {
    free(__ptr_00);
  }
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  return;
}



void pmat2cart(real_kind_8_ (*eigen11) [3] [1] [1] [1] [1],
              real_kind_8_ (*eigen12) [3] [1] [1] [1] [1],
              real_kind_8_ (*eigen13) [3] [1] [1] [1] [1],integer_kind_4_ *mband,
              integer_kind_4_ *nkpt,integer_kind_4_ *nsppol,
              complex_kind_8_ (*pmat) [1] [1] [1] [4] [1],real_kind_8_ (*rprimd) [4] [4])

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
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
  bool bVar32;
  double adStack188 [6];
  double adStack140 [3];
  integer_kind_4_ ubound_0;
  integer_kind_4_ ubound_1;
  integer_kind_4_ ubound_3;
  integer_kind_4_ ubound_5;
  integer_kind_4_ ubound_9;
  integer_kind_4_ ubound_10;
  integer_kind_4_ ubound_12;
  integer_kind_4_ ubound_14;
  integer_kind_4_ ubound_18;
  integer_kind_4_ ubound_19;
  integer_kind_4_ ubound_21;
  integer_kind_4_ ubound_23;
  integer_kind_4_ iband1;
  integer_kind_4_ iband2;
  integer_kind_4_ ii;
  integer_kind_4_ ikpt;
  integer_kind_4_ isppol;
  real_kind_8_ norm;
  integer_kind_4_ ubound_27;
  integer_kind_4_ ubound_28;
  integer_kind_4_ ubound_30;
  integer_kind_4_ ubound_33;
  
  uVar14 = 0;
  if (-1 < *mband) {
    uVar14 = *mband;
  }
  iVar15 = 0;
  if (-1 < (int)(uVar14 * *mband)) {
    iVar15 = uVar14 * *mband;
  }
  iVar16 = 0;
  if (-1 < iVar15 * *nkpt) {
    iVar16 = iVar15 * *nkpt;
  }
  iVar17 = 0;
  if (-1 < iVar16 * 3) {
    iVar17 = iVar16 * 3;
  }
  iVar18 = 0;
  if (-1 < *mband * 2) {
    iVar18 = *mband * 2;
  }
  iVar19 = 0;
  if (-1 < iVar18 * *mband) {
    iVar19 = iVar18 * *mband;
  }
  iVar20 = 0;
  if (-1 < iVar19 * *nkpt) {
    iVar20 = iVar19 * *nkpt;
  }
  iVar29 = ((-3 - iVar18) - iVar19) - iVar20;
  iVar21 = 0;
  if (-1 < *mband * 2) {
    iVar21 = *mband * 2;
  }
  iVar22 = 0;
  if (-1 < iVar21 * *mband) {
    iVar22 = iVar21 * *mband;
  }
  iVar23 = 0;
  if (-1 < iVar22 * *nkpt) {
    iVar23 = iVar22 * *nkpt;
  }
  iVar30 = ((-3 - iVar21) - iVar22) - iVar23;
  iVar24 = 0;
  if (-1 < *mband * 2) {
    iVar24 = *mband * 2;
  }
  iVar25 = 0;
  if (-1 < iVar24 * *mband) {
    iVar25 = iVar24 * *mband;
  }
  iVar26 = 0;
  if (-1 < iVar25 * *nkpt) {
    iVar26 = iVar25 * *nkpt;
  }
  iVar31 = ((-3 - iVar24) - iVar25) - iVar26;
  ii = 1;
  do {
    dVar1 = (double)(*rprimd)[(ii + -1) * 3];
    dVar2 = (double)(*rprimd)[(ii + -1) * 3];
    dVar3 = (double)(*rprimd)[ii * 3 + -2];
    dVar4 = (double)(*rprimd)[ii * 3 + -2];
    dVar5 = (double)(*rprimd)[(ii + 1) * 3 + -4];
    dVar6 = (double)(*rprimd)[(ii + 1) * 3 + -4];
    iVar10 = ii * 3;
    iVar11 = ii * 3;
    iVar27 = 1;
    while (iVar27 < 4) {
      adStack188[iVar27 + iVar11 + -4] =
           (double)(*rprimd)[iVar27 + iVar10 + -4] /
           SQRT(dVar6 * dVar5 + dVar4 * dVar3 + dVar2 * dVar1);
      iVar27 = iVar27 + 1;
    }
    bVar32 = ii != 3;
    ii = ii + 1;
  } while (bVar32);
  iVar10 = *nsppol;
  isppol = 1;
  if (0 < iVar10) {
    do {
      iVar11 = *nkpt;
      ikpt = 1;
      if (0 < iVar11) {
        do {
          iVar27 = *mband;
          iband1 = 1;
          if (0 < iVar27) {
            do {
              iVar12 = *mband;
              iband2 = 1;
              if (0 < iVar12) {
                do {
                  dVar1 = (double)(*eigen11)
                                  [iband2 * 2 + iVar18 * iband1 + 1 +
                                   iVar20 * isppol + iVar19 * ikpt + iVar29];
                  dVar2 = (double)(*eigen11)
                                  [(iband2 + 1) * 2 + iVar18 * iband1 +
                                   iVar20 * isppol + iVar19 * ikpt + iVar29];
                  dVar3 = (double)(*eigen12)
                                  [iband2 * 2 + iVar21 * iband1 + 1 +
                                   iVar23 * isppol + iVar22 * ikpt + iVar30];
                  dVar4 = (double)(*eigen12)
                                  [(iband2 + 1) * 2 + iVar21 * iband1 +
                                   iVar23 * isppol + iVar22 * ikpt + iVar30];
                  dVar5 = (double)(*eigen13)
                                  [iband2 * 2 + iVar24 * iband1 + 1 +
                                   iVar26 * isppol + iVar25 * ikpt + iVar31];
                  dVar6 = (double)(*eigen13)
                                  [(iband2 + 1) * 2 + iVar24 * iband1 +
                                   iVar26 * isppol + iVar25 * ikpt + iVar31];
                  iVar28 = 1;
                  while (iVar28 < 4) {
                    dVar7 = adStack188[iVar28 + -1];
                    dVar8 = adStack188[iVar28 + 2];
                    dVar9 = adStack188[iVar28 + 5];
                    iVar13 = (iVar28 * iVar16 +
                             iVar17 * isppol +
                             iVar15 * ikpt +
                             iband1 * uVar14 + (((~uVar14 - iVar15) - iVar16) - iVar17) + iband2) *
                             0x10;
                    *(double *)(*pmat + iVar13) =
                         (dVar9 * dVar5 - dVar6 * 0.00000000) +
                         (dVar8 * dVar3 - dVar4 * 0.00000000) + (dVar7 * dVar1 - dVar2 * 0.00000000)
                    ;
                    *(double *)(*pmat + iVar13 + 8) =
                         dVar5 * 0.00000000 + dVar9 * dVar6 +
                         dVar3 * 0.00000000 + dVar8 * dVar4 + dVar1 * 0.00000000 + dVar7 * dVar2;
                    iVar28 = iVar28 + 1;
                  }
                  bVar32 = iband2 != iVar12;
                  iband2 = iband2 + 1;
                } while (bVar32);
              }
              bVar32 = iband1 != iVar27;
              iband1 = iband1 + 1;
            } while (bVar32);
          }
          bVar32 = ikpt != iVar11;
          ikpt = ikpt + 1;
        } while (bVar32);
      }
      bVar32 = isppol != iVar10;
      isppol = isppol + 1;
    } while (bVar32);
  }
  return;
}



void hdr_io_wfftype(integer_kind_4_ *fform,hdr_type *hdr,integer_kind_4_ *rdwr,wffile_type *wff)

{
  if (((wff->accesswff == 0) || ((wff->accesswff == -1 && (wff->master == wff->me)))) ||
     ((wff->accesswff == 1 && (wff->master == wff->me)))) {
    hdr_io_int(fform,hdr,rdwr,wff);
  }
  return;
}


/*
Unable to decompile 'hdr_io_int'
Cause: Exception while decompiling 0805cb14: process: timeout

*/


void hdr_skip_int(integer_kind_4_ *unitfi,integer_kind_4_ *ierr)

{
  wffile_type wff;
  
  wff.unwff = *unitfi;
  wff.accesswff = 0;
  wff.me = 0;
  wff.master = 0;
  hdr_skip_wfftype(&wff,ierr);
  return;
}



void hdr_skip_wfftype(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined4 local_224;
  undefined4 local_220;
  char *local_21c;
  undefined4 local_218;
  undefined *local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined *local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined *local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  char *local_80;
  undefined4 local_7c;
  int local_6c;
  int local_68;
  undefined local_64 [56];
  undefined auStack44 [12];
  int local_20;
  undefined local_1a [6];
  int local_14;
  undefined4 local_10;
  
  local_84 = *param_1;
  *param_2 = 0;
  if ((param_1[1] == 0) || ((param_1[1] == -1 && (param_1[0x25] == param_1[0x26])))) {
    local_80 = "hdr_skip.F90";
    local_7c = 0x6e;
    local_88 = 0;
    local_10 = local_84;
    _gfortran_st_rewind(&local_88);
    local_21c = "hdr_skip.F90";
    local_218 = 0x71;
    local_224 = 0;
    local_220 = local_10;
    _gfortran_st_read(&local_224);
    _gfortran_transfer_character(&local_224,local_1a,6);
    _gfortran_transfer_integer(&local_224,&local_20,4);
    _gfortran_st_read_done(&local_224);
    if ((local_20 == 1) ||
       ((((local_20 == 2 || (local_20 == 0x33)) || (local_20 == 0x34)) ||
        ((local_20 == 0x65 || (local_20 == 0x66)))))) {
      local_20 = 0x16;
    }
    if (local_20 < 0x2c) {
      local_21c = "hdr_skip.F90";
      local_218 = 0x79;
      local_224 = 0;
      local_220 = local_10;
      _gfortran_st_read(&local_224);
      local_98 = 0x109;
      local_90 = 1;
      local_8c = 0xd;
      local_94 = 1;
      local_a0 = local_64;
      local_9c = 0xffffffff;
      _gfortran_transfer_array(&local_224,&local_a0,4,0);
      _gfortran_transfer_integer(&local_224,&local_68,4);
      _gfortran_st_read_done(&local_224);
    }
    else {
      local_21c = "hdr_skip.F90";
      local_218 = 0x7b;
      local_224 = 0;
      local_220 = local_10;
      _gfortran_st_read(&local_224);
      local_b0 = 0x109;
      local_a8 = 1;
      local_a4 = 0xd;
      local_ac = 1;
      local_b8 = local_64;
      local_b4 = 0xffffffff;
      _gfortran_transfer_array(&local_224,&local_b8,4,0);
      _gfortran_transfer_integer(&local_224,&local_68,4);
      local_c8 = 0x109;
      local_c0 = 1;
      local_bc = 3;
      local_c4 = 1;
      local_d0 = auStack44;
      local_cc = 0xfffffff1;
      _gfortran_transfer_array(&local_224,&local_d0,4,0);
      _gfortran_transfer_integer(&local_224,&local_6c,4);
      _gfortran_st_read_done(&local_224);
    }
    local_14 = 1;
    if (0 < local_68 + 2) {
      do {
        local_21c = "hdr_skip.F90";
        local_218 = 0x80;
        local_224 = 0;
        local_220 = local_10;
        _gfortran_st_read(&local_224);
        _gfortran_st_read_done(&local_224);
        bVar1 = local_14 != local_68 + 2;
        local_14 = local_14 + 1;
      } while (bVar1);
    }
    if ((0x2b < local_20) && (local_6c == 1)) {
      local_21c = "hdr_skip.F90";
      local_218 = 0x83;
      local_224 = 0;
      local_220 = local_10;
      _gfortran_st_read(&local_224);
      _gfortran_st_read_done(&local_224);
      local_21c = "hdr_skip.F90";
      local_218 = 0x84;
      local_224 = 0;
      local_220 = local_10;
      _gfortran_st_read(&local_224);
      _gfortran_st_read_done(&local_224);
    }
  }
  return;
}



void rwwf(int param_1,int param_2,int *param_3,int *param_4,int *param_5,wffile_type *param_6,
         undefined4 param_7,int param_8,int *param_9,undefined4 param_10,int *param_11,
         wffile_type *param_12,int *param_13,int *param_14,undefined4 param_15,int *param_16,
         int *param_17,int *param_18,wffile_type *param_19)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  wffile_type *local_5c8;
  wffile_type *local_5c4;
  undefined4 local_544;
  int local_540;
  char *local_53c;
  undefined4 local_538;
  integer_kind_4_ *local_52c;
  undefined4 local_518;
  undefined4 local_514;
  undefined4 local_510;
  undefined *local_504;
  undefined4 local_500;
  int local_3f0;
  int local_3ec;
  char *local_3e8;
  integer_kind_4_ local_3e4;
  undefined4 local_3e0;
  undefined4 local_3dc;
  integer_kind_4_ *local_3d8;
  undefined4 local_3d4;
  int local_3d0;
  undefined4 local_3c4;
  char *local_3c0;
  undefined4 local_3bc;
  undefined *local_3b0;
  undefined4 local_3ac;
  int local_29c;
  int local_298;
  int local_294;
  integer_kind_4_ local_290;
  integer_kind_4_ local_28c;
  undefined4 local_288;
  int local_284;
  int local_280;
  integer_kind_4_ local_27c;
  integer_kind_4_ local_278;
  integer_kind_4_ local_274;
  undefined4 local_270;
  int local_26c;
  int local_268;
  int local_264;
  int local_260;
  undefined local_25c [16];
  integer_kind_4_ local_24c;
  integer_kind_4_ local_248;
  int local_244;
  integer_kind_4_ local_240;
  undefined local_23c [500];
  integer_kind_4_ ios;
  integer_kind_4_ ubound_0;
  integer_kind_4_ ubound_2;
  integer_kind_4_ iband;
  integer_kind_4_ indxx;
  integer_kind_4_ ipw;
  integer_kind_4_ ubound_4;
  
  _gfortran_pow_i4_i4(*param_9 * 2,*param_3);
  local_264 = *param_18 + 0x10e;
  local_5c4 = (wffile_type *)local_25c;
  local_5c8 = (wffile_type *)&DAT_08072f78;
  timab(&local_264,&DAT_08072f78,local_5c4);
  if ((*param_9 < *param_11) && (*param_16 != -1)) {
    local_3e8 = "rwwf.F90";
    local_3e4 = 0xb4;
    local_3b0 = local_23c;
    local_3ac = 500;
    local_3c4 = 0;
    local_3ec = 0;
    local_3c0 = 
    "(a,a,a,a,a,a,i5,a,i5,a)\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
    ;
    local_3bc = 0x17;
    local_3f0 = 0x5000;
    _gfortran_st_write(&local_3f0);
    _gfortran_transfer_character(&local_3f0,0x8072f9c,1);
    _gfortran_transfer_character(&local_3f0,0x8072f9d,0xd);
    _gfortran_transfer_character(&local_3f0,0x8072f9c,1);
    _gfortran_transfer_character(&local_3f0,0x8072faa,0x1e);
    _gfortran_transfer_character(&local_3f0,0x8072f9c,1);
    _gfortran_transfer_character(&local_3f0,0x8072fc8,0x11);
    _gfortran_transfer_integer(&local_3f0,param_11,4);
    _gfortran_transfer_character(&local_3f0,0x8072fd9,0xc);
    _gfortran_transfer_integer(&local_3f0,param_9,4);
    _gfortran_transfer_character(&local_3f0,0x8072fe5,1);
    _gfortran_st_write_done(&local_3f0);
    local_5c4 = (wffile_type *)0x8072fe6;
    wrtout(&DAT_08072fec,local_23c,0x8072fe6,500,4);
    local_5c8 = (wffile_type *)0x4;
    leave_new(0x8072fe6,4);
  }
  if ((*param_3 != 0) && (*param_3 != 1)) {
    local_3e8 = "rwwf.F90";
    local_3e4 = 0xbe;
    local_3b0 = local_23c;
    local_3ac = 500;
    local_3c4 = 0;
    local_3ec = 0;
    local_3c0 = "(a,a,a,a,a,a,i5,a)";
    local_3bc = 0x12;
    local_3f0 = 0x5000;
    _gfortran_st_write(&local_3f0);
    _gfortran_transfer_character(&local_3f0,0x8072f9c,1);
    _gfortran_transfer_character(&local_3f0,0x8072f9d,0xd);
    _gfortran_transfer_character(&local_3f0,0x8072f9c,1);
    _gfortran_transfer_character
              (&local_3f0,"  The argument formeig should be 0 or 1.  However, formeig=",0x28);
    _gfortran_transfer_character(&local_3f0,0x8072f9c,1);
    _gfortran_transfer_character(&local_3f0,0x807302c,0x13);
    _gfortran_transfer_integer(&local_3f0,param_3,4);
    _gfortran_transfer_character(&local_3f0,0x8072fe5,1);
    _gfortran_st_write_done(&local_3f0);
    local_5c4 = (wffile_type *)0x8072fe6;
    wrtout(&DAT_08072fec,local_23c,0x8072fe6,500,4);
    local_5c8 = (wffile_type *)0x4;
    leave_new(0x8072fe6,4);
  }
  if (((((*param_16 != 1) && (*param_16 != 2)) && (*param_16 != 3)) &&
      ((*param_16 != 4 && (*param_16 != -1)))) && ((*param_16 != -2 && (*param_16 != -4)))) {
    local_3e8 = "rwwf.F90";
    local_3e4 = 0xc9;
    local_3b0 = local_23c;
    local_3ac = 500;
    local_3c4 = 0;
    local_3ec = 0;
    local_3c0 = "(a,a,a,a,a,a,i5,a)";
    local_3bc = 0x12;
    local_3f0 = 0x5000;
    _gfortran_st_write(&local_3f0);
    _gfortran_transfer_character(&local_3f0,0x8072f9c,1);
    _gfortran_transfer_character(&local_3f0,0x8072f9d,0xd);
    _gfortran_transfer_character(&local_3f0,0x8072f9c,1);
    _gfortran_transfer_character
              (&local_3f0,
                              
               "  The argument option should be 1, 2, 3, -1 or -2.  However, option=(a,a,a,a,a,a,i4,a,a,i4,a,a,a) rwwf: ERROR -"
               ,0x32);
    _gfortran_transfer_character(&local_3f0,0x8072f9c,1);
    _gfortran_transfer_character(&local_3f0,0x8073072,0x12);
    _gfortran_transfer_integer(&local_3f0,param_16,4);
    _gfortran_transfer_character(&local_3f0,0x8072fe5,1);
    _gfortran_st_write_done(&local_3f0);
    local_5c4 = (wffile_type *)0x8072fe6;
    wrtout(&DAT_08072fec,local_23c,0x8072fe6,500,4);
    local_5c8 = (wffile_type *)0x4;
    leave_new(0x8072fe6,4);
  }
  local_260 = param_19->unwff;
  bVar2 = false;
  if ((param_19->accesswff == 0) ||
     ((param_19->accesswff == -1 && (param_19->master == param_19->me)))) {
    bVar2 = true;
  }
  if ((*param_16 == 2) || (*param_16 == 4)) {
    if ((*param_16 == 2) || (*param_16 == 4)) {
      writewf(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
              param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_19);
    }
  }
  else {
    if ((*param_4 < 0x28) && (*param_4 != 0)) {
      param_6 = local_5c8;
      if (bVar2) {
        local_3e8 = "rwwf.F90";
        local_3e4 = 0x110;
        ios = 0;
        local_3d8 = &ios;
        local_3f0 = 0x20;
        local_3ec = local_260;
        _gfortran_st_read(&local_3f0);
        _gfortran_transfer_integer(&local_3f0,&local_244,4);
        local_5c4 = (wffile_type *)0x4;
        param_6 = param_12;
        _gfortran_transfer_integer(&local_3f0,param_12,4);
        _gfortran_st_read_done(&local_3f0);
      }
      if (ios != 0) {
        local_3e8 = "rwwf.F90";
        local_3e4 = 0x11f;
        local_3b0 = local_23c;
        local_3ac = 500;
        local_3c4 = 0;
        local_3ec = 0;
        local_3c0 = "(a,a,a,a,a,a,i4,a,a,i4,a,a,a) rwwf: ERROR -";
        local_3bc = 0x1d;
        local_3f0 = 0x5000;
        _gfortran_st_write(&local_3f0);
        _gfortran_transfer_character(&local_3f0,0x8072f9c,1);
        _gfortran_transfer_character(&local_3f0,0x80730a1,0xe);
        _gfortran_transfer_character(&local_3f0,0x8072f9c,1);
        _gfortran_transfer_character
                  (&local_3f0,
                                      
                   "  Reading option of rwwf. Trying to read  the (npw,nspinor,nband) record of a wf file, unit=  gave iostat="
                   ,0x28);
        _gfortran_transfer_character(&local_3f0,0x8072f9c,1);
        _gfortran_transfer_character
                  (&local_3f0,
                                      
                   "  the (npw,nband) record of a wf file, unit=  Reading option of rwwf. One should have npw=npw1  However, npw=, and npw1=  Reading option of rwwf. One should have nspinor=nspinor1  However, nspinor=, and nspinor1=  Reading option of rwwf. One should have npwso=npwso1  However, npwso=, and npwso1=  the k+g record of a wf file, unit=  an eigenvalue record of a wf file, unit="
                   ,0x2c);
        _gfortran_transfer_integer(&local_3f0,&local_260,4);
        _gfortran_transfer_character(&local_3f0,0x8072f9c,1);
        _gfortran_transfer_character(&local_3f0,0x807310c,0xe);
        _gfortran_transfer_integer(&local_3f0,&ios,4);
        _gfortran_transfer_character(&local_3f0,". Your file is likely not correct.",0x22);
        _gfortran_transfer_character(&local_3f0,0x8072f9c,1);
        _gfortran_transfer_character(&local_3f0,"  Action: check your input wf file.",0x23);
        _gfortran_st_write_done(&local_3f0);
        local_5c4 = (wffile_type *)0x8072fe6;
        wrtout(&DAT_08072fec,local_23c,0x8072fe6,500,4);
        param_6 = (wffile_type *)0x4;
        leave_new(0x8072fe6,4);
      }
    }
    else {
      local_5c4 = param_12;
      wffreadnpwrec(&ios,(integer_kind_4_ *)param_6,(integer_kind_4_ *)param_12,&local_240,
                    &local_24c,param_19);
      local_244 = local_24c * local_240;
      if (ios != 0) {
        local_3e8 = "rwwf.F90";
        local_3e4 = 0x109;
        local_3b0 = local_23c;
        local_3ac = 500;
        local_3c4 = 0;
        local_3ec = 0;
        local_3c0 = "(a,a,a,a,a,a,i4,a,a,i4,a,a,a) rwwf: ERROR -";
        local_3bc = 0x1d;
        local_3f0 = 0x5000;
        _gfortran_st_write(&local_3f0);
        _gfortran_transfer_character(&local_3f0,0x8072f9c,1);
        _gfortran_transfer_character(&local_3f0,0x80730a1,0xe);
        _gfortran_transfer_character(&local_3f0,0x8072f9c,1);
        _gfortran_transfer_character
                  (&local_3f0,
                                      
                   "  Reading option of rwwf. Trying to read  the (npw,nspinor,nband) record of a wf file, unit=  gave iostat="
                   ,0x28);
        _gfortran_transfer_character(&local_3f0,0x8072f9c,1);
        _gfortran_transfer_character(&local_3f0,0x80730d8,0x34);
        _gfortran_transfer_integer(&local_3f0,&local_260,4);
        _gfortran_transfer_character(&local_3f0,0x8072f9c,1);
        _gfortran_transfer_character(&local_3f0,0x807310c,0xe);
        _gfortran_transfer_integer(&local_3f0,&ios,4);
        _gfortran_transfer_character(&local_3f0,". Your file is likely not correct.",0x22);
        _gfortran_transfer_character(&local_3f0,0x8072f9c,1);
        _gfortran_transfer_character(&local_3f0,"  Action: check your input wf file.",0x23);
        _gfortran_st_write_done(&local_3f0);
        local_5c4 = (wffile_type *)0x8072fe6;
        wrtout(&DAT_08072fec,local_23c,0x8072fe6,500,4);
        param_6 = (wffile_type *)0x4;
        leave_new(0x8072fe6,4);
      }
    }
    if ((*param_16 == 1) || (*param_16 == -2)) {
      if ((*param_4 < 0x28) && (*param_4 != 0)) {
        if (*param_13 * *param_14 - local_244 != 0) {
          local_3e8 = "rwwf.F90";
          local_3e4 = 0x146;
          local_3b0 = local_23c;
          local_3ac = 500;
          local_3c4 = 0;
          local_3ec = 0;
          local_3c0 = 
          "(a,a,a,a,a,a,i5,a,i5,a)\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
          ;
          local_3bc = 0x17;
          local_3f0 = 0x5000;
          _gfortran_st_write(&local_3f0);
          _gfortran_transfer_character(&local_3f0,0x8072f9c,1);
          _gfortran_transfer_character(&local_3f0,0x8072f9d,0xd);
          _gfortran_transfer_character(&local_3f0,0x8072f9c,1);
          _gfortran_transfer_character(&local_3f0,0x8073238,0x36);
          _gfortran_transfer_character(&local_3f0,0x8072f9c,1);
          _gfortran_transfer_character(&local_3f0,0x807326e,0x11);
          local_268 = *param_14 * *param_13;
          _gfortran_transfer_integer(&local_3f0,&local_268,4);
          _gfortran_transfer_character(&local_3f0,0x807327f,0xd);
          _gfortran_transfer_integer(&local_3f0,&local_244,4);
          _gfortran_transfer_character(&local_3f0,0x8072fe5,1);
          _gfortran_st_write_done(&local_3f0);
          local_5c4 = (wffile_type *)0x8072fe6;
          wrtout(&DAT_08072fec,local_23c,0x8072fe6,500,4);
          param_6 = (wffile_type *)0x4;
          leave_new(0x8072fe6,4);
        }
      }
      else {
        if (*param_13 != local_240) {
          local_3e8 = "rwwf.F90";
          local_3e4 = 0x133;
          local_3b0 = local_23c;
          local_3ac = 500;
          local_3c4 = 0;
          local_3ec = 0;
          local_3c0 = 
          "(a,a,a,a,a,a,i5,a,i5,a)\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
          ;
          local_3bc = 0x17;
          local_3f0 = 0x5000;
          _gfortran_st_write(&local_3f0);
          _gfortran_transfer_character(&local_3f0,0x8072f9c,1);
          _gfortran_transfer_character(&local_3f0,0x8072f9d,0xd);
          _gfortran_transfer_character(&local_3f0,0x8072f9c,1);
          _gfortran_transfer_character(&local_3f0,0x8073190,0x32);
          _gfortran_transfer_character(&local_3f0,0x8072f9c,1);
          _gfortran_transfer_character(&local_3f0,0x80731c2,0xf);
          _gfortran_transfer_integer(&local_3f0,param_13,4);
          _gfortran_transfer_character(&local_3f0,0x80731d1,0xb);
          _gfortran_transfer_integer(&local_3f0,&local_240,4);
          _gfortran_transfer_character(&local_3f0,0x8072fe5,1);
          _gfortran_st_write_done(&local_3f0);
          local_5c4 = (wffile_type *)0x8072fe6;
          wrtout(&DAT_08072fec,local_23c,0x8072fe6,500,4);
          param_6 = (wffile_type *)0x4;
          leave_new(0x8072fe6,4);
        }
        if (*param_14 != local_24c) {
          local_3e8 = "rwwf.F90";
          local_3e4 = 0x13b;
          local_3b0 = local_23c;
          local_3ac = 500;
          local_3c4 = 0;
          local_3ec = 0;
          local_3c0 = 
          "(a,a,a,a,a,a,i5,a,i5,a)\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
          ;
          local_3bc = 0x17;
          local_3f0 = 0x5000;
          _gfortran_st_write(&local_3f0);
          _gfortran_transfer_character(&local_3f0,0x8072f9c,1);
          _gfortran_transfer_character(&local_3f0,0x8072f9d,0xd);
          _gfortran_transfer_character(&local_3f0,0x8072f9c,1);
          _gfortran_transfer_character(&local_3f0,0x80731dc,0x3a);
          _gfortran_transfer_character(&local_3f0,0x8072f9c,1);
          _gfortran_transfer_character(&local_3f0,0x8073216,0x13);
          _gfortran_transfer_integer(&local_3f0,param_14,4);
          _gfortran_transfer_character(&local_3f0,0x8073229,0xf);
          _gfortran_transfer_integer(&local_3f0,&local_24c,4);
          _gfortran_transfer_character(&local_3f0,0x8072fe5,1);
          _gfortran_st_write_done(&local_3f0);
          local_5c4 = (wffile_type *)0x8072fe6;
          wrtout(&DAT_08072fec,local_23c,0x8072fe6,500,4);
          param_6 = (wffile_type *)0x4;
          leave_new(0x8072fe6,4);
        }
      }
    }
    if ((0x27 < *param_4) || (*param_4 == 0)) {
      if (((*param_16 == 1) || ((*param_16 == -2 || (*param_16 == 3)))) && (*param_17 != 0)) {
        if (bVar2) {
          local_53c = "rwwf.F90";
          local_538 = 0x155;
          ios = 0;
          local_52c = &ios;
          local_544 = 0x20;
          local_540 = local_260;
          _gfortran_st_read(&local_544);
          local_3d0 = *param_13;
          local_3e8 = (char *)0x10a;
          local_3e0 = 1;
          local_3dc = 3;
          local_3e4 = 1;
          local_3d4 = 1;
          local_3d8 = (integer_kind_4_ *)0x3;
          local_3f0 = param_8;
          local_3ec = -4;
          local_5c4 = (wffile_type *)0x4;
          param_6 = (wffile_type *)&local_3f0;
          _gfortran_transfer_array(&local_544,param_6,4,0);
          _gfortran_st_read_done(&local_544);
        }
      }
      else {
        param_6 = (wffile_type *)&DAT_08072f78;
        local_5c4 = param_19;
        wffreadskiprec(&ios,(integer_kind_4_ *)&DAT_08072f78,param_19);
      }
      if (ios != 0) {
        local_53c = "rwwf.F90";
        local_538 = 0x17e;
        local_504 = local_23c;
        local_500 = 500;
        local_518 = 0;
        local_540 = 0;
        local_514 = 0x8073084;
        local_510 = 0x1d;
        local_544 = 0x5000;
        _gfortran_st_write(&local_544);
        _gfortran_transfer_character(&local_544,0x8072f9c,1);
        _gfortran_transfer_character(&local_544,0x80730a1,0xe);
        _gfortran_transfer_character(&local_544,0x8072f9c,1);
        _gfortran_transfer_character
                  (&local_544,
                                      
                   "  Reading option of rwwf. Trying to read  the (npw,nspinor,nband) record of a wf file, unit=  gave iostat="
                   ,0x28);
        _gfortran_transfer_character(&local_544,0x8072f9c,1);
        _gfortran_transfer_character(&local_544,0x807328c,0x24);
        _gfortran_transfer_integer(&local_544,&local_260,4);
        _gfortran_transfer_character(&local_544,0x8072f9c,1);
        _gfortran_transfer_character(&local_544,0x807310c,0xe);
        _gfortran_transfer_integer(&local_544,&ios,4);
        _gfortran_transfer_character(&local_544,". Your file is likely not correct.",0x22);
        _gfortran_transfer_character(&local_544,0x8072f9c,1);
        _gfortran_transfer_character(&local_544,"  Action: check your input wf file.",0x23);
        _gfortran_st_write_done(&local_544);
        local_5c4 = (wffile_type *)0x8072fe6;
        wrtout(&DAT_08072fec,local_23c,0x8072fe6,500,4);
        param_6 = (wffile_type *)0x4;
        leave_new(0x8072fe6,4);
      }
    }
    iVar3 = *param_11;
    if (param_12->unwff < *param_11) {
      iVar3 = param_12->unwff;
    }
    if (*param_3 == 0) {
      if (((*param_16 == 1) || (*param_16 == 3)) || (*param_16 == -4)) {
        if (bVar2) {
          local_53c = "rwwf.F90";
          local_538 = 0x18c;
          ios = 0;
          local_52c = &ios;
          local_544 = 0x20;
          local_540 = local_260;
          _gfortran_st_read(&local_544);
          local_278 = 0x219;
          local_270 = 1;
          local_274 = 1;
          local_280 = param_2;
          local_27c = -1;
          local_5c4 = (wffile_type *)0x8;
          param_6 = (wffile_type *)&local_280;
          local_26c = iVar3;
          _gfortran_transfer_array(&local_544,param_6,8,0);
          _gfortran_st_read_done(&local_544);
        }
      }
      else {
        param_6 = (wffile_type *)&DAT_08072f78;
        local_5c4 = param_19;
        wffreadskiprec(&ios,(integer_kind_4_ *)&DAT_08072f78,param_19);
      }
      if (ios != 0) {
        local_53c = "rwwf.F90";
        local_538 = 0x1a4;
        local_504 = local_23c;
        local_500 = 500;
        local_518 = 0;
        local_540 = 0;
        local_514 = 0x8073084;
        local_510 = 0x1d;
        local_544 = 0x5000;
        _gfortran_st_write(&local_544);
        _gfortran_transfer_character(&local_544,0x8072f9c,1);
        _gfortran_transfer_character(&local_544,0x80730a1,0xe);
        _gfortran_transfer_character(&local_544,0x8072f9c,1);
        _gfortran_transfer_character
                  (&local_544,
                                      
                   "  Reading option of rwwf. Trying to read  the (npw,nspinor,nband) record of a wf file, unit=  gave iostat="
                   ,0x28);
        _gfortran_transfer_character(&local_544,0x8072f9c,1);
        _gfortran_transfer_character(&local_544,0x80732b0,0x2a);
        _gfortran_transfer_integer(&local_544,&local_260,4);
        _gfortran_transfer_character(&local_544,0x8072f9c,1);
        _gfortran_transfer_character(&local_544,0x807310c,0xe);
        _gfortran_transfer_integer(&local_544,&ios,4);
        _gfortran_transfer_character(&local_544,". Your file is likely not correct.",0x22);
        _gfortran_transfer_character(&local_544,0x8072f9c,1);
        _gfortran_transfer_character(&local_544,"  Action: check your input wf file.",0x23);
        _gfortran_st_write_done(&local_544);
        local_5c4 = (wffile_type *)0x8072fe6;
        wrtout(&DAT_08072fec,local_23c,0x8072fe6,500,4);
        param_6 = (wffile_type *)0x4;
        leave_new(0x8072fe6,4);
      }
    }
    indxx = 0;
    iVar3 = *param_11;
    if (param_12->unwff < *param_11) {
      iVar3 = param_12->unwff;
    }
    if (((0 < iVar3) && (*param_16 != -1)) && (iband = 1, 0 < iVar3)) {
      do {
        if (*param_3 == 1) {
          if (((*param_16 == 1) || (*param_16 == 3)) || (*param_16 == -4)) {
            if (bVar2) {
              local_53c = "rwwf.F90";
              local_538 = 0x1db;
              ios = 0;
              local_52c = &ios;
              local_544 = 0x20;
              local_540 = local_260;
              _gfortran_st_read(&local_544,param_6,local_5c4);
              local_290 = 0x219;
              local_288 = 1;
              local_284 = (1 - (indxx + 1)) + iVar3 * 2 + indxx;
              local_28c = 1;
              local_298 = indxx * 8 + param_2;
              local_294 = -(indxx + 1);
              local_5c4 = (wffile_type *)0x8;
              param_6 = (wffile_type *)&local_298;
              _gfortran_transfer_array(&local_544,param_6,8,0);
              _gfortran_st_read_done(&local_544);
            }
            indxx = indxx + iVar3 * 2;
          }
          else {
            param_6 = (wffile_type *)&DAT_08072f78;
            local_5c4 = param_19;
            wffreadskiprec(&ios,(integer_kind_4_ *)&DAT_08072f78,param_19);
          }
          if (ios != 0) {
            local_53c = "rwwf.F90";
            local_538 = 0x1ee;
            local_504 = local_23c;
            local_500 = 500;
            local_518 = 0;
            local_540 = 0;
            local_514 = 0x8073084;
            local_510 = 0x1d;
            local_544 = 0x5000;
            _gfortran_st_write(&local_544);
            _gfortran_transfer_character(&local_544,0x8072f9c,1);
            _gfortran_transfer_character(&local_544,0x80730a1,0xe);
            _gfortran_transfer_character(&local_544,0x8072f9c,1);
            _gfortran_transfer_character
                      (&local_544,
                                              
                       "  Reading option of rwwf. Trying to read  the (npw,nspinor,nband) record of a wf file, unit=  gave iostat="
                       ,0x28);
            _gfortran_transfer_character(&local_544,0x8072f9c,1);
            _gfortran_transfer_character(&local_544,&DAT_080732dc,0x2c);
            _gfortran_transfer_integer(&local_544,&local_260,4);
            _gfortran_transfer_character(&local_544,0x8072f9c,1);
            _gfortran_transfer_character(&local_544,0x807310c,0xe);
            _gfortran_transfer_integer(&local_544,&ios,4);
            _gfortran_transfer_character(&local_544,". Your file is likely not correct.",0x22);
            _gfortran_transfer_character(&local_544,0x8072f9c,1);
            _gfortran_transfer_character(&local_544,"  Action: check your input wf file.",0x23);
            _gfortran_st_write_done(&local_544);
            local_5c4 = (wffile_type *)0x8072fe6;
            wrtout(&DAT_08072fec,local_23c,0x8072fe6,500,4);
            param_6 = (wffile_type *)0x4;
            leave_new(0x8072fe6);
          }
        }
        if ((*param_16 == 1) || (*param_16 == -2)) {
          iVar1 = (iband + -1) * local_244 + *param_5;
          if (bVar2) {
            local_53c = "rwwf.F90";
            local_538 = 0x1fa;
            ios = 0;
            local_52c = &ios;
            local_544 = 0x20;
            local_540 = local_260;
            _gfortran_st_read(&local_544,param_6);
            local_3e8 = (char *)0x21a;
            local_3e0 = 1;
            local_3dc = 2;
            local_3e4 = 1;
            local_3d4 = 1;
            local_3d0 = (1 - (iVar1 + 1)) + local_244 + iVar1;
            local_3d8 = (integer_kind_4_ *)0x2;
            local_3f0 = iVar1 * 0x10 + param_1;
            local_3ec = (1 - (iVar1 + 1)) * 2 + -3;
            local_5c4 = (wffile_type *)0x8;
            param_6 = (wffile_type *)&local_3f0;
            _gfortran_transfer_array(&local_544,param_6,8,0);
            _gfortran_st_read_done(&local_544);
          }
        }
        else {
          if (*param_16 != -4) {
            param_6 = (wffile_type *)&DAT_08072f78;
            local_5c4 = param_19;
            wffreadskiprec(&ios,(integer_kind_4_ *)&DAT_08072f78,param_19);
          }
        }
        if (ios != 0) {
          local_53c = "rwwf.F90";
          local_538 = 0x20d;
          local_504 = local_23c;
          local_500 = 500;
          local_518 = 0;
          local_540 = 0;
          local_514 = 0x8073084;
          local_510 = 0x1d;
          local_544 = 0x5000;
          _gfortran_st_write(&local_544);
          _gfortran_transfer_character(&local_544,0x8072f9c,1);
          _gfortran_transfer_character(&local_544,0x80730a1,0xe);
          _gfortran_transfer_character(&local_544,0x8072f9c,1);
          _gfortran_transfer_character
                    (&local_544,
                                          
                     "  Reading option of rwwf. Trying to read  the (npw,nspinor,nband) record of a wf file, unit=  gave iostat="
                     ,0x28);
          _gfortran_transfer_character(&local_544,0x8072f9c,1);
          _gfortran_transfer_character(&local_544,&DAT_08073308,0x24);
          _gfortran_transfer_integer(&local_544,&local_260,4);
          _gfortran_transfer_character(&local_544,0x8072f9c,1);
          _gfortran_transfer_character(&local_544,0x807310c,0xe);
          _gfortran_transfer_integer(&local_544,&ios,4);
          _gfortran_transfer_character(&local_544,". Your file is likely not correct.",0x22);
          _gfortran_transfer_character(&local_544,0x8072f9c,1);
          _gfortran_transfer_character(&local_544,"  Action: check your input wf file.",0x23);
          _gfortran_st_write_done(&local_544);
          local_5c4 = (wffile_type *)0x8072fe6;
          wrtout(&DAT_08072fec,local_23c,0x8072fe6,500,4);
          param_6 = (wffile_type *)0x4;
          leave_new(0x8072fe6);
        }
        bVar4 = iband != iVar3;
        iband = iband + 1;
      } while (bVar4);
    }
    if ((*param_11 < param_12->unwff) || (*param_16 == -1)) {
      local_248 = (param_12->unwff - *param_11) * (*param_3 + 1);
      if (*param_16 == -1) {
        local_248 = param_12->unwff * (*param_3 + 1);
      }
      wffreadskiprec(&ios,&local_248,param_19);
    }
  }
  local_29c = *param_18 + 0x10e;
  timab(&local_29c,&DAT_0807332c,local_25c);
  return;
}



void writewf(int param_1,int param_2,int *param_3,undefined4 param_4,int *param_5,undefined4 param_6
            ,undefined4 param_7,int param_8,int *param_9,undefined4 param_10,int *param_11,
            integer_kind_4_ *param_12,integer_kind_4_ *param_13,integer_kind_4_ *param_14,
            int param_15,int *param_16,int *param_17,wffile_type *param_18)

{
  int iVar1;
  int iVar2;
  integer_kind_4_ iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  bool bVar9;
  integer_kind_4_ *local_558;
  integer_kind_4_ *local_554;
  integer_kind_4_ *local_550;
  undefined4 local_504;
  integer_kind_4_ local_500;
  char *local_4fc;
  undefined4 local_4f8;
  integer_kind_4_ local_3b0;
  int local_3ac;
  char *local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_394;
  int local_390;
  undefined4 local_384;
  char *local_380;
  undefined4 local_37c;
  undefined *local_370;
  undefined4 local_36c;
  integer_kind_4_ local_25c;
  int local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  int local_248;
  undefined local_244 [500];
  integer_kind_4_ ios;
  integer_kind_4_ ubound_61;
  integer_kind_4_ ubound_63;
  integer_kind_4_ iband;
  integer_kind_4_ ii;
  integer_kind_4_ ipw;
  integer_kind_4_ ubound_65;
  
  _gfortran_pow_i4_i4(*param_9 * 2,*param_3);
  if ((*param_16 != 2) && (*param_16 != 4)) {
    local_3a8 = "rwwf.F90";
    local_3a4 = 0x2d6;
    local_370 = local_244;
    local_36c = 500;
    local_384 = 0;
    local_3ac = 0;
    local_380 = "(a,a,a,a,a,a,i5,a)";
    local_37c = 0x12;
    local_3b0 = 0x5000;
    _gfortran_st_write(&local_3b0);
    _gfortran_transfer_character(&local_3b0,0x8072f9c,1);
    _gfortran_transfer_character
              (&local_3b0," writewf : BUG -  The argument option should be 2 or 4.",0x10);
    _gfortran_transfer_character(&local_3b0,0x8072f9c,1);
    _gfortran_transfer_character(&local_3b0,0x8073340,0x27);
    _gfortran_transfer_character(&local_3b0,0x8072f9c,1);
    _gfortran_transfer_character(&local_3b0,0x8073072,0x12);
    _gfortran_transfer_integer(&local_3b0,param_16,4);
    _gfortran_transfer_character(&local_3b0,0x8072fe5,1);
    _gfortran_st_write_done(&local_3b0);
    wrtout(&DAT_08072fec,local_244,0x8072fe6,500,4);
    leave_new(0x8072fe6,4);
  }
  iVar3 = param_18->unwff;
  bVar7 = false;
  if ((param_18->accesswff == 0) ||
     ((param_18->accesswff == -1 && (param_18->master == param_18->me)))) {
    bVar7 = true;
  }
  if (*param_11 < *param_12) {
    local_3a8 = "rwwf.F90";
    local_3a4 = 0x2e8;
    local_370 = local_244;
    local_36c = 500;
    local_384 = 0;
    local_3ac = 0;
    local_380 = 
    "(a,a,a,a,a,a,i5,a,i5,a)\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
    ;
    local_37c = 0x17;
    local_3b0 = 0x5000;
    _gfortran_st_write(&local_3b0);
    _gfortran_transfer_character(&local_3b0,0x8072f9c,1);
    _gfortran_transfer_character(&local_3b0,0x8072f9d,0xd);
    _gfortran_transfer_character(&local_3b0,0x8072f9c,1);
    _gfortran_transfer_character
              (&local_3b0,
                              
               "  Writing option of rwwf. One should have nband<=nband_disk, and nband_disk=wffclose.F90"
               ,0x3b);
    _gfortran_transfer_character(&local_3b0,0x8072f9c,1);
    _gfortran_transfer_character(&local_3b0,0x8072fc8,0x11);
    _gfortran_transfer_integer(&local_3b0,param_11,4);
    _gfortran_transfer_character(&local_3b0,0x80733a3,0x11);
    _gfortran_transfer_integer(&local_3b0,param_12,4);
    _gfortran_transfer_character(&local_3b0,0x8072fe5,1);
    _gfortran_st_write_done(&local_3b0);
    wrtout(&DAT_08072fec,local_244,0x8072fe6,500,4);
    leave_new(0x8072fe6,4);
  }
  local_558 = param_12;
  local_554 = param_13;
  local_550 = param_14;
  wffwritenpwrec(&ios,param_12,param_13,param_14,param_18);
  local_500 = iVar3;
  if ((*param_17 == 0) || (*param_16 == 4)) {
    if (bVar7) {
      local_4fc = "rwwf.F90";
      local_4f8 = 799;
      local_504 = 0;
      _gfortran_st_write(&local_504);
      _gfortran_st_write_done(&local_504);
    }
  }
  else {
    if (bVar7) {
      local_4fc = "rwwf.F90";
      local_4f8 = 0x2f8;
      local_504 = 0;
      _gfortran_st_write(&local_504);
      local_390 = *param_13 * *param_17;
      local_3a8 = (char *)0x10a;
      local_3a0 = 1;
      local_39c = 3;
      local_3a4 = 1;
      local_394 = 1;
      local_398 = 3;
      local_3b0 = param_8;
      local_3ac = -4;
      local_550 = (integer_kind_4_ *)0x0;
      local_554 = (integer_kind_4_ *)0x4;
      local_558 = &local_3b0;
      _gfortran_transfer_array(&local_504,local_558,4,0);
      _gfortran_st_write_done(&local_504);
    }
  }
  if (*param_3 == 0) {
    if (bVar7) {
      local_4fc = "rwwf.F90";
      local_4f8 = 0x36d;
      local_504 = 0;
      local_500 = iVar3;
      _gfortran_st_write(&local_504);
      iVar4 = *param_12;
      iband = 1;
      if (0 < iVar4) {
        do {
          local_558 = (integer_kind_4_ *)((iband + -1) * 8 + param_2);
          local_554 = (integer_kind_4_ *)0x8;
          _gfortran_transfer_real(&local_504,local_558,8);
          bVar9 = iband != iVar4;
          iband = iband + 1;
        } while (bVar9);
      }
      iVar4 = *param_12;
      iband = 1;
      if (0 < iVar4) {
        do {
          local_558 = (integer_kind_4_ *)((iband + -1) * 8 + param_15);
          local_554 = (integer_kind_4_ *)0x8;
          _gfortran_transfer_real(&local_504,local_558,8);
          bVar9 = iband != iVar4;
          iband = iband + 1;
        } while (bVar9);
      }
      _gfortran_st_write_done(&local_504);
    }
    if (*param_16 != 4) {
      iVar4 = *param_13;
      iVar5 = *param_14;
      iVar6 = *param_12;
      iband = 1;
      if (0 < iVar6) {
        do {
          iVar1 = (iband + -1) * iVar5 * iVar4 + *param_5;
          if (bVar7) {
            local_4fc = "rwwf.F90";
            local_4f8 = 0x37c;
            local_504 = 0;
            local_500 = iVar3;
            _gfortran_st_write(&local_504,local_558,local_554,local_550);
            local_3a8 = (char *)0x21a;
            local_3a0 = 1;
            local_39c = 2;
            local_3a4 = 1;
            local_394 = 1;
            local_390 = (1 - (iVar1 + 1)) + iVar1 + iVar5 * iVar4;
            local_398 = 2;
            local_3b0 = iVar1 * 0x10 + param_1;
            local_3ac = (1 - (iVar1 + 1)) * 2 + -3;
            local_550 = (integer_kind_4_ *)0x0;
            local_554 = (integer_kind_4_ *)0x8;
            local_558 = &local_3b0;
            _gfortran_transfer_array(&local_504);
            _gfortran_st_write_done(&local_504);
          }
          bVar9 = iband != iVar6;
          iband = iband + 1;
        } while (bVar9);
      }
    }
  }
  else {
    if (*param_3 == 1) {
      iVar4 = *param_13;
      iVar5 = *param_14;
      iVar6 = *param_12;
      iVar1 = *param_12;
      iband = 1;
      if (0 < iVar1) {
        do {
          iVar2 = (iband + -1) * iVar5 * iVar4 + *param_5;
          iVar8 = (iband + -1) * iVar6 * 2;
          if (bVar7) {
            local_4fc = "rwwf.F90";
            local_4f8 = 0x38e;
            local_504 = 0;
            local_500 = iVar3;
            _gfortran_st_write(&local_504,local_558,local_554,local_550);
            local_254 = 0x219;
            local_24c = 1;
            local_248 = (1 - (iVar8 + 1)) + iVar6 * 2 + iVar8;
            local_250 = 1;
            local_25c = iVar8 * 8 + param_2;
            local_258 = -(iVar8 + 1);
            local_550 = (integer_kind_4_ *)0x0;
            local_554 = (integer_kind_4_ *)0x8;
            local_558 = &local_25c;
            _gfortran_transfer_array(&local_504);
            _gfortran_st_write_done(&local_504);
            if (*param_16 != 4) {
              local_4fc = "rwwf.F90";
              local_4f8 = 0x390;
              local_504 = 0;
              local_500 = iVar3;
              _gfortran_st_write(&local_504,local_558,local_554,local_550);
              local_3a8 = (char *)0x21a;
              local_3a0 = 1;
              local_39c = 2;
              local_3a4 = 1;
              local_394 = 1;
              local_390 = (1 - (iVar2 + 1)) + iVar5 * iVar4 + iVar2;
              local_398 = 2;
              local_3b0 = iVar2 * 0x10 + param_1;
              local_3ac = (1 - (iVar2 + 1)) * 2 + -3;
              local_550 = (integer_kind_4_ *)0x0;
              local_554 = (integer_kind_4_ *)0x8;
              local_558 = &local_3b0;
              _gfortran_transfer_array(&local_504);
              _gfortran_st_write_done(&local_504);
            }
          }
          bVar9 = iband != iVar1;
          iband = iband + 1;
        } while (bVar9);
      }
    }
  }
  return;
}



void wffclose(wffile_type *wff,integer_kind_4_ *ier)

{
  undefined4 local_30;
  integer_kind_4_ local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  *ier = 0;
  if (wff->accesswff == 0) {
    local_28 = 0x80733b4;
    local_24 = 0x47;
    local_30 = 0;
    local_2c = wff->unwff;
    _gfortran_st_close(&local_30);
  }
  else {
    if ((wff->accesswff == -1) && (wff->master == wff->me)) {
      local_28 = 0x80733b4;
      local_24 = 0x5a;
      local_30 = 0;
      local_2c = wff->unwff;
      _gfortran_st_close(&local_30);
    }
  }
  return;
}



void wffopen(int *param_1,undefined4 *param_2,void *param_3,undefined4 *param_4,undefined4 *param_5,
            int *param_6,int *param_7,undefined4 *param_8)

{
  undefined4 local_38c;
  undefined4 local_388;
  char *local_384;
  undefined4 local_380;
  undefined4 local_36c;
  void *local_368;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  char *local_354;
  undefined4 local_350;
  undefined *local_34c;
  undefined4 local_348;
  undefined4 local_238;
  undefined4 local_234;
  char *local_230;
  undefined4 local_22c;
  undefined4 local_21c;
  undefined4 local_218;
  char *local_214;
  undefined4 local_210;
  undefined local_200 [508];
  
  *param_5 = *param_8;
  param_5[1] = *param_1;
  memmove(param_5 + 4,param_3,0x84);
  param_5[0x26] = *param_7;
  param_5[0x25] = *param_6;
  param_5[0x28] = *param_2;
  *param_4 = 0;
  if (*param_1 == 0) {
    local_384 = "wffopen.F90";
    local_380 = 0x6d;
    local_368 = param_3;
    local_36c = 0x84;
    local_354 = 
    "unformatted(8a,i6,3a)\n WffOpen : ERROR -  For the time being the input variable accesswff is restricted   to 0, 2, or 3 in sequential, and 0 or 1 in parallel.  Its value is accesswff=.  Action : change accesswff or use ABINIT in parallel.COLL"
    ;
    local_350 = 0xb;
    local_38c = 0x900;
    local_388 = *param_8;
    _gfortran_st_open(&local_38c);
    local_214 = "wffopen.F90";
    local_210 = 0x6e;
    local_21c = 0;
    local_218 = *param_8;
    _gfortran_st_rewind(&local_21c);
  }
  else {
    if (*param_1 == -1) {
      if (*param_6 == *param_7) {
        local_384 = "wffopen.F90";
        local_380 = 0x73;
        local_368 = param_3;
        local_36c = 0x84;
        local_354 = 
        "unformatted(8a,i6,3a)\n WffOpen : ERROR -  For the time being the input variable accesswff is restricted   to 0, 2, or 3 in sequential, and 0 or 1 in parallel.  Its value is accesswff=.  Action : change accesswff or use ABINIT in parallel.COLL"
        ;
        local_350 = 0xb;
        local_38c = 0x900;
        local_388 = *param_8;
        _gfortran_st_open(&local_38c);
        local_230 = "wffopen.F90";
        local_22c = 0x74;
        local_238 = 0;
        local_234 = *param_8;
        _gfortran_st_rewind(&local_238);
      }
    }
    else {
      local_384 = "wffopen.F90";
      local_380 = 0xab;
      local_34c = local_200;
      local_348 = 500;
      local_360 = 0;
      local_388 = 0;
      local_35c = 0x80733db;
      local_358 = 10;
      local_38c = 0x5000;
      _gfortran_st_write(&local_38c);
      _gfortran_transfer_character(&local_38c,0x80733e5,1);
      _gfortran_transfer_character(&local_38c,0x80733e6,0x12);
      _gfortran_transfer_character(&local_38c,0x80733e5,1);
      _gfortran_transfer_character(&local_38c,0x80733f8,0x40);
      _gfortran_transfer_character(&local_38c,0x80733e5,1);
      _gfortran_transfer_character(&local_38c,0x8073438,0x36);
      _gfortran_transfer_character(&local_38c,0x80733e5,1);
      _gfortran_transfer_character(&local_38c,0x807346e,0x19);
      _gfortran_transfer_integer(&local_38c,param_1,4);
      _gfortran_transfer_character(&local_38c,0x8073487,1);
      _gfortran_transfer_character(&local_38c,0x80733e5,1);
      _gfortran_transfer_character(&local_38c,0x8073488,0x36);
      _gfortran_st_write_done(&local_38c);
      wrtout(&DAT_080734c4,local_200,0x80734be,500,4);
      leave_new(0x80734be,4);
    }
  }
  return;
}



void wffreadnpwrec(integer_kind_4_ *ierr,integer_kind_4_ *ikpt,integer_kind_4_ *nband_disk,
                  integer_kind_4_ *npw,integer_kind_4_ *nspinor,wffile_type *wff)

{
  undefined4 local_160;
  integer_kind_4_ local_15c;
  char *local_158;
  undefined4 local_154;
  integer_kind_4_ *local_148;
  
  *ierr = 0;
  if ((wff->accesswff == 0) || ((wff->accesswff == -1 && (wff->master == wff->me)))) {
    local_158 = "wffreadnpwrec.F90";
    local_154 = 0x5f;
    *ierr = 0;
    local_148 = ierr;
    local_160 = 0x20;
    local_15c = wff->unwff;
    _gfortran_st_read(&local_160);
    _gfortran_transfer_integer(&local_160,npw,4);
    _gfortran_transfer_integer(&local_160,nspinor,4);
    _gfortran_transfer_integer(&local_160,nband_disk,4);
    _gfortran_st_read_done(&local_160);
  }
  return;
}



void wffreadskiprec(integer_kind_4_ *ierr,integer_kind_4_ *nrec,wffile_type *wff)

{
  *ierr = 0;
  if ((wff->accesswff == 0) || ((wff->accesswff == -1 && (wff->master == wff->me)))) {
    mvrecord(ierr,nrec,(integer_kind_4_ *)wff);
  }
  return;
}



void wffwritenpwrec(integer_kind_4_ *ierr,integer_kind_4_ *nband_disk,integer_kind_4_ *npw,
                   integer_kind_4_ *nspinor,wffile_type *wff)

{
  undefined4 local_160;
  integer_kind_4_ local_15c;
  char *local_158;
  undefined4 local_154;
  integer_kind_4_ *local_148;
  
  *ierr = 0;
  if ((wff->accesswff == 0) || ((wff->accesswff == -1 && (wff->master == wff->me)))) {
    local_158 = "wffwritenpwrec.F90";
    local_154 = 0x41;
    *ierr = 0;
    local_148 = ierr;
    local_160 = 0x20;
    local_15c = wff->unwff;
    _gfortran_st_write(&local_160);
    _gfortran_transfer_integer(&local_160,npw,4);
    _gfortran_transfer_integer(&local_160,nspinor,4);
    _gfortran_transfer_integer(&local_160,nband_disk,4);
    _gfortran_st_write_done(&local_160);
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps

void metric(int param_1,real_kind_8_ (*param_2) [4] [4],int *param_3,double *param_4,
           real_kind_8_ (*param_5) [4] [4],double *param_6)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  double __x;
  real_kind_8_ (*paarVar6) [4] [4];
  undefined *puVar7;
  longlong local_41c;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_3f0;
  undefined4 local_3ec;
  char *local_3e8;
  undefined4 local_3e4;
  undefined4 local_3c4;
  char *local_3c0;
  undefined4 local_3bc;
  undefined *local_3b0;
  undefined4 local_3ac;
  real_kind_8_ *local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  double local_284;
  double local_27c;
  double local_274;
  real_kind_8_ *local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  real_kind_8_ *local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  real_kind_8_ (*local_23c) [4] [4];
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  int local_224;
  undefined local_220 [500];
  real_kind_8_ angle [4];
  
  *param_6 = ((double)(*param_5)[7] * (double)(*param_5)[3] -
             (double)(*param_5)[6] * (double)(*param_5)[4]) * (double)(*param_5)[2] +
             ((double)(*param_5)[6] * (double)(*param_5)[5] -
             (double)(*param_5)[8] * (double)(*param_5)[3]) * (double)(*param_5)[1] +
             ((double)(*param_5)[8] * (double)(*param_5)[4] -
             (double)(*param_5)[7] * (double)(*param_5)[5]) * (double)(*param_5)[0];
  if (ABS(*param_6) < 0.00000000) {
    local_3e8 = "metric.F90";
    local_3e4 = 0x67;
    local_3b0 = local_220;
    local_3ac = 500;
    local_3c4 = 0;
    local_3ec = 0;
    local_3c0 = "(8a)\n metric : ERROR -";
    local_3bc = 4;
    local_3f0 = 0x5000;
    _gfortran_st_write();
    _gfortran_transfer_character(&local_3f0,0x80734ff,1);
    _gfortran_transfer_character(&local_3f0,0x8073500,0x11);
    _gfortran_transfer_character(&local_3f0,0x80734ff,1);
    _gfortran_transfer_character
              (&local_3f0,"  Input rprim and acell gives vanishing unit cell volume.",0x39);
    _gfortran_transfer_character(&local_3f0,0x80734ff,1);
    _gfortran_transfer_character
              (&local_3f0,
                              
               "  This indicates linear dependency between primitive lattice vectors  Action : correct either rprim or acell in input file.COLL"
               ,0x44);
    _gfortran_transfer_character(&local_3f0,0x80734ff,1);
    _gfortran_transfer_character(&local_3f0,0x8073594,0x37);
    _gfortran_st_write_done();
    wrtout(&DAT_080735d0,local_220,0x80735cb,500,4);
    leave_new();
  }
  if (*param_6 < 0.00000000) {
    local_3e8 = "metric.F90";
    local_3e4 = 0x76;
    local_3b0 = local_220;
    local_3ac = 500;
    local_3c4 = 0;
    local_3ec = 0;
    local_3c0 = "(5a,3(a,3es16.6,a),7a)";
    local_3bc = 0x16;
    local_3f0 = 0x5000;
    _gfortran_st_write();
    _gfortran_transfer_character(&local_3f0,0x80734ff,1);
    _gfortran_transfer_character(&local_3f0,0x8073500,0x11);
    _gfortran_transfer_character(&local_3f0,0x80734ff,1);
    _gfortran_transfer_character
              (&local_3f0,"  Current rprimd gives negative (R1xR2).R3 .   Rprimd =          ",0x2d);
    _gfortran_transfer_character(&local_3f0,0x80734ff,1);
    _gfortran_transfer_character(&local_3f0,0x8073619,10);
    local_234 = 0x219;
    local_22c = 1;
    local_228 = 3;
    local_230 = 1;
    local_23c = param_5;
    local_238 = 0xfffffffc;
    _gfortran_transfer_array(&local_3f0,&local_23c,8,0);
    _gfortran_transfer_character(&local_3f0,0x80734ff,1);
    _gfortran_transfer_character(&local_3f0,0x8073623,10);
    local_24c = 0x219;
    local_244 = 1;
    local_240 = 3;
    local_248 = 1;
    local_254 = *param_5 + 3;
    local_250 = 0xfffffffc;
    _gfortran_transfer_array(&local_3f0,&local_254,8,0);
    _gfortran_transfer_character(&local_3f0,0x80734ff,1);
    _gfortran_transfer_character(&local_3f0,0x8073623,10);
    local_264 = 0x219;
    local_25c = 1;
    local_258 = 3;
    local_260 = 1;
    local_26c = *param_5 + 6;
    local_268 = 0xfffffffc;
    _gfortran_transfer_array(&local_3f0,&local_26c,8,0);
    _gfortran_transfer_character(&local_3f0,0x80734ff,1);
    _gfortran_transfer_character
              (&local_3f0,"  Action : if the cell size and shape are fixed (optcell==0),",0x3d);
    _gfortran_transfer_character(&local_3f0,0x80734ff,1);
    _gfortran_transfer_character(&local_3f0,"   exchange two of the input rprim vectors;",0x2b);
    _gfortran_transfer_character(&local_3f0,0x80734ff,1);
    _gfortran_transfer_character
              (&local_3f0,"   if you are optimizing the cell size and shape (optcell/=0),",0x3e);
    _gfortran_transfer_character(&local_3f0,0x80734ff,1);
    _gfortran_transfer_character
              (&local_3f0,
                              
               "   maybe the move was too large, and you might try to decrease strprecon.(a,a) Real(R)+Recip(G) space primitive vectors, cartesian coordinates (Bohr,Bohr^-1):"
               ,0x49);
    _gfortran_st_write_done();
    wrtout(&DAT_080735d0,local_220,0x80735cb,500,4);
    leave_new();
  }
  paarVar6 = param_2;
  matr3inv(param_5,param_2);
  if (-1 < *param_3) {
    local_3e8 = "metric.F90";
    local_3e4 = 0x81;
    local_3b0 = local_220;
    local_3ac = 500;
    local_3c4 = 0;
    local_3ec = 0;
    local_3c0 = 
    "(a,a) Real(R)+Recip(G) space primitive vectors, cartesian coordinates (Bohr,Bohr^-1):";
    local_3bc = 5;
    local_3f0 = 0x5000;
    _gfortran_st_write(&local_3f0,paarVar6);
    _gfortran_transfer_character(&local_3f0,0x807372a,0x12);
    local_414 = 0x807373c;
    _gfortran_transfer_character(&local_3f0,0x807373c,0x3e);
    _gfortran_st_write_done(&local_3f0,local_414);
    local_40c = 4;
    local_410 = 500;
    local_414 = 0x80735cb;
    puVar7 = local_220;
    wrtout(param_3,puVar7,0x80735cb,500,4);
    local_224 = 1;
    do {
      local_3e8 = "metric.F90";
      local_3e4 = 0x86;
      local_3b0 = local_220;
      local_3ac = 500;
      local_3c4 = 0;
      local_3ec = 0;
      local_3c0 = 
      "(1x,a,i1,a,3f11.7,2x,a,i1,a,3f11.7)R()=G((a,1p,e15.7,a) Unit cell volume ucvol= bohr^3(a,3es16.8,a) Angles (23,13,12)= degrees"
      ;
      local_3bc = 0x23;
      local_3f0 = 0x5000;
      _gfortran_st_write(&local_3f0,puVar7,local_414,local_410,local_40c);
      _gfortran_transfer_character(&local_3f0,0x807379f,2);
      _gfortran_transfer_integer(&local_3f0,&local_224,4);
      _gfortran_transfer_character(&local_3f0,0x80737a1,2);
      iVar3 = local_224 * 3;
      iVar4 = 1;
      while (iVar4 < 4) {
        local_274 = (double)(*param_5)[iVar4 + iVar3 + -4] + 0.00000000;
        _gfortran_transfer_real(&local_3f0,&local_274,8);
        iVar4 = iVar4 + 1;
      }
      _gfortran_transfer_character(&local_3f0,0x80737a3,2);
      _gfortran_transfer_integer(&local_3f0,&local_224,4);
      local_414 = 2;
      local_41c = CONCAT44(0x80737a1,&local_3f0);
      _gfortran_transfer_character(&local_3f0,0x80737a1,2);
      iVar3 = local_224 * 3;
      iVar4 = 1;
      while (iVar4 < 4) {
        local_27c = (double)(*param_2)[iVar4 + iVar3 + -4] + 0.00000000;
        local_414 = 8;
        local_41c = ZEXT48(&local_27c) << 0x20;
        _gfortran_transfer_real();
        iVar4 = iVar4 + 1;
      }
      _gfortran_st_write_done(&local_3f0,(int)((ulonglong)local_41c >> 0x20),local_414);
      local_40c = 4;
      local_410 = 500;
      local_414 = 0x80735cb;
      puVar7 = local_220;
      wrtout();
      bVar5 = local_224 != 3;
      local_224 = local_224 + 1;
    } while (bVar5);
    local_3e8 = "metric.F90";
    local_3e4 = 0x8a;
    local_3b0 = local_220;
    local_3ac = 500;
    local_3c4 = 0;
    local_3ec = 0;
    local_3c0 = 
    "(a,1p,e15.7,a) Unit cell volume ucvol= bohr^3(a,3es16.8,a) Angles (23,13,12)= degrees";
    local_3bc = 0xe;
    local_3f0 = 0x5000;
    _gfortran_st_write(&local_3f0,puVar7,local_414,local_410,local_40c);
    _gfortran_transfer_character(&local_3f0,0x80737b3,0x18);
    local_284 = *param_6 + 0.00000000;
    _gfortran_transfer_real(&local_3f0,&local_284,8);
    local_414 = 0x80737cb;
    _gfortran_transfer_character(&local_3f0,0x80737cb,7);
    _gfortran_st_write_done(&local_3f0,local_414);
    wrtout(param_3,local_220,0x80735cb,500,4);
    wrtout(&DAT_080735d0,local_220,0x80735cb,500,4);
  }
  angle[3]._4_4_ = 1;
  do {
    __x = (double)(*param_5)[(angle[3]._4_4_ + -1) * 3];
    dVar1 = (double)(*param_5)[angle[3]._4_4_ * 3 + -2];
    dVar2 = (double)(*param_5)[(angle[3]._4_4_ + 1) * 3 + -4];
    iVar3 = 1;
    while (iVar3 < 4) {
      param_4[iVar3 * 3 + angle[3]._4_4_ + -4] =
           (double)(*param_5)[iVar3 * 3 + -1] * dVar2 +
           (double)(*param_5)[iVar3 * 3 + -2] * dVar1 + (double)(*param_5)[(iVar3 + -1) * 3] * __x;
      iVar3 = iVar3 + 1;
    }
    bVar5 = angle[3]._4_4_ != 3;
    angle[3]._4_4_ = angle[3]._4_4_ + 1;
  } while (bVar5);
  angle[3]._4_4_ = 1;
  do {
    __x = (double)(*param_2)[(angle[3]._4_4_ + -1) * 3];
    dVar1 = (double)(*param_2)[angle[3]._4_4_ * 3 + -2];
    dVar2 = (double)(*param_2)[(angle[3]._4_4_ + 1) * 3 + -4];
    iVar3 = 1;
    while (iVar3 < 4) {
      *(double *)(param_1 + (iVar3 * 3 + angle[3]._4_4_ + -4) * 8) =
           (double)(*param_2)[iVar3 * 3 + -1] * dVar2 +
           (double)(*param_2)[iVar3 * 3 + -2] * dVar1 + (double)(*param_2)[(iVar3 + -1) * 3] * __x;
      iVar3 = iVar3 + 1;
    }
    bVar5 = angle[3]._4_4_ != 3;
    angle[3]._4_4_ = angle[3]._4_4_ + 1;
  } while (bVar5);
  if (-1 < *param_3) {
    __x = acos(param_4[7] / SQRT(param_4[8] * param_4[4]));
    angle[0] = (real_kind_8_)((__x / 6.28318531) * 360.00000000);
    __x = acos(param_4[6] / SQRT(param_4[8] * *param_4));
    angle[1] = (real_kind_8_)((__x / 6.28318531) * 360.00000000);
    __x = param_4[3] / SQRT(param_4[4] * *param_4);
    local_414 = (undefined4)((ulonglong)__x >> 0x20);
    __x = acos(__x);
    angle[2] = (real_kind_8_)((__x / 6.28318531) * 360.00000000);
    local_3e8 = "metric.F90";
    local_3e4 = 0xa3;
    local_3b0 = local_220;
    local_3ac = 500;
    local_3c4 = 0;
    local_3ec = 0;
    local_3c0 = "(a,3es16.8,a) Angles (23,13,12)= degrees";
    local_3bc = 0xd;
    local_3f0 = 0x5000;
    _gfortran_st_write(&local_3f0,local_414);
    _gfortran_transfer_character(&local_3f0,0x80737df,0x13);
    local_294 = 0x219;
    local_28c = 1;
    local_288 = 3;
    local_290 = 1;
    local_29c = angle;
    local_298 = 0xffffffff;
    _gfortran_transfer_array(&local_3f0,&local_29c,8,0);
    local_414 = 0x80737f2;
    _gfortran_transfer_character(&local_3f0,0x80737f2,8);
    _gfortran_st_write_done(&local_3f0,local_414);
    wrtout(param_3,local_220,0x80735cb,500,4);
    wrtout(&DAT_080735d0,local_220,0x80735cb,500,4);
  }
  return;
}



void sym2cart(undefined4 param_1,int *param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined local_104 [72];
  undefined8 local_bc [9];
  double local_74 [9];
  integer_kind_4_ isym;
  
  iVar1 = *param_2;
  isym = 1;
  if (0 < iVar1) {
    do {
      iVar3 = 1;
      while (iVar3 < 4) {
        iVar2 = 1;
        while (iVar2 < 4) {
          local_74[iVar2 + iVar3 * 3 + -4] =
               (double)*(int *)(param_4 + (iVar2 + iVar3 * 3 + isym * 9 + -0xd) * 4);
          iVar2 = iVar2 + 1;
        }
        iVar3 = iVar3 + 1;
      }
      dgemm_(&DAT_08073838,&DAT_08073838,&DAT_08073820,&DAT_08073820,&DAT_08073820,&DAT_08073830,
             param_3,&DAT_08073820,local_74,&DAT_08073820,&DAT_08073828,local_104,&DAT_08073820,1,1)
      ;
      dgemm_(&DAT_08073838,&DAT_08073838,&DAT_08073820,&DAT_08073820,&DAT_08073820,&DAT_08073830,
             local_104,&DAT_08073820,param_1,&DAT_08073820,&DAT_08073828,local_bc,&DAT_08073820,1,1)
      ;
      iVar3 = 1;
      while (iVar3 < 4) {
        iVar2 = 1;
        while (iVar2 < 4) {
          *(undefined8 *)(param_5 + (iVar2 + iVar3 * 3 + isym * 9 + -0xd) * 8) =
               local_bc[iVar2 + iVar3 * 3 + -4];
          iVar2 = iVar2 + 1;
        }
        iVar3 = iVar3 + 1;
      }
      bVar4 = isym != iVar1;
      isym = isym + 1;
    } while (bVar4);
  }
  return;
}



void canon9(real_kind_8_ *num,real_kind_8_ *red,real_kind_8_ *shift)

{
  double dVar1;
  ushort in_FPUStatusWord;
  
  if ((double)*num <= 0.00000000) {
    dVar1 = -(((double)*num - 0.50000000) - 0.00000000);
    do {
      dVar1 = dVar1 - (dVar1 / 1.00000000) * 1.00000000;
    } while ((in_FPUStatusWord & 0x400) != 0);
    *(double *)red = (0.50000000 - dVar1) + 0.00000000;
  }
  else {
    dVar1 = ((double)*num + 0.50000000) - 0.00000000;
    do {
      dVar1 = dVar1 - (dVar1 / 1.00000000) * 1.00000000;
    } while ((in_FPUStatusWord & 0x400) != 0);
    *(double *)red = (dVar1 - 0.50000000) + 0.00000000;
  }
  if (ABS((double)*red) < 0.00000000) {
    *red = 0.00000000;
  }
  *(double *)shift = (double)*num - (double)*red;
  return;
}



void int2char4(int *param_1,undefined4 param_2)

{
  undefined4 local_354;
  undefined4 local_350;
  char *local_34c;
  undefined4 local_348;
  undefined4 local_328;
  char *local_324;
  undefined4 local_320;
  undefined *local_314;
  undefined4 local_310;
  undefined local_200 [508];
  
  if ((*param_1 < 0) || (9999 < *param_1)) {
    local_34c = "int2char4.F90";
    local_348 = 0x41;
    local_314 = local_200;
    local_310 = 500;
    local_328 = 0;
    local_350 = 0;
    local_324 = "(a,a,a,a,a,a,i10)\n int2char4: ERROR -";
    local_320 = 0x11;
    local_354 = 0x5000;
    _gfortran_st_write(&local_354);
    _gfortran_transfer_character(&local_354,0x807386f,1);
    _gfortran_transfer_character(&local_354,0x8073870,0x13);
    _gfortran_transfer_character(&local_354,0x807386f,1);
    _gfortran_transfer_character
              (&local_354,"  The integer argument should be between 0 and 9999, while  it is COLL",
               0x3a);
    _gfortran_transfer_character(&local_354,0x807386f,1);
    _gfortran_transfer_character(&local_354,0x80738be,8);
    _gfortran_transfer_integer(&local_354,param_1,4);
    _gfortran_st_write_done(&local_354);
    wrtout(&DAT_080738cc,local_200,0x80738c6,500,4);
    leave_new(0x80738c6,4);
  }
  if (*param_1 < 10) {
    local_34c = "int2char4.F90";
    local_348 = 0x46;
    local_314 = (undefined *)param_2;
    local_310 = 4;
    local_328 = 0;
    local_350 = 0;
    local_324 = &DAT_080738d0;
    local_320 = 10;
    local_354 = 0x5000;
    _gfortran_st_write(&local_354);
    _gfortran_transfer_integer(&local_354,param_1,4);
    _gfortran_st_write_done(&local_354);
  }
  else {
    if (*param_1 < 100) {
      local_34c = "int2char4.F90";
      local_348 = 0x48;
      local_314 = (undefined *)param_2;
      local_310 = 4;
      local_328 = 0;
      local_350 = 0;
      local_324 = &DAT_080738da;
      local_320 = 9;
      local_354 = 0x5000;
      _gfortran_st_write(&local_354);
      _gfortran_transfer_integer(&local_354,param_1,4);
      _gfortran_st_write_done(&local_354);
    }
    else {
      if (*param_1 < 1000) {
        local_34c = "int2char4.F90";
        local_348 = 0x4a;
        local_314 = (undefined *)param_2;
        local_310 = 4;
        local_328 = 0;
        local_350 = 0;
        local_324 = &DAT_080738e3;
        local_320 = 8;
        local_354 = 0x5000;
        _gfortran_st_write(&local_354);
        _gfortran_transfer_integer(&local_354,param_1,4);
        _gfortran_st_write_done(&local_354);
      }
      else {
        local_34c = "int2char4.F90";
        local_348 = 0x4c;
        local_314 = (undefined *)param_2;
        local_310 = 4;
        local_328 = 0;
        local_350 = 0;
        local_324 = &DAT_080738eb;
        local_320 = 4;
        local_354 = 0x5000;
        _gfortran_st_write(&local_354);
        _gfortran_transfer_integer(&local_354,param_1,4);
        _gfortran_st_write_done(&local_354);
      }
    }
  }
  return;
}



void mati3inv(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_3b0;
  undefined4 local_3ac;
  char *local_3a8;
  undefined4 local_3a4;
  undefined4 local_384;
  char *local_380;
  undefined4 local_37c;
  undefined *local_370;
  undefined4 local_36c;
  int *local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  int local_238 [9];
  undefined local_214 [500];
  integer_kind_4_ dd;
  
  local_238[0] = param_1[4] * param_1[8] - param_1[7] * param_1[5];
  local_238[1] = param_1[5] * param_1[6] - param_1[8] * param_1[3];
  local_238[2] = param_1[3] * param_1[7] - param_1[6] * param_1[4];
  local_238[3] = param_1[2] * param_1[7] - param_1[8] * param_1[1];
  local_238[4] = *param_1 * param_1[8] - param_1[6] * param_1[2];
  local_238[5] = param_1[1] * param_1[6] - param_1[7] * *param_1;
  local_238[6] = param_1[1] * param_1[5] - param_1[4] * param_1[2];
  local_238[7] = param_1[2] * param_1[3] - param_1[5] * *param_1;
  local_238[8] = *param_1 * param_1[4] - param_1[3] * param_1[1];
  dd = *param_1 * local_238[0] + local_238[1] * param_1[1] + local_238[2] * param_1[2];
  if (dd == 0) {
    local_3a8 = "mati3inv.F90";
    local_3a4 = 0x5a;
    local_370 = local_214;
    local_36c = 500;
    local_384 = 0;
    local_3ac = 0;
    local_380 = 
    "(5a,2x,9i5,a)\n mati3inv : BUG -  Attempting to invert integer array   ==> determinant is zero.COLL"
    ;
    local_37c = 0xd;
    local_3b0 = 0x5000;
    _gfortran_st_write(&local_3b0);
    _gfortran_transfer_character(&local_3b0,0x807390a,1);
    _gfortran_transfer_character(&local_3b0,0x807390b,0x11);
    _gfortran_transfer_character(&local_3b0,0x807390a,1);
    _gfortran_transfer_character(&local_3b0,0x807391c,0x24);
    _gfortran_transfer_character(&local_3b0,0x807390a,1);
    local_254 = 0x10a;
    local_24c = 1;
    local_248 = 3;
    local_250 = 1;
    local_240 = 1;
    local_23c = 3;
    local_244 = 3;
    local_25c = param_1;
    local_258 = 0xfffffffc;
    _gfortran_transfer_array(&local_3b0,&local_25c,4,0);
    _gfortran_transfer_character(&local_3b0,0x8073940,0x1b);
    _gfortran_st_write_done(&local_3b0);
    wrtout(&DAT_08073960,local_214,0x807395b,500,4);
    leave_new(0x807395b,4);
  }
  else {
    iVar1 = 1;
    while (iVar1 < 4) {
      iVar2 = 1;
      while (iVar2 < 4) {
        *(int *)(param_2 + (iVar2 + iVar1 * 3 + -4) * 4) = local_238[iVar2 + iVar1 * 3 + -4] / dd;
        iVar2 = iVar2 + 1;
      }
      iVar1 = iVar1 + 1;
    }
  }
  return;
}



void matr3inv(real_kind_8_ (*aa) [4] [4],real_kind_8_ (*ait) [4] [4])

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  real_kind_8_ dd;
  real_kind_8_ t1;
  real_kind_8_ t2;
  real_kind_8_ t3;
  
  dVar1 = (double)(*aa)[8] * (double)(*aa)[4] - (double)(*aa)[7] * (double)(*aa)[5];
  dVar2 = (double)(*aa)[6] * (double)(*aa)[5] - (double)(*aa)[8] * (double)(*aa)[3];
  dVar3 = (double)(*aa)[7] * (double)(*aa)[3] - (double)(*aa)[6] * (double)(*aa)[4];
  dVar4 = 1.00000000 /
          ((double)(*aa)[2] * dVar3 + (double)(*aa)[1] * dVar2 + (double)(*aa)[0] * dVar1);
  *(double *)*ait = dVar1 * dVar4;
  *(double *)(*ait + 1) = dVar2 * dVar4;
  *(double *)(*ait + 2) = dVar3 * dVar4;
  *(double *)(*ait + 3) =
       ((double)(*aa)[7] * (double)(*aa)[2] - (double)(*aa)[8] * (double)(*aa)[1]) * dVar4;
  *(double *)(*ait + 4) =
       ((double)(*aa)[8] * (double)(*aa)[0] - (double)(*aa)[6] * (double)(*aa)[2]) * dVar4;
  *(double *)(*ait + 5) =
       ((double)(*aa)[6] * (double)(*aa)[1] - (double)(*aa)[7] * (double)(*aa)[0]) * dVar4;
  *(double *)(*ait + 6) =
       ((double)(*aa)[5] * (double)(*aa)[1] - (double)(*aa)[4] * (double)(*aa)[2]) * dVar4;
  *(double *)(*ait + 7) =
       ((double)(*aa)[3] * (double)(*aa)[2] - (double)(*aa)[5] * (double)(*aa)[0]) * dVar4;
  *(double *)(*ait + 8) =
       ((double)(*aa)[4] * (double)(*aa)[0] - (double)(*aa)[3] * (double)(*aa)[1]) * dVar4;
  return;
}



void mvrecord(integer_kind_4_ *ierr,integer_kind_4_ *nrec,integer_kind_4_ *unitfile)

{
  int iVar1;
  bool bVar2;
  undefined4 local_180;
  integer_kind_4_ local_17c;
  char *local_178;
  undefined4 local_174;
  integer_kind_4_ *local_168;
  undefined4 local_2c;
  integer_kind_4_ local_28;
  char *local_24;
  undefined4 local_20;
  integer_kind_4_ *local_14;
  integer_kind_4_ irec;
  
  if (*nrec < 1) {
    iVar1 = -*nrec;
    irec = 1;
    if (iVar1 == 1 || SBORROW4(1,iVar1) != *nrec + 1 < 0) {
      do {
        local_24 = "mvrecord.F90";
        local_20 = 0x41;
        *ierr = 0;
        local_14 = ierr;
        local_2c = 0x20;
        local_28 = *unitfile;
        _gfortran_st_backspace(&local_2c);
        bVar2 = irec != iVar1;
        irec = irec + 1;
      } while (bVar2);
    }
  }
  else {
    iVar1 = *nrec;
    irec = 1;
    if (0 < iVar1) {
      do {
        local_178 = "mvrecord.F90";
        local_174 = 0x3c;
        *ierr = 0;
        local_168 = ierr;
        local_180 = 0x20;
        local_17c = *unitfile;
        _gfortran_st_read(&local_180);
        _gfortran_st_read_done(&local_180);
        bVar2 = irec != iVar1;
        irec = irec + 1;
      } while (bVar2);
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0806d54a)
// WARNING: Removing unreachable block (ram,0x0806e2c7)
// WARNING: Could not reconcile some variable overlaps

void print_ij(int param_1,int *param_2,uint *param_3,int *param_4,int *param_5,int param_6,
             int *param_7,int param_8,double *param_9,int *param_10)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  size_t __size;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  undefined4 local_408;
  undefined4 local_404;
  char *local_400;
  undefined4 local_3fc;
  undefined4 local_3dc;
  undefined *local_3d8;
  undefined4 local_3d4;
  undefined *local_3c8;
  undefined4 local_3c4;
  void *local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  uint local_2a8;
  undefined4 local_2a4;
  uint local_2a0;
  void *local_29c;
  undefined4 local_298;
  undefined4 local_294;
  uint local_290;
  undefined4 local_28c;
  uint local_288;
  double local_284;
  void *local_278;
  uint local_274;
  undefined4 local_270;
  int local_26c;
  int local_268;
  uint local_264;
  uint local_260;
  int local_25c;
  uint local_258;
  int local_254;
  undefined local_250 [500];
  real_kind_8_ b_ij [1];
  int local_4c;
  integer_kind_4_ ubound_0;
  integer_kind_4_ ilmn;
  integer_kind_4_ ilmn1;
  integer_kind_4_ j0lmn;
  integer_kind_4_ jlmn;
  integer_kind_4_ jlmn1;
  integer_kind_4_ klmn;
  uint local_28;
  
  iVar2 = *param_5 + 1;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  iVar6 = *param_2;
  b_ij[0]._0_4_ = (void *)0x0;
  local_278 = (void *)0x0;
  local_28 = *param_3;
  if (0xc < (int)local_28) {
    local_28 = 0xc;
  }
  if (-1 < *param_5) {
    local_28 = 0;
    iVar3 = 1;
    while (iVar3 <= (int)(*param_3 * iVar2)) {
      if (*(int *)(param_6 + (iVar3 + -1) * 4) == *param_5) {
        local_28 = local_28 + 1;
      }
      iVar3 = iVar3 + 1;
    }
  }
  local_270 = 0x21a;
  local_268 = 1;
  local_264 = local_28;
  local_26c = 1;
  local_260 = 0;
  if (-1 < (int)local_28) {
    local_260 = local_28;
  }
  local_25c = 1;
  local_258 = local_28;
  uVar5 = 0;
  if (-1 < (int)local_28) {
    uVar5 = local_28;
  }
  local_274 = ~local_260;
  if ((int)local_28 < 1) {
    __size = 0;
  }
  else {
    __size = uVar5 * local_260 * 8;
  }
  if ((int)__size < 0) {
    __size = _gfortran_runtime_error
                       ("Attempt to allocate negative amount of memory. Possible integer overflow");
  }
  if ((int)__size < 1) {
    __size = 1;
  }
  pvVar4 = malloc(__size);
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)_gfortran_os_error("Out of memory");
  }
  uVar5 = *param_3;
  uVar1 = *param_3;
  if ((int)((*param_3 + 1) * *param_3) < 2) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)((*param_3 + 1) * *param_3) / 2;
  }
  local_4c = 1;
  if ((int)((*param_3 + 1) * *param_3) < 2) {
    __size = 0;
  }
  else {
    __size = iVar2 * 8;
  }
  local_278 = pvVar4;
  if (b_ij[0]._0_4_ == (void *)0x0) {
    if ((int)__size < 0) {
      __size = _gfortran_runtime_error
                         ("Attempt to allocate negative amount of memory. Possible integer overflow"
                         );
    }
    if ((int)__size < 1) {
      __size = 1;
    }
    pvVar4 = malloc(__size);
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)_gfortran_os_error("Out of memory");
    }
    b_ij[0]._4_4_ = -1;
    b_ij[0]._0_4_ = pvVar4;
    if (*param_7 != 0) {
      while (local_4c <= (int)((uVar1 + 1) * uVar5) / 2) {
        *(undefined8 *)((int)pvVar4 + (local_4c + -1) * 8) = 0;
        local_4c = local_4c + 1;
      }
      iVar2 = *param_2;
      klmn = 1;
      if (0 < iVar2) {
        do {
          *(undefined8 *)((int)pvVar4 + (*(int *)(param_8 + (klmn + -1) * 4) + -1) * 8) =
               *(undefined8 *)(param_1 + (klmn + -1) * 8);
          bVar7 = klmn != iVar2;
          klmn = klmn + 1;
        } while (bVar7);
      }
      goto LAB_0806d6ed;
    }
  }
  else {
    _gfortran_runtime_error_at
              ("At line 95 of file print_ij.F90",
               "Attempting to allocate already allocated array \'%s\'",&DAT_08073a2c);
  }
  iVar2 = 1;
  while (iVar2 <= iVar6) {
    *(undefined8 *)((int)b_ij[0]._0_4_ + (iVar2 + b_ij[0]._4_4_) * 8) =
         *(undefined8 *)(param_1 + (iVar2 + -1) * 8);
    iVar2 = iVar2 + 1;
  }
LAB_0806d6ed:
  jlmn1 = 0;
  uVar5 = *param_3;
  jlmn = 1;
  if (0 < (int)uVar5) {
    do {
      if (*param_5 < 0) {
        jlmn1 = jlmn;
        if (jlmn <= (int)local_28) {
LAB_0806d746:
          ilmn1 = 0;
          ilmn = 1;
          if (0 < jlmn) {
            do {
              if (*param_5 < 0) {
                ilmn1 = ilmn;
LAB_0806d7b4:
                *(undefined8 *)
                 ((int)local_278 + (local_26c * jlmn1 + local_260 * ilmn1 + local_274) * 8) =
                     *(undefined8 *)
                      ((int)b_ij[0]._0_4_ + (((jlmn + -1) * jlmn) / 2 + ilmn + b_ij[0]._4_4_) * 8);
                *(undefined8 *)
                 ((int)local_278 + (local_26c * ilmn1 + local_260 * jlmn1 + local_274) * 8) =
                     *(undefined8 *)
                      ((int)local_278 + (local_26c * jlmn1 + local_260 * ilmn1 + local_274) * 8);
              }
              else {
                if (*(int *)(param_6 + (ilmn + -1) * 4) == *param_5) {
                  ilmn1 = ilmn1 + 1;
                  goto LAB_0806d7b4;
                }
              }
              bVar7 = ilmn != jlmn;
              ilmn = ilmn + 1;
            } while (bVar7);
          }
        }
      }
      else {
        if (*(int *)(param_6 + (jlmn + -1) * 4) == *param_5) {
          jlmn1 = jlmn1 + 1;
          goto LAB_0806d746;
        }
      }
      bVar7 = jlmn != uVar5;
      jlmn = jlmn + 1;
    } while (bVar7);
  }
  if (b_ij[0]._0_4_ == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 129 of file print_ij.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08073a2c);
  }
  free(b_ij[0]._0_4_);
  b_ij[0]._0_4_ = (void *)0x0;
  iVar2 = local_25c;
  if (*param_10 == 2) {
    while (iVar2 <= (int)local_258) {
      iVar6 = local_268;
      while (iVar6 <= (int)local_264) {
        *(double *)((int)local_278 + (iVar6 * local_26c + local_260 * iVar2 + local_274) * 8) =
             *(double *)((int)local_278 + (local_26c * iVar6 + local_260 * iVar2 + local_274) * 8) *
             27.21138450;
        iVar6 = iVar6 + 1;
      }
      iVar2 = iVar2 + 1;
    }
  }
  if (((int)*param_3 < 0xd) || (-1 < *param_5)) {
    ilmn = 1;
    if (0 < (int)local_28) {
      do {
        local_400 = "print_ij.F90";
        local_3fc = 0x87;
        local_3c8 = local_250;
        local_3c4 = 500;
        local_3dc = 0;
        local_404 = 0;
        local_3d8 = &DAT_08073aaa;
        local_3d4 = 0xe;
        local_408 = 0x5000;
        _gfortran_st_write(&local_408);
        local_294 = 0x219;
        local_28c = 1;
        local_288 = local_28;
        local_290 = local_260;
        local_29c = (void *)((int)local_278 +
                            (local_26c * (ilmn - local_268) + local_260 * (1 - local_25c)) * 8);
        local_298 = 0;
        _gfortran_transfer_array(&local_408,&local_29c,8,0);
        _gfortran_st_write_done(&local_408);
        wrtout(&DAT_08073abc,local_250,&DAT_08073ab8,500,4);
        if (*param_4 == 2) {
          wrtout(&DAT_08073ac0,local_250,&DAT_08073ab8,500,4);
        }
        bVar7 = ilmn != local_28;
        ilmn = ilmn + 1;
      } while (bVar7);
    }
  }
  else {
    ilmn = 1;
    if (0 < (int)local_28) {
      do {
        local_400 = "print_ij.F90";
        local_3fc = 0x8d;
        local_3c8 = local_250;
        local_3c4 = 500;
        local_3dc = 0;
        local_404 = 0;
        local_3d8 = &DAT_08073ac4;
        local_3d4 = 0xf;
        local_408 = 0x5000;
        _gfortran_st_write(&local_408);
        local_2ac = 0x219;
        local_2a4 = 1;
        local_2a0 = local_28;
        local_2a8 = local_260;
        local_2b4 = (void *)((int)local_278 +
                            (local_26c * (ilmn - local_268) + local_260 * (1 - local_25c)) * 8);
        local_2b0 = 0;
        _gfortran_transfer_array(&local_408,&local_2b4,8,0);
        _gfortran_transfer_character(&local_408,&DAT_08073ad3,4);
        _gfortran_st_write_done(&local_408);
        wrtout(&DAT_08073abc,local_250,&DAT_08073ab8,500,4);
        if (*param_4 == 2) {
          wrtout(&DAT_08073ac0,local_250,&DAT_08073ab8,500,4);
        }
        bVar7 = ilmn != local_28;
        ilmn = ilmn + 1;
      } while (bVar7);
    }
    local_400 = "print_ij.F90";
    local_3fc = 0x91;
    local_3c8 = local_250;
    local_3c4 = 500;
    local_3dc = 0;
    local_404 = 0;
    local_3d8 = &DAT_08073ad7;
    local_3d4 = 0xb;
    local_408 = 0x5000;
    _gfortran_st_write(&local_408);
    _gfortran_transfer_character(&local_408,&DAT_08073ae2,10);
    _gfortran_transfer_integer(&local_408,&DAT_08073aec,4);
    _gfortran_transfer_character
              (&local_408,"  components have been written...(5a,i3,a,f6.1,7a) print_ij: WARNING -\n"
               ,0x21);
    _gfortran_st_write_done(&local_408);
    wrtout(&DAT_08073abc,local_250,&DAT_08073ab8,500,4);
    if (*param_4 == 2) {
      wrtout(&DAT_08073ac0,local_250,&DAT_08073ab8,500,4);
    }
  }
  if (0.00000000 < *param_9) {
    local_284 = *param_9;
    if (*param_10 == 2) {
      local_284 = local_284 * 27.21138450;
    }
    local_254 = 0;
    iVar2 = local_25c;
    while (iVar2 <= (int)local_258) {
      iVar6 = local_268;
      while (iVar6 <= (int)local_264) {
        if (local_284 <=
            ABS(*(double *)
                 ((int)local_278 + (local_26c * iVar6 + local_260 * iVar2 + local_274) * 8))) {
          local_254 = local_254 + 1;
        }
        iVar6 = iVar6 + 1;
      }
      iVar2 = iVar2 + 1;
    }
    if (0 < local_254) {
      local_400 = "print_ij.F90";
      local_3fc = 0xa0;
      local_3c8 = local_250;
      local_3c4 = 500;
      local_3dc = 0;
      local_404 = 0;
      local_3d8 = (undefined *)0x8073b11;
      local_3d4 = 0x11;
      local_408 = 0x5000;
      _gfortran_st_write(&local_408);
      _gfortran_transfer_character(&local_408,0x8073b22,0x14);
      _gfortran_transfer_character(&local_408,0x8073b36,1);
      _gfortran_transfer_character(&local_408,"  The matrix seems to have high value(s) !  (",0x2a);
      _gfortran_transfer_character(&local_408,0x8073b36,1);
      _gfortran_transfer_character(&local_408,0x8073b62,3);
      _gfortran_transfer_integer(&local_408,&local_254,4);
      _gfortran_transfer_character
                (&local_408,
                                  
                 " components have a value greater than ).  It can cause instabilities during SCF convergence.  Action: you should check your atomic dataset (psp file)"
                 ,0x26);
      _gfortran_transfer_real(&local_408,&local_284,8);
      _gfortran_transfer_character(&local_408,0x8073b8e,2);
      _gfortran_transfer_character(&local_408,0x8073b36,1);
      _gfortran_transfer_character(&local_408,0x8073b90,0x34);
      _gfortran_transfer_character(&local_408,0x8073b36,1);
      _gfortran_transfer_character(&local_408,0x8073bc4,0x39);
      _gfortran_transfer_character(&local_408,0x8073b36,1);
      _gfortran_transfer_character
                (&local_408,
                                  
                 "          and look for \"high\" projector functions...At line 166 of file print_ij.F90"
                 ,0x34);
      _gfortran_st_write_done(&local_408);
      wrtout(&DAT_08073abc,local_250,&DAT_08073ab8,500,4);
      if (*param_4 == 2) {
        wrtout(&DAT_08073ac0,local_250,&DAT_08073ab8,500,4);
      }
    }
  }
  if (local_278 == (void *)0x0) {
    _gfortran_runtime_error_at(0x8073c34,"Attempt to DEALLOCATE unallocated \'%s\'","prtab");
  }
  free(local_278);
  local_278 = (void *)0x0;
  if (b_ij[0]._0_4_ != (void *)0x0) {
    free(b_ij[0]._0_4_);
  }
  return;
}



void herald_(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  char *local_1d0;
  undefined4 local_1cc;
  int *local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  void *local_94;
  int local_90;
  void *local_8c;
  int local_88;
  void *local_84;
  int local_80;
  void *local_7c;
  int local_78;
  void *local_74;
  int local_70;
  void *local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined local_3f [5];
  undefined local_3a [10];
  undefined local_30 [8];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_1f8 = 0x8073c60;
  local_1f4 = 0x41;
  local_1d0 = "(/,a,a,a,a,a).Version  of  (a,a,a,/)";
  local_1cc = 0xd;
  local_200 = 0x1000;
  local_1fc = *param_3;
  _gfortran_st_write(&local_200);
  _gfortran_transfer_character(&local_200,0x8073c78,9);
  _gfortran_transfer_character(&local_200,param_2,6);
  _gfortran_transfer_character(&local_200,0x8073c81,4);
  _gfortran_string_trim(&local_68,&local_6c,0x18,param_1);
  _gfortran_transfer_character(&local_200,local_6c,local_68);
  if ((0 < local_68) && (local_6c != (void *)0x0)) {
    free(local_6c);
  }
  _gfortran_transfer_character(&local_200,0x8073c85,1);
  _gfortran_st_write_done(&local_200);
  local_1f8 = 0x8073c60;
  local_1f4 = 0x47;
  local_1d0 = "(a,a,a,/)";
  local_1cc = 9;
  local_200 = 0x1000;
  local_1fc = *param_3;
  _gfortran_st_write(&local_200);
  _gfortran_transfer_character
            (&local_200,
                          
             ".(sequential version, prepared for a i686_linux_UNKNOWN computer) (a,/,a,a,a,/,a,/,a,/,a,/)"
             ,0x25);
  _gfortran_transfer_character(&local_200,0x8073cb5,0x12);
  _gfortran_transfer_character(&local_200,0x8073cc7,0xb);
  _gfortran_st_write_done(&local_200);
  local_1f8 = 0x8073c60;
  local_1f4 = 0x50;
  local_1d0 = "(a,/,a,a,a,/,a,/,a,/,a,/)";
  local_1cc = 0x19;
  local_200 = 0x1000;
  local_1fc = *param_3;
  _gfortran_st_write(&local_200);
  _gfortran_transfer_character
            (&local_200,
             ".Copyright (C) 1998-2007 ABINIT group .  comes with ABSOLUTELY NO WARRANTY.",0x28);
  _gfortran_transfer_character(&local_200,0x8073c85,1);
  _gfortran_string_trim(&local_70,&local_74,0x18,param_1);
  _gfortran_transfer_character(&local_200,local_74,local_70);
  if ((0 < local_70) && (local_74 != (void *)0x0)) {
    free(local_74);
  }
  _gfortran_transfer_character(&local_200,0x8073d14,0x23);
  _gfortran_transfer_character
            (&local_200,
                          
             " It is free software, and you are welcome to redistribute it under certain conditions (GNU General Public License,"
             ,0x3c);
  _gfortran_transfer_character(&local_200,0x8073d74,0x36);
  _gfortran_transfer_character
            (&local_200,
                          
             " see ~abinit/COPYING or http://www.gnu.org/copyleft/gpl.txt).ABINIT-GW(a,a,a,/,a,/,a,/)"
             ,0x3d);
  _gfortran_st_write_done(&local_200);
  _gfortran_string_trim(&local_78,&local_7c,0x18,param_1);
  iVar1 = _gfortran_compare_string(local_78,local_7c,9,0x8073de9);
  if ((0 < local_78) && (local_7c != (void *)0x0)) {
    free(local_7c);
  }
  if (iVar1 == 0) {
    local_1f8 = 0x8073c60;
    local_1f4 = 0x56;
    local_1d0 = "(a,a,a,/,a,/,a,/)";
    local_1cc = 0x11;
    local_200 = 0x1000;
    local_1fc = *param_3;
    _gfortran_st_write(&local_200);
    _gfortran_transfer_character(&local_200,0x8073c85,1);
    _gfortran_string_trim(&local_80,&local_84,0x18,param_1);
    _gfortran_transfer_character(&local_200,local_84,local_80);
    if ((0 < local_80) && (local_84 != (void *)0x0)) {
      free(local_84);
    }
    _gfortran_transfer_character(&local_200," has originally been developed by",0x21);
    _gfortran_transfer_character
              (&local_200," R.W. Godby, V. Olevano, G. Onida, L. Reining, M. Torrent,",0x3a);
    _gfortran_transfer_character
              (&local_200,
                              
               " and incorporated in ABINIT by G.M. Rignanese.OPTIC(a,a,a,/,a,/,a,/,a,/,a,/) Sangeeta Sharma and incorporated in ABINIT with the help of M. Verstraete. Please refer to : "
               ,0x2e);
    _gfortran_st_write_done(&local_200);
  }
  _gfortran_string_trim(&local_88,&local_8c,0x18,param_1);
  iVar1 = _gfortran_compare_string(local_88,local_8c,5,0x8073e92);
  if ((0 < local_88) && (local_8c != (void *)0x0)) {
    free(local_8c);
  }
  if (iVar1 == 0) {
    local_1f8 = 0x8073c60;
    local_1f4 = 0x5f;
    local_1d0 = 
    "(a,a,a,/,a,/,a,/,a,/,a,/) Sangeeta Sharma and incorporated in ABINIT with the help of M. Verstraete. Please refer to : "
    ;
    local_1cc = 0x19;
    local_200 = 0x1000;
    local_1fc = *param_3;
    _gfortran_st_write(&local_200);
    _gfortran_transfer_character(&local_200,0x8073c85,1);
    _gfortran_string_trim(&local_90,&local_94,0x18,param_1);
    _gfortran_transfer_character(&local_200,local_94,local_90);
    if ((0 < local_90) && (local_94 != (void *)0x0)) {
      free(local_94);
    }
    _gfortran_transfer_character(&local_200," has originally been developed by",0x21);
    _gfortran_transfer_character(&local_200,0x8073eb0,0x4b);
    _gfortran_transfer_character(&local_200,0x8073efb,0x13);
    _gfortran_transfer_character
              (&local_200,
                              
               " S. Sharma, J. K. Dewhurst and C. Ambrosch-Draxl, Phys. Rev. B 67, 165332 (2003), and"
               ,0x55);
    _gfortran_transfer_character
              (&local_200,
               " S. Sharma and C. Ambrosch-Draxl, Physica Scripta T 109 (2004).(a,/,a,/,a,/,a,/,a)",
               0x3f);
    _gfortran_st_write_done(&local_200);
  }
  local_1f8 = 0x8073c60;
  local_1f4 = 0x67;
  local_1d0 = "(a,/,a,/,a,/,a,/,a)";
  local_1cc = 0x13;
  local_200 = 0x1000;
  local_1fc = *param_3;
  _gfortran_st_write(&local_200);
  _gfortran_transfer_character
            (&local_200," ABINIT is a project of the Universite Catholique de Louvain,",0x3d);
  _gfortran_transfer_character
            (&local_200,
                          
             " Corning Inc. and other collaborators, see ~abinit/doc/developers/contributors.txt . Please read ~abinit/doc/users/acknowledgments.html for suggested"
             ,0x54);
  _gfortran_transfer_character(&local_200,0x8074050,0x41);
  _gfortran_transfer_character(&local_200," acknowledgments of the ABINIT effort.",0x26);
  _gfortran_transfer_character
            (&local_200,
                          
             " For more information, see http://www.abinit.org .(/,a,a,1x,i2,1x,a,1x,i4,a).Starting date : ."
             ,0x32);
  _gfortran_st_write_done(&local_200);
  local_a4 = 0x109;
  local_9c = 1;
  local_98 = 8;
  local_a0 = 1;
  local_ac = &local_60;
  local_a8 = 0xffffffff;
  _gfortran_date_and_time(local_30,local_3a,local_3f,&local_ac,8,10,5);
  local_64 = local_60;
  local_10 = local_5c;
  local_28 = local_58;
  if (local_5c < 3) {
    local_14 = local_60 + -1;
    local_18 = local_5c + 0xd;
  }
  else {
    local_14 = local_60;
    local_18 = local_5c + 1;
  }
  local_20 = (int)ROUND((double)local_14 * 0.01000000);
  local_1c = (((int)ROUND((double)local_14 * 365.25000000) +
               (int)ROUND((double)local_18 * 30.60010000) + local_58 + 0x1a42a5) - local_20) +
             (int)ROUND((double)local_20 * 0.25000000);
  local_24 = local_1c % 7 + 1;
  local_1f8 = 0x8073c60;
  local_1f4 = 0x7e;
  local_1d0 = "(/,a,a,1x,i2,1x,a,1x,i4,a).Starting date : .";
  local_1cc = 0x1a;
  local_200 = 0x1000;
  local_1fc = *param_3;
  _gfortran_st_write(&local_200);
  _gfortran_transfer_character(&local_200,0x8074108,0x11);
  _gfortran_transfer_character(&local_200,daynam_1506 + (local_24 + -1) * 3,3);
  _gfortran_transfer_integer(&local_200,&local_28,4);
  _gfortran_transfer_character(&local_200,monnam_1558 + (local_10 + -1) * 3,3);
  _gfortran_transfer_integer(&local_200,&local_64,4);
  _gfortran_transfer_character(&local_200,0x8074119,1);
  _gfortran_st_write_done(&local_200);
  local_1f8 = 0x8073c60;
  local_1f4 = 0x80;
  local_200 = 0x80;
  local_1fc = *param_3;
  _gfortran_st_write(&local_200);
  _gfortran_transfer_character(&local_200,0x8073c85,1);
  _gfortran_st_write_done(&local_200);
  return;
}



void leave_new(void)

{
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_328;
  char *local_324;
  undefined4 local_320;
  undefined *local_314;
  undefined4 local_310;
  undefined local_200 [508];
  
  local_34c = 0x8074140;
  local_348 = 0x86;
  local_314 = local_200;
  local_310 = 500;
  local_328 = 0;
  local_350 = 0;
  local_324 = "(a,a)\n leave_new : decision taken to exit ...PERS";
  local_320 = 5;
  local_354 = 0x5000;
  _gfortran_st_write(&local_354);
  _gfortran_transfer_character(&local_354,0x8074153,1);
  _gfortran_transfer_character(&local_354,0x8074154,0x27);
  _gfortran_st_write_done(&local_354);
  wrtout(&DAT_08074180,local_200,0x807417b,500,4);
  leave_myproc();
  return;
}



void timab(int *param_1,int *param_2,double *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined4 local_368;
  undefined4 local_364;
  char *local_360;
  undefined4 local_35c;
  undefined4 local_33c;
  char *local_338;
  undefined4 local_334;
  undefined *local_328;
  undefined4 local_324;
  double local_214;
  undefined local_208 [500];
  real_kind_8_ cpu;
  
  bVar3 = 0;
  if (*param_2 == 5) {
    nday[24] = *param_1;
  }
  if ((nday[24] != 0) && (*param_2 != 5)) {
    if ((*param_1 < 0) || (599 < *param_1)) {
      local_360 = "timab.F90";
      local_35c = 0x77;
      local_328 = local_208;
      local_324 = 500;
      local_33c = 0;
      local_364 = 0;
      local_338 = "(a,a,a,a,i6,a,i8,a)\n timab: BUG -  dim mtim=";
      local_334 = 0x13;
      local_368 = 0x5000;
      _gfortran_st_write(&local_368);
      _gfortran_transfer_character(&local_368,0x80741a1,1);
      _gfortran_transfer_character(&local_368,0x80741a2,0xd);
      _gfortran_transfer_character(&local_368,0x80741a1,1);
      _gfortran_transfer_character(&local_368,0x80741af,0xb);
      _gfortran_transfer_integer(&local_368,&DAT_080741bc,4);
      _gfortran_transfer_character(&local_368," but input nn=.PERS",0xe);
      _gfortran_transfer_integer(&local_368,param_1,4);
      _gfortran_transfer_character(&local_368,0x80741ce,1);
      _gfortran_st_write_done(&local_368);
      wrtout(&DAT_080741d4,local_208,0x80741cf,500,4);
      leave_new(0x80741cf,4);
    }
    if (*param_2 == 0) {
      memset(__defs_time_MOD_acctim,0,0x2570);
      memset(__defs_time_MOD_tzero,0,0x2570);
      iVar1 = 599;
      puVar2 = (undefined4 *)__defs_time_MOD_ncount;
      while (iVar1 != 0) {
        iVar1 = iVar1 + -1;
        *puVar2 = 0;
        puVar2 = puVar2 + (uint)bVar3 * 0x3ffffffe + 1;
      }
    }
    else {
      if (*param_2 == 1) {
        timein(&cpu,&local_214);
        *(real_kind_8_ *)(__defs_time_MOD_tzero + (*param_1 + -1) * 0x10) = cpu;
        *(double *)(__defs_time_MOD_tzero + ((*param_1 + 1) * 2 + -3) * 8) = local_214;
      }
      else {
        if (*param_2 == 2) {
          timein(&cpu,&local_214);
          *(double *)(__defs_time_MOD_acctim + (*param_1 + -1) * 0x10) =
               ((double)cpu + *(double *)(__defs_time_MOD_acctim + (*param_1 + -1) * 0x10)) -
               *(double *)(__defs_time_MOD_tzero + (*param_1 + -1) * 0x10);
          *(double *)(__defs_time_MOD_acctim + ((*param_1 + 1) * 2 + -3) * 8) =
               (local_214 + *(double *)(__defs_time_MOD_acctim + ((*param_1 + 1) * 2 + -3) * 8)) -
               *(double *)(__defs_time_MOD_tzero + ((*param_1 + 1) * 2 + -3) * 8);
          *(int *)(__defs_time_MOD_ncount + (*param_1 + -1) * 4) =
               *(int *)(__defs_time_MOD_ncount + (*param_1 + -1) * 4) + 1;
        }
        else {
          if (*param_2 == 3) {
            local_360 = "timab.F90";
            local_35c = 0x94;
            local_328 = local_208;
            local_324 = 500;
            local_33c = 0;
            local_364 = 0;
            local_338 = "(a,a,a,a)";
            local_334 = 9;
            local_368 = 0x5000;
            _gfortran_st_write(&local_368);
            _gfortran_transfer_character(&local_368,0x80741a1,1);
            _gfortran_transfer_character(&local_368,0x80741a2,0xd);
            _gfortran_transfer_character(&local_368,0x80741a1,1);
            _gfortran_transfer_character
                      (&local_368,
                                              
                       " option 3 not valid (use time_accu).(a,a,a,a,i10,a)  Input option not valid, ="
                       ,0x24);
            _gfortran_st_write_done(&local_368);
            wrtout(&DAT_080741d4,local_208,0x80741cf,500,4);
            leave_new(0x80741cf,4);
          }
          else {
            if (*param_2 == 4) {
              timein(&cpu,&local_214);
              *param_3 = (double)cpu - *(double *)(__defs_time_MOD_tzero + (*param_1 + -1) * 0x10);
              param_3[1] = local_214 -
                           *(double *)(__defs_time_MOD_tzero + ((*param_1 + 1) * 2 + -3) * 8);
            }
            else {
              local_360 = "timab.F90";
              local_35c = 0x9f;
              local_328 = local_208;
              local_324 = 500;
              local_33c = 0;
              local_364 = 0;
              local_338 = "(a,a,a,a,i10,a)  Input option not valid, =";
              local_334 = 0xf;
              local_368 = 0x5000;
              _gfortran_st_write(&local_368);
              _gfortran_transfer_character(&local_368,0x80741a1,1);
              _gfortran_transfer_character(&local_368,0x80741a2,0xd);
              _gfortran_transfer_character(&local_368,0x80741a1,1);
              _gfortran_transfer_character(&local_368,0x8074217,0x1b);
              _gfortran_transfer_integer(&local_368,param_2,4);
              _gfortran_transfer_character(&local_368,0x80741ce,1);
              _gfortran_st_write_done(&local_368);
              wrtout(&DAT_080741d4,local_208,0x80741cf,500,4);
              leave_new(0x80741cf,4);
            }
          }
        }
      }
    }
  }
  return;
}



void timein(double *param_1,double *param_2)

{
  integer_kind_4_ start;
  integer_kind_4_ nday [25];
  integer_kind_4_ year_init;
  integer_kind_4_ month_init;
  integer_kind_4_ month_now;
  int iVar1;
  bool bVar2;
  undefined4 local_3d4;
  undefined4 local_3d0;
  char *local_3cc;
  undefined4 local_3c8;
  undefined4 local_3a8;
  char *local_3a4;
  undefined4 local_3a0;
  undefined *local_394;
  undefined4 local_390;
  uint *local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  uint *local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined local_24e [10];
  uint local_244;
  integer_kind_4_ local_240;
  int local_23c;
  int local_234;
  int local_230;
  int local_22c;
  int local_228;
  undefined local_224 [10];
  undefined local_21a [500];
  undefined local_26 [10];
  integer_kind_4_ count_rate;
  integer_kind_4_ count_max;
  integer_kind_4_ count;
  int local_10;
  
  *param_1 = 0.00000000;
  _gfortran_system_clock_4(&count,&count_rate,&count_max);
  *param_1 = (double)count / (double)count_rate;
  if (start == 1) {
    start = 0;
    local_260 = 0x109;
    local_258 = 1;
    local_254 = 8;
    local_25c = 1;
    local_268 = &local_244;
    local_264 = 0xffffffff;
    _gfortran_date_and_time(local_26,local_224,local_24e,&local_268,10,10,10);
    year_init = local_244;
    month_init = local_240;
  }
  local_278 = 0x109;
  local_270 = 1;
  local_26c = 8;
  local_274 = 1;
  local_280 = &local_244;
  local_27c = 0xffffffff;
  _gfortran_date_and_time(local_26,local_224,local_24e,&local_280,10,10,10);
  *param_2 = (double)local_228 * 0.00100000 +
             (double)local_22c +
             (double)local_230 * 60.00000000 +
             ((double)local_234 + (double)local_23c * 24.00000000) * 3600.00000000;
  month_now = local_240;
  if (local_240 != month_init) {
    if (year_init + 1U == local_244) {
      month_now = local_240 + 0xc;
    }
    if (month_now <= month_init) {
      local_3cc = "timein.F90";
      local_3c8 = 0xd3;
      local_394 = local_21a;
      local_390 = 500;
      local_3a8 = 0;
      local_3d0 = 0;
      local_3a4 = "(a,a,a,a)\n timein : BUG -  Problem with month and year numbers.COLL";
      local_3a0 = 9;
      local_3d4 = 0x5000;
      _gfortran_st_write(&local_3d4);
      _gfortran_transfer_character(&local_3d4,0x807424c,1);
      _gfortran_transfer_character(&local_3d4,0x807424d,0xf);
      _gfortran_transfer_character(&local_3d4,0x807424c,1);
      _gfortran_transfer_character(&local_3d4,0x807425c,0x26);
      _gfortran_st_write_done(&local_3d4);
      wrtout(&DAT_08074288,local_21a,0x8074282,500,4);
      leave_new(0x8074282,4);
    }
    iVar1 = month_now + -1;
    local_10 = month_init;
    if (month_init <= iVar1) {
      do {
        *param_2 = (double)((integer_kind_4_ *)&ram0x08076160)[local_10 + -1] * 86400.00000000 +
                   *param_2;
        bVar2 = local_10 != iVar1;
        local_10 = local_10 + 1;
      } while (bVar2);
    }
  }
  if ((((year_init & 3U) == 0) && (month_init < 3)) && (2 < month_now)) {
    *param_2 = *param_2 + 3600.00000000;
  }
  if ((((local_244 & 3) == 0) && (month_init < 0xf)) && (0xe < month_now)) {
    *param_2 = *param_2 + 3600.00000000;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x080703f5)
// WARNING: Removing unreachable block (ram,0x080703ff)
// WARNING: Removing unreachable block (ram,0x08070444)
// WARNING: Removing unreachable block (ram,0x08070447)
// WARNING: Removing unreachable block (ram,0x08070451)
// WARNING: Removing unreachable block (ram,0x0807045d)
// WARNING: Removing unreachable block (ram,0x08070464)
// WARNING: Removing unreachable block (ram,0x08070467)
// WARNING: Removing unreachable block (ram,0x08070473)
// WARNING: Removing unreachable block (ram,0x0807047f)
// WARNING: Removing unreachable block (ram,0x0807048a)
// WARNING: Removing unreachable block (ram,0x0807048d)
// WARNING: Removing unreachable block (ram,0x0807049a)
// WARNING: Removing unreachable block (ram,0x0807049d)
// WARNING: Removing unreachable block (ram,0x080704ca)
// WARNING: Removing unreachable block (ram,0x080704cd)
// WARNING: Removing unreachable block (ram,0x080704f4)
// WARNING: Removing unreachable block (ram,0x080704d8)
// WARNING: Removing unreachable block (ram,0x08070531)
// WARNING: Removing unreachable block (ram,0x08070537)
// WARNING: Removing unreachable block (ram,0x0807053f)
// WARNING: Removing unreachable block (ram,0x080705e0)
// WARNING: Removing unreachable block (ram,0x080705ea)
// WARNING: Removing unreachable block (ram,0x080705f2)
// WARNING: Removing unreachable block (ram,0x08070616)
// WARNING: Removing unreachable block (ram,0x08070619)
// WARNING: Removing unreachable block (ram,0x08070640)
// WARNING: Removing unreachable block (ram,0x08070621)
// WARNING: Removing unreachable block (ram,0x0807067b)
// WARNING: Removing unreachable block (ram,0x080706ae)

void wrtout(int *param_1,void *param_2)

{
  bool bVar1;
  integer_kind_4_ nwarning;
  integer_kind_4_ ncomment;
  integer_kind_4_ iexit;
  int iVar2;
  size_t __n;
  undefined *local_688;
  undefined4 local_684;
  size_t __n_00;
  undefined *local_680;
  undefined4 local_67c;
  undefined4 local_66c;
  int local_668;
  char *local_664;
  undefined4 local_660;
  undefined *local_63c;
  undefined4 local_638;
  void *local_458;
  int local_454;
  void *local_450;
  int local_44c;
  void *local_448;
  int local_444;
  void *local_440;
  int local_43c;
  void *local_438;
  int local_434;
  void *local_430;
  int local_42c;
  void *local_428;
  int local_424;
  void *local_420;
  int local_41c [3];
  undefined local_410 [500];
  undefined local_21c [500];
  integer_kind_4_ lenmessage;
  int local_24;
  
  iVar2 = _gfortran_compare_string(500,param_2,1,&DAT_080742b8);
  if (iVar2 == 0) {
    local_664 = "wrtout.F90";
    local_660 = 0xa5;
    local_66c = 0x80;
    local_668 = *param_1;
    _gfortran_st_write(&local_66c);
    _gfortran_st_write_done(&local_66c);
  }
  else {
    memmove(local_21c,param_2,500);
    lenmessage = 500;
    local_67c = 0;
    local_680 = &DAT_080742b9;
    local_684 = 1;
    local_688 = local_21c;
    local_24 = _gfortran_string_index(500,local_688,1,&DAT_080742b9,0);
    while (local_24 != 0) {
      __n = 0;
      if (-1 < (int)(local_24 - 1U)) {
        __n = local_24 - 1U;
      }
      if ((int)__n < 500) {
        memmove(local_410,local_21c,__n);
        __n_00 = 500 - __n;
        local_688 = (undefined *)0x20;
        memset(local_410 + __n,0x20,__n_00);
      }
      else {
        __n_00 = 500;
        local_688 = local_21c;
        memmove(local_410,local_688,500);
      }
      local_664 = "wrtout.F90";
      local_660 = 0x9e;
      local_63c = &DAT_080742c5;
      local_638 = 3;
      local_66c = 0x1000;
      local_668 = *param_1;
      _gfortran_st_write(&local_66c,local_688,__n_00,local_680,local_67c);
      _gfortran_string_trim(local_41c,&local_420,500,local_410);
      _gfortran_transfer_character(&local_66c,local_420,local_41c[0]);
      if ((0 < local_41c[0]) && (local_420 != (void *)0x0)) {
        free(local_420);
      }
      _gfortran_st_write_done(&local_66c);
      __n_00 = (1 - (local_24 + 1)) + lenmessage;
      __n = 0;
      if (-1 < (int)__n_00) {
        __n = __n_00;
      }
      if ((int)__n < 500) {
        memmove(local_21c,local_21c + local_24,__n);
        memset(local_21c + __n,0x20,500 - __n);
      }
      else {
        memmove(local_21c,local_21c + local_24,500);
      }
      lenmessage = lenmessage - local_24;
      local_67c = 0;
      local_680 = &DAT_080742b9;
      local_684 = 1;
      local_688 = local_21c;
      local_24 = _gfortran_string_index(500);
    }
    local_664 = "wrtout.F90";
    local_660 = 0xa3;
    local_63c = &DAT_080742c5;
    local_638 = 3;
    local_66c = 0x1000;
    local_668 = *param_1;
    _gfortran_st_write(&local_66c,local_688,local_684,local_680,local_67c);
    _gfortran_string_trim(&local_424,&local_428,500,local_21c);
    _gfortran_transfer_character(&local_66c,local_428,local_424);
    if ((0 < local_424) && (local_428 != (void *)0x0)) {
      free(local_428);
    }
    _gfortran_st_write_done(&local_66c);
  }
  _gfortran_string_trim(&local_42c,&local_430,500,param_2);
  iVar2 = _gfortran_string_index(local_42c,local_430,3,&DAT_080742c8,0);
  if ((0 < local_42c) && (local_430 != (void *)0x0)) {
    free(local_430);
  }
  if (iVar2 != 0) {
    local_664 = "wrtout.F90";
    local_660 = 0xa9;
    local_63c = &DAT_080742c5;
    local_638 = 3;
    local_66c = 0x1000;
    local_668 = *param_1;
    _gfortran_st_write(&local_66c);
    _gfortran_transfer_character
              (&local_66c,
                              
               "  Action : contact ABINIT group.Calculation completed(a,i5,a,i4,a).Delivered WARNINGs and COMMENTs to log file.(a,i6,a,i6,a) Note : exit requested by the user.ExitWARNINGCOMMENT"
               ,0x20);
    _gfortran_st_write_done(&local_66c);
    local_664 = "wrtout.F90";
    local_660 = 0xaa;
    local_66c = 0x80;
    local_668 = *param_1;
    _gfortran_st_write(&local_66c);
    _gfortran_st_write_done(&local_66c);
  }
  _gfortran_string_trim(&local_43c,&local_440,500,param_2);
  _gfortran_string_trim(&local_434,&local_438,500,param_2);
  iVar2 = _gfortran_string_index(local_43c,local_440,3,&DAT_080742c8,0);
  if ((iVar2 == 0) &&
     (iVar2 = _gfortran_string_index(local_434,local_438,0x15,0x80742ec,0), iVar2 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((0 < local_434) && (local_438 != (void *)0x0)) {
    free(local_438);
  }
  if ((0 < local_43c) && (local_440 != (void *)0x0)) {
    free(local_440);
  }
  if (bVar1) {
    if ((nwarning < 10000) && (ncomment < 1000)) {
      local_664 = "wrtout.F90";
      local_660 = 0xb1;
      local_63c = (undefined *)0x8074301;
      local_638 = 0xd;
      local_66c = 0x1000;
      local_668 = *param_1;
      _gfortran_st_write(&local_66c);
      _gfortran_transfer_character(&local_66c,0x807430e,10);
      _gfortran_transfer_integer(&local_66c,0x80761f4,4);
      _gfortran_transfer_character(&local_66c,0x8074318,0xd);
      _gfortran_transfer_integer(&local_66c,0x80761f8,4);
      _gfortran_transfer_character(&local_66c,0x8074325,0x16);
      _gfortran_st_write_done(&local_66c);
    }
    else {
      local_664 = "wrtout.F90";
      local_660 = 0xb4;
      local_63c = (undefined *)0x807433b;
      local_638 = 0xd;
      local_66c = 0x1000;
      local_668 = *param_1;
      _gfortran_st_write(&local_66c);
      _gfortran_transfer_character(&local_66c,0x807430e,10);
      _gfortran_transfer_integer(&local_66c,0x80761f4,4);
      _gfortran_transfer_character(&local_66c,0x8074318,0xd);
      _gfortran_transfer_integer(&local_66c,0x80761f8,4);
      _gfortran_transfer_character(&local_66c,0x8074325,0x16);
      _gfortran_st_write_done(&local_66c);
    }
    if (iexit != 0) {
      local_664 = "wrtout.F90";
      local_660 = 0xb7;
      local_63c = &DAT_080742c5;
      local_638 = 3;
      local_66c = 0x1000;
      local_668 = *param_1;
      _gfortran_st_write(&local_66c);
      _gfortran_transfer_character(&local_66c,0x8074348,0x23);
      _gfortran_st_write_done(&local_66c);
    }
  }
  _gfortran_string_trim(&local_444,&local_448,500,param_2);
  iVar2 = _gfortran_string_index(local_444,local_448,4,0x807436b,0);
  if ((0 < local_444) && (local_448 != (void *)0x0)) {
    free(local_448);
  }
  if (iVar2 != 0) {
    iexit = 1;
  }
  _gfortran_string_trim(&local_44c,&local_450,500,param_2);
  iVar2 = _gfortran_string_index(local_44c,local_450,7,0x807436f,0);
  if ((iVar2 == 0) || (*param_1 != 6)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((0 < local_44c) && (local_450 != (void *)0x0)) {
    free(local_450);
  }
  if (bVar1) {
    nwarning = nwarning + 1;
  }
  _gfortran_string_trim(&local_454,&local_458,500,param_2);
  _gfortran_string_index(local_454,local_458,7,0x8074376,0);
  if ((0 < local_454) && (local_458 != (void *)0x0)) {
    free(local_458);
  }
  return;
}



undefined4 leave_myproc(void)

{
  undefined4 uStack280;
  undefined4 *puStack276;
  undefined4 local_108;
  undefined4 local_104;
  char *local_100;
  undefined4 local_fc;
  logical_kind_4_ *local_e8;
  logical_kind_4_ testopen;
  
  local_100 = "leave_myproc.F90";
  local_fc = 0x38;
  local_e8 = &testopen;
  local_108 = 0x100;
  local_104 = 7;
  _gfortran_st_inquire(&local_108);
  if (testopen != 0) {
    local_100 = "leave_myproc.F90";
    local_fc = 0x39;
    local_108 = 0;
    local_104 = 7;
    _gfortran_st_close(&local_108);
  }
  _gfortran_exit_i4(&DAT_080743e0);
  _gfortran_store_exe_path(*puStack276);
  _gfortran_set_args(uStack280,puStack276);
  optic();
  return 0;
}



undefined4 main(undefined4 param_1,undefined4 *param_2)

{
  _gfortran_store_exe_path(*param_2);
  _gfortran_set_args(param_1,param_2);
  optic();
  return 0;
}



void __libc_csu_fini(void)

{
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx
// WARNING: Removing unreachable block (ram,0x0807085e)
// WARNING: Removing unreachable block (ram,0x08070860)

void __libc_csu_init(void)

{
  EVP_PKEY_CTX *local_2c;
  
  _init(local_2c);
  return;
}



// WARNING: This is an inlined function

void __i686_get_pc_thunk_bx(void)

{
  return;
}



void __do_global_ctors_aux(void)

{
  code *pcVar1;
  code **ppcVar2;
  
  if (__CTOR_LIST__ != (code *)0xffffffff) {
    ppcVar2 = (code **)&__CTOR_LIST__;
    pcVar1 = __CTOR_LIST__;
    do {
      ppcVar2 = ppcVar2 + -1;
      (*pcVar1)();
      pcVar1 = *ppcVar2;
    } while (pcVar1 != (code *)0xffffffff);
  }
  return;
}



void _fini(void)

{
  __do_global_dtors_aux();
  return;
}


