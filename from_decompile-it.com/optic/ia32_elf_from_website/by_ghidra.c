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

typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

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
  size_t sVar2;
  hdr_type *phVar3;
  integer_kind_4_ (*paaaiVar4) [4] [4] [1];
  void *pvVar5;
  wffile_type *pwVar6;
  real_kind_8_ (*paaaaarVar7) [3] [1] [1] [1] [1];
  integer_kind_4_ (*wtk) [4] [4] [1];
  complex_kind_8_ (*paaaaaauVar8) [1] [1] [1] [4] [1];
  void *pvVar9;
  int iVar10;
  int extraout_EDX;
  wffile_type *unaff_EBX;
  hdr_type *phVar11;
  undefined8 *puVar12;
  int unaff_EDI;
  bool bVar13;
  char *pcVar14;
  hdr_type **pphVar15;
  integer_kind_4_ (*mband) [4] [4] [1];
  wffile_type *rprimd;
  wffile_type *pwVar16;
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
  char *local_133c;
  undefined4 local_1338;
  undefined4 local_1334;
  int local_1330;
  undefined4 local_132c;
  undefined4 local_1328;
  int local_1324;
  undefined *local_1320;
  char *local_1314;
  undefined4 local_1310;
  char *local_130c;
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
  char *local_10d8;
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
  undefined local_c6c [20];
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
  undefined local_bbc [16];
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
  int local_b08;
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
  integer_kind_4_ local_ac0;
  int local_abc;
  int local_ab8;
  int local_ab4;
  int local_ab0 [27];
  int local_a44;
  int local_a40;
  int local_a3c;
  hdr_type *local_a38;
  integer_kind_4_ local_a34;
  hdr_type *local_a30;
  int local_a2c;
  integer_kind_4_ local_a28;
  int local_a24;
  int local_a20;
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
  double local_7e8;
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
  int local_738;
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
  int local_140;
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
  int local_b8;
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
  undefined4 local_34;
  hdr_type *local_30;
  int local_2c;
  integer_kind_4_ local_28;
  integer_kind_4_ local_24;
  integer_kind_4_ local_20;
  
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
  local_c6c._4_4_ = (integer_kind_4_ (*) [4] [4] [1])0x0;
  local_10bc = (integer_kind_4_ (*) [4] [4] [1])0x0;
  _gfortran_set_options(8,options_0_1730);
  memmove(local_5c,&DAT_08070900,0x18);
  herald_(local_5c,"5.3.4 optic.F90",&DAT_08070918,0x18,6);
  local_133c = "optic.F90";
  local_1338 = 0x8b;
  local_1314 = &DAT_0807092c;
  local_1310 = 3;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 6;
  _gfortran_st_write(&local_1344);
  _gfortran_transfer_character(&local_1344," Please, give the name of the data file ...",0x2b);
  _gfortran_st_write_done(&local_1344);
  local_133c = "optic.F90";
  local_1338 = 0x8c;
  local_1314 = &DAT_0807092c;
  local_1310 = 3;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 5;
  _gfortran_st_read(&local_1344);
  _gfortran_transfer_character(&local_1344,local_1d4,0x84);
  _gfortran_st_read_done(&local_1344);
  local_133c = "optic.F90";
  local_1338 = 0x8d;
  local_1314 = &DAT_0807092c;
  local_1310 = 3;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 6;
  _gfortran_st_write(&local_1344);
  _gfortran_transfer_character(&local_1344," The name of the data file is :",0x1f);
  _gfortran_transfer_character(&local_1344,local_1d4,0x84);
  _gfortran_st_write_done(&local_1344);
  local_133c = "optic.F90";
  local_1338 = 0x8e;
  local_1314 = &DAT_0807092c;
  local_1310 = 3;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 6;
  _gfortran_st_write(&local_1344);
  _gfortran_transfer_character(&local_1344," Please, give the name of the output file ...",0x2d);
  _gfortran_st_write_done(&local_1344);
  local_133c = "optic.F90";
  local_1338 = 0x8f;
  local_1314 = &DAT_0807092c;
  local_1310 = 3;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 5;
  _gfortran_st_read(&local_1344);
  _gfortran_transfer_character(&local_1344,local_468,0x84);
  _gfortran_st_read_done(&local_1344);
  local_133c = "optic.F90";
  local_1338 = 0x90;
  local_1314 = &DAT_0807092c;
  local_1310 = 3;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 6;
  _gfortran_st_write(&local_1344);
  _gfortran_transfer_character(&local_1344," The name of the output file is :",0x21);
  _gfortran_transfer_character(&local_1344,local_468,0x84);
  _gfortran_st_write_done(&local_1344);
  local_133c = "optic.F90";
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
  local_133c = "optic.F90";
  local_1338 = 0x92;
  local_1314 = &DAT_0807092c;
  local_1310 = 3;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 5;
  _gfortran_st_read(&local_1344);
  _gfortran_transfer_character(&local_1344,local_568,0x100);
  _gfortran_st_read_done(&local_1344);
  local_133c = "optic.F90";
  local_1338 = 0x93;
  local_1314 = &DAT_0807092c;
  local_1310 = 3;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 6;
  _gfortran_st_write(&local_1344);
  _gfortran_transfer_character
            (&local_1344," The root name of the output files is :formatted\n",0x27);
  _gfortran_string_trim(&local_10c0,&local_10c4,0x100,local_568);
  _gfortran_transfer_character(&local_1344,local_10c4,local_10c0);
  if ((0 < local_10c0) && (local_10c4 != (void *)0x0)) {
    free(local_10c4);
  }
  _gfortran_st_write_done(&local_1344);
  local_133c = "optic.F90";
  local_1338 = 0x96;
  local_1320 = local_1d4;
  local_1324 = 0x84;
  local_130c = "formatted\n";
  local_1308 = 9;
  local_1344 = (hdr_type *)0x900;
  local_1340 = 0xf;
  _gfortran_st_open(&local_1344);
  local_10d8 = "optic.F90";
  local_10d4 = 0x97;
  local_10e0 = 0;
  local_10dc = 0xf;
  _gfortran_st_rewind(&local_10e0);
  local_133c = "optic.F90";
  local_1338 = 0x98;
  local_1314 = &DAT_0807092c;
  local_1310 = 3;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 0xf;
  _gfortran_st_read(&local_1344);
  _gfortran_transfer_character(&local_1344,local_2dc,0x84);
  _gfortran_st_read_done(&local_1344);
  local_133c = "optic.F90";
  local_1338 = 0x99;
  local_1314 = &DAT_0807092c;
  local_1310 = 3;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 0xf;
  _gfortran_st_read(&local_1344);
  _gfortran_transfer_character(&local_1344,local_360,0x84);
  _gfortran_st_read_done(&local_1344);
  local_133c = "optic.F90";
  local_1338 = 0x9a;
  local_1314 = &DAT_0807092c;
  local_1310 = 3;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 0xf;
  _gfortran_st_read(&local_1344);
  _gfortran_transfer_character(&local_1344,local_3e4,0x84);
  _gfortran_st_read_done(&local_1344);
  local_133c = "optic.F90";
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
  wffopen(&accesswff,&local_bd8,local_258,&local_99c,&local_e4c,&local_9f8,&local_a0c,"\n",0x84);
  wffopen(&accesswff,&local_bd8,local_2dc,&local_99c,&local_f14,&local_9f8,&local_a0c,&DAT_08070a50,
          0x84);
  wffopen(&accesswff,&local_bd8,local_360,&local_99c,&local_fdc,&local_9f8,&local_a0c,&DAT_08070a54,
          0x84);
  pwVar16 = (wffile_type *)0x84;
  rprimd = (wffile_type *)&DAT_08070a58;
  paaaaaauVar8 = (complex_kind_8_ (*) [1] [1] [1] [4] [1])&local_a0c;
  wffopen(&accesswff,&local_bd8,local_3e4,&local_99c,&local_10a4,&local_9f8,paaaaaauVar8,
          &DAT_08070a58,0x84);
  local_b2c = 1;
  pcVar14 = local_994;
  hdr_io_wfftype(&local_150,(hdr_type *)pcVar14,&local_b2c,&local_e4c);
  local_998 = local_994._8_4_;
  bantot = local_994._0_4_;
  local_b4 = local_7f8;
  local_a18 = local_994._20_4_;
  local_a38 = local_994._24_4_;
  local_28 = local_994._36_4_;
  local_ab8 = local_994._40_4_;
  local_24 = local_994._48_4_;
  local_20 = local_994._52_4_;
  puVar12 = local_7c0;
  iVar1 = 1;
  while (iVar1 < 4) {
    unaff_EDI = iVar1 * 3 + -4;
    iVar10 = 1;
    while (iVar10 < 4) {
      unaff_EBX = (wffile_type *)(iVar10 + unaff_EDI);
      *(undefined8 *)(local_bbc + (iVar10 + iVar1 * 3 + -4) * 8) = puVar12[(int)unaff_EBX];
      iVar10 = iVar10 + 1;
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
    sVar2 = 0;
  }
  else {
    sVar2 = iVar1 * 4;
  }
  if (local_a30 == (hdr_type *)0x0) {
    if ((int)sVar2 < 0) {
      sVar2 = _gfortran_runtime_error
                        ("Attempt to allocate negative amount of memory. Possible integer overflow")
      ;
    }
    if ((int)sVar2 < 1) {
      sVar2 = 1;
    }
    phVar3 = (hdr_type *)malloc(sVar2);
    if (phVar3 == (hdr_type *)0x0) {
      phVar3 = (hdr_type *)_gfortran_os_error("Out of memory");
    }
    local_a2c = -1;
    local_acc = 0x219;
    local_ac4 = 1;
    local_ac0 = bantot;
    local_ac8 = 1;
    iVar1 = 0;
    if (-1 < bantot) {
      iVar1 = bantot;
    }
    local_a30 = phVar3;
    if (bantot < 1) goto LAB_08049a41;
    sVar2 = iVar1 * 8;
  }
  else {
    pcVar14 = "Attempting to allocate already allocated array \'%s\'";
    _gfortran_runtime_error_at
              ("At line 180 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'","nband");
LAB_08049a41:
    sVar2 = 0;
  }
  if (local_ad4 == (wffile_type *)0x0) {
    if ((int)sVar2 < 0) {
      sVar2 = _gfortran_runtime_error
                        ("Attempt to allocate negative amount of memory. Possible integer overflow")
      ;
    }
    if ((int)sVar2 < 1) {
      sVar2 = 1;
    }
    unaff_EBX = (wffile_type *)malloc(sVar2);
    if (unaff_EBX == (wffile_type *)0x0) {
      unaff_EBX = (wffile_type *)_gfortran_os_error("Out of memory");
    }
    local_ad0 = 0xffffffff;
    local_14c = local_7e8;
    local_145c = bantot;
    local_1460 = -1;
    local_1454 = local_730;
    local_1458 = local_ac8;
    iVar1 = 1;
    puVar12 = local_73c;
    unaff_EDI = local_738;
    local_ad4 = unaff_EBX;
  }
  else {
    pcVar14 = "Attempting to allocate already allocated array \'%s\'";
    _gfortran_runtime_error_at
              ("At line 180 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'",&DAT_08070b0e);
    iVar1 = extraout_EDX;
  }
  while (phVar3 = local_a30, iVar1 <= local_145c) {
    (*(real_kind_8_ (*) [4])&unaff_EBX->unwff)[local_1458 * iVar1 + local_1460] =
         (real_kind_8_)puVar12[local_1454 * iVar1 + unaff_EDI];
    iVar1 = iVar1 + 1;
  }
  iVar1 = 1;
  while (iVar1 <= (int)local_a38 * local_ab8) {
    local_a30->ngfft[local_a24 * iVar1 + local_a2c + -0x10] =
         (local_994._124_4_)->ngfft[local_90c * iVar1 + local_914 + -0x10];
    iVar1 = iVar1 + 1;
  }
  local_abc = local_994._44_4_;
  local_c6c._12_4_ = 0x10b;
  local_c58 = 1;
  local_c54 = 3;
  local_c6c._16_4_ = 1;
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
    sVar2 = 0;
  }
  else {
    sVar2 = iVar1 * 0x24;
  }
  if (local_c6c._4_4_ == (integer_kind_4_ (*) [4] [4] [1])0x0) {
    if ((int)sVar2 < 0) {
      sVar2 = _gfortran_runtime_error
                        ("Attempt to allocate negative amount of memory. Possible integer overflow")
      ;
    }
    if ((int)sVar2 < 1) {
      sVar2 = 1;
    }
    paaaiVar4 = (integer_kind_4_ (*) [4] [4] [1])malloc(sVar2);
    if (paaaiVar4 == (integer_kind_4_ (*) [4] [4] [1])0x0) {
      paaaiVar4 = (integer_kind_4_ (*) [4] [4] [1])_gfortran_os_error("Out of memory");
    }
    local_c6c._8_4_ = -0xd;
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
    local_c6c._4_4_ = paaaiVar4;
    if (local_abc < 1) goto LAB_08049d6f;
    sVar2 = iVar1 * 0x24;
  }
  else {
    pcVar14 = "Attempting to allocate already allocated array \'%s\'";
    _gfortran_runtime_error_at
              ("At line 186 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'","symrel");
LAB_08049d6f:
    sVar2 = 0;
  }
  if (local_c38 == (integer_kind_4_ (*) [4] [4] [1])0x0) {
    if ((int)sVar2 < 0) {
      sVar2 = _gfortran_runtime_error
                        ("Attempt to allocate negative amount of memory. Possible integer overflow")
      ;
    }
    if ((int)sVar2 < 1) {
      sVar2 = 1;
    }
    paaaiVar4 = (integer_kind_4_ (*) [4] [4] [1])malloc(sVar2);
    if (paaaiVar4 == (integer_kind_4_ (*) [4] [4] [1])0x0) {
      paaaiVar4 = (integer_kind_4_ (*) [4] [4] [1])_gfortran_os_error("Out of memory");
    }
    local_c34 = 0xfffffff3;
    local_1414 = local_858;
    local_1418 = local_854;
    local_141c = local_848;
    local_1420 = local_844;
    local_1424 = local_83c;
    local_1428 = local_838;
    local_142c = local_82c;
    local_1430 = local_c6c._4_4_;
    local_1434 = local_c6c._8_4_;
    local_1438 = local_c58 - local_848;
    local_143c = local_c4c - (int)local_83c;
    local_1440 = local_c40 - (int)local_830;
    local_140c = local_84c;
    local_1410 = local_c6c._16_4_;
    phVar3 = local_830;
    local_c38 = paaaiVar4;
  }
  else {
    pcVar14 = "Attempting to allocate already allocated array \'%s\'";
    _gfortran_runtime_error_at
              ("At line 186 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'","symrec");
    local_830 = local_994._124_4_;
  }
  while (iVar1 = local_abc, (int)local_830 <= local_142c) {
    phVar3 = local_1424;
    while ((int)phVar3 <= local_1428) {
      iVar1 = local_141c;
      while (iVar1 <= local_1420) {
        (*local_1430)
        [local_1434 + local_c44 * ((int)local_830->ngfft + local_1440 + -0x40) +
         local_c50 * ((int)phVar3->ngfft + local_143c + -0x40) + (iVar1 + local_1438) * local_1410]
        [0] = *(integer_kind_4_ *)
               (local_1414 +
               (local_140c * iVar1 +
               local_1418 + local_834 * (int)local_830 + local_840 * (int)phVar3) * 4);
        iVar1 = iVar1 + 1;
      }
      phVar3 = (hdr_type *)((int)&phVar3->bantot + 1);
    }
    local_830 = (hdr_type *)((int)&local_830->bantot + 1);
  }
  local_2c = 1;
  if (0 < local_abc) {
    do {
      local_11e8 = 0x10a;
      local_11e0 = 1;
      local_11dc = (1 - local_c58) + local_c54;
      local_11e4 = local_c6c._16_4_;
      local_11d4 = 1;
      local_11d0 = (1 - local_c4c) + local_c48;
      local_11d8 = local_c50;
      local_11f0 = (integer_kind_4_ (*) [4] [4] [1])
                   (*local_c6c._4_4_)[local_c44 * (local_2c - local_c40)];
      local_11ec = 0;
      paaaiVar4 = (integer_kind_4_ (*) [4] [4] [1])_gfortran_internal_pack(&local_11f0,pcVar14);
      local_133c = (char *)0x10a;
      local_1334 = 1;
      local_1330 = (1 - local_c28) + local_c24;
      local_1338 = local_c2c;
      local_1328 = 1;
      local_1324 = (1 - local_c1c) + local_c18;
      local_132c = local_c20;
      local_1344 = (hdr_type *)(*local_c38)[local_c14 * (local_2c - local_c10)];
      local_1340 = 0;
      phVar3 = (hdr_type *)_gfortran_internal_pack(&local_1344);
      pcVar14 = (char *)phVar3;
      mati3inv(paaaiVar4);
      if ((local_11f0 != paaaiVar4) && (paaaiVar4 != (integer_kind_4_ (*) [4] [4] [1])0x0)) {
        free(paaaiVar4);
      }
      if ((local_1344 != phVar3) &&
         (pcVar14 = (char *)phVar3, _gfortran_internal_unpack(&local_1344),
         phVar3 != (hdr_type *)0x0)) {
        free(phVar3);
      }
      bVar13 = local_2c != iVar1;
      local_2c = local_2c + 1;
    } while (bVar13);
  }
  local_9c0 = 0x21a;
  local_9b8 = 1;
  local_9b4 = 3;
  local_9bc = 1;
  local_9ac = 1;
  local_9a8 = local_a38;
  local_9b0 = 3;
  phVar11 = (hdr_type *)0x0;
  if (-1 < (int)local_a38) {
    phVar11 = local_a38;
  }
  if ((int)local_a38 < 1) {
    sVar2 = 0;
  }
  else {
    sVar2 = (int)phVar11 * 0x18;
  }
  if (local_9c8 == (real_kind_8_ (*) [4] [1])0x0) {
    if ((int)sVar2 < 0) {
      sVar2 = _gfortran_runtime_error
                        ("Attempt to allocate negative amount of memory. Possible integer overflow")
      ;
    }
    if ((int)sVar2 < 1) {
      sVar2 = 1;
    }
    local_13d8 = (real_kind_8_ (*) [4] [1])malloc(sVar2);
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
    phVar3 = local_744;
    local_9c8 = local_13d8;
  }
  else {
    _gfortran_runtime_error_at
              ("At line 192 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'",&DAT_08070b3e);
  }
  while ((int)phVar3 <= local_13d4) {
    iVar1 = local_13cc;
    while (iVar1 <= local_13d0) {
      (*local_13d8)
      [(iVar1 + local_13e0) * local_13c0 +
       local_9b0 * ((int)phVar3->ngfft + local_13e4 + -0x40) + local_13dc][0] =
           *(real_kind_8_ *)
            (local_13c4 + (local_13bc * iVar1 + local_748 * (int)phVar3 + local_13c8) * 8);
      iVar1 = iVar1 + 1;
    }
    phVar3 = (hdr_type *)((int)&phVar3->bantot + 1);
  }
  local_a08 = -0x80000000;
  iVar1 = local_a20;
  while (iVar1 <= local_a1c) {
    if (local_a08 < local_a30->ngfft[iVar1 * local_a24 + local_a2c + -0x10]) {
      local_a08 = local_a30->ngfft[iVar1 * local_a24 + local_a2c + -0x10];
    }
    iVar1 = iVar1 + 1;
  }
  local_30 = (hdr_type *)0x1;
  phVar3 = local_a38;
  phVar11 = local_a30;
  if (0 < (int)local_a38) {
    do {
      phVar11 = (hdr_type *)(local_a24 * (int)local_30);
      if (((hdr_type *)((int)local_a30 + ((int)phVar11->ngfft + local_a2c + -0x40) * 4))->bantot !=
          local_a08) {
        local_133c = "optic.F90";
        local_1338 = 199;
        local_1344 = (hdr_type *)0x80;
        local_1340 = 6;
        _gfortran_st_write(&local_1344);
        _gfortran_transfer_character
                  (&local_1344,
                                      
                   "optic : Error : nband must be constant across kpts(a,3f10.5,a) rprimd(bohr)      =                    (a,i8) natom             =(a,2i8) nkpt,mband        =(a, f10.5,a) ecut              = Ha(a,f10.5,a,f10.5,a) fermie            = eVeigtmp"
                   ,0x32);
        _gfortran_st_write_done(&local_1344);
        phVar3 = (hdr_type *)_gfortran_stop_numeric(0xffffffff);
      }
      bVar13 = local_30 != phVar3;
      local_30 = (hdr_type *)((int)&local_30->bantot + 1);
    } while (bVar13);
  }
  local_133c = "optic.F90";
  local_1338 = 0xcc;
  local_1344 = (hdr_type *)0x80;
  local_1340 = 6;
  _gfortran_st_write(&local_1344);
  _gfortran_st_write_done(&local_1344);
  local_133c = "optic.F90";
  local_1338 = 0xcd;
  local_1314 = 
  "(a,3f10.5,a) rprimd(bohr)      =                    (a,i8) natom             =(a,2i8) nkpt,mband        =(a, f10.5,a) ecut              = Ha(a,f10.5,a,f10.5,a) fermie            = eVeigtmp"
  ;
  local_1310 = 0xc;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 6;
  _gfortran_st_write(&local_1344);
  _gfortran_transfer_character
            (&local_1344,
                          
             " rprimd(bohr)      =                    (a,i8) natom             =(a,2i8) nkpt,mband        =(a, f10.5,a) ecut              = Ha(a,f10.5,a,f10.5,a) fermie            = eVeigtmp"
             ,0x14);
  local_10f0 = 0x219;
  local_10e8 = 1;
  local_10e4 = 3;
  local_10ec = 3;
  local_10f8 = (real_kind_8_ *)local_bbc;
  local_10f4 = 0xfffffffc;
  _gfortran_transfer_array(&local_1344,&local_10f8,8,0);
  _gfortran_st_write_done(&local_1344);
  local_133c = "optic.F90";
  local_1338 = 0xce;
  local_1314 = 
  "(a,3f10.5,a) rprimd(bohr)      =                    (a,i8) natom             =(a,2i8) nkpt,mband        =(a, f10.5,a) ecut              = Ha(a,f10.5,a,f10.5,a) fermie            = eVeigtmp"
  ;
  local_1310 = 0xc;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 6;
  _gfortran_st_write(&local_1344);
  _gfortran_transfer_character
            (&local_1344,
                          
             "                    (a,i8) natom             =(a,2i8) nkpt,mband        =(a, f10.5,a) ecut              = Ha(a,f10.5,a,f10.5,a) fermie            = eVeigtmp"
             ,0x14);
  local_1108 = 0x219;
  local_1100 = 1;
  local_10fc = 3;
  local_1104 = 3;
  local_1110 = local_bbc + 8;
  local_110c = 0xfffffffc;
  _gfortran_transfer_array(&local_1344,&local_1110,8,0);
  _gfortran_st_write_done(&local_1344);
  local_133c = "optic.F90";
  local_1338 = 0xcf;
  local_1314 = 
  "(a,3f10.5,a) rprimd(bohr)      =                    (a,i8) natom             =(a,2i8) nkpt,mband        =(a, f10.5,a) ecut              = Ha(a,f10.5,a,f10.5,a) fermie            = eVeigtmp"
  ;
  local_1310 = 0xc;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 6;
  _gfortran_st_write(&local_1344);
  _gfortran_transfer_character
            (&local_1344,
                          
             "                    (a,i8) natom             =(a,2i8) nkpt,mband        =(a, f10.5,a) ecut              = Ha(a,f10.5,a,f10.5,a) fermie            = eVeigtmp"
             ,0x14);
  local_1120 = 0x219;
  local_1118 = 1;
  local_1114 = 3;
  local_111c = 3;
  local_1128 = auStack2988;
  local_1124 = 0xfffffffc;
  _gfortran_transfer_array(&local_1344,&local_1128,8,0);
  _gfortran_st_write_done(&local_1344);
  local_133c = "optic.F90";
  local_1338 = 0xd0;
  local_1314 = 
  "(a,i8) natom             =(a,2i8) nkpt,mband        =(a, f10.5,a) ecut              = Ha(a,f10.5,a,f10.5,a) fermie            = eVeigtmp"
  ;
  local_1310 = 6;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 6;
  _gfortran_st_write(&local_1344);
  _gfortran_transfer_character
            (&local_1344,
                          
             " natom             =(a,2i8) nkpt,mband        =(a, f10.5,a) ecut              = Ha(a,f10.5,a,f10.5,a) fermie            = eVeigtmp"
             ,0x14);
  _gfortran_transfer_integer(&local_1344,&local_a18,4);
  _gfortran_st_write_done(&local_1344);
  local_133c = "optic.F90";
  local_1338 = 0xd1;
  local_1314 = 
  "(a,2i8) nkpt,mband        =(a, f10.5,a) ecut              = Ha(a,f10.5,a,f10.5,a) fermie            = eVeigtmp"
  ;
  local_1310 = 7;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 6;
  _gfortran_st_write(&local_1344);
  _gfortran_transfer_character
            (&local_1344,
                          
             " nkpt,mband        =(a, f10.5,a) ecut              = Ha(a,f10.5,a,f10.5,a) fermie            = eVeigtmp"
             ,0x14);
  _gfortran_transfer_integer(&local_1344,&local_a38,4);
  _gfortran_transfer_integer(&local_1344,&local_a08,4);
  _gfortran_st_write_done(&local_1344);
  local_133c = "optic.F90";
  local_1338 = 0xd2;
  local_1314 = "(a, f10.5,a) ecut              = Ha(a,f10.5,a,f10.5,a) fermie            = eVeigtmp"
  ;
  local_1310 = 0xc;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 6;
  _gfortran_st_write(&local_1344);
  _gfortran_transfer_character
            (&local_1344," ecut              = Ha(a,f10.5,a,f10.5,a) fermie            = eVeigtmp",
             0x14);
  _gfortran_transfer_real(&local_1344,&local_b4,8);
  _gfortran_transfer_character(&local_1344," Ha(a,f10.5,a,f10.5,a) fermie            = eVeigtmp",3);
  _gfortran_st_write_done(&local_1344);
  local_133c = "optic.F90";
  local_1338 = 0xd3;
  local_1314 = "(a,f10.5,a,f10.5,a) fermie            = eVeigtmp";
  local_1310 = 0x13;
  local_1344 = (hdr_type *)0x1000;
  local_1340 = 6;
  _gfortran_st_write(&local_1344);
  _gfortran_transfer_character(&local_1344," fermie            = eVeigtmp",0x14);
  _gfortran_transfer_real(&local_1344,&local_14c,8);
  _gfortran_transfer_character(&local_1344," Ha(a,f10.5,a,f10.5,a) fermie            = eVeigtmp",3);
  local_1134 = local_14c * 27.2113845;
  _gfortran_transfer_real(&local_1344,&local_1134,8);
  _gfortran_transfer_character(&local_1344," eVeigtmp",3);
  _gfortran_st_write_done(&local_1344);
  local_34 = 0;
  local_56c = 1;
  local_c6c._0_4_ = 0;
  local_13c = 0x219;
  local_134 = 1;
  local_130 = local_a08 * local_a08 * 2;
  local_138 = 1;
  iVar1 = local_a08 * local_a08 * 2;
  iVar10 = 0;
  if (-1 < iVar1) {
    iVar10 = iVar1;
  }
  if (local_a08 * local_a08 * 2 < 1) {
    sVar2 = 0;
  }
  else {
    sVar2 = iVar10 * 8;
  }
  if (local_144 == (void *)0x0) {
    if ((int)sVar2 < 0) {
      sVar2 = _gfortran_runtime_error
                        ("Attempt to allocate negative amount of memory. Possible integer overflow")
      ;
    }
    if ((int)sVar2 < 1) {
      sVar2 = 1;
    }
    pvVar5 = malloc(sVar2);
    if (pvVar5 == (void *)0x0) {
      pvVar5 = (void *)_gfortran_os_error("Out of memory");
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
    local_144 = pvVar5;
    if (local_a08 < 1) goto LAB_0804ac9d;
    sVar2 = iVar1 * 8;
  }
  else {
    _gfortran_runtime_error_at
              ("At line 215 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'","eigtmp");
LAB_0804ac9d:
    sVar2 = 0;
  }
  if (local_cc == (void *)0x0) {
    if ((int)sVar2 < 0) {
      sVar2 = _gfortran_runtime_error
                        ("Attempt to allocate negative amount of memory. Possible integer overflow")
      ;
    }
    if ((int)sVar2 < 1) {
      sVar2 = 1;
    }
    pvVar5 = malloc(sVar2);
    if (pvVar5 == (void *)0x0) {
      pvVar5 = (void *)_gfortran_os_error("Out of memory");
    }
    local_c8 = -1;
    local_cc = pvVar5;
    hdr_skip_wfftype(&local_f14,&local_99c);
    hdr_skip_wfftype(&local_fdc,&local_99c);
    hdr_skip_wfftype(&local_10a4,&local_99c);
    local_dc = 0x219;
    local_d4 = 1;
    local_d0 = local_ab8 * local_a08 * (int)local_a38;
    local_d8 = 1;
    iVar10 = local_ab8 * local_a08 * (int)local_a38;
    iVar1 = 0;
    if (-1 < iVar10) {
      iVar1 = iVar10;
    }
    if (local_ab8 * local_a08 * (int)local_a38 < 1) goto LAB_0804ade3;
    sVar2 = iVar1 * 8;
  }
  else {
    _gfortran_runtime_error_at
              ("At line 215 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'","eig0tmp");
LAB_0804ade3:
    sVar2 = 0;
  }
  if (local_e4 == (wffile_type *)0x0) {
    if ((int)sVar2 < 0) {
      sVar2 = _gfortran_runtime_error
                        ("Attempt to allocate negative amount of memory. Possible integer overflow")
      ;
    }
    if ((int)sVar2 < 1) {
      sVar2 = 1;
    }
    pwVar6 = (wffile_type *)malloc(sVar2);
    if (pwVar6 == (wffile_type *)0x0) {
      pwVar6 = (wffile_type *)_gfortran_os_error("Out of memory");
    }
    local_e0 = -1;
    local_f4 = 0x219;
    local_ec = 1;
    local_e8 = local_ab8 * local_a08 * local_a08 * 2 * (int)local_a38;
    local_f0 = 1;
    iVar10 = local_ab8 * local_a08 * local_a08 * 2 * (int)local_a38;
    iVar1 = 0;
    if (-1 < iVar10) {
      iVar1 = iVar10;
    }
    local_e4 = pwVar6;
    if (local_ab8 * local_a08 * local_a08 * 2 * (int)local_a38 < 1) goto LAB_0804af05;
    sVar2 = iVar1 * 8;
  }
  else {
    _gfortran_runtime_error_at
              ("At line 221 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'","eigen0");
LAB_0804af05:
    sVar2 = 0;
  }
  if (local_fc == (real_kind_8_ (*) [3] [1] [1] [1] [1])0x0) {
    if ((int)sVar2 < 0) {
      sVar2 = _gfortran_runtime_error
                        ("Attempt to allocate negative amount of memory. Possible integer overflow")
      ;
    }
    if ((int)sVar2 < 1) {
      sVar2 = 1;
    }
    paaaaarVar7 = (real_kind_8_ (*) [3] [1] [1] [1] [1])malloc(sVar2);
    if (paaaaarVar7 == (real_kind_8_ (*) [3] [1] [1] [1] [1])0x0) {
      paaaaarVar7 = (real_kind_8_ (*) [3] [1] [1] [1] [1])_gfortran_os_error("Out of memory");
    }
    local_f8 = -1;
    local_10c = 0x219;
    local_104 = 1;
    local_100 = local_ab8 * local_a08 * local_a08 * 2 * (int)local_a38;
    local_108 = 1;
    iVar10 = local_ab8 * local_a08 * local_a08 * 2 * (int)local_a38;
    iVar1 = 0;
    if (-1 < iVar10) {
      iVar1 = iVar10;
    }
    local_fc = paaaaarVar7;
    if (local_ab8 * local_a08 * local_a08 * 2 * (int)local_a38 < 1) goto LAB_0804b027;
    sVar2 = iVar1 * 8;
  }
  else {
    _gfortran_runtime_error_at
              ("At line 222 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'","eigen11");
LAB_0804b027:
    sVar2 = 0;
  }
  if (local_114 == (real_kind_8_ (*) [3] [1] [1] [1] [1])0x0) {
    if ((int)sVar2 < 0) {
      sVar2 = _gfortran_runtime_error
                        ("Attempt to allocate negative amount of memory. Possible integer overflow")
      ;
    }
    if ((int)sVar2 < 1) {
      sVar2 = 1;
    }
    paaaaarVar7 = (real_kind_8_ (*) [3] [1] [1] [1] [1])malloc(sVar2);
    if (paaaaarVar7 == (real_kind_8_ (*) [3] [1] [1] [1] [1])0x0) {
      paaaaarVar7 = (real_kind_8_ (*) [3] [1] [1] [1] [1])_gfortran_os_error("Out of memory");
    }
    local_110 = -1;
    local_124 = 0x219;
    local_11c = 1;
    local_118 = local_ab8 * local_a08 * local_a08 * 2 * (int)local_a38;
    local_120 = (hdr_type *)0x1;
    iVar10 = local_ab8 * local_a08 * local_a08 * 2 * (int)local_a38;
    iVar1 = 0;
    if (-1 < iVar10) {
      iVar1 = iVar10;
    }
    local_114 = paaaaarVar7;
    if (local_ab8 * local_a08 * local_a08 * 2 * (int)local_a38 < 1) goto LAB_0804b149;
    sVar2 = iVar1 * 8;
  }
  else {
    _gfortran_runtime_error_at
              ("At line 223 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'","eigen12");
LAB_0804b149:
    sVar2 = 0;
  }
  if (local_12c == (real_kind_8_ (*) [3] [1] [1] [1] [1])0x0) {
    if ((int)sVar2 < 0) {
      sVar2 = _gfortran_runtime_error
                        ("Attempt to allocate negative amount of memory. Possible integer overflow")
      ;
    }
    if ((int)sVar2 < 1) {
      sVar2 = 1;
    }
    paaaaarVar7 = (real_kind_8_ (*) [3] [1] [1] [1] [1])malloc(sVar2);
    if (paaaaarVar7 == (real_kind_8_ (*) [3] [1] [1] [1] [1])0x0) {
      paaaaarVar7 = (real_kind_8_ (*) [3] [1] [1] [1] [1])_gfortran_os_error("Out of memory");
    }
    local_128 = -1;
    bdtot0_index = 0;
    bdtot_index = 0;
    local_13b4 = local_ab8;
    local_9a4 = 1;
    local_12c = paaaaarVar7;
    if (0 < local_ab8) goto LAB_0804b1f7;
  }
  else {
    _gfortran_runtime_error_at
              ("At line 224 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'","eigen13");
LAB_0804b1f7:
    do {
      phVar3 = local_a38;
      local_9a0 = (hdr_type *)0x1;
      phVar11 = local_a38;
      if (0 < (int)local_a38) {
        do {
          local_a34 = local_a30->ngfft
                      [((int)local_9a0->ngfft + (local_9a4 + -1) * (int)local_a38 + -0x40) *
                       local_a24 + local_a2c + -0x10];
          wffreadeigk(local_cc,&DAT_08070d0c,&local_998,&local_9a0,&local_9a4,&local_a08,&local_a34,
                      local_c6c,&local_e4c);
          iVar1 = 1;
          while (iVar1 <= local_a34) {
            (*(real_kind_8_ (*) [4])&local_e4->unwff)[local_e0 + (iVar1 + bdtot0_index) * local_d8]
                 = *(real_kind_8_ *)((int)local_cc + (local_c8 + iVar1 * local_c0) * 8);
            iVar1 = iVar1 + 1;
          }
          wffreadeigk(local_144,&local_56c,&local_998,&local_9a0,&local_9a4,&local_a08,&local_a34,
                      local_c6c,&local_f14);
          iVar1 = 1;
          while (iVar1 <= local_a34 * local_a34 * 2) {
            (*local_fc)[local_f8 + (iVar1 + bdtot_index) * local_f0][0] =
                 *(real_kind_8_ *)((int)local_144 + (local_140 + iVar1 * local_138) * 8);
            iVar1 = iVar1 + 1;
          }
          wffreadeigk(local_144,&local_56c,&local_998,&local_9a0,&local_9a4,&local_a08,&local_a34,
                      local_c6c,&local_fdc);
          iVar1 = 1;
          while (iVar1 <= local_a34 * local_a34 * 2) {
            (*local_114)[local_110 + (iVar1 + bdtot_index) * local_108][0] =
                 *(real_kind_8_ *)((int)local_144 + (local_140 + iVar1 * local_138) * 8);
            iVar1 = iVar1 + 1;
          }
          pwVar16 = &local_10a4;
          rprimd = (wffile_type *)local_c6c;
          paaaaaauVar8 = (complex_kind_8_ (*) [1] [1] [1] [4] [1])&local_a34;
          wffreadeigk(local_144,&local_56c,&local_998,&local_9a0,&local_9a4,&local_a08,paaaaaauVar8,
                      rprimd,pwVar16);
          iVar1 = 1;
          while (iVar1 <= local_a34 * local_a34 * 2) {
            (*local_12c)[local_128 + (iVar1 + bdtot_index) * (int)local_120][0] =
                 *(real_kind_8_ *)((int)local_144 + (local_140 + iVar1 * local_138) * 8);
            iVar1 = iVar1 + 1;
          }
          bdtot0_index = bdtot0_index + local_a34;
          bdtot_index = bdtot_index + local_a34 * local_a34 * 2;
          bVar13 = local_9a0 != phVar3;
          local_9a0 = (hdr_type *)((int)&local_9a0->bantot + 1);
          phVar11 = local_120;
        } while (bVar13);
      }
      bVar13 = local_9a4 != local_13b4;
      local_9a4 = local_9a4 + 1;
    } while (bVar13);
  }
  wffclose(&local_e4c,&local_99c);
  wffclose(&local_f14,&local_99c);
  wffclose(&local_fdc,&local_99c);
  wffclose(&local_10a4,&local_99c);
  if (local_144 == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 246 of file optic.F90","Attempt to DEALLOCATE unallocated \'%s\'","eigtmp");
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
  paaaiVar4 = (integer_kind_4_ (*) [4] [4] [1])local_d84;
  wtk = (integer_kind_4_ (*) [4] [4] [1])local_bbc;
  mband = (integer_kind_4_ (*) [4] [4] [1])local_b74;
  metric(local_5b4,local_644,&DAT_08070d58,mband,wtk,paaaiVar4);
  matr3inv((real_kind_8_ (*) [4] [4])local_5b4,(real_kind_8_ (*) [4] [4])local_5fc);
  local_10b4 = 0x219;
  local_10ac = 1;
  local_10a8 = local_a38;
  local_10b0 = 1;
  phVar3 = (hdr_type *)0x0;
  if (-1 < (int)local_a38) {
    phVar3 = local_a38;
  }
  if ((int)local_a38 < 1) {
    sVar2 = 0;
  }
  else {
    sVar2 = (int)phVar3 * 8;
  }
  if (local_10bc == (integer_kind_4_ (*) [4] [4] [1])0x0) {
    if ((int)sVar2 < 0) {
      sVar2 = _gfortran_runtime_error
                        ("Attempt to allocate negative amount of memory. Possible integer overflow")
      ;
    }
    if ((int)sVar2 < 1) {
      sVar2 = 1;
    }
    wtk = (integer_kind_4_ (*) [4] [4] [1])malloc(sVar2);
    if (wtk == (integer_kind_4_ (*) [4] [4] [1])0x0) {
      wtk = (integer_kind_4_ (*) [4] [4] [1])_gfortran_os_error("Out of memory");
    }
    local_10b8 = 0xffffffff;
    mband = local_c38;
    local_10bc = wtk;
    getwtk(local_9c8,(integer_kind_4_ *)&local_a38,&local_abc,local_c38,(real_kind_8_ (*) [1])wtk);
    local_9c = 0x219;
    local_94 = 1;
    local_90 = local_ab8 * local_a08 * (int)local_a38;
    local_98 = 1;
    iVar10 = local_ab8 * local_a08 * (int)local_a38;
    iVar1 = 0;
    if (-1 < iVar10) {
      iVar1 = iVar10;
    }
    if (local_ab8 * local_a08 * (int)local_a38 < 1) goto LAB_0804b9c9;
    sVar2 = iVar1 * 8;
  }
  else {
    _gfortran_runtime_error_at
              ("At line 256 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'",&DAT_08070d5c);
LAB_0804b9c9:
    sVar2 = 0;
  }
  if (local_a4 == (void *)0x0) {
    if ((int)sVar2 < 0) {
      sVar2 = _gfortran_runtime_error
                        ("Attempt to allocate negative amount of memory. Possible integer overflow")
      ;
    }
    if ((int)sVar2 < 1) {
      sVar2 = 1;
    }
    pvVar5 = malloc(sVar2);
    if (pvVar5 == (void *)0x0) {
      pvVar5 = (void *)_gfortran_os_error("Out of memory");
    }
    local_a0 = -1;
    local_133c = "optic.F90";
    local_1338 = 0x105;
    local_1344 = (hdr_type *)0x80;
    local_1340 = 0xf;
    local_a4 = pvVar5;
    _gfortran_st_read(&local_1344);
    _gfortran_transfer_real(&local_1344,local_d7c,8);
    _gfortran_st_read_done(&local_1344);
    local_133c = "optic.F90";
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
    sVar2 = iVar1 * 8;
  }
  else {
    _gfortran_runtime_error_at
              ("At line 259 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'","doccde");
LAB_0804bbcf:
    sVar2 = 0;
  }
  if (local_8c == (void *)0x0) {
    if ((int)sVar2 < 0) {
      sVar2 = _gfortran_runtime_error
                        ("Attempt to allocate negative amount of memory. Possible integer overflow")
      ;
    }
    if ((int)sVar2 < 1) {
      sVar2 = 1;
    }
    pvVar5 = malloc(sVar2);
    if (pvVar5 == (void *)0x0) {
      pvVar5 = (void *)_gfortran_os_error("Out of memory");
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
    local_8c = pvVar5;
    if (local_ab4 < 1) goto LAB_0804bc8b;
    sVar2 = iVar1 * 8;
  }
  else {
    _gfortran_runtime_error_at
              ("At line 282 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'","cond_nd");
LAB_0804bc8b:
    sVar2 = 0;
  }
  if (local_74 == (void *)0x0) {
    if ((int)sVar2 < 0) {
      sVar2 = _gfortran_runtime_error
                        ("Attempt to allocate negative amount of memory. Possible integer overflow")
      ;
    }
    if ((int)sVar2 < 1) {
      sVar2 = 1;
    }
    pvVar5 = malloc(sVar2);
    if (pvVar5 == (void *)0x0) {
      pvVar5 = (void *)_gfortran_os_error("Out of memory");
    }
    local_70 = 0xffffffff;
    local_133c = "optic.F90";
    local_1338 = 0x11d;
    local_1344 = (hdr_type *)0x80;
    local_1340 = 0xf;
    local_74 = pvVar5;
    _gfortran_st_read(&local_1344);
    _gfortran_transfer_real(&local_1344,local_bd4,8);
    _gfortran_st_read_done(&local_1344);
    local_133c = "optic.F90";
    local_1338 = 0x11e;
    local_1314 = "(a,f10.5,a) Scissor shift     = Tolerance on closeness to singularities     =";
    local_1310 = 0xb;
    local_1344 = (hdr_type *)0x1000;
    local_1340 = 6;
    _gfortran_st_write(&local_1344);
    _gfortran_transfer_character
              (&local_1344," Scissor shift     = Tolerance on closeness to singularities     =",0x14
              );
    _gfortran_transfer_real(&local_1344,local_bd4,8);
    _gfortran_transfer_character
              (&local_1344," Ha(a,f10.5,a,f10.5,a) fermie            = eVeigtmp",3);
    _gfortran_st_write_done(&local_1344);
    local_133c = "optic.F90";
    local_1338 = 0x120;
    local_1344 = (hdr_type *)0x80;
    local_1340 = 0xf;
    _gfortran_st_read(&local_1344);
    _gfortran_transfer_real(&local_1344,local_d74,8);
    _gfortran_st_read_done(&local_1344);
    local_133c = "optic.F90";
    local_1338 = 0x121;
    local_1314 = "(a,f10.5,a) Scissor shift     = Tolerance on closeness to singularities     =";
    local_1310 = 0xb;
    local_1344 = (hdr_type *)0x1000;
    local_1340 = 6;
    _gfortran_st_write(&local_1344);
    _gfortran_transfer_character(&local_1344," Tolerance on closeness to singularities     =",0x2e);
    _gfortran_transfer_real(&local_1344,local_d74,8);
    _gfortran_transfer_character
              (&local_1344," Ha(a,f10.5,a,f10.5,a) fermie            = eVeigtmp",3);
    _gfortran_st_write_done(&local_1344);
    local_133c = "optic.F90";
    local_1338 = 0x123;
    local_1344 = (hdr_type *)0x80;
    local_1340 = 0xf;
    _gfortran_st_read(&local_1344);
    _gfortran_transfer_integer(&local_1344,&local_a10,4);
    _gfortran_st_read_done(&local_1344);
    local_133c = "optic.F90";
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
    local_133c = "optic.F90";
    local_1338 = 0x125;
    local_1314 = &DAT_0807092c;
    local_1310 = 3;
    local_1344 = (hdr_type *)0x1000;
    local_1340 = 6;
    _gfortran_st_write(&local_1344);
    _gfortran_transfer_character(&local_1344," linear coeffs to be calculated : (9i3)",0x22);
    _gfortran_st_write_done(&local_1344);
    local_133c = "optic.F90";
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
    local_133c = "optic.F90";
    local_1338 = 0x128;
    local_1344 = (hdr_type *)0x80;
    local_1340 = 0xf;
    _gfortran_st_read(&local_1344);
    _gfortran_transfer_integer(&local_1344,&local_a14,4);
    _gfortran_st_read_done(&local_1344);
    local_133c = "optic.F90";
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
    local_133c = "optic.F90";
    local_1338 = 0x12a;
    local_1314 = &DAT_0807092c;
    local_1310 = 3;
    local_1344 = (hdr_type *)0x1000;
    local_1340 = 6;
    _gfortran_st_write(&local_1344);
    _gfortran_transfer_character
              (&local_1344," non-linear coeffs to be calculated : (27i4)cond_kg",0x26);
    _gfortran_st_write_done(&local_1344);
    local_133c = "optic.F90";
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
    mband = (integer_kind_4_ (*) [4] [4] [1])0x0;
    _gfortran_transfer_array(&local_1344,&local_1194,4,0);
    _gfortran_st_write_done(&local_1344);
    local_133c = "optic.F90";
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
    sVar2 = iVar1 * 0x48;
  }
  else {
    _gfortran_runtime_error_at
              ("At line 282 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'","cond_kg");
LAB_0804c480:
    sVar2 = 0;
  }
  if (local_c08 == (integer_kind_4_ (*) [4] [4] [1])0x0) {
    if ((int)sVar2 < 0) {
      sVar2 = _gfortran_runtime_error
                        ("Attempt to allocate negative amount of memory. Possible integer overflow")
      ;
    }
    if ((int)sVar2 < 1) {
      sVar2 = 1;
    }
    wtk = (integer_kind_4_ (*) [4] [4] [1])malloc(sVar2);
    if (wtk == (integer_kind_4_ (*) [4] [4] [1])0x0) {
      wtk = (integer_kind_4_ (*) [4] [4] [1])_gfortran_os_error("Out of memory");
    }
    local_c04 = 0xfffffff3;
    mband = local_c6c._4_4_;
    local_c08 = wtk;
    sym2cart(local_644,&local_abc,local_bbc,local_c6c._4_4_,wtk);
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
    phVar3 = local_a38;
    if ((int)local_a38 < 0) {
      phVar3 = (hdr_type *)0x0;
    }
    local_aec = (int)phVar3 * local_af8;
    local_ae8 = 1;
    local_ae4 = 3;
    local_ae0 = local_aec * 3;
    local_adc = 1;
    local_ad8 = local_ab8;
    iVar10 = local_ab8;
    if (local_ab8 < 0) {
      iVar10 = 0;
    }
    phVar11 = (hdr_type *)(((iVar1 * -2 + -3) - local_af8) + local_aec * -4);
    if (local_ab8 < 1 || (local_a08 < 1 || (int)local_a38 < 1)) goto LAB_0804c6a4;
    sVar2 = iVar10 * local_ae0 * 0x10;
  }
  else {
    _gfortran_runtime_error_at
              ("At line 304 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'","symcart");
LAB_0804c6a4:
    sVar2 = 0;
  }
  if (local_b28 == (complex_kind_8_ (*) [1] [1] [1] [4] [1])0x0) {
    if ((int)sVar2 < 0) {
      sVar2 = _gfortran_runtime_error
                        ("Attempt to allocate negative amount of memory. Possible integer overflow")
      ;
    }
    if ((int)sVar2 < 1) {
      sVar2 = 1;
    }
    paaaaaauVar8 = (complex_kind_8_ (*) [1] [1] [1] [4] [1])malloc(sVar2);
    if (paaaaaauVar8 == (complex_kind_8_ (*) [1] [1] [1] [4] [1])0x0) {
      paaaaaauVar8 = (complex_kind_8_ (*) [1] [1] [1] [4] [1])_gfortran_os_error("Out of memory");
    }
    local_133c = "optic.F90";
    local_1338 = 0x134;
    local_1344 = (hdr_type *)0x80;
    local_1340 = 6;
    local_b28 = paaaaaauVar8;
    local_b24 = phVar11;
    _gfortran_st_write(&local_1344);
    _gfortran_transfer_character(&local_1344," optic : Call pmat2cart optic : Call linoptpmat",0x17)
    ;
    _gfortran_st_write_done(&local_1344);
    rprimd = (wffile_type *)local_bbc;
    paaaiVar4 = (integer_kind_4_ (*) [4] [4] [1])&local_ab8;
    wtk = (integer_kind_4_ (*) [4] [4] [1])&local_a38;
    mband = (integer_kind_4_ (*) [4] [4] [1])&local_a08;
    paaaaaauVar8 = local_b28;
    pmat2cart(local_fc,local_114,local_12c,(integer_kind_4_ *)mband,(integer_kind_4_ *)wtk,
              (integer_kind_4_ *)paaaiVar4,local_b28,(real_kind_8_ (*) [4] [4])rprimd);
    local_133c = "optic.F90";
    local_1338 = 0x141;
    local_1344 = (hdr_type *)0x80;
    local_1340 = 6;
    _gfortran_st_write(&local_1344);
    pphVar15 = (hdr_type **)0x14;
    pcVar14 = " optic : Call linoptpmat";
    _gfortran_transfer_character(&local_1344," optic : Call linoptpmat",0x14);
    _gfortran_st_write_done(&local_1344);
    local_135c = local_a10;
    local_30 = (hdr_type *)0x1;
    if ((int)local_a10 < 1) goto LAB_0804ce95;
  }
  else {
    pphVar15 = (hdr_type **)0x8070ec5;
    pcVar14 = "Attempting to allocate already allocated array \'%s\'";
    _gfortran_runtime_error_at
              ("At line 307 of file optic.F90",
               "Attempting to allocate already allocated array \'%s\'","pmat");
  }
  do {
    local_9cc = (int)ROUND((double)local_9f4[&local_30[-1].field_0x34f] / 10.0);
    local_9d0 = local_9f4[&local_30[-1].field_0x34f] % 10;
    local_133c = "optic.F90";
    local_1338 = 0x146;
    local_1344 = (hdr_type *)0x80;
    local_1340 = 6;
    _gfortran_st_write(&local_1344,pcVar14,pphVar15,mband,wtk,paaaiVar4,paaaaaauVar8,rprimd,pwVar16)
    ;
    _gfortran_transfer_character
              (&local_1344," linopt Attempt to allocate a negative amount of memory.",8);
    _gfortran_transfer_integer(&local_1344,&local_9cc,4);
    _gfortran_transfer_integer(&local_1344,&local_9d0,4);
    _gfortran_st_write_done(&local_1344);
    int2char4(&local_9cc,local_bc0,4);
    int2char4(&local_9d0,local_bc4,4);
    _gfortran_string_trim(&local_11a8,&local_11ac,0x100,local_568);
    sVar2 = (local_11a8 + 1) * 0x20;
    if ((int)sVar2 < 0) {
      sVar2 = _gfortran_runtime_error("Attempt to allocate a negative amount of memory.");
    }
    if ((int)sVar2 < 1) {
      sVar2 = 1;
    }
    pvVar5 = malloc(sVar2);
    if (pvVar5 == (void *)0x0) {
      pvVar5 = (void *)_gfortran_os_error("Memory allocation failed");
    }
    _gfortran_concat_string
              (local_11a8 + 1,pvVar5,local_11a8,local_11ac,1,
               "_ optic : Call nlinopt nlinopt At line 351 of file optic.F90");
    if ((0 < local_11a8) && (local_11ac != (void *)0x0)) {
      free(local_11ac);
    }
    _gfortran_string_trim(&local_11a0,&local_11a4,4,local_bc0);
    sVar2 = (local_11a8 + 1 + local_11a0) * 0x20;
    if ((int)sVar2 < 0) {
      sVar2 = _gfortran_runtime_error("Attempt to allocate a negative amount of memory.");
    }
    if ((int)sVar2 < 1) {
      sVar2 = 1;
    }
    pvVar9 = malloc(sVar2);
    if (pvVar9 == (void *)0x0) {
      pvVar9 = (void *)_gfortran_os_error("Memory allocation failed");
    }
    _gfortran_concat_string
              (local_11a8 + 1 + local_11a0,pvVar9,local_11a8 + 1,pvVar5,local_11a0,local_11a4);
    if ((0 < local_11a0) && (local_11a4 != (void *)0x0)) {
      free(local_11a4);
    }
    if (pvVar5 != (void *)0x0) {
      free(pvVar5);
    }
    sVar2 = (local_11a8 + local_11a0 + 2) * 0x20;
    if ((int)sVar2 < 0) {
      sVar2 = _gfortran_runtime_error("Attempt to allocate a negative amount of memory.");
    }
    if ((int)sVar2 < 1) {
      sVar2 = 1;
    }
    pvVar5 = malloc(sVar2);
    if (pvVar5 == (void *)0x0) {
      pvVar5 = (void *)_gfortran_os_error("Memory allocation failed");
    }
    _gfortran_concat_string
              (local_11a8 + local_11a0 + 2,pvVar5,local_11a8 + 1 + local_11a0,pvVar9,1,
               "_ optic : Call nlinopt nlinopt At line 351 of file optic.F90");
    if (pvVar9 != (void *)0x0) {
      free(pvVar9);
    }
    _gfortran_string_trim(&local_1198,&local_119c,4,local_bc4);
    sVar2 = (local_11a8 + local_11a0 + 2 + local_1198) * 0x20;
    if ((int)sVar2 < 0) {
      sVar2 = _gfortran_runtime_error("Attempt to allocate a negative amount of memory.");
    }
    if ((int)sVar2 < 1) {
      sVar2 = 1;
    }
    pvVar9 = malloc(sVar2);
    if (pvVar9 == (void *)0x0) {
      pvVar9 = (void *)_gfortran_os_error("Memory allocation failed");
    }
    _gfortran_concat_string
              (local_11a8 + local_11a0 + 2 + local_1198,pvVar9,local_11a8 + local_11a0 + 2,pvVar5,
               local_1198,local_119c);
    if ((0 < local_1198) && (local_119c != (void *)0x0)) {
      free(local_119c);
    }
    if (pvVar5 != (void *)0x0) {
      free(pvVar5);
    }
    sVar2 = local_11a8 + local_11a0 + 2 + local_1198;
    if ((int)sVar2 < 0x100) {
      memmove(local_d6c,pvVar9,sVar2);
      memset(auStack3434 + (sVar2 - 2),0x20,0x100 - sVar2);
    }
    else {
      memmove(local_d6c,pvVar9,0x100);
    }
    if (pvVar9 != (void *)0x0) {
      free(pvVar9);
    }
    paaaaaauVar8 = (complex_kind_8_ (*) [1] [1] [1] [4] [1])&local_a08;
    wtk = (integer_kind_4_ (*) [4] [4] [1])&local_abc;
    pphVar15 = &local_a38;
    pcVar14 = (char *)local_d84;
    mband = local_10bc;
    paaaiVar4 = local_c08;
    rprimd = local_ad4;
    pwVar16 = local_e4;
    linopt(&local_ab8);
    bVar13 = local_30 != local_135c;
    local_30 = (hdr_type *)((int)&local_30->bantot + 1);
  } while (bVar13);
LAB_0804ce95:
  local_133c = "optic.F90";
  local_1338 = 0x150;
  local_1344 = (hdr_type *)0x80;
  local_1340 = 6;
  _gfortran_st_write(&local_1344,pcVar14,pphVar15,mband,wtk,paaaiVar4,paaaaaauVar8,rprimd,pwVar16);
  _gfortran_transfer_character
            (&local_1344," optic : Call nlinopt nlinopt At line 351 of file optic.F90",0x15);
  _gfortran_st_write_done(&local_1344);
  local_30 = (hdr_type *)0x1;
  if (0 < local_a14) {
    do {
      local_a3c = (int)ROUND((double)local_ab0[(int)local_30 + -1] / 100.0);
      local_a40 = (int)ROUND(((double)(int)ROUND((double)local_ab0[(int)local_30 + -1] / 100.0) *
                              -100.0 + (double)local_ab0[(int)local_30 + -1]) / 10.0);
      local_a44 = local_ab0[(int)local_30 + -1] % 10;
      int2char4(&local_a3c,local_bc0,4,mband,wtk,paaaiVar4,paaaaaauVar8,rprimd,pwVar16);
      int2char4(&local_a40,local_bc4,4);
      int2char4(&local_a44,local_bc8,4);
      _gfortran_string_trim(&local_11c8,&local_11cc,0x100,local_568);
      sVar2 = (local_11c8 + 1) * 0x20;
      if ((int)sVar2 < 0) {
        sVar2 = _gfortran_runtime_error("Attempt to allocate a negative amount of memory.");
      }
      if ((int)sVar2 < 1) {
        sVar2 = 1;
      }
      pvVar5 = malloc(sVar2);
      if (pvVar5 == (void *)0x0) {
        pvVar5 = (void *)_gfortran_os_error("Memory allocation failed");
      }
      _gfortran_concat_string
                (local_11c8 + 1,pvVar5,local_11c8,local_11cc,1,
                 "_ optic : Call nlinopt nlinopt At line 351 of file optic.F90");
      if ((0 < local_11c8) && (local_11cc != (void *)0x0)) {
        free(local_11cc);
      }
      _gfortran_string_trim(&local_11c0,&local_11c4,4,local_bc0);
      sVar2 = (local_11c8 + 1 + local_11c0) * 0x20;
      if ((int)sVar2 < 0) {
        sVar2 = _gfortran_runtime_error("Attempt to allocate a negative amount of memory.");
      }
      if ((int)sVar2 < 1) {
        sVar2 = 1;
      }
      pvVar9 = malloc(sVar2);
      if (pvVar9 == (void *)0x0) {
        pvVar9 = (void *)_gfortran_os_error("Memory allocation failed");
      }
      _gfortran_concat_string
                (local_11c8 + 1 + local_11c0,pvVar9,local_11c8 + 1,pvVar5,local_11c0,local_11c4);
      if ((0 < local_11c0) && (local_11c4 != (void *)0x0)) {
        free(local_11c4);
      }
      if (pvVar5 != (void *)0x0) {
        free(pvVar5);
      }
      sVar2 = (local_11c8 + local_11c0 + 2) * 0x20;
      if ((int)sVar2 < 0) {
        sVar2 = _gfortran_runtime_error("Attempt to allocate a negative amount of memory.");
      }
      if ((int)sVar2 < 1) {
        sVar2 = 1;
      }
      pvVar5 = malloc(sVar2);
      if (pvVar5 == (void *)0x0) {
        pvVar5 = (void *)_gfortran_os_error("Memory allocation failed");
      }
      _gfortran_concat_string
                (local_11c8 + local_11c0 + 2,pvVar5,local_11c8 + 1 + local_11c0,pvVar9,1,
                 "_ optic : Call nlinopt nlinopt At line 351 of file optic.F90");
      if (pvVar9 != (void *)0x0) {
        free(pvVar9);
      }
      _gfortran_string_trim(&local_11b8,&local_11bc,4,local_bc4);
      sVar2 = (local_11c8 + local_11c0 + 2 + local_11b8) * 0x20;
      if ((int)sVar2 < 0) {
        sVar2 = _gfortran_runtime_error("Attempt to allocate a negative amount of memory.");
      }
      if ((int)sVar2 < 1) {
        sVar2 = 1;
      }
      pvVar9 = malloc(sVar2);
      if (pvVar9 == (void *)0x0) {
        pvVar9 = (void *)_gfortran_os_error("Memory allocation failed");
      }
      _gfortran_concat_string
                (local_11c8 + local_11c0 + 2 + local_11b8,pvVar9,local_11c8 + local_11c0 + 2,pvVar5,
                 local_11b8,local_11bc);
      if ((0 < local_11b8) && (local_11bc != (void *)0x0)) {
        free(local_11bc);
      }
      if (pvVar5 != (void *)0x0) {
        free(pvVar5);
      }
      sVar2 = (local_11c8 + local_11c0 + local_11b8 + 3) * 0x20;
      if ((int)sVar2 < 0) {
        sVar2 = _gfortran_runtime_error("Attempt to allocate a negative amount of memory.");
      }
      if ((int)sVar2 < 1) {
        sVar2 = 1;
      }
      pvVar5 = malloc(sVar2);
      if (pvVar5 == (void *)0x0) {
        pvVar5 = (void *)_gfortran_os_error("Memory allocation failed");
      }
      _gfortran_concat_string
                (local_11c8 + local_11c0 + local_11b8 + 3,pvVar5,
                 local_11c8 + local_11c0 + 2 + local_11b8,pvVar9,1,
                 "_ optic : Call nlinopt nlinopt At line 351 of file optic.F90");
      if (pvVar9 != (void *)0x0) {
        free(pvVar9);
      }
      _gfortran_string_trim(&local_11b0,&local_11b4,4,local_bc8);
      sVar2 = (local_11c8 + local_11c0 + local_11b8 + 3 + local_11b0) * 0x20;
      if ((int)sVar2 < 0) {
        sVar2 = _gfortran_runtime_error("Attempt to allocate a negative amount of memory.");
      }
      if ((int)sVar2 < 1) {
        sVar2 = 1;
      }
      pvVar9 = malloc(sVar2);
      if (pvVar9 == (void *)0x0) {
        pvVar9 = (void *)_gfortran_os_error("Memory allocation failed");
      }
      _gfortran_concat_string
                (local_11c8 + local_11c0 + local_11b8 + 3 + local_11b0,pvVar9,
                 local_11c8 + local_11c0 + local_11b8 + 3,pvVar5,local_11b0,local_11b4);
      if ((0 < local_11b0) && (local_11b4 != (void *)0x0)) {
        free(local_11b4);
      }
      if (pvVar5 != (void *)0x0) {
        free(pvVar5);
      }
      sVar2 = local_11c8 + local_11c0 + local_11b8 + 3 + local_11b0;
      if ((int)sVar2 < 0x100) {
        memmove(local_d6c,pvVar9,sVar2);
        memset(auStack3434 + (sVar2 - 2),0x20,0x100 - sVar2);
      }
      else {
        memmove(local_d6c,pvVar9,0x100);
      }
      if (pvVar9 != (void *)0x0) {
        free(pvVar9);
      }
      local_133c = "optic.F90";
      local_1338 = 0x15a;
      local_1344 = (hdr_type *)0x80;
      local_1340 = 6;
      _gfortran_st_write(&local_1344);
      _gfortran_transfer_character(&local_1344," nlinopt At line 351 of file optic.F90",9);
      _gfortran_transfer_integer(&local_1344,local_ab0 + (int)local_30 + -1,4);
      _gfortran_transfer_integer(&local_1344,&local_a3c,4);
      _gfortran_transfer_integer(&local_1344,&local_a40,4);
      _gfortran_transfer_integer(&local_1344,&local_a44,4);
      _gfortran_st_write_done(&local_1344);
      pwVar16 = (wffile_type *)&local_14c;
      paaaaaauVar8 = (complex_kind_8_ (*) [1] [1] [1] [4] [1])&local_a08;
      wtk = (integer_kind_4_ (*) [4] [4] [1])&local_abc;
      mband = local_10bc;
      paaaiVar4 = local_c08;
      rprimd = local_e4;
      nlinopt(&local_ab8,local_d84,&local_a38);
      bVar13 = local_30 != (hdr_type *)local_a14;
      local_30 = (hdr_type *)((int)local_30 + 1);
    } while (bVar13);
  }
  if (local_a30 == (hdr_type *)0x0) {
    _gfortran_runtime_error_at
              ("At line 351 of file optic.F90","Attempt to DEALLOCATE unallocated \'%s\'","nband");
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
              ("At line 355 of file optic.F90","Attempt to DEALLOCATE unallocated \'%s\'","cond_kg")
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
  if (local_c6c._4_4_ == (integer_kind_4_ (*) [4] [4] [1])0x0) {
    _gfortran_runtime_error_at
              ("At line 357 of file optic.F90","Attempt to DEALLOCATE unallocated \'%s\'","symrel");
  }
  free(local_c6c._4_4_);
  local_c6c._4_4_ = (integer_kind_4_ (*) [4] [4] [1])0x0;
  if (local_c08 == (integer_kind_4_ (*) [4] [4] [1])0x0) {
    _gfortran_runtime_error_at
              ("At line 357 of file optic.F90","Attempt to DEALLOCATE unallocated \'%s\'","symcart")
    ;
  }
  free(local_c08);
  local_c08 = (integer_kind_4_ (*) [4] [4] [1])0x0;
  if (local_b28 == (complex_kind_8_ (*) [1] [1] [1] [4] [1])0x0) {
    _gfortran_runtime_error_at
              ("At line 357 of file optic.F90","Attempt to DEALLOCATE unallocated \'%s\'","pmat");
  }
  free(local_b28);
  local_b28 = (complex_kind_8_ (*) [1] [1] [1] [4] [1])0x0;
  hdr_clean((hdr_type *)local_994);
  if (local_10bc != (integer_kind_4_ (*) [4] [4] [1])0x0) {
    free(local_10bc);
  }
  local_10bc = (integer_kind_4_ (*) [4] [4] [1])0x0;
  if (local_c6c._4_4_ != (integer_kind_4_ (*) [4] [4] [1])0x0) {
    free(local_c6c._4_4_);
  }
  local_c6c._4_4_ = (integer_kind_4_ (*) [4] [4] [1])0x0;
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
  void *pvVar13;
  size_t __size;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  size_t sVar23;
  size_t extraout_EDX;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  bool bVar29;
  ulonglong uVar30;
  int *piVar32;
  char *pcVar33;
  undefined8 *puVar34;
  longlong lVar31;
  double *pdVar35;
  ulonglong uVar36;
  undefined4 uVar38;
  undefined8 uVar37;
  undefined4 local_420;
  undefined4 local_41c;
  char *local_418;
  undefined4 local_414;
  undefined4 local_400;
  undefined *local_3fc;
  char *local_3f0;
  undefined4 local_3ec;
  char *local_3e8;
  undefined4 local_3e4;
  undefined4 local_3d0;
  char *local_3cc;
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
  int local_f8;
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
  iVar20 = 0;
  if (-1 < (int)(uVar15 * *param_1)) {
    iVar20 = uVar15 * *param_1;
  }
  iVar21 = ~uVar15 - iVar20;
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
  iVar22 = ((~uVar16 - iVar26) - iVar17) - iVar27;
  uVar18 = 0;
  if (-1 < (int)*param_7) {
    uVar18 = *param_7;
  }
  iVar28 = 0;
  if (-1 < (int)(uVar18 * *param_1)) {
    iVar28 = uVar18 * *param_1;
  }
  chi[0]._0_4_ = (void *)0x0;
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
  if (*param_15 <= 0.0) {
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
  if (*param_16 < 0.0) {
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
  if (*param_17 <= 0.008999999612569809) {
    if (0.01499999966472387 < *param_17) {
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
  chi[0]._8_4_ = 0x421;
  iVar6 = *param_14;
  chi[0]._12_4_ = 1;
  iVar25 = 0;
  if (-1 < *param_14) {
    iVar25 = *param_14;
  }
  if (*param_14 < 1) {
    sVar23 = 0;
  }
  else {
    sVar23 = iVar25 << 4;
  }
  if (chi[0]._0_4_ == (void *)0x0) {
    if ((int)sVar23 < 0) {
      sVar23 = _gfortran_runtime_error();
    }
    if ((int)sVar23 < 1) {
      sVar23 = 1;
    }
    pvVar13 = malloc(sVar23);
    if (pvVar13 == (void *)0x0) {
      pvVar13 = (void *)_gfortran_os_error();
    }
    chi[0]._4_4_ = -1;
    eps[0]._8_4_ = 0x421;
    local_fc = 1;
    local_f8 = *param_14;
    eps[0]._12_4_ = 1;
    iVar25 = 0;
    if (-1 < *param_14) {
      iVar25 = *param_14;
    }
    chi[0]._0_4_ = pvVar13;
    if (*param_14 < 1) goto LAB_0804eeb6;
    sVar23 = iVar25 << 4;
  }
  else {
    _gfortran_runtime_error_at();
LAB_0804eeb6:
    sVar23 = 0;
  }
  if (eps[0]._0_4_ == (void *)0x0) {
    if ((int)sVar23 < 0) {
      sVar23 = _gfortran_runtime_error();
    }
    if ((int)sVar23 < 1) {
      sVar23 = 1;
    }
    pvVar13 = malloc(sVar23);
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
    local_21c = *param_17 * 0.0 - 0.0;
    local_214 = *param_17 + 0.0;
    const = (real_kind_8_)(1.0 / ((double)*param_5 * *param_2));
    local_6c = 27.21138381958008;
    local_268 = pvVar13;
    _gfortran_string_trim();
    sVar23 = (local_280 + 0xb) * 0x20;
    if (-1 < (int)sVar23) goto LAB_0804f101;
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
  sVar23 = extraout_EDX;
LAB_0804f101:
  __size = 1;
  if (0 < (int)sVar23) {
    __size = sVar23;
  }
  pvVar13 = malloc(__size);
  if (pvVar13 == (void *)0x0) {
    pvVar13 = (void *)_gfortran_os_error();
  }
  uVar30 = CONCAT44(local_284,local_280);
  _gfortran_concat_string();
  if ((0 < local_280) && (local_284 != (void *)0x0)) {
    free(local_284);
  }
  sVar23 = local_280 + 0xb;
  if ((int)sVar23 < 0x100) {
    uVar30 = uVar30 & 0xffffffff00000000;
    memmove(local_20c,pvVar13,sVar23);
    uVar36 = uVar30 & 0xffffffff00000000 | (ulonglong)(0x100 - sVar23);
    uVar30 = CONCAT44(0x20,auStack513 + local_280);
    memset(auStack513 + local_280,0x20,0x100 - sVar23);
  }
  else {
    uVar36 = CONCAT44((int)(uVar30 >> 0x20),0x100);
    uVar30 = CONCAT44(pvVar13,local_20c);
    memmove(local_20c,pvVar13,0x100);
  }
  iVar25 = local_24c;
  if (pvVar13 != (void *)0x0) {
    uVar30 = uVar30 & 0xffffffff00000000;
    free(pvVar13);
    iVar25 = local_24c;
  }
  while (iVar25 <= local_248) {
    iVar24 = local_258;
    while (iVar24 <= local_254) {
      *(undefined8 *)((int)local_268 + (local_264 + local_250 * iVar25 + iVar24 * local_25c) * 8) =
           0;
      iVar24 = iVar24 + 1;
    }
    iVar25 = iVar25 + 1;
  }
  iVar25 = *param_5;
  local_54 = 1;
  if (0 < iVar25) {
    do {
      iVar24 = 1;
      while (iVar24 < 4) {
        iVar19 = 1;
        while (iVar19 < 4) {
          *(undefined8 *)
           ((int)local_244 +
           ((iVar19 + local_234 + -1) * local_238 +
           local_22c * (iVar24 + local_228 + -1) + local_240) * 8) =
               *(undefined8 *)(param_6 + (iVar19 + local_54 * 9 + -0xd + iVar24 * 3) * 8);
          iVar19 = iVar19 + 1;
        }
        iVar24 = iVar24 + 1;
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
      bVar29 = local_54 != iVar25;
      local_54 = local_54 + 1;
    } while (bVar29);
  }
  emin = 0.0;
  emax = 0.0;
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
                       (param_9 + (uVar15 * local_60 + local_220 * iVar20 + local_5c + iVar21) * 8);
              if (dVar1 < (double)emin) {
                emin = (real_kind_8_)dVar1;
              }
              dVar1 = *(double *)
                       (param_9 + (uVar15 * local_60 + local_220 * iVar20 + local_5c + iVar21) * 8);
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
  iVar25 = 1;
  while (iVar25 <= iVar6) {
    iVar24 = (iVar25 * chi[0]._12_4_ + chi[0]._4_4_) * 0x10;
    *(undefined8 *)(iVar24 + (int)chi[0]._0_4_) = 0;
    *(undefined8 *)(iVar24 + 8 + (int)chi[0]._0_4_) = 0;
    iVar25 = iVar25 + 1;
  }
  iVar6 = *param_3;
  local_220 = 1;
  if (0 < iVar6) {
    do {
      local_418 = "linopt.F90";
      local_414 = 0xbc;
      local_420 = 0x80;
      local_41c = 6;
      _gfortran_st_write(&local_420,(int)(uVar30 >> 0x20),uVar36);
      uVar38 = (undefined4)(uVar36 >> 0x20);
      _gfortran_transfer_integer();
      _gfortran_transfer_character();
      uVar36 = CONCAT44(uVar38,4);
      piVar32 = param_3;
      _gfortran_transfer_integer();
      uVar30 = ZEXT48(piVar32) << 0x20;
      _gfortran_st_write_done();
      iVar25 = *param_1;
      local_60 = 1;
      if (0 < iVar25) {
        do {
          uVar7 = *param_7;
          local_5c = 1;
          if (0 < (int)uVar7) {
            do {
              dVar1 = *(double *)
                       (param_9 + (uVar15 * local_60 + local_220 * iVar20 + local_5c + iVar21) * 8);
              if (dVar1 < *param_10) {
                uVar8 = *param_7;
                local_58 = local_5c;
                if ((int)local_5c <= (int)uVar8) {
                  do {
                    dVar2 = *(double *)
                             (param_9 +
                             (uVar15 * local_60 + local_220 * iVar20 + local_58 + iVar21) * 8);
                    if (*param_10 < dVar2) {
                      dVar2 = (dVar1 - dVar2) - *param_16;
                      dVar9 = dVar2 / (*param_16 + dVar2);
                      b11._0_8_ = 0.0;
                      b11._8_8_ = 0.0;
                      local_48 = 1;
                      do {
                        local_44 = 1;
                        do {
                          dVar3 = *(double *)
                                   ((int)local_268 +
                                   (local_25c * local_48 + local_250 * local_44 + local_264) * 8);
                          iVar24 = (uVar16 * local_58 + local_220 * iVar26 + local_5c +
                                    iVar27 * local_60 + iVar17 * local_48 + iVar22) * 0x10;
                          dVar4 = *(double *)(iVar24 + param_11);
                          dVar5 = *(double *)(iVar24 + 8 + param_11);
                          dVar10 = dVar3 * dVar4 - dVar5 * 0.0;
                          dVar4 = dVar4 * 0.0 + dVar5 * dVar3;
                          iVar24 = (uVar16 * local_58 + local_220 * iVar26 + local_5c +
                                    iVar27 * local_60 + iVar17 * local_44 + iVar22) * 0x10;
                          dVar3 = *(double *)(iVar24 + param_11);
                          dVar5 = -*(double *)(iVar24 + 8 + param_11);
                          b11._0_8_ = b11._0_8_ + (dVar10 * dVar3 - dVar4 * dVar5);
                          b11._8_8_ = b11._8_8_ + dVar3 * dVar4 + dVar5 * dVar10;
                          bVar29 = local_44 != 3;
                          local_44 = local_44 + 1;
                        } while (bVar29);
                        bVar29 = local_48 != 3;
                        local_48 = local_48 + 1;
                      } while (bVar29);
                      dVar4 = (double)const * b11._0_8_ - b11._8_8_ * 0.0;
                      dVar3 = b11._0_8_ * 0.0 + b11._8_8_ * (double)const;
                      dVar5 = dVar4 * dVar9 - dVar3 * 0.0;
                      dVar4 = dVar9 * dVar3 + dVar4 * 0.0;
                      dVar3 = dVar5 * dVar9 - dVar4 * 0.0;
                      dVar4 = dVar9 * dVar4 + dVar5 * 0.0;
                      dVar9 = (dVar2 * dVar2) / 1.0;
                      dVar5 = dVar3 * dVar9 - dVar4 * 0.0;
                      dVar9 = dVar3 * 0.0 + dVar9 * dVar4;
                      iVar24 = *param_14;
                      local_50 = 2;
                      if (1 < iVar24) {
                        do {
                          local_27c = local_21c + *param_15 * (double)(local_50 + -1);
                          local_274 = local_214 + 0.0;
                          iVar19 = (chi[0]._12_4_ * local_50 + chi[0]._4_4_) * 0x10;
                          dVar3 = *(double *)(iVar19 + 8 + (int)chi[0]._0_4_);
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
                          dVar10 = 0.0 - local_274;
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
                          iVar14 = (chi[0]._12_4_ * local_50 + chi[0]._4_4_) * 0x10;
                          *(double *)(iVar14 + (int)chi[0]._0_4_) =
                               (dVar12 * dVar10 - dVar4 * 0.0) +
                               *(double *)(iVar19 + (int)chi[0]._0_4_);
                          *(double *)(iVar14 + 8 + (int)chi[0]._0_4_) =
                               dVar4 * dVar12 + dVar10 * 0.0 + dVar3;
                          bVar29 = local_50 != iVar24;
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
          bVar29 = local_60 != iVar25;
          local_60 = local_60 + 1;
        } while (bVar29);
      }
      bVar29 = local_220 != iVar6;
      local_220 = local_220 + 1;
    } while (bVar29);
  }
  uVar38 = (undefined4)(uVar36 >> 0x20);
  local_418 = "linopt.F90";
  local_414 = 0xe1;
  local_3fc = local_20c;
  local_400 = 0x100;
  local_3e8 = 
  "FORMATTEDWRITE(a) # Energy(eV)         Im(chi1(w))(a,2i3,a) #calculated the component:of linear susceptibilitycalculated the component:(a,2es16.6) #broadening: with broadening:(a,es16.6) #scissors shift:and scissors shift:(a,es16.6,a,es16.6,a) #energy window:eVHaenergy window:(2es16.6)"
  ;
  local_3e4 = 9;
  local_3cc = 
  "WRITE(a) # Energy(eV)         Im(chi1(w))(a,2i3,a) #calculated the component:of linear susceptibilitycalculated the component:(a,2es16.6) #broadening: with broadening:(a,es16.6) #scissors shift:and scissors shift:(a,es16.6,a,es16.6,a) #energy window:eVHaenergy window:(2es16.6)"
  ;
  local_3d0 = 5;
  local_420 = 0x4900;
  local_41c = 0x5c;
  _gfortran_st_open();
  local_418 = "linopt.F90";
  local_414 = 0xe3;
  local_3f0 = 
  "(a) # Energy(eV)         Im(chi1(w))(a,2i3,a) #calculated the component:of linear susceptibilitycalculated the component:(a,2es16.6) #broadening: with broadening:(a,es16.6) #scissors shift:and scissors shift:(a,es16.6,a,es16.6,a) #energy window:eVHaenergy window:(2es16.6)"
  ;
  local_3ec = 3;
  local_420 = 0x1000;
  local_41c = 0x5c;
  _gfortran_st_write();
  _gfortran_transfer_character
            (&local_420,
                          
             " # Energy(eV)         Im(chi1(w))(a,2i3,a) #calculated the component:of linear susceptibilitycalculated the component:(a,2es16.6) #broadening: with broadening:(a,es16.6) #scissors shift:and scissors shift:(a,es16.6,a,es16.6,a) #energy window:eVHaenergy window:(2es16.6)"
             ,0x21,uVar38);
  _gfortran_st_write_done();
  local_418 = "linopt.F90";
  local_414 = 0xe4;
  local_3f0 = 
  "(a,2i3,a) #calculated the component:of linear susceptibilitycalculated the component:(a,2es16.6) #broadening: with broadening:(a,es16.6) #scissors shift:and scissors shift:(a,es16.6,a,es16.6,a) #energy window:eVHaenergy window:(2es16.6)"
  ;
  local_3ec = 9;
  local_420 = 0x1000;
  local_41c = 0x5c;
  _gfortran_st_write();
  _gfortran_transfer_character
            (&local_420,
                          
             " #calculated the component:of linear susceptibilitycalculated the component:(a,2es16.6) #broadening: with broadening:(a,es16.6) #scissors shift:and scissors shift:(a,es16.6,a,es16.6,a) #energy window:eVHaenergy window:(2es16.6)"
             ,0x1b,uVar38);
  _gfortran_transfer_integer(&local_420,param_12,4,uVar38);
  _gfortran_transfer_integer(&local_420,param_13,4,uVar38);
  _gfortran_transfer_character
            (&local_420,
                          
             "of linear susceptibilitycalculated the component:(a,2es16.6) #broadening: with broadening:(a,es16.6) #scissors shift:and scissors shift:(a,es16.6,a,es16.6,a) #energy window:eVHaenergy window:(2es16.6)"
             ,0x18,uVar38);
  _gfortran_st_write_done();
  local_418 = "linopt.F90";
  local_414 = 0xe5;
  local_420 = 0x80;
  local_41c = 6;
  _gfortran_st_write();
  _gfortran_transfer_character
            (&local_420,
                          
             "calculated the component:(a,2es16.6) #broadening: with broadening:(a,es16.6) #scissors shift:and scissors shift:(a,es16.6,a,es16.6,a) #energy window:eVHaenergy window:(2es16.6)"
             ,0x19,uVar38);
  _gfortran_transfer_integer(&local_420,param_12,4,uVar38);
  _gfortran_transfer_integer(&local_420,param_13,4,uVar38);
  _gfortran_transfer_character
            (&local_420,
                          
             "of linear susceptibilitycalculated the component:(a,2es16.6) #broadening: with broadening:(a,es16.6) #scissors shift:and scissors shift:(a,es16.6,a,es16.6,a) #energy window:eVHaenergy window:(2es16.6)"
             ,0x18,uVar38);
  _gfortran_st_write_done();
  local_418 = "linopt.F90";
  local_414 = 0xe6;
  local_3f0 = 
  "(a,2es16.6) #broadening: with broadening:(a,es16.6) #scissors shift:and scissors shift:(a,es16.6,a,es16.6,a) #energy window:eVHaenergy window:(2es16.6)"
  ;
  local_3ec = 0xb;
  local_420 = 0x1000;
  local_41c = 0x5c;
  _gfortran_st_write();
  _gfortran_transfer_character
            (&local_420,
                          
             " #broadening: with broadening:(a,es16.6) #scissors shift:and scissors shift:(a,es16.6,a,es16.6,a) #energy window:eVHaenergy window:(2es16.6)"
             ,0xd,uVar38);
  local_28c = local_21c;
  _gfortran_transfer_real(&local_420,&local_28c,8,uVar38);
  local_294 = local_214;
  _gfortran_transfer_real(&local_420,&local_294,8,uVar38);
  _gfortran_st_write_done();
  local_418 = "linopt.F90";
  local_414 = 0xe7;
  local_420 = 0x80;
  local_41c = 6;
  _gfortran_st_write();
  _gfortran_transfer_character
            (&local_420,
                          
             " with broadening:(a,es16.6) #scissors shift:and scissors shift:(a,es16.6,a,es16.6,a) #energy window:eVHaenergy window:(2es16.6)"
             ,0x11,uVar38);
  _gfortran_transfer_complex(&local_420,&local_21c,8,uVar38);
  _gfortran_st_write_done();
  local_418 = "linopt.F90";
  local_414 = 0xe8;
  local_3f0 = 
  "(a,es16.6) #scissors shift:and scissors shift:(a,es16.6,a,es16.6,a) #energy window:eVHaenergy window:(2es16.6)"
  ;
  local_3ec = 10;
  local_420 = 0x1000;
  local_41c = 0x5c;
  _gfortran_st_write();
  _gfortran_transfer_character
            (&local_420,
                          
             " #scissors shift:and scissors shift:(a,es16.6,a,es16.6,a) #energy window:eVHaenergy window:(2es16.6)"
             ,0x11,uVar38);
  _gfortran_transfer_real(&local_420,param_16,8,uVar38);
  _gfortran_st_write_done();
  local_418 = "linopt.F90";
  local_414 = 0xe9;
  local_420 = 0x80;
  local_41c = 6;
  _gfortran_st_write();
  _gfortran_transfer_character
            (&local_420,
             "and scissors shift:(a,es16.6,a,es16.6,a) #energy window:eVHaenergy window:(2es16.6)",
             0x13,uVar38);
  uVar37 = CONCAT44(uVar38,8);
  _gfortran_transfer_real();
  _gfortran_st_write_done(&local_420,param_16,uVar37);
  uVar38 = (undefined4)((ulonglong)uVar37 >> 0x20);
  local_418 = "linopt.F90";
  local_414 = 0xea;
  local_3f0 = "(a,es16.6,a,es16.6,a) #energy window:eVHaenergy window:(2es16.6)";
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
  uVar37 = CONCAT44(uVar38,2);
  pcVar33 = "Haenergy window:(2es16.6)";
  _gfortran_transfer_character();
  _gfortran_st_write_done(&local_420,pcVar33,uVar37);
  uVar38 = (undefined4)((ulonglong)uVar37 >> 0x20);
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
  uVar37 = CONCAT44(uVar38,2);
  puVar34 = (undefined8 *)0x807155c;
  _gfortran_transfer_character();
  _gfortran_st_write_done(&local_420,puVar34,uVar37);
  while (local_fc <= local_f8) {
    iVar20 = (local_fc * eps[0]._12_4_ + eps[0]._4_4_) * 0x10;
    *(undefined8 *)(iVar20 + (int)eps[0]._0_4_) = 0;
    *(undefined8 *)(iVar20 + 8 + (int)eps[0]._0_4_) = 0;
    local_fc = local_fc + 1;
  }
  iVar20 = *param_14;
  local_50 = 2;
  if (1 < iVar20) {
    do {
      ene = (real_kind_8_)(*param_15 * (double)(local_50 + -1) * local_6c);
      iVar21 = (chi[0]._12_4_ * local_50 + chi[0]._4_4_) * 0x10;
      dVar1 = *(double *)(iVar21 + (int)chi[0]._0_4_);
      dVar2 = *(double *)(iVar21 + 8 + (int)chi[0]._0_4_);
      iVar21 = (eps[0]._12_4_ * local_50 + eps[0]._4_4_) * 0x10;
      *(double *)(iVar21 + (int)eps[0]._0_4_) = (dVar1 * 12.56637061435917 - dVar2 * 0.0) + 1.0;
      *(double *)(iVar21 + 8 + (int)eps[0]._0_4_) = dVar2 * 12.56637061435917 + dVar1 * 0.0 + 0.0;
      local_418 = "linopt.F90";
      local_414 = 0xf1;
      local_3f0 = "(2es16.6)";
      local_3ec = 9;
      local_420 = 0x1000;
      local_41c = 0x5c;
      _gfortran_st_write(&local_420,puVar34,uVar37);
      uVar38 = (undefined4)((ulonglong)uVar37 >> 0x20);
      _gfortran_transfer_real();
      local_2bc = *(undefined8 *)
                   ((eps[0]._12_4_ * local_50 + eps[0]._4_4_) * 0x10 + 8 + (int)eps[0]._0_4_);
      uVar37 = CONCAT44(uVar38,8);
      puVar34 = &local_2bc;
      _gfortran_transfer_real();
      _gfortran_st_write_done();
      bVar29 = local_50 != iVar20;
      local_50 = local_50 + 1;
    } while (bVar29);
  }
  local_418 = "linopt.F90";
  local_414 = 0xf3;
  local_420 = 0x80;
  local_41c = 0x5c;
  _gfortran_st_write(&local_420,puVar34,uVar37);
  uVar38 = (undefined4)((ulonglong)uVar37 >> 0x20);
  _gfortran_st_write_done();
  local_418 = "linopt.F90";
  local_414 = 0xf4;
  local_420 = 0x80;
  local_41c = 0x5c;
  _gfortran_st_write();
  _gfortran_st_write_done();
  local_418 = "linopt.F90";
  local_414 = 0xf5;
  local_3f0 = 
  "(a) # Energy(eV)         Im(chi1(w))(a,2i3,a) #calculated the component:of linear susceptibilitycalculated the component:(a,2es16.6) #broadening: with broadening:(a,es16.6) #scissors shift:and scissors shift:(a,es16.6,a,es16.6,a) #energy window:eVHaenergy window:(2es16.6)"
  ;
  local_3ec = 3;
  local_420 = 0x1000;
  local_41c = 0x5c;
  _gfortran_st_write();
  uVar37 = CONCAT44(uVar38,0x21);
  pcVar33 = " # Energy(eV)         Re(chi1(w))";
  _gfortran_transfer_character(&local_420," # Energy(eV)         Re(chi1(w))",0x21,uVar38);
  lVar31 = ZEXT48(pcVar33) << 0x20;
  _gfortran_st_write_done();
  uVar38 = (undefined4)((ulonglong)lVar31 >> 0x20);
  iVar20 = *param_14;
  local_50 = 2;
  if (1 < iVar20) {
    do {
      ene = (real_kind_8_)(*param_15 * (double)(local_50 + -1) * local_6c);
      local_418 = "linopt.F90";
      local_414 = 0xf9;
      local_3f0 = "(2es16.6)";
      local_3ec = 9;
      local_420 = 0x1000;
      local_41c = 0x5c;
      _gfortran_st_write(&local_420,(int)((ulonglong)lVar31 >> 0x20),uVar37);
      uVar38 = (undefined4)((ulonglong)uVar37 >> 0x20);
      _gfortran_transfer_real();
      local_2c4 = *(undefined8 *)
                   ((eps[0]._12_4_ * local_50 + eps[0]._4_4_) * 0x10 + (int)eps[0]._0_4_);
      uVar37 = CONCAT44(uVar38,8);
      puVar34 = &local_2c4;
      _gfortran_transfer_real();
      lVar31 = ZEXT48(puVar34) << 0x20;
      _gfortran_st_write_done();
      uVar38 = (undefined4)((ulonglong)lVar31 >> 0x20);
      bVar29 = local_50 != iVar20;
      local_50 = local_50 + 1;
    } while (bVar29);
  }
  local_418 = "linopt.F90";
  local_414 = 0xfb;
  local_420 = 0x80;
  local_41c = 0x5c;
  _gfortran_st_write(&local_420,uVar38,uVar37);
  uVar38 = (undefined4)((ulonglong)uVar37 >> 0x20);
  _gfortran_st_write_done();
  local_418 = "linopt.F90";
  local_414 = 0xfc;
  local_420 = 0x80;
  local_41c = 0x5c;
  _gfortran_st_write();
  _gfortran_st_write_done();
  local_418 = "linopt.F90";
  local_414 = 0xfd;
  local_3f0 = 
  "(a) # Energy(eV)         Im(chi1(w))(a,2i3,a) #calculated the component:of linear susceptibilitycalculated the component:(a,2es16.6) #broadening: with broadening:(a,es16.6) #scissors shift:and scissors shift:(a,es16.6,a,es16.6,a) #energy window:eVHaenergy window:(2es16.6)"
  ;
  local_3ec = 3;
  local_420 = 0x1000;
  local_41c = 0x5c;
  _gfortran_st_write();
  uVar37 = CONCAT44(uVar38,0x22);
  pcVar33 = " # Energy(eV)         abs(chi1(w))";
  _gfortran_transfer_character(&local_420," # Energy(eV)         abs(chi1(w))",0x22,uVar38);
  lVar31 = ZEXT48(pcVar33) << 0x20;
  _gfortran_st_write_done();
  iVar20 = *param_14;
  local_50 = 2;
  if (1 < iVar20) {
    do {
      ene = (real_kind_8_)(*param_15 * (double)(local_50 + -1) * local_6c);
      local_418 = "linopt.F90";
      local_414 = 0x101;
      local_3f0 = "(2es16.6)";
      local_3ec = 9;
      local_420 = 0x1000;
      local_41c = 0x5c;
      _gfortran_st_write(&local_420,(int)((ulonglong)lVar31 >> 0x20),uVar37);
      _gfortran_transfer_real(&local_420,&ene,8,(int)((ulonglong)uVar37 >> 0x20));
      iVar21 = (eps[0]._12_4_ * local_50 + eps[0]._4_4_) * 0x10;
      uVar38 = (undefined4)((ulonglong)*(undefined8 *)(iVar21 + 8 + (int)eps[0]._0_4_) >> 0x20);
      local_2cc = cabs(*(double *)(iVar21 + (int)eps[0]._0_4_));
      uVar37 = CONCAT44(uVar38,8);
      pdVar35 = &local_2cc;
      _gfortran_transfer_real();
      lVar31 = ZEXT48(pdVar35) << 0x20;
      _gfortran_st_write_done();
      bVar29 = local_50 != iVar20;
      local_50 = local_50 + 1;
    } while (bVar29);
  }
  uVar38 = (undefined4)((ulonglong)uVar37 >> 0x20);
  local_418 = "linopt.F90";
  local_414 = 0x105;
  local_420 = 0;
  local_41c = 0x5c;
  _gfortran_st_close();
  if (local_244 == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 263 of file linopt.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_080713d7,uVar38);
  }
  free(local_244);
  local_244 = (void *)0x0;
  if (local_268 == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 263 of file linopt.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_080713fb,uVar38);
  }
  free(local_268);
  local_268 = (void *)0x0;
  if (chi[0]._0_4_ == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 263 of file linopt.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_0807137b,uVar38);
  }
  free(chi[0]._0_4_);
  chi[0]._0_4_ = (void *)0x0;
  if (eps[0]._0_4_ == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 263 of file linopt.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_080713d3,uVar38);
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
  eps[0]._0_4_ = (void *)0x0;
  if (chi[0]._0_4_ != (void *)0x0) {
    free(chi[0]._0_4_);
  }
  return;
}



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
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  size_t sVar23;
  void *pvVar24;
  int *__src;
  uint uVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  int extraout_ECX;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  bool bVar41;
  char *pcVar43;
  longlong lVar42;
  double *pdVar44;
  ulonglong uVar45;
  undefined4 uVar47;
  undefined8 uVar46;
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
  char *local_c98;
  undefined4 local_c94;
  undefined4 local_c80;
  undefined *local_c7c;
  char *local_c70;
  undefined4 local_c6c;
  char *local_c68;
  undefined4 local_c64;
  undefined4 local_c50;
  char *local_c4c;
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
  
  uVar31 = 0;
  if (-1 < (int)*param_7) {
    uVar31 = *param_7;
  }
  iVar39 = 0;
  if (-1 < (int)(uVar31 * *param_1)) {
    iVar39 = uVar31 * *param_1;
  }
  iVar34 = ~uVar31 - iVar39;
  uVar32 = 0;
  if (-1 < (int)*param_7) {
    uVar32 = *param_7;
  }
  iVar36 = 0;
  if (-1 < (int)(uVar32 * *param_7)) {
    iVar36 = uVar32 * *param_7;
  }
  iVar37 = 0;
  if (-1 < iVar36 * *param_3) {
    iVar37 = iVar36 * *param_3;
  }
  iVar38 = 0;
  if (-1 < iVar37 * 3) {
    iVar38 = iVar37 * 3;
  }
  iVar40 = ((~uVar32 - iVar36) - iVar37) - iVar38;
  delta[0][0][0]._0_4_ = (void *)0x0;
  local_868 = (void *)0x0;
  local_880 = (void *)0x0;
  local_898 = (void *)0x0;
  local_8b0 = (void *)0x0;
  local_94c = (void *)0x0;
  local_994 = (void *)0x0;
  local_9dc = (void *)0x0;
  local_a00 = (void *)0x0;
  local_a30 = (void *)0x0;
  local_a6c = 0.0;
  local_a64 = 1.0;
  local_84c = *param_17 * 0.0 - 0.0;
  local_844 = *param_17 * 1.0 + 0.0;
  dVar17 = (-2.0 / ((double)*param_5 * *param_2)) * 5.8300348177e-08;
  _gfortran_string_trim();
  sVar23 = (local_a70 + 0xd) * 0x20;
  if ((int)sVar23 < 0) {
    sVar23 = _gfortran_runtime_error();
  }
  if ((int)sVar23 < 1) {
    sVar23 = 1;
  }
  pvVar24 = malloc(sVar23);
  if (pvVar24 == (void *)0x0) {
    pvVar24 = (void *)_gfortran_os_error();
  }
  _gfortran_concat_string();
  if ((0 < local_a70) && (local_a74 != (void *)0x0)) {
    free(local_a74);
  }
  sVar23 = local_a70 + 0xd;
  if ((int)sVar23 < 0x100) {
    memmove(local_43c,pvVar24,sVar23);
    memset(auStack1071 + local_a70,0x20,0x100 - sVar23);
  }
  else {
    memmove(local_43c,pvVar24,0x100);
  }
  if (pvVar24 != (void *)0x0) {
    free(pvVar24);
  }
  _gfortran_string_trim();
  sVar23 = (local_a78 + 0xd) * 0x20;
  if ((int)sVar23 < 0) {
    sVar23 = _gfortran_runtime_error();
  }
  if ((int)sVar23 < 1) {
    sVar23 = 1;
  }
  pvVar24 = malloc(sVar23);
  if (pvVar24 == (void *)0x0) {
    pvVar24 = (void *)_gfortran_os_error();
  }
  _gfortran_concat_string();
  if ((0 < local_a78) && (local_a7c != (void *)0x0)) {
    free(local_a7c);
  }
  sVar23 = local_a78 + 0xd;
  if ((int)sVar23 < 0x100) {
    memmove(local_53c,pvVar24,sVar23);
    memset(auStack1327 + local_a78,0x20,0x100 - sVar23);
  }
  else {
    memmove(local_53c,pvVar24,0x100);
  }
  if (pvVar24 != (void *)0x0) {
    free(pvVar24);
  }
  _gfortran_string_trim();
  sVar23 = (local_a80 + 10) * 0x20;
  if ((int)sVar23 < 0) {
    sVar23 = _gfortran_runtime_error();
  }
  if ((int)sVar23 < 1) {
    sVar23 = 1;
  }
  pvVar24 = malloc(sVar23);
  if (pvVar24 == (void *)0x0) {
    pvVar24 = (void *)_gfortran_os_error();
  }
  _gfortran_concat_string();
  if ((0 < local_a80) && (local_a84 != (void *)0x0)) {
    free(local_a84);
  }
  sVar23 = local_a80 + 10;
  if ((int)sVar23 < 0x100) {
    memmove(local_63c,pvVar24,sVar23);
    memset(auStack1586 + local_a80,0x20,0x100 - sVar23);
  }
  else {
    memmove(local_63c,pvVar24,0x100);
  }
  if (pvVar24 != (void *)0x0) {
    free(pvVar24);
  }
  _gfortran_string_trim();
  sVar23 = (local_a88 + 10) * 0x20;
  if ((int)sVar23 < 0) {
    sVar23 = _gfortran_runtime_error();
  }
  if ((int)sVar23 < 1) {
    sVar23 = 1;
  }
  pvVar24 = malloc(sVar23);
  if (pvVar24 == (void *)0x0) {
    pvVar24 = (void *)_gfortran_os_error();
  }
  _gfortran_concat_string();
  if ((0 < local_a88) && (local_a8c != (void *)0x0)) {
    free(local_a8c);
  }
  sVar23 = local_a88 + 10;
  if ((int)sVar23 < 0x100) {
    memmove(local_73c,pvVar24,sVar23);
    memset(auStack1842 + local_a88,0x20,0x100 - sVar23);
  }
  else {
    memmove(local_73c,pvVar24,0x100);
  }
  if (pvVar24 != (void *)0x0) {
    free(pvVar24);
  }
  _gfortran_string_trim();
  sVar23 = (local_a90 + 0xb) * 0x20;
  if ((int)sVar23 < 0) {
    sVar23 = _gfortran_runtime_error();
  }
  if ((int)sVar23 < 1) {
    sVar23 = 1;
  }
  __src = (int *)malloc(sVar23);
  if (__src == (int *)0x0) {
    __src = (int *)_gfortran_os_error();
  }
  uVar45 = CONCAT44(local_a94,local_a90);
  _gfortran_concat_string();
  if ((0 < local_a90) && (local_a94 != (void *)0x0)) {
    free(local_a94);
  }
  sVar23 = local_a90 + 0xb;
  if ((int)sVar23 < 0x100) {
    uVar45 = uVar45 & 0xffffffff00000000;
    memmove(local_83c,__src,sVar23);
    uVar45 = uVar45 & 0xffffffff00000000 | (ulonglong)(0x100 - sVar23);
    pcVar43 = (char *)0x20;
    memset(auStack2097 + local_a90,0x20,0x100 - sVar23);
  }
  else {
    uVar45 = CONCAT44((int)(uVar45 >> 0x20),0x100);
    pcVar43 = (char *)__src;
    memmove(local_83c,__src,0x100);
  }
  if (__src != (int *)0x0) {
    free(__src);
  }
  iVar26 = *param_5;
  local_a4 = 1;
  if (0 < iVar26) {
    do {
      if (((((ABS(*(double *)(param_6 + (local_a4 + -1) * 0x48) + 1.0) < 1e-09) &&
            (ABS(*(double *)(param_6 + (local_a4 * 9 + -5) * 8) + 1.0) < 1e-09)) &&
           (ABS(*(double *)(param_6 + (local_a4 * 9 + -1) * 8) + 1.0) < 1e-09)) &&
          (((ABS(*(double *)(param_6 + (local_a4 * 9 + -6) * 8)) < 1e-09 &&
            (ABS(*(double *)(param_6 + (local_a4 * 9 + -3) * 8)) < 1e-09)) &&
           ((ABS(*(double *)(param_6 + (local_a4 * 9 + -8) * 8)) < 1e-09 &&
            ((ABS(*(double *)(param_6 + (local_a4 * 9 + -2) * 8)) < 1e-09 &&
             (ABS(*(double *)(param_6 + (local_a4 * 9 + -7) * 8)) < 1e-09)))))))) &&
         (ABS(*(double *)(param_6 + ((local_a4 + 1) * 9 + -0xd) * 8)) < 1e-09)) {
        local_c98 = "nlinopt.F90";
        local_c94 = 0xb0;
        local_ca0 = 0x80;
        local_c9c = 6;
        _gfortran_st_write();
        uVar47 = (undefined4)(uVar45 >> 0x20);
        _gfortran_transfer_character
                  (&local_ca0,"-----------------------------------------",0x29,uVar47);
        _gfortran_st_write_done();
        local_c98 = "nlinopt.F90";
        local_c94 = 0xb1;
        local_ca0 = 0x80;
        local_c9c = 6;
        _gfortran_st_write();
        _gfortran_transfer_character();
        _gfortran_st_write_done();
        local_c98 = "nlinopt.F90";
        local_c94 = 0xb2;
        local_ca0 = 0x80;
        local_c9c = 6;
        _gfortran_st_write();
        _gfortran_transfer_character();
        _gfortran_st_write_done();
        local_c98 = "nlinopt.F90";
        local_c94 = 0xb3;
        local_ca0 = 0x80;
        local_c9c = 6;
        _gfortran_st_write();
        uVar45 = CONCAT44(uVar47,0x29);
        pcVar43 = "-----------------------------------------";
        _gfortran_transfer_character();
        _gfortran_st_write_done();
        _gfortran_stop_numeric();
        iVar26 = extraout_ECX;
      }
      bVar41 = local_a4 != iVar26;
      local_a4 = local_a4 + 1;
    } while (bVar41);
  }
  if (((((*param_11 < 1) || (*param_12 < 1)) || (*param_13 < 1)) ||
      ((3 < *param_11 || (3 < *param_12)))) || (3 < *param_13)) {
    local_c98 = "nlinopt.F90";
    local_c94 = 0xba;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    uVar47 = (undefined4)(uVar45 >> 0x20);
    _gfortran_transfer_character
              (&local_ca0,"---------------------------------------------",0x2d,uVar47);
    _gfortran_st_write_done();
    local_c98 = "nlinopt.F90";
    local_c94 = 0xbb;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"    Error in nlinopt:                        ",0x2d,uVar47);
    _gfortran_st_write_done();
    local_c98 = "nlinopt.F90";
    local_c94 = 0xbc;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"    the polarisation directions incorrect    ",0x2d,uVar47);
    _gfortran_st_write_done();
    local_c98 = "nlinopt.F90";
    local_c94 = 0xbd;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"    1=x,  2=y  and 3=z                       ",0x2d,uVar47);
    _gfortran_st_write_done();
    local_c98 = "nlinopt.F90";
    local_c94 = 0xbe;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    uVar45 = CONCAT44(uVar47,0x2d);
    pcVar43 = "---------------------------------------------";
    _gfortran_transfer_character
              (&local_ca0,"---------------------------------------------",0x2d,uVar47);
    _gfortran_st_write_done();
    _gfortran_stop_numeric();
  }
  if (*param_14 < 1) {
    local_c98 = "nlinopt.F90";
    local_c94 = 0xc3;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    uVar47 = (undefined4)(uVar45 >> 0x20);
    _gfortran_transfer_character
              (&local_ca0,"---------------------------------------------",0x2d,uVar47);
    _gfortran_st_write_done();
    local_c98 = "nlinopt.F90";
    local_c94 = 0xc4;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"    Error in nlinopt:                        ",0x2d,uVar47);
    _gfortran_st_write_done();
    local_c98 = "nlinopt.F90";
    local_c94 = 0xc5;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"    number of energy mesh points incorrect   ",0x2d,uVar47);
    _gfortran_st_write_done();
    local_c98 = "nlinopt.F90";
    local_c94 = 0xc6;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"    number has to integer greater than 0     ",0x2d,uVar47);
    _gfortran_st_write_done();
    local_c98 = "nlinopt.F90";
    local_c94 = 199;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"    nmesh*de = max energy for calculation    ",0x2d,uVar47);
    _gfortran_st_write_done();
    local_c98 = "nlinopt.F90";
    local_c94 = 200;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    uVar45 = CONCAT44(uVar47,0x2d);
    pcVar43 = "---------------------------------------------";
    _gfortran_transfer_character
              (&local_ca0,"---------------------------------------------",0x2d,uVar47);
    _gfortran_st_write_done();
    _gfortran_stop_numeric();
  }
  if (*param_15 <= 0.0) {
    local_c98 = "nlinopt.F90";
    local_c94 = 0xcd;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    uVar47 = (undefined4)(uVar45 >> 0x20);
    _gfortran_transfer_character
              (&local_ca0,"---------------------------------------------",0x2d,uVar47);
    _gfortran_st_write_done();
    local_c98 = "nlinopt.F90";
    local_c94 = 0xce;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"    Error in nlinopt:                        ",0x2d,uVar47);
    _gfortran_st_write_done();
    local_c98 = "nlinopt.F90";
    local_c94 = 0xcf;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"    energy step is incorrect                 ",0x2d,uVar47);
    _gfortran_st_write_done();
    local_c98 = "nlinopt.F90";
    local_c94 = 0xd0;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"    number has to real greater than 0.0      ",0x2d,uVar47);
    _gfortran_st_write_done();
    local_c98 = "nlinopt.F90";
    local_c94 = 0xd1;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"    nmesh*de = max energy for calculation    ",0x2d,uVar47);
    _gfortran_st_write_done();
    local_c98 = "nlinopt.F90";
    local_c94 = 0xd2;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    uVar45 = CONCAT44(uVar47,0x2d);
    pcVar43 = "---------------------------------------------";
    _gfortran_transfer_character
              (&local_ca0,"---------------------------------------------",0x2d,uVar47);
    _gfortran_st_write_done();
    _gfortran_stop_numeric();
  }
  if (*param_16 < 0.0) {
    local_c98 = "nlinopt.F90";
    local_c94 = 0xd7;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    uVar47 = (undefined4)(uVar45 >> 0x20);
    _gfortran_transfer_character
              (&local_ca0,"---------------------------------------------",0x2d,uVar47);
    _gfortran_st_write_done();
    local_c98 = "nlinopt.F90";
    local_c94 = 0xd8;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"    Error in nlinopt:                        ",0x2d,uVar47);
    _gfortran_st_write_done();
    local_c98 = "nlinopt.F90";
    local_c94 = 0xd9;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"    scissors shift is incorrect              ",0x2d,uVar47);
    _gfortran_st_write_done();
    local_c98 = "nlinopt.F90";
    local_c94 = 0xda;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"    number has to real greater than 0.0      ",0x2d,uVar47);
    _gfortran_st_write_done();
    local_c98 = "nlinopt.F90";
    local_c94 = 0xdb;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    uVar45 = CONCAT44(uVar47,0x2d);
    pcVar43 = "---------------------------------------------";
    _gfortran_transfer_character
              (&local_ca0,"---------------------------------------------",0x2d,uVar47);
    _gfortran_st_write_done();
    _gfortran_stop_numeric();
  }
  if (*param_17 <= 0.008999999612569809) {
    if (0.01499999966472387 < *param_17) {
      local_c98 = "nlinopt.F90";
      local_c94 = 0xe5;
      local_ca0 = 0x80;
      local_c9c = 6;
      _gfortran_st_write();
      uVar47 = (undefined4)(uVar45 >> 0x20);
      _gfortran_transfer_character
                (&local_ca0,
                                  
                 "----------------------------------------    ATTENTION: broadening is too high       ideally should be less than 0.005       ATTENTION: tolerance is too high        ideally should be less than 0.004   Attempt to allocate negative amount of memory. Possible integer overflow"
                 ,0x28,uVar47);
      _gfortran_st_write_done();
      local_c98 = "nlinopt.F90";
      local_c94 = 0xe6;
      local_ca0 = 0x80;
      local_c9c = 6;
      _gfortran_st_write();
      _gfortran_transfer_character
                (&local_ca0,
                                  
                 "    ATTENTION: broadening is too high       ideally should be less than 0.005       ATTENTION: tolerance is too high        ideally should be less than 0.004   Attempt to allocate negative amount of memory. Possible integer overflow"
                 ,0x28,uVar47);
      _gfortran_st_write_done();
      local_c98 = "nlinopt.F90";
      local_c94 = 0xe7;
      local_ca0 = 0x80;
      local_c9c = 6;
      _gfortran_st_write();
      _gfortran_transfer_character
                (&local_ca0,
                                  
                 "    ideally should be less than 0.005       ATTENTION: tolerance is too high        ideally should be less than 0.004   Attempt to allocate negative amount of memory. Possible integer overflow"
                 ,0x28,uVar47);
      _gfortran_st_write_done();
      local_c98 = "nlinopt.F90";
      local_c94 = 0xe8;
      local_ca0 = 0x80;
      local_c9c = 6;
      _gfortran_st_write();
      uVar45 = CONCAT44(uVar47,0x28);
      pcVar43 = 
      "----------------------------------------    ATTENTION: broadening is too high       ideally should be less than 0.005       ATTENTION: tolerance is too high        ideally should be less than 0.004   Attempt to allocate negative amount of memory. Possible integer overflow"
      ;
      _gfortran_transfer_character
                (&local_ca0,
                                  
                 "----------------------------------------    ATTENTION: broadening is too high       ideally should be less than 0.005       ATTENTION: tolerance is too high        ideally should be less than 0.004   Attempt to allocate negative amount of memory. Possible integer overflow"
                 ,0x28,uVar47);
      _gfortran_st_write_done();
    }
  }
  else {
    local_c98 = "nlinopt.F90";
    local_c94 = 0xe0;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    uVar47 = (undefined4)(uVar45 >> 0x20);
    _gfortran_transfer_character
              (&local_ca0,"---------------------------------------------",0x2d,uVar47);
    _gfortran_st_write_done();
    local_c98 = "nlinopt.F90";
    local_c94 = 0xe1;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"    ATTENTION: broadening is quite high      ",0x2d,uVar47);
    _gfortran_st_write_done();
    local_c98 = "nlinopt.F90";
    local_c94 = 0xe2;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"    ideally should be less than 0.005        ",0x2d,uVar47);
    _gfortran_st_write_done();
    local_c98 = "nlinopt.F90";
    local_c94 = 0xe3;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    uVar45 = CONCAT44(uVar47,0x2d);
    pcVar43 = "---------------------------------------------";
    _gfortran_transfer_character
              (&local_ca0,"---------------------------------------------",0x2d,uVar47);
    _gfortran_st_write_done();
  }
  if (0.006000000052154064 < *param_18) {
    local_c98 = "nlinopt.F90";
    local_c94 = 0xec;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    uVar47 = (undefined4)(uVar45 >> 0x20);
    _gfortran_transfer_character
              (&local_ca0,
                              
               "----------------------------------------    ATTENTION: broadening is too high       ideally should be less than 0.005       ATTENTION: tolerance is too high        ideally should be less than 0.004   Attempt to allocate negative amount of memory. Possible integer overflow"
               ,0x28,uVar47);
    _gfortran_st_write_done();
    local_c98 = "nlinopt.F90";
    local_c94 = 0xed;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,
                              
               "    ATTENTION: tolerance is too high        ideally should be less than 0.004   Attempt to allocate negative amount of memory. Possible integer overflow"
               ,0x28,uVar47);
    _gfortran_st_write_done();
    local_c98 = "nlinopt.F90";
    local_c94 = 0xee;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,
                              
               "    ideally should be less than 0.004   Attempt to allocate negative amount of memory. Possible integer overflow"
               ,0x28,uVar47);
    _gfortran_st_write_done();
    local_c98 = "nlinopt.F90";
    local_c94 = 0xef;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    uVar45 = CONCAT44(uVar47,0x28);
    pcVar43 = 
    "----------------------------------------    ATTENTION: broadening is too high       ideally should be less than 0.005       ATTENTION: tolerance is too high        ideally should be less than 0.004   Attempt to allocate negative amount of memory. Possible integer overflow"
    ;
    _gfortran_transfer_character
              (&local_ca0,
                              
               "----------------------------------------    ATTENTION: broadening is too high       ideally should be less than 0.005       ATTENTION: tolerance is too high        ideally should be less than 0.004   Attempt to allocate negative amount of memory. Possible integer overflow"
               ,0x28,uVar47);
    _gfortran_st_write_done();
  }
  local_944 = 0x425;
  local_93c = 1;
  local_938 = *param_7;
  local_940 = 1;
  uVar28 = 0;
  if (-1 < (int)*param_7) {
    uVar28 = *param_7;
  }
  local_930 = 1;
  local_92c = *param_7;
  uVar25 = *param_7;
  if ((int)uVar25 < 0) {
    uVar25 = 0;
  }
  local_928 = uVar25 * uVar28;
  local_924 = 1;
  local_920 = 3;
  local_91c = local_928 * 3;
  local_918 = 1;
  local_914 = 3;
  local_910 = local_928 * 9;
  local_90c = 1;
  local_908 = 3;
  iVar26 = ~uVar28 + local_928 * -0xd;
  if ((int)*param_7 < 1 || (int)*param_7 < 1) {
    sVar23 = 0;
  }
  else {
    sVar23 = local_928 * 0x1b0;
  }
  local_934 = uVar28;
  if (local_94c == (void *)0x0) {
    if ((int)sVar23 < 0) {
      sVar23 = _gfortran_runtime_error();
    }
    if ((int)sVar23 < 1) {
      sVar23 = 1;
    }
    pvVar24 = malloc(sVar23);
    if (pvVar24 == (void *)0x0) {
      pvVar24 = (void *)_gfortran_os_error();
    }
    local_98c = 0x425;
    local_984 = 1;
    local_980 = *param_7;
    local_988 = 1;
    uVar28 = 0;
    if (-1 < (int)*param_7) {
      uVar28 = *param_7;
    }
    local_978 = 1;
    local_974 = *param_7;
    uVar25 = *param_7;
    if ((int)uVar25 < 0) {
      uVar25 = 0;
    }
    local_970 = uVar25 * uVar28;
    local_96c = 1;
    local_968 = 3;
    local_964 = local_970 * 3;
    local_960 = 1;
    local_95c = 3;
    local_958 = local_970 * 9;
    local_954 = 1;
    local_950 = 3;
    iVar27 = ~uVar28 + local_970 * -0xd;
    local_97c = uVar28;
    local_94c = pvVar24;
    local_948 = iVar26;
    if ((int)*param_7 < 1 || (int)*param_7 < 1) goto LAB_08052907;
    sVar23 = local_970 * 0x1b0;
  }
  else {
    uVar47 = (undefined4)(uVar45 >> 0x20);
    uVar45 = CONCAT44(uVar47,0x8071a9b);
    pcVar43 = "Attempting to allocate already allocated array \'%s\'";
    _gfortran_runtime_error_at
              ("At line 245 of file nlinopt.F90",
               "Attempting to allocate already allocated array \'%s\'",&DAT_08071a9b,uVar47);
    iVar27 = iVar26;
LAB_08052907:
    sVar23 = 0;
  }
  if (local_994 == (void *)0x0) {
    if ((int)sVar23 < 0) {
      sVar23 = _gfortran_runtime_error();
    }
    if ((int)sVar23 < 1) {
      sVar23 = 1;
    }
    pvVar24 = malloc(sVar23);
    if (pvVar24 == (void *)0x0) {
      pvVar24 = (void *)_gfortran_os_error();
    }
    local_9d4 = 0x425;
    local_9cc = 1;
    local_9c8 = *param_7;
    local_9d0 = 1;
    uVar28 = 0;
    if (-1 < (int)*param_7) {
      uVar28 = *param_7;
    }
    local_9c0 = 1;
    local_9bc = *param_7;
    uVar25 = *param_7;
    if ((int)uVar25 < 0) {
      uVar25 = 0;
    }
    local_9b8 = uVar25 * uVar28;
    local_9b4 = 1;
    local_9b0 = 3;
    local_9ac = local_9b8 * 3;
    local_9a8 = 1;
    local_9a4 = 3;
    local_9a0 = local_9b8 * 9;
    local_99c = 1;
    local_998 = 3;
    iVar26 = ~uVar28 + local_9b8 * -0xd;
    local_9c4 = uVar28;
    local_994 = pvVar24;
    local_990 = iVar27;
    if ((int)*param_7 < 1 || (int)*param_7 < 1) goto LAB_08052a77;
    sVar23 = local_9b8 * 0x1b0;
  }
  else {
    uVar47 = (undefined4)(uVar45 >> 0x20);
    uVar45 = CONCAT44(uVar47,0x8071af4);
    pcVar43 = "Attempting to allocate already allocated array \'%s\'";
    _gfortran_runtime_error_at
              ("At line 246 of file nlinopt.F90",
               "Attempting to allocate already allocated array \'%s\'",&DAT_08071af4,uVar47);
    iVar26 = iVar27;
LAB_08052a77:
    sVar23 = 0;
  }
  if (local_9dc == (void *)0x0) {
    if ((int)sVar23 < 0) {
      sVar23 = _gfortran_runtime_error();
    }
    if ((int)sVar23 < 1) {
      sVar23 = 1;
    }
    pvVar24 = malloc(sVar23);
    if (pvVar24 == (void *)0x0) {
      pvVar24 = (void *)_gfortran_os_error();
    }
    local_878 = 0x421;
    local_870 = 1;
    local_86c = *param_14;
    local_874 = 1;
    iVar27 = 0;
    if (-1 < *param_14) {
      iVar27 = *param_14;
    }
    local_9dc = pvVar24;
    local_9d8 = iVar26;
    if (*param_14 < 1) goto LAB_08052b38;
    sVar23 = iVar27 << 4;
  }
  else {
    uVar47 = (undefined4)(uVar45 >> 0x20);
    uVar45 = CONCAT44(uVar47,0x8071b18);
    pcVar43 = "Attempting to allocate already allocated array \'%s\'";
    _gfortran_runtime_error_at
              ("At line 247 of file nlinopt.F90",
               "Attempting to allocate already allocated array \'%s\'",&DAT_08071b18,uVar47);
LAB_08052b38:
    sVar23 = 0;
  }
  if (local_880 == (void *)0x0) {
    if ((int)sVar23 < 0) {
      sVar23 = _gfortran_runtime_error();
    }
    if ((int)sVar23 < 1) {
      sVar23 = 1;
    }
    pvVar24 = malloc(sVar23);
    if (pvVar24 == (void *)0x0) {
      pvVar24 = (void *)_gfortran_os_error();
    }
    local_87c = -1;
    local_860 = 0x421;
    local_858 = 1;
    local_854 = *param_14;
    local_85c = 1;
    iVar27 = 0;
    if (-1 < *param_14) {
      iVar27 = *param_14;
    }
    local_880 = pvVar24;
    if (*param_14 < 1) goto LAB_08052bfb;
    sVar23 = iVar27 << 4;
  }
  else {
    uVar47 = (undefined4)(uVar45 >> 0x20);
    uVar45 = CONCAT44(uVar47,0x8071b3c);
    pcVar43 = "Attempting to allocate already allocated array \'%s\'";
    _gfortran_runtime_error_at
              ("At line 248 of file nlinopt.F90",
               "Attempting to allocate already allocated array \'%s\'","inter2w",uVar47);
LAB_08052bfb:
    sVar23 = 0;
  }
  if (local_868 == (void *)0x0) {
    if ((int)sVar23 < 0) {
      sVar23 = _gfortran_runtime_error();
    }
    if ((int)sVar23 < 1) {
      sVar23 = 1;
    }
    pvVar24 = malloc(sVar23);
    if (pvVar24 == (void *)0x0) {
      pvVar24 = (void *)_gfortran_os_error();
    }
    local_864 = -1;
    local_8a8 = 0x421;
    local_8a0 = 1;
    local_89c = *param_14;
    local_8a4 = 1;
    iVar27 = 0;
    if (-1 < *param_14) {
      iVar27 = *param_14;
    }
    local_868 = pvVar24;
    if (*param_14 < 1) goto LAB_08052cbe;
    sVar23 = iVar27 << 4;
  }
  else {
    uVar47 = (undefined4)(uVar45 >> 0x20);
    uVar45 = CONCAT44(uVar47,0x8071b64);
    pcVar43 = "Attempting to allocate already allocated array \'%s\'";
    _gfortran_runtime_error_at
              ("At line 249 of file nlinopt.F90",
               "Attempting to allocate already allocated array \'%s\'","inter1w",uVar47);
LAB_08052cbe:
    sVar23 = 0;
  }
  if (local_8b0 == (void *)0x0) {
    if ((int)sVar23 < 0) {
      sVar23 = _gfortran_runtime_error();
    }
    if ((int)sVar23 < 1) {
      sVar23 = 1;
    }
    pvVar24 = malloc(sVar23);
    if (pvVar24 == (void *)0x0) {
      pvVar24 = (void *)_gfortran_os_error();
    }
    local_8ac = -1;
    local_890 = 0x421;
    local_888 = 1;
    local_884 = *param_14;
    local_88c = 1;
    iVar27 = 0;
    if (-1 < *param_14) {
      iVar27 = *param_14;
    }
    local_8b0 = pvVar24;
    if (*param_14 < 1) goto LAB_08052d81;
    sVar23 = iVar27 << 4;
  }
  else {
    uVar47 = (undefined4)(uVar45 >> 0x20);
    uVar45 = CONCAT44(uVar47,0x8071b8c);
    pcVar43 = "Attempting to allocate already allocated array \'%s\'";
    _gfortran_runtime_error_at
              ("At line 250 of file nlinopt.F90",
               "Attempting to allocate already allocated array \'%s\'","intra2w",uVar47);
LAB_08052d81:
    sVar23 = 0;
  }
  if (local_898 == (void *)0x0) {
    if ((int)sVar23 < 0) {
      sVar23 = _gfortran_runtime_error();
    }
    if ((int)sVar23 < 1) {
      sVar23 = 1;
    }
    pvVar24 = malloc(sVar23);
    if (pvVar24 == (void *)0x0) {
      pvVar24 = (void *)_gfortran_os_error();
    }
    local_894 = -1;
    delta[0][0][0]._8_4_ = 0x423;
    local_324 = 1;
    local_320 = *param_7;
    delta[0][0][0]._12_4_ = 1;
    local_31c = 0;
    if (-1 < (int)*param_7) {
      local_31c = *param_7;
    }
    local_318 = 1;
    local_314 = *param_7;
    uVar28 = *param_7;
    if ((int)uVar28 < 0) {
      uVar28 = 0;
    }
    local_310 = uVar28 * local_31c;
    local_30c = 1;
    local_308 = 3;
    iVar26 = local_310 * 3;
    uVar28 = ~local_31c - local_310;
    local_898 = pvVar24;
    if ((int)*param_7 < 1 || (int)*param_7 < 1) goto LAB_08052ead;
    sVar23 = local_310 * 0x30;
  }
  else {
    uVar47 = (undefined4)(uVar45 >> 0x20);
    uVar45 = CONCAT44(uVar47,0x8071bb4);
    pcVar43 = "Attempting to allocate already allocated array \'%s\'";
    _gfortran_runtime_error_at
              ("At line 251 of file nlinopt.F90",
               "Attempting to allocate already allocated array \'%s\'","intra1w",uVar47);
LAB_08052ead:
    sVar23 = 0;
  }
  if (delta[0][0][0]._0_4_ == (void *)0x0) {
    if ((int)sVar23 < 0) {
      sVar23 = _gfortran_runtime_error();
    }
    if ((int)sVar23 < 1) {
      sVar23 = 1;
    }
    pvVar24 = malloc(sVar23);
    if (pvVar24 == (void *)0x0) {
      pvVar24 = (void *)_gfortran_os_error();
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
    delta[0][0][0]._0_4_ = pvVar24;
    delta[0][0][0]._4_4_ = uVar28;
    if (local_a30 == (void *)0x0) goto LAB_08052f96;
    uVar47 = (undefined4)(uVar45 >> 0x20);
    uVar45 = CONCAT44(uVar47,0x8071c04);
    pcVar43 = "Attempting to allocate already allocated array \'%s\'";
    _gfortran_runtime_error_at
              ("At line 253 of file nlinopt.F90",
               "Attempting to allocate already allocated array \'%s\'",&DAT_08071c04,uVar47);
  }
  else {
    uVar47 = (undefined4)(uVar45 >> 0x20);
    uVar45 = CONCAT44(uVar47,0x8071bdc);
    pcVar43 = "Attempting to allocate already allocated array \'%s\'";
    _gfortran_runtime_error_at
              ("At line 252 of file nlinopt.F90",
               "Attempting to allocate already allocated array \'%s\'","delta",uVar47);
LAB_08052f96:
    pvVar24 = malloc(0xd8);
    if (pvVar24 == (void *)0x0) {
      pvVar24 = (void *)_gfortran_os_error();
    }
    local_a2c = -0xd;
    local_9f8 = 0x21a;
    local_9f0 = 1;
    local_9ec = 3;
    local_9f4 = 1;
    local_9e4 = 1;
    local_9e0 = 3;
    local_9e8 = 3;
    local_a30 = pvVar24;
    if (local_a00 != (void *)0x0) {
      uVar47 = (undefined4)(uVar45 >> 0x20);
      uVar45 = CONCAT44(uVar47,0x8071c28);
      pcVar43 = "Attempting to allocate already allocated array \'%s\'";
      _gfortran_runtime_error_at
                ("At line 254 of file nlinopt.F90",
                 "Attempting to allocate already allocated array \'%s\'",&DAT_08071c28,uVar47);
      goto LAB_080530e5;
    }
  }
  pvVar24 = malloc(0x48);
  if (pvVar24 == (void *)0x0) {
    pvVar24 = (void *)_gfortran_os_error();
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
  iVar26 = local_a08;
  local_a00 = pvVar24;
LAB_080530e5:
  while (iVar26 <= local_d94) {
    iVar27 = local_d8c;
    while (iVar27 <= local_d90) {
      iVar35 = local_d84;
      while (iVar35 <= local_d88) {
        *(undefined8 *)
         ((int)local_d7c +
         (local_a18 * iVar27 + local_a0c * iVar26 + local_d80 + local_d78 * iVar35) * 8) = 0;
        iVar35 = iVar35 + 1;
      }
      iVar27 = iVar27 + 1;
    }
    iVar26 = iVar26 + 1;
  }
  iVar26 = *param_5;
  local_a4 = 1;
  iVar27 = local_870;
  if (0 < iVar26) {
    do {
      iVar35 = 1;
      while (iVar35 < 4) {
        iVar33 = 1;
        while (iVar33 < 4) {
          *(undefined8 *)
           ((int)local_a00 +
           ((iVar33 + local_9f0 + -1) * local_9f4 +
           local_9e8 * (iVar35 + local_9e4 + -1) + local_9fc) * 8) =
               *(undefined8 *)(param_6 + (iVar33 + local_a4 * 9 + -0xd + iVar35 * 3) * 8);
          iVar33 = iVar33 + 1;
        }
        iVar35 = iVar35 + 1;
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
            bVar41 = local_98 != 3;
            local_98 = local_98 + 1;
          } while (bVar41);
          bVar41 = local_9c != 3;
          local_9c = local_9c + 1;
        } while (bVar41);
        bVar41 = local_cc != 3;
        local_cc = local_cc + 1;
      } while (bVar41);
      bVar41 = local_a4 != iVar26;
      local_a4 = local_a4 + 1;
    } while (bVar41);
  }
  while (iVar26 = local_858, iVar27 <= local_86c) {
    iVar26 = (iVar27 * local_874 + local_87c) * 0x10;
    *(undefined8 *)(iVar26 + (int)local_880) = 0;
    *(undefined8 *)(iVar26 + 8 + (int)local_880) = 0;
    iVar27 = iVar27 + 1;
  }
  while (iVar27 = local_8a0, iVar26 <= local_854) {
    iVar27 = (iVar26 * local_85c + local_864) * 0x10;
    *(undefined8 *)(iVar27 + (int)local_868) = 0;
    *(undefined8 *)(iVar27 + 8 + (int)local_868) = 0;
    iVar26 = iVar26 + 1;
  }
  while (iVar26 = local_888, iVar27 <= local_89c) {
    iVar26 = (iVar27 * local_8a4 + local_8ac) * 0x10;
    *(undefined8 *)(iVar26 + (int)local_8b0) = 0;
    *(undefined8 *)(iVar26 + 8 + (int)local_8b0) = 0;
    iVar27 = iVar27 + 1;
  }
  while (iVar26 <= local_884) {
    iVar27 = (iVar26 * local_88c + local_894) * 0x10;
    *(undefined8 *)(iVar27 + (int)local_898) = 0;
    *(undefined8 *)(iVar27 + 8 + (int)local_898) = 0;
    iVar26 = iVar26 + 1;
  }
  while (local_30c <= local_308) {
    iVar26 = local_318;
    while (iVar26 <= (int)local_314) {
      iVar27 = local_324;
      while (iVar27 <= (int)local_320) {
        iVar35 = (delta[0][0][0]._12_4_ * iVar27 +
                 local_31c * iVar26 + delta[0][0][0]._4_4_ + local_310 * local_30c) * 0x10;
        *(undefined8 *)(iVar35 + (int)delta[0][0][0]._0_4_) = 0;
        *(undefined8 *)(iVar35 + 8 + (int)delta[0][0][0]._0_4_) = 0;
        iVar27 = iVar27 + 1;
      }
      iVar26 = iVar26 + 1;
    }
    local_30c = local_30c + 1;
  }
  emin = 0.0;
  emax = 0.0;
  iVar26 = *param_3;
  local_850 = 1;
  if (0 < iVar26) {
    do {
      local_c98 = "nlinopt.F90";
      local_c94 = 0x115;
      local_ca0 = 0x80;
      local_c9c = 6;
      _gfortran_st_write(&local_ca0,pcVar43,uVar45);
      uVar47 = (undefined4)(uVar45 >> 0x20);
      _gfortran_transfer_integer();
      _gfortran_transfer_character();
      uVar45 = CONCAT44(uVar47,4);
      pcVar43 = (char *)param_3;
      _gfortran_transfer_integer();
      _gfortran_st_write_done();
      iVar27 = *param_1;
      local_bc = 1;
      if (0 < iVar27) {
        do {
          uVar28 = *param_7;
          local_b8 = 1;
          if (0 < (int)uVar28) {
            do {
              dVar1 = *(double *)
                       (param_8 + (uVar31 * local_bc + local_850 * iVar39 + local_b8 + iVar34) * 8);
              if (dVar1 < *param_9) {
                uVar25 = *param_7;
                local_b4 = 1;
                if (0 < (int)uVar25) {
                  do {
                    dVar2 = *(double *)
                             (param_8 +
                             (uVar31 * local_bc + local_850 * iVar39 + local_b4 + iVar34) * 8);
                    if (*param_9 < dVar2) {
                      dVar2 = dVar1 - dVar2;
                      dVar2 = (dVar2 - *param_16) / dVar2;
                      iVar35 = 1;
                      while (iVar35 < 4) {
                        iVar33 = (iVar37 * iVar35 +
                                 iVar38 * local_bc +
                                 iVar36 * local_850 + local_b4 * uVar32 + local_b8 + iVar40) * 0x10;
                        dVar3 = *(double *)(iVar33 + param_10);
                        dVar4 = *(double *)(iVar33 + 8 + param_10);
                        iVar33 = (iVar35 * iVar37 +
                                 local_bc * iVar38 +
                                 iVar36 * local_850 + uVar32 * local_b4 + iVar40 + local_b8) * 0x10;
                        *(double *)(iVar33 + param_10) = dVar3 * dVar2 - dVar4 * 0.0;
                        *(double *)(iVar33 + 8 + param_10) = dVar2 * dVar4 + dVar3 * 0.0;
                        iVar35 = iVar35 + 1;
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
                            iVar35 = (uVar32 * local_b4 + local_850 * iVar36 + local_b8 +
                                      iVar38 * local_bc + iVar37 * local_94 + iVar40) * 0x10;
                            dVar6 = *(double *)(iVar35 + param_10);
                            dVar7 = *(double *)(iVar35 + 8 + param_10);
                            iVar35 = (local_940 * local_b8 + local_934 * local_b4 +
                                      local_91c * local_90 + local_928 * local_94 +
                                      local_910 * local_8c + local_948) * 0x10;
                            *(double *)(iVar35 + (int)local_94c) = dVar8 * dVar6 - dVar7 * 0.0;
                            *(double *)(iVar35 + 8 + (int)local_94c) = dVar6 * 0.0 + dVar7 * dVar8;
                            dVar6 = (double)(int)ROUND(dVar3 + dVar2);
                            iVar35 = (uVar32 * local_b8 + local_850 * iVar36 + local_b4 +
                                      iVar38 * local_bc + iVar37 * local_94 + iVar40) * 0x10;
                            dVar2 = *(double *)(iVar35 + param_10);
                            dVar3 = *(double *)(iVar35 + 8 + param_10);
                            iVar35 = (local_988 * local_b4 + local_97c * local_b8 +
                                      local_964 * local_90 + local_970 * local_94 +
                                      local_958 * local_8c + local_990) * 0x10;
                            *(double *)(iVar35 + (int)local_994) = dVar6 * dVar2 - dVar3 * 0.0;
                            *(double *)(iVar35 + 8 + (int)local_994) = dVar2 * 0.0 + dVar3 * dVar6;
                            dVar4 = (double)(int)ROUND(dVar5 + dVar4);
                            iVar35 = (uVar32 * local_b8 + local_850 * iVar36 + local_b4 +
                                      iVar38 * local_bc + iVar37 * local_94 + iVar40) * 0x10;
                            dVar2 = *(double *)(iVar35 + param_10);
                            dVar3 = *(double *)(iVar35 + 8 + param_10);
                            iVar35 = (local_9d0 * local_b4 + local_9c4 * local_b8 +
                                      local_9ac * local_90 + local_9b8 * local_94 +
                                      local_9a0 * local_8c + local_9d8) * 0x10;
                            *(double *)(iVar35 + (int)local_9dc) = dVar4 * dVar2 - dVar3 * 0.0;
                            *(double *)(iVar35 + 8 + (int)local_9dc) = dVar2 * 0.0 + dVar3 * dVar4;
                            bVar41 = local_8c != 3;
                            local_8c = local_8c + 1;
                          } while (bVar41);
                          bVar41 = local_90 != 3;
                          local_90 = local_90 + 1;
                        } while (bVar41);
                        bVar41 = local_94 != 3;
                        local_94 = local_94 + 1;
                      } while (bVar41);
                    }
                    bVar41 = local_b4 != uVar25;
                    local_b4 = local_b4 + 1;
                  } while (bVar41);
                }
              }
              bVar41 = local_b8 != uVar28;
              local_b8 = local_b8 + 1;
            } while (bVar41);
          }
          uVar28 = *param_7;
          local_b8 = 1;
          if (0 < (int)uVar28) {
            do {
              dVar1 = *(double *)
                       (param_8 + (uVar31 * local_bc + local_850 * iVar39 + local_b8 + iVar34) * 8);
              if (dVar1 < (double)emin) {
                emin = (real_kind_8_)dVar1;
              }
              dVar1 = *(double *)
                       (param_8 + (uVar31 * local_bc + local_850 * iVar39 + local_b8 + iVar34) * 8);
              if ((double)emax < dVar1) {
                emax = (real_kind_8_)dVar1;
              }
              uVar25 = *param_7;
              local_b4 = 1;
              if (0 < (int)uVar25) {
                do {
                  iVar35 = 1;
                  while (iVar35 < 4) {
                    iVar33 = (iVar37 * iVar35 +
                             iVar38 * local_bc +
                             iVar36 * local_850 + local_b8 * uVar32 + local_b8 + iVar40) * 0x10;
                    dVar1 = *(double *)(iVar33 + 8 + param_10);
                    iVar29 = (iVar37 * iVar35 +
                             local_bc * iVar38 +
                             iVar36 * local_850 + uVar32 * local_b4 + iVar40 + local_b4) * 0x10;
                    dVar2 = *(double *)(iVar29 + 8 + param_10);
                    iVar30 = (iVar35 * local_310 +
                             local_31c * local_b4 +
                             delta[0][0][0]._12_4_ * local_b8 + delta[0][0][0]._4_4_) * 0x10;
                    *(double *)(iVar30 + (int)delta[0][0][0]._0_4_) =
                         *(double *)(iVar33 + param_10) - *(double *)(iVar29 + param_10);
                    *(double *)(iVar30 + 8 + (int)delta[0][0][0]._0_4_) = dVar1 - dVar2;
                    iVar35 = iVar35 + 1;
                  }
                  bVar41 = local_b4 != uVar25;
                  local_b4 = local_b4 + 1;
                } while (bVar41);
              }
              bVar41 = local_b8 != uVar28;
              local_b8 = local_b8 + 1;
            } while (bVar41);
          }
          b312._0_8_ = 0.0;
          b312._8_8_ = 0.0;
          uVar28 = *param_7;
          local_a8 = 1;
          if (0 < (int)uVar28) {
            do {
              dVar1 = *(double *)
                       (param_8 + (uVar31 * local_bc + local_850 * iVar39 + local_a8 + iVar34) * 8);
              if (dVar1 < *param_9) {
                uVar25 = *param_7;
                local_ac = 1;
                if (0 < (int)uVar25) {
                  do {
                    dVar2 = *(double *)
                             (param_8 +
                             (uVar31 * local_bc + local_850 * iVar39 + local_ac + iVar34) * 8);
                    if (*param_9 < dVar2) {
                      dVar2 = dVar2 + *param_16;
                      dVar3 = dVar2 - dVar1;
                      dVar4 = -dVar3;
                      local_904 = 0.0;
                      local_8fc = 0.0;
                      local_8e4 = 0.0;
                      local_8dc = 0.0;
                      local_94 = 1;
                      do {
                        local_90 = 1;
                        do {
                          local_8c = 1;
                          do {
                            iVar35 = (local_940 * local_a8 + local_934 * local_ac +
                                      local_91c * local_90 + local_928 * local_94 +
                                      local_910 * local_8c + local_948) * 0x10;
                            dVar5 = *(double *)(iVar35 + (int)local_94c);
                            dVar6 = *(double *)(iVar35 + 8 + (int)local_94c);
                            iVar35 = (uVar32 * local_a8 + local_850 * iVar36 + local_ac +
                                      iVar38 * local_bc + iVar37 * local_8c + iVar40) * 0x10;
                            dVar7 = *(double *)(iVar35 + param_10);
                            dVar8 = *(double *)(iVar35 + 8 + param_10);
                            dVar9 = dVar5 * dVar7 - dVar6 * dVar8;
                            dVar7 = dVar7 * dVar6 + dVar8 * dVar5;
                            iVar35 = (delta[0][0][0]._12_4_ * local_ac + local_31c * local_a8 +
                                      local_310 * local_90 + delta[0][0][0]._4_4_) * 0x10;
                            dVar5 = *(double *)(iVar35 + (int)delta[0][0][0]._0_4_);
                            dVar6 = *(double *)(iVar35 + 8 + (int)delta[0][0][0]._0_4_);
                            local_904 = local_904 + (dVar9 * dVar5 - dVar7 * dVar6);
                            local_8fc = local_8fc + dVar5 * dVar7 + dVar6 * dVar9;
                            iVar35 = (local_940 * local_a8 + local_934 * local_ac +
                                      local_91c * local_90 + local_928 * local_94 +
                                      local_910 * local_8c + local_948) * 0x10;
                            dVar5 = *(double *)(iVar35 + (int)local_94c);
                            dVar6 = *(double *)(iVar35 + 8 + (int)local_94c);
                            iVar35 = (uVar32 * local_a8 + local_850 * iVar36 + local_ac +
                                      iVar38 * local_bc + iVar37 * local_90 + iVar40) * 0x10;
                            dVar7 = *(double *)(iVar35 + param_10);
                            dVar8 = *(double *)(iVar35 + 8 + param_10);
                            dVar9 = dVar5 * dVar7 - dVar6 * dVar8;
                            dVar7 = dVar7 * dVar6 + dVar8 * dVar5;
                            iVar35 = (delta[0][0][0]._12_4_ * local_ac + local_31c * local_a8 +
                                      local_310 * local_8c + delta[0][0][0]._4_4_) * 0x10;
                            dVar5 = *(double *)(iVar35 + (int)delta[0][0][0]._0_4_);
                            dVar6 = *(double *)(iVar35 + 8 + (int)delta[0][0][0]._0_4_);
                            local_8e4 = local_8e4 + (dVar9 * dVar5 - dVar7 * dVar6);
                            local_8dc = local_8dc + dVar5 * dVar7 + dVar6 * dVar9;
                            bVar41 = local_8c != 3;
                            local_8c = local_8c + 1;
                          } while (bVar41);
                          bVar41 = local_90 != 3;
                          local_90 = local_90 + 1;
                        } while (bVar41);
                        bVar41 = local_94 != 3;
                        local_94 = local_94 + 1;
                      } while (bVar41);
                      b11._0_8_ = 0.0;
                      b11._8_8_ = 0.0;
                      b12_13._0_8_ = 0.0;
                      b12_13._8_8_ = 0.0;
                      b24._0_8_ = 0.0;
                      b24._8_8_ = 0.0;
                      b31_32._0_8_ = 0.0;
                      b31_32._8_8_ = 0.0;
                      b21_22._0_8_ = 0.0;
                      b21_22._8_8_ = 0.0;
                      dVar6 = local_904 * 8.0 - local_8fc * 0.0;
                      dVar5 = local_8fc * 8.0 + local_904 * 0.0;
                      if (0.0 <= ABS(dVar3)) {
                        dVar9 = 0.0 / dVar3;
                        dVar7 = dVar3 + dVar9 * 0.0;
                        dVar8 = (dVar5 * dVar9 + dVar6) / dVar7;
                        dVar7 = (dVar5 - dVar6 * dVar9) / dVar7;
                      }
                      else {
                        dVar9 = dVar3 / 0.0;
                        dVar7 = dVar3 * dVar9 + 0.0;
                        dVar8 = (dVar6 * dVar9 + dVar5) / dVar7;
                        dVar7 = (dVar5 * dVar9 - dVar6) / dVar7;
                      }
                      if (0.0 <= ABS(dVar4)) {
                        dVar9 = 0.0 / dVar4;
                        dVar5 = dVar4 + dVar9 * 0.0;
                        dVar6 = (local_8dc * dVar9 + local_8e4) / dVar5;
                        dVar5 = dVar5 / (local_8dc - local_8e4 * dVar9);
                      }
                      else {
                        dVar9 = dVar4 / 0.0;
                        dVar5 = dVar4 * dVar9 + 0.0;
                        dVar6 = (local_8e4 * dVar9 + local_8dc) / dVar5;
                        dVar5 = dVar5 / (local_8dc * dVar9 - local_8e4);
                      }
                      local_b0 = 1;
                      if (0 < (int)(local_a8 - 1)) {
                        do {
                          dVar9 = *(double *)
                                   (param_8 +
                                   (uVar31 * local_bc + local_850 * iVar39 + local_b0 + iVar34) * 8)
                          ;
                          dVar14 = dVar9 - dVar1;
                          dVar9 = dVar2 - dVar9;
                          dVar15 = -dVar9;
                          local_8f4 = 0.0;
                          local_8ec = 0.0;
                          local_8c4 = 0.0;
                          local_8bc = 0.0;
                          local_8d4 = 0.0;
                          local_8cc = 0.0;
                          local_94 = 1;
                          do {
                            local_90 = 1;
                            do {
                              local_8c = 1;
                              do {
                                iVar35 = (local_940 * local_a8 + local_934 * local_ac +
                                          local_91c * local_90 + local_928 * local_94 +
                                          local_910 * local_8c + local_948) * 0x10;
                                dVar10 = *(double *)(iVar35 + (int)local_94c);
                                dVar11 = *(double *)(iVar35 + 8 + (int)local_94c);
                                iVar35 = (uVar32 * local_b0 + local_850 * iVar36 + local_ac +
                                          iVar38 * local_bc + iVar37 * local_90 + iVar40) * 0x10;
                                dVar12 = *(double *)(iVar35 + param_10);
                                dVar13 = *(double *)(iVar35 + 8 + param_10);
                                dVar16 = dVar10 * dVar12 - dVar11 * dVar13;
                                dVar12 = dVar12 * dVar11 + dVar13 * dVar10;
                                iVar35 = (uVar32 * local_a8 + local_850 * iVar36 + local_b0 +
                                          iVar38 * local_bc + iVar37 * local_8c + iVar40) * 0x10;
                                dVar10 = *(double *)(iVar35 + param_10);
                                dVar11 = *(double *)(iVar35 + 8 + param_10);
                                local_8f4 = local_8f4 + (dVar16 * dVar10 - dVar12 * dVar11);
                                local_8ec = local_8ec + dVar10 * dVar12 + dVar11 * dVar16;
                                iVar35 = (local_988 * local_ac + local_97c * local_a8 +
                                          local_964 * local_90 + local_970 * local_94 +
                                          local_958 * local_8c + local_990) * 0x10;
                                dVar10 = *(double *)(iVar35 + (int)local_994);
                                dVar11 = *(double *)(iVar35 + 8 + (int)local_994);
                                iVar35 = (uVar32 * local_ac + local_850 * iVar36 + local_b0 +
                                          iVar38 * local_bc + iVar37 * local_8c + iVar40) * 0x10;
                                dVar12 = *(double *)(iVar35 + param_10);
                                dVar13 = *(double *)(iVar35 + 8 + param_10);
                                dVar16 = dVar10 * dVar12 - dVar11 * dVar13;
                                dVar12 = dVar12 * dVar11 + dVar13 * dVar10;
                                iVar35 = (uVar32 * local_b0 + local_850 * iVar36 + local_a8 +
                                          iVar38 * local_bc + iVar37 * local_90 + iVar40) * 0x10;
                                dVar10 = *(double *)(iVar35 + param_10);
                                dVar11 = *(double *)(iVar35 + 8 + param_10);
                                local_8c4 = local_8c4 + (dVar16 * dVar10 - dVar12 * dVar11);
                                local_8bc = local_8bc + dVar10 * dVar12 + dVar11 * dVar16;
                                iVar35 = (local_9d0 * local_ac + local_9c4 * local_a8 +
                                          local_9ac * local_90 + local_9b8 * local_94 +
                                          local_9a0 * local_8c + local_9d8) * 0x10;
                                dVar10 = *(double *)(iVar35 + (int)local_9dc);
                                dVar11 = *(double *)(iVar35 + 8 + (int)local_9dc);
                                iVar35 = (uVar32 * local_ac + local_850 * iVar36 + local_b0 +
                                          iVar38 * local_bc + iVar37 * local_8c + iVar40) * 0x10;
                                dVar12 = *(double *)(iVar35 + param_10);
                                dVar13 = *(double *)(iVar35 + 8 + param_10);
                                dVar16 = dVar10 * dVar12 - dVar11 * dVar13;
                                dVar12 = dVar12 * dVar11 + dVar13 * dVar10;
                                iVar35 = (uVar32 * local_b0 + local_850 * iVar36 + local_a8 +
                                          iVar38 * local_bc + iVar37 * local_90 + iVar40) * 0x10;
                                dVar10 = *(double *)(iVar35 + param_10);
                                dVar11 = *(double *)(iVar35 + 8 + param_10);
                                local_8d4 = local_8d4 + (dVar16 * dVar10 - dVar12 * dVar11);
                                local_8cc = local_8cc + dVar10 * dVar12 + dVar11 * dVar16;
                                bVar41 = local_8c != 3;
                                local_8c = local_8c + 1;
                              } while (bVar41);
                              bVar41 = local_90 != 3;
                              local_90 = local_90 + 1;
                            } while (bVar41);
                            bVar41 = local_94 != 3;
                            local_94 = local_94 + 1;
                          } while (bVar41);
                          dVar10 = 1.0 / (dVar14 + dVar15);
                          dVar12 = dVar10 * local_8f4 - local_8ec * 0.0;
                          dVar10 = local_8f4 * 0.0 + local_8ec * dVar10;
                          dVar11 = dVar12 * (1.0 / dVar15) - dVar10 * 0.0;
                          dVar10 = (1.0 / dVar15) * dVar10 + dVar12 * 0.0;
                          dVar12 = 1.0 / (dVar4 + dVar15);
                          dVar16 = dVar12 * local_8c4 - local_8bc * 0.0;
                          dVar12 = local_8c4 * 0.0 + local_8bc * dVar12;
                          dVar13 = dVar16 * (1.0 / dVar15) - dVar12 * 0.0;
                          dVar12 = (1.0 / dVar15) * dVar12 + dVar16 * 0.0;
                          dVar18 = (1.0 / dVar15) * local_8d4 - local_8cc * 0.0;
                          dVar16 = local_8d4 * 0.0 + local_8cc * (1.0 / dVar15);
                          if (0.0 <= ABS(dVar9)) {
                            dVar21 = 0.0 / dVar9;
                            dVar19 = dVar9 + dVar21 * 0.0;
                            dVar20 = (local_8bc * dVar21 + local_8c4) / dVar19;
                            dVar19 = dVar19 / (local_8bc - local_8c4 * dVar21);
                          }
                          else {
                            dVar21 = dVar9 / 0.0;
                            dVar19 = dVar9 * dVar21 + 0.0;
                            dVar20 = (local_8c4 * dVar21 + local_8bc) / dVar19;
                            dVar19 = dVar19 / (local_8bc * dVar21 - local_8c4);
                          }
                          if (0.0 <= ABS(dVar9)) {
                            dVar22 = 0.0 / dVar9;
                            dVar9 = dVar9 + dVar22 * 0.0;
                            dVar21 = (local_8ec * dVar22 + local_8f4) / dVar9;
                            dVar9 = dVar9 / (local_8ec - local_8f4 * dVar22);
                          }
                          else {
                            dVar22 = dVar9 / 0.0;
                            dVar9 = dVar9 * dVar22 + 0.0;
                            dVar21 = (local_8f4 * dVar22 + local_8ec) / dVar9;
                            dVar9 = dVar9 / (local_8ec * dVar22 - local_8f4);
                          }
                          b241._0_8_ = -dVar21;
                          b241._8_8_ = -dVar9;
                          if (0.0 <= ABS(dVar15)) {
                            dVar9 = 0.0 / dVar15;
                            dVar15 = dVar15 + dVar9 * 0.0;
                            b311._0_8_ = (local_8cc * dVar9 + local_8d4) / dVar15;
                            b311._8_8_ = dVar15 / (local_8cc - local_8d4 * dVar9);
                          }
                          else {
                            dVar21 = dVar15 / 0.0;
                            dVar9 = dVar15 * dVar21 + 0.0;
                            b311._0_8_ = (local_8d4 * dVar21 + local_8cc) / dVar9;
                            b311._8_8_ = dVar9 / (local_8cc * dVar21 - local_8d4);
                          }
                          if (ABS(dVar14) <= *param_18) {
                            b111._0_8_ = 0.0;
                            b111._8_8_ = 0.0;
                            b121._0_8_ = 0.0;
                            b121._8_8_ = 0.0;
                            b131._0_8_ = 0.0;
                            b131._8_8_ = 0.0;
                            b221._0_8_ = 0.0;
                            b221._8_8_ = 0.0;
                          }
                          else {
                            if (0.0 <= ABS(dVar14)) {
                              dVar15 = 0.0 / dVar14;
                              dVar9 = dVar14 + dVar15 * 0.0;
                              b111._0_8_ = (dVar10 * dVar15 + dVar11) / dVar9;
                              b111._8_8_ = dVar9 / (dVar10 - dVar11 * dVar15);
                            }
                            else {
                              dVar15 = dVar14 / 0.0;
                              dVar9 = dVar14 * dVar15 + 0.0;
                              b111._0_8_ = (dVar11 * dVar15 + dVar10) / dVar9;
                              b111._8_8_ = dVar9 / (dVar10 * dVar15 - dVar11);
                            }
                            if (0.0 <= ABS(dVar14)) {
                              dVar15 = 0.0 / dVar14;
                              dVar9 = dVar14 + dVar15 * 0.0;
                              b121._0_8_ = (dVar12 * dVar15 + dVar13) / dVar9;
                              b121._8_8_ = dVar9 / (dVar12 - dVar13 * dVar15);
                            }
                            else {
                              dVar15 = dVar14 / 0.0;
                              dVar9 = dVar14 * dVar15 + 0.0;
                              b121._0_8_ = (dVar13 * dVar15 + dVar12) / dVar9;
                              b121._8_8_ = dVar9 / (dVar12 * dVar15 - dVar13);
                            }
                            if (0.0 <= ABS(dVar14)) {
                              dVar15 = 0.0 / dVar14;
                              dVar9 = dVar14 + dVar15 * 0.0;
                              b131._0_8_ = (dVar16 * dVar15 + dVar18) / dVar9;
                              b131._8_8_ = dVar9 / (dVar16 - dVar18 * dVar15);
                            }
                            else {
                              dVar15 = dVar14 / 0.0;
                              dVar9 = dVar14 * dVar15 + 0.0;
                              b131._0_8_ = (dVar18 * dVar15 + dVar16) / dVar9;
                              b131._8_8_ = dVar9 / (dVar16 * dVar15 - dVar18);
                            }
                            if (0.0 <= ABS(dVar14)) {
                              dVar15 = 0.0 / dVar14;
                              dVar9 = dVar14 + dVar15 * 0.0;
                              b221._0_8_ = (local_8cc * dVar15 + local_8d4) / dVar9;
                              b221._8_8_ = dVar9 / (local_8cc - local_8d4 * dVar15);
                            }
                            else {
                              dVar15 = dVar14 / 0.0;
                              dVar9 = dVar14 * dVar15 + 0.0;
                              b221._0_8_ = (local_8d4 * dVar15 + local_8cc) / dVar9;
                              b221._8_8_ = dVar9 / (local_8cc * dVar15 - local_8d4);
                            }
                            if (0.0 <= ABS(dVar14)) {
                              dVar10 = 0.0 / dVar14;
                              dVar9 = dVar14 + dVar10 * 0.0;
                              dVar15 = (local_8ec * dVar10 + local_8f4) / dVar9;
                              dVar9 = dVar9 / (local_8ec - local_8f4 * dVar10);
                            }
                            else {
                              dVar10 = dVar14 / 0.0;
                              dVar9 = dVar14 * dVar10 + 0.0;
                              dVar15 = (local_8f4 * dVar10 + local_8ec) / dVar9;
                              dVar9 = dVar9 / (local_8ec * dVar10 - local_8f4);
                            }
                            b241._0_8_ = b241._0_8_ + dVar15;
                            b241._8_8_ = b241._8_8_ + dVar9;
                            if (0.0 <= ABS(dVar14)) {
                              dVar10 = 0.0 / dVar14;
                              dVar9 = dVar14 + dVar10 * 0.0;
                              dVar15 = (local_8bc * dVar10 + local_8c4) / dVar9;
                              dVar9 = dVar9 / (local_8bc - local_8c4 * dVar10);
                            }
                            else {
                              dVar10 = dVar14 / 0.0;
                              dVar9 = dVar14 * dVar10 + 0.0;
                              dVar15 = (local_8c4 * dVar10 + local_8bc) / dVar9;
                              dVar9 = dVar9 / (local_8bc * dVar10 - local_8c4);
                            }
                            b311._0_8_ = b311._0_8_ + dVar15;
                            b311._8_8_ = b311._8_8_ + dVar9;
                          }
                          dVar14 = dVar14 - dVar4;
                          if (ABS(dVar14) <= *param_18) {
                            b131._0_8_ = 0.0;
                            b131._8_8_ = 0.0;
                          }
                          else {
                            if (0.0 <= ABS(dVar14)) {
                              dVar15 = 0.0 / dVar14;
                              dVar14 = dVar14 + dVar15 * 0.0;
                              dVar9 = b131._0_8_ * dVar15;
                              b131._0_8_ = (b131._8_8_ * dVar15 + b131._0_8_) / dVar14;
                              b131._8_8_ = dVar14 / (b131._8_8_ - dVar9);
                            }
                            else {
                              dVar15 = dVar14 / 0.0;
                              dVar9 = dVar14 * dVar15 + 0.0;
                              dVar14 = b131._8_8_ * dVar15 - b131._0_8_;
                              b131._0_8_ = (b131._0_8_ * dVar15 + b131._8_8_) / dVar9;
                              b131._8_8_ = dVar9 / dVar14;
                            }
                          }
                          b11._0_8_ = b11._0_8_ + (b111._0_8_ * -2.0 - b111._8_8_ * -0.0);
                          b11._8_8_ = b11._8_8_ + b111._8_8_ * -2.0 + b111._0_8_ * -0.0;
                          b12_13._0_8_ = b131._0_8_ + b121._0_8_ + b12_13._0_8_;
                          b12_13._8_8_ = b131._8_8_ + b121._8_8_ + b12_13._8_8_;
                          b21_22._0_8_ = b221._0_8_ - dVar20;
                          b21_22._8_8_ = b221._8_8_ - dVar19;
                          b24._0_8_ = b24._0_8_ + ((b241._0_8_ + b241._0_8_) - b241._8_8_ * 0.0);
                          b24._8_8_ = b24._8_8_ + b241._8_8_ + b241._8_8_ + b241._0_8_ * 0.0;
                          b31_32._0_8_ = b311._0_8_ + b31_32._0_8_;
                          b31_32._8_8_ = b311._8_8_ + b31_32._8_8_;
                          bVar41 = local_b0 != local_a8 - 1;
                          local_b0 = local_b0 + 1;
                        } while (bVar41);
                      }
                      local_b0 = local_a8 + 1;
                      if ((int)local_b0 <= (int)(local_ac - 1)) {
                        do {
                          el = *(real_kind_8_ *)
                                (param_8 +
                                (uVar31 * local_bc + local_850 * iVar39 + local_b0 + iVar34) * 8);
                          local_8f4 = 0.0;
                          local_8ec = 0.0;
                          local_8c4 = 0.0;
                          local_8bc = 0.0;
                          local_8d4 = 0.0;
                          local_8cc = 0.0;
                          local_94 = 1;
                          do {
                            local_90 = 1;
                            do {
                              local_8c = 1;
                              do {
                                iVar35 = (local_940 * local_a8 + local_934 * local_ac +
                                          local_91c * local_90 + local_928 * local_94 +
                                          local_910 * local_8c + local_948) * 0x10;
                                dVar9 = *(double *)(iVar35 + (int)local_94c);
                                dVar14 = *(double *)(iVar35 + 8 + (int)local_94c);
                                iVar35 = (uVar32 * local_b0 + local_850 * iVar36 + local_ac +
                                          iVar38 * local_bc + iVar37 * local_90 + iVar40) * 0x10;
                                dVar15 = *(double *)(iVar35 + param_10);
                                dVar10 = *(double *)(iVar35 + 8 + param_10);
                                dVar11 = dVar9 * dVar15 - dVar14 * dVar10;
                                dVar15 = dVar15 * dVar14 + dVar10 * dVar9;
                                iVar35 = (uVar32 * local_a8 + local_850 * iVar36 + local_b0 +
                                          iVar38 * local_bc + iVar37 * local_8c + iVar40) * 0x10;
                                dVar9 = *(double *)(iVar35 + param_10);
                                dVar14 = *(double *)(iVar35 + 8 + param_10);
                                local_8f4 = local_8f4 + (dVar11 * dVar9 - dVar15 * dVar14);
                                local_8ec = local_8ec + dVar9 * dVar15 + dVar14 * dVar11;
                                iVar35 = (local_988 * local_ac + local_97c * local_a8 +
                                          local_964 * local_90 + local_970 * local_94 +
                                          local_958 * local_8c + local_990) * 0x10;
                                dVar9 = *(double *)(iVar35 + (int)local_994);
                                dVar14 = *(double *)(iVar35 + 8 + (int)local_994);
                                iVar35 = (uVar32 * local_ac + local_850 * iVar36 + local_b0 +
                                          iVar38 * local_bc + iVar37 * local_8c + iVar40) * 0x10;
                                dVar15 = *(double *)(iVar35 + param_10);
                                dVar10 = *(double *)(iVar35 + 8 + param_10);
                                dVar11 = dVar9 * dVar15 - dVar14 * dVar10;
                                dVar15 = dVar15 * dVar14 + dVar10 * dVar9;
                                iVar35 = (uVar32 * local_b0 + local_850 * iVar36 + local_a8 +
                                          iVar38 * local_bc + iVar37 * local_90 + iVar40) * 0x10;
                                dVar9 = *(double *)(iVar35 + param_10);
                                dVar14 = *(double *)(iVar35 + 8 + param_10);
                                local_8c4 = local_8c4 + (dVar11 * dVar9 - dVar15 * dVar14);
                                local_8bc = local_8bc + dVar9 * dVar15 + dVar14 * dVar11;
                                iVar35 = (local_9d0 * local_ac + local_9c4 * local_a8 +
                                          local_9ac * local_90 + local_9b8 * local_94 +
                                          local_9a0 * local_8c + local_9d8) * 0x10;
                                dVar9 = *(double *)(iVar35 + (int)local_9dc);
                                dVar14 = *(double *)(iVar35 + 8 + (int)local_9dc);
                                iVar35 = (uVar32 * local_ac + local_850 * iVar36 + local_b0 +
                                          iVar38 * local_bc + iVar37 * local_8c + iVar40) * 0x10;
                                dVar15 = *(double *)(iVar35 + param_10);
                                dVar10 = *(double *)(iVar35 + 8 + param_10);
                                dVar11 = dVar9 * dVar15 - dVar14 * dVar10;
                                dVar15 = dVar15 * dVar14 + dVar10 * dVar9;
                                iVar35 = (uVar32 * local_b0 + local_850 * iVar36 + local_a8 +
                                          iVar38 * local_bc + iVar37 * local_90 + iVar40) * 0x10;
                                dVar9 = *(double *)(iVar35 + param_10);
                                dVar14 = *(double *)(iVar35 + 8 + param_10);
                                local_8d4 = local_8d4 + (dVar11 * dVar9 - dVar15 * dVar14);
                                local_8cc = local_8cc + dVar9 * dVar15 + dVar14 * dVar11;
                                bVar41 = local_8c != 3;
                                local_8c = local_8c + 1;
                              } while (bVar41);
                              bVar41 = local_90 != 3;
                              local_90 = local_90 + 1;
                            } while (bVar41);
                            bVar41 = local_94 != 3;
                            local_94 = local_94 + 1;
                          } while (bVar41);
                          if (*param_9 <= (double)el) {
                            el = (real_kind_8_)((double)el + *param_16);
                          }
                          local_44 = (double)el - dVar1;
                          local_2c = -local_44;
                          local_3c = dVar2 - (double)el;
                          local_4c = -local_3c;
                          b112._0_8_ = 0.0;
                          b112._8_8_ = 0.0;
                          dVar9 = 1.0 / (dVar4 + local_4c);
                          dVar14 = dVar9 * local_8c4 - local_8bc * 0.0;
                          dVar9 = local_8c4 * 0.0 + local_8bc * dVar9;
                          dVar15 = 1.0 / (dVar4 + local_2c);
                          dVar10 = dVar15 * local_8d4 - local_8cc * 0.0;
                          dVar15 = local_8d4 * 0.0 + local_8cc * dVar15;
                          b242._0_8_ = 0.0;
                          b242._8_8_ = 0.0;
                          b222._0_8_ = 0.0;
                          b222._8_8_ = 0.0;
                          if (ABS(local_2c) <= *param_18) {
                            b122._0_8_ = 0.0;
                            b122._8_8_ = 0.0;
                            b132._0_8_ = 0.0;
                            b132._8_8_ = 0.0;
                          }
                          else {
                            if (0.0 <= ABS(local_44)) {
                              dVar12 = 0.0 / local_44;
                              dVar11 = local_44 + dVar12 * 0.0;
                              b112._0_8_ = (local_8ec * dVar12 + local_8f4) / dVar11;
                              b112._8_8_ = dVar11 / (local_8ec - local_8f4 * dVar12);
                            }
                            else {
                              dVar12 = local_44 / 0.0;
                              dVar11 = local_44 * dVar12 + 0.0;
                              b112._0_8_ = (local_8f4 * dVar12 + local_8ec) / dVar11;
                              b112._8_8_ = dVar11 / (local_8ec * dVar12 - local_8f4);
                            }
                            if (0.0 <= ABS(local_2c)) {
                              dVar12 = 0.0 / local_2c;
                              dVar11 = local_2c + dVar12 * 0.0;
                              b122._0_8_ = (dVar9 * dVar12 + dVar14) / dVar11;
                              b122._8_8_ = dVar11 / (dVar9 - dVar14 * dVar12);
                            }
                            else {
                              dVar12 = local_2c / 0.0;
                              dVar11 = local_2c * dVar12 + 0.0;
                              b122._0_8_ = (dVar14 * dVar12 + dVar9) / dVar11;
                              b122._8_8_ = dVar11 / (dVar9 * dVar12 - dVar14);
                            }
                            if (0.0 <= ABS(local_2c)) {
                              dVar14 = 0.0 / local_2c;
                              dVar9 = local_2c + dVar14 * 0.0;
                              b132._0_8_ = (dVar15 * dVar14 + dVar10) / dVar9;
                              b132._8_8_ = dVar9 / (dVar15 - dVar10 * dVar14);
                            }
                            else {
                              dVar14 = local_2c / 0.0;
                              dVar9 = local_2c * dVar14 + 0.0;
                              b132._0_8_ = (dVar10 * dVar14 + dVar15) / dVar9;
                              b132._8_8_ = dVar9 / (dVar15 * dVar14 - dVar10);
                            }
                            if (0.0 <= ABS(local_44)) {
                              dVar14 = 0.0 / local_44;
                              dVar9 = local_44 + dVar14 * 0.0;
                              b242._0_8_ = (local_8ec * dVar14 + local_8f4) / dVar9;
                              b242._8_8_ = dVar9 / (local_8ec - local_8f4 * dVar14);
                            }
                            else {
                              dVar14 = local_44 / 0.0;
                              dVar9 = local_44 * dVar14 + 0.0;
                              b242._0_8_ = (local_8f4 * dVar14 + local_8ec) / dVar9;
                              b242._8_8_ = dVar9 / (local_8ec * dVar14 - local_8f4);
                            }
                            if (0.0 <= ABS(local_44)) {
                              dVar14 = 0.0 / local_44;
                              dVar9 = local_44 + dVar14 * 0.0;
                              b222._0_8_ = (local_8cc * dVar14 + local_8d4) / dVar9;
                              b222._8_8_ = dVar9 / (local_8cc - local_8d4 * dVar14);
                            }
                            else {
                              dVar14 = local_44 / 0.0;
                              dVar9 = local_44 * dVar14 + 0.0;
                              b222._0_8_ = (local_8d4 * dVar14 + local_8cc) / dVar9;
                              b222._8_8_ = dVar9 / (local_8cc * dVar14 - local_8d4);
                            }
                            if (0.0 <= ABS(local_44)) {
                              dVar9 = 0.0 / local_44;
                              local_44 = local_44 + dVar9 * 0.0;
                              b312._0_8_ = (local_8bc * dVar9 + local_8c4) / local_44;
                              b312._8_8_ = local_44 / (local_8bc - local_8c4 * dVar9);
                            }
                            else {
                              dVar14 = local_44 / 0.0;
                              dVar9 = local_44 * dVar14 + 0.0;
                              b312._0_8_ = (local_8c4 * dVar14 + local_8bc) / dVar9;
                              b312._8_8_ = dVar9 / (local_8bc * dVar14 - local_8c4);
                            }
                          }
                          if (ABS(local_4c) <= *param_18) {
                            b112._0_8_ = 0.0;
                            b112._8_8_ = 0.0;
                            b122._0_8_ = 0.0;
                            b122._8_8_ = 0.0;
                            b132._0_8_ = 0.0;
                            b132._8_8_ = 0.0;
                            b212._0_8_ = 0.0;
                            b212._8_8_ = 0.0;
                          }
                          else {
                            if (0.0 <= ABS(local_3c)) {
                              dVar15 = 0.0 / local_3c;
                              dVar14 = local_3c + dVar15 * 0.0;
                              dVar9 = b112._0_8_ * dVar15;
                              b112._0_8_ = (b112._8_8_ * dVar15 + b112._0_8_) / dVar14;
                              b112._8_8_ = dVar14 / (b112._8_8_ - dVar9);
                            }
                            else {
                              dVar15 = local_3c / 0.0;
                              dVar9 = local_3c * dVar15 + 0.0;
                              dVar14 = b112._8_8_ * dVar15 - b112._0_8_;
                              b112._0_8_ = (b112._0_8_ * dVar15 + b112._8_8_) / dVar9;
                              b112._8_8_ = dVar9 / dVar14;
                            }
                            if (0.0 <= ABS(local_4c)) {
                              dVar15 = 0.0 / local_4c;
                              dVar14 = local_4c + dVar15 * 0.0;
                              dVar9 = b122._0_8_ * dVar15;
                              b122._0_8_ = (b122._8_8_ * dVar15 + b122._0_8_) / dVar14;
                              b122._8_8_ = dVar14 / (b122._8_8_ - dVar9);
                            }
                            else {
                              dVar15 = local_4c / 0.0;
                              dVar9 = local_4c * dVar15 + 0.0;
                              dVar14 = b122._8_8_ * dVar15 - b122._0_8_;
                              b122._0_8_ = (b122._0_8_ * dVar15 + b122._8_8_) / dVar9;
                              b122._8_8_ = dVar9 / dVar14;
                            }
                            if (0.0 <= ABS(local_4c)) {
                              dVar15 = 0.0 / local_4c;
                              dVar14 = local_4c + dVar15 * 0.0;
                              dVar9 = b132._0_8_ * dVar15;
                              b132._0_8_ = (b132._8_8_ * dVar15 + b132._0_8_) / dVar14;
                              b132._8_8_ = dVar14 / (b132._8_8_ - dVar9);
                            }
                            else {
                              dVar15 = local_4c / 0.0;
                              dVar9 = local_4c * dVar15 + 0.0;
                              dVar14 = b132._8_8_ * dVar15 - b132._0_8_;
                              b132._0_8_ = (b132._0_8_ * dVar15 + b132._8_8_) / dVar9;
                              b132._8_8_ = dVar9 / dVar14;
                            }
                            if (0.0 <= ABS(local_3c)) {
                              dVar15 = 0.0 / local_3c;
                              dVar9 = local_3c + dVar15 * 0.0;
                              dVar14 = (local_8ec * dVar15 + local_8f4) / dVar9;
                              dVar9 = dVar9 / (local_8ec - local_8f4 * dVar15);
                            }
                            else {
                              dVar15 = local_3c / 0.0;
                              dVar9 = local_3c * dVar15 + 0.0;
                              dVar14 = (local_8f4 * dVar15 + local_8ec) / dVar9;
                              dVar9 = dVar9 / (local_8ec * dVar15 - local_8f4);
                            }
                            b242._0_8_ = b242._0_8_ - dVar14;
                            b242._8_8_ = b242._8_8_ - dVar9;
                            if (0.0 <= ABS(local_3c)) {
                              dVar9 = 0.0 / local_3c;
                              local_3c = local_3c + dVar9 * 0.0;
                              b212._0_8_ = (local_8bc * dVar9 + local_8c4) / local_3c;
                              b212._8_8_ = local_3c / (local_8bc - local_8c4 * dVar9);
                            }
                            else {
                              dVar14 = local_3c / 0.0;
                              dVar9 = local_3c * dVar14 + 0.0;
                              b212._0_8_ = (local_8c4 * dVar14 + local_8bc) / dVar9;
                              b212._8_8_ = dVar9 / (local_8bc * dVar14 - local_8c4);
                            }
                            if (0.0 <= ABS(local_4c)) {
                              dVar15 = 0.0 / local_4c;
                              dVar9 = local_4c + dVar15 * 0.0;
                              dVar14 = (local_8cc * dVar15 + local_8d4) / dVar9;
                              dVar9 = dVar9 / (local_8cc - local_8d4 * dVar15);
                            }
                            else {
                              dVar15 = local_4c / 0.0;
                              dVar9 = local_4c * dVar15 + 0.0;
                              dVar14 = (local_8d4 * dVar15 + local_8cc) / dVar9;
                              dVar9 = dVar9 / (local_8cc * dVar15 - local_8d4);
                            }
                            b312._0_8_ = b312._0_8_ + dVar14;
                            b312._8_8_ = b312._8_8_ + dVar9;
                          }
                          local_4c = local_4c - local_2c;
                          if (ABS(local_4c) <= *param_18) {
                            b112._0_8_ = 0.0;
                            b112._8_8_ = 0.0;
                          }
                          else {
                            if (0.0 <= ABS(local_4c)) {
                              dVar14 = 0.0 / local_4c;
                              local_4c = local_4c + dVar14 * 0.0;
                              dVar9 = b112._0_8_ * dVar14;
                              b112._0_8_ = (b112._8_8_ * dVar14 + b112._0_8_) / local_4c;
                              b112._8_8_ = local_4c / (b112._8_8_ - dVar9);
                            }
                            else {
                              dVar15 = local_4c / 0.0;
                              dVar9 = local_4c * dVar15 + 0.0;
                              dVar14 = b112._8_8_ * dVar15 - b112._0_8_;
                              b112._0_8_ = (b112._0_8_ * dVar15 + b112._8_8_) / dVar9;
                              b112._8_8_ = dVar9 / dVar14;
                            }
                          }
                          b11._0_8_ = b11._0_8_ + ((b112._0_8_ + b112._0_8_) - b112._8_8_ * 0.0);
                          b11._8_8_ = b11._8_8_ + b112._8_8_ + b112._8_8_ + b112._0_8_ * 0.0;
                          b12_13._0_8_ = b132._0_8_ + (b12_13._0_8_ - b122._0_8_);
                          b12_13._8_8_ = b132._8_8_ + (b12_13._8_8_ - b122._8_8_);
                          b24._0_8_ = b24._0_8_ + ((b242._0_8_ + b242._0_8_) - b242._8_8_ * 0.0);
                          b24._8_8_ = b24._8_8_ + b242._8_8_ + b242._8_8_ + b242._0_8_ * 0.0;
                          b21_22._0_8_ = b222._0_8_ + (b21_22._0_8_ - b212._0_8_);
                          b21_22._8_8_ = b222._8_8_ + (b21_22._8_8_ - b212._8_8_);
                          b31_32._0_8_ = b312._0_8_ + b31_32._0_8_;
                          b31_32._8_8_ = b312._8_8_ + b31_32._8_8_;
                          bVar41 = local_b0 != local_ac - 1;
                          local_b0 = local_b0 + 1;
                        } while (bVar41);
                      }
                      local_b0 = local_ac + 1;
                      if ((int)local_b0 <= (int)*param_7) {
                        do {
                          dVar9 = *param_16 +
                                  *(double *)
                                   (param_8 +
                                   (uVar31 * local_bc + local_850 * iVar39 + local_b0 + iVar34) * 8)
                          ;
                          dVar14 = dVar9 - dVar1;
                          dVar15 = -dVar14;
                          dVar9 = dVar2 - dVar9;
                          dVar10 = -dVar9;
                          local_8f4 = 0.0;
                          local_8ec = 0.0;
                          local_8c4 = 0.0;
                          local_8bc = 0.0;
                          local_8d4 = 0.0;
                          local_8cc = 0.0;
                          local_94 = 1;
                          do {
                            local_90 = 1;
                            do {
                              local_8c = 1;
                              do {
                                iVar35 = (local_940 * local_a8 + local_934 * local_ac +
                                          local_91c * local_90 + local_928 * local_94 +
                                          local_910 * local_8c + local_948) * 0x10;
                                dVar11 = *(double *)(iVar35 + (int)local_94c);
                                dVar12 = *(double *)(iVar35 + 8 + (int)local_94c);
                                iVar35 = (uVar32 * local_b0 + local_850 * iVar36 + local_ac +
                                          iVar38 * local_bc + iVar37 * local_90 + iVar40) * 0x10;
                                dVar13 = *(double *)(iVar35 + param_10);
                                dVar16 = *(double *)(iVar35 + 8 + param_10);
                                dVar18 = dVar11 * dVar13 - dVar12 * dVar16;
                                dVar13 = dVar13 * dVar12 + dVar16 * dVar11;
                                iVar35 = (uVar32 * local_a8 + local_850 * iVar36 + local_b0 +
                                          iVar38 * local_bc + iVar37 * local_8c + iVar40) * 0x10;
                                dVar11 = *(double *)(iVar35 + param_10);
                                dVar12 = *(double *)(iVar35 + 8 + param_10);
                                local_8f4 = local_8f4 + (dVar18 * dVar11 - dVar13 * dVar12);
                                local_8ec = local_8ec + dVar11 * dVar13 + dVar12 * dVar18;
                                iVar35 = (local_988 * local_ac + local_97c * local_a8 +
                                          local_964 * local_90 + local_970 * local_94 +
                                          local_958 * local_8c + local_990) * 0x10;
                                dVar11 = *(double *)(iVar35 + (int)local_994);
                                dVar12 = *(double *)(iVar35 + 8 + (int)local_994);
                                iVar35 = (uVar32 * local_ac + local_850 * iVar36 + local_b0 +
                                          iVar38 * local_bc + iVar37 * local_8c + iVar40) * 0x10;
                                dVar13 = *(double *)(iVar35 + param_10);
                                dVar16 = *(double *)(iVar35 + 8 + param_10);
                                dVar18 = dVar11 * dVar13 - dVar12 * dVar16;
                                dVar13 = dVar13 * dVar12 + dVar16 * dVar11;
                                iVar35 = (uVar32 * local_b0 + local_850 * iVar36 + local_a8 +
                                          iVar38 * local_bc + iVar37 * local_90 + iVar40) * 0x10;
                                dVar11 = *(double *)(iVar35 + param_10);
                                dVar12 = *(double *)(iVar35 + 8 + param_10);
                                local_8c4 = local_8c4 + (dVar18 * dVar11 - dVar13 * dVar12);
                                local_8bc = local_8bc + dVar11 * dVar13 + dVar12 * dVar18;
                                iVar35 = (local_9d0 * local_ac + local_9c4 * local_a8 +
                                          local_9ac * local_90 + local_9b8 * local_94 +
                                          local_9a0 * local_8c + local_9d8) * 0x10;
                                dVar11 = *(double *)(iVar35 + (int)local_9dc);
                                dVar12 = *(double *)(iVar35 + 8 + (int)local_9dc);
                                iVar35 = (uVar32 * local_ac + local_850 * iVar36 + local_b0 +
                                          iVar38 * local_bc + iVar37 * local_8c + iVar40) * 0x10;
                                dVar13 = *(double *)(iVar35 + param_10);
                                dVar16 = *(double *)(iVar35 + 8 + param_10);
                                dVar18 = dVar11 * dVar13 - dVar12 * dVar16;
                                dVar13 = dVar13 * dVar12 + dVar16 * dVar11;
                                iVar35 = (uVar32 * local_b0 + local_850 * iVar36 + local_a8 +
                                          iVar38 * local_bc + iVar37 * local_90 + iVar40) * 0x10;
                                dVar11 = *(double *)(iVar35 + param_10);
                                dVar12 = *(double *)(iVar35 + 8 + param_10);
                                local_8d4 = local_8d4 + (dVar18 * dVar11 - dVar13 * dVar12);
                                local_8cc = local_8cc + dVar11 * dVar13 + dVar12 * dVar18;
                                bVar41 = local_8c != 3;
                                local_8c = local_8c + 1;
                              } while (bVar41);
                              bVar41 = local_90 != 3;
                              local_90 = local_90 + 1;
                            } while (bVar41);
                            bVar41 = local_94 != 3;
                            local_94 = local_94 + 1;
                          } while (bVar41);
                          dVar11 = 1.0 / (dVar15 + dVar9);
                          dVar13 = dVar11 * local_8f4 - local_8ec * 0.0;
                          dVar11 = local_8f4 * 0.0 + local_8ec * dVar11;
                          dVar12 = dVar13 * (1.0 / dVar15) - dVar11 * 0.0;
                          dVar11 = (1.0 / dVar15) * dVar11 + dVar13 * 0.0;
                          dVar16 = (1.0 / dVar15) * local_8c4 - local_8bc * 0.0;
                          dVar13 = local_8c4 * 0.0 + local_8bc * (1.0 / dVar15);
                          dVar21 = (1.0 / dVar15) * local_8d4 - local_8cc * 0.0;
                          dVar18 = local_8d4 * 0.0 + local_8cc * (1.0 / dVar15);
                          dVar20 = 1.0 / (dVar15 + dVar4);
                          dVar19 = dVar21 * dVar20 - dVar18 * 0.0;
                          dVar18 = dVar20 * dVar18 + dVar21 * 0.0;
                          if (0.0 <= ABS(dVar14)) {
                            dVar21 = 0.0 / dVar14;
                            dVar20 = dVar14 + dVar21 * 0.0;
                            b243._0_8_ = (local_8ec * dVar21 + local_8f4) / dVar20;
                            b243._8_8_ = dVar20 / (local_8ec - local_8f4 * dVar21);
                          }
                          else {
                            dVar21 = dVar14 / 0.0;
                            dVar20 = dVar14 * dVar21 + 0.0;
                            b243._0_8_ = (local_8f4 * dVar21 + local_8ec) / dVar20;
                            b243._8_8_ = dVar20 / (local_8ec * dVar21 - local_8f4);
                          }
                          if (0.0 <= ABS(dVar14)) {
                            dVar21 = 0.0 / dVar14;
                            dVar14 = dVar14 + dVar21 * 0.0;
                            dVar20 = (local_8cc * dVar21 + local_8d4) / dVar14;
                            dVar14 = dVar14 / (local_8cc - local_8d4 * dVar21);
                          }
                          else {
                            dVar21 = dVar14 / 0.0;
                            dVar14 = dVar14 * dVar21 + 0.0;
                            dVar20 = (local_8d4 * dVar21 + local_8cc) / dVar14;
                            dVar14 = dVar14 / (local_8cc * dVar21 - local_8d4);
                          }
                          b213._0_8_ = 0.0;
                          b213._8_8_ = 0.0;
                          if (0.0 <= ABS(dVar15)) {
                            dVar22 = 0.0 / dVar15;
                            dVar15 = dVar15 + dVar22 * 0.0;
                            dVar21 = (local_8bc * dVar22 + local_8c4) / dVar15;
                            dVar15 = dVar15 / (local_8bc - local_8c4 * dVar22);
                          }
                          else {
                            dVar22 = dVar15 / 0.0;
                            dVar15 = dVar15 * dVar22 + 0.0;
                            dVar21 = (local_8c4 * dVar22 + local_8bc) / dVar15;
                            dVar15 = dVar15 / (local_8bc * dVar22 - local_8c4);
                          }
                          b313._0_8_ = -dVar21;
                          b313._8_8_ = -dVar15;
                          if (ABS(dVar9) <= *param_18) {
                            b113._0_8_ = 0.0;
                            b113._8_8_ = 0.0;
                            b123._0_8_ = 0.0;
                            b123._8_8_ = 0.0;
                            b133._0_8_ = 0.0;
                            b133._8_8_ = 0.0;
                          }
                          else {
                            if (0.0 <= ABS(dVar9)) {
                              dVar21 = 0.0 / dVar9;
                              dVar15 = dVar9 + dVar21 * 0.0;
                              b113._0_8_ = (dVar11 * dVar21 + dVar12) / dVar15;
                              b113._8_8_ = dVar15 / (dVar11 - dVar12 * dVar21);
                            }
                            else {
                              dVar21 = dVar9 / 0.0;
                              dVar15 = dVar9 * dVar21 + 0.0;
                              b113._0_8_ = (dVar12 * dVar21 + dVar11) / dVar15;
                              b113._8_8_ = dVar15 / (dVar11 * dVar21 - dVar12);
                            }
                            if (0.0 <= ABS(dVar9)) {
                              dVar11 = 0.0 / dVar9;
                              dVar15 = dVar9 + dVar11 * 0.0;
                              b123._0_8_ = (dVar13 * dVar11 + dVar16) / dVar15;
                              b123._8_8_ = dVar15 / (dVar13 - dVar16 * dVar11);
                            }
                            else {
                              dVar11 = dVar9 / 0.0;
                              dVar15 = dVar9 * dVar11 + 0.0;
                              b123._0_8_ = (dVar16 * dVar11 + dVar13) / dVar15;
                              b123._8_8_ = dVar15 / (dVar13 * dVar11 - dVar16);
                            }
                            if (0.0 <= ABS(dVar9)) {
                              dVar11 = 0.0 / dVar9;
                              dVar15 = dVar9 + dVar11 * 0.0;
                              b133._0_8_ = (dVar18 * dVar11 + dVar19) / dVar15;
                              b133._8_8_ = dVar15 / (dVar18 - dVar19 * dVar11);
                            }
                            else {
                              dVar11 = dVar9 / 0.0;
                              dVar15 = dVar9 * dVar11 + 0.0;
                              b133._0_8_ = (dVar19 * dVar11 + dVar18) / dVar15;
                              b133._8_8_ = dVar15 / (dVar18 * dVar11 - dVar19);
                            }
                            if (0.0 <= ABS(dVar9)) {
                              dVar12 = 0.0 / dVar9;
                              dVar15 = dVar9 + dVar12 * 0.0;
                              dVar11 = (local_8ec * dVar12 + local_8f4) / dVar15;
                              dVar15 = dVar15 / (local_8ec - local_8f4 * dVar12);
                            }
                            else {
                              dVar12 = dVar9 / 0.0;
                              dVar15 = dVar9 * dVar12 + 0.0;
                              dVar11 = (local_8f4 * dVar12 + local_8ec) / dVar15;
                              dVar15 = dVar15 / (local_8ec * dVar12 - local_8f4);
                            }
                            b243._0_8_ = b243._0_8_ - dVar11;
                            b243._8_8_ = b243._8_8_ - dVar15;
                            if (0.0 <= ABS(dVar9)) {
                              dVar11 = 0.0 / dVar9;
                              dVar15 = dVar9 + dVar11 * 0.0;
                              b213._0_8_ = (local_8bc * dVar11 + local_8c4) / dVar15;
                              b213._8_8_ = dVar15 / (local_8bc - local_8c4 * dVar11);
                            }
                            else {
                              dVar11 = dVar9 / 0.0;
                              dVar15 = dVar9 * dVar11 + 0.0;
                              b213._0_8_ = (local_8c4 * dVar11 + local_8bc) / dVar15;
                              b213._8_8_ = dVar15 / (local_8bc * dVar11 - local_8c4);
                            }
                            if (0.0 <= ABS(dVar10)) {
                              dVar11 = 0.0 / dVar10;
                              dVar10 = dVar10 + dVar11 * 0.0;
                              dVar15 = (local_8cc * dVar11 + local_8d4) / dVar10;
                              dVar10 = dVar10 / (local_8cc - local_8d4 * dVar11);
                            }
                            else {
                              dVar11 = dVar10 / 0.0;
                              dVar10 = dVar10 * dVar11 + 0.0;
                              dVar15 = (local_8d4 * dVar11 + local_8cc) / dVar10;
                              dVar10 = dVar10 / (local_8cc * dVar11 - local_8d4);
                            }
                            b313._0_8_ = b313._0_8_ + dVar15;
                            b313._8_8_ = b313._8_8_ + dVar10;
                          }
                          dVar9 = dVar4 - dVar9;
                          if (ABS(dVar9) <= *param_18) {
                            b123._0_8_ = 0.0;
                            b123._8_8_ = 0.0;
                          }
                          else {
                            if (0.0 <= ABS(dVar9)) {
                              dVar10 = 0.0 / dVar9;
                              dVar9 = dVar9 + dVar10 * 0.0;
                              dVar15 = b123._0_8_ * dVar10;
                              b123._0_8_ = (b123._8_8_ * dVar10 + b123._0_8_) / dVar9;
                              b123._8_8_ = dVar9 / (b123._8_8_ - dVar15);
                            }
                            else {
                              dVar10 = dVar9 / 0.0;
                              dVar9 = dVar9 * dVar10 + 0.0;
                              dVar15 = b123._8_8_ * dVar10 - b123._0_8_;
                              b123._0_8_ = (b123._0_8_ * dVar10 + b123._8_8_) / dVar9;
                              b123._8_8_ = dVar9 / dVar15;
                            }
                          }
                          b11._0_8_ = b11._0_8_ + ((b113._0_8_ + b113._0_8_) - b113._8_8_ * 0.0);
                          b11._8_8_ = b11._8_8_ + b113._8_8_ + b113._8_8_ + b113._0_8_ * 0.0;
                          b12_13._0_8_ = (b123._0_8_ + b12_13._0_8_) - b133._0_8_;
                          b12_13._8_8_ = (b123._8_8_ + b12_13._8_8_) - b133._8_8_;
                          b21_22._0_8_ = dVar20 + (b21_22._0_8_ - b213._0_8_);
                          b21_22._8_8_ = dVar14 + (b21_22._8_8_ - b213._8_8_);
                          b24._0_8_ = b24._0_8_ + ((b243._0_8_ + b243._0_8_) - b243._8_8_ * 0.0);
                          b24._8_8_ = b24._8_8_ + b243._8_8_ + b243._8_8_ + b243._0_8_ * 0.0;
                          b31_32._0_8_ = b313._0_8_ + b31_32._0_8_;
                          b31_32._8_8_ = b313._8_8_ + b31_32._8_8_;
                          bVar41 = local_b0 != *param_7;
                          local_b0 = local_b0 + 1;
                        } while (bVar41);
                      }
                      dVar9 = b11._0_8_ * local_a6c - b11._8_8_ * local_a64;
                      dVar2 = local_a6c * b11._8_8_ + local_a64 * b11._0_8_;
                      dVar14 = dVar9 * (1.0 / dVar4) - dVar2 * 0.0;
                      dVar2 = (1.0 / dVar4) * dVar2 + dVar9 * 0.0;
                      dVar9 = dVar14 * dVar17 - dVar2 * 0.0;
                      dVar2 = dVar17 * dVar2 + dVar14 * 0.0;
                      dVar15 = b12_13._0_8_ * local_a6c - b12_13._8_8_ * local_a64;
                      dVar14 = local_a6c * b12_13._8_8_ + local_a64 * b12_13._0_8_;
                      dVar10 = dVar15 * (1.0 / dVar4) - dVar14 * 0.0;
                      dVar14 = (1.0 / dVar4) * dVar14 + dVar15 * 0.0;
                      dVar15 = dVar10 * dVar17 - dVar14 * 0.0;
                      dVar14 = dVar17 * dVar14 + dVar10 * 0.0;
                      dVar11 = (dVar8 + b24._0_8_) * local_a6c - (dVar7 + b24._8_8_) * local_a64;
                      dVar8 = local_a6c * (dVar7 + b24._8_8_) + local_a64 * (dVar8 + b24._0_8_);
                      dVar7 = (dVar4 * dVar4 * dVar4) / 1.0;
                      dVar10 = dVar11 * dVar7 - dVar8 * 0.0;
                      dVar7 = dVar11 * 0.0 + dVar7 * dVar8;
                      dVar8 = dVar10 * dVar17 - dVar7 * 0.0;
                      dVar7 = dVar17 * dVar7 + dVar10 * 0.0;
                      dVar11 = b21_22._0_8_ * local_a6c - b21_22._8_8_ * local_a64;
                      dVar12 = local_a6c * b21_22._8_8_ + local_a64 * b21_22._0_8_;
                      dVar4 = (dVar4 * dVar4 * dVar4) / 1.0;
                      dVar10 = dVar11 * dVar4 - dVar12 * 0.0;
                      dVar4 = dVar11 * 0.0 + dVar4 * dVar12;
                      dVar12 = (b31_32._0_8_ - dVar6) * local_a6c -
                               (b31_32._8_8_ - dVar5) * local_a64;
                      dVar6 = local_a6c * (b31_32._8_8_ - dVar5) +
                              local_a64 * (b31_32._0_8_ - dVar6);
                      dVar5 = (dVar3 * dVar3 * dVar3) / 1.0;
                      dVar11 = dVar12 * dVar5 - dVar6 * 0.0;
                      dVar5 = dVar12 * 0.0 + dVar5 * dVar6;
                      dVar6 = dVar11 * dVar17 - dVar5 * 0.0;
                      dVar5 = dVar17 * dVar5 + dVar11 * 0.0;
                      iVar35 = *param_14;
                      local_a0 = 1;
                      if (0 < iVar35) {
                        do {
                          local_a5c = local_84c + *param_15 * (double)(local_a0 + -1);
                          local_a54 = local_844 + 0.0;
                          iVar33 = (local_874 * local_a0 + local_87c) * 0x10;
                          dVar11 = *(double *)(iVar33 + 8 + (int)local_880);
                          dVar12 = *(double *)(param_4 + (local_850 + -1) * 8);
                          dVar13 = (local_a5c * -2.0 - local_a54 * -0.0) + dVar3;
                          dVar16 = local_a54 * -2.0 + local_a5c * -0.0 + 0.0;
                          if (ABS(dVar16) <= ABS(dVar13)) {
                            dVar18 = dVar16 / dVar13;
                            dVar16 = dVar16 * dVar18 + dVar13;
                            dVar13 = (dVar2 * dVar18 + dVar9) / dVar16;
                            dVar16 = dVar16 / (dVar2 - dVar9 * dVar18);
                          }
                          else {
                            dVar18 = dVar13 / dVar16;
                            dVar16 = dVar13 * dVar18 + dVar16;
                            dVar13 = (dVar9 * dVar18 + dVar2) / dVar16;
                            dVar16 = (dVar2 * dVar18 - dVar9) / dVar16;
                          }
                          iVar29 = (local_874 * local_a0 + local_87c) * 0x10;
                          *(double *)(iVar29 + (int)local_880) =
                               (dVar12 * dVar13 - dVar16 * 0.0) +
                               *(double *)(iVar33 + (int)local_880);
                          *(double *)(iVar29 + 8 + (int)local_880) =
                               dVar16 * dVar12 + dVar13 * 0.0 + dVar11;
                          iVar33 = (local_85c * local_a0 + local_864) * 0x10;
                          dVar11 = *(double *)(iVar33 + 8 + (int)local_868);
                          dVar12 = *(double *)(param_4 + (local_850 + -1) * 8);
                          dVar13 = dVar3 - local_a5c;
                          dVar16 = 0.0 - local_a54;
                          if (ABS(dVar16) <= ABS(dVar13)) {
                            dVar18 = dVar16 / dVar13;
                            dVar13 = dVar16 * dVar18 + dVar13;
                            dVar16 = (dVar14 * dVar18 + dVar15) / dVar13;
                            dVar13 = dVar13 / (dVar14 - dVar15 * dVar18);
                          }
                          else {
                            dVar18 = dVar13 / dVar16;
                            dVar13 = dVar13 * dVar18 + dVar16;
                            dVar16 = (dVar15 * dVar18 + dVar14) / dVar13;
                            dVar13 = (dVar14 * dVar18 - dVar15) / dVar13;
                          }
                          iVar29 = (local_85c * local_a0 + local_864) * 0x10;
                          *(double *)(iVar29 + (int)local_868) =
                               (dVar12 * dVar16 - dVar13 * 0.0) +
                               *(double *)(iVar33 + (int)local_868);
                          *(double *)(iVar29 + 8 + (int)local_868) =
                               dVar13 * dVar12 + dVar16 * 0.0 + dVar11;
                          iVar33 = (local_8a4 * local_a0 + local_8ac) * 0x10;
                          dVar11 = *(double *)(iVar33 + 8 + (int)local_8b0);
                          dVar12 = *(double *)(param_4 + (local_850 + -1) * 8);
                          dVar13 = (local_a5c * -2.0 - local_a54 * -0.0) + dVar3;
                          dVar16 = local_a54 * -2.0 + local_a5c * -0.0 + 0.0;
                          if (ABS(dVar16) <= ABS(dVar13)) {
                            dVar18 = dVar16 / dVar13;
                            dVar16 = dVar16 * dVar18 + dVar13;
                            dVar13 = (dVar7 * dVar18 + dVar8) / dVar16;
                            dVar16 = dVar16 / (dVar7 - dVar8 * dVar18);
                          }
                          else {
                            dVar18 = dVar13 / dVar16;
                            dVar16 = dVar13 * dVar18 + dVar16;
                            dVar13 = (dVar8 * dVar18 + dVar7) / dVar16;
                            dVar16 = (dVar7 * dVar18 - dVar8) / dVar16;
                          }
                          iVar29 = (local_8a4 * local_a0 + local_8ac) * 0x10;
                          *(double *)(iVar29 + (int)local_8b0) =
                               (dVar12 * dVar13 - dVar16 * 0.0) +
                               *(double *)(iVar33 + (int)local_8b0);
                          *(double *)(iVar29 + 8 + (int)local_8b0) =
                               dVar16 * dVar12 + dVar13 * 0.0 + dVar11;
                          iVar33 = (local_88c * local_a0 + local_894) * 0x10;
                          dVar11 = *(double *)(iVar33 + 8 + (int)local_898);
                          dVar12 = *(double *)(param_4 + (local_850 + -1) * 8);
                          dVar16 = (dVar6 * 0.5 - dVar5 * 0.0) + (dVar10 * dVar17 - dVar4 * 0.0);
                          dVar19 = dVar5 * 0.5 + dVar6 * 0.0 + dVar17 * dVar4 + dVar10 * 0.0;
                          dVar13 = dVar3 - local_a5c;
                          dVar18 = 0.0 - local_a54;
                          if (ABS(dVar18) <= ABS(dVar13)) {
                            dVar20 = dVar18 / dVar13;
                            dVar13 = dVar18 * dVar20 + dVar13;
                            dVar18 = (dVar19 * dVar20 + dVar16) / dVar13;
                            dVar13 = (dVar19 - dVar16 * dVar20) / dVar13;
                          }
                          else {
                            dVar20 = dVar13 / dVar18;
                            dVar13 = dVar13 * dVar20 + dVar18;
                            dVar18 = (dVar16 * dVar20 + dVar19) / dVar13;
                            dVar13 = dVar13 / (dVar19 * dVar20 - dVar16);
                          }
                          iVar29 = (local_88c * local_a0 + local_894) * 0x10;
                          *(double *)(iVar29 + (int)local_898) =
                               (dVar12 * dVar18 - dVar13 * 0.0) +
                               *(double *)(iVar33 + (int)local_898);
                          *(double *)(iVar29 + 8 + (int)local_898) =
                               dVar13 * dVar12 + dVar18 * 0.0 + dVar11;
                          bVar41 = local_a0 != iVar35;
                          local_a0 = local_a0 + 1;
                        } while (bVar41);
                      }
                    }
                    bVar41 = local_ac != uVar25;
                    local_ac = local_ac + 1;
                  } while (bVar41);
                }
              }
              bVar41 = local_a8 != uVar28;
              local_a8 = local_a8 + 1;
            } while (bVar41);
          }
          bVar41 = local_bc != iVar27;
          local_bc = local_bc + 1;
        } while (bVar41);
      }
      bVar41 = local_850 != iVar26;
      local_850 = local_850 + 1;
    } while (bVar41);
  }
  uVar47 = (undefined4)(uVar45 >> 0x20);
  local_c98 = "nlinopt.F90";
  local_c94 = 0x25f;
  local_c7c = local_43c;
  local_c80 = 0x100;
  local_c68 = 
  "FORMATTEDWRITE(a,3i3) #calculated the component:(a,es16.6) #tolerence:(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)"
  ;
  local_c64 = 9;
  local_c4c = 
  "WRITE(a,3i3) #calculated the component:(a,es16.6) #tolerence:(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)"
  ;
  local_c50 = 5;
  local_ca0 = 0x4900;
  local_c9c = 0x5c;
  _gfortran_st_open();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x260;
  local_c7c = local_53c;
  local_c80 = 0x100;
  local_c68 = 
  "FORMATTEDWRITE(a,3i3) #calculated the component:(a,es16.6) #tolerence:(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)"
  ;
  local_c64 = 9;
  local_c4c = 
  "WRITE(a,3i3) #calculated the component:(a,es16.6) #tolerence:(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)"
  ;
  local_c50 = 5;
  local_ca0 = 0x4900;
  local_c9c = 0x5d;
  _gfortran_st_open();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x261;
  local_c7c = local_63c;
  local_c80 = 0x100;
  local_c68 = 
  "FORMATTEDWRITE(a,3i3) #calculated the component:(a,es16.6) #tolerence:(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)"
  ;
  local_c64 = 9;
  local_c4c = 
  "WRITE(a,3i3) #calculated the component:(a,es16.6) #tolerence:(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)"
  ;
  local_c50 = 5;
  local_ca0 = 0x4900;
  local_c9c = 0x5e;
  _gfortran_st_open();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x262;
  local_c7c = local_73c;
  local_c80 = 0x100;
  local_c68 = 
  "FORMATTEDWRITE(a,3i3) #calculated the component:(a,es16.6) #tolerence:(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)"
  ;
  local_c64 = 9;
  local_c4c = 
  "WRITE(a,3i3) #calculated the component:(a,es16.6) #tolerence:(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)"
  ;
  local_c50 = 5;
  local_ca0 = 0x4900;
  local_c9c = 0x5f;
  _gfortran_st_open();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x263;
  local_c7c = local_83c;
  local_c80 = 0x100;
  local_c68 = 
  "FORMATTEDWRITE(a,3i3) #calculated the component:(a,es16.6) #tolerence:(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)"
  ;
  local_c64 = 9;
  local_c4c = 
  "WRITE(a,3i3) #calculated the component:(a,es16.6) #tolerence:(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)"
  ;
  local_c50 = 5;
  local_ca0 = 0x4900;
  local_c9c = 0x60;
  _gfortran_st_open();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x265;
  local_c70 = 
  "(a,3i3) #calculated the component:(a,es16.6) #tolerence:(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)"
  ;
  local_c6c = 7;
  local_ca0 = 0x1000;
  local_c9c = 0x5c;
  _gfortran_st_write();
  _gfortran_transfer_character
            (&local_ca0,
                          
             " #calculated the component:(a,es16.6) #tolerence:(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)"
             ,0x1b,uVar47);
  _gfortran_transfer_integer(&local_ca0,param_11,4,uVar47);
  _gfortran_transfer_integer(&local_ca0,param_12,4,uVar47);
  _gfortran_transfer_integer(&local_ca0,param_13,4,uVar47);
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x266;
  local_c70 = 
  "(a,es16.6) #tolerence:(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)"
  ;
  local_c6c = 10;
  local_ca0 = 0x1000;
  local_c9c = 0x5c;
  _gfortran_st_write();
  _gfortran_transfer_character
            (&local_ca0,
                          
             " #tolerence:(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)"
             ,0xc,uVar47);
  _gfortran_transfer_real(&local_ca0,param_18,8,uVar47);
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x267;
  local_c70 = 
  "(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)";
  local_c6c = 0xc;
  local_ca0 = 0x1000;
  local_c9c = 0x5c;
  _gfortran_st_write();
  _gfortran_transfer_character
            (&local_ca0," #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)"
             ,0xd,uVar47);
  _gfortran_transfer_real(&local_ca0,param_17,8,uVar47);
  _gfortran_transfer_character
            (&local_ca0,"Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)",2,uVar47);
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x268;
  local_c70 = 
  "(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)";
  local_c6c = 0xc;
  local_ca0 = 0x1000;
  local_c9c = 0x5c;
  _gfortran_st_write();
  _gfortran_transfer_character
            (&local_ca0," #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)",0x11,uVar47);
  _gfortran_transfer_real(&local_ca0,param_16,8,uVar47);
  _gfortran_transfer_character
            (&local_ca0,"Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)",2,uVar47);
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x269;
  local_c70 = "(a,es16.6,a,es16.6,a) #energy window:eV(a)";
  local_c6c = 0x15;
  local_ca0 = 0x1000;
  local_c9c = 0x5c;
  _gfortran_st_write();
  _gfortran_transfer_character();
  local_a9c = ((double)emax - (double)emin) * 27.21138381958008;
  _gfortran_transfer_real();
  _gfortran_transfer_character();
  local_aa4 = (double)emax - (double)emin;
  _gfortran_transfer_real();
  _gfortran_transfer_character();
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x26a;
  local_c70 = "(a)";
  local_c6c = 3;
  local_ca0 = 0x1000;
  local_c9c = 0x5c;
  _gfortran_st_write();
  _gfortran_transfer_character();
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x26b;
  local_c70 = "(a)";
  local_c6c = 3;
  local_ca0 = 0x1000;
  local_c9c = 0x5c;
  _gfortran_st_write();
  _gfortran_transfer_character();
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x26c;
  local_c70 = "(a)";
  local_c6c = 3;
  local_ca0 = 0x1000;
  local_c9c = 0x5c;
  _gfortran_st_write();
  _gfortran_transfer_character();
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x26e;
  local_c70 = 
  "(a,3i3) #calculated the component:(a,es16.6) #tolerence:(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)"
  ;
  local_c6c = 7;
  local_ca0 = 0x1000;
  local_c9c = 0x5d;
  _gfortran_st_write();
  _gfortran_transfer_character();
  _gfortran_transfer_integer();
  _gfortran_transfer_integer();
  _gfortran_transfer_integer();
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x26f;
  local_c70 = 
  "(a,es16.6) #tolerence:(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)"
  ;
  local_c6c = 10;
  local_ca0 = 0x1000;
  local_c9c = 0x5d;
  _gfortran_st_write();
  _gfortran_transfer_character();
  _gfortran_transfer_real();
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x270;
  local_c70 = 
  "(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)";
  local_c6c = 0xc;
  local_ca0 = 0x1000;
  local_c9c = 0x5d;
  _gfortran_st_write();
  _gfortran_transfer_character();
  _gfortran_transfer_real();
  _gfortran_transfer_character();
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x271;
  local_c70 = 
  "(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)";
  local_c6c = 0xc;
  local_ca0 = 0x1000;
  local_c9c = 0x5d;
  _gfortran_st_write();
  _gfortran_transfer_character();
  _gfortran_transfer_real();
  _gfortran_transfer_character();
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x272;
  local_c70 = "(a,es16.6,a,es16.6,a) #energy window:eV(a)";
  local_c6c = 0x15;
  local_ca0 = 0x1000;
  local_c9c = 0x5d;
  _gfortran_st_write();
  _gfortran_transfer_character();
  local_aac = ((double)emax - (double)emin) * 27.21138381958008;
  _gfortran_transfer_real();
  _gfortran_transfer_character();
  local_ab4 = (double)emax - (double)emin;
  _gfortran_transfer_real();
  _gfortran_transfer_character();
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x273;
  local_c70 = "(a)";
  local_c6c = 3;
  local_ca0 = 0x1000;
  local_c9c = 0x5d;
  _gfortran_st_write();
  _gfortran_transfer_character();
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x274;
  local_c70 = "(a)";
  local_c6c = 3;
  local_ca0 = 0x1000;
  local_c9c = 0x5d;
  _gfortran_st_write();
  _gfortran_transfer_character();
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x275;
  local_c70 = "(a)";
  local_c6c = 3;
  local_ca0 = 0x1000;
  local_c9c = 0x5d;
  _gfortran_st_write();
  _gfortran_transfer_character();
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x277;
  local_c70 = 
  "(a,3i3) #calculated the component:(a,es16.6) #tolerence:(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)"
  ;
  local_c6c = 7;
  local_ca0 = 0x1000;
  local_c9c = 0x5e;
  _gfortran_st_write();
  _gfortran_transfer_character();
  _gfortran_transfer_integer();
  _gfortran_transfer_integer();
  _gfortran_transfer_integer(&local_ca0,param_13,4,uVar47);
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x278;
  local_c70 = 
  "(a,es16.6) #tolerence:(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)"
  ;
  local_c6c = 10;
  local_ca0 = 0x1000;
  local_c9c = 0x5e;
  _gfortran_st_write();
  _gfortran_transfer_character();
  _gfortran_transfer_real(&local_ca0,param_18,8,uVar47);
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x279;
  local_c70 = 
  "(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)";
  local_c6c = 0xc;
  local_ca0 = 0x1000;
  local_c9c = 0x5e;
  _gfortran_st_write();
  _gfortran_transfer_character();
  _gfortran_transfer_real(&local_ca0,param_17,8,uVar47);
  _gfortran_transfer_character
            (&local_ca0,"Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)",2,uVar47);
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x27a;
  local_c70 = 
  "(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)";
  local_c6c = 0xc;
  local_ca0 = 0x1000;
  local_c9c = 0x5e;
  _gfortran_st_write();
  _gfortran_transfer_character
            (&local_ca0," #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)",0x11,uVar47);
  _gfortran_transfer_real(&local_ca0,param_16,8,uVar47);
  _gfortran_transfer_character
            (&local_ca0,"Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)",2,uVar47);
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x27b;
  local_c70 = "(a,es16.6,a,es16.6,a) #energy window:eV(a)";
  local_c6c = 0x15;
  local_ca0 = 0x1000;
  local_c9c = 0x5e;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0," #energy window:eV(a)",0x10,uVar47);
  local_abc = ((double)emax - (double)emin) * 27.21138381958008;
  _gfortran_transfer_real(&local_ca0,&local_abc,8,uVar47);
  _gfortran_transfer_character();
  local_ac4 = (double)emax - (double)emin;
  _gfortran_transfer_real(&local_ca0,&local_ac4,8,uVar47);
  _gfortran_transfer_character
            (&local_ca0,"Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)",2,uVar47);
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x27c;
  local_c70 = "(a)";
  local_c6c = 3;
  local_ca0 = 0x1000;
  local_c9c = 0x5e;
  _gfortran_st_write();
  _gfortran_transfer_character
            (&local_ca0," # Energy(eV) Inter(2w) inter(1w) intra(2w) intra(1w) # in esu",0x35,uVar47
            );
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x27d;
  local_c70 = "(a)";
  local_c6c = 3;
  local_ca0 = 0x1000;
  local_c9c = 0x5e;
  _gfortran_st_write();
  uVar46 = CONCAT44(uVar47,9);
  pcVar43 = " # in esu";
  _gfortran_transfer_character();
  _gfortran_st_write_done(&local_ca0,pcVar43,uVar46);
  uVar47 = (undefined4)((ulonglong)uVar46 >> 0x20);
  local_c98 = "nlinopt.F90";
  local_c94 = 0x27e;
  local_c70 = "(a)";
  local_c6c = 3;
  local_ca0 = 0x1000;
  local_c9c = 0x5e;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0," # ",3,uVar47);
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x280;
  local_c70 = 
  "(a,3i3) #calculated the component:(a,es16.6) #tolerence:(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)"
  ;
  local_c6c = 7;
  local_ca0 = 0x1000;
  local_c9c = 0x5f;
  _gfortran_st_write();
  _gfortran_transfer_character();
  _gfortran_transfer_integer(&local_ca0,param_11,4,uVar47);
  _gfortran_transfer_integer();
  _gfortran_transfer_integer(&local_ca0,param_13,4,uVar47);
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x281;
  local_c70 = 
  "(a,es16.6) #tolerence:(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)"
  ;
  local_c6c = 10;
  local_ca0 = 0x1000;
  local_c9c = 0x5f;
  _gfortran_st_write();
  _gfortran_transfer_character();
  _gfortran_transfer_real(&local_ca0,param_18,8,uVar47);
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x282;
  local_c70 = 
  "(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)";
  local_c6c = 0xc;
  local_ca0 = 0x1000;
  local_c9c = 0x5f;
  _gfortran_st_write();
  _gfortran_transfer_character();
  _gfortran_transfer_real();
  _gfortran_transfer_character
            (&local_ca0,"Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)",2,uVar47);
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x283;
  local_c70 = 
  "(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)";
  local_c6c = 0xc;
  local_ca0 = 0x1000;
  local_c9c = 0x5f;
  _gfortran_st_write();
  _gfortran_transfer_character
            (&local_ca0," #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)",0x11,uVar47);
  _gfortran_transfer_real(&local_ca0,param_16,8,uVar47);
  _gfortran_transfer_character
            (&local_ca0,"Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)",2,uVar47);
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x284;
  local_c70 = "(a,es16.6,a,es16.6,a) #energy window:eV(a)";
  local_c6c = 0x15;
  local_ca0 = 0x1000;
  local_c9c = 0x5f;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0," #energy window:eV(a)",0x10,uVar47);
  local_acc = ((double)emax - (double)emin) * 27.21138381958008;
  _gfortran_transfer_real(&local_ca0,&local_acc,8,uVar47);
  _gfortran_transfer_character(&local_ca0,"eV(a)",2,uVar47);
  local_ad4 = (double)emax - (double)emin;
  _gfortran_transfer_real(&local_ca0,&local_ad4,8,uVar47);
  _gfortran_transfer_character
            (&local_ca0,"Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)",2,uVar47);
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x285;
  local_c70 = "(a)";
  local_c6c = 3;
  local_ca0 = 0x1000;
  local_c9c = 0x5f;
  _gfortran_st_write();
  _gfortran_transfer_character
            (&local_ca0," # Energy(eV) Inter(2w) inter(1w) intra(2w) intra(1w) # in esu",0x35,uVar47
            );
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x286;
  local_c70 = "(a)";
  local_c6c = 3;
  local_ca0 = 0x1000;
  local_c9c = 0x5f;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0," # in esu",9,uVar47);
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x287;
  local_c70 = "(a)";
  local_c6c = 3;
  local_ca0 = 0x1000;
  local_c9c = 0x5f;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0," # ",3,uVar47);
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x289;
  local_c70 = 
  "(a,3i3) #calculated the component:(a,es16.6) #tolerence:(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)"
  ;
  local_c6c = 7;
  local_ca0 = 0x1000;
  local_c9c = 0x60;
  _gfortran_st_write();
  _gfortran_transfer_character
            (&local_ca0,
                          
             " #calculated the component:(a,es16.6) #tolerence:(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)"
             ,0x1b,uVar47);
  _gfortran_transfer_integer(&local_ca0,param_11,4,uVar47);
  _gfortran_transfer_integer(&local_ca0,param_12,4,uVar47);
  _gfortran_transfer_integer(&local_ca0,param_13,4,uVar47);
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x28a;
  local_c70 = 
  "(a,es16.6) #tolerence:(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)"
  ;
  local_c6c = 10;
  local_ca0 = 0x1000;
  local_c9c = 0x60;
  _gfortran_st_write();
  _gfortran_transfer_character
            (&local_ca0,
                          
             " #tolerence:(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)"
             ,0xc,uVar47);
  _gfortran_transfer_real(&local_ca0,param_18,8,uVar47);
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x28b;
  local_c70 = 
  "(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)";
  local_c6c = 0xc;
  local_ca0 = 0x1000;
  local_c9c = 0x60;
  _gfortran_st_write();
  _gfortran_transfer_character
            (&local_ca0," #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)"
             ,0xd,uVar47);
  _gfortran_transfer_real(&local_ca0,param_17,8,uVar47);
  _gfortran_transfer_character
            (&local_ca0,"Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)",2,uVar47);
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x28c;
  local_c70 = 
  "(a,es16.6,a) #broadening:Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)";
  local_c6c = 0xc;
  local_ca0 = 0x1000;
  local_c9c = 0x60;
  _gfortran_st_write();
  _gfortran_transfer_character
            (&local_ca0," #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)",0x11,uVar47);
  _gfortran_transfer_real(&local_ca0,param_16,8,uVar47);
  _gfortran_transfer_character
            (&local_ca0,"Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)",2,uVar47);
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x28d;
  local_c70 = "(a,es16.6,a,es16.6,a) #energy window:eV(a)";
  local_c6c = 0x15;
  local_ca0 = 0x1000;
  local_c9c = 0x60;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0," #energy window:eV(a)",0x10,uVar47);
  local_adc = ((double)emax - (double)emin) * 27.21138381958008;
  _gfortran_transfer_real(&local_ca0,&local_adc,8,uVar47);
  _gfortran_transfer_character(&local_ca0,"eV(a)",2,uVar47);
  local_ae4 = (double)emax - (double)emin;
  _gfortran_transfer_real(&local_ca0,&local_ae4,8,uVar47);
  _gfortran_transfer_character
            (&local_ca0,"Ha #scissors shift:(a,es16.6,a,es16.6,a) #energy window:eV(a)",2,uVar47);
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x28e;
  local_c70 = "(a)";
  local_c6c = 3;
  local_ca0 = 0x1000;
  local_c9c = 0x60;
  _gfortran_st_write();
  _gfortran_transfer_character
            (&local_ca0,
             " # Energy(eV)  |TotChi(-2w,w,w)|   |Tot Chi(-2w,w,w)|(f15.6,2es15.6)(f15.6,4es15.6)",
             0x35,uVar47);
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x28f;
  local_c70 = "(a)";
  local_c6c = 3;
  local_ca0 = 0x1000;
  local_c9c = 0x60;
  _gfortran_st_write();
  _gfortran_transfer_character
            (&local_ca0," # eV          *10^-7 esu        *10^-12 m/V SI units  # ",0x36,uVar47);
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x290;
  local_c70 = "(a)";
  local_c6c = 3;
  local_ca0 = 0x1000;
  local_c9c = 0x60;
  _gfortran_st_write();
  uVar46 = CONCAT44(uVar47,3);
  pcVar43 = " # ";
  _gfortran_transfer_character(&local_ca0," # ",3,uVar47);
  lVar42 = ZEXT48(pcVar43) << 0x20;
  _gfortran_st_write_done();
  local_a44 = 0.0;
  local_a4c = 0.0;
  iVar39 = *param_14;
  local_a0 = 2;
  if (1 < iVar39) {
    do {
      local_a3c = 0.0;
      ene = (real_kind_8_)(*param_15 * (double)(local_a0 + -1) * 27.21138381958008);
      local_a44 = (*(double *)((local_88c * local_a0 + local_894) * 0x10 + 8 + (int)local_898) +
                  *(double *)((local_8a4 * local_a0 + local_8ac) * 0x10 + 8 + (int)local_8b0) +
                  *(double *)((local_85c * local_a0 + local_864) * 0x10 + 8 + (int)local_868) +
                  *(double *)((local_874 * local_a0 + local_87c) * 0x10 + 8 + (int)local_880)) /
                  1e-07;
      local_c98 = "nlinopt.F90";
      local_c94 = 0x29a;
      local_c70 = "(f15.6,2es15.6)(f15.6,4es15.6)";
      local_c6c = 0xf;
      local_ca0 = 0x1000;
      local_c9c = 0x5c;
      _gfortran_st_write(&local_ca0,(int)((ulonglong)lVar42 >> 0x20),uVar46);
      uVar47 = (undefined4)((ulonglong)uVar46 >> 0x20);
      _gfortran_transfer_real(&local_ca0,&ene,8,uVar47);
      _gfortran_transfer_real(&local_ca0,&local_a44,8,uVar47);
      local_aec = local_a44 * 4.0 * 3.141592653589793 * 3.333333333333333e-05 * 99999.99999999999;
      uVar46 = CONCAT44(uVar47,8);
      pdVar44 = &local_aec;
      _gfortran_transfer_real();
      _gfortran_st_write_done(&local_ca0,pdVar44,uVar46);
      uVar47 = (undefined4)((ulonglong)uVar46 >> 0x20);
      local_a44 = 0.0;
      local_a4c = (*(double *)((local_88c * local_a0 + local_894) * 0x10 + (int)local_898) +
                  *(double *)((local_8a4 * local_a0 + local_8ac) * 0x10 + (int)local_8b0) +
                  *(double *)((local_85c * local_a0 + local_864) * 0x10 + (int)local_868) +
                  *(double *)((local_874 * local_a0 + local_87c) * 0x10 + (int)local_880)) / 1e-07;
      local_c98 = "nlinopt.F90";
      local_c94 = 0x29e;
      local_c70 = "(f15.6,2es15.6)(f15.6,4es15.6)";
      local_c6c = 0xf;
      local_ca0 = 0x1000;
      local_c9c = 0x5d;
      _gfortran_st_write();
      _gfortran_transfer_real();
      _gfortran_transfer_real();
      local_af4 = local_a4c * 4.0 * 3.141592653589793 * 3.333333333333333e-05 * 99999.99999999999;
      uVar46 = CONCAT44(uVar47,8);
      pdVar44 = &local_af4;
      _gfortran_transfer_real();
      _gfortran_st_write_done(&local_ca0,pdVar44,uVar46);
      uVar47 = (undefined4)((ulonglong)uVar46 >> 0x20);
      local_a4c = 0.0;
      local_c98 = "nlinopt.F90";
      local_c94 = 0x2a2;
      local_c70 = "(f15.6,4es15.6)";
      local_c6c = 0xf;
      local_ca0 = 0x1000;
      local_c9c = 0x5e;
      _gfortran_st_write();
      _gfortran_transfer_real();
      local_afc = *(double *)((local_874 * local_a0 + local_87c) * 0x10 + 8 + (int)local_880) /
                  1e-07;
      _gfortran_transfer_real();
      local_b04 = *(double *)((local_85c * local_a0 + local_864) * 0x10 + 8 + (int)local_868) /
                  1e-07;
      _gfortran_transfer_real();
      local_b0c = *(double *)((local_8a4 * local_a0 + local_8ac) * 0x10 + 8 + (int)local_8b0) /
                  1e-07;
      _gfortran_transfer_real();
      local_b14 = *(double *)((local_88c * local_a0 + local_894) * 0x10 + 8 + (int)local_898) /
                  1e-07;
      uVar46 = CONCAT44(uVar47,8);
      pdVar44 = &local_b14;
      _gfortran_transfer_real();
      _gfortran_st_write_done(&local_ca0,pdVar44,uVar46);
      uVar47 = (undefined4)((ulonglong)uVar46 >> 0x20);
      local_c98 = "nlinopt.F90";
      local_c94 = 0x2a5;
      local_c70 = "(f15.6,4es15.6)";
      local_c6c = 0xf;
      local_ca0 = 0x1000;
      local_c9c = 0x5f;
      _gfortran_st_write();
      _gfortran_transfer_real();
      local_b1c = *(double *)((local_874 * local_a0 + local_87c) * 0x10 + (int)local_880) / 1e-07;
      _gfortran_transfer_real();
      local_b24 = *(double *)((local_85c * local_a0 + local_864) * 0x10 + (int)local_868) / 1e-07;
      _gfortran_transfer_real();
      local_b2c = *(double *)((local_8a4 * local_a0 + local_8ac) * 0x10 + (int)local_8b0) / 1e-07;
      _gfortran_transfer_real();
      local_b34 = *(double *)((local_88c * local_a0 + local_894) * 0x10 + (int)local_898) / 1e-07;
      uVar46 = CONCAT44(uVar47,8);
      pdVar44 = &local_b34;
      _gfortran_transfer_real();
      _gfortran_st_write_done(&local_ca0,pdVar44,uVar46);
      iVar34 = (local_874 * local_a0 + local_87c) * 0x10;
      iVar36 = (local_85c * local_a0 + local_864) * 0x10;
      iVar37 = (local_8a4 * local_a0 + local_8ac) * 0x10;
      iVar38 = (local_88c * local_a0 + local_894) * 0x10;
      uVar47 = (undefined4)
               ((ulonglong)
                (*(double *)(iVar38 + 8 + (int)local_898) +
                *(double *)(iVar37 + 8 + (int)local_8b0) +
                *(double *)(iVar36 + 8 + (int)local_868) + *(double *)(iVar34 + 8 + (int)local_880))
               >> 0x20);
      local_a3c = cabs(*(double *)(iVar38 + (int)local_898) +
                       *(double *)(iVar37 + (int)local_8b0) +
                       *(double *)(iVar36 + (int)local_868) + *(double *)(iVar34 + (int)local_880));
      local_a3c = local_a3c / 1e-07;
      local_c98 = "nlinopt.F90";
      local_c94 = 0x2a8;
      local_c70 = "(f15.6,2es15.6)(f15.6,4es15.6)";
      local_c6c = 0xf;
      local_ca0 = 0x1000;
      local_c9c = 0x60;
      _gfortran_st_write();
      _gfortran_transfer_real();
      _gfortran_transfer_real();
      local_b3c = local_a3c * 4.0 * 3.141592653589793 * 3.333333333333333e-05 * 99999.99999999999;
      uVar46 = CONCAT44(uVar47,8);
      pdVar44 = &local_b3c;
      _gfortran_transfer_real();
      lVar42 = ZEXT48(pdVar44) << 0x20;
      _gfortran_st_write_done();
      bVar41 = local_a0 != iVar39;
      local_a0 = local_a0 + 1;
    } while (bVar41);
  }
  uVar47 = (undefined4)((ulonglong)uVar46 >> 0x20);
  local_a3c = 0.0;
  if (local_94c == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 684 of file nlinopt.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071a9b,uVar47);
  }
  free(local_94c);
  local_94c = (void *)0x0;
  if (local_994 == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 684 of file nlinopt.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071af4,uVar47);
  }
  free(local_994);
  local_994 = (void *)0x0;
  if (local_9dc == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 684 of file nlinopt.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071b18,uVar47);
  }
  free(local_9dc);
  local_9dc = (void *)0x0;
  if (local_a30 == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 684 of file nlinopt.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071c04,uVar47);
  }
  free(local_a30);
  local_a30 = (void *)0x0;
  if (local_a00 == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 684 of file nlinopt.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071c28,uVar47);
  }
  free(local_a00);
  local_a00 = (void *)0x0;
  if (local_880 == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 685 of file nlinopt.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               "inter2w",uVar47);
  }
  free(local_880);
  local_880 = (void *)0x0;
  if (local_868 == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 685 of file nlinopt.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               "inter1w",uVar47);
  }
  free(local_868);
  local_868 = (void *)0x0;
  if (local_8b0 == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 685 of file nlinopt.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               "intra2w",uVar47);
  }
  free(local_8b0);
  local_8b0 = (void *)0x0;
  if (local_898 == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 685 of file nlinopt.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               "intra1w",uVar47);
  }
  free(local_898);
  local_898 = (void *)0x0;
  if (delta[0][0][0]._0_4_ == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 685 of file nlinopt.F90","Attempt to DEALLOCATE unallocated \'%s\'","delta",
               uVar47);
  }
  free(delta[0][0][0]._0_4_);
  delta[0][0][0]._0_4_ = (void *)0x0;
  local_c98 = "nlinopt.F90";
  local_c94 = 0x2ae;
  local_ca0 = 0;
  local_c9c = 0x5c;
  _gfortran_st_close();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x2af;
  local_ca0 = 0;
  local_c9c = 0x5d;
  _gfortran_st_close();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x2b0;
  local_ca0 = 0;
  local_c9c = 0x5e;
  _gfortran_st_close();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x2b1;
  local_ca0 = 0;
  local_c9c = 0x5f;
  _gfortran_st_close();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x2b2;
  local_ca0 = 0;
  local_c9c = 0x60;
  _gfortran_st_close();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x2b4;
  local_ca0 = 0x80;
  local_c9c = 6;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0,&DAT_08071e5c,1,uVar47);
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x2b5;
  local_ca0 = 0x80;
  local_c9c = 6;
  _gfortran_st_write();
  _gfortran_transfer_character
            (&local_ca0,
                          
             "information about calculation just performed:calculated the component:of second order susceptibilitytolerence:"
             ,0x2d,uVar47);
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x2b6;
  local_ca0 = 0x80;
  local_c9c = 6;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0,&DAT_08071e5c,1,uVar47);
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x2b7;
  local_ca0 = 0x80;
  local_c9c = 6;
  _gfortran_st_write();
  _gfortran_transfer_character
            (&local_ca0,"calculated the component:of second order susceptibilitytolerence:",0x19,
             uVar47);
  _gfortran_transfer_integer(&local_ca0,param_11,4,uVar47);
  _gfortran_transfer_integer(&local_ca0,param_12,4,uVar47);
  _gfortran_transfer_integer(&local_ca0,param_13,4,uVar47);
  _gfortran_transfer_character(&local_ca0,"of second order susceptibilitytolerence:",0x1e,uVar47);
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x2b8;
  local_ca0 = 0x80;
  local_c9c = 6;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0,"tolerence:",10,uVar47);
  _gfortran_transfer_real(&local_ca0,param_18,8,uVar47);
  _gfortran_st_write_done();
  if (0.00800000037997961 < *param_18) {
    local_c98 = "nlinopt.F90";
    local_c94 = 0x2b9;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character
              (&local_ca0,"ATTENTION: tolerence is too highbroadening:Hartree",0x20,uVar47);
    _gfortran_st_write_done();
  }
  local_c98 = "nlinopt.F90";
  local_c94 = 0x2ba;
  local_ca0 = 0x80;
  local_c9c = 6;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0,"broadening:Hartree",0xb,uVar47);
  _gfortran_transfer_real(&local_ca0,param_17,8,uVar47);
  _gfortran_transfer_character(&local_ca0,"Hartree",7,uVar47);
  _gfortran_st_write_done();
  if (*param_17 <= 0.008999999612569809) {
    if (0.01499999966472387 < *param_17) {
      local_c98 = "nlinopt.F90";
      local_c94 = 0x2c0;
      local_ca0 = 0x80;
      local_c9c = 6;
      _gfortran_st_write();
      _gfortran_transfer_character(&local_ca0,&DAT_08071e5c,1,uVar47);
      _gfortran_st_write_done();
      local_c98 = "nlinopt.F90";
      local_c94 = 0x2c1;
      local_ca0 = 0x80;
      local_c9c = 6;
      _gfortran_st_write();
      _gfortran_transfer_character
                (&local_ca0,"ATTENTION: broadening is too highscissors shift:energy window:",0x21,
                 uVar47);
      _gfortran_st_write_done();
      local_c98 = "nlinopt.F90";
      local_c94 = 0x2c2;
      local_ca0 = 0x80;
      local_c9c = 6;
      _gfortran_st_write();
      _gfortran_transfer_character(&local_ca0,&DAT_08071e5c,1,uVar47);
      _gfortran_st_write_done();
    }
  }
  else {
    local_c98 = "nlinopt.F90";
    local_c94 = 700;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character(&local_ca0,&DAT_08071e5c,1,uVar47);
    _gfortran_st_write_done();
    local_c98 = "nlinopt.F90";
    local_c94 = 0x2bd;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character(&local_ca0,"ATTENTION: broadening is quite high",0x23,uVar47);
    _gfortran_st_write_done();
    local_c98 = "nlinopt.F90";
    local_c94 = 0x2be;
    local_ca0 = 0x80;
    local_c9c = 6;
    _gfortran_st_write();
    _gfortran_transfer_character(&local_ca0,&DAT_08071e5c,1,uVar47);
    _gfortran_st_write_done();
  }
  local_c98 = "nlinopt.F90";
  local_c94 = 0x2c4;
  local_ca0 = 0x80;
  local_c9c = 6;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0,"scissors shift:energy window:",0xf,uVar47);
  _gfortran_transfer_real(&local_ca0,param_16,8,uVar47);
  _gfortran_transfer_character(&local_ca0,"Hartree",7,uVar47);
  _gfortran_st_write_done();
  local_c98 = "nlinopt.F90";
  local_c94 = 0x2c5;
  local_ca0 = 0x80;
  local_c9c = 6;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_ca0,"energy window:",0xe,uVar47);
  local_b44 = ((double)emax - (double)emin) * 27.21138381958008;
  _gfortran_transfer_real(&local_ca0,&local_b44,8,uVar47);
  _gfortran_transfer_character(&local_ca0,"eV(a)",2,uVar47);
  local_b4c = (double)emax - (double)emin;
  _gfortran_transfer_real(&local_ca0,&local_b4c,8,uVar47);
  _gfortran_transfer_character(&local_ca0,"Hartree",7,uVar47);
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
  local_868 = (void *)0x0;
  if (delta[0][0][0]._0_4_ != (void *)0x0) {
    free(delta[0][0][0]._0_4_);
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
  size_t sVar4;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  real_kind_8_ (*__ptr_03) [4] [1];
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  real_kind_8_ *red;
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
  real_kind_8_ local_c4 [3];
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
  iVar6 = 0;
  if (-1 < iVar1) {
    iVar6 = iVar1;
  }
  sVar4 = iVar6 * 8;
  if ((int)sVar4 < 0) {
    sVar4 = _gfortran_runtime_error("Attempt to allocate a negative amount of memory.");
  }
  if ((int)sVar4 < 1) {
    sVar4 = 1;
  }
  __ptr = malloc(sVar4);
  if (__ptr == (void *)0x0) {
    __ptr = (void *)_gfortran_os_error("Memory allocation failed");
  }
  iVar1 = *nkpt;
  iVar6 = 0;
  if (-1 < iVar1) {
    iVar6 = iVar1;
  }
  sVar4 = iVar6 * 4;
  if ((int)sVar4 < 0) {
    sVar4 = _gfortran_runtime_error("Attempt to allocate a negative amount of memory.");
  }
  if ((int)sVar4 < 1) {
    sVar4 = 1;
  }
  __ptr_00 = malloc(sVar4);
  if (__ptr_00 == (void *)0x0) {
    __ptr_00 = (void *)_gfortran_os_error("Memory allocation failed");
  }
  iVar6 = 0;
  if (-1 < *nsym * 9) {
    iVar6 = *nsym * 9;
  }
  sVar4 = iVar6 * 8;
  if ((int)sVar4 < 0) {
    sVar4 = _gfortran_runtime_error("Attempt to allocate a negative amount of memory.");
  }
  if ((int)sVar4 < 1) {
    sVar4 = 1;
  }
  __ptr_01 = malloc(sVar4);
  if (__ptr_01 == (void *)0x0) {
    __ptr_01 = (void *)_gfortran_os_error("Memory allocation failed");
  }
  iVar6 = *nsym;
  isym = 1;
  if (0 < iVar6) {
    do {
      iVar7 = 1;
      while (iVar7 < 4) {
        iVar8 = 1;
        while (iVar8 < 4) {
          *(double *)((int)__ptr_01 + (iVar8 + isym * 9 + -0xd + iVar7 * 3) * 8) =
               (double)*(int *)((int)symrel[-1] + iVar8 * 4 + isym * 0x24 + iVar7 * 0xc + 0xc);
          iVar8 = iVar8 + 1;
        }
        iVar7 = iVar7 + 1;
      }
      bVar9 = isym != iVar6;
      isym = isym + 1;
    } while (bVar9);
  }
  iVar6 = *nkpt;
  ikpt = 1;
  if (0 < iVar6) {
    do {
      local_228 = "getwtk.F90";
      local_224 = 0x4a;
      local_230 = (void *)0x80;
      local_22c = 6;
      _gfortran_st_write(&local_230);
      _gfortran_transfer_character(&local_230," getwtk : ikpt = ",0x11);
      red = (real_kind_8_ *)&ikpt;
      _gfortran_transfer_integer(&local_230,red,4);
      _gfortran_st_write_done(&local_230);
      *(undefined4 *)((int)__ptr_00 + (ikpt + -1) * 4) = 0;
      iVar7 = 1;
      while (iVar7 <= iVar3) {
        iVar8 = 1;
        while (iVar8 < 4) {
          *(undefined8 *)((int)__ptr + (iVar8 + iVar7 * 3 + -4) * 8) = 0;
          iVar8 = iVar8 + 1;
        }
        iVar7 = iVar7 + 1;
      }
      iVar7 = *nsym;
      isym = 1;
      if (0 < iVar7) {
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
          __ptr_02 = (void *)_gfortran_internal_pack(&local_230,red);
          local_d4 = 0x219;
          local_cc = 1;
          local_c8 = 3;
          local_d0 = 1;
          local_dc = (real_kind_8_ (*) [4] [1])kpt[-1][ikpt * 3 + 1];
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
            iVar8 = 1;
            while (iVar8 < 4) {
              local_c4[iVar8 + -1] =
                   (real_kind_8_)(local_a4[iVar8 + -1] * ((double)itim * -2.0 + 1.0));
              iVar8 = iVar8 + 1;
            }
            canon9(local_c4,&tmp,&shift);
            local_c4[0] = tmp;
            canon9(local_c4 + 1,&tmp,&shift);
            local_c4[1] = tmp;
            red = &tmp;
            canon9(local_c4 + 2,red,&shift);
            local_c4[2] = tmp;
            bVar9 = true;
            iVar8 = *(int *)((int)__ptr_00 + (ikpt + -1) * 4);
            dkpt[3]._4_4_ = 1;
            if (0 < iVar8) {
              do {
                iVar5 = 1;
                while (iVar5 < 4) {
                  dkpt[iVar5 + -1] =
                       (real_kind_8_)
                       ABS((double)local_c4[iVar5 + -1] -
                           *(double *)((int)__ptr + (iVar5 + dkpt[3]._4_4_ * 3 + -4) * 8));
                  iVar5 = iVar5 + 1;
                }
                dVar2 = 0.0;
                iVar5 = 1;
                while (iVar5 < 4) {
                  dVar2 = (double)dkpt[iVar5 + -1] + dVar2;
                  iVar5 = iVar5 + 1;
                }
                if (dVar2 < 1e-06) {
                  bVar9 = false;
                  break;
                }
                bVar10 = dkpt[3]._4_4_ != iVar8;
                dkpt[3]._4_4_ = dkpt[3]._4_4_ + 1;
              } while (bVar10);
            }
            if (bVar9) {
              *(int *)((int)__ptr_00 + (ikpt + -1) * 4) =
                   *(int *)((int)__ptr_00 + (ikpt + -1) * 4) + 1;
              iVar8 = *(int *)((int)__ptr_00 + (ikpt + -1) * 4);
              iVar5 = 1;
              while (iVar5 < 4) {
                *(real_kind_8_ *)((int)__ptr + (iVar5 + iVar8 * 3 + -4) * 8) = local_c4[iVar5 + -1];
                iVar5 = iVar5 + 1;
              }
            }
            bVar9 = itim != 1;
            itim = itim + 1;
          } while (bVar9);
          local_c4[2] = tmp;
          bVar9 = isym != iVar7;
          isym = isym + 1;
        } while (bVar9);
      }
      bVar9 = ikpt != iVar6;
      ikpt = ikpt + 1;
    } while (bVar9);
  }
  iVar3 = 0;
  iVar6 = 1;
  while (iVar6 <= iVar1) {
    iVar3 = iVar3 + *(int *)((int)__ptr_00 + (iVar6 + -1) * 4);
    iVar6 = iVar6 + 1;
  }
  iVar1 = *nkpt;
  ikpt = 1;
  if (0 < iVar1) {
    do {
      wtk[ikpt + -1][0] =
           (real_kind_8_)((double)*(int *)((int)__ptr_00 + (ikpt + -1) * 4) / (double)iVar3);
      bVar9 = ikpt != iVar1;
      ikpt = ikpt + 1;
    } while (bVar9);
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



// WARNING: Type propagation algorithm not settling

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
  integer_kind_4_ iVar13;
  int iVar14;
  uint uVar15;
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
  bool bVar33;
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
  
  uVar15 = 0;
  if (-1 < *mband) {
    uVar15 = *mband;
  }
  iVar16 = 0;
  if (-1 < (int)(uVar15 * *mband)) {
    iVar16 = uVar15 * *mband;
  }
  iVar17 = 0;
  if (-1 < iVar16 * *nkpt) {
    iVar17 = iVar16 * *nkpt;
  }
  iVar18 = 0;
  if (-1 < iVar17 * 3) {
    iVar18 = iVar17 * 3;
  }
  iVar19 = 0;
  if (-1 < *mband * 2) {
    iVar19 = *mband * 2;
  }
  iVar20 = 0;
  if (-1 < iVar19 * *mband) {
    iVar20 = iVar19 * *mband;
  }
  iVar21 = 0;
  if (-1 < iVar20 * *nkpt) {
    iVar21 = iVar20 * *nkpt;
  }
  iVar30 = ((-3 - iVar19) - iVar20) - iVar21;
  iVar22 = 0;
  if (-1 < *mband * 2) {
    iVar22 = *mband * 2;
  }
  iVar23 = 0;
  if (-1 < iVar22 * *mband) {
    iVar23 = iVar22 * *mband;
  }
  iVar24 = 0;
  if (-1 < iVar23 * *nkpt) {
    iVar24 = iVar23 * *nkpt;
  }
  iVar31 = ((-3 - iVar22) - iVar23) - iVar24;
  iVar25 = 0;
  if (-1 < *mband * 2) {
    iVar25 = *mband * 2;
  }
  iVar26 = 0;
  if (-1 < iVar25 * *mband) {
    iVar26 = iVar25 * *mband;
  }
  iVar27 = 0;
  if (-1 < iVar26 * *nkpt) {
    iVar27 = iVar26 * *nkpt;
  }
  iVar32 = ((-3 - iVar25) - iVar26) - iVar27;
  ii = 1;
  do {
    iVar13 = ii;
    dVar1 = (double)rprimd[-1][3][ii * 3 + 1];
    dVar2 = (double)rprimd[-1][3][ii * 3 + 1];
    dVar3 = (double)rprimd[-1][3][ii * 3 + 2];
    dVar4 = (double)rprimd[-1][3][ii * 3 + 2];
    dVar5 = (double)rprimd[-1][3][ii * 3 + 3];
    dVar6 = (double)rprimd[-1][3][ii * 3 + 3];
    iVar10 = ii * 3;
    iVar28 = 1;
    while (iVar28 < 4) {
      adStack188[iVar28 + iVar10 + -4] =
           (double)rprimd[-1][3][iVar13 * 3 + iVar28] /
           SQRT(dVar6 * dVar5 + dVar4 * dVar3 + dVar2 * dVar1);
      iVar28 = iVar28 + 1;
    }
    bVar33 = ii != 3;
    ii = ii + 1;
  } while (bVar33);
  iVar10 = *nsppol;
  isppol = 1;
  if (0 < iVar10) {
    do {
      iVar28 = *nkpt;
      ikpt = 1;
      if (0 < iVar28) {
        do {
          iVar11 = *mband;
          iband1 = 1;
          if (0 < iVar11) {
            do {
              iVar12 = *mband;
              iband2 = 1;
              if (0 < iVar12) {
                do {
                  dVar1 = (double)(*(real_kind_8_ (*) [3] [1] [1] [1] [1])
                                    ((int)eigen11 +
                                    (iband2 * 2 + iVar19 * iband1 + 1 +
                                     iVar21 * isppol + iVar20 * ikpt + iVar30) * 8))[0];
                  dVar2 = (double)(*(real_kind_8_ (*) [3] [1] [1] [1] [1])
                                    ((int)eigen11 +
                                    ((iband2 + 1) * 2 + iVar19 * iband1 +
                                     iVar21 * isppol + iVar20 * ikpt + iVar30) * 8))[0];
                  dVar3 = (double)(*(real_kind_8_ (*) [3] [1] [1] [1] [1])
                                    ((int)eigen12 +
                                    (iband2 * 2 + iVar22 * iband1 + 1 +
                                     iVar24 * isppol + iVar23 * ikpt + iVar31) * 8))[0];
                  dVar4 = (double)(*(real_kind_8_ (*) [3] [1] [1] [1] [1])
                                    ((int)eigen12 +
                                    ((iband2 + 1) * 2 + iVar22 * iband1 +
                                     iVar24 * isppol + iVar23 * ikpt + iVar31) * 8))[0];
                  dVar5 = (double)(*(real_kind_8_ (*) [3] [1] [1] [1] [1])
                                    ((int)eigen13 +
                                    (iband2 * 2 + iVar25 * iband1 + 1 +
                                     iVar27 * isppol + iVar26 * ikpt + iVar32) * 8))[0];
                  dVar6 = (double)(*(real_kind_8_ (*) [3] [1] [1] [1] [1])
                                    ((int)eigen13 +
                                    ((iband2 + 1) * 2 + iVar25 * iband1 +
                                     iVar27 * isppol + iVar26 * ikpt + iVar32) * 8))[0];
                  iVar29 = 1;
                  while (iVar29 < 4) {
                    dVar7 = adStack188[iVar29 + -1];
                    dVar8 = adStack188[iVar29 + 2];
                    dVar9 = adStack188[iVar29 + 5];
                    iVar14 = (iVar29 * iVar17 +
                             iVar18 * isppol +
                             iVar16 * ikpt +
                             iband1 * uVar15 + (((~uVar15 - iVar16) - iVar17) - iVar18) + iband2) *
                             0x10;
                    *(double *)*(complex_kind_8_ (*) [1] [1] [1] [4] [1])(iVar14 + (int)pmat) =
                         (dVar9 * dVar5 - dVar6 * 0.0) +
                         (dVar8 * dVar3 - dVar4 * 0.0) + (dVar7 * dVar1 - dVar2 * 0.0);
                    *(double *)(iVar14 + 8 + (int)pmat) =
                         dVar5 * 0.0 + dVar9 * dVar6 +
                         dVar3 * 0.0 + dVar8 * dVar4 + dVar1 * 0.0 + dVar7 * dVar2;
                    iVar29 = iVar29 + 1;
                  }
                  bVar33 = iband2 != iVar12;
                  iband2 = iband2 + 1;
                } while (bVar33);
              }
              bVar33 = iband1 != iVar11;
              iband1 = iband1 + 1;
            } while (bVar33);
          }
          bVar33 = ikpt != iVar28;
          ikpt = ikpt + 1;
        } while (bVar33);
      }
      bVar33 = isppol != iVar10;
      isppol = isppol + 1;
    } while (bVar33);
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



// WARNING: Could not reconcile some variable overlaps

void hdr_io_int(int *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  void *__ptr;
  void *extraout_EDX;
  void *extraout_EDX_00;
  uint uVar8;
  void *extraout_EDX_01;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  int **ppiVar14;
  int *piVar15;
  char *pcVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined *puVar19;
  uint local_948;
  uint local_918;
  uint local_8f0;
  uint local_8a4;
  undefined4 local_88c;
  undefined4 local_888;
  char *local_884;
  undefined4 local_880;
  undefined4 local_860;
  char *local_85c;
  undefined4 local_858;
  undefined *local_84c;
  undefined4 local_848;
  int *local_738;
  undefined4 local_734;
  char *local_730;
  int local_72c;
  undefined4 local_728;
  int local_724;
  int *local_720;
  undefined4 local_71c;
  int local_718;
  undefined4 local_70c;
  char *local_708;
  undefined4 local_704;
  undefined *local_6f8;
  undefined4 local_6f4;
  void *local_5e4;
  undefined4 local_5e0;
  undefined4 local_5dc;
  int local_5d8;
  undefined4 local_5d4;
  int local_5d0;
  void *local_5cc;
  undefined4 local_5c8;
  undefined4 local_5c4;
  int local_5c0;
  undefined4 local_5bc;
  int local_5b8;
  int local_5b4;
  undefined4 local_5b0;
  undefined4 local_5ac;
  int local_5a8;
  undefined4 local_5a4;
  int local_5a0;
  void *local_59c;
  int local_598;
  int local_594;
  undefined4 local_590;
  undefined4 local_58c;
  int local_588;
  undefined4 local_584;
  int local_580;
  int local_57c;
  undefined4 local_578;
  undefined4 local_574;
  int local_570;
  undefined4 local_56c;
  int local_568;
  int local_564;
  undefined4 local_560;
  undefined4 local_55c;
  int local_558;
  undefined4 local_554;
  int local_550;
  int local_54c;
  undefined4 local_548;
  undefined4 local_544;
  int local_540;
  undefined4 local_53c;
  int local_538;
  int local_534;
  undefined4 local_530;
  undefined4 local_52c;
  int local_528;
  undefined4 local_524;
  int local_520;
  int local_51c;
  undefined4 local_518;
  undefined4 local_514;
  int local_510;
  undefined4 local_50c;
  int local_508;
  int local_504;
  int *local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4ec;
  int *local_4e8;
  undefined4 local_4e4;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined4 local_4d8;
  undefined4 local_4d4;
  int *local_4d0;
  undefined4 local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc;
  int *local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined4 local_4a8;
  undefined4 local_4a4;
  int *local_4a0;
  undefined4 local_49c;
  undefined4 local_498;
  undefined4 local_494;
  undefined4 local_490;
  undefined4 local_48c;
  int *local_488;
  undefined4 local_484;
  undefined4 local_480;
  undefined4 local_47c;
  undefined4 local_478;
  undefined4 local_474;
  int *local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined4 local_45c;
  undefined4 local_458;
  undefined4 local_454;
  char *local_450;
  undefined4 local_44c;
  int *local_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  undefined4 local_42c;
  undefined4 local_428;
  int *local_424;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  int *local_40c;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  int *local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_3e0;
  int *local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  int *local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined4 local_3b0;
  int *local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  int *local_394;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_384;
  undefined4 local_380;
  real_kind_8_ *local_37c;
  undefined4 local_378;
  undefined4 local_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  int *local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  real_kind_8_ *local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  int *local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  char *local_314;
  undefined4 local_310;
  undefined4 local_300;
  undefined4 local_2fc;
  char *local_2f8;
  undefined4 local_2f4;
  int local_2e4;
  int local_2e0;
  int local_2dc;
  void *local_2d8;
  uint local_2d4;
  undefined4 local_2d0;
  int local_2cc;
  int local_2c8;
  int local_2c4;
  uint local_2c0;
  int local_2bc;
  int local_2b8;
  int local_2b4;
  int local_2b0;
  int local_2ac;
  int *local_2a8;
  undefined local_2a4 [500];
  undefined local_b0 [4];
  undefined local_ac [4];
  int local_a8;
  int local_a4;
  void *local_a0;
  int local_9c;
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  int local_8c;
  uint local_88;
  int local_84;
  int *local_7e;
  real_kind_8_ buffer [1];
  int local_6c;
  integer_kind_4_ bantot;
  real_kind_8_ acell [4];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_24;
  
  buffer[0]._0_4_ = (void *)0x0;
  local_a0 = (void *)0x0;
  local_2d8 = (void *)0x0;
  if ((*param_3 != 1) && (*param_3 != 5)) {
    if ((*param_3 != 2) && (*param_3 != 6)) {
      if ((*param_3 != 3) && (*param_3 != 4)) goto LAB_08067a34;
      local_884 = "hdr_io.F90";
      local_880 = 0x22e;
      local_85c = &DAT_0807297f;
      local_858 = 3;
      local_88c = 0x1000;
      local_888 = *param_4;
      _gfortran_st_write(&local_88c);
      _gfortran_transfer_character
                (&local_88c,
                                  
                 " =============================================================================== ECHO of part of the ABINIT file header  ECHO of the ABINIT file header   First record :(a,a6,2i5).codvsn,headform,fform =  Second record :(a,4i6) bantot,intxc,ixc,natom  = ngfft(1:3),nkpt         =(a,2i6) nspden,nspinor          = nsppol,nsym,ntypat,occopt=(a,5i6)"
                 ,0x50);
      _gfortran_st_write_done(&local_88c);
      if (*param_3 == 3) {
        local_884 = "hdr_io.F90";
        local_880 = 0x22f;
        local_85c = &DAT_0807297f;
        local_858 = 3;
        local_88c = 0x1000;
        local_888 = *param_4;
        _gfortran_st_write(&local_88c);
        _gfortran_transfer_character
                  (&local_88c,
                                      
                   " ECHO of part of the ABINIT file header  ECHO of the ABINIT file header   First record :(a,a6,2i5).codvsn,headform,fform =  Second record :(a,4i6) bantot,intxc,ixc,natom  = ngfft(1:3),nkpt         =(a,2i6) nspden,nspinor          = nsppol,nsym,ntypat,occopt=(a,5i6)"
                   ,0x28);
        _gfortran_st_write_done(&local_88c);
      }
      if (*param_3 == 4) {
        local_884 = "hdr_io.F90";
        local_880 = 0x230;
        local_85c = &DAT_0807297f;
        local_858 = 3;
        local_88c = 0x1000;
        local_888 = *param_4;
        _gfortran_st_write(&local_88c);
        _gfortran_transfer_character
                  (&local_88c,
                                      
                   " ECHO of the ABINIT file header   First record :(a,a6,2i5).codvsn,headform,fform =  Second record :(a,4i6) bantot,intxc,ixc,natom  = ngfft(1:3),nkpt         =(a,2i6) nspden,nspinor          = nsppol,nsym,ntypat,occopt=(a,5i6)"
                   ,0x20);
        _gfortran_st_write_done(&local_88c);
      }
      local_884 = "hdr_io.F90";
      local_880 = 0x231;
      local_85c = &DAT_0807297f;
      local_858 = 3;
      local_88c = 0x1000;
      local_888 = *param_4;
      _gfortran_st_write(&local_88c);
      _gfortran_transfer_character
                (&local_88c,
                                  
                 "  First record :(a,a6,2i5).codvsn,headform,fform =  Second record :(a,4i6) bantot,intxc,ixc,natom  = ngfft(1:3),nkpt         =(a,2i6) nspden,nspinor          = nsppol,nsym,ntypat,occopt=(a,5i6)"
                 ,1);
      _gfortran_st_write_done(&local_88c);
      local_884 = "hdr_io.F90";
      local_880 = 0x232;
      local_85c = &DAT_0807297f;
      local_858 = 3;
      local_88c = 0x1000;
      local_888 = *param_4;
      _gfortran_st_write(&local_88c);
      _gfortran_transfer_character
                (&local_88c,
                                  
                 " First record :(a,a6,2i5).codvsn,headform,fform =  Second record :(a,4i6) bantot,intxc,ixc,natom  = ngfft(1:3),nkpt         =(a,2i6) nspden,nspinor          = nsppol,nsym,ntypat,occopt=(a,5i6)"
                 ,0xf);
      _gfortran_st_write_done(&local_88c);
      local_884 = "hdr_io.F90";
      local_880 = 0x234;
      local_85c = 
      "(a,a6,2i5).codvsn,headform,fform =  Second record :(a,4i6) bantot,intxc,ixc,natom  = ngfft(1:3),nkpt         =(a,2i6) nspden,nspinor          = nsppol,nsym,ntypat,occopt=(a,5i6)"
      ;
      local_858 = 10;
      local_88c = 0x1000;
      local_888 = *param_4;
      _gfortran_st_write(&local_88c);
      _gfortran_transfer_character
                (&local_88c,
                                  
                 ".codvsn,headform,fform =  Second record :(a,4i6) bantot,intxc,ixc,natom  = ngfft(1:3),nkpt         =(a,2i6) nspden,nspinor          = nsppol,nsym,ntypat,occopt=(a,5i6)"
                 ,0x19);
      _gfortran_transfer_character(&local_88c,param_2 + 0xc6,6);
      _gfortran_transfer_integer(&local_88c,param_2 + 2,4);
      _gfortran_transfer_integer(&local_88c,param_1,4);
      _gfortran_st_write_done(&local_88c);
      local_884 = "hdr_io.F90";
      local_880 = 0x236;
      local_85c = &DAT_0807297f;
      local_858 = 3;
      local_88c = 0x1000;
      local_888 = *param_4;
      _gfortran_st_write(&local_88c);
      _gfortran_transfer_character
                (&local_88c,
                                  
                 "  First record :(a,a6,2i5).codvsn,headform,fform =  Second record :(a,4i6) bantot,intxc,ixc,natom  = ngfft(1:3),nkpt         =(a,2i6) nspden,nspinor          = nsppol,nsym,ntypat,occopt=(a,5i6)"
                 ,1);
      _gfortran_st_write_done(&local_88c);
      local_884 = "hdr_io.F90";
      local_880 = 0x237;
      local_85c = &DAT_0807297f;
      local_858 = 3;
      local_88c = 0x1000;
      local_888 = *param_4;
      _gfortran_st_write(&local_88c);
      _gfortran_transfer_character
                (&local_88c,
                                  
                 " Second record :(a,4i6) bantot,intxc,ixc,natom  = ngfft(1:3),nkpt         =(a,2i6) nspden,nspinor          = nsppol,nsym,ntypat,occopt=(a,5i6)"
                 ,0x10);
      _gfortran_st_write_done(&local_88c);
      local_884 = "hdr_io.F90";
      local_880 = 0x239;
      local_85c = 
      "(a,4i6) bantot,intxc,ixc,natom  = ngfft(1:3),nkpt         =(a,2i6) nspden,nspinor          = nsppol,nsym,ntypat,occopt=(a,5i6)"
      ;
      local_858 = 7;
      local_88c = 0x1000;
      local_888 = *param_4;
      _gfortran_st_write(&local_88c);
      _gfortran_transfer_character
                (&local_88c,
                                  
                 " bantot,intxc,ixc,natom  = ngfft(1:3),nkpt         =(a,2i6) nspden,nspinor          = nsppol,nsym,ntypat,occopt=(a,5i6)"
                 ,0x1a);
      _gfortran_transfer_integer(&local_88c,param_2,4);
      _gfortran_transfer_integer(&local_88c,param_2 + 3,4);
      _gfortran_transfer_integer(&local_88c,param_2 + 4,4);
      _gfortran_transfer_integer(&local_88c,param_2 + 5,4);
      _gfortran_st_write_done(&local_88c);
      local_884 = "hdr_io.F90";
      local_880 = 0x23b;
      local_85c = 
      "(a,4i6) bantot,intxc,ixc,natom  = ngfft(1:3),nkpt         =(a,2i6) nspden,nspinor          = nsppol,nsym,ntypat,occopt=(a,5i6)"
      ;
      local_858 = 7;
      local_88c = 0x1000;
      local_888 = *param_4;
      _gfortran_st_write(&local_88c);
      _gfortran_transfer_character
                (&local_88c,
                                  
                 " ngfft(1:3),nkpt         =(a,2i6) nspden,nspinor          = nsppol,nsym,ntypat,occopt=(a,5i6)"
                 ,0x1a);
      local_498 = 0x109;
      local_490 = 1;
      local_48c = 3;
      local_494 = 1;
      local_4a0 = param_2 + 0x10;
      local_49c = 0xffffffff;
      _gfortran_transfer_array(&local_88c,&local_4a0,4,0);
      _gfortran_transfer_integer(&local_88c,param_2 + 6,4);
      _gfortran_st_write_done(&local_88c);
      if (0x16 < param_2[2]) {
        local_884 = "hdr_io.F90";
        local_880 = 0x23f;
        local_85c = "(a,2i6) nspden,nspinor          = nsppol,nsym,ntypat,occopt=(a,5i6)";
        local_858 = 7;
        local_88c = 0x1000;
        local_888 = *param_4;
        _gfortran_st_write(&local_88c);
        _gfortran_transfer_character
                  (&local_88c," nspden,nspinor          = nsppol,nsym,ntypat,occopt=(a,5i6)",0x1a);
        _gfortran_transfer_integer(&local_88c,param_2 + 8,4);
        _gfortran_transfer_integer(&local_88c,param_2 + 9,4);
        _gfortran_st_write_done(&local_88c);
      }
      if (param_2[2] < 0x18) {
        local_884 = "hdr_io.F90";
        local_880 = 0x244;
        local_85c = 
        "(a,4i6) bantot,intxc,ixc,natom  = ngfft(1:3),nkpt         =(a,2i6) nspden,nspinor          = nsppol,nsym,ntypat,occopt=(a,5i6)"
        ;
        local_858 = 7;
        local_88c = 0x1000;
        local_888 = *param_4;
        _gfortran_st_write(&local_88c);
        _gfortran_transfer_character(&local_88c," nsppol,nsym,ntypat,occopt=(a,5i6)",0x1b);
        _gfortran_transfer_integer(&local_88c,param_2 + 10,4);
        _gfortran_transfer_integer(&local_88c,param_2 + 0xb,4);
        _gfortran_transfer_integer(&local_88c,param_2 + 0xc,4);
        _gfortran_transfer_integer(&local_88c,param_2 + 0xd,4);
        _gfortran_st_write_done(&local_88c);
      }
      else {
        if (param_2[2] < 0x29) {
          local_884 = "hdr_io.F90";
          local_880 = 0x247;
          local_85c = "(a,5i6)";
          local_858 = 7;
          local_88c = 0x1000;
          local_888 = *param_4;
          _gfortran_st_write(&local_88c);
          _gfortran_transfer_character(&local_88c," nsppol,nsym,npsp,ntypat,occopt=(a,6i6)",0x20);
          _gfortran_transfer_integer(&local_88c,param_2 + 10,4);
          _gfortran_transfer_integer(&local_88c,param_2 + 0xb,4);
          _gfortran_transfer_integer(&local_88c,param_2 + 7,4);
          _gfortran_transfer_integer(&local_88c,param_2 + 0xc,4);
          _gfortran_transfer_integer(&local_88c,param_2 + 0xd,4);
          _gfortran_st_write_done(&local_88c);
        }
        else {
          if ((param_2[2] == 0x29) || (param_2[2] == 0x2a)) {
            local_884 = "hdr_io.F90";
            local_880 = 0x24b;
            local_85c = "(a,6i6)";
            local_858 = 7;
            local_88c = 0x1000;
            local_888 = *param_4;
            _gfortran_st_write(&local_88c);
            _gfortran_transfer_character
                      (&local_88c,
                                              
                       " nsppol,nsym,npsp,ntypat,occopt,pertcase= nsppol,nsym,npsp,ntypat =(a,3i6) occopt,pertcase,usepaw  =(a,2es18.10) ecut,ecutsm             =(a,3es18.10) ecut,ecutdg,ecutsm      =(a, es18.10) ecut_eff                = qptn(1:3)               = rprimd(1:3,1)           = rprimd(1:3,2)           = rprimd(1:3,3)           = tphysel,tsmear          = stmbias,tphysel,tsmear  =(a,i3,a) The header contain  additional records. Third record :(a,(12i4,8x)) istwfk= nband =(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
                       ,0x29);
            _gfortran_transfer_integer(&local_88c,param_2 + 10,4);
            _gfortran_transfer_integer(&local_88c,param_2 + 0xb,4);
            _gfortran_transfer_integer(&local_88c,param_2 + 7,4);
            _gfortran_transfer_integer(&local_88c,param_2 + 0xc,4);
            _gfortran_transfer_integer(&local_88c,param_2 + 0xd,4);
            _gfortran_transfer_integer(&local_88c,param_2 + 0xe,4);
            _gfortran_st_write_done(&local_88c);
          }
          else {
            if (0x2b < param_2[2]) {
              local_884 = "hdr_io.F90";
              local_880 = 0x24e;
              local_85c = 
              "(a,4i6) bantot,intxc,ixc,natom  = ngfft(1:3),nkpt         =(a,2i6) nspden,nspinor          = nsppol,nsym,ntypat,occopt=(a,5i6)"
              ;
              local_858 = 7;
              local_88c = 0x1000;
              local_888 = *param_4;
              _gfortran_st_write(&local_88c);
              _gfortran_transfer_character
                        (&local_88c,
                                                  
                         " nsppol,nsym,npsp,ntypat =(a,3i6) occopt,pertcase,usepaw  =(a,2es18.10) ecut,ecutsm             =(a,3es18.10) ecut,ecutdg,ecutsm      =(a, es18.10) ecut_eff                = qptn(1:3)               = rprimd(1:3,1)           = rprimd(1:3,2)           = rprimd(1:3,3)           = tphysel,tsmear          = stmbias,tphysel,tsmear  =(a,i3,a) The header contain  additional records. Third record :(a,(12i4,8x)) istwfk= nband =(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
                         ,0x1a);
              _gfortran_transfer_integer(&local_88c,param_2 + 10,4);
              _gfortran_transfer_integer(&local_88c,param_2 + 0xb,4);
              _gfortran_transfer_integer(&local_88c,param_2 + 7,4);
              _gfortran_transfer_integer(&local_88c,param_2 + 0xc,4);
              _gfortran_st_write_done(&local_88c);
              local_884 = "hdr_io.F90";
              local_880 = 0x250;
              local_85c = 
              "(a,3i6) occopt,pertcase,usepaw  =(a,2es18.10) ecut,ecutsm             =(a,3es18.10) ecut,ecutdg,ecutsm      =(a, es18.10) ecut_eff                = qptn(1:3)               = rprimd(1:3,1)           = rprimd(1:3,2)           = rprimd(1:3,3)           = tphysel,tsmear          = stmbias,tphysel,tsmear  =(a,i3,a) The header contain  additional records. Third record :(a,(12i4,8x)) istwfk= nband =(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
              ;
              local_858 = 7;
              local_88c = 0x1000;
              local_888 = *param_4;
              _gfortran_st_write(&local_88c);
              _gfortran_transfer_character
                        (&local_88c,
                                                  
                         " occopt,pertcase,usepaw  =(a,2es18.10) ecut,ecutsm             =(a,3es18.10) ecut,ecutdg,ecutsm      =(a, es18.10) ecut_eff                = qptn(1:3)               = rprimd(1:3,1)           = rprimd(1:3,2)           = rprimd(1:3,3)           = tphysel,tsmear          = stmbias,tphysel,tsmear  =(a,i3,a) The header contain  additional records. Third record :(a,(12i4,8x)) istwfk= nband =(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
                         ,0x1a);
              _gfortran_transfer_integer(&local_88c,param_2 + 0xd,4);
              _gfortran_transfer_integer(&local_88c,param_2 + 0xe,4);
              _gfortran_transfer_integer(&local_88c,param_2 + 0xf,4);
              _gfortran_st_write_done(&local_88c);
            }
          }
        }
      }
      if (((param_2[2] == 0x28) || (param_2[2] == 0x29)) || (param_2[2] == 0x2a)) {
        local_884 = "hdr_io.F90";
        local_880 = 0x254;
        local_85c = 
        "(a,2es18.10) ecut,ecutsm             =(a,3es18.10) ecut,ecutdg,ecutsm      =(a, es18.10) ecut_eff                = qptn(1:3)               = rprimd(1:3,1)           = rprimd(1:3,2)           = rprimd(1:3,3)           = tphysel,tsmear          = stmbias,tphysel,tsmear  =(a,i3,a) The header contain  additional records. Third record :(a,(12i4,8x)) istwfk= nband =(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
        ;
        local_858 = 0xc;
        local_88c = 0x1000;
        local_888 = *param_4;
        _gfortran_st_write(&local_88c);
        _gfortran_transfer_character
                  (&local_88c,
                                      
                   " ecut,ecutsm             =(a,3es18.10) ecut,ecutdg,ecutsm      =(a, es18.10) ecut_eff                = qptn(1:3)               = rprimd(1:3,1)           = rprimd(1:3,2)           = rprimd(1:3,3)           = tphysel,tsmear          = stmbias,tphysel,tsmear  =(a,i3,a) The header contain  additional records. Third record :(a,(12i4,8x)) istwfk= nband =(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
                   ,0x1a);
        _gfortran_transfer_real(&local_88c,param_2 + 0x61,8);
        _gfortran_transfer_real(&local_88c,param_2 + 0x65,8);
        _gfortran_st_write_done(&local_88c);
      }
      else {
        if (0x2b < param_2[2]) {
          local_884 = "hdr_io.F90";
          local_880 = 599;
          local_85c = 
          "(a,3es18.10) ecut,ecutdg,ecutsm      =(a, es18.10) ecut_eff                = qptn(1:3)               = rprimd(1:3,1)           = rprimd(1:3,2)           = rprimd(1:3,3)           = tphysel,tsmear          = stmbias,tphysel,tsmear  =(a,i3,a) The header contain  additional records. Third record :(a,(12i4,8x)) istwfk= nband =(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
          ;
          local_858 = 0xc;
          local_88c = 0x1000;
          local_888 = *param_4;
          _gfortran_st_write(&local_88c);
          _gfortran_transfer_character
                    (&local_88c,
                                          
                     " ecut,ecutdg,ecutsm      =(a, es18.10) ecut_eff                = qptn(1:3)               = rprimd(1:3,1)           = rprimd(1:3,2)           = rprimd(1:3,3)           = tphysel,tsmear          = stmbias,tphysel,tsmear  =(a,i3,a) The header contain  additional records. Third record :(a,(12i4,8x)) istwfk= nband =(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
                     ,0x1a);
          _gfortran_transfer_real(&local_88c,param_2 + 0x61,8);
          _gfortran_transfer_real(&local_88c,param_2 + 99,8);
          _gfortran_transfer_real(&local_88c,param_2 + 0x65,8);
          _gfortran_st_write_done(&local_88c);
        }
      }
      local_884 = "hdr_io.F90";
      local_880 = 0x25a;
      local_85c = 
      "(a, es18.10) ecut_eff                = qptn(1:3)               = rprimd(1:3,1)           = rprimd(1:3,2)           = rprimd(1:3,3)           = tphysel,tsmear          = stmbias,tphysel,tsmear  =(a,i3,a) The header contain  additional records. Third record :(a,(12i4,8x)) istwfk= nband =(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
      ;
      local_858 = 0xc;
      local_88c = 0x1000;
      local_888 = *param_4;
      _gfortran_st_write(&local_88c);
      _gfortran_transfer_character
                (&local_88c,
                                  
                 " ecut_eff                = qptn(1:3)               = rprimd(1:3,1)           = rprimd(1:3,2)           = rprimd(1:3,3)           = tphysel,tsmear          = stmbias,tphysel,tsmear  =(a,i3,a) The header contain  additional records. Third record :(a,(12i4,8x)) istwfk= nband =(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
                 ,0x1a);
      _gfortran_transfer_real(&local_88c,param_2 + 0x67,8);
      _gfortran_st_write_done(&local_88c);
      if (0x28 < param_2[2]) {
        local_884 = "hdr_io.F90";
        local_880 = 0x25d;
        local_85c = 
        "(a,3es18.10) ecut,ecutdg,ecutsm      =(a, es18.10) ecut_eff                = qptn(1:3)               = rprimd(1:3,1)           = rprimd(1:3,2)           = rprimd(1:3,3)           = tphysel,tsmear          = stmbias,tphysel,tsmear  =(a,i3,a) The header contain  additional records. Third record :(a,(12i4,8x)) istwfk= nband =(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
        ;
        local_858 = 0xc;
        local_88c = 0x1000;
        local_888 = *param_4;
        _gfortran_st_write(&local_88c);
        _gfortran_transfer_character
                  (&local_88c,
                                      
                   " qptn(1:3)               = rprimd(1:3,1)           = rprimd(1:3,2)           = rprimd(1:3,3)           = tphysel,tsmear          = stmbias,tphysel,tsmear  =(a,i3,a) The header contain  additional records. Third record :(a,(12i4,8x)) istwfk= nband =(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
                   ,0x1a);
        local_4b0 = 0x219;
        local_4a8 = 1;
        local_4a4 = 3;
        local_4ac = 1;
        local_4b8 = param_2 + 0x6f;
        local_4b4 = 0xffffffff;
        _gfortran_transfer_array(&local_88c,&local_4b8,8,0);
        _gfortran_st_write_done(&local_88c);
      }
      local_884 = "hdr_io.F90";
      local_880 = 0x260;
      local_85c = 
      "(a,3es18.10) ecut,ecutdg,ecutsm      =(a, es18.10) ecut_eff                = qptn(1:3)               = rprimd(1:3,1)           = rprimd(1:3,2)           = rprimd(1:3,3)           = tphysel,tsmear          = stmbias,tphysel,tsmear  =(a,i3,a) The header contain  additional records. Third record :(a,(12i4,8x)) istwfk= nband =(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
      ;
      local_858 = 0xc;
      local_88c = 0x1000;
      local_888 = *param_4;
      _gfortran_st_write(&local_88c);
      _gfortran_transfer_character
                (&local_88c,
                                  
                 " rprimd(1:3,1)           = rprimd(1:3,2)           = rprimd(1:3,3)           = tphysel,tsmear          = stmbias,tphysel,tsmear  =(a,i3,a) The header contain  additional records. Third record :(a,(12i4,8x)) istwfk= nband =(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
                 ,0x1a);
      local_4c8 = 0x219;
      local_4c0 = 1;
      local_4bc = 3;
      local_4c4 = 1;
      local_4d0 = param_2 + 0x75;
      local_4cc = 0xfffffffc;
      _gfortran_transfer_array(&local_88c,&local_4d0,8,0);
      _gfortran_st_write_done(&local_88c);
      local_884 = "hdr_io.F90";
      local_880 = 0x261;
      local_85c = 
      "(a,3es18.10) ecut,ecutdg,ecutsm      =(a, es18.10) ecut_eff                = qptn(1:3)               = rprimd(1:3,1)           = rprimd(1:3,2)           = rprimd(1:3,3)           = tphysel,tsmear          = stmbias,tphysel,tsmear  =(a,i3,a) The header contain  additional records. Third record :(a,(12i4,8x)) istwfk= nband =(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
      ;
      local_858 = 0xc;
      local_88c = 0x1000;
      local_888 = *param_4;
      _gfortran_st_write(&local_88c);
      _gfortran_transfer_character
                (&local_88c,
                                  
                 " rprimd(1:3,2)           = rprimd(1:3,3)           = tphysel,tsmear          = stmbias,tphysel,tsmear  =(a,i3,a) The header contain  additional records. Third record :(a,(12i4,8x)) istwfk= nband =(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
                 ,0x1a);
      local_4e0 = 0x219;
      local_4d8 = 1;
      local_4d4 = 3;
      local_4dc = 1;
      local_4e8 = param_2 + 0x7b;
      local_4e4 = 0xfffffffc;
      _gfortran_transfer_array(&local_88c,&local_4e8,8,0);
      _gfortran_st_write_done(&local_88c);
      local_884 = "hdr_io.F90";
      local_880 = 0x262;
      local_85c = 
      "(a,3es18.10) ecut,ecutdg,ecutsm      =(a, es18.10) ecut_eff                = qptn(1:3)               = rprimd(1:3,1)           = rprimd(1:3,2)           = rprimd(1:3,3)           = tphysel,tsmear          = stmbias,tphysel,tsmear  =(a,i3,a) The header contain  additional records. Third record :(a,(12i4,8x)) istwfk= nband =(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
      ;
      local_858 = 0xc;
      local_88c = 0x1000;
      local_888 = *param_4;
      _gfortran_st_write(&local_88c);
      _gfortran_transfer_character
                (&local_88c,
                                  
                 " rprimd(1:3,3)           = tphysel,tsmear          = stmbias,tphysel,tsmear  =(a,i3,a) The header contain  additional records. Third record :(a,(12i4,8x)) istwfk= nband =(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
                 ,0x1a);
      local_4f8 = 0x219;
      local_4f0 = 1;
      local_4ec = 3;
      local_4f4 = 1;
      local_500 = param_2 + 0x81;
      local_4fc = 0xfffffffc;
      _gfortran_transfer_array(&local_88c,&local_500,8,0);
      _gfortran_st_write_done(&local_88c);
      if ((param_2[2] == 0x28) || (param_2[2] == 0x29)) {
        local_884 = "hdr_io.F90";
        local_880 = 0x265;
        local_85c = 
        "(a,2es18.10) ecut,ecutsm             =(a,3es18.10) ecut,ecutdg,ecutsm      =(a, es18.10) ecut_eff                = qptn(1:3)               = rprimd(1:3,1)           = rprimd(1:3,2)           = rprimd(1:3,3)           = tphysel,tsmear          = stmbias,tphysel,tsmear  =(a,i3,a) The header contain  additional records. Third record :(a,(12i4,8x)) istwfk= nband =(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
        ;
        local_858 = 0xc;
        local_88c = 0x1000;
        local_888 = *param_4;
        _gfortran_st_write(&local_88c);
        _gfortran_transfer_character
                  (&local_88c,
                                      
                   " tphysel,tsmear          = stmbias,tphysel,tsmear  =(a,i3,a) The header contain  additional records. Third record :(a,(12i4,8x)) istwfk= nband =(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
                   ,0x1a);
        _gfortran_transfer_real(&local_88c,param_2 + 0x89,8);
        _gfortran_transfer_real(&local_88c,param_2 + 0x8b,8);
        _gfortran_st_write_done(&local_88c);
      }
      else {
        if (0x29 < param_2[2]) {
          local_884 = "hdr_io.F90";
          local_880 = 0x268;
          local_85c = 
          "(a,3es18.10) ecut,ecutdg,ecutsm      =(a, es18.10) ecut_eff                = qptn(1:3)               = rprimd(1:3,1)           = rprimd(1:3,2)           = rprimd(1:3,3)           = tphysel,tsmear          = stmbias,tphysel,tsmear  =(a,i3,a) The header contain  additional records. Third record :(a,(12i4,8x)) istwfk= nband =(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
          ;
          local_858 = 0xc;
          local_88c = 0x1000;
          local_888 = *param_4;
          _gfortran_st_write(&local_88c);
          _gfortran_transfer_character
                    (&local_88c,
                                          
                     " stmbias,tphysel,tsmear  =(a,i3,a) The header contain  additional records. Third record :(a,(12i4,8x)) istwfk= nband =(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
                     ,0x1a);
          _gfortran_transfer_real(&local_88c,param_2 + 0x87,8);
          _gfortran_transfer_real(&local_88c,param_2 + 0x89,8);
          _gfortran_transfer_real(&local_88c,param_2 + 0x8b,8);
          _gfortran_st_write_done(&local_88c);
        }
      }
      local_884 = "hdr_io.F90";
      local_880 = 0x26b;
      local_85c = &DAT_0807297f;
      local_858 = 3;
      local_88c = 0x1000;
      local_888 = *param_4;
      _gfortran_st_write(&local_88c);
      _gfortran_st_write_done(&local_88c);
      if (*param_3 == 3) {
        local_884 = "hdr_io.F90";
        local_880 = 0x26d;
        local_85c = 
        "(a,i3,a) The header contain  additional records. Third record :(a,(12i4,8x)) istwfk= nband =(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
        ;
        local_858 = 8;
        local_88c = 0x1000;
        local_888 = *param_4;
        _gfortran_st_write(&local_88c);
        _gfortran_transfer_character
                  (&local_88c,
                                      
                   " The header contain  additional records. Third record :(a,(12i4,8x)) istwfk= nband =(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
                   ,0x14);
        local_504 = param_2[7] + 2;
        _gfortran_transfer_integer(&local_88c,&local_504,4);
        _gfortran_transfer_character
                  (&local_88c,
                                      
                   " additional records. Third record :(a,(12i4,8x)) istwfk= nband =(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
                   ,0x14);
        _gfortran_st_write_done(&local_88c);
        goto LAB_08067a34;
      }
      local_884 = "hdr_io.F90";
      local_880 = 0x270;
      local_85c = &DAT_0807297f;
      local_858 = 3;
      local_88c = 0x1000;
      local_888 = *param_4;
      _gfortran_st_write(&local_88c);
      _gfortran_transfer_character
                (&local_88c,
                                  
                 " Third record :(a,(12i4,8x)) istwfk= nband =(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
                 ,0xf);
      _gfortran_st_write_done(&local_88c);
      local_884 = "hdr_io.F90";
      local_880 = 0x271;
      local_85c = 
      "(a,(12i4,8x)) istwfk= nband =(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
      ;
      local_858 = 0xd;
      local_88c = 0x1000;
      local_888 = *param_4;
      _gfortran_st_write(&local_88c);
      _gfortran_transfer_character
                (&local_88c,
                                  
                 " istwfk= nband =(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
                 ,8);
      _gfortran_transfer_array(&local_88c,param_2 + 0x13,4,0);
      _gfortran_st_write_done(&local_88c);
      local_884 = "hdr_io.F90";
      local_880 = 0x272;
      local_85c = 
      "(a,(12i4,8x)) istwfk= nband =(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
      ;
      local_858 = 0xd;
      local_88c = 0x1000;
      local_888 = *param_4;
      _gfortran_st_write(&local_88c);
      _gfortran_transfer_character
                (&local_88c,
                                  
                 " nband =(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
                 ,8);
      _gfortran_transfer_array(&local_88c,param_2 + 0x1f,4,0);
      _gfortran_st_write_done(&local_88c);
      local_884 = "hdr_io.F90";
      local_880 = 0x273;
      local_85c = 
      "(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
      ;
      local_858 = 0xd;
      local_88c = 0x1000;
      local_888 = *param_4;
      _gfortran_st_write(&local_88c);
      _gfortran_transfer_character
                (&local_88c,
                                  
                 " npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
                 ,8);
      uVar18 = 0;
      _gfortran_transfer_array(&local_88c,param_2 + 0x25,4,0);
      _gfortran_st_write_done(&local_88c);
      if (0x27 < param_2[2]) {
        local_884 = "hdr_io.F90";
        local_880 = 0x276;
        local_85c = 
        "(a,(12i4,8x)) istwfk= nband =(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
        ;
        local_858 = 0xd;
        local_88c = 0x1000;
        local_888 = *param_4;
        _gfortran_st_write(&local_88c);
        _gfortran_transfer_character
                  (&local_88c,
                   " so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  =",10
                  );
        uVar18 = 0;
        _gfortran_transfer_array(&local_88c,param_2 + 0x43,4,0);
        _gfortran_st_write_done(&local_88c);
      }
      if (0x27 < param_2[2]) {
        local_884 = "hdr_io.F90";
        local_880 = 0x27a;
        local_85c = &DAT_0807297f;
        local_858 = 3;
        local_88c = 0x1000;
        local_888 = *param_4;
        _gfortran_st_write(&local_88c);
        _gfortran_transfer_character
                  (&local_88c," symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  =",8
                  );
        _gfortran_st_write_done(&local_88c);
        local_884 = "hdr_io.F90";
        local_880 = 0x27b;
        local_85c = "(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  =";
        local_858 = 0xc;
        local_88c = 0x1000;
        local_888 = *param_4;
        _gfortran_st_write(&local_88c);
        uVar18 = 0;
        _gfortran_transfer_array(&local_88c,param_2 + 0x49,4,0);
        _gfortran_st_write_done(&local_88c);
      }
      local_884 = "hdr_io.F90";
      local_880 = 0x27e;
      local_85c = &DAT_0807297f;
      local_858 = 3;
      local_88c = 0x1000;
      local_888 = *param_4;
      _gfortran_st_write(&local_88c);
      uVar17 = 8;
      ppiVar14 = (int **)0x8072d09;
      _gfortran_transfer_character(&local_88c," symrel=(a,9i4,a,9i4)          (a,9i4) type  =",8);
      _gfortran_st_write_done(&local_88c);
      iVar3 = param_2[0xb];
      local_30 = 1;
      if (0 < iVar3 / 2) {
        do {
          local_884 = "hdr_io.F90";
          local_880 = 0x281;
          local_85c = "(a,9i4,a,9i4)          (a,9i4) type  =";
          local_858 = 0xd;
          local_88c = 0x1000;
          local_888 = *param_4;
          _gfortran_st_write(&local_88c,ppiVar14,uVar17,uVar18);
          _gfortran_transfer_character(&local_88c,"          (a,9i4) type  =",8);
          local_730 = (char *)0x10a;
          local_72c = param_2[0x52];
          local_728 = 1;
          local_724 = (1 - param_2[0x53]) + param_2[0x54];
          local_720 = (int *)param_2[0x55];
          local_71c = 1;
          local_718 = (1 - param_2[0x56]) + param_2[0x57];
          local_738 = (int *)(param_2[0x4f] +
                             ((param_2[0x53] - param_2[0x53]) * local_72c +
                              (param_2[0x56] - param_2[0x56]) * (int)local_720 +
                             param_2[0x58] * ((local_30 * 2 + -1) - param_2[0x59])) * 4);
          local_734 = 0;
          _gfortran_transfer_array(&local_88c,&local_738,4,0);
          _gfortran_transfer_character(&local_88c,"  (a,9i4) type  =",2);
          local_730 = (char *)0x10a;
          local_72c = param_2[0x52];
          local_728 = 1;
          local_724 = (1 - param_2[0x53]) + param_2[0x54];
          local_720 = (int *)param_2[0x55];
          local_71c = 1;
          local_718 = (1 - param_2[0x56]) + param_2[0x57];
          local_738 = (int *)(param_2[0x4f] +
                             ((param_2[0x53] - param_2[0x53]) * local_72c +
                              (param_2[0x56] - param_2[0x56]) * (int)local_720 +
                             param_2[0x58] * (local_30 * 2 - param_2[0x59])) * 4);
          local_734 = 0;
          uVar18 = 0;
          uVar17 = 4;
          ppiVar14 = &local_738;
          _gfortran_transfer_array(&local_88c);
          _gfortran_st_write_done(&local_88c);
          bVar13 = local_30 != iVar3 / 2;
          local_30 = local_30 + 1;
        } while (bVar13);
      }
      if ((param_2[0xb] / 2) * 2 != param_2[0xb]) {
        local_884 = "hdr_io.F90";
        local_880 = 0x283;
        local_85c = "(a,9i4) type  =";
        local_858 = 7;
        local_88c = 0x1000;
        local_888 = *param_4;
        _gfortran_st_write(&local_88c,ppiVar14,uVar17,uVar18);
        _gfortran_transfer_character(&local_88c,"          (a,9i4) type  =",8);
        local_730 = (char *)0x10a;
        local_72c = param_2[0x52];
        local_728 = 1;
        local_724 = (1 - param_2[0x53]) + param_2[0x54];
        local_720 = (int *)param_2[0x55];
        local_71c = 1;
        local_718 = (1 - param_2[0x56]) + param_2[0x57];
        local_738 = (int *)(param_2[0x4f] +
                           ((param_2[0x53] - param_2[0x53]) * local_72c +
                            (param_2[0x56] - param_2[0x56]) * (int)local_720 +
                           param_2[0x58] * (param_2[0xb] - param_2[0x59])) * 4);
        local_734 = 0;
        uVar18 = 0;
        uVar17 = 4;
        ppiVar14 = &local_738;
        _gfortran_transfer_array(&local_88c,ppiVar14,4,0);
        _gfortran_st_write_done(&local_88c);
      }
      local_884 = "hdr_io.F90";
      local_880 = 0x285;
      local_85c = 
      "(a,(12i4,8x)) istwfk= nband =(a,(10i5,8x)) npwarr= so_typat= symafm=(8x,24i3,8x) symrel=(a,9i4,a,9i4)          (a,9i4) type  ="
      ;
      local_858 = 0xd;
      local_88c = 0x1000;
      local_888 = *param_4;
      _gfortran_st_write(&local_88c,ppiVar14,uVar17,uVar18);
      _gfortran_transfer_character(&local_88c," type  =",8);
      uVar17 = 0;
      _gfortran_transfer_array(&local_88c,param_2 + 0x5b,4,0);
      _gfortran_st_write_done(&local_88c);
      local_884 = "hdr_io.F90";
      local_880 = 0x286;
      local_85c = &DAT_0807297f;
      local_858 = 3;
      local_88c = 0x1000;
      local_888 = *param_4;
      _gfortran_st_write(&local_88c);
      uVar18 = 0x3a;
      pcVar16 = 
      " kptns =                 (max 50 k-points will be written)(a,3es16.6) wtk =(a,10f6.2)   occ = tnons =(a,3f10.6,a,3f10.6)(a,3f10.6)(a,(10f6.2,8x))  znucl= Pseudopotential info :(a,a) title=(a,f6.2,a,f6.2,a,i3,a,i6,a,i3,a,i3)  znuclpsp=, zionpsp=, pspso=, pspdat=, pspcod=, pspxc=(a,i3)  lmn_size=  lmnmax  = Last record :(a,es16.6,es22.12,es16.6) residm,etot,fermie= xred =(a,i4,a,i1,a) rhoij(,"
      ;
      _gfortran_transfer_character
                (&local_88c,
                                  
                 " kptns =                 (max 50 k-points will be written)(a,3es16.6) wtk =(a,10f6.2)   occ = tnons =(a,3f10.6,a,3f10.6)(a,3f10.6)(a,(10f6.2,8x))  znucl= Pseudopotential info :(a,a) title=(a,f6.2,a,f6.2,a,i3,a,i6,a,i3,a,i3)  znuclpsp=, zionpsp=, pspso=, pspdat=, pspcod=, pspxc=(a,i3)  lmn_size=  lmnmax  = Last record :(a,es16.6,es22.12,es16.6) residm,etot,fermie= xred =(a,i4,a,i1,a) rhoij(,"
                 ,0x3a);
      _gfortran_st_write_done(&local_88c);
      iVar3 = param_2[6];
      if (0x32 < iVar3) {
        iVar3 = 0x32;
      }
      local_38 = 1;
      if (0 < iVar3) {
        do {
          local_884 = "hdr_io.F90";
          local_880 = 0x288;
          local_85c = 
          "(a,3es16.6) wtk =(a,10f6.2)   occ = tnons =(a,3f10.6,a,3f10.6)(a,3f10.6)(a,(10f6.2,8x))  znucl= Pseudopotential info :(a,a) title=(a,f6.2,a,f6.2,a,i3,a,i6,a,i3,a,i3)  znuclpsp=, zionpsp=, pspso=, pspdat=, pspcod=, pspxc=(a,i3)  lmn_size=  lmnmax  = Last record :(a,es16.6,es22.12,es16.6) residm,etot,fermie= xred =(a,i4,a,i1,a) rhoij(,"
          ;
          local_858 = 0xb;
          local_88c = 0x1000;
          local_888 = *param_4;
          _gfortran_st_write(&local_88c,pcVar16,uVar18,uVar17);
          _gfortran_transfer_character(&local_88c,"          (a,9i4) type  =",8);
          local_514 = 0x219;
          local_510 = param_2[0x90];
          local_50c = 1;
          local_508 = (1 - param_2[0x91]) + param_2[0x92];
          local_51c = param_2[0x8d] +
                      ((param_2[0x91] - param_2[0x91]) * local_510 +
                      param_2[0x93] * (local_38 - param_2[0x94])) * 8;
          local_518 = 0;
          uVar17 = 0;
          uVar18 = 8;
          pcVar16 = (char *)&local_51c;
          _gfortran_transfer_array(&local_88c);
          _gfortran_st_write_done(&local_88c);
          bVar13 = local_38 != iVar3;
          local_38 = local_38 + 1;
        } while (bVar13);
      }
      local_884 = "hdr_io.F90";
      local_880 = 0x28a;
      local_85c = &DAT_0807297f;
      local_858 = 3;
      local_88c = 0x1000;
      local_888 = *param_4;
      _gfortran_st_write(&local_88c,pcVar16,uVar18,uVar17);
      uVar18 = 6;
      piVar15 = (int *)0x8072d7d;
      _gfortran_transfer_character
                (&local_88c,
                                  
                 " wtk =(a,10f6.2)   occ = tnons =(a,3f10.6,a,3f10.6)(a,3f10.6)(a,(10f6.2,8x))  znucl= Pseudopotential info :(a,a) title=(a,f6.2,a,f6.2,a,i3,a,i6,a,i3,a,i3)  znuclpsp=, zionpsp=, pspso=, pspdat=, pspcod=, pspxc=(a,i3)  lmn_size=  lmnmax  = Last record :(a,es16.6,es22.12,es16.6) residm,etot,fermie= xred =(a,i4,a,i1,a) rhoij(,"
                 ,6);
      _gfortran_st_write_done(&local_88c);
      local_38 = 1;
      if (0 < param_2[6]) {
        uVar12 = (param_2[6] - 1U) / 10;
        while( true ) {
          local_884 = "hdr_io.F90";
          local_880 = 0x28c;
          local_85c = 
          "(a,10f6.2)   occ = tnons =(a,3f10.6,a,3f10.6)(a,3f10.6)(a,(10f6.2,8x))  znucl= Pseudopotential info :(a,a) title=(a,f6.2,a,f6.2,a,i3,a,i6,a,i3,a,i3)  znuclpsp=, zionpsp=, pspso=, pspdat=, pspcod=, pspxc=(a,i3)  lmn_size=  lmnmax  = Last record :(a,es16.6,es22.12,es16.6) residm,etot,fermie= xred =(a,i4,a,i1,a) rhoij(,"
          ;
          local_858 = 10;
          local_88c = 0x1000;
          local_888 = *param_4;
          _gfortran_st_write(&local_88c,piVar15,uVar18,uVar17);
          _gfortran_transfer_character(&local_88c,"          (a,9i4) type  =",8);
          local_520 = param_2[6];
          if (local_38 + 9 < param_2[6]) {
            local_520 = local_38 + 9;
          }
          local_52c = 0x219;
          local_528 = param_2[0xa8];
          local_524 = 1;
          local_520 = (1 - local_38) + local_520;
          local_534 = param_2[0xa5] + local_528 * (local_38 - param_2[0xa9]) * 8;
          local_530 = 0;
          uVar17 = 0;
          uVar18 = 8;
          piVar15 = &local_534;
          _gfortran_transfer_array(&local_88c);
          _gfortran_st_write_done(&local_88c);
          local_38 = local_38 + 10;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
        }
      }
      local_884 = "hdr_io.F90";
      local_880 = 0x28e;
      local_85c = &DAT_0807297f;
      local_858 = 3;
      local_88c = 0x1000;
      local_888 = *param_4;
      _gfortran_st_write(&local_88c,piVar15,uVar18,uVar17);
      uVar18 = 8;
      piVar15 = (int *)0x8072d8d;
      _gfortran_transfer_character
                (&local_88c,
                                  
                 "   occ = tnons =(a,3f10.6,a,3f10.6)(a,3f10.6)(a,(10f6.2,8x))  znucl= Pseudopotential info :(a,a) title=(a,f6.2,a,f6.2,a,i3,a,i6,a,i3,a,i3)  znuclpsp=, zionpsp=, pspso=, pspdat=, pspcod=, pspxc=(a,i3)  lmn_size=  lmnmax  = Last record :(a,es16.6,es22.12,es16.6) residm,etot,fermie= xred =(a,i4,a,i1,a) rhoij(,"
                 ,8);
      _gfortran_st_write_done(&local_88c);
      local_3c = 1;
      if (0 < *param_2) {
        uVar12 = (*param_2 - 1U) / 10;
        while( true ) {
          local_884 = "hdr_io.F90";
          local_880 = 0x290;
          local_85c = 
          "(a,10f6.2)   occ = tnons =(a,3f10.6,a,3f10.6)(a,3f10.6)(a,(10f6.2,8x))  znucl= Pseudopotential info :(a,a) title=(a,f6.2,a,f6.2,a,i3,a,i6,a,i3,a,i3)  znuclpsp=, zionpsp=, pspso=, pspdat=, pspcod=, pspxc=(a,i3)  lmn_size=  lmnmax  = Last record :(a,es16.6,es22.12,es16.6) residm,etot,fermie= xred =(a,i4,a,i1,a) rhoij(,"
          ;
          local_858 = 10;
          local_88c = 0x1000;
          local_888 = *param_4;
          _gfortran_st_write(&local_88c,piVar15,uVar18,uVar17);
          _gfortran_transfer_character(&local_88c,"          (a,9i4) type  =",8);
          local_538 = *param_2;
          if (local_3c + 9 < *param_2) {
            local_538 = local_3c + 9;
          }
          local_544 = 0x219;
          local_540 = param_2[0x99];
          local_53c = 1;
          local_538 = (1 - local_3c) + local_538;
          local_54c = param_2[0x96] + local_540 * (local_3c - param_2[0x9a]) * 8;
          local_548 = 0;
          uVar17 = 0;
          uVar18 = 8;
          piVar15 = &local_54c;
          _gfortran_transfer_array(&local_88c);
          _gfortran_st_write_done(&local_88c);
          local_3c = local_3c + 10;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
        }
      }
      local_884 = "hdr_io.F90";
      local_880 = 0x292;
      local_85c = &DAT_0807297f;
      local_858 = 3;
      local_88c = 0x1000;
      local_888 = *param_4;
      _gfortran_st_write(&local_88c,piVar15,uVar18,uVar17);
      uVar18 = 8;
      piVar15 = (int *)0x8072d95;
      _gfortran_transfer_character
                (&local_88c,
                                  
                 " tnons =(a,3f10.6,a,3f10.6)(a,3f10.6)(a,(10f6.2,8x))  znucl= Pseudopotential info :(a,a) title=(a,f6.2,a,f6.2,a,i3,a,i6,a,i3,a,i3)  znuclpsp=, zionpsp=, pspso=, pspdat=, pspcod=, pspxc=(a,i3)  lmn_size=  lmnmax  = Last record :(a,es16.6,es22.12,es16.6) residm,etot,fermie= xred =(a,i4,a,i1,a) rhoij(,"
                 ,8);
      _gfortran_st_write_done(&local_88c);
      iVar3 = param_2[0xb];
      local_30 = 1;
      if (0 < iVar3 / 2) {
        do {
          local_884 = "hdr_io.F90";
          local_880 = 0x295;
          local_85c = 
          "(a,3f10.6,a,3f10.6)(a,3f10.6)(a,(10f6.2,8x))  znucl= Pseudopotential info :(a,a) title=(a,f6.2,a,f6.2,a,i3,a,i6,a,i3,a,i3)  znuclpsp=, zionpsp=, pspso=, pspdat=, pspcod=, pspxc=(a,i3)  lmn_size=  lmnmax  = Last record :(a,es16.6,es22.12,es16.6) residm,etot,fermie= xred =(a,i4,a,i1,a) rhoij(,"
          ;
          local_858 = 0x13;
          local_88c = 0x1000;
          local_888 = *param_4;
          _gfortran_st_write(&local_88c,piVar15,uVar18,uVar17);
          _gfortran_transfer_character(&local_88c,"          (a,9i4) type  =",8);
          local_55c = 0x219;
          local_558 = param_2[0x9f];
          local_554 = 1;
          local_550 = (1 - param_2[0xa0]) + param_2[0xa1];
          local_564 = param_2[0x9c] +
                      ((param_2[0xa0] - param_2[0xa0]) * local_558 +
                      param_2[0xa2] * ((local_30 * 2 + -1) - param_2[0xa3])) * 8;
          local_560 = 0;
          _gfortran_transfer_array(&local_88c,&local_564,8,0);
          _gfortran_transfer_character(&local_88c,"  (a,9i4) type  =",2);
          local_574 = 0x219;
          local_570 = param_2[0x9f];
          local_56c = 1;
          local_568 = (1 - param_2[0xa0]) + param_2[0xa1];
          local_57c = param_2[0x9c] +
                      ((param_2[0xa0] - param_2[0xa0]) * local_570 +
                      param_2[0xa2] * (local_30 * 2 - param_2[0xa3])) * 8;
          local_578 = 0;
          uVar17 = 0;
          uVar18 = 8;
          piVar15 = &local_57c;
          _gfortran_transfer_array(&local_88c);
          _gfortran_st_write_done(&local_88c);
          bVar13 = local_30 != iVar3 / 2;
          local_30 = local_30 + 1;
        } while (bVar13);
      }
      if ((param_2[0xb] / 2) * 2 != param_2[0xb]) {
        local_884 = "hdr_io.F90";
        local_880 = 0x297;
        local_85c = 
        "(a,3f10.6)(a,(10f6.2,8x))  znucl= Pseudopotential info :(a,a) title=(a,f6.2,a,f6.2,a,i3,a,i6,a,i3,a,i3)  znuclpsp=, zionpsp=, pspso=, pspdat=, pspcod=, pspxc=(a,i3)  lmn_size=  lmnmax  = Last record :(a,es16.6,es22.12,es16.6) residm,etot,fermie= xred =(a,i4,a,i1,a) rhoij(,"
        ;
        local_858 = 10;
        local_88c = 0x1000;
        local_888 = *param_4;
        _gfortran_st_write(&local_88c,piVar15,uVar18,uVar17);
        _gfortran_transfer_character(&local_88c,"          (a,9i4) type  =",8);
        local_58c = 0x219;
        local_588 = param_2[0x9f];
        local_584 = 1;
        local_580 = (1 - param_2[0xa0]) + param_2[0xa1];
        local_594 = param_2[0x9c] +
                    ((param_2[0xa0] - param_2[0xa0]) * local_588 +
                    param_2[0xa2] * (param_2[0xb] - param_2[0xa3])) * 8;
        local_590 = 0;
        uVar17 = 0;
        uVar18 = 8;
        piVar15 = &local_594;
        _gfortran_transfer_array(&local_88c,piVar15,8,0);
        _gfortran_st_write_done(&local_88c);
      }
      local_884 = "hdr_io.F90";
      local_880 = 0x298;
      local_85c = 
      "(a,(10f6.2,8x))  znucl= Pseudopotential info :(a,a) title=(a,f6.2,a,f6.2,a,i3,a,i6,a,i3,a,i3)  znuclpsp=, zionpsp=, pspso=, pspdat=, pspcod=, pspxc=(a,i3)  lmn_size=  lmnmax  = Last record :(a,es16.6,es22.12,es16.6) residm,etot,fermie= xred =(a,i4,a,i1,a) rhoij(,"
      ;
      local_858 = 0xf;
      local_88c = 0x1000;
      local_888 = *param_4;
      _gfortran_st_write(&local_88c,piVar15,uVar18,uVar17);
      _gfortran_transfer_character
                (&local_88c,
                                  
                 "  znucl= Pseudopotential info :(a,a) title=(a,f6.2,a,f6.2,a,i3,a,i6,a,i3,a,i3)  znuclpsp=, zionpsp=, pspso=, pspdat=, pspcod=, pspxc=(a,i3)  lmn_size=  lmnmax  = Last record :(a,es16.6,es22.12,es16.6) residm,etot,fermie= xred =(a,i4,a,i1,a) rhoij(,"
                 ,8);
      puVar19 = (undefined *)0x0;
      _gfortran_transfer_array(&local_88c,param_2 + 0xc0,8,0);
      _gfortran_st_write_done(&local_88c);
      local_884 = "hdr_io.F90";
      local_880 = 0x299;
      local_85c = &DAT_0807297f;
      local_858 = 3;
      local_88c = 0x1000;
      local_888 = *param_4;
      _gfortran_st_write(&local_88c);
      _gfortran_st_write_done(&local_88c);
      local_884 = "hdr_io.F90";
      local_880 = 0x29b;
      local_85c = &DAT_0807297f;
      local_858 = 3;
      local_88c = 0x1000;
      local_888 = *param_4;
      _gfortran_st_write(&local_88c);
      uVar18 = 0x17;
      pcVar16 = 
      " Pseudopotential info :(a,a) title=(a,f6.2,a,f6.2,a,i3,a,i6,a,i3,a,i3)  znuclpsp=, zionpsp=, pspso=, pspdat=, pspcod=, pspxc=(a,i3)  lmn_size=  lmnmax  = Last record :(a,es16.6,es22.12,es16.6) residm,etot,fermie= xred =(a,i4,a,i1,a) rhoij(,"
      ;
      _gfortran_transfer_character
                (&local_88c,
                                  
                 " Pseudopotential info :(a,a) title=(a,f6.2,a,f6.2,a,i3,a,i6,a,i3,a,i3)  znuclpsp=, zionpsp=, pspso=, pspdat=, pspcod=, pspxc=(a,i3)  lmn_size=  lmnmax  = Last record :(a,es16.6,es22.12,es16.6) residm,etot,fermie= xred =(a,i4,a,i1,a) rhoij(,"
                 ,0x17);
      _gfortran_st_write_done(&local_88c);
      iVar3 = param_2[7];
      local_34 = 1;
      if (0 < iVar3) {
        do {
          local_884 = "hdr_io.F90";
          local_880 = 0x29d;
          local_85c = 
          "(a,a) title=(a,f6.2,a,f6.2,a,i3,a,i6,a,i3,a,i3)  znuclpsp=, zionpsp=, pspso=, pspdat=, pspcod=, pspxc=(a,i3)  lmn_size=  lmnmax  = Last record :(a,es16.6,es22.12,es16.6) residm,etot,fermie= xred =(a,i4,a,i1,a) rhoij(,"
          ;
          local_858 = 5;
          local_88c = 0x1000;
          local_888 = *param_4;
          _gfortran_st_write(&local_88c,pcVar16,uVar18);
          _gfortran_transfer_character
                    (&local_88c,
                                          
                     " title=(a,f6.2,a,f6.2,a,i3,a,i6,a,i3,a,i3)  znuclpsp=, zionpsp=, pspso=, pspdat=, pspcod=, pspxc=(a,i3)  lmn_size=  lmnmax  = Last record :(a,es16.6,es22.12,es16.6) residm,etot,fermie= xred =(a,i4,a,i1,a) rhoij(,"
                     ,7);
          puVar19 = (undefined *)(param_2[200] + (param_2[0xcb] * local_34 + param_2[0xc9]) * 0x84);
          _gfortran_string_trim(&local_598,&local_59c,0x84,puVar19);
          _gfortran_transfer_character(&local_88c,local_59c,local_598);
          if ((0 < local_598) && (local_59c != (void *)0x0)) {
            free(local_59c);
          }
          _gfortran_st_write_done(&local_88c);
          local_884 = "hdr_io.F90";
          local_880 = 0x2a1;
          local_85c = 
          "(a,f6.2,a,f6.2,a,i3,a,i6,a,i3,a,i3)  znuclpsp=, zionpsp=, pspso=, pspdat=, pspcod=, pspxc=(a,i3)  lmn_size=  lmnmax  = Last record :(a,es16.6,es22.12,es16.6) residm,etot,fermie= xred =(a,i4,a,i1,a) rhoij(,"
          ;
          local_858 = 0x23;
          local_88c = 0x1000;
          local_888 = *param_4;
          _gfortran_st_write(&local_88c);
          _gfortran_transfer_character
                    (&local_88c,
                                          
                     "  znuclpsp=, zionpsp=, pspso=, pspdat=, pspcod=, pspxc=(a,i3)  lmn_size=  lmnmax  = Last record :(a,es16.6,es22.12,es16.6) residm,etot,fermie= xred =(a,i4,a,i1,a) rhoij(,"
                     ,0xb);
          _gfortran_transfer_real
                    (&local_88c,param_2[0xba] + (param_2[0xbd] * local_34 + param_2[0xbb]) * 8,8);
          _gfortran_transfer_character
                    (&local_88c,
                                          
                     ", zionpsp=, pspso=, pspdat=, pspcod=, pspxc=(a,i3)  lmn_size=  lmnmax  = Last record :(a,es16.6,es22.12,es16.6) residm,etot,fermie= xred =(a,i4,a,i1,a) rhoij(,"
                     ,10);
          _gfortran_transfer_real
                    (&local_88c,param_2[0xb4] + (param_2[0xb7] * local_34 + param_2[0xb5]) * 8,8);
          _gfortran_transfer_character
                    (&local_88c,
                                          
                     ", pspso=, pspdat=, pspcod=, pspxc=(a,i3)  lmn_size=  lmnmax  = Last record :(a,es16.6,es22.12,es16.6) residm,etot,fermie= xred =(a,i4,a,i1,a) rhoij(,"
                     ,8);
          _gfortran_transfer_integer
                    (&local_88c,param_2[0x37] + (param_2[0x3a] * local_34 + param_2[0x38]) * 4,4);
          _gfortran_transfer_character
                    (&local_88c,
                                          
                     ", pspdat=, pspcod=, pspxc=(a,i3)  lmn_size=  lmnmax  = Last record :(a,es16.6,es22.12,es16.6) residm,etot,fermie= xred =(a,i4,a,i1,a) rhoij(,"
                     ,9);
          _gfortran_transfer_integer
                    (&local_88c,param_2[0x31] + (param_2[0x34] * local_34 + param_2[0x32]) * 4,4);
          _gfortran_transfer_character
                    (&local_88c,
                                          
                     ", pspcod=, pspxc=(a,i3)  lmn_size=  lmnmax  = Last record :(a,es16.6,es22.12,es16.6) residm,etot,fermie= xred =(a,i4,a,i1,a) rhoij(,"
                     ,9);
          _gfortran_transfer_integer
                    (&local_88c,param_2[0x2b] + (param_2[0x2e] * local_34 + param_2[0x2c]) * 4,4);
          _gfortran_transfer_character
                    (&local_88c,
                                          
                     ", pspxc=(a,i3)  lmn_size=  lmnmax  = Last record :(a,es16.6,es22.12,es16.6) residm,etot,fermie= xred =(a,i4,a,i1,a) rhoij(,"
                     ,8);
          pcVar16 = (char *)(param_2[0x3d] + (param_2[0x40] * local_34 + param_2[0x3e]) * 4);
          uVar18 = 4;
          _gfortran_transfer_integer(&local_88c);
          _gfortran_st_write_done(&local_88c);
          if (0x2b < param_2[2]) {
            if (param_2[0xf] == 1) {
              local_884 = "hdr_io.F90";
              local_880 = 0x2a4;
              local_85c = 
              "(a,i3)  lmn_size=  lmnmax  = Last record :(a,es16.6,es22.12,es16.6) residm,etot,fermie= xred =(a,i4,a,i1,a) rhoij(,"
              ;
              local_858 = 6;
              local_88c = 0x1000;
              local_888 = *param_4;
              _gfortran_st_write(&local_88c,pcVar16,uVar18);
              _gfortran_transfer_character
                        (&local_88c,
                                                  
                         "  lmn_size=  lmnmax  = Last record :(a,es16.6,es22.12,es16.6) residm,etot,fermie= xred =(a,i4,a,i1,a) rhoij(,"
                         ,0xb);
              pcVar16 = (char *)(param_2[0x19] + (param_2[0x1c] * local_34 + param_2[0x1a]) * 4);
              uVar18 = 4;
              _gfortran_transfer_integer(&local_88c);
              _gfortran_st_write_done(&local_88c);
            }
            else {
              local_884 = "hdr_io.F90";
              local_880 = 0x2a6;
              local_85c = 
              "(a,i3)  lmn_size=  lmnmax  = Last record :(a,es16.6,es22.12,es16.6) residm,etot,fermie= xred =(a,i4,a,i1,a) rhoij(,"
              ;
              local_858 = 6;
              local_88c = 0x1000;
              local_888 = *param_4;
              _gfortran_st_write(&local_88c,pcVar16,uVar18);
              _gfortran_transfer_character
                        (&local_88c,
                                                  
                         "  lmnmax  = Last record :(a,es16.6,es22.12,es16.6) residm,etot,fermie= xred =(a,i4,a,i1,a) rhoij(,"
                         ,0xb);
              pcVar16 = (char *)(param_2[0x19] + (param_2[0x1c] * local_34 + param_2[0x1a]) * 4);
              uVar18 = 4;
              _gfortran_transfer_integer(&local_88c);
              _gfortran_st_write_done(&local_88c);
            }
          }
          bVar13 = local_34 != iVar3;
          local_34 = local_34 + 1;
        } while (bVar13);
      }
      local_884 = "hdr_io.F90";
      local_880 = 0x2ac;
      local_85c = &DAT_0807297f;
      local_858 = 3;
      local_88c = 0x1000;
      local_888 = *param_4;
      _gfortran_st_write(&local_88c,pcVar16,uVar18);
      _gfortran_transfer_character
                (&local_88c,
                                  
                 "  First record :(a,a6,2i5).codvsn,headform,fform =  Second record :(a,4i6) bantot,intxc,ixc,natom  = ngfft(1:3),nkpt         =(a,2i6) nspden,nspinor          = nsppol,nsym,ntypat,occopt=(a,5i6)"
                 ,1);
      _gfortran_st_write_done(&local_88c);
      local_884 = "hdr_io.F90";
      local_880 = 0x2ad;
      local_85c = &DAT_0807297f;
      local_858 = 3;
      local_88c = 0x1000;
      local_888 = *param_4;
      _gfortran_st_write(&local_88c);
      _gfortran_transfer_character
                (&local_88c,
                                  
                 " Last record :(a,es16.6,es22.12,es16.6) residm,etot,fermie= xred =(a,i4,a,i1,a) rhoij(,"
                 ,0xe);
      _gfortran_st_write_done(&local_88c);
      local_884 = "hdr_io.F90";
      local_880 = 0x2af;
      local_85c = "(a,es16.6,es22.12,es16.6) residm,etot,fermie= xred =(a,i4,a,i1,a) rhoij(,";
      local_858 = 0x19;
      local_88c = 0x1000;
      local_888 = *param_4;
      _gfortran_st_write(&local_88c);
      _gfortran_transfer_character
                (&local_88c," residm,etot,fermie= xred =(a,i4,a,i1,a) rhoij(,",0x14);
      _gfortran_transfer_real(&local_88c,param_2 + 0x6d,8);
      _gfortran_transfer_real(&local_88c,param_2 + 0x69,8);
      _gfortran_transfer_real(&local_88c,param_2 + 0x6b,8);
      _gfortran_st_write_done(&local_88c);
      local_884 = "hdr_io.F90";
      local_880 = 0x2b0;
      local_85c = &DAT_0807297f;
      local_858 = 3;
      local_88c = 0x1000;
      local_888 = *param_4;
      _gfortran_st_write(&local_88c);
      iVar3 = 7;
      piVar15 = (int *)0x8072ea5;
      _gfortran_transfer_character(&local_88c," xred =(a,i4,a,i1,a) rhoij(,",7);
      _gfortran_st_write_done(&local_88c);
      uVar12 = param_2[5];
      local_88 = 1;
      if (0 < (int)uVar12) {
        do {
          local_884 = "hdr_io.F90";
          local_880 = 0x2b2;
          local_85c = 
          "(a,3es16.6) wtk =(a,10f6.2)   occ = tnons =(a,3f10.6,a,3f10.6)(a,3f10.6)(a,(10f6.2,8x))  znucl= Pseudopotential info :(a,a) title=(a,f6.2,a,f6.2,a,i3,a,i6,a,i3,a,i3)  znuclpsp=, zionpsp=, pspso=, pspdat=, pspcod=, pspxc=(a,i3)  lmn_size=  lmnmax  = Last record :(a,es16.6,es22.12,es16.6) residm,etot,fermie= xred =(a,i4,a,i1,a) rhoij(,"
          ;
          local_858 = 0xb;
          local_88c = 0x1000;
          local_888 = *param_4;
          _gfortran_st_write(&local_88c,piVar15,iVar3,puVar19);
          _gfortran_transfer_character(&local_88c,"          (a,9i4) type  =",8);
          local_5ac = 0x219;
          local_5a8 = param_2[0xae];
          local_5a4 = 1;
          local_5a0 = (1 - param_2[0xaf]) + param_2[0xb0];
          local_5b4 = param_2[0xab] +
                      ((param_2[0xaf] - param_2[0xaf]) * local_5a8 +
                      param_2[0xb1] * (local_88 - param_2[0xb2])) * 8;
          local_5b0 = 0;
          puVar19 = (undefined *)0x0;
          iVar3 = 8;
          piVar15 = &local_5b4;
          _gfortran_transfer_array(&local_88c);
          _gfortran_st_write_done(&local_88c);
          bVar13 = local_88 != uVar12;
          local_88 = local_88 + 1;
        } while (bVar13);
      }
      if (param_2[0xf] == 1) {
        local_24 = 1;
        if (1 < param_2[5]) {
          local_24 = param_2[5] - 1;
        }
        iVar10 = param_2[5];
        local_88 = 1;
        if ((int)local_24 < 1) {
          if (iVar10 < 2) {
            local_8a4 = (1U - iVar10) / -local_24;
            goto LAB_08067155;
          }
        }
        else {
          if (0 < iVar10) {
            local_8a4 = (iVar10 - 1U) / local_24;
LAB_08067155:
            while( true ) {
              iVar10 = param_2[8];
              local_a8 = 1;
              if (0 < iVar10) {
                do {
                  local_884 = "hdr_io.F90";
                  local_880 = 699;
                  local_85c = "(a,i4,a,i1,a) rhoij(,";
                  local_858 = 0xd;
                  local_88c = 0x1000;
                  local_888 = *param_4;
                  _gfortran_st_write(&local_88c,piVar15,iVar3,puVar19);
                  _gfortran_transfer_character(&local_88c," rhoij(,",7);
                  _gfortran_transfer_integer(&local_88c,&local_88,4);
                  _gfortran_transfer_character(&local_88c,",",1);
                  _gfortran_transfer_integer(&local_88c,&local_a8,4);
                  _gfortran_transfer_character(&local_88c,&DAT_08072ec4,0x30);
                  _gfortran_st_write_done(&local_88c);
                  iVar3 = *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 +
                                   param_2[0xce] + 0xd0);
                  local_5dc = 0x219;
                  local_5d8 = *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 +
                                       param_2[0xce] + 0xcc);
                  local_5d4 = 1;
                  local_5d0 = (1 - iVar3) +
                              *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 +
                                       param_2[0xce] + 0xd4);
                  local_5e4 = (void *)((local_5d8 *
                                        (iVar3 - *(int *)((param_2[0xd1] * local_88 + param_2[0xcf])
                                                          * 0x108 + param_2[0xce] + 0xd0)) +
                                       *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 +
                                                param_2[0xce] + 0xd8) *
                                       (local_a8 -
                                       *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 +
                                                param_2[0xce] + 0xdc))) * 8 +
                                      *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 +
                                               param_2[0xce] + 0xc0));
                  local_5e0 = 0;
                  pvVar5 = (void *)_gfortran_internal_pack(&local_5e4);
                  iVar3 = *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 +
                                   param_2[0xce] + 0x58);
                  local_5c4 = 0x109;
                  local_5c0 = *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 +
                                       param_2[0xce] + 0x54);
                  local_5bc = 1;
                  local_5b8 = (1 - iVar3) +
                              *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 +
                                       param_2[0xce] + 0x5c);
                  local_5cc = (void *)((local_5c0 *
                                        (iVar3 - *(int *)((param_2[0xd1] * local_88 + param_2[0xcf])
                                                          * 0x108 + param_2[0xce] + 0x58)) +
                                       *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 +
                                                param_2[0xce] + 0x60) *
                                       (local_a8 -
                                       *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 +
                                                param_2[0xce] + 100))) * 4 +
                                      *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 +
                                               param_2[0xce] + 0x48));
                  local_5c8 = 0;
                  __ptr = (void *)_gfortran_internal_pack(&local_5cc);
                  iVar3 = param_2[0x19] + (param_2[0x1c] * local_a8 + param_2[0x1a]) * 4;
                  piVar15 = (int *)(*(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 +
                                             param_2[0xce] + 0x18) +
                                   (*(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 +
                                             param_2[0xce] + 0x24) * local_a8 +
                                   *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 +
                                            param_2[0xce] + 0x1c)) * 4);
                  puVar19 = &DAT_08072ef4;
                  print_ij(pvVar5);
                  if ((local_5e4 != pvVar5) && (pvVar5 != (void *)0x0)) {
                    free(pvVar5);
                  }
                  if ((local_5cc != __ptr) && (__ptr != (void *)0x0)) {
                    free(__ptr);
                  }
                  bVar13 = local_a8 != iVar10;
                  local_a8 = local_a8 + 1;
                } while (bVar13);
              }
              local_88 = local_88 + local_24;
              if (local_8a4 == 0) break;
              local_8a4 = local_8a4 - 1;
            }
          }
        }
      }
      if (*param_3 == 3) {
        local_884 = "hdr_io.F90";
        local_880 = 0x2c4;
        local_85c = &DAT_0807297f;
        local_858 = 3;
        local_88c = 0x1000;
        local_888 = *param_4;
        _gfortran_st_write(&local_88c,piVar15,iVar3,puVar19);
        _gfortran_transfer_character
                  (&local_88c,
                                      
                   " End the ECHO of part of the ABINIT file header  End the ECHO of the ABINIT file header "
                   ,0x30);
        _gfortran_st_write_done(&local_88c);
      }
      if (*param_3 == 4) {
        local_884 = "hdr_io.F90";
        local_880 = 0x2c5;
        local_85c = &DAT_0807297f;
        local_858 = 3;
        local_88c = 0x1000;
        local_888 = *param_4;
        _gfortran_st_write(&local_88c);
        _gfortran_transfer_character(&local_88c," End the ECHO of the ABINIT file header ",0x28);
        _gfortran_st_write_done(&local_88c);
      }
      local_884 = "hdr_io.F90";
      local_880 = 0x2c7;
      local_85c = "(a)";
      local_858 = 3;
      local_88c = 0x1000;
      local_888 = *param_4;
      _gfortran_st_write(&local_88c);
      _gfortran_transfer_character
                (&local_88c,
                                  
                 " =============================================================================== ECHO of part of the ABINIT file header  ECHO of the ABINIT file header   First record :(a,a6,2i5).codvsn,headform,fform =  Second record :(a,4i6) bantot,intxc,ixc,natom  = ngfft(1:3),nkpt         =(a,2i6) nspden,nspinor          = nsppol,nsym,ntypat,occopt=(a,5i6)"
                 ,0x50);
      _gfortran_st_write_done(&local_88c);
      goto LAB_08067a34;
    }
    if (*param_3 == 2) {
      local_450 = "hdr_io.F90";
      local_44c = 0x1ec;
      local_458 = 0;
      local_454 = *param_4;
      _gfortran_st_rewind(&local_458);
    }
    local_84 = 0x35;
    local_884 = "hdr_io.F90";
    local_880 = 0x1f1;
    local_88c = 0;
    local_888 = *param_4;
    _gfortran_st_write(&local_88c);
    _gfortran_transfer_character(&local_88c,param_2 + 0xc6,6);
    _gfortran_transfer_integer(&local_88c,&local_84,4);
    _gfortran_transfer_integer(&local_88c,param_1,4);
    _gfortran_st_write_done(&local_88c);
    local_884 = "hdr_io.F90";
    local_880 = 0x1f8;
    local_88c = 0;
    local_888 = *param_4;
    _gfortran_st_write(&local_88c);
    _gfortran_transfer_integer(&local_88c,param_2,4);
    _gfortran_transfer_integer(&local_88c,param_2 + 1,4);
    _gfortran_transfer_integer(&local_88c,param_2 + 3,4);
    _gfortran_transfer_integer(&local_88c,param_2 + 4,4);
    _gfortran_transfer_integer(&local_88c,param_2 + 5,4);
    local_468 = 0x109;
    local_460 = 1;
    local_45c = 3;
    local_464 = 1;
    local_470 = param_2 + 0x10;
    local_46c = 0xffffffff;
    _gfortran_transfer_array(&local_88c,&local_470,4,0);
    _gfortran_transfer_integer(&local_88c,param_2 + 6,4);
    _gfortran_transfer_integer(&local_88c,param_2 + 8,4);
    _gfortran_transfer_integer(&local_88c,param_2 + 9,4);
    _gfortran_transfer_integer(&local_88c,param_2 + 10,4);
    _gfortran_transfer_integer(&local_88c,param_2 + 0xb,4);
    _gfortran_transfer_integer(&local_88c,param_2 + 7,4);
    _gfortran_transfer_integer(&local_88c,param_2 + 0xc,4);
    _gfortran_transfer_integer(&local_88c,param_2 + 0xd,4);
    _gfortran_transfer_integer(&local_88c,param_2 + 0xe,4);
    _gfortran_transfer_integer(&local_88c,param_2 + 0xf,4);
    _gfortran_transfer_real(&local_88c,param_2 + 0x61,8);
    _gfortran_transfer_real(&local_88c,param_2 + 99,8);
    _gfortran_transfer_real(&local_88c,param_2 + 0x65,8);
    _gfortran_transfer_real(&local_88c,param_2 + 0x67,8);
    local_480 = 0x219;
    local_478 = 1;
    local_474 = 3;
    local_47c = 1;
    local_488 = param_2 + 0x6f;
    local_484 = 0xffffffff;
    _gfortran_transfer_array(&local_88c,&local_488,8,0);
    local_730 = (char *)0x21a;
    local_728 = 1;
    local_724 = 3;
    local_72c = 1;
    local_71c = 1;
    local_718 = 3;
    local_720 = (int *)0x3;
    local_738 = param_2 + 0x75;
    local_734 = 0xfffffffc;
    _gfortran_transfer_array(&local_88c,&local_738,8,0);
    _gfortran_transfer_real(&local_88c,param_2 + 0x87,8);
    _gfortran_transfer_real(&local_88c,param_2 + 0x89,8);
    _gfortran_transfer_real(&local_88c,param_2 + 0x8b,8);
    _gfortran_st_write_done(&local_88c);
    local_884 = "hdr_io.F90";
    local_880 = 0x1fd;
    local_88c = 0;
    local_888 = *param_4;
    _gfortran_st_write(&local_88c);
    _gfortran_transfer_array(&local_88c,param_2 + 0x13,4,0);
    _gfortran_transfer_array(&local_88c,param_2 + 0x1f,4,0);
    _gfortran_transfer_array(&local_88c,param_2 + 0x25,4,0);
    _gfortran_transfer_array(&local_88c,param_2 + 0x43,4,0);
    _gfortran_transfer_array(&local_88c,param_2 + 0x49,4,0);
    _gfortran_transfer_array(&local_88c,param_2 + 0x4f,4,0);
    _gfortran_transfer_array(&local_88c,param_2 + 0x5b,4,0);
    _gfortran_transfer_array(&local_88c,param_2 + 0x8d,8,0);
    _gfortran_transfer_array(&local_88c,param_2 + 0x96,8,0);
    _gfortran_transfer_array(&local_88c,param_2 + 0x9c,8,0);
    _gfortran_transfer_array(&local_88c,param_2 + 0xc0,8,0);
    piVar15 = param_2 + 0xa5;
    uVar18 = 8;
    _gfortran_transfer_array(&local_88c,piVar15,8,0);
    _gfortran_st_write_done(&local_88c);
    iVar3 = param_2[7];
    local_34 = 1;
    if (0 < iVar3) {
      do {
        local_884 = "hdr_io.F90";
        local_880 = 0x207;
        local_88c = 0;
        local_888 = *param_4;
        _gfortran_st_write(&local_88c,piVar15,uVar18);
        _gfortran_transfer_character
                  (&local_88c,param_2[200] + (param_2[0xcb] * local_34 + param_2[0xc9]) * 0x84,0x84)
        ;
        _gfortran_transfer_real
                  (&local_88c,param_2[0xba] + (param_2[0xbd] * local_34 + param_2[0xbb]) * 8,8);
        _gfortran_transfer_real
                  (&local_88c,param_2[0xb4] + (param_2[0xb7] * local_34 + param_2[0xb5]) * 8,8);
        _gfortran_transfer_integer
                  (&local_88c,param_2[0x37] + (param_2[0x3a] * local_34 + param_2[0x38]) * 4,4);
        _gfortran_transfer_integer
                  (&local_88c,param_2[0x31] + (param_2[0x34] * local_34 + param_2[0x32]) * 4,4);
        _gfortran_transfer_integer
                  (&local_88c,param_2[0x2b] + (param_2[0x2e] * local_34 + param_2[0x2c]) * 4,4);
        _gfortran_transfer_integer
                  (&local_88c,param_2[0x3d] + (param_2[0x40] * local_34 + param_2[0x3e]) * 4,4);
        piVar15 = (int *)(param_2[0x19] + (param_2[0x1c] * local_34 + param_2[0x1a]) * 4);
        uVar18 = 4;
        _gfortran_transfer_integer(&local_88c);
        _gfortran_st_write_done(&local_88c);
        bVar13 = local_34 != iVar3;
        local_34 = local_34 + 1;
      } while (bVar13);
    }
    local_884 = "hdr_io.F90";
    local_880 = 0x210;
    local_88c = 0;
    local_888 = *param_4;
    _gfortran_st_write(&local_88c,piVar15,uVar18);
    _gfortran_transfer_real(&local_88c,param_2 + 0x6d,8);
    _gfortran_transfer_array(&local_88c,param_2 + 0xab,8,0);
    _gfortran_transfer_real(&local_88c,param_2 + 0x69,8);
    _gfortran_transfer_real(&local_88c,param_2 + 0x6b,8);
    _gfortran_st_write_done(&local_88c);
    if (param_2[0xf] != 1) goto LAB_08067a34;
    local_2d0 = 0x10a;
    local_2c8 = 1;
    local_2c4 = param_2[8];
    local_2cc = 1;
    local_2c0 = param_2[8];
    if ((int)local_2c0 < 0) {
      local_2c0 = 0;
    }
    local_2bc = 1;
    local_2b8 = param_2[5];
    iVar3 = param_2[5];
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    uVar12 = ~local_2c0;
    if (param_2[5] < 1 || param_2[8] < 1) {
      sVar4 = 0;
    }
    else {
      sVar4 = iVar3 * local_2c0 * 4;
    }
    if (local_2d8 == (void *)0x0) {
      if ((int)sVar4 < 0) {
        sVar4 = _gfortran_runtime_error
                          (
                          "Attempt to allocate negative amount of memory. Possible integer overflow"
                          );
      }
      if ((int)sVar4 < 1) {
        sVar4 = 1;
      }
      pvVar5 = malloc(sVar4);
      if (pvVar5 == (void *)0x0) {
        pvVar5 = (void *)_gfortran_os_error("Out of memory");
      }
      local_918 = param_2[5];
      local_88 = 1;
      local_2d8 = pvVar5;
      local_2d4 = uVar12;
      if (0 < (int)local_918) goto LAB_0806333e;
    }
    else {
      _gfortran_runtime_error_at
                ("At line 531 of file hdr_io.F90",
                 "Attempting to allocate already allocated array \'%s\'",&DAT_0807284f);
LAB_0806333e:
      do {
        iVar3 = *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0x18);
        iVar10 = *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0x1c)
        ;
        iVar6 = param_2[8];
        iVar1 = *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0x24);
        iVar9 = 1;
        while (iVar9 <= iVar6) {
          *(undefined4 *)
           ((int)local_2d8 + (local_2cc * iVar9 + local_2c0 * local_88 + local_2d4) * 4) =
               *(undefined4 *)(iVar3 + (iVar9 * iVar1 + iVar10) * 4);
          iVar9 = iVar9 + 1;
        }
        bVar13 = local_88 != local_918;
        local_88 = local_88 + 1;
      } while (bVar13);
    }
    local_884 = "hdr_io.F90";
    local_880 = 0x217;
    local_88c = 0;
    local_888 = *param_4;
    _gfortran_st_write(&local_88c);
    uVar12 = param_2[5];
    local_88 = 1;
    if (0 < (int)uVar12) {
      do {
        iVar3 = param_2[8];
        local_a8 = 1;
        if (0 < iVar3) {
          do {
            _gfortran_transfer_integer
                      (&local_88c,
                       (void *)((int)local_2d8 +
                               (local_2cc * local_a8 + local_88 * local_2c0 + local_2d4) * 4),4);
            bVar13 = local_a8 != iVar3;
            local_a8 = local_a8 + 1;
          } while (bVar13);
        }
        bVar13 = local_88 != uVar12;
        local_88 = local_88 + 1;
      } while (bVar13);
    }
    _gfortran_st_write_done(&local_88c);
    local_8c = 0;
    iVar3 = local_2bc;
    while (iVar3 <= local_2b8) {
      iVar10 = local_2c8;
      while (iVar10 <= local_2c4) {
        local_8c = local_8c +
                   *(int *)((int)local_2d8 +
                           (local_2cc * iVar10 + local_2c0 * iVar3 + local_2d4) * 4);
        iVar10 = iVar10 + 1;
      }
      iVar3 = iVar3 + 1;
    }
    local_98 = 0x109;
    local_90 = 1;
    local_94 = 1;
    iVar3 = 0;
    if (-1 < local_8c) {
      iVar3 = local_8c;
    }
    if (local_8c < 1) {
      sVar4 = 0;
    }
    else {
      sVar4 = iVar3 * 4;
    }
    acell[3]._4_4_ = local_8c;
    if (local_a0 == (void *)0x0) {
      if ((int)sVar4 < 0) {
        sVar4 = _gfortran_runtime_error
                          (
                          "Attempt to allocate negative amount of memory. Possible integer overflow"
                          );
      }
      if ((int)sVar4 < 1) {
        sVar4 = 1;
      }
      pvVar5 = malloc(sVar4);
      if (pvVar5 == (void *)0x0) {
        pvVar5 = (void *)_gfortran_os_error("Out of memory");
      }
      local_9c = -1;
      local_6c = 1;
      iVar3 = 0;
      if (-1 < acell[3]._4_4_) {
        iVar3 = acell[3]._4_4_;
      }
      local_a0 = pvVar5;
      if (acell[3]._4_4_ < 1) goto LAB_08063750;
      sVar4 = iVar3 * 8;
    }
    else {
      _gfortran_runtime_error_at
                ("At line 537 of file hdr_io.F90",
                 "Attempting to allocate already allocated array \'%s\'","ibuffer");
LAB_08063750:
      sVar4 = 0;
    }
    if (buffer[0]._0_4_ == (void *)0x0) {
      if ((int)sVar4 < 0) {
        sVar4 = _gfortran_runtime_error
                          (
                          "Attempt to allocate negative amount of memory. Possible integer overflow"
                          );
      }
      if ((int)sVar4 < 1) {
        sVar4 = 1;
      }
      pvVar5 = malloc(sVar4);
      if (pvVar5 == (void *)0x0) {
        pvVar5 = (void *)_gfortran_os_error("Out of memory");
      }
      buffer[0]._4_4_ = -1;
      local_3c = 0;
      local_8f0 = param_2[5];
      local_88 = 1;
      buffer[0]._0_4_ = pvVar5;
      if (0 < (int)local_8f0) goto LAB_080637ee;
    }
    else {
      _gfortran_runtime_error_at
                ("At line 537 of file hdr_io.F90",
                 "Attempting to allocate already allocated array \'%s\'","buffer");
LAB_080637ee:
      do {
        iVar3 = param_2[8];
        local_a8 = 1;
        if (0 < iVar3) {
          do {
            iVar10 = *(int *)((int)local_2d8 +
                             (local_2cc * local_a8 + local_88 * local_2c0 + local_2d4) * 4);
            iVar6 = *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] +
                            0x48);
            iVar1 = *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] +
                            0x4c);
            iVar9 = *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] +
                            0x60);
            iVar2 = *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] +
                            0x54);
            iVar11 = 1;
            while (iVar11 <= iVar10) {
              *(undefined4 *)((int)local_a0 + (local_9c + (iVar11 + local_3c) * local_94) * 4) =
                   *(undefined4 *)(iVar6 + (iVar11 * iVar2 + iVar9 * local_a8 + iVar1) * 4);
              iVar11 = iVar11 + 1;
            }
            iVar6 = *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] +
                            0xc0);
            iVar1 = *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] +
                            0xc4);
            iVar9 = *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] +
                            0xd8);
            iVar2 = *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] +
                            0xcc);
            iVar11 = 1;
            while (iVar11 <= iVar10) {
              *(undefined8 *)
               ((int)buffer[0]._0_4_ + (buffer[0]._4_4_ + (iVar11 + local_3c) * local_6c) * 8) =
                   *(undefined8 *)(iVar6 + (iVar11 * iVar2 + iVar9 * local_a8 + iVar1) * 8);
              iVar11 = iVar11 + 1;
            }
            local_3c = local_3c + iVar10;
            bVar13 = local_a8 != iVar3;
            local_a8 = local_a8 + 1;
          } while (bVar13);
        }
        bVar13 = local_88 != local_8f0;
        local_88 = local_88 + 1;
      } while (bVar13);
    }
    local_884 = "hdr_io.F90";
    local_880 = 0x223;
    local_88c = 0;
    local_888 = *param_4;
    _gfortran_st_write(&local_88c);
    _gfortran_transfer_array(&local_88c,&local_a0,4,0);
    _gfortran_transfer_array(&local_88c,buffer,8,0);
    _gfortran_st_write_done(&local_88c);
    if (local_a0 == (void *)0x0) {
      _gfortran_runtime_error_at
                ("At line 548 of file hdr_io.F90","Attempt to DEALLOCATE unallocated \'%s\'",
                 "ibuffer");
    }
    free(local_a0);
    local_a0 = (void *)0x0;
    if (buffer[0]._0_4_ == (void *)0x0) {
      _gfortran_runtime_error_at
                ("At line 548 of file hdr_io.F90","Attempt to DEALLOCATE unallocated \'%s\'",
                 "buffer");
    }
    free(buffer[0]._0_4_);
    buffer[0]._0_4_ = (void *)0x0;
    if (local_2d8 == (void *)0x0) {
      _gfortran_runtime_error_at
                ("At line 548 of file hdr_io.F90","Attempt to DEALLOCATE unallocated \'%s\'",
                 &DAT_0807284f);
    }
    free(local_2d8);
    local_2d8 = (void *)0x0;
    goto LAB_08067a34;
  }
  if (*param_3 == 1) {
    local_2f8 = "hdr_io.F90";
    local_2f4 = 0xae;
    local_300 = 0;
    local_2fc = *param_4;
    _gfortran_st_rewind(&local_300);
  }
  local_730 = "hdr_io.F90";
  local_72c = 0xb3;
  local_a4 = 0;
  local_720 = &local_a4;
  local_738 = (int *)0x20;
  local_734 = *param_4;
  _gfortran_st_read(&local_738);
  _gfortran_transfer_character(&local_738,&local_7e,6);
  _gfortran_transfer_integer(&local_738,param_1,4);
  _gfortran_st_read_done(&local_738);
  if (local_a4 != 0) {
    *param_1 = 0;
    goto LAB_08067a34;
  }
  if (((((*param_1 == 1) || (*param_1 == 2)) || (*param_1 == 0x33)) ||
      ((*param_1 == 0x34 || (*param_1 == 0x65)))) || (*param_1 == 0x66)) {
    local_84 = 0x16;
  }
  else {
    local_314 = "hdr_io.F90";
    local_310 = 0xc5;
    local_31c = 0;
    local_318 = *param_4;
    _gfortran_st_backspace(&local_31c);
    local_730 = "hdr_io.F90";
    local_72c = 0xc6;
    local_738 = (int *)0x0;
    local_734 = *param_4;
    _gfortran_st_read(&local_738);
    _gfortran_transfer_character(&local_738,&local_7e,6);
    _gfortran_transfer_integer(&local_738,&local_84,4);
    _gfortran_transfer_integer(&local_738,param_1,4);
    _gfortran_st_read_done(&local_738);
    if ((((local_84 != 0x17) && (local_84 != 0x22)) &&
        ((local_84 != 0x28 && (((local_84 != 0x29 && (local_84 != 0x2a)) && (local_84 != 0x2c))))))
       && (local_84 != 0x35)) {
      local_730 = "hdr_io.F90";
      local_72c = 0xd3;
      local_6f8 = local_2a4;
      local_6f4 = 500;
      local_70c = 0;
      local_734 = 0;
      local_708 = "(4a,i3,3a,i8,3a)\n hdr_io : ERROR -";
      local_704 = 0x10;
      local_738 = (int *)0x5000;
      _gfortran_st_write(&local_738);
      _gfortran_transfer_character(&local_738,"\n hdr_io : ERROR -",1);
      _gfortran_transfer_character(&local_738," hdr_io : ERROR -",0x11);
      _gfortran_transfer_character(&local_738,"\n hdr_io : ERROR -",1);
      _gfortran_transfer_character
                (&local_738,
                                  
                 "  The first line of the (WF, DEN or POT) file read in unit  is erroneous.  headform is "
                 ,0x3b);
      _gfortran_transfer_integer(&local_738,param_4,4);
      _gfortran_transfer_character(&local_738," is erroneous.  headform is ",0xe);
      _gfortran_transfer_character(&local_738,"\n hdr_io : ERROR -",1);
      _gfortran_transfer_character(&local_738,"  headform is ",0xe);
      _gfortran_transfer_integer(&local_738,&local_84,4);
      _gfortran_transfer_character
                (&local_738,", while it should be 23, 34, 40, 41, 42, 44 or 53.",0x32);
      _gfortran_transfer_character(&local_738,"\n hdr_io : ERROR -",1);
      _gfortran_transfer_character
                (&local_738,"  Action : check the correctness of your file.COLL",0x2e);
      _gfortran_st_write_done(&local_738);
      wrtout(&DAT_08072630,local_2a4,"COLL",500,4);
      leave_new("COLL",4);
    }
  }
  pcVar16 = (char *)0x6;
  ppiVar14 = &local_7e;
  memmove(param_2 + 0xc6,ppiVar14,6);
  param_2[2] = local_84;
  param_2[8] = 1;
  param_2[9] = 1;
  param_2[0xd] = 1;
  param_2[0xe] = 1;
  param_2[0xf] = 0;
  *(undefined8 *)(param_2 + 0x61) = 0;
  *(undefined8 *)(param_2 + 99) = 0;
  *(undefined8 *)(param_2 + 0x65) = 0;
  iVar3 = 1;
  while (iVar3 < 4) {
    *(undefined8 *)(param_2 + (iVar3 + -1) * 2 + 0x6f) = 0;
    iVar3 = iVar3 + 1;
  }
  *(undefined8 *)(param_2 + 0x87) = 0;
  *(undefined8 *)(param_2 + 0x89) = 0;
  *(undefined8 *)(param_2 + 0x8b) = 0;
  if (local_84 == 0x16) {
    local_884 = "hdr_io.F90";
    local_880 = 0xf7;
    local_88c = 0;
    local_888 = *param_4;
    _gfortran_st_read(&local_88c);
    _gfortran_transfer_integer(&local_88c,&bantot,4);
    _gfortran_transfer_integer(&local_88c,param_2 + 1,4);
    _gfortran_transfer_integer(&local_88c,param_2 + 3,4);
    _gfortran_transfer_integer(&local_88c,param_2 + 4,4);
    _gfortran_transfer_integer(&local_88c,&local_2ac,4);
    local_32c = 0x109;
    local_324 = 1;
    local_320 = 3;
    local_328 = 1;
    local_334 = param_2 + 0x10;
    local_330 = 0xffffffff;
    _gfortran_transfer_array(&local_88c,&local_334,4,0);
    _gfortran_transfer_integer(&local_88c,&local_2b0,4);
    _gfortran_transfer_integer(&local_88c,&local_2dc,4);
    _gfortran_transfer_integer(&local_88c,&local_2e0,4);
    _gfortran_transfer_integer(&local_88c,&local_2e4,4);
    local_344 = 0x219;
    local_33c = 1;
    local_338 = 3;
    local_340 = 1;
    local_34c = acell;
    local_348 = 0xffffffff;
    _gfortran_transfer_array(&local_88c,&local_34c,8,0);
    _gfortran_transfer_real(&local_88c,param_2 + 0x67,8);
    local_730 = (char *)0x21a;
    local_728 = 1;
    local_724 = 3;
    local_72c = 1;
    local_71c = 1;
    local_718 = 3;
    local_720 = (int *)0x3;
    local_738 = param_2 + 0x75;
    local_734 = 0xfffffffc;
    pcVar16 = (char *)0x8;
    ppiVar14 = &local_738;
    _gfortran_transfer_array(&local_88c,ppiVar14,8,0);
    _gfortran_st_read_done(&local_88c);
    local_2b4 = local_2e4;
  }
  else {
    if (local_84 == 0x17) {
      local_884 = "hdr_io.F90";
      local_880 = 0xff;
      local_88c = 0;
      local_888 = *param_4;
      _gfortran_st_read(&local_88c);
      _gfortran_transfer_integer(&local_88c,&bantot,4);
      _gfortran_transfer_integer(&local_88c,param_2 + 1,4);
      _gfortran_transfer_integer(&local_88c,param_2 + 3,4);
      _gfortran_transfer_integer(&local_88c,param_2 + 4,4);
      _gfortran_transfer_integer(&local_88c,&local_2ac,4);
      local_35c = 0x109;
      local_354 = 1;
      local_350 = 3;
      local_358 = 1;
      local_364 = param_2 + 0x10;
      local_360 = 0xffffffff;
      _gfortran_transfer_array(&local_88c,&local_364,4,0);
      _gfortran_transfer_integer(&local_88c,&local_2b0,4);
      _gfortran_transfer_integer(&local_88c,param_2 + 8,4);
      _gfortran_transfer_integer(&local_88c,param_2 + 9,4);
      _gfortran_transfer_integer(&local_88c,&local_2dc,4);
      _gfortran_transfer_integer(&local_88c,&local_2e0,4);
      _gfortran_transfer_integer(&local_88c,&local_2e4,4);
      _gfortran_transfer_integer(&local_88c,param_2 + 0xd,4);
      local_374 = 0x219;
      local_36c = 1;
      local_368 = 3;
      local_370 = 1;
      local_37c = acell;
      local_378 = 0xffffffff;
      _gfortran_transfer_array(&local_88c,&local_37c,8,0);
      _gfortran_transfer_real(&local_88c,param_2 + 0x67,8);
      local_730 = (char *)0x21a;
      local_728 = 1;
      local_724 = 3;
      local_72c = 1;
      local_71c = 1;
      local_718 = 3;
      local_720 = (int *)0x3;
      local_738 = param_2 + 0x75;
      local_734 = 0xfffffffc;
      pcVar16 = (char *)0x8;
      ppiVar14 = &local_738;
      _gfortran_transfer_array(&local_88c,ppiVar14,8,0);
      _gfortran_st_read_done(&local_88c);
      local_2b4 = local_2e4;
    }
    else {
      if (local_84 == 0x22) {
        local_884 = "hdr_io.F90";
        local_880 = 0x107;
        local_88c = 0;
        local_888 = *param_4;
        _gfortran_st_read(&local_88c);
        _gfortran_transfer_integer(&local_88c,&bantot,4);
        _gfortran_transfer_integer(&local_88c,param_2 + 1,4);
        _gfortran_transfer_integer(&local_88c,param_2 + 3,4);
        _gfortran_transfer_integer(&local_88c,param_2 + 4,4);
        _gfortran_transfer_integer(&local_88c,&local_2ac,4);
        local_38c = 0x109;
        local_384 = 1;
        local_380 = 3;
        local_388 = 1;
        local_394 = param_2 + 0x10;
        local_390 = 0xffffffff;
        _gfortran_transfer_array(&local_88c,&local_394,4,0);
        _gfortran_transfer_integer(&local_88c,&local_2b0,4);
        _gfortran_transfer_integer(&local_88c,param_2 + 8,4);
        _gfortran_transfer_integer(&local_88c,param_2 + 9,4);
        _gfortran_transfer_integer(&local_88c,&local_2dc,4);
        _gfortran_transfer_integer(&local_88c,&local_2e0,4);
        _gfortran_transfer_integer(&local_88c,&local_2b4,4);
        _gfortran_transfer_integer(&local_88c,&local_2e4,4);
        _gfortran_transfer_integer(&local_88c,param_2 + 0xd,4);
        _gfortran_transfer_real(&local_88c,param_2 + 0x67,8);
        local_730 = (char *)0x21a;
        local_728 = 1;
        local_724 = 3;
        local_72c = 1;
        local_71c = 1;
        local_718 = 3;
        local_720 = (int *)0x3;
        local_738 = param_2 + 0x75;
        local_734 = 0xfffffffc;
        pcVar16 = (char *)0x8;
        ppiVar14 = &local_738;
        _gfortran_transfer_array(&local_88c,ppiVar14,8,0);
        _gfortran_st_read_done(&local_88c);
      }
      else {
        if (local_84 == 0x28) {
          local_884 = "hdr_io.F90";
          local_880 = 0x10e;
          local_88c = 0;
          local_888 = *param_4;
          _gfortran_st_read(&local_88c);
          _gfortran_transfer_integer(&local_88c,&bantot,4);
          _gfortran_transfer_integer(&local_88c,param_2 + 1,4);
          _gfortran_transfer_integer(&local_88c,param_2 + 3,4);
          _gfortran_transfer_integer(&local_88c,param_2 + 4,4);
          _gfortran_transfer_integer(&local_88c,&local_2ac,4);
          local_3a4 = 0x109;
          local_39c = 1;
          local_398 = 3;
          local_3a0 = 1;
          local_3ac = param_2 + 0x10;
          local_3a8 = 0xffffffff;
          _gfortran_transfer_array(&local_88c,&local_3ac,4,0);
          _gfortran_transfer_integer(&local_88c,&local_2b0,4);
          _gfortran_transfer_integer(&local_88c,param_2 + 8,4);
          _gfortran_transfer_integer(&local_88c,param_2 + 9,4);
          _gfortran_transfer_integer(&local_88c,&local_2dc,4);
          _gfortran_transfer_integer(&local_88c,&local_2e0,4);
          _gfortran_transfer_integer(&local_88c,&local_2b4,4);
          _gfortran_transfer_integer(&local_88c,&local_2e4,4);
          _gfortran_transfer_integer(&local_88c,param_2 + 0xd,4);
          _gfortran_transfer_real(&local_88c,param_2 + 0x61,8);
          _gfortran_transfer_real(&local_88c,param_2 + 0x65,8);
          _gfortran_transfer_real(&local_88c,param_2 + 0x67,8);
          local_730 = (char *)0x21a;
          local_728 = 1;
          local_724 = 3;
          local_72c = 1;
          local_71c = 1;
          local_718 = 3;
          local_720 = (int *)0x3;
          local_738 = param_2 + 0x75;
          local_734 = 0xfffffffc;
          _gfortran_transfer_array(&local_88c,&local_738,8,0);
          _gfortran_transfer_real(&local_88c,param_2 + 0x89,8);
          ppiVar14 = (int **)(param_2 + 0x8b);
          pcVar16 = (char *)0x8;
          _gfortran_transfer_real(&local_88c,ppiVar14,8);
          _gfortran_st_read_done(&local_88c);
        }
        else {
          if (local_84 == 0x29) {
            local_884 = "hdr_io.F90";
            local_880 = 0x115;
            local_88c = 0;
            local_888 = *param_4;
            _gfortran_st_read(&local_88c);
            _gfortran_transfer_integer(&local_88c,&bantot,4);
            _gfortran_transfer_integer(&local_88c,param_2 + 1,4);
            _gfortran_transfer_integer(&local_88c,param_2 + 3,4);
            _gfortran_transfer_integer(&local_88c,param_2 + 4,4);
            _gfortran_transfer_integer(&local_88c,&local_2ac,4);
            local_3bc = 0x109;
            local_3b4 = 1;
            local_3b0 = 3;
            local_3b8 = 1;
            local_3c4 = param_2 + 0x10;
            local_3c0 = 0xffffffff;
            _gfortran_transfer_array(&local_88c,&local_3c4,4,0);
            _gfortran_transfer_integer(&local_88c,&local_2b0,4);
            _gfortran_transfer_integer(&local_88c,param_2 + 8,4);
            _gfortran_transfer_integer(&local_88c,param_2 + 9,4);
            _gfortran_transfer_integer(&local_88c,&local_2dc,4);
            _gfortran_transfer_integer(&local_88c,&local_2e0,4);
            _gfortran_transfer_integer(&local_88c,&local_2b4,4);
            _gfortran_transfer_integer(&local_88c,&local_2e4,4);
            _gfortran_transfer_integer(&local_88c,param_2 + 0xd,4);
            _gfortran_transfer_integer(&local_88c,param_2 + 0xe,4);
            _gfortran_transfer_real(&local_88c,param_2 + 0x61,8);
            _gfortran_transfer_real(&local_88c,param_2 + 0x65,8);
            _gfortran_transfer_real(&local_88c,param_2 + 0x67,8);
            local_3d4 = 0x219;
            local_3cc = 1;
            local_3c8 = 3;
            local_3d0 = 1;
            local_3dc = param_2 + 0x6f;
            local_3d8 = 0xffffffff;
            _gfortran_transfer_array(&local_88c,&local_3dc,8,0);
            local_730 = (char *)0x21a;
            local_728 = 1;
            local_724 = 3;
            local_72c = 1;
            local_71c = 1;
            local_718 = 3;
            local_720 = (int *)0x3;
            local_738 = param_2 + 0x75;
            local_734 = 0xfffffffc;
            _gfortran_transfer_array(&local_88c,&local_738,8,0);
            _gfortran_transfer_real(&local_88c,param_2 + 0x89,8);
            ppiVar14 = (int **)(param_2 + 0x8b);
            pcVar16 = (char *)0x8;
            _gfortran_transfer_real(&local_88c);
            _gfortran_st_read_done(&local_88c,ppiVar14,pcVar16);
          }
          else {
            if (local_84 == 0x2a) {
              local_884 = "hdr_io.F90";
              local_880 = 0x11d;
              local_88c = 0;
              local_888 = *param_4;
              _gfortran_st_read(&local_88c);
              _gfortran_transfer_integer(&local_88c,&bantot,4);
              _gfortran_transfer_integer(&local_88c,param_2 + 1,4);
              _gfortran_transfer_integer(&local_88c,param_2 + 3,4);
              _gfortran_transfer_integer(&local_88c,param_2 + 4,4);
              _gfortran_transfer_integer(&local_88c,&local_2ac,4);
              local_3ec = 0x109;
              local_3e4 = 1;
              local_3e0 = 3;
              local_3e8 = 1;
              local_3f4 = param_2 + 0x10;
              local_3f0 = 0xffffffff;
              _gfortran_transfer_array(&local_88c,&local_3f4,4,0);
              _gfortran_transfer_integer(&local_88c,&local_2b0,4);
              _gfortran_transfer_integer(&local_88c,param_2 + 8,4);
              _gfortran_transfer_integer(&local_88c,param_2 + 9,4);
              _gfortran_transfer_integer(&local_88c,&local_2dc,4);
              _gfortran_transfer_integer(&local_88c,&local_2e0,4);
              _gfortran_transfer_integer(&local_88c,&local_2b4,4);
              _gfortran_transfer_integer(&local_88c,&local_2e4,4);
              _gfortran_transfer_integer(&local_88c,param_2 + 0xd,4);
              _gfortran_transfer_integer(&local_88c,param_2 + 0xe,4);
              _gfortran_transfer_real(&local_88c,param_2 + 0x61,8);
              _gfortran_transfer_real(&local_88c,param_2 + 0x65,8);
              _gfortran_transfer_real(&local_88c,param_2 + 0x67,8);
              local_404 = 0x219;
              local_3fc = 1;
              local_3f8 = 3;
              local_400 = 1;
              local_40c = param_2 + 0x6f;
              local_408 = 0xffffffff;
              _gfortran_transfer_array(&local_88c,&local_40c,8,0);
              local_730 = (char *)0x21a;
              local_728 = 1;
              local_724 = 3;
              local_72c = 1;
              local_71c = 1;
              local_718 = 3;
              local_720 = (int *)0x3;
              local_738 = param_2 + 0x75;
              local_734 = 0xfffffffc;
              _gfortran_transfer_array(&local_88c,&local_738,8,0);
              _gfortran_transfer_real(&local_88c,param_2 + 0x87,8);
              _gfortran_transfer_real(&local_88c,param_2 + 0x89,8);
              ppiVar14 = (int **)(param_2 + 0x8b);
              pcVar16 = (char *)0x8;
              _gfortran_transfer_real(&local_88c);
              _gfortran_st_read_done(&local_88c,ppiVar14,pcVar16);
            }
            else {
              if (0x2b < local_84) {
                local_884 = "hdr_io.F90";
                local_880 = 0x125;
                local_88c = 0;
                local_888 = *param_4;
                _gfortran_st_read(&local_88c);
                _gfortran_transfer_integer(&local_88c,&bantot,4);
                _gfortran_transfer_integer(&local_88c,param_2 + 1,4);
                _gfortran_transfer_integer(&local_88c,param_2 + 3,4);
                _gfortran_transfer_integer(&local_88c,param_2 + 4,4);
                _gfortran_transfer_integer(&local_88c,&local_2ac,4);
                local_41c = 0x109;
                local_414 = 1;
                local_410 = 3;
                local_418 = 1;
                local_424 = param_2 + 0x10;
                local_420 = 0xffffffff;
                _gfortran_transfer_array(&local_88c,&local_424,4,0);
                _gfortran_transfer_integer(&local_88c,&local_2b0,4);
                _gfortran_transfer_integer(&local_88c,param_2 + 8,4);
                _gfortran_transfer_integer(&local_88c,param_2 + 9,4);
                _gfortran_transfer_integer(&local_88c,&local_2dc,4);
                _gfortran_transfer_integer(&local_88c,&local_2e0,4);
                _gfortran_transfer_integer(&local_88c,&local_2b4,4);
                _gfortran_transfer_integer(&local_88c,&local_2e4,4);
                _gfortran_transfer_integer(&local_88c,param_2 + 0xd,4);
                _gfortran_transfer_integer(&local_88c,param_2 + 0xe,4);
                _gfortran_transfer_integer(&local_88c,param_2 + 0xf,4);
                _gfortran_transfer_real(&local_88c,param_2 + 0x61,8);
                _gfortran_transfer_real(&local_88c,param_2 + 99,8);
                _gfortran_transfer_real(&local_88c,param_2 + 0x65,8);
                _gfortran_transfer_real(&local_88c,param_2 + 0x67,8);
                local_434 = 0x219;
                local_42c = 1;
                local_428 = 3;
                local_430 = 1;
                local_43c = param_2 + 0x6f;
                local_438 = 0xffffffff;
                _gfortran_transfer_array(&local_88c,&local_43c,8,0);
                local_730 = (char *)0x21a;
                local_728 = 1;
                local_724 = 3;
                local_72c = 1;
                local_71c = 1;
                local_718 = 3;
                local_720 = (int *)0x3;
                local_738 = param_2 + 0x75;
                local_734 = 0xfffffffc;
                uVar18 = 0;
                _gfortran_transfer_array(&local_88c,&local_738,8);
                _gfortran_transfer_real(&local_88c,param_2 + 0x87,8);
                _gfortran_transfer_real(&local_88c,param_2 + 0x89,8);
                ppiVar14 = (int **)(param_2 + 0x8b);
                pcVar16 = (char *)0x8;
                _gfortran_transfer_real(&local_88c);
                _gfortran_st_read_done(&local_88c,ppiVar14,pcVar16,uVar18);
              }
            }
          }
        }
      }
    }
  }
  *param_2 = bantot;
  param_2[5] = local_2ac;
  param_2[6] = local_2b0;
  param_2[7] = local_2b4;
  param_2[10] = local_2dc;
  param_2[0xb] = local_2e0;
  param_2[0xc] = local_2e4;
  if (((1e-06 < *(double *)(param_2 + 0x65)) && (local_84 < 0x2c)) &&
     (((*param_1 != 0x33 && ((*param_1 != 0x34 && (*param_1 != 0x65)))) && (*param_1 != 0x66)))) {
    local_884 = "hdr_io.F90";
    local_880 = 0x138;
    local_84c = local_2a4;
    local_848 = 500;
    local_860 = 0;
    local_888 = 0;
    local_85c = "(4a,es16.6,9a)  The value of ecutsm is";
    local_858 = 0xe;
    local_88c = 0x5000;
    _gfortran_st_write(&local_88c);
    _gfortran_transfer_character(&local_88c,"\n hdr_io : ERROR -",1);
    _gfortran_transfer_character(&local_88c," hdr_io : ERROR -",0x11);
    _gfortran_transfer_character(&local_88c,"\n hdr_io : ERROR -",1);
    _gfortran_transfer_character(&local_88c,"  The value of ecutsm is",0x18);
    _gfortran_transfer_real(&local_88c,param_2 + 0x65,8);
    _gfortran_transfer_character
              (&local_88c,", while the file has been produced prior to v4.4 .",0x32);
    _gfortran_transfer_character(&local_88c,"\n hdr_io : ERROR -",1);
    _gfortran_transfer_character
              (&local_88c,
               "  The definition of the smearing function has changed, so that you are not allowed",
               0x52);
    _gfortran_transfer_character(&local_88c,"\n hdr_io : ERROR -",1);
    _gfortran_transfer_character
              (&local_88c,
               "  to restart from a old wavefunction file. By contrast, you can restart from an old"
               ,0x53);
    _gfortran_transfer_character(&local_88c,"\n hdr_io : ERROR -",1);
    _gfortran_transfer_character
              (&local_88c,
                              
               "  potential or density file, and perform a self-consistent cycle with a new ABINIT version."
               ,0x5b);
    _gfortran_transfer_character(&local_88c,"\n hdr_io : ERROR -",1);
    _gfortran_transfer_character
              (&local_88c,
                              
               "  Action : produce a density or potential file using the old version of ABINIT, and restart from it.Attempt to allocate negative amount of memory. Possible integer overflow"
               ,100);
    _gfortran_st_write_done(&local_88c);
    pcVar16 = "COLL";
    wrtout(&DAT_08072630,local_2a4,"COLL",500,4);
    ppiVar14 = (int **)0x4;
    leave_new("COLL",4);
  }
  param_2[0x15] = 0x109;
  param_2[0x17] = 1;
  param_2[0x18] = local_2b0;
  param_2[0x16] = 1;
  iVar3 = 0;
  if (-1 < local_2b0) {
    iVar3 = local_2b0;
  }
  if (local_2b0 < 1) {
    sVar4 = 0;
  }
  else {
    sVar4 = iVar3 * 4;
  }
  if ((int)sVar4 < 0) {
    sVar4 = _gfortran_runtime_error
                      ("Attempt to allocate negative amount of memory. Possible integer overflow");
  }
  if ((int)sVar4 < 1) {
    sVar4 = 1;
  }
  pvVar5 = malloc(sVar4);
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)_gfortran_os_error("Out of memory");
  }
  param_2[0x13] = (int)pvVar5;
  param_2[0x14] = -1;
  param_2[0x8f] = 0x21a;
  param_2[0x91] = 1;
  param_2[0x92] = 3;
  param_2[0x90] = 1;
  param_2[0x94] = 1;
  param_2[0x95] = local_2b0;
  param_2[0x93] = 3;
  iVar3 = 0;
  if (-1 < local_2b0) {
    iVar3 = local_2b0;
  }
  if (local_2b0 < 1) {
    sVar4 = 0;
  }
  else {
    sVar4 = iVar3 * 0x18;
  }
  if ((int)sVar4 < 0) {
    sVar4 = _gfortran_runtime_error
                      ("Attempt to allocate negative amount of memory. Possible integer overflow");
  }
  if ((int)sVar4 < 1) {
    sVar4 = 1;
  }
  pvVar5 = malloc(sVar4);
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)_gfortran_os_error("Out of memory");
  }
  param_2[0x8d] = (int)pvVar5;
  param_2[0x8e] = -4;
  param_2[0x1b] = 0x109;
  param_2[0x1d] = 1;
  param_2[0x1e] = local_2b4;
  param_2[0x1c] = 1;
  iVar3 = 0;
  if (-1 < local_2b4) {
    iVar3 = local_2b4;
  }
  if (local_2b4 < 1) {
    sVar4 = 0;
  }
  else {
    sVar4 = iVar3 * 4;
  }
  if ((int)sVar4 < 0) {
    sVar4 = _gfortran_runtime_error
                      ("Attempt to allocate negative amount of memory. Possible integer overflow");
  }
  if ((int)sVar4 < 1) {
    sVar4 = 1;
  }
  pvVar5 = malloc(sVar4);
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)_gfortran_os_error("Out of memory");
  }
  param_2[0x19] = (int)pvVar5;
  param_2[0x1a] = -1;
  param_2[0x21] = 0x109;
  param_2[0x23] = 1;
  param_2[0x24] = local_2b0 * local_2dc;
  param_2[0x22] = 1;
  iVar3 = 0;
  if (-1 < local_2dc * local_2b0) {
    iVar3 = local_2dc * local_2b0;
  }
  if (local_2dc * local_2b0 < 1) {
    sVar4 = 0;
  }
  else {
    sVar4 = iVar3 * 4;
  }
  if ((int)sVar4 < 0) {
    sVar4 = _gfortran_runtime_error
                      ("Attempt to allocate negative amount of memory. Possible integer overflow");
  }
  if ((int)sVar4 < 1) {
    sVar4 = 1;
  }
  pvVar5 = malloc(sVar4);
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)_gfortran_os_error("Out of memory");
  }
  param_2[0x1f] = (int)pvVar5;
  param_2[0x20] = -1;
  param_2[0x27] = 0x109;
  param_2[0x29] = 1;
  param_2[0x2a] = local_2b0;
  param_2[0x28] = 1;
  iVar3 = 0;
  if (-1 < local_2b0) {
    iVar3 = local_2b0;
  }
  if (local_2b0 < 1) {
    sVar4 = 0;
  }
  else {
    sVar4 = iVar3 * 4;
  }
  if ((int)sVar4 < 0) {
    sVar4 = _gfortran_runtime_error
                      ("Attempt to allocate negative amount of memory. Possible integer overflow");
  }
  if ((int)sVar4 < 1) {
    sVar4 = 1;
  }
  pvVar5 = malloc(sVar4);
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)_gfortran_os_error("Out of memory");
  }
  param_2[0x25] = (int)pvVar5;
  param_2[0x26] = -1;
  param_2[0x98] = 0x219;
  param_2[0x9a] = 1;
  param_2[0x9b] = bantot;
  param_2[0x99] = 1;
  iVar3 = 0;
  if (-1 < bantot) {
    iVar3 = bantot;
  }
  if (bantot < 1) {
    sVar4 = 0;
  }
  else {
    sVar4 = iVar3 * 8;
  }
  if ((int)sVar4 < 0) {
    sVar4 = _gfortran_runtime_error
                      ("Attempt to allocate negative amount of memory. Possible integer overflow");
  }
  if ((int)sVar4 < 1) {
    sVar4 = 1;
  }
  pvVar5 = malloc(sVar4);
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)_gfortran_os_error("Out of memory");
  }
  param_2[0x96] = (int)pvVar5;
  param_2[0x97] = -1;
  param_2[0x2d] = 0x109;
  param_2[0x2f] = 1;
  param_2[0x30] = local_2b4;
  param_2[0x2e] = 1;
  iVar3 = 0;
  if (-1 < local_2b4) {
    iVar3 = local_2b4;
  }
  if (local_2b4 < 1) {
    sVar4 = 0;
  }
  else {
    sVar4 = iVar3 * 4;
  }
  if ((int)sVar4 < 0) {
    sVar4 = _gfortran_runtime_error
                      ("Attempt to allocate negative amount of memory. Possible integer overflow");
  }
  if ((int)sVar4 < 1) {
    sVar4 = 1;
  }
  pvVar5 = malloc(sVar4);
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)_gfortran_os_error("Out of memory");
  }
  param_2[0x2b] = (int)pvVar5;
  param_2[0x2c] = -1;
  param_2[0x33] = 0x109;
  param_2[0x35] = 1;
  param_2[0x36] = local_2b4;
  param_2[0x34] = 1;
  iVar3 = 0;
  if (-1 < local_2b4) {
    iVar3 = local_2b4;
  }
  if (local_2b4 < 1) {
    sVar4 = 0;
  }
  else {
    sVar4 = iVar3 * 4;
  }
  if ((int)sVar4 < 0) {
    sVar4 = _gfortran_runtime_error
                      ("Attempt to allocate negative amount of memory. Possible integer overflow");
  }
  if ((int)sVar4 < 1) {
    sVar4 = 1;
  }
  pvVar5 = malloc(sVar4);
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)_gfortran_os_error("Out of memory");
  }
  param_2[0x31] = (int)pvVar5;
  param_2[0x32] = -1;
  param_2[0x39] = 0x109;
  param_2[0x3b] = 1;
  param_2[0x3c] = local_2b4;
  param_2[0x3a] = 1;
  iVar3 = 0;
  if (-1 < local_2b4) {
    iVar3 = local_2b4;
  }
  if (local_2b4 < 1) {
    sVar4 = 0;
  }
  else {
    sVar4 = iVar3 * 4;
  }
  if ((int)sVar4 < 0) {
    sVar4 = _gfortran_runtime_error
                      ("Attempt to allocate negative amount of memory. Possible integer overflow");
  }
  if ((int)sVar4 < 1) {
    sVar4 = 1;
  }
  pvVar5 = malloc(sVar4);
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)_gfortran_os_error("Out of memory");
  }
  param_2[0x37] = (int)pvVar5;
  param_2[0x38] = -1;
  param_2[0x3f] = 0x109;
  param_2[0x41] = 1;
  param_2[0x42] = local_2b4;
  param_2[0x40] = 1;
  iVar3 = 0;
  if (-1 < local_2b4) {
    iVar3 = local_2b4;
  }
  if (local_2b4 < 1) {
    sVar4 = 0;
  }
  else {
    sVar4 = iVar3 * 4;
  }
  if ((int)sVar4 < 0) {
    sVar4 = _gfortran_runtime_error
                      ("Attempt to allocate negative amount of memory. Possible integer overflow");
  }
  if ((int)sVar4 < 1) {
    sVar4 = 1;
  }
  pvVar5 = malloc(sVar4);
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)_gfortran_os_error("Out of memory");
  }
  param_2[0x3d] = (int)pvVar5;
  param_2[0x3e] = -1;
  param_2[0x45] = 0x109;
  param_2[0x47] = 1;
  param_2[0x48] = local_2e4;
  param_2[0x46] = 1;
  iVar3 = 0;
  if (-1 < local_2e4) {
    iVar3 = local_2e4;
  }
  if (local_2e4 < 1) {
    sVar4 = 0;
  }
  else {
    sVar4 = iVar3 * 4;
  }
  if ((int)sVar4 < 0) {
    sVar4 = _gfortran_runtime_error
                      ("Attempt to allocate negative amount of memory. Possible integer overflow");
  }
  if ((int)sVar4 < 1) {
    sVar4 = 1;
  }
  pvVar5 = malloc(sVar4);
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)_gfortran_os_error("Out of memory");
  }
  param_2[0x43] = (int)pvVar5;
  param_2[0x44] = -1;
  param_2[0x4b] = 0x109;
  param_2[0x4d] = 1;
  param_2[0x4e] = local_2e0;
  param_2[0x4c] = 1;
  iVar3 = 0;
  if (-1 < local_2e0) {
    iVar3 = local_2e0;
  }
  if (local_2e0 < 1) {
    sVar4 = 0;
  }
  else {
    sVar4 = iVar3 * 4;
  }
  if ((int)sVar4 < 0) {
    sVar4 = _gfortran_runtime_error
                      ("Attempt to allocate negative amount of memory. Possible integer overflow");
  }
  if ((int)sVar4 < 1) {
    sVar4 = 1;
  }
  pvVar5 = malloc(sVar4);
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)_gfortran_os_error("Out of memory");
  }
  param_2[0x49] = (int)pvVar5;
  param_2[0x4a] = -1;
  param_2[0x51] = 0x10b;
  param_2[0x53] = 1;
  param_2[0x54] = 3;
  param_2[0x52] = 1;
  param_2[0x56] = 1;
  param_2[0x57] = 3;
  param_2[0x55] = 3;
  param_2[0x59] = 1;
  param_2[0x5a] = local_2e0;
  param_2[0x58] = 9;
  iVar3 = 0;
  if (-1 < local_2e0) {
    iVar3 = local_2e0;
  }
  if (local_2e0 < 1) {
    sVar4 = 0;
  }
  else {
    sVar4 = iVar3 * 0x24;
  }
  if ((int)sVar4 < 0) {
    sVar4 = _gfortran_runtime_error
                      ("Attempt to allocate negative amount of memory. Possible integer overflow");
  }
  if ((int)sVar4 < 1) {
    sVar4 = 1;
  }
  pvVar5 = malloc(sVar4);
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)_gfortran_os_error("Out of memory");
  }
  param_2[0x4f] = (int)pvVar5;
  param_2[0x50] = -0xd;
  param_2[0xca] = 0x2131;
  param_2[0xcc] = 1;
  param_2[0xcd] = local_2b4;
  param_2[0xcb] = 1;
  iVar3 = 0;
  if (-1 < local_2b4) {
    iVar3 = local_2b4;
  }
  if (local_2b4 < 1) {
    sVar4 = 0;
  }
  else {
    sVar4 = iVar3 * 0x84;
  }
  if ((int)sVar4 < 0) {
    sVar4 = _gfortran_runtime_error
                      ("Attempt to allocate negative amount of memory. Possible integer overflow");
  }
  if ((int)sVar4 < 1) {
    sVar4 = 1;
  }
  pvVar5 = malloc(sVar4);
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)_gfortran_os_error("Out of memory");
  }
  param_2[200] = (int)pvVar5;
  param_2[0xc9] = -1;
  param_2[0x9e] = 0x21a;
  param_2[0xa0] = 1;
  param_2[0xa1] = 3;
  param_2[0x9f] = 1;
  param_2[0xa3] = 1;
  param_2[0xa4] = local_2e0;
  param_2[0xa2] = 3;
  iVar3 = 0;
  if (-1 < local_2e0) {
    iVar3 = local_2e0;
  }
  if (local_2e0 < 1) {
    sVar4 = 0;
  }
  else {
    sVar4 = iVar3 * 0x18;
  }
  if ((int)sVar4 < 0) {
    sVar4 = _gfortran_runtime_error
                      ("Attempt to allocate negative amount of memory. Possible integer overflow");
  }
  if ((int)sVar4 < 1) {
    sVar4 = 1;
  }
  pvVar5 = malloc(sVar4);
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)_gfortran_os_error("Out of memory");
  }
  param_2[0x9c] = (int)pvVar5;
  param_2[0x9d] = -4;
  param_2[0x5d] = 0x109;
  param_2[0x5f] = 1;
  param_2[0x60] = local_2ac;
  param_2[0x5e] = 1;
  iVar3 = 0;
  if (-1 < local_2ac) {
    iVar3 = local_2ac;
  }
  if (local_2ac < 1) {
    sVar4 = 0;
  }
  else {
    sVar4 = iVar3 * 4;
  }
  if ((int)sVar4 < 0) {
    sVar4 = _gfortran_runtime_error
                      ("Attempt to allocate negative amount of memory. Possible integer overflow");
  }
  if ((int)sVar4 < 1) {
    sVar4 = 1;
  }
  pvVar5 = malloc(sVar4);
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)_gfortran_os_error("Out of memory");
  }
  param_2[0x5b] = (int)pvVar5;
  param_2[0x5c] = -1;
  param_2[0xa7] = 0x219;
  param_2[0xa9] = 1;
  param_2[0xaa] = local_2b0;
  param_2[0xa8] = 1;
  iVar3 = 0;
  if (-1 < local_2b0) {
    iVar3 = local_2b0;
  }
  if (local_2b0 < 1) {
    sVar4 = 0;
  }
  else {
    sVar4 = iVar3 * 8;
  }
  if ((int)sVar4 < 0) {
    sVar4 = _gfortran_runtime_error
                      ("Attempt to allocate negative amount of memory. Possible integer overflow");
  }
  if ((int)sVar4 < 1) {
    sVar4 = 1;
  }
  pvVar5 = malloc(sVar4);
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)_gfortran_os_error("Out of memory");
  }
  param_2[0xa5] = (int)pvVar5;
  param_2[0xa6] = -1;
  param_2[0xad] = 0x21a;
  param_2[0xaf] = 1;
  param_2[0xb0] = 3;
  param_2[0xae] = 1;
  param_2[0xb2] = 1;
  param_2[0xb3] = local_2ac;
  param_2[0xb1] = 3;
  iVar3 = 0;
  if (-1 < local_2ac) {
    iVar3 = local_2ac;
  }
  if (local_2ac < 1) {
    sVar4 = 0;
  }
  else {
    sVar4 = iVar3 * 0x18;
  }
  if ((int)sVar4 < 0) {
    sVar4 = _gfortran_runtime_error
                      ("Attempt to allocate negative amount of memory. Possible integer overflow");
  }
  if ((int)sVar4 < 1) {
    sVar4 = 1;
  }
  pvVar5 = malloc(sVar4);
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)_gfortran_os_error("Out of memory");
  }
  param_2[0xab] = (int)pvVar5;
  param_2[0xac] = -4;
  param_2[0xb6] = 0x219;
  param_2[0xb8] = 1;
  param_2[0xb9] = local_2b4;
  param_2[0xb7] = 1;
  iVar3 = 0;
  if (-1 < local_2b4) {
    iVar3 = local_2b4;
  }
  if (local_2b4 < 1) {
    sVar4 = 0;
  }
  else {
    sVar4 = iVar3 * 8;
  }
  if ((int)sVar4 < 0) {
    sVar4 = _gfortran_runtime_error
                      ("Attempt to allocate negative amount of memory. Possible integer overflow");
  }
  if ((int)sVar4 < 1) {
    sVar4 = 1;
  }
  pvVar5 = malloc(sVar4);
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)_gfortran_os_error("Out of memory");
  }
  param_2[0xb4] = (int)pvVar5;
  param_2[0xb5] = -1;
  param_2[0xbc] = 0x219;
  param_2[0xbe] = 1;
  param_2[0xbf] = local_2b4;
  param_2[0xbd] = 1;
  iVar3 = 0;
  if (-1 < local_2b4) {
    iVar3 = local_2b4;
  }
  if (local_2b4 < 1) {
    sVar4 = 0;
  }
  else {
    sVar4 = iVar3 * 8;
  }
  if ((int)sVar4 < 0) {
    sVar4 = _gfortran_runtime_error
                      ("Attempt to allocate negative amount of memory. Possible integer overflow");
  }
  if ((int)sVar4 < 1) {
    sVar4 = 1;
  }
  pvVar5 = malloc(sVar4);
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)_gfortran_os_error("Out of memory");
  }
  param_2[0xba] = (int)pvVar5;
  param_2[0xbb] = -1;
  param_2[0xc2] = 0x219;
  param_2[0xc4] = 1;
  param_2[0xc5] = local_2e4;
  param_2[0xc3] = 1;
  iVar3 = 0;
  if (-1 < local_2e4) {
    iVar3 = local_2e4;
  }
  if (local_2e4 < 1) {
    sVar4 = 0;
  }
  else {
    sVar4 = iVar3 * 8;
  }
  if ((int)sVar4 < 0) {
    sVar4 = _gfortran_runtime_error
                      ("Attempt to allocate negative amount of memory. Possible integer overflow");
  }
  if ((int)sVar4 < 1) {
    sVar4 = 1;
  }
  pvVar5 = malloc(sVar4);
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)_gfortran_os_error("Out of memory");
  }
  param_2[0xc0] = (int)pvVar5;
  param_2[0xc1] = -1;
  if (param_2[0xf] == 1) {
    param_2[0xd0] = 0x4229;
    param_2[0xd2] = 1;
    param_2[0xd3] = local_2ac;
    param_2[0xd1] = 1;
    iVar3 = 0;
    if (-1 < local_2ac) {
      iVar3 = local_2ac;
    }
    if (local_2ac < 1) {
      sVar4 = 0;
    }
    else {
      sVar4 = iVar3 * 0x108;
    }
    if ((int)sVar4 < 0) {
      sVar4 = _gfortran_runtime_error
                        ("Attempt to allocate negative amount of memory. Possible integer overflow")
      ;
    }
    if ((int)sVar4 < 1) {
      sVar4 = 1;
    }
    pvVar5 = malloc(sVar4);
    if (pvVar5 == (void *)0x0) {
      pvVar5 = (void *)_gfortran_os_error("Out of memory");
    }
    param_2[0xce] = (int)pvVar5;
    param_2[0xcf] = -1;
  }
  iVar3 = param_2[0x13];
  iVar10 = param_2[0x14];
  iVar6 = param_2[0x17];
  iVar1 = param_2[0x18];
  iVar9 = param_2[0x16];
  while (iVar6 <= iVar1) {
    *(undefined4 *)(iVar3 + (iVar6 * iVar9 + iVar10) * 4) = 1;
    iVar6 = iVar6 + 1;
  }
  iVar3 = param_2[0x43];
  iVar10 = param_2[0x44];
  iVar6 = param_2[0x47];
  iVar1 = param_2[0x48];
  iVar9 = param_2[0x46];
  while (iVar6 <= iVar1) {
    *(undefined4 *)(iVar3 + (iVar6 * iVar9 + iVar10) * 4) = 1;
    iVar6 = iVar6 + 1;
  }
  iVar3 = param_2[0x49];
  iVar10 = param_2[0x4a];
  iVar6 = param_2[0x4d];
  iVar1 = param_2[0x4e];
  iVar9 = param_2[0x4c];
  while (iVar6 <= iVar1) {
    *(undefined4 *)(iVar3 + (iVar6 * iVar9 + iVar10) * 4) = 1;
    iVar6 = iVar6 + 1;
  }
  if ((local_84 == 0x16) && (((*param_1 == 1 || (*param_1 == 0x33)) || (*param_1 == 0x65)))) {
    local_884 = "hdr_io.F90";
    local_880 = 0x16c;
    local_88c = 0;
    local_888 = *param_4;
    _gfortran_st_read(&local_88c);
    _gfortran_transfer_array(&local_88c,param_2 + 0x1f,4,0);
    _gfortran_transfer_array(&local_88c,param_2 + 0x25,4,0);
    _gfortran_transfer_array(&local_88c,param_2 + 0x4f,4,0);
    _gfortran_transfer_array(&local_88c,param_2 + 0x5b,4,0);
    _gfortran_transfer_array(&local_88c,param_2 + 0x8d,8,0);
    _gfortran_transfer_array(&local_88c,param_2 + 0x96,8,0);
    _gfortran_transfer_array(&local_88c,param_2 + 0x9c,8,0);
    ppiVar14 = (int **)(param_2 + 0xc0);
    pcVar16 = (char *)0x8;
    _gfortran_transfer_array(&local_88c,ppiVar14,8,0);
    _gfortran_st_read_done(&local_88c);
  }
  else {
    if (((local_84 == 0x16) || (local_84 == 0x17)) || (local_84 == 0x22)) {
      local_884 = "hdr_io.F90";
      local_880 = 0x173;
      local_88c = 0;
      local_888 = *param_4;
      _gfortran_st_read(&local_88c);
      _gfortran_transfer_array(&local_88c,param_2 + 0x1f,4,0);
      _gfortran_transfer_array(&local_88c,param_2 + 0x25,4,0);
      _gfortran_transfer_array(&local_88c,param_2 + 0x4f,4,0);
      _gfortran_transfer_array(&local_88c,param_2 + 0x5b,4,0);
      _gfortran_transfer_array(&local_88c,param_2 + 0x13,4,0);
      _gfortran_transfer_array(&local_88c,param_2 + 0x8d,8,0);
      _gfortran_transfer_array(&local_88c,param_2 + 0x96,8,0);
      _gfortran_transfer_array(&local_88c,param_2 + 0x9c,8,0);
      ppiVar14 = (int **)(param_2 + 0xc0);
      pcVar16 = (char *)0x8;
      _gfortran_transfer_array(&local_88c,ppiVar14,8,0);
      _gfortran_st_read_done(&local_88c);
    }
    else {
      if ((local_84 < 0x28) || (0x31 < local_84)) {
        if (0x31 < local_84) {
          local_884 = "hdr_io.F90";
          local_880 = 0x183;
          local_88c = 0;
          local_888 = *param_4;
          _gfortran_st_read(&local_88c);
          _gfortran_transfer_array(&local_88c,param_2 + 0x13,4,0);
          _gfortran_transfer_array(&local_88c,param_2 + 0x1f,4,0);
          _gfortran_transfer_array(&local_88c,param_2 + 0x25,4,0);
          _gfortran_transfer_array(&local_88c,param_2 + 0x43,4,0);
          _gfortran_transfer_array(&local_88c,param_2 + 0x49,4,0);
          _gfortran_transfer_array(&local_88c,param_2 + 0x4f,4,0);
          _gfortran_transfer_array(&local_88c,param_2 + 0x5b,4,0);
          _gfortran_transfer_array(&local_88c,param_2 + 0x8d,8,0);
          _gfortran_transfer_array(&local_88c,param_2 + 0x96,8,0);
          _gfortran_transfer_array(&local_88c,param_2 + 0x9c,8,0);
          _gfortran_transfer_array(&local_88c,param_2 + 0xc0,8,0);
          ppiVar14 = (int **)(param_2 + 0xa5);
          pcVar16 = (char *)0x8;
          _gfortran_transfer_array(&local_88c,ppiVar14,8,0);
          _gfortran_st_read_done(&local_88c);
        }
      }
      else {
        local_884 = "hdr_io.F90";
        local_880 = 0x17b;
        local_88c = 0;
        local_888 = *param_4;
        _gfortran_st_read(&local_88c);
        _gfortran_transfer_array(&local_88c,param_2 + 0x13,4,0);
        _gfortran_transfer_array(&local_88c,param_2 + 0x1f,4,0);
        _gfortran_transfer_array(&local_88c,param_2 + 0x25,4,0);
        _gfortran_transfer_array(&local_88c,param_2 + 0x43,4,0);
        _gfortran_transfer_array(&local_88c,param_2 + 0x49,4,0);
        _gfortran_transfer_array(&local_88c,param_2 + 0x4f,4,0);
        _gfortran_transfer_array(&local_88c,param_2 + 0x5b,4,0);
        _gfortran_transfer_array(&local_88c,param_2 + 0x8d,8,0);
        _gfortran_transfer_array(&local_88c,param_2 + 0x96,8,0);
        _gfortran_transfer_array(&local_88c,param_2 + 0x9c,8,0);
        ppiVar14 = (int **)(param_2 + 0xc0);
        pcVar16 = (char *)0x8;
        _gfortran_transfer_array(&local_88c,ppiVar14,8,0);
        _gfortran_st_read_done(&local_88c);
      }
    }
  }
  iVar2 = local_2b4;
  iVar3 = param_2[0x37];
  iVar10 = param_2[0x38];
  iVar6 = param_2[0x3b];
  iVar1 = param_2[0x3c];
  iVar9 = param_2[0x3a];
  while (iVar6 <= iVar1) {
    *(undefined4 *)(iVar3 + (iVar6 * iVar9 + iVar10) * 4) = 1;
    iVar6 = iVar6 + 1;
  }
  iVar3 = param_2[0x19];
  iVar10 = param_2[0x1a];
  iVar6 = param_2[0x1d];
  iVar1 = param_2[0x1e];
  iVar9 = param_2[0x1c];
  while (iVar6 <= iVar1) {
    *(undefined4 *)(iVar3 + (iVar6 * iVar9 + iVar10) * 4) = 0;
    iVar6 = iVar6 + 1;
  }
  if (local_84 == 0x16) {
    local_34 = 1;
    if (0 < local_2b4) {
      do {
        local_884 = "hdr_io.F90";
        local_880 = 0x192;
        local_88c = 0;
        local_888 = *param_4;
        _gfortran_st_read(&local_88c,ppiVar14,pcVar16);
        _gfortran_transfer_character
                  (&local_88c,param_2[200] + (param_2[0xcb] * local_34 + param_2[0xc9]) * 0x84,0x84)
        ;
        _gfortran_transfer_real
                  (&local_88c,param_2[0xba] + (param_2[0xbd] * local_34 + param_2[0xbb]) * 8,8);
        _gfortran_transfer_real
                  (&local_88c,param_2[0xb4] + (param_2[0xb7] * local_34 + param_2[0xb5]) * 8,8);
        _gfortran_transfer_integer
                  (&local_88c,param_2[0x31] + (param_2[0x34] * local_34 + param_2[0x32]) * 4,4);
        _gfortran_transfer_integer
                  (&local_88c,param_2[0x2b] + (param_2[0x2e] * local_34 + param_2[0x2c]) * 4,4);
        _gfortran_transfer_integer
                  (&local_88c,param_2[0x3d] + (param_2[0x40] * local_34 + param_2[0x3e]) * 4,4);
        _gfortran_transfer_integer(&local_88c,local_b0,4);
        _gfortran_transfer_integer(&local_88c,local_ac,4);
        pcVar16 = (char *)0x4;
        ppiVar14 = &local_2a8;
        _gfortran_transfer_integer(&local_88c);
        _gfortran_st_read_done(&local_88c);
        bVar13 = local_34 != iVar2;
        local_34 = local_34 + 1;
      } while (bVar13);
    }
  }
  else {
    if (local_84 == 0x17) {
      local_34 = 1;
      if (0 < local_2b4) {
        do {
          local_884 = "hdr_io.F90";
          local_880 = 0x19b;
          local_88c = 0;
          local_888 = *param_4;
          _gfortran_st_read(&local_88c,ppiVar14,pcVar16);
          _gfortran_transfer_character
                    (&local_88c,param_2[200] + (param_2[0xcb] * local_34 + param_2[0xc9]) * 0x84,
                     0x84);
          _gfortran_transfer_real
                    (&local_88c,param_2[0xba] + (param_2[0xbd] * local_34 + param_2[0xbb]) * 8,8);
          _gfortran_transfer_real
                    (&local_88c,param_2[0xb4] + (param_2[0xb7] * local_34 + param_2[0xb5]) * 8,8);
          _gfortran_transfer_integer
                    (&local_88c,param_2[0x37] + (param_2[0x3a] * local_34 + param_2[0x38]) * 4,4);
          _gfortran_transfer_integer
                    (&local_88c,param_2[0x31] + (param_2[0x34] * local_34 + param_2[0x32]) * 4,4);
          _gfortran_transfer_integer
                    (&local_88c,param_2[0x2b] + (param_2[0x2e] * local_34 + param_2[0x2c]) * 4,4);
          _gfortran_transfer_integer
                    (&local_88c,param_2[0x3d] + (param_2[0x40] * local_34 + param_2[0x3e]) * 4,4);
          _gfortran_transfer_integer(&local_88c,local_b0,4);
          _gfortran_transfer_integer(&local_88c,local_ac,4);
          pcVar16 = (char *)0x4;
          ppiVar14 = &local_2a8;
          _gfortran_transfer_integer(&local_88c);
          _gfortran_st_read_done(&local_88c);
          bVar13 = local_34 != iVar2;
          local_34 = local_34 + 1;
        } while (bVar13);
      }
    }
    else {
      if ((((local_84 == 0x22) || (local_84 == 0x28)) || (local_84 == 0x29)) || (local_84 == 0x2a))
      {
        local_34 = 1;
        if (0 < local_2b4) {
          do {
            local_884 = "hdr_io.F90";
            local_880 = 0x1a5;
            local_88c = 0;
            local_888 = *param_4;
            _gfortran_st_read(&local_88c,ppiVar14,pcVar16);
            _gfortran_transfer_character
                      (&local_88c,param_2[200] + (param_2[0xcb] * local_34 + param_2[0xc9]) * 0x84,
                       0x84);
            _gfortran_transfer_real
                      (&local_88c,param_2[0xba] + (param_2[0xbd] * local_34 + param_2[0xbb]) * 8,8);
            _gfortran_transfer_real
                      (&local_88c,param_2[0xb4] + (param_2[0xb7] * local_34 + param_2[0xb5]) * 8,8);
            _gfortran_transfer_integer
                      (&local_88c,param_2[0x37] + (param_2[0x3a] * local_34 + param_2[0x38]) * 4,4);
            _gfortran_transfer_integer
                      (&local_88c,param_2[0x31] + (param_2[0x34] * local_34 + param_2[0x32]) * 4,4);
            _gfortran_transfer_integer
                      (&local_88c,param_2[0x2b] + (param_2[0x2e] * local_34 + param_2[0x2c]) * 4,4);
            ppiVar14 = (int **)(param_2[0x3d] + (param_2[0x40] * local_34 + param_2[0x3e]) * 4);
            pcVar16 = (char *)0x4;
            _gfortran_transfer_integer(&local_88c);
            _gfortran_st_read_done(&local_88c);
            bVar13 = local_34 != iVar2;
            local_34 = local_34 + 1;
          } while (bVar13);
        }
      }
      else {
        if ((0x2b < local_84) && (local_34 = 1, 0 < local_2b4)) {
          do {
            local_884 = "hdr_io.F90";
            local_880 = 0x1ae;
            local_88c = 0;
            local_888 = *param_4;
            _gfortran_st_read(&local_88c,ppiVar14,pcVar16);
            _gfortran_transfer_character
                      (&local_88c,param_2[200] + (param_2[0xcb] * local_34 + param_2[0xc9]) * 0x84,
                       0x84);
            _gfortran_transfer_real
                      (&local_88c,param_2[0xba] + (param_2[0xbd] * local_34 + param_2[0xbb]) * 8,8);
            _gfortran_transfer_real
                      (&local_88c,param_2[0xb4] + (param_2[0xb7] * local_34 + param_2[0xb5]) * 8,8);
            _gfortran_transfer_integer
                      (&local_88c,param_2[0x37] + (param_2[0x3a] * local_34 + param_2[0x38]) * 4,4);
            _gfortran_transfer_integer
                      (&local_88c,param_2[0x31] + (param_2[0x34] * local_34 + param_2[0x32]) * 4,4);
            _gfortran_transfer_integer
                      (&local_88c,param_2[0x2b] + (param_2[0x2e] * local_34 + param_2[0x2c]) * 4,4);
            _gfortran_transfer_integer
                      (&local_88c,param_2[0x3d] + (param_2[0x40] * local_34 + param_2[0x3e]) * 4,4);
            ppiVar14 = (int **)(param_2[0x19] + (param_2[0x1c] * local_34 + param_2[0x1a]) * 4);
            pcVar16 = (char *)0x4;
            _gfortran_transfer_integer(&local_88c);
            _gfortran_st_read_done(&local_88c);
            bVar13 = local_34 != iVar2;
            local_34 = local_34 + 1;
          } while (bVar13);
        }
      }
    }
  }
  *(undefined8 *)(param_2 + 0x6b) = 0;
  if (local_84 == 0x16) {
    local_884 = "hdr_io.F90";
    local_880 = 0x1b9;
    local_88c = 0;
    local_888 = *param_4;
    _gfortran_st_read(&local_88c,ppiVar14,pcVar16);
    _gfortran_transfer_real(&local_88c,param_2 + 0x6d,8);
    _gfortran_transfer_array(&local_88c,param_2 + 0xab,8,0);
    _gfortran_transfer_real(&local_88c,param_2 + 0x69,8);
    _gfortran_st_read_done(&local_88c);
  }
  else {
    if (((local_84 == 0x17) || (local_84 == 0x22)) || (0x27 < local_84)) {
      local_884 = "hdr_io.F90";
      local_880 = 0x1bb;
      local_88c = 0;
      local_888 = *param_4;
      _gfortran_st_read(&local_88c,ppiVar14,pcVar16);
      _gfortran_transfer_real(&local_88c,param_2 + 0x6d,8);
      _gfortran_transfer_array(&local_88c,param_2 + 0xab,8,0);
      _gfortran_transfer_real(&local_88c,param_2 + 0x69,8);
      _gfortran_transfer_real(&local_88c,param_2 + 0x6b,8);
      _gfortran_st_read_done(&local_88c);
    }
  }
  if ((local_84 < 0x2c) || (param_2[0xf] != 1)) goto LAB_08067a34;
  uVar12 = param_2[5];
  local_88 = 1;
  if (0 < (int)uVar12) {
    do {
      iVar3 = *(int *)(param_2[0x5b] + (param_2[0x5e] * local_88 + param_2[0x5c]) * 4);
      uVar7 = ((*(int *)(param_2[0x19] + (param_2[0x1c] * iVar3 + param_2[0x1a]) * 4) + 1) *
              *(int *)(param_2[0x19] + (param_2[0x1c] * iVar3 + param_2[0x1a]) * 4)) / 2;
      *(uint *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 4) = uVar7;
      *(undefined4 *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce]) =
           *(undefined4 *)(param_2[0x19] + (param_2[0x1c] * iVar3 + param_2[0x1a]) * 4);
      *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0x10) =
           param_2[8];
      *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0x14) =
           param_2[10];
      *(undefined4 *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0x20) =
           0x109;
      *(undefined4 *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0x28) = 1
      ;
      *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0x2c) =
           param_2[8];
      *(undefined4 *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0x24) = 1
      ;
      iVar3 = 0;
      if (-1 < param_2[8]) {
        iVar3 = param_2[8];
      }
      if (param_2[8] < 1) {
        sVar4 = 0;
      }
      else {
        sVar4 = iVar3 * 4;
      }
      if ((int)sVar4 < 0) {
        sVar4 = _gfortran_runtime_error
                          (
                          "Attempt to allocate negative amount of memory. Possible integer overflow"
                          );
      }
      if ((int)sVar4 < 1) {
        sVar4 = 1;
      }
      pvVar5 = malloc(sVar4);
      if (pvVar5 == (void *)0x0) {
        _gfortran_os_error("Out of memory");
        pvVar5 = extraout_EDX;
      }
      *(void **)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0x18) = pvVar5
      ;
      *(undefined4 *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0x1c) =
           0xffffffff;
      *(undefined4 *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 200) =
           0x21a;
      *(undefined4 *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0xd0) = 1
      ;
      *(uint *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0xd4) = uVar7;
      *(undefined4 *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0xcc) = 1
      ;
      uVar8 = 0;
      if (-1 < (int)uVar7) {
        uVar8 = uVar7;
      }
      *(undefined4 *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0xdc) = 1
      ;
      *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0xe0) =
           param_2[8];
      *(uint *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0xd8) = uVar8;
      iVar3 = param_2[8];
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      if (param_2[8] < 1 || (int)uVar7 < 1) {
        sVar4 = 0;
      }
      else {
        sVar4 = iVar3 * uVar8 * 8;
      }
      if ((int)sVar4 < 0) {
        sVar4 = _gfortran_runtime_error
                          (
                          "Attempt to allocate negative amount of memory. Possible integer overflow"
                          );
      }
      if ((int)sVar4 < 1) {
        sVar4 = 1;
      }
      pvVar5 = malloc(sVar4);
      if (pvVar5 == (void *)0x0) {
        _gfortran_os_error("Out of memory");
        pvVar5 = extraout_EDX_00;
      }
      *(void **)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0xc0) = pvVar5
      ;
      *(uint *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0xc4) = ~uVar8;
      *(undefined4 *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0x50) =
           0x10a;
      *(undefined4 *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0x58) = 1
      ;
      *(uint *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0x5c) = uVar7;
      *(undefined4 *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0x54) = 1
      ;
      uVar8 = 0;
      if (-1 < (int)uVar7) {
        uVar8 = uVar7;
      }
      *(undefined4 *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 100) = 1;
      *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0x68) =
           param_2[8];
      *(uint *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0x60) = uVar8;
      iVar3 = param_2[8];
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      if (param_2[8] < 1 || (int)uVar7 < 1) {
        sVar4 = 0;
      }
      else {
        sVar4 = iVar3 * uVar8 * 4;
      }
      if ((int)sVar4 < 0) {
        sVar4 = _gfortran_runtime_error
                          (
                          "Attempt to allocate negative amount of memory. Possible integer overflow"
                          );
      }
      if ((int)sVar4 < 1) {
        sVar4 = 1;
      }
      pvVar5 = malloc(sVar4);
      if (pvVar5 == (void *)0x0) {
        _gfortran_os_error("Out of memory");
        pvVar5 = extraout_EDX_01;
      }
      *(void **)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0x48) = pvVar5
      ;
      *(uint *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0x4c) = ~uVar8;
      bVar13 = local_88 != uVar12;
      local_88 = local_88 + 1;
    } while (bVar13);
  }
  local_2d0 = 0x10a;
  local_2c8 = 1;
  local_2c4 = param_2[8];
  local_2cc = 1;
  local_2c0 = param_2[8];
  if ((int)local_2c0 < 0) {
    local_2c0 = 0;
  }
  local_2bc = 1;
  local_2b8 = param_2[5];
  iVar3 = param_2[5];
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  uVar12 = ~local_2c0;
  if (param_2[5] < 1 || param_2[8] < 1) {
    sVar4 = 0;
  }
  else {
    sVar4 = iVar3 * local_2c0 * 4;
  }
  if (local_2d8 == (void *)0x0) {
    if ((int)sVar4 < 0) {
      sVar4 = _gfortran_runtime_error
                        ("Attempt to allocate negative amount of memory. Possible integer overflow")
      ;
    }
    if ((int)sVar4 < 1) {
      sVar4 = 1;
    }
    pvVar5 = malloc(sVar4);
    if (pvVar5 == (void *)0x0) {
      pvVar5 = (void *)_gfortran_os_error("Out of memory");
    }
    local_884 = "hdr_io.F90";
    local_880 = 0x1d1;
    local_88c = 0;
    local_888 = *param_4;
    local_2d8 = pvVar5;
    local_2d4 = uVar12;
    _gfortran_st_read(&local_88c);
    uVar12 = param_2[5];
    local_88 = 1;
    if (0 < (int)uVar12) goto LAB_08061d49;
  }
  else {
    _gfortran_runtime_error_at
              ("At line 464 of file hdr_io.F90",
               "Attempting to allocate already allocated array \'%s\'",&DAT_0807284f);
LAB_08061d49:
    do {
      iVar3 = param_2[8];
      local_a8 = 1;
      if (0 < iVar3) {
        do {
          _gfortran_transfer_integer
                    (&local_88c,
                     (void *)((int)local_2d8 +
                             (local_2cc * local_a8 + local_88 * local_2c0 + local_2d4) * 4),4);
          bVar13 = local_a8 != iVar3;
          local_a8 = local_a8 + 1;
        } while (bVar13);
      }
      bVar13 = local_88 != uVar12;
      local_88 = local_88 + 1;
    } while (bVar13);
  }
  _gfortran_st_read_done(&local_88c);
  uVar12 = param_2[5];
  local_88 = 1;
  if (0 < (int)uVar12) {
    do {
      iVar3 = param_2[8];
      iVar10 = *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0x18);
      iVar6 = *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0x1c);
      iVar1 = *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0x24);
      iVar9 = 1;
      while (iVar9 <= iVar3) {
        *(undefined4 *)(iVar10 + (iVar1 * iVar9 + iVar6) * 4) =
             *(undefined4 *)
              ((int)local_2d8 + (iVar9 * local_2cc + local_2c0 * local_88 + local_2d4) * 4);
        iVar9 = iVar9 + 1;
      }
      bVar13 = local_88 != uVar12;
      local_88 = local_88 + 1;
    } while (bVar13);
  }
  local_8c = 0;
  iVar3 = local_2bc;
  while (iVar3 <= local_2b8) {
    iVar10 = local_2c8;
    while (iVar10 <= local_2c4) {
      local_8c = local_8c +
                 *(int *)((int)local_2d8 + (local_2cc * iVar10 + local_2c0 * iVar3 + local_2d4) * 4)
      ;
      iVar10 = iVar10 + 1;
    }
    iVar3 = iVar3 + 1;
  }
  local_98 = 0x109;
  local_90 = 1;
  local_94 = 1;
  iVar3 = 0;
  if (-1 < local_8c) {
    iVar3 = local_8c;
  }
  if (local_8c < 1) {
    sVar4 = 0;
  }
  else {
    sVar4 = iVar3 * 4;
  }
  acell[3]._4_4_ = local_8c;
  if (local_a0 == (void *)0x0) {
    if ((int)sVar4 < 0) {
      sVar4 = _gfortran_runtime_error
                        ("Attempt to allocate negative amount of memory. Possible integer overflow")
      ;
    }
    if ((int)sVar4 < 1) {
      sVar4 = 1;
    }
    pvVar5 = malloc(sVar4);
    if (pvVar5 == (void *)0x0) {
      pvVar5 = (void *)_gfortran_os_error("Out of memory");
    }
    local_9c = -1;
    local_6c = 1;
    iVar3 = 0;
    if (-1 < acell[3]._4_4_) {
      iVar3 = acell[3]._4_4_;
    }
    local_a0 = pvVar5;
    if (acell[3]._4_4_ < 1) goto LAB_0806212d;
    sVar4 = iVar3 * 8;
  }
  else {
    _gfortran_runtime_error_at
              ("At line 469 of file hdr_io.F90",
               "Attempting to allocate already allocated array \'%s\'","ibuffer");
LAB_0806212d:
    sVar4 = 0;
  }
  if (buffer[0]._0_4_ == (void *)0x0) {
    if ((int)sVar4 < 0) {
      sVar4 = _gfortran_runtime_error
                        ("Attempt to allocate negative amount of memory. Possible integer overflow")
      ;
    }
    if ((int)sVar4 < 1) {
      sVar4 = 1;
    }
    pvVar5 = malloc(sVar4);
    if (pvVar5 == (void *)0x0) {
      pvVar5 = (void *)_gfortran_os_error("Out of memory");
    }
    buffer[0]._4_4_ = -1;
    local_3c = 0;
    local_884 = "hdr_io.F90";
    local_880 = 0x1d6;
    local_88c = 0;
    local_888 = *param_4;
    buffer[0]._0_4_ = pvVar5;
    _gfortran_st_read(&local_88c);
    _gfortran_transfer_array(&local_88c,&local_a0,4,0);
    _gfortran_transfer_array(&local_88c,buffer,8,0);
    _gfortran_st_read_done(&local_88c);
    local_948 = param_2[5];
    local_88 = 1;
    if (0 < (int)local_948) goto LAB_08062261;
  }
  else {
    _gfortran_runtime_error_at
              ("At line 469 of file hdr_io.F90",
               "Attempting to allocate already allocated array \'%s\'","buffer");
LAB_08062261:
    do {
      iVar3 = param_2[8];
      local_a8 = 1;
      if (0 < iVar3) {
        do {
          iVar10 = *(int *)((int)local_2d8 +
                           (local_2cc * local_a8 + local_88 * local_2c0 + local_2d4) * 4);
          iVar6 = *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0x48
                          );
          iVar1 = *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0x4c
                          );
          iVar9 = *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0x60
                          );
          iVar2 = *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0x54
                          );
          iVar11 = 1;
          while (iVar11 <= iVar10) {
            *(undefined4 *)(iVar6 + (iVar2 * iVar11 + iVar9 * local_a8 + iVar1) * 4) =
                 *(undefined4 *)((int)local_a0 + ((iVar11 + local_3c) * local_94 + local_9c) * 4);
            iVar11 = iVar11 + 1;
          }
          iVar6 = *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0xc0
                          );
          iVar1 = *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0xc4
                          );
          iVar9 = *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0xd8
                          );
          iVar2 = *(int *)((param_2[0xd1] * local_88 + param_2[0xcf]) * 0x108 + param_2[0xce] + 0xcc
                          );
          iVar11 = 1;
          while (iVar11 <= iVar10) {
            *(undefined8 *)(iVar6 + (iVar11 * iVar2 + iVar9 * local_a8 + iVar1) * 8) =
                 *(undefined8 *)
                  ((int)buffer[0]._0_4_ + (buffer[0]._4_4_ + (iVar11 + local_3c) * local_6c) * 8);
            iVar11 = iVar11 + 1;
          }
          local_3c = local_3c + iVar10;
          bVar13 = local_a8 != iVar3;
          local_a8 = local_a8 + 1;
        } while (bVar13);
      }
      bVar13 = local_88 != local_948;
      local_88 = local_88 + 1;
    } while (bVar13);
  }
  if (local_a0 == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 479 of file hdr_io.F90","Attempt to DEALLOCATE unallocated \'%s\'","ibuffer"
              );
  }
  free(local_a0);
  local_a0 = (void *)0x0;
  if (buffer[0]._0_4_ == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 479 of file hdr_io.F90","Attempt to DEALLOCATE unallocated \'%s\'","buffer")
    ;
  }
  free(buffer[0]._0_4_);
  buffer[0]._0_4_ = (void *)0x0;
  if (local_2d8 == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 479 of file hdr_io.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_0807284f);
  }
  free(local_2d8);
  local_2d8 = (void *)0x0;
LAB_08067a34:
  if (local_2d8 != (void *)0x0) {
    free(local_2d8);
  }
  local_2d8 = (void *)0x0;
  if (local_a0 != (void *)0x0) {
    free(local_a0);
  }
  local_a0 = (void *)0x0;
  if (buffer[0]._0_4_ != (void *)0x0) {
    free(buffer[0]._0_4_);
  }
  return;
}



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
         undefined4 param_7,int param_8,int *param_9,integer_kind_4_ *param_10,int *param_11,
         wffile_type *param_12,int *param_13,int *param_14,undefined4 param_15,int *param_16,
         int *param_17,int *param_18,wffile_type *param_19)

{
  int iVar1;
  bool bVar2;
  wffile_type *pwVar3;
  wffile_type *pwVar4;
  undefined4 local_544;
  int local_540;
  char *local_53c;
  undefined4 local_538;
  integer_kind_4_ *local_52c;
  undefined4 local_518;
  char *local_514;
  undefined4 local_510;
  undefined *local_504;
  undefined4 local_500;
  undefined local_3f0 [20];
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
  undefined local_298 [20];
  int local_284;
  undefined local_280 [20];
  int local_26c;
  int local_268;
  int local_264;
  int local_260;
  undefined local_25c [16];
  int local_24c;
  int local_248;
  int local_244;
  int local_240;
  undefined local_23c [500];
  integer_kind_4_ ios;
  integer_kind_4_ ubound_0;
  integer_kind_4_ ubound_2;
  integer_kind_4_ iband;
  integer_kind_4_ indxx;
  integer_kind_4_ ipw;
  integer_kind_4_ ubound_4;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  ubound_4 = *param_13 * *param_17;
  iVar1 = _gfortran_pow_i4_i4(*param_9 * 2,*param_3);
  ubound_2 = *param_9 * iVar1;
  ubound_0 = *param_10;
  local_24 = *param_9;
  local_264 = *param_18 + 0x10e;
  pwVar4 = (wffile_type *)local_25c;
  pwVar3 = (wffile_type *)&DAT_08072f78;
  timab(&local_264,&DAT_08072f78,pwVar4);
  if ((*param_9 < *param_11) && (*param_16 != -1)) {
    local_3f0._8_4_ = "rwwf.F90";
    local_3f0._12_4_ = 0xb4;
    local_3b0 = local_23c;
    local_3ac = 500;
    local_3c4 = 0;
    local_3f0._4_4_ = 0;
    local_3c0 = 
    "(a,a,a,a,a,a,i5,a,i5,a)\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
    ;
    local_3bc = 0x17;
    local_3f0._0_4_ = 0x5000;
    _gfortran_st_write(local_3f0);
    _gfortran_transfer_character
              (local_3f0,
               "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS",1);
    _gfortran_transfer_character
              (local_3f0,
               " rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS",0xd);
    _gfortran_transfer_character
              (local_3f0,
               "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS",1);
    _gfortran_transfer_character
              (local_3f0,"  One should have nband<=mband  However, nband=, and mband=.PERS",0x1e);
    _gfortran_transfer_character
              (local_3f0,
               "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS",1);
    _gfortran_transfer_character(local_3f0,"  However, nband=, and mband=.PERS",0x11);
    _gfortran_transfer_integer(local_3f0,param_11,4);
    _gfortran_transfer_character(local_3f0,", and mband=.PERS",0xc);
    _gfortran_transfer_integer(local_3f0,param_9,4);
    _gfortran_transfer_character(local_3f0,".PERS",1);
    _gfortran_st_write_done(local_3f0);
    pwVar4 = (wffile_type *)0x8072fe6;
    wrtout(&DAT_08072fec,local_23c,"PERS",500,4);
    pwVar3 = (wffile_type *)0x4;
    leave_new("PERS",4);
  }
  if ((*param_3 != 0) && (*param_3 != 1)) {
    local_3f0._8_4_ = "rwwf.F90";
    local_3f0._12_4_ = 0xbe;
    local_3b0 = local_23c;
    local_3ac = 500;
    local_3c4 = 0;
    local_3f0._4_4_ = 0;
    local_3c0 = "(a,a,a,a,a,a,i5,a)";
    local_3bc = 0x12;
    local_3f0._0_4_ = 0x5000;
    _gfortran_st_write(local_3f0);
    _gfortran_transfer_character
              (local_3f0,
               "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS",1);
    _gfortran_transfer_character
              (local_3f0,
               " rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS",0xd);
    _gfortran_transfer_character
              (local_3f0,
               "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS",1);
    _gfortran_transfer_character
              (local_3f0,"  The argument formeig should be 0 or 1.  However, formeig=",0x28);
    _gfortran_transfer_character
              (local_3f0,
               "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS",1);
    _gfortran_transfer_character(local_3f0,"  However, formeig=",0x13);
    _gfortran_transfer_integer(local_3f0,param_3,4);
    _gfortran_transfer_character(local_3f0,".PERS",1);
    _gfortran_st_write_done(local_3f0);
    pwVar4 = (wffile_type *)0x8072fe6;
    wrtout(&DAT_08072fec,local_23c,"PERS",500,4);
    pwVar3 = (wffile_type *)0x4;
    leave_new("PERS",4);
  }
  if (((((*param_16 != 1) && (*param_16 != 2)) && (*param_16 != 3)) &&
      ((*param_16 != 4 && (*param_16 != -1)))) && ((*param_16 != -2 && (*param_16 != -4)))) {
    local_3f0._8_4_ = "rwwf.F90";
    local_3f0._12_4_ = 0xc9;
    local_3b0 = local_23c;
    local_3ac = 500;
    local_3c4 = 0;
    local_3f0._4_4_ = 0;
    local_3c0 = "(a,a,a,a,a,a,i5,a)";
    local_3bc = 0x12;
    local_3f0._0_4_ = 0x5000;
    _gfortran_st_write(local_3f0);
    _gfortran_transfer_character
              (local_3f0,
               "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS",1);
    _gfortran_transfer_character
              (local_3f0,
               " rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS",0xd);
    _gfortran_transfer_character
              (local_3f0,
               "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS",1);
    _gfortran_transfer_character
              (local_3f0,
                              
               "  The argument option should be 1, 2, 3, -1 or -2.  However, option=(a,a,a,a,a,a,i4,a,a,i4,a,a,a) rwwf: ERROR -"
               ,0x32);
    _gfortran_transfer_character
              (local_3f0,
               "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS",1);
    _gfortran_transfer_character
              (local_3f0,"  However, option=(a,a,a,a,a,a,i4,a,a,i4,a,a,a) rwwf: ERROR -",0x12);
    _gfortran_transfer_integer(local_3f0,param_16,4);
    _gfortran_transfer_character(local_3f0,".PERS",1);
    _gfortran_st_write_done(local_3f0);
    pwVar4 = (wffile_type *)0x8072fe6;
    wrtout(&DAT_08072fec,local_23c,"PERS",500,4);
    pwVar3 = (wffile_type *)0x4;
    leave_new("PERS",4);
  }
  local_260 = param_19->unwff;
  local_20 = 0;
  if ((param_19->accesswff == 0) ||
     ((param_19->accesswff == -1 && (param_19->master == param_19->me)))) {
    local_20 = 1;
  }
  local_28 = local_260;
  if ((*param_16 == 2) || (*param_16 == 4)) {
    if ((*param_16 == 2) || (*param_16 == 4)) {
      writewf(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
              param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_19);
    }
  }
  else {
    if ((*param_4 < 0x28) && (*param_4 != 0)) {
      param_6 = pwVar3;
      if (local_20 == 1) {
        local_3f0._8_4_ = "rwwf.F90";
        local_3f0._12_4_ = 0x110;
        ios = 0;
        local_3d8 = &ios;
        local_3f0._0_4_ = 0x20;
        local_3f0._4_4_ = local_260;
        _gfortran_st_read(local_3f0);
        _gfortran_transfer_integer(local_3f0,&local_244,4);
        pwVar4 = (wffile_type *)0x4;
        param_6 = param_12;
        _gfortran_transfer_integer(local_3f0,param_12,4);
        _gfortran_st_read_done(local_3f0);
      }
      if (ios != 0) {
        local_3f0._8_4_ = "rwwf.F90";
        local_3f0._12_4_ = 0x11f;
        local_3b0 = local_23c;
        local_3ac = 500;
        local_3c4 = 0;
        local_3f0._4_4_ = 0;
        local_3c0 = "(a,a,a,a,a,a,i4,a,a,i4,a,a,a) rwwf: ERROR -";
        local_3bc = 0x1d;
        local_3f0._0_4_ = 0x5000;
        _gfortran_st_write(local_3f0);
        _gfortran_transfer_character
                  (local_3f0,
                   "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                   ,1);
        _gfortran_transfer_character(local_3f0," rwwf: ERROR -",0xe);
        _gfortran_transfer_character
                  (local_3f0,
                   "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                   ,1);
        _gfortran_transfer_character
                  (local_3f0,
                                      
                   "  Reading option of rwwf. Trying to read  the (npw,nspinor,nband) record of a wf file, unit=  gave iostat="
                   ,0x28);
        _gfortran_transfer_character
                  (local_3f0,
                   "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                   ,1);
        _gfortran_transfer_character
                  (local_3f0,
                                      
                   "  the (npw,nband) record of a wf file, unit=  Reading option of rwwf. One should have npw=npw1  However, npw=, and npw1=  Reading option of rwwf. One should have nspinor=nspinor1  However, nspinor=, and nspinor1=  Reading option of rwwf. One should have npwso=npwso1  However, npwso=, and npwso1=  the k+g record of a wf file, unit=  an eigenvalue record of a wf file, unit="
                   ,0x2c);
        _gfortran_transfer_integer(local_3f0,&local_260,4);
        _gfortran_transfer_character
                  (local_3f0,
                   "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                   ,1);
        _gfortran_transfer_character(local_3f0,"  gave iostat=",0xe);
        _gfortran_transfer_integer(local_3f0,&ios,4);
        _gfortran_transfer_character(local_3f0,". Your file is likely not correct.",0x22);
        _gfortran_transfer_character
                  (local_3f0,
                   "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                   ,1);
        _gfortran_transfer_character(local_3f0,"  Action: check your input wf file.",0x23);
        _gfortran_st_write_done(local_3f0);
        pwVar4 = (wffile_type *)0x8072fe6;
        wrtout(&DAT_08072fec,local_23c,"PERS",500,4);
        param_6 = (wffile_type *)0x4;
        leave_new("PERS",4);
      }
    }
    else {
      pwVar4 = param_12;
      wffreadnpwrec(&ios,(integer_kind_4_ *)param_6,(integer_kind_4_ *)param_12,&local_240,
                    &local_24c,param_19);
      local_244 = local_24c * local_240;
      if (ios != 0) {
        local_3f0._8_4_ = "rwwf.F90";
        local_3f0._12_4_ = 0x109;
        local_3b0 = local_23c;
        local_3ac = 500;
        local_3c4 = 0;
        local_3f0._4_4_ = 0;
        local_3c0 = "(a,a,a,a,a,a,i4,a,a,i4,a,a,a) rwwf: ERROR -";
        local_3bc = 0x1d;
        local_3f0._0_4_ = 0x5000;
        _gfortran_st_write(local_3f0);
        _gfortran_transfer_character
                  (local_3f0,
                   "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                   ,1);
        _gfortran_transfer_character(local_3f0," rwwf: ERROR -",0xe);
        _gfortran_transfer_character
                  (local_3f0,
                   "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                   ,1);
        _gfortran_transfer_character
                  (local_3f0,
                                      
                   "  Reading option of rwwf. Trying to read  the (npw,nspinor,nband) record of a wf file, unit=  gave iostat="
                   ,0x28);
        _gfortran_transfer_character
                  (local_3f0,
                   "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                   ,1);
        _gfortran_transfer_character
                  (local_3f0,"  the (npw,nspinor,nband) record of a wf file, unit=  gave iostat=",
                   0x34);
        _gfortran_transfer_integer(local_3f0,&local_260,4);
        _gfortran_transfer_character
                  (local_3f0,
                   "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                   ,1);
        _gfortran_transfer_character(local_3f0,"  gave iostat=",0xe);
        _gfortran_transfer_integer(local_3f0,&ios,4);
        _gfortran_transfer_character(local_3f0,". Your file is likely not correct.",0x22);
        _gfortran_transfer_character
                  (local_3f0,
                   "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                   ,1);
        _gfortran_transfer_character(local_3f0,"  Action: check your input wf file.",0x23);
        _gfortran_st_write_done(local_3f0);
        pwVar4 = (wffile_type *)0x8072fe6;
        wrtout(&DAT_08072fec,local_23c,"PERS",500,4);
        param_6 = (wffile_type *)0x4;
        leave_new("PERS",4);
      }
    }
    if ((*param_16 == 1) || (*param_16 == -2)) {
      if ((*param_4 < 0x28) && (*param_4 != 0)) {
        if (*param_13 * *param_14 - local_244 != 0) {
          local_3f0._8_4_ = "rwwf.F90";
          local_3f0._12_4_ = 0x146;
          local_3b0 = local_23c;
          local_3ac = 500;
          local_3c4 = 0;
          local_3f0._4_4_ = 0;
          local_3c0 = 
          "(a,a,a,a,a,a,i5,a,i5,a)\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
          ;
          local_3bc = 0x17;
          local_3f0._0_4_ = 0x5000;
          _gfortran_st_write(local_3f0);
          _gfortran_transfer_character
                    (local_3f0,
                                          
                     "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                     ,1);
          _gfortran_transfer_character
                    (local_3f0,
                     " rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                     ,0xd);
          _gfortran_transfer_character
                    (local_3f0,
                                          
                     "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                     ,1);
          _gfortran_transfer_character
                    (local_3f0,
                                          
                     "  Reading option of rwwf. One should have npwso=npwso1  However, npwso=, and npwso1=  the k+g record of a wf file, unit=  an eigenvalue record of a wf file, unit="
                     ,0x36);
          _gfortran_transfer_character
                    (local_3f0,
                                          
                     "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                     ,1);
          _gfortran_transfer_character
                    (local_3f0,
                                          
                     "  However, npwso=, and npwso1=  the k+g record of a wf file, unit=  an eigenvalue record of a wf file, unit="
                     ,0x11);
          local_268 = *param_14 * *param_13;
          _gfortran_transfer_integer(local_3f0,&local_268,4);
          _gfortran_transfer_character
                    (local_3f0,
                                          
                     ", and npwso1=  the k+g record of a wf file, unit=  an eigenvalue record of a wf file, unit="
                     ,0xd);
          _gfortran_transfer_integer(local_3f0,&local_244,4);
          _gfortran_transfer_character(local_3f0,".PERS",1);
          _gfortran_st_write_done(local_3f0);
          pwVar4 = (wffile_type *)0x8072fe6;
          wrtout(&DAT_08072fec,local_23c,"PERS",500,4);
          param_6 = (wffile_type *)0x4;
          leave_new("PERS",4);
        }
      }
      else {
        if (*param_13 != local_240) {
          local_3f0._8_4_ = "rwwf.F90";
          local_3f0._12_4_ = 0x133;
          local_3b0 = local_23c;
          local_3ac = 500;
          local_3c4 = 0;
          local_3f0._4_4_ = 0;
          local_3c0 = 
          "(a,a,a,a,a,a,i5,a,i5,a)\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
          ;
          local_3bc = 0x17;
          local_3f0._0_4_ = 0x5000;
          _gfortran_st_write(local_3f0);
          _gfortran_transfer_character
                    (local_3f0,
                                          
                     "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                     ,1);
          _gfortran_transfer_character
                    (local_3f0,
                     " rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                     ,0xd);
          _gfortran_transfer_character
                    (local_3f0,
                                          
                     "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                     ,1);
          _gfortran_transfer_character
                    (local_3f0,
                                          
                     "  Reading option of rwwf. One should have npw=npw1  However, npw=, and npw1=  Reading option of rwwf. One should have nspinor=nspinor1  However, nspinor=, and nspinor1=  Reading option of rwwf. One should have npwso=npwso1  However, npwso=, and npwso1=  the k+g record of a wf file, unit=  an eigenvalue record of a wf file, unit="
                     ,0x32);
          _gfortran_transfer_character
                    (local_3f0,
                                          
                     "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                     ,1);
          _gfortran_transfer_character
                    (local_3f0,
                                          
                     "  However, npw=, and npw1=  Reading option of rwwf. One should have nspinor=nspinor1  However, nspinor=, and nspinor1=  Reading option of rwwf. One should have npwso=npwso1  However, npwso=, and npwso1=  the k+g record of a wf file, unit=  an eigenvalue record of a wf file, unit="
                     ,0xf);
          _gfortran_transfer_integer(local_3f0,param_13,4);
          _gfortran_transfer_character
                    (local_3f0,
                                          
                     ", and npw1=  Reading option of rwwf. One should have nspinor=nspinor1  However, nspinor=, and nspinor1=  Reading option of rwwf. One should have npwso=npwso1  However, npwso=, and npwso1=  the k+g record of a wf file, unit=  an eigenvalue record of a wf file, unit="
                     ,0xb);
          _gfortran_transfer_integer(local_3f0,&local_240,4);
          _gfortran_transfer_character(local_3f0,".PERS",1);
          _gfortran_st_write_done(local_3f0);
          pwVar4 = (wffile_type *)0x8072fe6;
          wrtout(&DAT_08072fec,local_23c,"PERS",500,4);
          param_6 = (wffile_type *)0x4;
          leave_new("PERS",4);
        }
        if (*param_14 != local_24c) {
          local_3f0._8_4_ = "rwwf.F90";
          local_3f0._12_4_ = 0x13b;
          local_3b0 = local_23c;
          local_3ac = 500;
          local_3c4 = 0;
          local_3f0._4_4_ = 0;
          local_3c0 = 
          "(a,a,a,a,a,a,i5,a,i5,a)\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
          ;
          local_3bc = 0x17;
          local_3f0._0_4_ = 0x5000;
          _gfortran_st_write(local_3f0);
          _gfortran_transfer_character
                    (local_3f0,
                                          
                     "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                     ,1);
          _gfortran_transfer_character
                    (local_3f0,
                     " rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                     ,0xd);
          _gfortran_transfer_character
                    (local_3f0,
                                          
                     "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                     ,1);
          _gfortran_transfer_character
                    (local_3f0,
                                          
                     "  Reading option of rwwf. One should have nspinor=nspinor1  However, nspinor=, and nspinor1=  Reading option of rwwf. One should have npwso=npwso1  However, npwso=, and npwso1=  the k+g record of a wf file, unit=  an eigenvalue record of a wf file, unit="
                     ,0x3a);
          _gfortran_transfer_character
                    (local_3f0,
                                          
                     "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                     ,1);
          _gfortran_transfer_character
                    (local_3f0,
                                          
                     "  However, nspinor=, and nspinor1=  Reading option of rwwf. One should have npwso=npwso1  However, npwso=, and npwso1=  the k+g record of a wf file, unit=  an eigenvalue record of a wf file, unit="
                     ,0x13);
          _gfortran_transfer_integer(local_3f0,param_14,4);
          _gfortran_transfer_character
                    (local_3f0,
                                          
                     ", and nspinor1=  Reading option of rwwf. One should have npwso=npwso1  However, npwso=, and npwso1=  the k+g record of a wf file, unit=  an eigenvalue record of a wf file, unit="
                     ,0xf);
          _gfortran_transfer_integer(local_3f0,&local_24c,4);
          _gfortran_transfer_character(local_3f0,".PERS",1);
          _gfortran_st_write_done(local_3f0);
          pwVar4 = (wffile_type *)0x8072fe6;
          wrtout(&DAT_08072fec,local_23c,"PERS",500,4);
          param_6 = (wffile_type *)0x4;
          leave_new("PERS",4);
        }
      }
    }
    if ((0x27 < *param_4) || (*param_4 == 0)) {
      if (((*param_16 == 1) || ((*param_16 == -2 || (*param_16 == 3)))) && (*param_17 != 0)) {
        if (local_20 == 1) {
          local_53c = "rwwf.F90";
          local_538 = 0x155;
          ios = 0;
          local_52c = &ios;
          local_544 = 0x20;
          local_540 = local_260;
          _gfortran_st_read(&local_544);
          local_3d0 = *param_13;
          local_3f0._8_4_ = (char *)0x10a;
          local_3f0._16_4_ = 1;
          local_3dc = 3;
          local_3f0._12_4_ = 1;
          local_3d4 = 1;
          local_3d8 = (integer_kind_4_ *)0x3;
          local_3f0._0_4_ = param_8;
          local_3f0._4_4_ = -4;
          pwVar4 = (wffile_type *)0x4;
          param_6 = (wffile_type *)local_3f0;
          _gfortran_transfer_array(&local_544,param_6,4,0);
          _gfortran_st_read_done(&local_544);
        }
      }
      else {
        param_6 = (wffile_type *)&DAT_08072f78;
        pwVar4 = param_19;
        wffreadskiprec(&ios,(integer_kind_4_ *)&DAT_08072f78,param_19);
      }
      if (ios != 0) {
        local_53c = "rwwf.F90";
        local_538 = 0x17e;
        local_504 = local_23c;
        local_500 = 500;
        local_518 = 0;
        local_540 = 0;
        local_514 = "(a,a,a,a,a,a,i4,a,a,i4,a,a,a) rwwf: ERROR -";
        local_510 = 0x1d;
        local_544 = 0x5000;
        _gfortran_st_write(&local_544);
        _gfortran_transfer_character
                  (&local_544,
                   "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                   ,1);
        _gfortran_transfer_character(&local_544," rwwf: ERROR -",0xe);
        _gfortran_transfer_character
                  (&local_544,
                   "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                   ,1);
        _gfortran_transfer_character
                  (&local_544,
                                      
                   "  Reading option of rwwf. Trying to read  the (npw,nspinor,nband) record of a wf file, unit=  gave iostat="
                   ,0x28);
        _gfortran_transfer_character
                  (&local_544,
                   "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                   ,1);
        _gfortran_transfer_character
                  (&local_544,
                   "  the k+g record of a wf file, unit=  an eigenvalue record of a wf file, unit=",
                   0x24);
        _gfortran_transfer_integer(&local_544,&local_260,4);
        _gfortran_transfer_character
                  (&local_544,
                   "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                   ,1);
        _gfortran_transfer_character(&local_544,"  gave iostat=",0xe);
        _gfortran_transfer_integer(&local_544,&ios,4);
        _gfortran_transfer_character(&local_544,". Your file is likely not correct.",0x22);
        _gfortran_transfer_character
                  (&local_544,
                   "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                   ,1);
        _gfortran_transfer_character(&local_544,"  Action: check your input wf file.",0x23);
        _gfortran_st_write_done(&local_544);
        pwVar4 = (wffile_type *)0x8072fe6;
        wrtout(&DAT_08072fec,local_23c,"PERS",500,4);
        param_6 = (wffile_type *)0x4;
        leave_new("PERS",4);
      }
    }
    local_2c = *param_11;
    if (param_12->unwff < *param_11) {
      local_2c = param_12->unwff;
    }
    if (*param_3 == 0) {
      if (((*param_16 == 1) || (*param_16 == 3)) || (*param_16 == -4)) {
        if (local_20 == 1) {
          local_53c = "rwwf.F90";
          local_538 = 0x18c;
          ios = 0;
          local_52c = &ios;
          local_544 = 0x20;
          local_540 = local_260;
          _gfortran_st_read(&local_544);
          local_280._8_4_ = 0x219;
          local_280._16_4_ = 1;
          local_26c = local_2c;
          local_280._12_4_ = 1;
          local_280._0_4_ = param_2;
          local_280._4_4_ = -1;
          pwVar4 = (wffile_type *)0x8;
          param_6 = (wffile_type *)local_280;
          _gfortran_transfer_array(&local_544,param_6,8,0);
          _gfortran_st_read_done(&local_544);
        }
      }
      else {
        param_6 = (wffile_type *)&DAT_08072f78;
        pwVar4 = param_19;
        wffreadskiprec(&ios,(integer_kind_4_ *)&DAT_08072f78,param_19);
      }
      if (ios != 0) {
        local_53c = "rwwf.F90";
        local_538 = 0x1a4;
        local_504 = local_23c;
        local_500 = 500;
        local_518 = 0;
        local_540 = 0;
        local_514 = "(a,a,a,a,a,a,i4,a,a,i4,a,a,a) rwwf: ERROR -";
        local_510 = 0x1d;
        local_544 = 0x5000;
        _gfortran_st_write(&local_544);
        _gfortran_transfer_character
                  (&local_544,
                   "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                   ,1);
        _gfortran_transfer_character(&local_544," rwwf: ERROR -",0xe);
        _gfortran_transfer_character
                  (&local_544,
                   "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                   ,1);
        _gfortran_transfer_character
                  (&local_544,
                                      
                   "  Reading option of rwwf. Trying to read  the (npw,nspinor,nband) record of a wf file, unit=  gave iostat="
                   ,0x28);
        _gfortran_transfer_character
                  (&local_544,
                   "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                   ,1);
        _gfortran_transfer_character(&local_544,"  an eigenvalue record of a wf file, unit=",0x2a);
        _gfortran_transfer_integer(&local_544,&local_260,4);
        _gfortran_transfer_character
                  (&local_544,
                   "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                   ,1);
        _gfortran_transfer_character(&local_544,"  gave iostat=",0xe);
        _gfortran_transfer_integer(&local_544,&ios,4);
        _gfortran_transfer_character(&local_544,". Your file is likely not correct.",0x22);
        _gfortran_transfer_character
                  (&local_544,
                   "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                   ,1);
        _gfortran_transfer_character(&local_544,"  Action: check your input wf file.",0x23);
        _gfortran_st_write_done(&local_544);
        pwVar4 = (wffile_type *)0x8072fe6;
        wrtout(&DAT_08072fec,local_23c,"PERS",500,4);
        param_6 = (wffile_type *)0x4;
        leave_new("PERS",4);
      }
    }
    indxx = 0;
    iVar1 = *param_11;
    if (param_12->unwff < *param_11) {
      iVar1 = param_12->unwff;
    }
    local_2c = iVar1;
    if (((0 < iVar1) && (*param_16 != -1)) && (iband = 1, 0 < iVar1)) {
      do {
        if (*param_3 == 1) {
          if (((*param_16 == 1) || (*param_16 == 3)) || (*param_16 == -4)) {
            if (local_20 == 1) {
              local_53c = "rwwf.F90";
              local_538 = 0x1db;
              ios = 0;
              local_52c = &ios;
              local_544 = 0x20;
              local_540 = local_260;
              _gfortran_st_read(&local_544,param_6,pwVar4);
              local_298._8_4_ = 0x219;
              local_298._16_4_ = 1;
              local_284 = (1 - (indxx + 1)) + local_2c * 2 + indxx;
              local_298._12_4_ = 1;
              local_298._0_4_ = indxx * 8 + param_2;
              local_298._4_4_ = -(indxx + 1);
              pwVar4 = (wffile_type *)0x8;
              param_6 = (wffile_type *)local_298;
              _gfortran_transfer_array(&local_544,param_6,8,0);
              _gfortran_st_read_done(&local_544);
            }
            indxx = indxx + local_2c * 2;
          }
          else {
            param_6 = (wffile_type *)&DAT_08072f78;
            pwVar4 = param_19;
            wffreadskiprec(&ios,(integer_kind_4_ *)&DAT_08072f78,param_19);
          }
          if (ios != 0) {
            local_53c = "rwwf.F90";
            local_538 = 0x1ee;
            local_504 = local_23c;
            local_500 = 500;
            local_518 = 0;
            local_540 = 0;
            local_514 = "(a,a,a,a,a,a,i4,a,a,i4,a,a,a) rwwf: ERROR -";
            local_510 = 0x1d;
            local_544 = 0x5000;
            _gfortran_st_write(&local_544);
            _gfortran_transfer_character
                      (&local_544,
                                              
                       "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                       ,1);
            _gfortran_transfer_character(&local_544," rwwf: ERROR -",0xe);
            _gfortran_transfer_character
                      (&local_544,
                                              
                       "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                       ,1);
            _gfortran_transfer_character
                      (&local_544,
                                              
                       "  Reading option of rwwf. Trying to read  the (npw,nspinor,nband) record of a wf file, unit=  gave iostat="
                       ,0x28);
            _gfortran_transfer_character
                      (&local_544,
                                              
                       "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                       ,1);
            _gfortran_transfer_character(&local_544,&DAT_080732dc,0x2c);
            _gfortran_transfer_integer(&local_544,&local_260,4);
            _gfortran_transfer_character
                      (&local_544,
                                              
                       "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                       ,1);
            _gfortran_transfer_character(&local_544,"  gave iostat=",0xe);
            _gfortran_transfer_integer(&local_544,&ios,4);
            _gfortran_transfer_character(&local_544,". Your file is likely not correct.",0x22);
            _gfortran_transfer_character
                      (&local_544,
                                              
                       "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                       ,1);
            _gfortran_transfer_character(&local_544,"  Action: check your input wf file.",0x23);
            _gfortran_st_write_done(&local_544);
            pwVar4 = (wffile_type *)0x8072fe6;
            wrtout(&DAT_08072fec,local_23c,"PERS",500,4);
            param_6 = (wffile_type *)0x4;
            leave_new("PERS");
          }
        }
        if ((*param_16 == 1) || (*param_16 == -2)) {
          ipw = (iband + -1) * local_244 + *param_5;
          if (local_20 == 1) {
            local_53c = "rwwf.F90";
            local_538 = 0x1fa;
            ios = 0;
            local_52c = &ios;
            local_544 = 0x20;
            local_540 = local_260;
            _gfortran_st_read(&local_544,param_6);
            local_3f0._8_4_ = (char *)0x21a;
            local_3f0._16_4_ = 1;
            local_3dc = 2;
            local_3f0._12_4_ = 1;
            local_3d4 = 1;
            local_3d0 = (1 - (ipw + 1)) + local_244 + ipw;
            local_3d8 = (integer_kind_4_ *)0x2;
            local_3f0._0_4_ = ipw * 0x10 + param_1;
            local_3f0._4_4_ = (1 - (ipw + 1)) * 2 + -3;
            pwVar4 = (wffile_type *)0x8;
            param_6 = (wffile_type *)local_3f0;
            _gfortran_transfer_array(&local_544,param_6,8,0);
            _gfortran_st_read_done(&local_544);
          }
        }
        else {
          if (*param_16 != -4) {
            param_6 = (wffile_type *)&DAT_08072f78;
            pwVar4 = param_19;
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
          local_514 = "(a,a,a,a,a,a,i4,a,a,i4,a,a,a) rwwf: ERROR -";
          local_510 = 0x1d;
          local_544 = 0x5000;
          _gfortran_st_write(&local_544);
          _gfortran_transfer_character
                    (&local_544,
                                          
                     "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                     ,1);
          _gfortran_transfer_character(&local_544," rwwf: ERROR -",0xe);
          _gfortran_transfer_character
                    (&local_544,
                                          
                     "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                     ,1);
          _gfortran_transfer_character
                    (&local_544,
                                          
                     "  Reading option of rwwf. Trying to read  the (npw,nspinor,nband) record of a wf file, unit=  gave iostat="
                     ,0x28);
          _gfortran_transfer_character
                    (&local_544,
                                          
                     "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                     ,1);
          _gfortran_transfer_character(&local_544,&DAT_08073308,0x24);
          _gfortran_transfer_integer(&local_544,&local_260,4);
          _gfortran_transfer_character
                    (&local_544,
                                          
                     "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                     ,1);
          _gfortran_transfer_character(&local_544,"  gave iostat=",0xe);
          _gfortran_transfer_integer(&local_544,&ios,4);
          _gfortran_transfer_character(&local_544,". Your file is likely not correct.",0x22);
          _gfortran_transfer_character
                    (&local_544,
                                          
                     "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                     ,1);
          _gfortran_transfer_character(&local_544,"  Action: check your input wf file.",0x23);
          _gfortran_st_write_done(&local_544);
          pwVar4 = (wffile_type *)0x8072fe6;
          wrtout(&DAT_08072fec,local_23c,"PERS",500,4);
          param_6 = (wffile_type *)0x4;
          leave_new("PERS");
        }
        bVar2 = iband != iVar1;
        iband = iband + 1;
      } while (bVar2);
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
            ,undefined4 param_7,int param_8,int *param_9,integer_kind_4_ *param_10,int *param_11,
            integer_kind_4_ *param_12,integer_kind_4_ *param_13,integer_kind_4_ *param_14,
            int param_15,int *param_16,int *param_17,wffile_type *param_18)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  integer_kind_4_ *piVar4;
  integer_kind_4_ *piVar5;
  undefined4 local_504;
  integer_kind_4_ local_500;
  char *local_4fc;
  undefined4 local_4f8;
  int local_3b0;
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
  int local_25c;
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
  int local_34;
  integer_kind_4_ local_30;
  int local_2c;
  int local_28;
  integer_kind_4_ local_24;
  int local_20;
  
  ubound_65 = *param_13 * *param_17;
  iVar1 = _gfortran_pow_i4_i4(*param_9 * 2,*param_3);
  ubound_63 = *param_9 * iVar1;
  local_28 = *param_9;
  ubound_61 = *param_10;
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
    _gfortran_transfer_character
              (&local_3b0,
               "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS",1);
    _gfortran_transfer_character
              (&local_3b0," writewf : BUG -  The argument option should be 2 or 4.",0x10);
    _gfortran_transfer_character
              (&local_3b0,
               "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS",1);
    _gfortran_transfer_character(&local_3b0,"  The argument option should be 2 or 4.",0x27);
    _gfortran_transfer_character
              (&local_3b0,
               "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS",1);
    _gfortran_transfer_character
              (&local_3b0,"  However, option=(a,a,a,a,a,a,i4,a,a,i4,a,a,a) rwwf: ERROR -",0x12);
    _gfortran_transfer_integer(&local_3b0,param_16,4);
    _gfortran_transfer_character(&local_3b0,".PERS",1);
    _gfortran_st_write_done(&local_3b0);
    wrtout(&DAT_08072fec,local_244,"PERS",500,4);
    leave_new("PERS",4);
  }
  local_30 = param_18->unwff;
  local_20 = 0;
  if ((param_18->accesswff == 0) ||
     ((param_18->accesswff == -1 && (param_18->master == param_18->me)))) {
    local_20 = 1;
  }
  local_24 = local_30;
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
    _gfortran_transfer_character
              (&local_3b0,
               "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS",1);
    _gfortran_transfer_character
              (&local_3b0,
               " rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS",0xd);
    _gfortran_transfer_character
              (&local_3b0,
               "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS",1);
    _gfortran_transfer_character
              (&local_3b0,
                              
               "  Writing option of rwwf. One should have nband<=nband_disk, and nband_disk=wffclose.F90"
               ,0x3b);
    _gfortran_transfer_character
              (&local_3b0,
               "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS",1);
    _gfortran_transfer_character(&local_3b0,"  However, nband=, and mband=.PERS",0x11);
    _gfortran_transfer_integer(&local_3b0,param_11,4);
    _gfortran_transfer_character(&local_3b0,", and nband_disk=wffclose.F90",0x11);
    _gfortran_transfer_integer(&local_3b0,param_12,4);
    _gfortran_transfer_character(&local_3b0,".PERS",1);
    _gfortran_st_write_done(&local_3b0);
    wrtout(&DAT_08072fec,local_244,"PERS",500,4);
    leave_new("PERS",4);
  }
  piVar2 = param_12;
  piVar4 = param_13;
  piVar5 = param_14;
  wffwritenpwrec(&ios,param_12,param_13,param_14,param_18);
  if ((*param_17 == 0) || (*param_16 == 4)) {
    if (local_20 == 1) {
      local_4fc = "rwwf.F90";
      local_4f8 = 799;
      local_504 = 0;
      local_500 = local_24;
      _gfortran_st_write(&local_504);
      _gfortran_st_write_done(&local_504);
    }
  }
  else {
    if (local_20 == 1) {
      local_4fc = "rwwf.F90";
      local_4f8 = 0x2f8;
      local_504 = 0;
      local_500 = local_24;
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
      piVar5 = (integer_kind_4_ *)0x0;
      piVar4 = (integer_kind_4_ *)0x4;
      piVar2 = &local_3b0;
      _gfortran_transfer_array(&local_504,piVar2,4,0);
      _gfortran_st_write_done(&local_504);
    }
  }
  if (*param_3 == 0) {
    if (local_20 == 1) {
      local_4fc = "rwwf.F90";
      local_4f8 = 0x36d;
      local_504 = 0;
      local_500 = local_24;
      _gfortran_st_write(&local_504);
      iVar1 = *param_12;
      iband = 1;
      if (0 < iVar1) {
        do {
          piVar2 = (int *)((iband + -1) * 8 + param_2);
          piVar4 = (integer_kind_4_ *)0x8;
          _gfortran_transfer_real(&local_504,piVar2,8);
          bVar3 = iband != iVar1;
          iband = iband + 1;
        } while (bVar3);
      }
      iVar1 = *param_12;
      iband = 1;
      if (0 < iVar1) {
        do {
          piVar2 = (int *)((iband + -1) * 8 + param_15);
          piVar4 = (integer_kind_4_ *)0x8;
          _gfortran_transfer_real(&local_504,piVar2,8);
          bVar3 = iband != iVar1;
          iband = iband + 1;
        } while (bVar3);
      }
      _gfortran_st_write_done(&local_504);
    }
    if (*param_16 != 4) {
      local_2c = *param_14 * *param_13;
      iVar1 = *param_12;
      iband = 1;
      if (0 < iVar1) {
        do {
          ipw = (iband + -1) * local_2c + *param_5;
          if (local_20 == 1) {
            local_4fc = "rwwf.F90";
            local_4f8 = 0x37c;
            local_504 = 0;
            local_500 = local_24;
            _gfortran_st_write(&local_504,piVar2,piVar4,piVar5);
            local_3a8 = (char *)0x21a;
            local_3a0 = 1;
            local_39c = 2;
            local_3a4 = 1;
            local_394 = 1;
            local_390 = (1 - (ipw + 1)) + ipw + local_2c;
            local_398 = 2;
            local_3b0 = ipw * 0x10 + param_1;
            local_3ac = (1 - (ipw + 1)) * 2 + -3;
            piVar5 = (integer_kind_4_ *)0x0;
            piVar4 = (integer_kind_4_ *)0x8;
            piVar2 = &local_3b0;
            _gfortran_transfer_array(&local_504);
            _gfortran_st_write_done(&local_504);
          }
          bVar3 = iband != iVar1;
          iband = iband + 1;
        } while (bVar3);
      }
    }
  }
  else {
    if (*param_3 == 1) {
      local_2c = *param_14 * *param_13;
      local_34 = *param_12 * 2;
      iVar1 = *param_12;
      iband = 1;
      if (0 < iVar1) {
        do {
          ipw = (iband + -1) * local_2c + *param_5;
          ii = (iband + -1) * local_34;
          if (local_20 == 1) {
            local_4fc = "rwwf.F90";
            local_4f8 = 0x38e;
            local_504 = 0;
            local_500 = local_24;
            _gfortran_st_write(&local_504,piVar2,piVar4,piVar5);
            local_254 = 0x219;
            local_24c = 1;
            local_248 = (1 - (ii + 1)) + local_34 + ii;
            local_250 = 1;
            local_25c = ii * 8 + param_2;
            local_258 = -(ii + 1);
            piVar5 = (integer_kind_4_ *)0x0;
            piVar4 = (integer_kind_4_ *)0x8;
            piVar2 = &local_25c;
            _gfortran_transfer_array(&local_504);
            _gfortran_st_write_done(&local_504);
            if (*param_16 != 4) {
              local_4fc = "rwwf.F90";
              local_4f8 = 0x390;
              local_504 = 0;
              local_500 = local_24;
              _gfortran_st_write(&local_504,piVar2,piVar4,piVar5);
              local_3a8 = (char *)0x21a;
              local_3a0 = 1;
              local_39c = 2;
              local_3a4 = 1;
              local_394 = 1;
              local_390 = (1 - (ipw + 1)) + local_2c + ipw;
              local_398 = 2;
              local_3b0 = ipw * 0x10 + param_1;
              local_3ac = (1 - (ipw + 1)) * 2 + -3;
              piVar5 = (integer_kind_4_ *)0x0;
              piVar4 = (integer_kind_4_ *)0x8;
              piVar2 = &local_3b0;
              _gfortran_transfer_array(&local_504);
              _gfortran_st_write_done(&local_504);
            }
          }
          bVar3 = iband != iVar1;
          iband = iband + 1;
        } while (bVar3);
      }
    }
  }
  return;
}



void wffclose(wffile_type *wff,integer_kind_4_ *ier)

{
  undefined4 local_30;
  integer_kind_4_ local_2c;
  char *local_28;
  undefined4 local_24;
  
  *ier = 0;
  if (wff->accesswff == 0) {
    local_28 = "wffclose.F90";
    local_24 = 0x47;
    local_30 = 0;
    local_2c = wff->unwff;
    _gfortran_st_close(&local_30);
  }
  else {
    if ((wff->accesswff == -1) && (wff->master == wff->me)) {
      local_28 = "wffclose.F90";
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
  char *local_35c;
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
      local_35c = 
      "(8a,i6,3a)\n WffOpen : ERROR -  For the time being the input variable accesswff is restricted   to 0, 2, or 3 in sequential, and 0 or 1 in parallel.  Its value is accesswff=.  Action : change accesswff or use ABINIT in parallel.COLL"
      ;
      local_358 = 10;
      local_38c = 0x5000;
      _gfortran_st_write(&local_38c);
      _gfortran_transfer_character
                (&local_38c,
                                  
                 "\n WffOpen : ERROR -  For the time being the input variable accesswff is restricted   to 0, 2, or 3 in sequential, and 0 or 1 in parallel.  Its value is accesswff=.  Action : change accesswff or use ABINIT in parallel.COLL"
                 ,1);
      _gfortran_transfer_character
                (&local_38c,
                                  
                 " WffOpen : ERROR -  For the time being the input variable accesswff is restricted   to 0, 2, or 3 in sequential, and 0 or 1 in parallel.  Its value is accesswff=.  Action : change accesswff or use ABINIT in parallel.COLL"
                 ,0x12);
      _gfortran_transfer_character
                (&local_38c,
                                  
                 "\n WffOpen : ERROR -  For the time being the input variable accesswff is restricted   to 0, 2, or 3 in sequential, and 0 or 1 in parallel.  Its value is accesswff=.  Action : change accesswff or use ABINIT in parallel.COLL"
                 ,1);
      _gfortran_transfer_character
                (&local_38c,
                                  
                 "  For the time being the input variable accesswff is restricted   to 0, 2, or 3 in sequential, and 0 or 1 in parallel.  Its value is accesswff=.  Action : change accesswff or use ABINIT in parallel.COLL"
                 ,0x40);
      _gfortran_transfer_character
                (&local_38c,
                                  
                 "\n WffOpen : ERROR -  For the time being the input variable accesswff is restricted   to 0, 2, or 3 in sequential, and 0 or 1 in parallel.  Its value is accesswff=.  Action : change accesswff or use ABINIT in parallel.COLL"
                 ,1);
      _gfortran_transfer_character
                (&local_38c,
                                  
                 "  to 0, 2, or 3 in sequential, and 0 or 1 in parallel.  Its value is accesswff=.  Action : change accesswff or use ABINIT in parallel.COLL"
                 ,0x36);
      _gfortran_transfer_character
                (&local_38c,
                                  
                 "\n WffOpen : ERROR -  For the time being the input variable accesswff is restricted   to 0, 2, or 3 in sequential, and 0 or 1 in parallel.  Its value is accesswff=.  Action : change accesswff or use ABINIT in parallel.COLL"
                 ,1);
      _gfortran_transfer_character
                (&local_38c,
                                  
                 "  Its value is accesswff=.  Action : change accesswff or use ABINIT in parallel.COLL"
                 ,0x19);
      _gfortran_transfer_integer(&local_38c,param_1,4);
      _gfortran_transfer_character
                (&local_38c,".  Action : change accesswff or use ABINIT in parallel.COLL",1);
      _gfortran_transfer_character
                (&local_38c,
                                  
                 "\n WffOpen : ERROR -  For the time being the input variable accesswff is restricted   to 0, 2, or 3 in sequential, and 0 or 1 in parallel.  Its value is accesswff=.  Action : change accesswff or use ABINIT in parallel.COLL"
                 ,1);
      _gfortran_transfer_character
                (&local_38c,"  Action : change accesswff or use ABINIT in parallel.COLL",0x36);
      _gfortran_st_write_done(&local_38c);
      wrtout(&DAT_080734c4,local_200,"COLL",500,4);
      leave_new("COLL",4);
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
  int iVar2;
  int iVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  real_kind_8_ (*paarVar8) [4] [4];
  longlong lVar7;
  undefined *puVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
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
  
  *param_6 = ((double)(*param_5)[1][3] * (double)(*param_5)[3] -
             (double)(*param_5)[1][2] * (double)(*param_5)[1][0]) * (double)(*param_5)[2] +
             ((double)(*param_5)[1][2] * (double)(*param_5)[1][1] -
             (double)(*param_5)[2][0] * (double)(*param_5)[3]) * (double)(*param_5)[1] +
             ((double)(*param_5)[2][0] * (double)(*param_5)[1][0] -
             (double)(*param_5)[1][3] * (double)(*param_5)[1][1]) * (double)(*param_5)[0];
  if (ABS(*param_6) < 1e-12) {
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
    _gfortran_transfer_character(&local_3f0,"\n metric : ERROR -",1);
    _gfortran_transfer_character(&local_3f0," metric : ERROR -",0x11);
    _gfortran_transfer_character(&local_3f0,"\n metric : ERROR -",1);
    _gfortran_transfer_character
              (&local_3f0,"  Input rprim and acell gives vanishing unit cell volume.",0x39);
    _gfortran_transfer_character(&local_3f0,"\n metric : ERROR -",1);
    _gfortran_transfer_character
              (&local_3f0,
                              
               "  This indicates linear dependency between primitive lattice vectors  Action : correct either rprim or acell in input file.COLL"
               ,0x44);
    _gfortran_transfer_character(&local_3f0,"\n metric : ERROR -",1);
    _gfortran_transfer_character
              (&local_3f0,"  Action : correct either rprim or acell in input file.COLL",0x37);
    _gfortran_st_write_done();
    wrtout(&DAT_080735d0,local_220,"COLL",500,4);
    leave_new();
  }
  if (*param_6 < 0.0) {
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
    _gfortran_transfer_character(&local_3f0,"\n metric : ERROR -",1);
    _gfortran_transfer_character(&local_3f0," metric : ERROR -",0x11);
    _gfortran_transfer_character(&local_3f0,"\n metric : ERROR -",1);
    _gfortran_transfer_character
              (&local_3f0,"  Current rprimd gives negative (R1xR2).R3 .   Rprimd =          ",0x2d);
    _gfortran_transfer_character(&local_3f0,"\n metric : ERROR -",1);
    _gfortran_transfer_character(&local_3f0,"  Rprimd =          ",10);
    local_234 = 0x219;
    local_22c = 1;
    local_228 = 3;
    local_230 = 1;
    local_23c = param_5;
    local_238 = 0xfffffffc;
    _gfortran_transfer_array(&local_3f0,&local_23c,8,0);
    _gfortran_transfer_character(&local_3f0,"\n metric : ERROR -",1);
    _gfortran_transfer_character(&local_3f0,"          ",10);
    local_24c = 0x219;
    local_244 = 1;
    local_240 = 3;
    local_248 = 1;
    local_254 = *param_5 + 3;
    local_250 = 0xfffffffc;
    _gfortran_transfer_array(&local_3f0,&local_254,8,0);
    _gfortran_transfer_character(&local_3f0,"\n metric : ERROR -",1);
    _gfortran_transfer_character(&local_3f0,"          ",10);
    local_264 = 0x219;
    local_25c = 1;
    local_258 = 3;
    local_260 = 1;
    local_26c = (*param_5)[1] + 2;
    local_268 = 0xfffffffc;
    _gfortran_transfer_array(&local_3f0,&local_26c,8,0);
    _gfortran_transfer_character(&local_3f0,"\n metric : ERROR -",1);
    _gfortran_transfer_character
              (&local_3f0,"  Action : if the cell size and shape are fixed (optcell==0),",0x3d);
    _gfortran_transfer_character(&local_3f0,"\n metric : ERROR -",1);
    _gfortran_transfer_character(&local_3f0,"   exchange two of the input rprim vectors;",0x2b);
    _gfortran_transfer_character(&local_3f0,"\n metric : ERROR -",1);
    _gfortran_transfer_character
              (&local_3f0,"   if you are optimizing the cell size and shape (optcell/=0),",0x3e);
    _gfortran_transfer_character(&local_3f0,"\n metric : ERROR -",1);
    _gfortran_transfer_character
              (&local_3f0,
                              
               "   maybe the move was too large, and you might try to decrease strprecon.(a,a) Real(R)+Recip(G) space primitive vectors, cartesian coordinates (Bohr,Bohr^-1):"
               ,0x49);
    _gfortran_st_write_done();
    wrtout(&DAT_080735d0,local_220,"COLL",500,4);
    leave_new();
  }
  paarVar8 = param_2;
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
    _gfortran_st_write(&local_3f0,paarVar8);
    _gfortran_transfer_character
              (&local_3f0,
               " Real(R)+Recip(G) space primitive vectors, cartesian coordinates (Bohr,Bohr^-1):",
               0x12);
    pcVar10 = "space primitive vectors, cartesian coordinates (Bohr,Bohr^-1):";
    _gfortran_transfer_character
              (&local_3f0,"space primitive vectors, cartesian coordinates (Bohr,Bohr^-1):",0x3e);
    _gfortran_st_write_done(&local_3f0,pcVar10);
    uVar12 = 4;
    uVar11 = 500;
    pcVar10 = "COLL";
    puVar9 = local_220;
    wrtout(param_3,puVar9,"COLL",500,4);
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
      _gfortran_st_write(&local_3f0,puVar9,pcVar10,uVar11,uVar12);
      _gfortran_transfer_character
                (&local_3f0,
                                  
                 "R()=G((a,1p,e15.7,a) Unit cell volume ucvol= bohr^3(a,3es16.8,a) Angles (23,13,12)= degrees"
                 ,2);
      _gfortran_transfer_integer(&local_3f0,&local_224,4);
      _gfortran_transfer_character
                (&local_3f0,
                                  
                 ")=G((a,1p,e15.7,a) Unit cell volume ucvol= bohr^3(a,3es16.8,a) Angles (23,13,12)= degrees"
                 ,2);
      iVar2 = local_224;
      iVar3 = 1;
      while (iVar3 < 4) {
        local_274 = (double)param_5[-1][3][iVar2 * 3 + iVar3] + 1e-10;
        _gfortran_transfer_real(&local_3f0,&local_274,8);
        iVar3 = iVar3 + 1;
      }
      _gfortran_transfer_character
                (&local_3f0,
                                  
                 "G((a,1p,e15.7,a) Unit cell volume ucvol= bohr^3(a,3es16.8,a) Angles (23,13,12)= degrees"
                 ,2);
      _gfortran_transfer_integer(&local_3f0,&local_224,4);
      uVar11 = 2;
      lVar7 = CONCAT44(0x80737a1,&local_3f0);
      _gfortran_transfer_character
                (&local_3f0,
                                  
                 ")=G((a,1p,e15.7,a) Unit cell volume ucvol= bohr^3(a,3es16.8,a) Angles (23,13,12)= degrees"
                 ,2);
      iVar2 = local_224;
      iVar3 = 1;
      while (iVar3 < 4) {
        local_27c = (double)param_2[-1][3][iVar2 * 3 + iVar3] + 1e-10;
        uVar11 = 8;
        lVar7 = ZEXT48(&local_27c) << 0x20;
        _gfortran_transfer_real();
        iVar3 = iVar3 + 1;
      }
      _gfortran_st_write_done(&local_3f0,(int)((ulonglong)lVar7 >> 0x20),uVar11);
      uVar12 = 4;
      uVar11 = 500;
      pcVar10 = "COLL";
      puVar9 = local_220;
      wrtout();
      bVar4 = local_224 != 3;
      local_224 = local_224 + 1;
    } while (bVar4);
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
    _gfortran_st_write(&local_3f0,puVar9,pcVar10,uVar11,uVar12);
    _gfortran_transfer_character
              (&local_3f0," Unit cell volume ucvol= bohr^3(a,3es16.8,a) Angles (23,13,12)= degrees",
               0x18);
    local_284 = *param_6 + 1e-10;
    _gfortran_transfer_real(&local_3f0,&local_284,8);
    pcVar10 = " bohr^3(a,3es16.8,a) Angles (23,13,12)= degrees";
    _gfortran_transfer_character(&local_3f0," bohr^3(a,3es16.8,a) Angles (23,13,12)= degrees",7);
    _gfortran_st_write_done(&local_3f0,pcVar10);
    wrtout(param_3,local_220,"COLL",500,4);
    wrtout(&DAT_080735d0,local_220,"COLL",500,4);
  }
  angle[3]._4_4_ = 1;
  do {
    dVar5 = (double)param_5[-1][3][angle[3]._4_4_ * 3 + 1];
    dVar6 = (double)param_5[-1][3][angle[3]._4_4_ * 3 + 2];
    dVar1 = (double)param_5[-1][3][angle[3]._4_4_ * 3 + 3];
    iVar2 = 1;
    while (iVar2 < 4) {
      param_4[iVar2 * 3 + angle[3]._4_4_ + -4] =
           (double)param_5[-1][3][iVar2 * 3 + 3] * dVar1 +
           (double)param_5[-1][3][iVar2 * 3 + 2] * dVar6 +
           (double)param_5[-1][3][iVar2 * 3 + 1] * dVar5;
      iVar2 = iVar2 + 1;
    }
    bVar4 = angle[3]._4_4_ != 3;
    angle[3]._4_4_ = angle[3]._4_4_ + 1;
  } while (bVar4);
  angle[3]._4_4_ = 1;
  do {
    dVar5 = (double)param_2[-1][3][angle[3]._4_4_ * 3 + 1];
    dVar6 = (double)param_2[-1][3][angle[3]._4_4_ * 3 + 2];
    dVar1 = (double)param_2[-1][3][angle[3]._4_4_ * 3 + 3];
    iVar2 = 1;
    while (iVar2 < 4) {
      *(double *)(param_1 + (iVar2 * 3 + angle[3]._4_4_ + -4) * 8) =
           (double)param_2[-1][3][iVar2 * 3 + 3] * dVar1 +
           (double)param_2[-1][3][iVar2 * 3 + 2] * dVar6 +
           (double)param_2[-1][3][iVar2 * 3 + 1] * dVar5;
      iVar2 = iVar2 + 1;
    }
    bVar4 = angle[3]._4_4_ != 3;
    angle[3]._4_4_ = angle[3]._4_4_ + 1;
  } while (bVar4);
  if (-1 < *param_3) {
    dVar5 = acos(param_4[7] / SQRT(param_4[8] * param_4[4]));
    angle[0] = (real_kind_8_)((dVar5 / 6.283185307179586) * 360.0);
    dVar5 = acos(param_4[6] / SQRT(param_4[8] * *param_4));
    angle[1] = (real_kind_8_)((dVar5 / 6.283185307179586) * 360.0);
    dVar5 = param_4[3] / SQRT(param_4[4] * *param_4);
    dVar6 = acos(dVar5);
    angle[2] = (real_kind_8_)((dVar6 / 6.283185307179586) * 360.0);
    local_3e8 = "metric.F90";
    local_3e4 = 0xa3;
    local_3b0 = local_220;
    local_3ac = 500;
    local_3c4 = 0;
    local_3ec = 0;
    local_3c0 = "(a,3es16.8,a) Angles (23,13,12)= degrees";
    local_3bc = 0xd;
    local_3f0 = 0x5000;
    _gfortran_st_write(&local_3f0,(int)((ulonglong)dVar5 >> 0x20));
    _gfortran_transfer_character(&local_3f0," Angles (23,13,12)= degrees",0x13);
    local_294 = 0x219;
    local_28c = 1;
    local_288 = 3;
    local_290 = 1;
    local_29c = angle;
    local_298 = 0xffffffff;
    _gfortran_transfer_array(&local_3f0,&local_29c,8,0);
    pcVar10 = " degrees";
    _gfortran_transfer_character(&local_3f0," degrees",8);
    _gfortran_st_write_done(&local_3f0,pcVar10);
    wrtout(param_3,local_220,"COLL",500,4);
    wrtout(&DAT_080735d0,local_220,"COLL",500,4);
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
  int local_24;
  int local_20;
  
  local_20 = *param_2;
  local_24 = *param_2;
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
  
  if ((double)*num <= 0.0) {
    dVar1 = -(((double)*num - 0.5) - 1e-12);
    do {
      dVar1 = dVar1 - (dVar1 / 1.0) * 1.0;
    } while ((in_FPUStatusWord & 0x400) != 0);
    *red = (real_kind_8_)((0.5 - dVar1) + 1e-12);
  }
  else {
    dVar1 = ((double)*num + 0.5) - 1e-12;
    do {
      dVar1 = dVar1 - (dVar1 / 1.0) * 1.0;
    } while ((in_FPUStatusWord & 0x400) != 0);
    *red = (real_kind_8_)((dVar1 - 0.5) + 1e-12);
  }
  if (ABS((double)*red) < 1e-12) {
    *red = 0.0;
  }
  *shift = (real_kind_8_)((double)*num - (double)*red);
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
    _gfortran_transfer_character(&local_354,"\n int2char4: ERROR -",1);
    _gfortran_transfer_character(&local_354," int2char4: ERROR -",0x13);
    _gfortran_transfer_character(&local_354,"\n int2char4: ERROR -",1);
    _gfortran_transfer_character
              (&local_354,"  The integer argument should be between 0 and 9999, while  it is COLL",
               0x3a);
    _gfortran_transfer_character(&local_354,"\n int2char4: ERROR -",1);
    _gfortran_transfer_character(&local_354,"  it is COLL",8);
    _gfortran_transfer_integer(&local_354,param_1,4);
    _gfortran_st_write_done(&local_354);
    wrtout(&DAT_080738cc,local_200,"COLL",500,4);
    leave_new("COLL",4);
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
    _gfortran_transfer_character
              (&local_3b0,
                              
               "\n mati3inv : BUG -  Attempting to invert integer array   ==> determinant is zero.COLL"
               ,1);
    _gfortran_transfer_character
              (&local_3b0,
                              
               " mati3inv : BUG -  Attempting to invert integer array   ==> determinant is zero.COLL"
               ,0x11);
    _gfortran_transfer_character
              (&local_3b0,
                              
               "\n mati3inv : BUG -  Attempting to invert integer array   ==> determinant is zero.COLL"
               ,1);
    _gfortran_transfer_character
              (&local_3b0,"  Attempting to invert integer array   ==> determinant is zero.COLL",0x24
              );
    _gfortran_transfer_character
              (&local_3b0,
                              
               "\n mati3inv : BUG -  Attempting to invert integer array   ==> determinant is zero.COLL"
               ,1);
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
    _gfortran_transfer_character(&local_3b0,"   ==> determinant is zero.COLL",0x1b);
    _gfortran_st_write_done(&local_3b0);
    wrtout(&DAT_08073960,local_214,"COLL",500,4);
    leave_new("COLL",4);
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
  
  dVar1 = (double)(*aa)[2][0] * (double)(*aa)[1][0] - (double)(*aa)[1][3] * (double)(*aa)[1][1];
  dVar2 = (double)(*aa)[1][2] * (double)(*aa)[1][1] - (double)(*aa)[2][0] * (double)(*aa)[3];
  dVar3 = (double)(*aa)[1][3] * (double)(*aa)[3] - (double)(*aa)[1][2] * (double)(*aa)[1][0];
  dVar4 = 1.0 / ((double)(*aa)[2] * dVar3 + (double)(*aa)[1] * dVar2 + (double)(*aa)[0] * dVar1);
  (*ait)[0] = (real_kind_8_)(dVar1 * dVar4);
  (*ait)[1] = (real_kind_8_)(dVar2 * dVar4);
  (*ait)[2] = (real_kind_8_)(dVar3 * dVar4);
  (*ait)[3] = (real_kind_8_)
              (((double)(*aa)[1][3] * (double)(*aa)[2] - (double)(*aa)[2][0] * (double)(*aa)[1]) *
              dVar4);
  (*ait)[1][0] = (real_kind_8_)
                 (((double)(*aa)[2][0] * (double)(*aa)[0] - (double)(*aa)[1][2] * (double)(*aa)[2])
                 * dVar4);
  (*ait)[1][1] = (real_kind_8_)
                 (((double)(*aa)[1][2] * (double)(*aa)[1] - (double)(*aa)[1][3] * (double)(*aa)[0])
                 * dVar4);
  (*ait)[1][2] = (real_kind_8_)
                 (((double)(*aa)[1][1] * (double)(*aa)[1] - (double)(*aa)[1][0] * (double)(*aa)[2])
                 * dVar4);
  (*ait)[1][3] = (real_kind_8_)
                 (((double)(*aa)[3] * (double)(*aa)[2] - (double)(*aa)[1][1] * (double)(*aa)[0]) *
                 dVar4);
  (*ait)[2][0] = (real_kind_8_)
                 (((double)(*aa)[1][0] * (double)(*aa)[0] - (double)(*aa)[3] * (double)(*aa)[1]) *
                 dVar4);
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
  size_t sVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  undefined4 local_408;
  undefined4 local_404;
  char *local_400;
  undefined4 local_3fc;
  undefined4 local_3dc;
  char *local_3d8;
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
  iVar7 = *param_2;
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
  uVar6 = 0;
  if (-1 < (int)local_28) {
    uVar6 = local_28;
  }
  local_274 = ~local_260;
  if ((int)local_28 < 1) {
    sVar4 = 0;
  }
  else {
    sVar4 = uVar6 * local_260 * 8;
  }
  if ((int)sVar4 < 0) {
    sVar4 = _gfortran_runtime_error
                      ("Attempt to allocate negative amount of memory. Possible integer overflow");
  }
  if ((int)sVar4 < 1) {
    sVar4 = 1;
  }
  pvVar5 = malloc(sVar4);
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)_gfortran_os_error("Out of memory");
  }
  uVar6 = *param_3;
  uVar1 = *param_3;
  if ((int)((*param_3 + 1) * *param_3) < 2) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)((*param_3 + 1) * *param_3) / 2;
  }
  local_4c = 1;
  if ((int)((*param_3 + 1) * *param_3) < 2) {
    sVar4 = 0;
  }
  else {
    sVar4 = iVar2 * 8;
  }
  local_278 = pvVar5;
  if (b_ij[0]._0_4_ == (void *)0x0) {
    if ((int)sVar4 < 0) {
      sVar4 = _gfortran_runtime_error
                        ("Attempt to allocate negative amount of memory. Possible integer overflow")
      ;
    }
    if ((int)sVar4 < 1) {
      sVar4 = 1;
    }
    pvVar5 = malloc(sVar4);
    if (pvVar5 == (void *)0x0) {
      pvVar5 = (void *)_gfortran_os_error("Out of memory");
    }
    b_ij[0]._4_4_ = -1;
    b_ij[0]._0_4_ = pvVar5;
    if (*param_7 != 0) {
      while (local_4c <= (int)((uVar1 + 1) * uVar6) / 2) {
        *(undefined8 *)((int)pvVar5 + (local_4c + -1) * 8) = 0;
        local_4c = local_4c + 1;
      }
      iVar2 = *param_2;
      klmn = 1;
      if (0 < iVar2) {
        do {
          *(undefined8 *)((int)pvVar5 + (*(int *)(param_8 + (klmn + -1) * 4) + -1) * 8) =
               *(undefined8 *)(param_1 + (klmn + -1) * 8);
          bVar8 = klmn != iVar2;
          klmn = klmn + 1;
        } while (bVar8);
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
  while (iVar2 <= iVar7) {
    *(undefined8 *)((int)b_ij[0]._0_4_ + (iVar2 + b_ij[0]._4_4_) * 8) =
         *(undefined8 *)(param_1 + (iVar2 + -1) * 8);
    iVar2 = iVar2 + 1;
  }
LAB_0806d6ed:
  jlmn1 = 0;
  uVar6 = *param_3;
  jlmn = 1;
  if (0 < (int)uVar6) {
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
              bVar8 = ilmn != jlmn;
              ilmn = ilmn + 1;
            } while (bVar8);
          }
        }
      }
      else {
        if (*(int *)(param_6 + (jlmn + -1) * 4) == *param_5) {
          jlmn1 = jlmn1 + 1;
          goto LAB_0806d746;
        }
      }
      bVar8 = jlmn != uVar6;
      jlmn = jlmn + 1;
    } while (bVar8);
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
      iVar7 = local_268;
      while (iVar7 <= (int)local_264) {
        *(double *)((int)local_278 + (iVar7 * local_26c + local_260 * iVar2 + local_274) * 8) =
             *(double *)((int)local_278 + (local_26c * iVar7 + local_260 * iVar2 + local_274) * 8) *
             27.2113845;
        iVar7 = iVar7 + 1;
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
        local_3d8 = "(100(1x,f9.5))COLL\x06";
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
        bVar8 = ilmn != local_28;
        ilmn = ilmn + 1;
      } while (bVar8);
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
        bVar8 = ilmn != local_28;
        ilmn = ilmn + 1;
      } while (bVar8);
    }
    local_400 = "print_ij.F90";
    local_3fc = 0x91;
    local_3c8 = local_250;
    local_3c4 = 500;
    local_3dc = 0;
    local_404 = 0;
    local_3d8 = "(3x,a,i2,a)...  only \f";
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
  if (0.0 < *param_9) {
    local_284 = *param_9;
    if (*param_10 == 2) {
      local_284 = local_284 * 27.2113845;
    }
    local_254 = 0;
    iVar2 = local_25c;
    while (iVar2 <= (int)local_258) {
      iVar7 = local_268;
      while (iVar7 <= (int)local_264) {
        if (local_284 <=
            ABS(*(double *)
                 ((int)local_278 + (local_26c * iVar7 + local_260 * iVar2 + local_274) * 8))) {
          local_254 = local_254 + 1;
        }
        iVar7 = iVar7 + 1;
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
      local_3d8 = "(5a,i3,a,f6.1,7a) print_ij: WARNING -\n";
      local_3d4 = 0x11;
      local_408 = 0x5000;
      _gfortran_st_write(&local_408);
      _gfortran_transfer_character(&local_408," print_ij: WARNING -\n",0x14);
      _gfortran_transfer_character(&local_408,"\n",1);
      _gfortran_transfer_character(&local_408,"  The matrix seems to have high value(s) !  (",0x2a);
      _gfortran_transfer_character(&local_408,"\n",1);
      _gfortran_transfer_character(&local_408,"  (",3);
      _gfortran_transfer_integer(&local_408,&local_254,4);
      _gfortran_transfer_character
                (&local_408,
                                  
                 " components have a value greater than ).  It can cause instabilities during SCF convergence.  Action: you should check your atomic dataset (psp file)"
                 ,0x26);
      _gfortran_transfer_real(&local_408,&local_284,8);
      _gfortran_transfer_character
                (&local_408,
                                  
                 ").  It can cause instabilities during SCF convergence.  Action: you should check your atomic dataset (psp file)"
                 ,2);
      _gfortran_transfer_character(&local_408,"\n",1);
      _gfortran_transfer_character
                (&local_408,
                                  
                 "  It can cause instabilities during SCF convergence.  Action: you should check your atomic dataset (psp file)"
                 ,0x34);
      _gfortran_transfer_character(&local_408,"\n",1);
      _gfortran_transfer_character
                (&local_408,"  Action: you should check your atomic dataset (psp file)",0x39);
      _gfortran_transfer_character(&local_408,"\n",1);
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
    _gfortran_runtime_error_at
              ("At line 166 of file print_ij.F90","Attempt to DEALLOCATE unallocated \'%s\'","prtab"
              );
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
  char *local_1f8;
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
  
  local_1f8 = "herald.F90";
  local_1f4 = 0x41;
  local_1d0 = "(/,a,a,a,a,a).Version  of  (a,a,a,/)";
  local_1cc = 0xd;
  local_200 = 0x1000;
  local_1fc = *param_3;
  _gfortran_st_write(&local_200);
  _gfortran_transfer_character(&local_200,".Version  of  (a,a,a,/)",9);
  _gfortran_transfer_character(&local_200,param_2,6);
  _gfortran_transfer_character(&local_200," of  (a,a,a,/)",4);
  _gfortran_string_trim(&local_68,&local_6c,0x18,param_1);
  _gfortran_transfer_character(&local_200,local_6c,local_68);
  if ((0 < local_68) && (local_6c != (void *)0x0)) {
    free(local_6c);
  }
  _gfortran_transfer_character(&local_200," (a,a,a,/)",1);
  _gfortran_st_write_done(&local_200);
  local_1f8 = "herald.F90";
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
  _gfortran_transfer_character
            (&local_200,"i686_linux_UNKNOWN computer) (a,/,a,a,a,/,a,/,a,/,a,/)",0x12);
  _gfortran_transfer_character(&local_200," computer) (a,/,a,a,a,/,a,/,a,/,a,/)",0xb);
  _gfortran_st_write_done(&local_200);
  local_1f8 = "herald.F90";
  local_1f4 = 0x50;
  local_1d0 = "(a,/,a,a,a,/,a,/,a,/,a,/)";
  local_1cc = 0x19;
  local_200 = 0x1000;
  local_1fc = *param_3;
  _gfortran_st_write(&local_200);
  _gfortran_transfer_character
            (&local_200,
             ".Copyright (C) 1998-2007 ABINIT group .  comes with ABSOLUTELY NO WARRANTY.",0x28);
  _gfortran_transfer_character(&local_200," (a,a,a,/)",1);
  _gfortran_string_trim(&local_70,&local_74,0x18,param_1);
  _gfortran_transfer_character(&local_200,local_74,local_70);
  if ((0 < local_70) && (local_74 != (void *)0x0)) {
    free(local_74);
  }
  _gfortran_transfer_character(&local_200," comes with ABSOLUTELY NO WARRANTY.",0x23);
  _gfortran_transfer_character
            (&local_200,
                          
             " It is free software, and you are welcome to redistribute it under certain conditions (GNU General Public License,"
             ,0x3c);
  _gfortran_transfer_character
            (&local_200," under certain conditions (GNU General Public License,",0x36);
  _gfortran_transfer_character
            (&local_200,
                          
             " see ~abinit/COPYING or http://www.gnu.org/copyleft/gpl.txt).ABINIT-GW(a,a,a,/,a,/,a,/)"
             ,0x3d);
  _gfortran_st_write_done(&local_200);
  _gfortran_string_trim(&local_78,&local_7c,0x18,param_1);
  iVar1 = _gfortran_compare_string(local_78,local_7c,9,"ABINIT-GW(a,a,a,/,a,/,a,/)");
  if ((0 < local_78) && (local_7c != (void *)0x0)) {
    free(local_7c);
  }
  if (iVar1 == 0) {
    local_1f8 = "herald.F90";
    local_1f4 = 0x56;
    local_1d0 = "(a,a,a,/,a,/,a,/)";
    local_1cc = 0x11;
    local_200 = 0x1000;
    local_1fc = *param_3;
    _gfortran_st_write(&local_200);
    _gfortran_transfer_character(&local_200," (a,a,a,/)",1);
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
  iVar1 = _gfortran_compare_string
                    (local_88,local_8c,5,
                                          
                     "OPTIC(a,a,a,/,a,/,a,/,a,/,a,/) Sangeeta Sharma and incorporated in ABINIT with the help of M. Verstraete. Please refer to : "
                    );
  if ((0 < local_88) && (local_8c != (void *)0x0)) {
    free(local_8c);
  }
  if (iVar1 == 0) {
    local_1f8 = "herald.F90";
    local_1f4 = 0x5f;
    local_1d0 = 
    "(a,a,a,/,a,/,a,/,a,/,a,/) Sangeeta Sharma and incorporated in ABINIT with the help of M. Verstraete. Please refer to : "
    ;
    local_1cc = 0x19;
    local_200 = 0x1000;
    local_1fc = *param_3;
    _gfortran_st_write(&local_200);
    _gfortran_transfer_character(&local_200," (a,a,a,/)",1);
    _gfortran_string_trim(&local_90,&local_94,0x18,param_1);
    _gfortran_transfer_character(&local_200,local_94,local_90);
    if ((0 < local_90) && (local_94 != (void *)0x0)) {
      free(local_94);
    }
    _gfortran_transfer_character(&local_200," has originally been developed by",0x21);
    _gfortran_transfer_character
              (&local_200,
                              
               " Sangeeta Sharma and incorporated in ABINIT with the help of M. Verstraete. Please refer to : "
               ,0x4b);
    _gfortran_transfer_character(&local_200," Please refer to : ",0x13);
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
  local_1f8 = "herald.F90";
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
  _gfortran_transfer_character
            (&local_200," Please read ~abinit/doc/users/acknowledgments.html for suggested",0x41);
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
  local_20 = (int)ROUND((double)local_14 * 0.01);
  local_1c = (((int)ROUND((double)local_14 * 365.25) + (int)ROUND((double)local_18 * 30.6001) +
               local_58 + 0x1a42a5) - local_20) + (int)ROUND((double)local_20 * 0.25);
  local_24 = local_1c % 7 + 1;
  local_1f8 = "herald.F90";
  local_1f4 = 0x7e;
  local_1d0 = "(/,a,a,1x,i2,1x,a,1x,i4,a).Starting date : .";
  local_1cc = 0x1a;
  local_200 = 0x1000;
  local_1fc = *param_3;
  _gfortran_st_write(&local_200);
  _gfortran_transfer_character(&local_200,".Starting date : .",0x11);
  _gfortran_transfer_character(&local_200,daynam_1506 + (local_24 + -1) * 3,3);
  _gfortran_transfer_integer(&local_200,&local_28,4);
  _gfortran_transfer_character(&local_200,monnam_1558 + (local_10 + -1) * 3,3);
  _gfortran_transfer_integer(&local_200,&local_64,4);
  _gfortran_transfer_character(&local_200,".",1);
  _gfortran_st_write_done(&local_200);
  local_1f8 = "herald.F90";
  local_1f4 = 0x80;
  local_200 = 0x80;
  local_1fc = *param_3;
  _gfortran_st_write(&local_200);
  _gfortran_transfer_character(&local_200," (a,a,a,/)",1);
  _gfortran_st_write_done(&local_200);
  return;
}



void leave_new(void)

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
  
  local_34c = "leave_new.F90";
  local_348 = 0x86;
  local_314 = local_200;
  local_310 = 500;
  local_328 = 0;
  local_350 = 0;
  local_324 = "(a,a)\n leave_new : decision taken to exit ...PERS";
  local_320 = 5;
  local_354 = 0x5000;
  _gfortran_st_write(&local_354);
  _gfortran_transfer_character(&local_354,"\n leave_new : decision taken to exit ...PERS",1);
  _gfortran_transfer_character(&local_354," leave_new : decision taken to exit ...PERS",0x27);
  _gfortran_st_write_done(&local_354);
  wrtout(&DAT_08074180,local_200,"PERS",500,4);
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
    timein::nday[24] = *param_1;
  }
  if ((timein::nday[24] != 0) && (*param_2 != 5)) {
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
      _gfortran_transfer_character(&local_368,"\n timab: BUG -  dim mtim=",1);
      _gfortran_transfer_character(&local_368," timab: BUG -  dim mtim=",0xd);
      _gfortran_transfer_character(&local_368,"\n timab: BUG -  dim mtim=",1);
      _gfortran_transfer_character(&local_368,"  dim mtim=",0xb);
      _gfortran_transfer_integer(&local_368,&DAT_080741bc,4);
      _gfortran_transfer_character(&local_368," but input nn=.PERS",0xe);
      _gfortran_transfer_integer(&local_368,param_1,4);
      _gfortran_transfer_character(&local_368,".PERS",1);
      _gfortran_st_write_done(&local_368);
      wrtout(&DAT_080741d4,local_208,"PERS",500,4);
      leave_new("PERS",4);
    }
    if (*param_2 == 0) {
      memset(__defs_time_MOD_acctim,0,0x2570);
      memset(__defs_time_MOD_tzero,0,0x2570);
      iVar1 = 599;
      puVar2 = (undefined4 *)__defs_time_MOD_ncount;
      while (iVar1 != 0) {
        iVar1 = iVar1 + -1;
        *puVar2 = 0;
        puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
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
            _gfortran_transfer_character(&local_368,"\n timab: BUG -  dim mtim=",1);
            _gfortran_transfer_character(&local_368," timab: BUG -  dim mtim=",0xd);
            _gfortran_transfer_character(&local_368,"\n timab: BUG -  dim mtim=",1);
            _gfortran_transfer_character
                      (&local_368,
                                              
                       " option 3 not valid (use time_accu).(a,a,a,a,i10,a)  Input option not valid, ="
                       ,0x24);
            _gfortran_st_write_done(&local_368);
            wrtout(&DAT_080741d4,local_208,"PERS",500,4);
            leave_new("PERS",4);
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
              _gfortran_transfer_character(&local_368,"\n timab: BUG -  dim mtim=",1);
              _gfortran_transfer_character(&local_368," timab: BUG -  dim mtim=",0xd);
              _gfortran_transfer_character(&local_368,"\n timab: BUG -  dim mtim=",1);
              _gfortran_transfer_character(&local_368,"  Input option not valid, =",0x1b);
              _gfortran_transfer_integer(&local_368,param_2,4);
              _gfortran_transfer_character(&local_368,".PERS",1);
              _gfortran_st_write_done(&local_368);
              wrtout(&DAT_080741d4,local_208,"PERS",500,4);
              leave_new("PERS",4);
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
  
  *param_1 = 0.0;
  _gfortran_system_clock_4(&count,&count_rate,&count_max);
  *param_1 = (double)count / (double)count_rate;
  if (timein::start == 1) {
    timein::start = 0;
    local_260 = 0x109;
    local_258 = 1;
    local_254 = 8;
    local_25c = 1;
    local_268 = &local_244;
    local_264 = 0xffffffff;
    _gfortran_date_and_time(local_26,local_224,local_24e,&local_268,10,10,10);
    timein::year_init = local_244;
    timein::month_init = local_240;
  }
  local_278 = 0x109;
  local_270 = 1;
  local_26c = 8;
  local_274 = 1;
  local_280 = &local_244;
  local_27c = 0xffffffff;
  _gfortran_date_and_time(local_26,local_224,local_24e,&local_280,10,10,10);
  *param_2 = (double)local_228 * 0.001 +
             (double)local_22c +
             (double)local_230 * 60.0 + ((double)local_234 + (double)local_23c * 24.0) * 3600.0;
  timein::month_now = local_240;
  if (local_240 != timein::month_init) {
    if (timein::year_init + 1U == local_244) {
      timein::month_now = local_240 + 0xc;
    }
    if (timein::month_now <= timein::month_init) {
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
      _gfortran_transfer_character
                (&local_3d4,"\n timein : BUG -  Problem with month and year numbers.COLL",1);
      _gfortran_transfer_character
                (&local_3d4," timein : BUG -  Problem with month and year numbers.COLL",0xf);
      _gfortran_transfer_character
                (&local_3d4,"\n timein : BUG -  Problem with month and year numbers.COLL",1);
      _gfortran_transfer_character(&local_3d4,"  Problem with month and year numbers.COLL",0x26);
      _gfortran_st_write_done(&local_3d4);
      wrtout(&DAT_08074288,local_21a,"COLL",500,4);
      leave_new("COLL",4);
    }
    iVar1 = timein::month_now + -1;
    local_10 = timein::month_init;
    if (timein::month_init <= iVar1) {
      do {
        *param_2 = (double)timein::nday[local_10 + -1] * 86400.0 + *param_2;
        bVar2 = local_10 != iVar1;
        local_10 = local_10 + 1;
      } while (bVar2);
    }
  }
  if ((((timein::year_init & 3U) == 0) && (timein::month_init < 3)) && (2 < timein::month_now)) {
    *param_2 = *param_2 + 3600.0;
  }
  if ((((local_244 & 3) == 0) && (timein::month_init < 0xf)) && (0xe < timein::month_now)) {
    *param_2 = *param_2 + 3600.0;
  }
  return;
}



void wrtout(int *param_1,void *param_2)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  void *__src;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 uVar7;
  size_t sVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 local_66c;
  int local_668;
  char *local_664;
  undefined4 local_660;
  char *local_63c;
  undefined4 local_638;
  undefined local_470 [8];
  void *local_468;
  int local_464;
  undefined local_460 [8];
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
  int local_41c;
  undefined local_417 [7];
  undefined local_410 [8];
  undefined auStack1032 [492];
  undefined local_21c [500];
  integer_kind_4_ lenmessage;
  int local_24;
  int local_20;
  
  local_20 = 0;
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
    uVar10 = 0;
    puVar9 = &DAT_080742b9;
    uVar7 = 1;
    puVar6 = local_21c;
    local_24 = _gfortran_string_index(500,puVar6,1,&DAT_080742b9,0);
    while (local_24 != 0) {
      sVar3 = 0;
      if (-1 < (int)(local_24 - 1U)) {
        sVar3 = local_24 - 1U;
      }
      if ((int)sVar3 < 500) {
        memmove(local_410,local_21c,sVar3);
        sVar8 = 500 - sVar3;
        puVar6 = (undefined *)0x20;
        memset(local_410 + sVar3,0x20,sVar8);
      }
      else {
        sVar8 = 500;
        puVar6 = local_21c;
        memmove(local_410,puVar6,500);
      }
      local_664 = "wrtout.F90";
      local_660 = 0x9e;
      local_63c = "(a)BUG";
      local_638 = 3;
      local_66c = 0x1000;
      local_668 = *param_1;
      _gfortran_st_write(&local_66c,puVar6,sVar8,puVar9,uVar10);
      _gfortran_string_trim(&local_41c,&local_420,500,local_410);
      _gfortran_transfer_character(&local_66c,local_420,local_41c);
      if ((0 < local_41c) && (local_420 != (void *)0x0)) {
        free(local_420);
      }
      _gfortran_st_write_done(&local_66c);
      sVar8 = (1 - (local_24 + 1)) + lenmessage;
      sVar3 = 0;
      if (-1 < (int)sVar8) {
        sVar3 = sVar8;
      }
      if ((int)sVar3 < 500) {
        memmove(local_21c,local_21c + local_24,sVar3);
        memset(local_21c + sVar3,0x20,500 - sVar3);
      }
      else {
        memmove(local_21c,local_21c + local_24,500);
      }
      lenmessage = lenmessage - local_24;
      uVar10 = 0;
      puVar9 = &DAT_080742b9;
      uVar7 = 1;
      puVar6 = local_21c;
      local_24 = _gfortran_string_index(500);
    }
    local_664 = "wrtout.F90";
    local_660 = 0xa3;
    local_63c = "(a)BUG";
    local_638 = 3;
    local_66c = 0x1000;
    local_668 = *param_1;
    _gfortran_st_write(&local_66c,puVar6,uVar7,puVar9,uVar10);
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
    local_63c = "(a)BUG";
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
  if (iVar2 == 0) {
    iVar2 = _gfortran_string_index
                      (local_434,local_438,0x15,
                                              
                       "Calculation completed(a,i5,a,i4,a).Delivered WARNINGs and COMMENTs to log file.(a,i6,a,i6,a) Note : exit requested by the user.ExitWARNINGCOMMENT"
                       ,0);
    if (iVar2 == 0) {
      bVar1 = false;
      goto LAB_0806ff5d;
    }
  }
  bVar1 = true;
LAB_0806ff5d:
  if ((0 < local_434) && (local_438 != (void *)0x0)) {
    free(local_438);
  }
  if ((0 < local_43c) && (local_440 != (void *)0x0)) {
    free(local_440);
  }
  if (bVar1) {
    if ((wrtout::nwarning < 10000) && (wrtout::ncomment < 1000)) {
      local_664 = "wrtout.F90";
      local_660 = 0xb1;
      local_63c = 
      "(a,i5,a,i4,a).Delivered WARNINGs and COMMENTs to log file.(a,i6,a,i6,a) Note : exit requested by the user.ExitWARNINGCOMMENT"
      ;
      local_638 = 0xd;
      local_66c = 0x1000;
      local_668 = *param_1;
      _gfortran_st_write(&local_66c);
      _gfortran_transfer_character
                (&local_66c,
                                  
                 ".Delivered WARNINGs and COMMENTs to log file.(a,i6,a,i6,a) Note : exit requested by the user.ExitWARNINGCOMMENT"
                 ,10);
      _gfortran_transfer_integer(&local_66c,&wrtout::nwarning,4);
      _gfortran_transfer_character
                (&local_66c,
                                  
                 " WARNINGs and COMMENTs to log file.(a,i6,a,i6,a) Note : exit requested by the user.ExitWARNINGCOMMENT"
                 ,0xd);
      _gfortran_transfer_integer(&local_66c,&wrtout::ncomment,4);
      _gfortran_transfer_character
                (&local_66c,
                                  
                 " COMMENTs to log file.(a,i6,a,i6,a) Note : exit requested by the user.ExitWARNINGCOMMENT"
                 ,0x16);
      _gfortran_st_write_done(&local_66c);
    }
    else {
      local_664 = "wrtout.F90";
      local_660 = 0xb4;
      local_63c = "(a,i6,a,i6,a) Note : exit requested by the user.ExitWARNINGCOMMENT";
      local_638 = 0xd;
      local_66c = 0x1000;
      local_668 = *param_1;
      _gfortran_st_write(&local_66c);
      _gfortran_transfer_character
                (&local_66c,
                                  
                 ".Delivered WARNINGs and COMMENTs to log file.(a,i6,a,i6,a) Note : exit requested by the user.ExitWARNINGCOMMENT"
                 ,10);
      _gfortran_transfer_integer(&local_66c,&wrtout::nwarning,4);
      _gfortran_transfer_character
                (&local_66c,
                                  
                 " WARNINGs and COMMENTs to log file.(a,i6,a,i6,a) Note : exit requested by the user.ExitWARNINGCOMMENT"
                 ,0xd);
      _gfortran_transfer_integer(&local_66c,&wrtout::ncomment,4);
      _gfortran_transfer_character
                (&local_66c,
                                  
                 " COMMENTs to log file.(a,i6,a,i6,a) Note : exit requested by the user.ExitWARNINGCOMMENT"
                 ,0x16);
      _gfortran_st_write_done(&local_66c);
    }
    if (wrtout::iexit != 0) {
      local_664 = "wrtout.F90";
      local_660 = 0xb7;
      local_63c = "(a)BUG";
      local_638 = 3;
      local_66c = 0x1000;
      local_668 = *param_1;
      _gfortran_st_write(&local_66c);
      _gfortran_transfer_character
                (&local_66c," Note : exit requested by the user.ExitWARNINGCOMMENT",0x23);
      _gfortran_st_write_done(&local_66c);
    }
  }
  _gfortran_string_trim(&local_444,&local_448,500,param_2);
  iVar2 = _gfortran_string_index(local_444,local_448,4,"ExitWARNINGCOMMENT",0);
  if ((0 < local_444) && (local_448 != (void *)0x0)) {
    free(local_448);
  }
  if (iVar2 != 0) {
    wrtout::iexit = 1;
  }
  _gfortran_string_trim(&local_44c,&local_450,500,param_2);
  iVar2 = _gfortran_string_index(local_44c,local_450,7,"WARNINGCOMMENT",0);
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
    wrtout::nwarning = wrtout::nwarning + 1;
  }
  _gfortran_string_trim(&local_454,&local_458,500,param_2);
  iVar2 = _gfortran_string_index(local_454,local_458,7,"COMMENT",0);
  if ((iVar2 == 0) || (*param_1 != 6)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((0 < local_454) && (local_458 != (void *)0x0)) {
    free(local_458);
  }
  if (bVar1) {
    wrtout::ncomment = wrtout::ncomment + 1;
  }
  if (local_20 != 0) {
    while (local_24 != 0) {
      _gfortran_concat_string(8,local_460,7,local_417,1,&DAT_080742b8);
      iVar2 = local_24 + -1;
      iVar4 = 0;
      if (-1 < iVar2) {
        iVar4 = iVar2;
      }
      sVar3 = (iVar4 + 8) * 0x20;
      if ((int)sVar3 < 0) {
        sVar3 = _gfortran_runtime_error("Attempt to allocate a negative amount of memory.");
      }
      if ((int)sVar3 < 1) {
        sVar3 = 1;
      }
      __src = malloc(sVar3);
      if (__src == (void *)0x0) {
        __src = (void *)_gfortran_os_error("Memory allocation failed");
      }
      iVar4 = 0;
      if (-1 < iVar2) {
        iVar4 = iVar2;
      }
      iVar5 = 0;
      if (-1 < iVar2) {
        iVar5 = iVar2;
      }
      _gfortran_concat_string(iVar5 + 8,__src,8,local_460,iVar4,param_2);
      iVar4 = 0;
      if (-1 < iVar2) {
        iVar4 = iVar2;
      }
      sVar3 = iVar4 + 8;
      if ((int)sVar3 < 500) {
        memmove(local_410,__src,sVar3);
        memset(auStack1032 + iVar4,0x20,500 - sVar3);
      }
      else {
        memmove(local_410,__src,500);
      }
      if (__src != (void *)0x0) {
        free(__src);
      }
      local_664 = "wrtout.F90";
      local_660 = 0xdc;
      local_63c = "(a)BUG";
      local_638 = 3;
      local_66c = 0x1000;
      local_668 = *param_1;
      _gfortran_st_write(&local_66c);
      _gfortran_string_trim(&local_464,&local_468,500,local_410);
      _gfortran_transfer_character(&local_66c,local_468,local_464);
      if ((0 < local_464) && (local_468 != (void *)0x0)) {
        free(local_468);
      }
      _gfortran_st_write_done(&local_66c);
      sVar8 = 0x1f5 - (local_24 + 1);
      sVar3 = 0;
      if (-1 < (int)sVar8) {
        sVar3 = sVar8;
      }
      if ((int)sVar3 < 500) {
        memmove(param_2,(void *)(local_24 + (int)param_2),sVar3);
        memset((void *)(sVar3 + (int)param_2),0x20,500 - sVar3);
      }
      else {
        memmove(param_2,(void *)(local_24 + (int)param_2),500);
      }
      local_24 = _gfortran_string_index(500,param_2,1,&DAT_080742b9,0);
    }
    _gfortran_concat_string(8,local_470,7,local_417,1,&DAT_080742b8);
    _gfortran_concat_string(0x1fc,&local_66c,8,local_470,500,param_2);
    memmove(local_410,&local_66c,500);
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
  EVP_PKEY_CTX *in_stack_ffffffd4;
  
  _init(in_stack_ffffffd4);
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
    ppcVar2 = &__CTOR_LIST__;
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


