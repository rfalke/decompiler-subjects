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

typedef struct pawrhoij_type pawrhoij_type, *Ppawrhoij_type;

struct pawrhoij_type {
    integer(kind=4) lmn_size;
    integer(kind=4) lmn2_size;
    integer(kind=4) lmnmix_sz;
    integer(kind=4) ngrhoij;
    integer(kind=4) nspden;
    integer(kind=4) nsppol;
    integer(kind=4) nrhoijsel[0];
    undefined field7_0x18;
    undefined field8_0x19;
    undefined field9_0x1a;
    undefined field10_0x1b;
    undefined field11_0x1c;
    undefined field12_0x1d;
    undefined field13_0x1e;
    undefined field14_0x1f;
    undefined field15_0x20;
    undefined field16_0x21;
    undefined field17_0x22;
    undefined field18_0x23;
    undefined field19_0x24;
    undefined field20_0x25;
    undefined field21_0x26;
    undefined field22_0x27;
    undefined field23_0x28;
    undefined field24_0x29;
    undefined field25_0x2a;
    undefined field26_0x2b;
    undefined field27_0x2c;
    undefined field28_0x2d;
    undefined field29_0x2e;
    undefined field30_0x2f;
    integer(kind=4) kpawmix[0];
    undefined field32_0x30;
    undefined field33_0x31;
    undefined field34_0x32;
    undefined field35_0x33;
    undefined field36_0x34;
    undefined field37_0x35;
    undefined field38_0x36;
    undefined field39_0x37;
    undefined field40_0x38;
    undefined field41_0x39;
    undefined field42_0x3a;
    undefined field43_0x3b;
    undefined field44_0x3c;
    undefined field45_0x3d;
    undefined field46_0x3e;
    undefined field47_0x3f;
    undefined field48_0x40;
    undefined field49_0x41;
    undefined field50_0x42;
    undefined field51_0x43;
    undefined field52_0x44;
    undefined field53_0x45;
    undefined field54_0x46;
    undefined field55_0x47;
    integer(kind=4) rhoijselect[0][0];
    undefined field57_0x48;
    undefined field58_0x49;
    undefined field59_0x4a;
    undefined field60_0x4b;
    undefined field61_0x4c;
    undefined field62_0x4d;
    undefined field63_0x4e;
    undefined field64_0x4f;
    undefined field65_0x50;
    undefined field66_0x51;
    undefined field67_0x52;
    undefined field68_0x53;
    undefined field69_0x54;
    undefined field70_0x55;
    undefined field71_0x56;
    undefined field72_0x57;
    undefined field73_0x58;
    undefined field74_0x59;
    undefined field75_0x5a;
    undefined field76_0x5b;
    undefined field77_0x5c;
    undefined field78_0x5d;
    undefined field79_0x5e;
    undefined field80_0x5f;
    undefined field81_0x60;
    undefined field82_0x61;
    undefined field83_0x62;
    undefined field84_0x63;
    undefined field85_0x64;
    undefined field86_0x65;
    undefined field87_0x66;
    undefined field88_0x67;
    undefined field89_0x68;
    undefined field90_0x69;
    undefined field91_0x6a;
    undefined field92_0x6b;
    real(kind=8) grhoij[0][0][0];
    undefined field94_0x6c;
    undefined field95_0x6d;
    undefined field96_0x6e;
    undefined field97_0x6f;
    undefined field98_0x70;
    undefined field99_0x71;
    undefined field100_0x72;
    undefined field101_0x73;
    undefined field102_0x74;
    undefined field103_0x75;
    undefined field104_0x76;
    undefined field105_0x77;
    undefined field106_0x78;
    undefined field107_0x79;
    undefined field108_0x7a;
    undefined field109_0x7b;
    undefined field110_0x7c;
    undefined field111_0x7d;
    undefined field112_0x7e;
    undefined field113_0x7f;
    undefined field114_0x80;
    undefined field115_0x81;
    undefined field116_0x82;
    undefined field117_0x83;
    undefined field118_0x84;
    undefined field119_0x85;
    undefined field120_0x86;
    undefined field121_0x87;
    undefined field122_0x88;
    undefined field123_0x89;
    undefined field124_0x8a;
    undefined field125_0x8b;
    undefined field126_0x8c;
    undefined field127_0x8d;
    undefined field128_0x8e;
    undefined field129_0x8f;
    undefined field130_0x90;
    undefined field131_0x91;
    undefined field132_0x92;
    undefined field133_0x93;
    undefined field134_0x94;
    undefined field135_0x95;
    undefined field136_0x96;
    undefined field137_0x97;
    undefined field138_0x98;
    undefined field139_0x99;
    undefined field140_0x9a;
    undefined field141_0x9b;
    real(kind=8) rhoij_[0][0];
    undefined field143_0x9c;
    undefined field144_0x9d;
    undefined field145_0x9e;
    undefined field146_0x9f;
    undefined field147_0xa0;
    undefined field148_0xa1;
    undefined field149_0xa2;
    undefined field150_0xa3;
    undefined field151_0xa4;
    undefined field152_0xa5;
    undefined field153_0xa6;
    undefined field154_0xa7;
    undefined field155_0xa8;
    undefined field156_0xa9;
    undefined field157_0xaa;
    undefined field158_0xab;
    undefined field159_0xac;
    undefined field160_0xad;
    undefined field161_0xae;
    undefined field162_0xaf;
    undefined field163_0xb0;
    undefined field164_0xb1;
    undefined field165_0xb2;
    undefined field166_0xb3;
    undefined field167_0xb4;
    undefined field168_0xb5;
    undefined field169_0xb6;
    undefined field170_0xb7;
    undefined field171_0xb8;
    undefined field172_0xb9;
    undefined field173_0xba;
    undefined field174_0xbb;
    undefined field175_0xbc;
    undefined field176_0xbd;
    undefined field177_0xbe;
    undefined field178_0xbf;
    real(kind=8) rhoijp[0][0];
    undefined field180_0xc0;
    undefined field181_0xc1;
    undefined field182_0xc2;
    undefined field183_0xc3;
    undefined field184_0xc4;
    undefined field185_0xc5;
    undefined field186_0xc6;
    undefined field187_0xc7;
    undefined field188_0xc8;
    undefined field189_0xc9;
    undefined field190_0xca;
    undefined field191_0xcb;
    undefined field192_0xcc;
    undefined field193_0xcd;
    undefined field194_0xce;
    undefined field195_0xcf;
    undefined field196_0xd0;
    undefined field197_0xd1;
    undefined field198_0xd2;
    undefined field199_0xd3;
    undefined field200_0xd4;
    undefined field201_0xd5;
    undefined field202_0xd6;
    undefined field203_0xd7;
    undefined field204_0xd8;
    undefined field205_0xd9;
    undefined field206_0xda;
    undefined field207_0xdb;
    undefined field208_0xdc;
    undefined field209_0xdd;
    undefined field210_0xde;
    undefined field211_0xdf;
    undefined field212_0xe0;
    undefined field213_0xe1;
    undefined field214_0xe2;
    undefined field215_0xe3;
    real(kind=8) rhoijres[0][0];
    undefined field217_0xe4;
    undefined field218_0xe5;
    undefined field219_0xe6;
    undefined field220_0xe7;
    undefined field221_0xe8;
    undefined field222_0xe9;
    undefined field223_0xea;
    undefined field224_0xeb;
    undefined field225_0xec;
    undefined field226_0xed;
    undefined field227_0xee;
    undefined field228_0xef;
    undefined field229_0xf0;
    undefined field230_0xf1;
    undefined field231_0xf2;
    undefined field232_0xf3;
    undefined field233_0xf4;
    undefined field234_0xf5;
    undefined field235_0xf6;
    undefined field236_0xf7;
    undefined field237_0xf8;
    undefined field238_0xf9;
    undefined field239_0xfa;
    undefined field240_0xfb;
    undefined field241_0xfc;
    undefined field242_0xfd;
    undefined field243_0xfe;
    undefined field244_0xff;
    undefined field245_0x100;
    undefined field246_0x101;
    undefined field247_0x102;
    undefined field248_0x103;
    undefined field249_0x104;
    undefined field250_0x105;
    undefined field251_0x106;
    undefined field252_0x107;
};

typedef struct wffile_type wffile_type, *Pwffile_type;

struct wffile_type {
    integer(kind=4) unwff;
    integer(kind=4) accesswff;
    integer(kind=4) formwff;
    integer(kind=4) kgwff;
    undefined field4_0x10;
    undefined field5_0x11;
    undefined field6_0x12;
    undefined field7_0x13;
    undefined field8_0x14;
    undefined field9_0x15;
    undefined field10_0x16;
    undefined field11_0x17;
    undefined field12_0x18;
    undefined field13_0x19;
    undefined field14_0x1a;
    undefined field15_0x1b;
    undefined field16_0x1c;
    undefined field17_0x1d;
    undefined field18_0x1e;
    undefined field19_0x1f;
    undefined field20_0x20;
    undefined field21_0x21;
    undefined field22_0x22;
    undefined field23_0x23;
    undefined field24_0x24;
    undefined field25_0x25;
    undefined field26_0x26;
    undefined field27_0x27;
    undefined field28_0x28;
    undefined field29_0x29;
    undefined field30_0x2a;
    undefined field31_0x2b;
    undefined field32_0x2c;
    undefined field33_0x2d;
    undefined field34_0x2e;
    undefined field35_0x2f;
    undefined field36_0x30;
    undefined field37_0x31;
    undefined field38_0x32;
    undefined field39_0x33;
    undefined field40_0x34;
    undefined field41_0x35;
    undefined field42_0x36;
    undefined field43_0x37;
    undefined field44_0x38;
    undefined field45_0x39;
    undefined field46_0x3a;
    undefined field47_0x3b;
    undefined field48_0x3c;
    undefined field49_0x3d;
    undefined field50_0x3e;
    undefined field51_0x3f;
    undefined field52_0x40;
    undefined field53_0x41;
    undefined field54_0x42;
    undefined field55_0x43;
    undefined field56_0x44;
    undefined field57_0x45;
    undefined field58_0x46;
    undefined field59_0x47;
    undefined field60_0x48;
    undefined field61_0x49;
    undefined field62_0x4a;
    undefined field63_0x4b;
    undefined field64_0x4c;
    undefined field65_0x4d;
    undefined field66_0x4e;
    undefined field67_0x4f;
    undefined field68_0x50;
    undefined field69_0x51;
    undefined field70_0x52;
    undefined field71_0x53;
    undefined field72_0x54;
    undefined field73_0x55;
    undefined field74_0x56;
    undefined field75_0x57;
    undefined field76_0x58;
    undefined field77_0x59;
    undefined field78_0x5a;
    undefined field79_0x5b;
    undefined field80_0x5c;
    undefined field81_0x5d;
    undefined field82_0x5e;
    undefined field83_0x5f;
    undefined field84_0x60;
    undefined field85_0x61;
    undefined field86_0x62;
    undefined field87_0x63;
    undefined field88_0x64;
    undefined field89_0x65;
    undefined field90_0x66;
    undefined field91_0x67;
    undefined field92_0x68;
    undefined field93_0x69;
    undefined field94_0x6a;
    undefined field95_0x6b;
    undefined field96_0x6c;
    undefined field97_0x6d;
    undefined field98_0x6e;
    undefined field99_0x6f;
    undefined field100_0x70;
    undefined field101_0x71;
    undefined field102_0x72;
    undefined field103_0x73;
    undefined field104_0x74;
    undefined field105_0x75;
    undefined field106_0x76;
    undefined field107_0x77;
    undefined field108_0x78;
    undefined field109_0x79;
    undefined field110_0x7a;
    undefined field111_0x7b;
    undefined field112_0x7c;
    undefined field113_0x7d;
    undefined field114_0x7e;
    undefined field115_0x7f;
    undefined field116_0x80;
    undefined field117_0x81;
    undefined field118_0x82;
    undefined field119_0x83;
    undefined field120_0x84;
    undefined field121_0x85;
    undefined field122_0x86;
    undefined field123_0x87;
    undefined field124_0x88;
    undefined field125_0x89;
    undefined field126_0x8a;
    undefined field127_0x8b;
    undefined field128_0x8c;
    undefined field129_0x8d;
    undefined field130_0x8e;
    undefined field131_0x8f;
    undefined field132_0x90;
    undefined field133_0x91;
    undefined field134_0x92;
    undefined field135_0x93;
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

typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

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

typedef struct Gnu_BuildId Gnu_BuildId, *PGnu_BuildId;

struct Gnu_BuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Build-id vendor name
    byte description[20]; // Build-id value
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


/*
Unable to decompile 'MAIN__'
Cause: Exception while decompiling 08048e54: process: timeout

*/


void linopt_(int *param_1,double *param_2,int *param_3,int param_4,int *param_5,int param_6,
            uint *param_7,int param_8,int param_9,double *param_10,int param_11,int *param_12,
            int *param_13,int *param_14,double *param_15,double *param_16,double *param_17)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  void *pvVar8;
  size_t __size;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  size_t sVar20;
  size_t extraout_EDX;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  bool bVar25;
  char *pcVar27;
  longlong lVar26;
  double *pdVar28;
  void *pvVar29;
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
  void *local_10c;
  int local_108;
  undefined4 local_104;
  int local_100;
  int local_fc;
  int local_f8;
  double local_f4;
  void *local_ec;
  int local_e8;
  undefined4 local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  double local_d4;
  double local_cc;
  double local_c4;
  double local_bc;
  double local_b4;
  double local_ac;
  double local_a4;
  double local_9c;
  double local_94;
  double local_8c;
  double local_84;
  uint local_78;
  int local_74;
  int local_70;
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
  uint local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_24 = *param_5;
  local_78 = *param_7;
  uVar12 = 0;
  if (-1 < (int)local_78) {
    uVar12 = local_78;
  }
  local_74 = *param_1;
  iVar11 = 0;
  if (-1 < (int)(uVar12 * local_74)) {
    iVar11 = uVar12 * local_74;
  }
  local_70 = *param_3;
  iVar18 = ~uVar12 - iVar11;
  local_34 = *param_7;
  uVar13 = 0;
  if (-1 < (int)local_34) {
    uVar13 = local_34;
  }
  local_30 = *param_7;
  iVar22 = 0;
  if (-1 < (int)(uVar13 * local_30)) {
    iVar22 = uVar13 * local_30;
  }
  local_2c = *param_3;
  iVar14 = 0;
  if (-1 < iVar22 * local_2c) {
    iVar14 = iVar22 * local_2c;
  }
  iVar23 = 0;
  if (-1 < iVar14 * 3) {
    iVar23 = iVar14 * 3;
  }
  local_28 = *param_1;
  iVar19 = ((~uVar13 - iVar22) - iVar14) - iVar23;
  local_20 = *param_3;
  local_40 = *param_7;
  uVar15 = 0;
  if (-1 < (int)local_40) {
    uVar15 = local_40;
  }
  local_3c = *param_1;
  iVar24 = 0;
  if (-1 < (int)(uVar15 * local_3c)) {
    iVar24 = uVar15 * local_3c;
  }
  local_38 = *param_3;
  local_ec = (void *)0x0;
  local_10c = (void *)0x0;
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
  local_e4 = 0x421;
  local_dc = 1;
  local_d8 = *param_14;
  local_e0 = 1;
  iVar16 = 0;
  if (-1 < *param_14) {
    iVar16 = *param_14;
  }
  if (*param_14 < 1) {
    sVar20 = 0;
  }
  else {
    sVar20 = iVar16 << 4;
  }
  if (local_ec == (void *)0x0) {
    if ((int)sVar20 < 0) {
      sVar20 = _gfortran_runtime_error();
    }
    if ((int)sVar20 < 1) {
      sVar20 = 1;
    }
    pvVar8 = malloc(sVar20);
    if (pvVar8 == (void *)0x0) {
      pvVar8 = (void *)_gfortran_os_error();
    }
    local_e8 = -1;
    local_104 = 0x421;
    local_fc = 1;
    local_f8 = *param_14;
    local_100 = 1;
    iVar16 = 0;
    if (-1 < *param_14) {
      iVar16 = *param_14;
    }
    local_ec = pvVar8;
    if (*param_14 < 1) goto LAB_0804eeb6;
    sVar20 = iVar16 << 4;
  }
  else {
    _gfortran_runtime_error_at();
LAB_0804eeb6:
    sVar20 = 0;
  }
  if (local_10c == (void *)0x0) {
    if ((int)sVar20 < 0) {
      sVar20 = _gfortran_runtime_error();
    }
    if ((int)sVar20 < 1) {
      sVar20 = 1;
    }
    pvVar8 = malloc(sVar20);
    if (pvVar8 == (void *)0x0) {
      pvVar8 = (void *)_gfortran_os_error();
    }
    local_108 = -1;
    local_23c = 0x21a;
    local_234 = 1;
    local_230 = 3;
    local_238 = 1;
    local_228 = 1;
    local_224 = 3;
    local_22c = 3;
    local_10c = pvVar8;
    if (local_244 == (void *)0x0) goto LAB_0804ef83;
    _gfortran_runtime_error_at();
LAB_0804f020:
    pvVar8 = malloc(0x48);
    if (pvVar8 == (void *)0x0) {
      pvVar8 = (void *)_gfortran_os_error();
    }
    local_264 = -4;
    local_21c = *param_17 * 0.0 - 0.0;
    local_214 = *param_17 + 0.0;
    local_b4 = 1.0 / ((double)*param_5 * *param_2);
    local_6c = 27.21138381958008;
    local_268 = pvVar8;
    _gfortran_string_trim();
    sVar20 = (local_280 + 0xb) * 0x20;
    if (-1 < (int)sVar20) goto LAB_0804f101;
  }
  else {
    _gfortran_runtime_error_at();
LAB_0804ef83:
    pvVar8 = malloc(0x48);
    if (pvVar8 == (void *)0x0) {
      pvVar8 = (void *)_gfortran_os_error();
    }
    local_240 = -4;
    local_260 = 0x21a;
    local_258 = 1;
    local_254 = 3;
    local_25c = 1;
    local_24c = 1;
    local_248 = 3;
    local_250 = 3;
    local_244 = pvVar8;
    if (local_268 == (void *)0x0) goto LAB_0804f020;
    _gfortran_runtime_error_at();
  }
  _gfortran_runtime_error();
  sVar20 = extraout_EDX;
LAB_0804f101:
  __size = 1;
  if (0 < (int)sVar20) {
    __size = sVar20;
  }
  pvVar8 = malloc(__size);
  if (pvVar8 == (void *)0x0) {
    pvVar8 = (void *)_gfortran_os_error();
  }
  pvVar29 = local_284;
  _gfortran_concat_string();
  if ((0 < local_280) && (local_284 != (void *)0x0)) {
    free(local_284);
  }
  sVar20 = local_280 + 0xb;
  if ((int)sVar20 < 0x100) {
    memmove(local_20c,pvVar8,sVar20);
    memset(auStack513 + local_280,0x20,0x100 - sVar20);
  }
  else {
    memmove(local_20c,pvVar8,0x100);
  }
  iVar16 = local_24c;
  if (pvVar8 != (void *)0x0) {
    free(pvVar8);
    iVar16 = local_24c;
  }
  for (; iVar16 <= local_248; iVar16 = iVar16 + 1) {
    for (iVar21 = local_258; iVar21 <= local_254; iVar21 = iVar21 + 1) {
      *(undefined8 *)((int)local_268 + (local_264 + local_250 * iVar16 + iVar21 * local_25c) * 8) =
           0;
    }
  }
  iVar16 = *param_5;
  local_54 = 1;
  if (0 < iVar16) {
    do {
      for (iVar21 = 1; iVar21 < 4; iVar21 = iVar21 + 1) {
        for (iVar17 = 1; iVar17 < 4; iVar17 = iVar17 + 1) {
          *(undefined8 *)
           ((int)local_244 +
           ((iVar17 + local_234 + -1) * local_238 +
           local_22c * (iVar21 + local_228 + -1) + local_240) * 8) =
               *(undefined8 *)(param_6 + (iVar17 + local_54 * 9 + -0xd + iVar21 * 3) * 8);
        }
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
          bVar25 = local_4c != 3;
          local_4c = local_4c + 1;
        } while (bVar25);
        bVar25 = local_64 != 3;
        local_64 = local_64 + 1;
      } while (bVar25);
      bVar25 = local_54 != iVar16;
      local_54 = local_54 + 1;
    } while (bVar25);
  }
  local_84 = 0.0;
  local_8c = 0.0;
  local_220 = 1;
  iVar16 = local_dc;
  if (0 < *param_3) {
    do {
      local_60 = 1;
      if (0 < *param_1) {
        do {
          local_5c = 1;
          if (0 < (int)*param_7) {
            do {
              dVar1 = *(double *)
                       (param_9 + (uVar12 * local_60 + local_220 * iVar11 + local_5c + iVar18) * 8);
              if (dVar1 < local_84) {
                local_84 = dVar1;
              }
              dVar1 = *(double *)
                       (param_9 + (uVar12 * local_60 + local_220 * iVar11 + local_5c + iVar18) * 8);
              if (local_8c < dVar1) {
                local_8c = dVar1;
              }
              bVar25 = local_5c != *param_7;
              local_5c = local_5c + 1;
            } while (bVar25);
          }
          bVar25 = local_60 != *param_1;
          local_60 = local_60 + 1;
        } while (bVar25);
      }
      bVar25 = local_220 != *param_3;
      local_220 = local_220 + 1;
    } while (bVar25);
  }
  for (; iVar16 <= local_d8; iVar16 = iVar16 + 1) {
    iVar21 = (iVar16 * local_e0 + local_e8) * 0x10;
    *(undefined8 *)(iVar21 + (int)local_ec) = 0;
    *(undefined8 *)(iVar21 + 8 + (int)local_ec) = 0;
  }
  iVar16 = *param_3;
  local_220 = 1;
  if (0 < iVar16) {
    do {
      local_418 = "linopt.F90";
      local_414 = 0xbc;
      local_420 = 0x80;
      local_41c = 6;
      _gfortran_st_write();
      _gfortran_transfer_integer(&local_420,&local_220,4,pvVar29);
      _gfortran_transfer_character();
      _gfortran_transfer_integer();
      _gfortran_st_write_done();
      iVar21 = *param_1;
      local_60 = 1;
      if (0 < iVar21) {
        do {
          uVar4 = *param_7;
          local_5c = 1;
          if (0 < (int)uVar4) {
            do {
              local_a4 = *(double *)
                          (param_9 +
                          (uVar12 * local_60 + local_220 * iVar11 + local_5c + iVar18) * 8);
              if (local_a4 < *param_10) {
                uVar5 = *param_7;
                local_58 = local_5c;
                if ((int)local_5c <= (int)uVar5) {
                  do {
                    local_94 = *(double *)
                                (param_9 +
                                (uVar12 * local_60 + local_220 * iVar11 + local_58 + iVar18) * 8);
                    if (*param_10 < local_94) {
                      local_9c = (local_a4 - local_94) - *param_16;
                      local_ac = local_9c / (*param_16 + local_9c);
                      local_c4 = 0.0;
                      local_bc = 0.0;
                      local_48 = 1;
                      do {
                        local_44 = 1;
                        do {
                          dVar1 = *(double *)
                                   ((int)local_268 +
                                   (local_25c * local_48 + local_250 * local_44 + local_264) * 8);
                          iVar17 = (uVar13 * local_58 + local_220 * iVar22 + local_5c +
                                    iVar23 * local_60 + iVar14 * local_48 + iVar19) * 0x10;
                          dVar2 = *(double *)(iVar17 + param_11);
                          dVar3 = *(double *)(iVar17 + 8 + param_11);
                          dVar6 = dVar1 * dVar2 - dVar3 * 0.0;
                          dVar2 = dVar2 * 0.0 + dVar3 * dVar1;
                          iVar17 = (uVar13 * local_58 + local_220 * iVar22 + local_5c +
                                    iVar23 * local_60 + iVar14 * local_44 + iVar19) * 0x10;
                          dVar1 = *(double *)(iVar17 + param_11);
                          dVar3 = -*(double *)(iVar17 + 8 + param_11);
                          local_c4 = local_c4 + (dVar6 * dVar1 - dVar2 * dVar3);
                          local_bc = local_bc + dVar1 * dVar2 + dVar3 * dVar6;
                          bVar25 = local_44 != 3;
                          local_44 = local_44 + 1;
                        } while (bVar25);
                        bVar25 = local_48 != 3;
                        local_48 = local_48 + 1;
                      } while (bVar25);
                      dVar2 = local_b4 * local_c4 - local_bc * 0.0;
                      dVar1 = local_c4 * 0.0 + local_bc * local_b4;
                      dVar3 = dVar2 * local_ac - dVar1 * 0.0;
                      dVar1 = local_ac * dVar1 + dVar2 * 0.0;
                      dVar2 = dVar3 * local_ac - dVar1 * 0.0;
                      dVar3 = local_ac * dVar1 + dVar3 * 0.0;
                      dVar1 = (local_9c * local_9c) / 1.0;
                      local_d4 = dVar2 * dVar1 - dVar3 * 0.0;
                      local_cc = dVar2 * 0.0 + dVar1 * dVar3;
                      iVar17 = *param_14;
                      local_50 = 2;
                      if (1 < iVar17) {
                        do {
                          local_27c = local_21c + *param_15 * (double)(local_50 + -1);
                          local_274 = local_214 + 0.0;
                          iVar9 = (local_e0 * local_50 + local_e8) * 0x10;
                          dVar1 = *(double *)(iVar9 + 8 + (int)local_ec);
                          dVar6 = (*(double *)
                                    (param_8 +
                                    (uVar15 * local_60 + local_220 * iVar24 + local_5c +
                                    (~uVar15 - iVar24)) * 8) -
                                  *(double *)
                                   (param_8 +
                                   (uVar15 * local_60 + local_220 * iVar24 + local_58 +
                                   (~uVar15 - iVar24)) * 8)) *
                                  *(double *)(param_4 + (local_220 + -1) * 8);
                          dVar2 = -local_9c - local_27c;
                          dVar3 = 0.0 - local_274;
                          if (ABS(dVar3) <= ABS(dVar2)) {
                            dVar7 = dVar3 / dVar2;
                            dVar2 = dVar3 * dVar7 + dVar2;
                            dVar3 = (local_cc * dVar7 + local_d4) / dVar2;
                            dVar2 = dVar2 / (local_cc - local_d4 * dVar7);
                          }
                          else {
                            dVar7 = dVar2 / dVar3;
                            dVar2 = dVar2 * dVar7 + dVar3;
                            dVar3 = (local_d4 * dVar7 + local_cc) / dVar2;
                            dVar2 = (local_cc * dVar7 - local_d4) / dVar2;
                          }
                          iVar10 = (local_e0 * local_50 + local_e8) * 0x10;
                          *(double *)(iVar10 + (int)local_ec) =
                               (dVar6 * dVar3 - dVar2 * 0.0) + *(double *)(iVar9 + (int)local_ec);
                          *(double *)(iVar10 + 8 + (int)local_ec) =
                               dVar2 * dVar6 + dVar3 * 0.0 + dVar1;
                          bVar25 = local_50 != iVar17;
                          local_50 = local_50 + 1;
                        } while (bVar25);
                      }
                    }
                    bVar25 = local_58 != uVar5;
                    local_58 = local_58 + 1;
                  } while (bVar25);
                }
              }
              bVar25 = local_5c != uVar4;
              local_5c = local_5c + 1;
            } while (bVar25);
          }
          bVar25 = local_60 != iVar21;
          local_60 = local_60 + 1;
        } while (bVar25);
      }
      bVar25 = local_220 != iVar16;
      local_220 = local_220 + 1;
    } while (bVar25);
  }
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
             ,0x21,pvVar29);
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
             ,0x1b,pvVar29);
  _gfortran_transfer_integer(&local_420,param_12,4,pvVar29);
  _gfortran_transfer_integer(&local_420,param_13,4,pvVar29);
  _gfortran_transfer_character
            (&local_420,
             "of linear susceptibilitycalculated the component:(a,2es16.6) #broadening: with broadening:(a,es16.6) #scissors shift:and scissors shift:(a,es16.6,a,es16.6,a) #energy window:eVHaenergy window:(2es16.6)"
             ,0x18,pvVar29);
  _gfortran_st_write_done();
  local_418 = "linopt.F90";
  local_414 = 0xe5;
  local_420 = 0x80;
  local_41c = 6;
  _gfortran_st_write();
  _gfortran_transfer_character
            (&local_420,
             "calculated the component:(a,2es16.6) #broadening: with broadening:(a,es16.6) #scissors shift:and scissors shift:(a,es16.6,a,es16.6,a) #energy window:eVHaenergy window:(2es16.6)"
             ,0x19,pvVar29);
  _gfortran_transfer_integer(&local_420,param_12,4,pvVar29);
  _gfortran_transfer_integer(&local_420,param_13,4,pvVar29);
  _gfortran_transfer_character
            (&local_420,
             "of linear susceptibilitycalculated the component:(a,2es16.6) #broadening: with broadening:(a,es16.6) #scissors shift:and scissors shift:(a,es16.6,a,es16.6,a) #energy window:eVHaenergy window:(2es16.6)"
             ,0x18,pvVar29);
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
             ,0xd,pvVar29);
  local_28c = local_21c;
  _gfortran_transfer_real(&local_420,&local_28c,8,pvVar29);
  local_294 = local_214;
  _gfortran_transfer_real(&local_420,&local_294,8,pvVar29);
  _gfortran_st_write_done();
  local_418 = "linopt.F90";
  local_414 = 0xe7;
  local_420 = 0x80;
  local_41c = 6;
  _gfortran_st_write();
  _gfortran_transfer_character
            (&local_420,
             " with broadening:(a,es16.6) #scissors shift:and scissors shift:(a,es16.6,a,es16.6,a) #energy window:eVHaenergy window:(2es16.6)"
             ,0x11,pvVar29);
  _gfortran_transfer_complex(&local_420,&local_21c,8,pvVar29);
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
             ,0x11,pvVar29);
  _gfortran_transfer_real(&local_420,param_16,8,pvVar29);
  _gfortran_st_write_done();
  local_418 = "linopt.F90";
  local_414 = 0xe9;
  local_420 = 0x80;
  local_41c = 6;
  _gfortran_st_write();
  _gfortran_transfer_character
            (&local_420,
             "and scissors shift:(a,es16.6,a,es16.6,a) #energy window:eVHaenergy window:(2es16.6)",
             0x13,pvVar29);
  _gfortran_transfer_real(&local_420,param_16,8,pvVar29);
  _gfortran_st_write_done();
  local_418 = "linopt.F90";
  local_414 = 0xea;
  local_3f0 = "(a,es16.6,a,es16.6,a) #energy window:eVHaenergy window:(2es16.6)";
  local_3ec = 0x15;
  local_420 = 0x1000;
  local_41c = 0x5c;
  _gfortran_st_write();
  _gfortran_transfer_character
            (&local_420," #energy window:eVHaenergy window:(2es16.6)",0x10,pvVar29);
  local_29c = (local_8c - local_84) * local_6c;
  _gfortran_transfer_real(&local_420,&local_29c,8,pvVar29);
  _gfortran_transfer_character(&local_420,"eVHaenergy window:(2es16.6)",2,pvVar29);
  local_2a4 = local_8c - local_84;
  _gfortran_transfer_real(&local_420,&local_2a4,8,pvVar29);
  _gfortran_transfer_character(&local_420,"Haenergy window:(2es16.6)",2,pvVar29);
  _gfortran_st_write_done();
  local_418 = "linopt.F90";
  local_414 = 0xeb;
  local_420 = 0x80;
  local_41c = 6;
  _gfortran_st_write();
  _gfortran_transfer_character(&local_420,"energy window:(2es16.6)",0xe,pvVar29);
  local_2ac = (local_8c - local_84) * local_6c;
  _gfortran_transfer_real(&local_420,&local_2ac,8,pvVar29);
  _gfortran_transfer_character(&local_420,"eVHaenergy window:(2es16.6)",2,pvVar29);
  local_2b4 = local_8c - local_84;
  _gfortran_transfer_real(&local_420,&local_2b4,8,pvVar29);
  _gfortran_transfer_character(&local_420,"Haenergy window:(2es16.6)",2,pvVar29);
  _gfortran_st_write_done();
  for (iVar11 = local_fc; iVar11 <= local_f8; iVar11 = iVar11 + 1) {
    iVar18 = (iVar11 * local_100 + local_108) * 0x10;
    *(undefined8 *)(iVar18 + (int)local_10c) = 0;
    *(undefined8 *)(iVar18 + 8 + (int)local_10c) = 0;
  }
  iVar11 = *param_14;
  local_50 = 2;
  if (1 < iVar11) {
    do {
      local_f4 = *param_15 * (double)(local_50 + -1) * local_6c;
      iVar18 = (local_e0 * local_50 + local_e8) * 0x10;
      dVar1 = *(double *)(iVar18 + (int)local_ec);
      dVar2 = *(double *)(iVar18 + 8 + (int)local_ec);
      iVar18 = (local_100 * local_50 + local_108) * 0x10;
      *(double *)(iVar18 + (int)local_10c) = (dVar1 * 12.56637061435917 - dVar2 * 0.0) + 1.0;
      *(double *)(iVar18 + 8 + (int)local_10c) = dVar2 * 12.56637061435917 + dVar1 * 0.0 + 0.0;
      local_418 = "linopt.F90";
      local_414 = 0xf1;
      local_3f0 = "(2es16.6)";
      local_3ec = 9;
      local_420 = 0x1000;
      local_41c = 0x5c;
      _gfortran_st_write();
      _gfortran_transfer_real(&local_420,&local_f4,8,pvVar29);
      local_2bc = *(undefined8 *)((local_100 * local_50 + local_108) * 0x10 + 8 + (int)local_10c);
      _gfortran_transfer_real();
      _gfortran_st_write_done();
      bVar25 = local_50 != iVar11;
      local_50 = local_50 + 1;
    } while (bVar25);
  }
  local_418 = "linopt.F90";
  local_414 = 0xf3;
  local_420 = 0x80;
  local_41c = 0x5c;
  _gfortran_st_write();
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
  _gfortran_transfer_character(&local_420," # Energy(eV)         Re(chi1(w))",0x21,pvVar29);
  _gfortran_st_write_done();
  iVar11 = *param_14;
  local_50 = 2;
  if (1 < iVar11) {
    do {
      local_f4 = *param_15 * (double)(local_50 + -1) * local_6c;
      local_418 = "linopt.F90";
      local_414 = 0xf9;
      local_3f0 = "(2es16.6)";
      local_3ec = 9;
      local_420 = 0x1000;
      local_41c = 0x5c;
      _gfortran_st_write();
      _gfortran_transfer_real(&local_420,&local_f4,8,pvVar29);
      local_2c4 = *(undefined8 *)((local_100 * local_50 + local_108) * 0x10 + (int)local_10c);
      _gfortran_transfer_real();
      _gfortran_st_write_done();
      bVar25 = local_50 != iVar11;
      local_50 = local_50 + 1;
    } while (bVar25);
  }
  local_418 = "linopt.F90";
  local_414 = 0xfb;
  local_420 = 0x80;
  local_41c = 0x5c;
  _gfortran_st_write();
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
  pcVar27 = " # Energy(eV)         abs(chi1(w))";
  _gfortran_transfer_character(&local_420," # Energy(eV)         abs(chi1(w))",0x22,pvVar29);
  lVar26 = ZEXT48(pcVar27) << 0x20;
  _gfortran_st_write_done();
  iVar11 = *param_14;
  local_50 = 2;
  if (1 < iVar11) {
    do {
      local_f4 = *param_15 * (double)(local_50 + -1) * local_6c;
      local_418 = "linopt.F90";
      local_414 = 0x101;
      local_3f0 = "(2es16.6)";
      local_3ec = 9;
      local_420 = 0x1000;
      local_41c = 0x5c;
      _gfortran_st_write(&local_420,(int)((ulonglong)lVar26 >> 0x20));
      _gfortran_transfer_real(&local_420,&local_f4,8,pvVar29);
      iVar18 = (local_100 * local_50 + local_108) * 0x10;
      pvVar29 = (void *)((ulonglong)*(undefined8 *)(iVar18 + 8 + (int)local_10c) >> 0x20);
      local_2cc = cabs(*(double *)(iVar18 + (int)local_10c));
      pdVar28 = &local_2cc;
      _gfortran_transfer_real();
      lVar26 = ZEXT48(pdVar28) << 0x20;
      _gfortran_st_write_done();
      bVar25 = local_50 != iVar11;
      local_50 = local_50 + 1;
    } while (bVar25);
  }
  local_418 = "linopt.F90";
  local_414 = 0x105;
  local_420 = 0;
  local_41c = 0x5c;
  _gfortran_st_close();
  if (local_244 == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 263 of file linopt.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_080713d7,pvVar29);
  }
  free(local_244);
  local_244 = (void *)0x0;
  if (local_268 == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 263 of file linopt.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_080713fb,pvVar29);
  }
  free(local_268);
  local_268 = (void *)0x0;
  if (local_ec == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 263 of file linopt.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_0807137b,pvVar29);
  }
  free(local_ec);
  local_ec = (void *)0x0;
  if (local_10c == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 263 of file linopt.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_080713d3,pvVar29);
  }
  free(local_10c);
  local_10c = (void *)0x0;
  if (local_268 != (void *)0x0) {
    free(local_268);
  }
  local_268 = (void *)0x0;
  if (local_244 != (void *)0x0) {
    free(local_244);
  }
  local_244 = (void *)0x0;
  if (local_10c != (void *)0x0) {
    free(local_10c);
  }
  local_10c = (void *)0x0;
  if (local_ec != (void *)0x0) {
    free(local_ec);
  }
  return;
}


/*
Unable to decompile 'nlinopt_'
Cause: Exception while decompiling 08050b5c: process: timeout

*/


void hdr_clean_(int param_1)

{
  int iVar1;
  bool bVar2;
  int local_10;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    _gfortran_runtime_error_at
              ("At line 59 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)(param_1 + 0x4c));
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (*(int *)(param_1 + 0x234) == 0) {
    _gfortran_runtime_error_at
              ("At line 60 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)(param_1 + 0x234));
  *(undefined4 *)(param_1 + 0x234) = 0;
  if (*(int *)(param_1 + 100) == 0) {
    _gfortran_runtime_error_at
              ("At line 61 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)(param_1 + 100));
  *(undefined4 *)(param_1 + 100) = 0;
  if (*(int *)(param_1 + 0x7c) == 0) {
    _gfortran_runtime_error_at
              ("At line 62 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)(param_1 + 0x7c));
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if (*(int *)(param_1 + 0x94) == 0) {
    _gfortran_runtime_error_at
              ("At line 63 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)(param_1 + 0x94));
  *(undefined4 *)(param_1 + 0x94) = 0;
  if (*(int *)(param_1 + 600) == 0) {
    _gfortran_runtime_error_at
              ("At line 64 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)(param_1 + 600));
  *(undefined4 *)(param_1 + 600) = 0;
  if (*(int *)(param_1 + 0xac) == 0) {
    _gfortran_runtime_error_at
              ("At line 65 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)(param_1 + 0xac));
  *(undefined4 *)(param_1 + 0xac) = 0;
  if (*(int *)(param_1 + 0xc4) == 0) {
    _gfortran_runtime_error_at
              ("At line 66 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)(param_1 + 0xc4));
  *(undefined4 *)(param_1 + 0xc4) = 0;
  if (*(int *)(param_1 + 0xdc) == 0) {
    _gfortran_runtime_error_at
              ("At line 67 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)(param_1 + 0xdc));
  *(undefined4 *)(param_1 + 0xdc) = 0;
  if (*(int *)(param_1 + 0xf4) == 0) {
    _gfortran_runtime_error_at
              ("At line 68 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)(param_1 + 0xf4));
  *(undefined4 *)(param_1 + 0xf4) = 0;
  if (*(int *)(param_1 + 0x10c) == 0) {
    _gfortran_runtime_error_at
              ("At line 69 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)(param_1 + 0x10c));
  *(undefined4 *)(param_1 + 0x10c) = 0;
  if (*(int *)(param_1 + 0x124) == 0) {
    _gfortran_runtime_error_at
              ("At line 70 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)(param_1 + 0x124));
  *(undefined4 *)(param_1 + 0x124) = 0;
  if (*(int *)(param_1 + 0x13c) == 0) {
    _gfortran_runtime_error_at
              ("At line 71 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)(param_1 + 0x13c));
  *(undefined4 *)(param_1 + 0x13c) = 0;
  if (*(int *)(param_1 + 800) == 0) {
    _gfortran_runtime_error_at
              ("At line 72 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)(param_1 + 800));
  *(undefined4 *)(param_1 + 800) = 0;
  if (*(int *)(param_1 + 0x270) == 0) {
    _gfortran_runtime_error_at
              ("At line 73 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)(param_1 + 0x270));
  *(undefined4 *)(param_1 + 0x270) = 0;
  if (*(int *)(param_1 + 0x16c) == 0) {
    _gfortran_runtime_error_at
              ("At line 74 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)(param_1 + 0x16c));
  *(undefined4 *)(param_1 + 0x16c) = 0;
  if (*(int *)(param_1 + 0x294) == 0) {
    _gfortran_runtime_error_at
              ("At line 75 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)(param_1 + 0x294));
  *(undefined4 *)(param_1 + 0x294) = 0;
  if (*(int *)(param_1 + 0x2ac) == 0) {
    _gfortran_runtime_error_at
              ("At line 76 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)(param_1 + 0x2ac));
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  if (*(int *)(param_1 + 0x2d0) == 0) {
    _gfortran_runtime_error_at
              ("At line 77 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)(param_1 + 0x2d0));
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  if (*(int *)(param_1 + 0x2e8) == 0) {
    _gfortran_runtime_error_at
              ("At line 78 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)(param_1 + 0x2e8));
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  if (*(int *)(param_1 + 0x300) == 0) {
    _gfortran_runtime_error_at
              ("At line 79 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08071fe0);
  }
  free(*(void **)(param_1 + 0x300));
  *(undefined4 *)(param_1 + 0x300) = 0;
  if (*(int *)(param_1 + 0x3c) == 1) {
    iVar1 = *(int *)(param_1 + 0x14);
    local_10 = 1;
    if (0 < iVar1) {
      do {
        if (*(int *)((*(int *)(param_1 + 0x344) * local_10 + *(int *)(param_1 + 0x33c)) * 0x108 +
                     *(int *)(param_1 + 0x338) + 0x18) == 0) {
          _gfortran_runtime_error_at
                    ("At line 82 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
                     &DAT_08071fe0);
        }
        free(*(void **)((*(int *)(param_1 + 0x344) * local_10 + *(int *)(param_1 + 0x33c)) * 0x108 +
                        *(int *)(param_1 + 0x338) + 0x18));
        *(undefined4 *)
         ((*(int *)(param_1 + 0x344) * local_10 + *(int *)(param_1 + 0x33c)) * 0x108 +
          *(int *)(param_1 + 0x338) + 0x18) = 0;
        if (*(int *)((*(int *)(param_1 + 0x344) * local_10 + *(int *)(param_1 + 0x33c)) * 0x108 +
                     *(int *)(param_1 + 0x338) + 0xc0) == 0) {
          _gfortran_runtime_error_at
                    ("At line 83 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
                     &DAT_08071fe0);
        }
        free(*(void **)((*(int *)(param_1 + 0x344) * local_10 + *(int *)(param_1 + 0x33c)) * 0x108 +
                        *(int *)(param_1 + 0x338) + 0xc0));
        *(undefined4 *)
         ((*(int *)(param_1 + 0x344) * local_10 + *(int *)(param_1 + 0x33c)) * 0x108 +
          *(int *)(param_1 + 0x338) + 0xc0) = 0;
        if (*(int *)((*(int *)(param_1 + 0x344) * local_10 + *(int *)(param_1 + 0x33c)) * 0x108 +
                     *(int *)(param_1 + 0x338) + 0x48) == 0) {
          _gfortran_runtime_error_at
                    ("At line 84 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
                     &DAT_08071fe0);
        }
        free(*(void **)((*(int *)(param_1 + 0x344) * local_10 + *(int *)(param_1 + 0x33c)) * 0x108 +
                        *(int *)(param_1 + 0x338) + 0x48));
        *(undefined4 *)
         ((*(int *)(param_1 + 0x344) * local_10 + *(int *)(param_1 + 0x33c)) * 0x108 +
          *(int *)(param_1 + 0x338) + 0x48) = 0;
        bVar2 = local_10 != iVar1;
        local_10 = local_10 + 1;
      } while (bVar2);
    }
    if (*(int *)(param_1 + 0x338) == 0) {
      _gfortran_runtime_error_at
                ("At line 86 of file hdr_clean.F90","Attempt to DEALLOCATE unallocated \'%s\'",
                 &DAT_08071fe0);
    }
    free(*(void **)(param_1 + 0x338));
    *(undefined4 *)(param_1 + 0x338) = 0;
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

void getwtk(real_kind_8__0_ (*kpt) [4],integer_kind_4_ *nkpt,integer_kind_4_ *nsym,
           integer_kind_4__0_ (*symrel) [4] [4])

{
  int iVar1;
  double dVar2;
  int iVar3;
  size_t sVar4;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  real_kind_8__0_ (*__ptr_03) [4];
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  int in_stack_00000014;
  void *local_230;
  undefined4 local_22c;
  char *local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  real_kind_8__0_ (*local_dc) [4];
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
  real_kind_8__0_ (*kptstar) [4];
  integer_kind_4_ new;
  integer_kind_4_ nkpt_tot;
  integer_kind_4_ ubound_4;
  integer_kind_4__0_ *nstar;
  integer_kind_4_ ubound_6;
  real_kind_8__0_ (*rsymrel) [4] [4];
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
      for (iVar7 = 1; iVar7 < 4; iVar7 = iVar7 + 1) {
        for (iVar8 = 1; iVar8 < 4; iVar8 = iVar8 + 1) {
          *(double *)((int)__ptr_01 + (iVar8 + isym * 9 + -0xd + iVar7 * 3) * 8) =
               (double)*(int *)((int)symrel + (iVar8 + isym * 9 + -0xd + iVar7 * 3) * 4);
        }
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
      _gfortran_transfer_integer(&local_230,&ikpt,4);
      _gfortran_st_write_done(&local_230);
      *(undefined4 *)((int)__ptr_00 + (ikpt + -1) * 4) = 0;
      for (iVar7 = 1; iVar7 <= iVar3; iVar7 = iVar7 + 1) {
        for (iVar8 = 1; iVar8 < 4; iVar8 = iVar8 + 1) {
          *(undefined8 *)((int)__ptr + (iVar8 + iVar7 * 3 + -4) * 8) = 0;
        }
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
          __ptr_02 = (void *)_gfortran_internal_pack(&local_230);
          local_d4 = 0x219;
          local_cc = 1;
          local_c8 = 3;
          local_d0 = 1;
          local_dc = kpt[(ikpt + -1) * 6];
          local_d8 = 0xfffffffc;
          __ptr_03 = (real_kind_8__0_ (*) [4])_gfortran_internal_pack(&local_dc);
          dgemv_(&DAT_08072528,&DAT_08072518,&DAT_08072518,&DAT_08072520,__ptr_02,&DAT_08072518,
                 __ptr_03,&DAT_08072508,&DAT_08072510,local_a4,&DAT_08072508,1);
          if ((local_230 != __ptr_02) &&
             (_gfortran_internal_unpack(&local_230,__ptr_02), __ptr_02 != (void *)0x0)) {
            free(__ptr_02);
          }
          if ((local_dc != __ptr_03) &&
             (_gfortran_internal_unpack(&local_dc,__ptr_03),
             __ptr_03 != (real_kind_8__0_ (*) [4])0x0)) {
            free(__ptr_03);
          }
          itim = 0;
          do {
            for (iVar8 = 1; iVar8 < 4; iVar8 = iVar8 + 1) {
              local_c4[iVar8 + -1] = local_a4[iVar8 + -1] * ((double)itim * -2.0 + 1.0);
            }
            canon9(local_c4,&tmp,&shift);
            local_c4[0] = tmp;
            canon9(local_c4 + 1,&tmp,&shift);
            local_c4[1] = tmp;
            canon9(local_c4 + 2,&tmp,&shift);
            local_c4[2] = tmp;
            bVar9 = true;
            iVar8 = *(int *)((int)__ptr_00 + (ikpt + -1) * 4);
            dkpt[3]._4_4_ = 1;
            if (0 < iVar8) {
              do {
                for (iVar5 = 1; iVar5 < 4; iVar5 = iVar5 + 1) {
                  dkpt[iVar5 + -1] =
                       ABS(local_c4[iVar5 + -1] -
                           *(double *)((int)__ptr + (iVar5 + dkpt[3]._4_4_ * 3 + -4) * 8));
                }
                dVar2 = 0.0;
                for (iVar5 = 1; iVar5 < 4; iVar5 = iVar5 + 1) {
                  dVar2 = dkpt[iVar5 + -1] + dVar2;
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
              for (iVar5 = 1; iVar5 < 4; iVar5 = iVar5 + 1) {
                *(real_kind_8_ *)((int)__ptr + (iVar5 + iVar8 * 3 + -4) * 8) = local_c4[iVar5 + -1];
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
  for (iVar6 = 1; iVar6 <= iVar1; iVar6 = iVar6 + 1) {
    iVar3 = iVar3 + *(int *)((int)__ptr_00 + (iVar6 + -1) * 4);
  }
  iVar1 = *nkpt;
  ikpt = 1;
  if (0 < iVar1) {
    do {
      *(double *)(in_stack_00000014 + (ikpt + -1) * 8) =
           (double)*(int *)((int)__ptr_00 + (ikpt + -1) * 4) / (double)iVar3;
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



void pmat2cart(real_kind_8__0__0__0__0_ (*eigen11) [3],real_kind_8__0__0__0__0_ (*eigen12) [3],
              real_kind_8__0__0__0__0_ (*eigen13) [3],integer_kind_4_ *mband,integer_kind_4_ *nkpt,
              integer_kind_4_ *nsppol,real_kind_8_ (*rprimd) [4] [4])

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
  int in_stack_00000020;
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
    dVar1 = *(double *)(in_stack_00000020 + (ii + -1) * 0x18);
    dVar2 = *(double *)(in_stack_00000020 + (ii + -1) * 0x18);
    dVar3 = *(double *)(in_stack_00000020 + (ii * 3 + -2) * 8);
    dVar4 = *(double *)(in_stack_00000020 + (ii * 3 + -2) * 8);
    dVar5 = *(double *)(in_stack_00000020 + ((ii + 1) * 3 + -4) * 8);
    dVar6 = *(double *)(in_stack_00000020 + ((ii + 1) * 3 + -4) * 8);
    iVar10 = ii * 3;
    iVar11 = ii * 3;
    for (iVar27 = 1; iVar27 < 4; iVar27 = iVar27 + 1) {
      adStack188[iVar27 + iVar11 + -4] =
           *(double *)(in_stack_00000020 + (iVar27 + iVar10 + -4) * 8) /
           SQRT(dVar6 * dVar5 + dVar4 * dVar3 + dVar2 * dVar1);
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
                  dVar1 = *(double *)
                           ((int)eigen11 +
                           (iband2 * 2 + iVar18 * iband1 + 1 + iVar20 * isppol + iVar19 * ikpt +
                           iVar29) * 8);
                  dVar2 = *(double *)
                           ((int)eigen11 +
                           ((iband2 + 1) * 2 + iVar18 * iband1 + iVar20 * isppol + iVar19 * ikpt +
                           iVar29) * 8);
                  dVar3 = *(double *)
                           ((int)eigen12 +
                           (iband2 * 2 + iVar21 * iband1 + 1 + iVar23 * isppol + iVar22 * ikpt +
                           iVar30) * 8);
                  dVar4 = *(double *)
                           ((int)eigen12 +
                           ((iband2 + 1) * 2 + iVar21 * iband1 + iVar23 * isppol + iVar22 * ikpt +
                           iVar30) * 8);
                  dVar5 = *(double *)
                           ((int)eigen13 +
                           (iband2 * 2 + iVar24 * iband1 + 1 + iVar26 * isppol + iVar25 * ikpt +
                           iVar31) * 8);
                  dVar6 = *(double *)
                           ((int)eigen13 +
                           ((iband2 + 1) * 2 + iVar24 * iband1 + iVar26 * isppol + iVar25 * ikpt +
                           iVar31) * 8);
                  for (iVar28 = 1; iVar28 < 4; iVar28 = iVar28 + 1) {
                    dVar7 = adStack188[iVar28 + -1];
                    dVar8 = adStack188[iVar28 + 2];
                    dVar9 = adStack188[iVar28 + 5];
                    iVar13 = (iVar28 * iVar16 +
                             iVar17 * isppol +
                             iVar15 * ikpt +
                             iband1 * uVar14 + (((~uVar14 - iVar15) - iVar16) - iVar17) + iband2) *
                             0x10;
                    *(double *)(iVar13 + (int)rprimd) =
                         (dVar9 * dVar5 - dVar6 * 0.0) +
                         (dVar8 * dVar3 - dVar4 * 0.0) + (dVar7 * dVar1 - dVar2 * 0.0);
                    *(double *)(iVar13 + 8 + (int)rprimd) =
                         dVar5 * 0.0 + dVar9 * dVar6 +
                         dVar3 * 0.0 + dVar8 * dVar4 + dVar1 * 0.0 + dVar7 * dVar2;
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



void hdr_io_wfftype_(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if (((*(int *)(param_4 + 4) == 0) ||
      ((*(int *)(param_4 + 4) == -1 && (*(int *)(param_4 + 0x94) == *(int *)(param_4 + 0x98))))) ||
     ((*(int *)(param_4 + 4) == 1 && (*(int *)(param_4 + 0x94) == *(int *)(param_4 + 0x98))))) {
    hdr_io_int_(param_1,param_2,param_3,param_4);
  }
  return;
}


/*
Unable to decompile 'hdr_io_int_'
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



void rwwf(int param_1,int param_2,int *param_3,int *param_4,int *param_5,integer_kind_4_ *param_6,
         undefined4 param_7,int param_8,int *param_9,integer_kind_4_ *param_10,int *param_11,
         integer_kind_4_ *param_12,int *param_13,int *param_14,undefined4 param_15,int *param_16,
         int *param_17,int *param_18,wffile_type *param_19)

{
  int iVar1;
  bool bVar2;
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
  int local_3f0;
  int local_3ec;
  char *local_3e8;
  undefined4 local_3e4;
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
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  int local_284;
  int local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
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
  timab(&local_264,&DAT_08072f78,local_25c);
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
    _gfortran_transfer_character
              (&local_3f0,
               "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS",1);
    _gfortran_transfer_character
              (&local_3f0,
               " rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS",0xd);
    _gfortran_transfer_character
              (&local_3f0,
               "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS",1);
    _gfortran_transfer_character
              (&local_3f0,"  One should have nband<=mband  However, nband=, and mband=.PERS",0x1e);
    _gfortran_transfer_character
              (&local_3f0,
               "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS",1);
    _gfortran_transfer_character(&local_3f0,"  However, nband=, and mband=.PERS",0x11);
    _gfortran_transfer_integer(&local_3f0,param_11,4);
    _gfortran_transfer_character(&local_3f0,", and mband=.PERS",0xc);
    _gfortran_transfer_integer(&local_3f0,param_9,4);
    _gfortran_transfer_character(&local_3f0,".PERS",1);
    _gfortran_st_write_done(&local_3f0);
    wrtout_(&DAT_08072fec,local_23c,"PERS",500,4);
    leave_new_("PERS",4);
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
    _gfortran_transfer_character
              (&local_3f0,
               "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS",1);
    _gfortran_transfer_character
              (&local_3f0,
               " rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS",0xd);
    _gfortran_transfer_character
              (&local_3f0,
               "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS",1);
    _gfortran_transfer_character
              (&local_3f0,"  The argument formeig should be 0 or 1.  However, formeig=",0x28);
    _gfortran_transfer_character
              (&local_3f0,
               "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS",1);
    _gfortran_transfer_character(&local_3f0,"  However, formeig=",0x13);
    _gfortran_transfer_integer(&local_3f0,param_3,4);
    _gfortran_transfer_character(&local_3f0,".PERS",1);
    _gfortran_st_write_done(&local_3f0);
    wrtout_(&DAT_08072fec,local_23c,"PERS",500,4);
    leave_new_("PERS",4);
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
    _gfortran_transfer_character
              (&local_3f0,
               "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS",1);
    _gfortran_transfer_character
              (&local_3f0,
               " rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS",0xd);
    _gfortran_transfer_character
              (&local_3f0,
               "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS",1);
    _gfortran_transfer_character
              (&local_3f0,
               "  The argument option should be 1, 2, 3, -1 or -2.  However, option=(a,a,a,a,a,a,i4,a,a,i4,a,a,a) rwwf: ERROR -"
               ,0x32);
    _gfortran_transfer_character
              (&local_3f0,
               "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS",1);
    _gfortran_transfer_character
              (&local_3f0,"  However, option=(a,a,a,a,a,a,i4,a,a,i4,a,a,a) rwwf: ERROR -",0x12);
    _gfortran_transfer_integer(&local_3f0,param_16,4);
    _gfortran_transfer_character(&local_3f0,".PERS",1);
    _gfortran_st_write_done(&local_3f0);
    wrtout_(&DAT_08072fec,local_23c,"PERS",500,4);
    leave_new_("PERS",4);
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
      if (local_20 == 1) {
        local_3e8 = "rwwf.F90";
        local_3e4 = 0x110;
        ios = 0;
        local_3d8 = &ios;
        local_3f0 = 0x20;
        local_3ec = local_260;
        _gfortran_st_read(&local_3f0);
        _gfortran_transfer_integer(&local_3f0,&local_244,4);
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
        _gfortran_transfer_character
                  (&local_3f0,
                   "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                   ,1);
        _gfortran_transfer_character(&local_3f0," rwwf: ERROR -",0xe);
        _gfortran_transfer_character
                  (&local_3f0,
                   "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                   ,1);
        _gfortran_transfer_character
                  (&local_3f0,
                   "  Reading option of rwwf. Trying to read  the (npw,nspinor,nband) record of a wf file, unit=  gave iostat="
                   ,0x28);
        _gfortran_transfer_character
                  (&local_3f0,
                   "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                   ,1);
        _gfortran_transfer_character
                  (&local_3f0,
                   "  the (npw,nband) record of a wf file, unit=  Reading option of rwwf. One should have npw=npw1  However, npw=, and npw1=  Reading option of rwwf. One should have nspinor=nspinor1  However, nspinor=, and nspinor1=  Reading option of rwwf. One should have npwso=npwso1  However, npwso=, and npwso1=  the k+g record of a wf file, unit=  an eigenvalue record of a wf file, unit="
                   ,0x2c);
        _gfortran_transfer_integer(&local_3f0,&local_260,4);
        _gfortran_transfer_character
                  (&local_3f0,
                   "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                   ,1);
        _gfortran_transfer_character(&local_3f0,"  gave iostat=",0xe);
        _gfortran_transfer_integer(&local_3f0,&ios,4);
        _gfortran_transfer_character(&local_3f0,". Your file is likely not correct.",0x22);
        _gfortran_transfer_character
                  (&local_3f0,
                   "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                   ,1);
        _gfortran_transfer_character(&local_3f0,"  Action: check your input wf file.",0x23);
        _gfortran_st_write_done(&local_3f0);
        wrtout_(&DAT_08072fec,local_23c,"PERS",500,4);
        leave_new_("PERS",4);
      }
    }
    else {
      wffreadnpwrec(&ios,param_6,param_12,&local_240,&local_24c,param_19);
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
        _gfortran_transfer_character
                  (&local_3f0,
                   "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                   ,1);
        _gfortran_transfer_character(&local_3f0," rwwf: ERROR -",0xe);
        _gfortran_transfer_character
                  (&local_3f0,
                   "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                   ,1);
        _gfortran_transfer_character
                  (&local_3f0,
                   "  Reading option of rwwf. Trying to read  the (npw,nspinor,nband) record of a wf file, unit=  gave iostat="
                   ,0x28);
        _gfortran_transfer_character
                  (&local_3f0,
                   "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                   ,1);
        _gfortran_transfer_character
                  (&local_3f0,"  the (npw,nspinor,nband) record of a wf file, unit=  gave iostat=",
                   0x34);
        _gfortran_transfer_integer(&local_3f0,&local_260,4);
        _gfortran_transfer_character
                  (&local_3f0,
                   "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                   ,1);
        _gfortran_transfer_character(&local_3f0,"  gave iostat=",0xe);
        _gfortran_transfer_integer(&local_3f0,&ios,4);
        _gfortran_transfer_character(&local_3f0,". Your file is likely not correct.",0x22);
        _gfortran_transfer_character
                  (&local_3f0,
                   "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                   ,1);
        _gfortran_transfer_character(&local_3f0,"  Action: check your input wf file.",0x23);
        _gfortran_st_write_done(&local_3f0);
        wrtout_(&DAT_08072fec,local_23c,"PERS",500,4);
        leave_new_("PERS",4);
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
          _gfortran_transfer_character
                    (&local_3f0,
                     "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                     ,1);
          _gfortran_transfer_character
                    (&local_3f0,
                     " rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                     ,0xd);
          _gfortran_transfer_character
                    (&local_3f0,
                     "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                     ,1);
          _gfortran_transfer_character
                    (&local_3f0,
                     "  Reading option of rwwf. One should have npwso=npwso1  However, npwso=, and npwso1=  the k+g record of a wf file, unit=  an eigenvalue record of a wf file, unit="
                     ,0x36);
          _gfortran_transfer_character
                    (&local_3f0,
                     "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                     ,1);
          _gfortran_transfer_character
                    (&local_3f0,
                     "  However, npwso=, and npwso1=  the k+g record of a wf file, unit=  an eigenvalue record of a wf file, unit="
                     ,0x11);
          local_268 = *param_14 * *param_13;
          _gfortran_transfer_integer(&local_3f0,&local_268,4);
          _gfortran_transfer_character
                    (&local_3f0,
                     ", and npwso1=  the k+g record of a wf file, unit=  an eigenvalue record of a wf file, unit="
                     ,0xd);
          _gfortran_transfer_integer(&local_3f0,&local_244,4);
          _gfortran_transfer_character(&local_3f0,".PERS",1);
          _gfortran_st_write_done(&local_3f0);
          wrtout_(&DAT_08072fec,local_23c,"PERS",500,4);
          leave_new_("PERS",4);
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
          _gfortran_transfer_character
                    (&local_3f0,
                     "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                     ,1);
          _gfortran_transfer_character
                    (&local_3f0,
                     " rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                     ,0xd);
          _gfortran_transfer_character
                    (&local_3f0,
                     "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                     ,1);
          _gfortran_transfer_character
                    (&local_3f0,
                     "  Reading option of rwwf. One should have npw=npw1  However, npw=, and npw1=  Reading option of rwwf. One should have nspinor=nspinor1  However, nspinor=, and nspinor1=  Reading option of rwwf. One should have npwso=npwso1  However, npwso=, and npwso1=  the k+g record of a wf file, unit=  an eigenvalue record of a wf file, unit="
                     ,0x32);
          _gfortran_transfer_character
                    (&local_3f0,
                     "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                     ,1);
          _gfortran_transfer_character
                    (&local_3f0,
                     "  However, npw=, and npw1=  Reading option of rwwf. One should have nspinor=nspinor1  However, nspinor=, and nspinor1=  Reading option of rwwf. One should have npwso=npwso1  However, npwso=, and npwso1=  the k+g record of a wf file, unit=  an eigenvalue record of a wf file, unit="
                     ,0xf);
          _gfortran_transfer_integer(&local_3f0,param_13,4);
          _gfortran_transfer_character
                    (&local_3f0,
                     ", and npw1=  Reading option of rwwf. One should have nspinor=nspinor1  However, nspinor=, and nspinor1=  Reading option of rwwf. One should have npwso=npwso1  However, npwso=, and npwso1=  the k+g record of a wf file, unit=  an eigenvalue record of a wf file, unit="
                     ,0xb);
          _gfortran_transfer_integer(&local_3f0,&local_240,4);
          _gfortran_transfer_character(&local_3f0,".PERS",1);
          _gfortran_st_write_done(&local_3f0);
          wrtout_(&DAT_08072fec,local_23c,"PERS",500,4);
          leave_new_("PERS",4);
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
          _gfortran_transfer_character
                    (&local_3f0,
                     "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                     ,1);
          _gfortran_transfer_character
                    (&local_3f0,
                     " rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                     ,0xd);
          _gfortran_transfer_character
                    (&local_3f0,
                     "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                     ,1);
          _gfortran_transfer_character
                    (&local_3f0,
                     "  Reading option of rwwf. One should have nspinor=nspinor1  However, nspinor=, and nspinor1=  Reading option of rwwf. One should have npwso=npwso1  However, npwso=, and npwso1=  the k+g record of a wf file, unit=  an eigenvalue record of a wf file, unit="
                     ,0x3a);
          _gfortran_transfer_character
                    (&local_3f0,
                     "\n rwwf : BUG -  One should have nband<=mband  However, nband=, and mband=.PERS"
                     ,1);
          _gfortran_transfer_character
                    (&local_3f0,
                     "  However, nspinor=, and nspinor1=  Reading option of rwwf. One should have npwso=npwso1  However, npwso=, and npwso1=  the k+g record of a wf file, unit=  an eigenvalue record of a wf file, unit="
                     ,0x13);
          _gfortran_transfer_integer(&local_3f0,param_14,4);
          _gfortran_transfer_character
                    (&local_3f0,
                     ", and nspinor1=  Reading option of rwwf. One should have npwso=npwso1  However, npwso=, and npwso1=  the k+g record of a wf file, unit=  an eigenvalue record of a wf file, unit="
                     ,0xf);
          _gfortran_transfer_integer(&local_3f0,&local_24c,4);
          _gfortran_transfer_character(&local_3f0,".PERS",1);
          _gfortran_st_write_done(&local_3f0);
          wrtout_(&DAT_08072fec,local_23c,"PERS",500,4);
          leave_new_("PERS",4);
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
          local_3e8 = (char *)0x10a;
          local_3e0 = 1;
          local_3dc = 3;
          local_3e4 = 1;
          local_3d4 = 1;
          local_3d8 = (integer_kind_4_ *)0x3;
          local_3f0 = param_8;
          local_3ec = -4;
          _gfortran_transfer_array(&local_544,&local_3f0,4,0);
          _gfortran_st_read_done(&local_544);
        }
      }
      else {
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
        wrtout_(&DAT_08072fec,local_23c,"PERS",500,4);
        leave_new_("PERS",4);
      }
    }
    local_2c = *param_11;
    if (*param_12 < *param_11) {
      local_2c = *param_12;
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
          local_278 = 0x219;
          local_270 = 1;
          local_26c = local_2c;
          local_274 = 1;
          local_280 = param_2;
          local_27c = 0xffffffff;
          _gfortran_transfer_array(&local_544,&local_280,8,0);
          _gfortran_st_read_done(&local_544);
        }
      }
      else {
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
        wrtout_(&DAT_08072fec,local_23c,"PERS",500,4);
        leave_new_("PERS",4);
      }
    }
    indxx = 0;
    iVar1 = *param_11;
    if (*param_12 < *param_11) {
      iVar1 = *param_12;
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
              _gfortran_st_read(&local_544);
              local_290 = 0x219;
              local_288 = 1;
              local_284 = (1 - (indxx + 1)) + local_2c * 2 + indxx;
              local_28c = 1;
              local_298 = indxx * 8 + param_2;
              local_294 = -(indxx + 1);
              _gfortran_transfer_array(&local_544,&local_298,8,0);
              _gfortran_st_read_done(&local_544);
            }
            indxx = indxx + local_2c * 2;
          }
          else {
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
            wrtout_(&DAT_08072fec,local_23c,"PERS",500,4);
            leave_new_("PERS",4);
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
            _gfortran_st_read(&local_544);
            local_3e8 = (char *)0x21a;
            local_3e0 = 1;
            local_3dc = 2;
            local_3e4 = 1;
            local_3d4 = 1;
            local_3d0 = (1 - (ipw + 1)) + local_244 + ipw;
            local_3d8 = (integer_kind_4_ *)0x2;
            local_3f0 = ipw * 0x10 + param_1;
            local_3ec = (1 - (ipw + 1)) * 2 + -3;
            _gfortran_transfer_array(&local_544,&local_3f0,8,0);
            _gfortran_st_read_done(&local_544);
          }
        }
        else if (*param_16 != -4) {
          wffreadskiprec(&ios,(integer_kind_4_ *)&DAT_08072f78,param_19);
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
          wrtout_(&DAT_08072fec,local_23c,"PERS",500,4);
          leave_new_("PERS",4);
        }
        bVar2 = iband != iVar1;
        iband = iband + 1;
      } while (bVar2);
    }
    if ((*param_11 < *param_12) || (*param_16 == -1)) {
      local_248 = (*param_12 - *param_11) * (*param_3 + 1);
      if (*param_16 == -1) {
        local_248 = *param_12 * (*param_3 + 1);
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
  bool bVar2;
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
    wrtout_(&DAT_08072fec,local_244,"PERS",500,4);
    leave_new_("PERS",4);
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
    wrtout_(&DAT_08072fec,local_244,"PERS",500,4);
    leave_new_("PERS",4);
  }
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
  else if (local_20 == 1) {
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
    _gfortran_transfer_array(&local_504,&local_3b0,4,0);
    _gfortran_st_write_done(&local_504);
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
          _gfortran_transfer_real(&local_504,(iband + -1) * 8 + param_2,8);
          bVar2 = iband != iVar1;
          iband = iband + 1;
        } while (bVar2);
      }
      iVar1 = *param_12;
      iband = 1;
      if (0 < iVar1) {
        do {
          _gfortran_transfer_real(&local_504,(iband + -1) * 8 + param_15,8);
          bVar2 = iband != iVar1;
          iband = iband + 1;
        } while (bVar2);
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
            _gfortran_st_write(&local_504);
            local_3a8 = (char *)0x21a;
            local_3a0 = 1;
            local_39c = 2;
            local_3a4 = 1;
            local_394 = 1;
            local_390 = (1 - (ipw + 1)) + ipw + local_2c;
            local_398 = 2;
            local_3b0 = ipw * 0x10 + param_1;
            local_3ac = (1 - (ipw + 1)) * 2 + -3;
            _gfortran_transfer_array(&local_504,&local_3b0,8,0);
            _gfortran_st_write_done(&local_504);
          }
          bVar2 = iband != iVar1;
          iband = iband + 1;
        } while (bVar2);
      }
    }
  }
  else if (*param_3 == 1) {
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
          _gfortran_st_write(&local_504);
          local_254 = 0x219;
          local_24c = 1;
          local_248 = (1 - (ii + 1)) + local_34 + ii;
          local_250 = 1;
          local_25c = ii * 8 + param_2;
          local_258 = -(ii + 1);
          _gfortran_transfer_array(&local_504,&local_25c,8,0);
          _gfortran_st_write_done(&local_504);
          if (*param_16 != 4) {
            local_4fc = "rwwf.F90";
            local_4f8 = 0x390;
            local_504 = 0;
            local_500 = local_24;
            _gfortran_st_write(&local_504);
            local_3a8 = (char *)0x21a;
            local_3a0 = 1;
            local_39c = 2;
            local_3a4 = 1;
            local_394 = 1;
            local_390 = (1 - (ipw + 1)) + local_2c + ipw;
            local_398 = 2;
            local_3b0 = ipw * 0x10 + param_1;
            local_3ac = (1 - (ipw + 1)) * 2 + -3;
            _gfortran_transfer_array(&local_504,&local_3b0,8,0);
            _gfortran_st_write_done(&local_504);
          }
        }
        bVar2 = iband != iVar1;
        iband = iband + 1;
      } while (bVar2);
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
  else if ((wff->accesswff == -1) && (wff->master == wff->me)) {
    local_28 = "wffclose.F90";
    local_24 = 0x5a;
    local_30 = 0;
    local_2c = wff->unwff;
    _gfortran_st_close(&local_30);
  }
  return;
}



void wffopen_(int *param_1,undefined4 *param_2,void *param_3,undefined4 *param_4,undefined4 *param_5
             ,int *param_6,int *param_7,undefined4 *param_8)

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
  else if (*param_1 == -1) {
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
    wrtout_(&DAT_080734c4,local_200,"COLL",500,4);
    leave_new_("COLL",4);
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
    mvrecord(ierr,nrec,&wff->unwff);
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
  real_kind_8_ (*paarVar7) [4] [4];
  char *pcVar8;
  undefined *puVar9;
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
  
  *param_6 = ((*param_5)[1][3] * (*param_5)[3] - (*param_5)[1][2] * (*param_5)[1][0]) *
             (*param_5)[2] +
             ((*param_5)[1][2] * (*param_5)[1][1] - (*param_5)[2][0] * (*param_5)[3]) *
             (*param_5)[1] +
             ((*param_5)[2][0] * (*param_5)[1][0] - (*param_5)[1][3] * (*param_5)[1][1]) *
             (*param_5)[0];
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
    wrtout_(&DAT_080735d0,local_220,"COLL",500,4);
    leave_new_();
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
    wrtout_(&DAT_080735d0,local_220,"COLL",500,4);
    leave_new_();
  }
  paarVar7 = param_2;
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
    _gfortran_st_write(&local_3f0,paarVar7);
    _gfortran_transfer_character
              (&local_3f0,
               " Real(R)+Recip(G) space primitive vectors, cartesian coordinates (Bohr,Bohr^-1):",
               0x12);
    pcVar8 = "space primitive vectors, cartesian coordinates (Bohr,Bohr^-1):";
    _gfortran_transfer_character
              (&local_3f0,"space primitive vectors, cartesian coordinates (Bohr,Bohr^-1):",0x3e);
    _gfortran_st_write_done(&local_3f0,pcVar8);
    puVar9 = local_220;
    wrtout_(param_3,puVar9,"COLL",500,4);
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
      _gfortran_st_write(&local_3f0,puVar9);
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
      for (iVar3 = 1; iVar3 < 4; iVar3 = iVar3 + 1) {
        local_274 = param_5[-1][3][iVar2 * 3 + iVar3] + 1e-10;
        _gfortran_transfer_real(&local_3f0,&local_274,8);
      }
      _gfortran_transfer_character
                (&local_3f0,
                 "G((a,1p,e15.7,a) Unit cell volume ucvol= bohr^3(a,3es16.8,a) Angles (23,13,12)= degrees"
                 ,2);
      _gfortran_transfer_integer(&local_3f0,&local_224,4);
      _gfortran_transfer_character
                (&local_3f0,
                 ")=G((a,1p,e15.7,a) Unit cell volume ucvol= bohr^3(a,3es16.8,a) Angles (23,13,12)= degrees"
                 ,2);
      iVar2 = local_224;
      for (iVar3 = 1; iVar3 < 4; iVar3 = iVar3 + 1) {
        local_27c = param_2[-1][3][iVar2 * 3 + iVar3] + 1e-10;
        _gfortran_transfer_real(&local_3f0,&local_27c,8);
      }
      _gfortran_st_write_done();
      puVar9 = local_220;
      wrtout_(param_3,puVar9,"COLL",500,4);
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
    _gfortran_st_write(&local_3f0,puVar9);
    _gfortran_transfer_character
              (&local_3f0," Unit cell volume ucvol= bohr^3(a,3es16.8,a) Angles (23,13,12)= degrees",
               0x18);
    local_284 = *param_6 + 1e-10;
    _gfortran_transfer_real(&local_3f0,&local_284,8);
    pcVar8 = " bohr^3(a,3es16.8,a) Angles (23,13,12)= degrees";
    _gfortran_transfer_character(&local_3f0," bohr^3(a,3es16.8,a) Angles (23,13,12)= degrees",7);
    _gfortran_st_write_done(&local_3f0,pcVar8);
    wrtout_(param_3,local_220,"COLL",500,4);
    wrtout_(&DAT_080735d0,local_220,"COLL",500,4);
  }
  angle[3]._4_4_ = 1;
  do {
    dVar5 = param_5[-1][3][angle[3]._4_4_ * 3 + 1];
    dVar6 = param_5[-1][3][angle[3]._4_4_ * 3 + 2];
    dVar1 = param_5[-1][3][angle[3]._4_4_ * 3 + 3];
    for (iVar2 = 1; iVar2 < 4; iVar2 = iVar2 + 1) {
      param_4[iVar2 * 3 + angle[3]._4_4_ + -4] =
           param_5[-1][3][iVar2 * 3 + 3] * dVar1 +
           param_5[-1][3][iVar2 * 3 + 2] * dVar6 + param_5[-1][3][iVar2 * 3 + 1] * dVar5;
    }
    bVar4 = angle[3]._4_4_ != 3;
    angle[3]._4_4_ = angle[3]._4_4_ + 1;
  } while (bVar4);
  angle[3]._4_4_ = 1;
  do {
    dVar5 = param_2[-1][3][angle[3]._4_4_ * 3 + 1];
    dVar6 = param_2[-1][3][angle[3]._4_4_ * 3 + 2];
    dVar1 = param_2[-1][3][angle[3]._4_4_ * 3 + 3];
    for (iVar2 = 1; iVar2 < 4; iVar2 = iVar2 + 1) {
      *(double *)(param_1 + (iVar2 * 3 + angle[3]._4_4_ + -4) * 8) =
           param_2[-1][3][iVar2 * 3 + 3] * dVar1 +
           param_2[-1][3][iVar2 * 3 + 2] * dVar6 + param_2[-1][3][iVar2 * 3 + 1] * dVar5;
    }
    bVar4 = angle[3]._4_4_ != 3;
    angle[3]._4_4_ = angle[3]._4_4_ + 1;
  } while (bVar4);
  if (-1 < *param_3) {
    dVar5 = acos(param_4[7] / SQRT(param_4[8] * param_4[4]));
    angle[0] = (dVar5 / 6.283185307179586) * 360.0;
    dVar5 = acos(param_4[6] / SQRT(param_4[8] * *param_4));
    angle[1] = (dVar5 / 6.283185307179586) * 360.0;
    dVar5 = param_4[3] / SQRT(param_4[4] * *param_4);
    dVar6 = acos(dVar5);
    angle[2] = (dVar6 / 6.283185307179586) * 360.0;
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
    pcVar8 = " degrees";
    _gfortran_transfer_character(&local_3f0," degrees",8);
    _gfortran_st_write_done(&local_3f0,pcVar8);
    wrtout_(param_3,local_220,"COLL",500,4);
    wrtout_(&DAT_080735d0,local_220,"COLL",500,4);
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
      for (iVar3 = 1; iVar3 < 4; iVar3 = iVar3 + 1) {
        for (iVar2 = 1; iVar2 < 4; iVar2 = iVar2 + 1) {
          local_74[iVar2 + iVar3 * 3 + -4] =
               (double)*(int *)(param_4 + (iVar2 + iVar3 * 3 + isym * 9 + -0xd) * 4);
        }
      }
      dgemm_(&DAT_08073838,&DAT_08073838,&DAT_08073820,&DAT_08073820,&DAT_08073820,&DAT_08073830,
             param_3,&DAT_08073820,local_74,&DAT_08073820,&DAT_08073828,local_104,&DAT_08073820,1,1)
      ;
      dgemm_(&DAT_08073838,&DAT_08073838,&DAT_08073820,&DAT_08073820,&DAT_08073820,&DAT_08073830,
             local_104,&DAT_08073820,param_1,&DAT_08073820,&DAT_08073828,local_bc,&DAT_08073820,1,1)
      ;
      for (iVar3 = 1; iVar3 < 4; iVar3 = iVar3 + 1) {
        for (iVar2 = 1; iVar2 < 4; iVar2 = iVar2 + 1) {
          *(undefined8 *)(param_5 + (iVar2 + iVar3 * 3 + isym * 9 + -0xd) * 8) =
               local_bc[iVar2 + iVar3 * 3 + -4];
        }
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
  
  if (*num <= 0.0) {
    dVar1 = -((*num - 0.5) - 1e-12);
    do {
      dVar1 = dVar1 - (dVar1 / 1.0) * 1.0;
    } while ((in_FPUStatusWord & 0x400) != 0);
    *red = (0.5 - dVar1) + 1e-12;
  }
  else {
    dVar1 = (*num + 0.5) - 1e-12;
    do {
      dVar1 = dVar1 - (dVar1 / 1.0) * 1.0;
    } while ((in_FPUStatusWord & 0x400) != 0);
    *red = (dVar1 - 0.5) + 1e-12;
  }
  if (ABS(*red) < 1e-12) {
    *red = 0.0;
  }
  *shift = *num - *red;
  return;
}



void int2char4_(int *param_1,undefined4 param_2)

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
    wrtout_(&DAT_080738cc,local_200,"COLL",500,4);
    leave_new_("COLL",4);
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
  else if (*param_1 < 100) {
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
  else if (*param_1 < 1000) {
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
    wrtout_(&DAT_08073960,local_214,"COLL",500,4);
    leave_new_("COLL",4);
  }
  else {
    for (iVar1 = 1; iVar1 < 4; iVar1 = iVar1 + 1) {
      for (iVar2 = 1; iVar2 < 4; iVar2 = iVar2 + 1) {
        *(int *)(param_2 + (iVar2 + iVar1 * 3 + -4) * 4) = local_238[iVar2 + iVar1 * 3 + -4] / dd;
      }
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
  
  dVar1 = (*aa)[2][0] * (*aa)[1][0] - (*aa)[1][3] * (*aa)[1][1];
  dVar2 = (*aa)[1][2] * (*aa)[1][1] - (*aa)[2][0] * (*aa)[3];
  dVar3 = (*aa)[1][3] * (*aa)[3] - (*aa)[1][2] * (*aa)[1][0];
  dVar4 = 1.0 / ((*aa)[2] * dVar3 + (*aa)[1] * dVar2 + (*aa)[0] * dVar1);
  (*ait)[0] = dVar1 * dVar4;
  (*ait)[1] = dVar2 * dVar4;
  (*ait)[2] = dVar3 * dVar4;
  (*ait)[3] = ((*aa)[1][3] * (*aa)[2] - (*aa)[2][0] * (*aa)[1]) * dVar4;
  (*ait)[1][0] = ((*aa)[2][0] * (*aa)[0] - (*aa)[1][2] * (*aa)[2]) * dVar4;
  (*ait)[1][1] = ((*aa)[1][2] * (*aa)[1] - (*aa)[1][3] * (*aa)[0]) * dVar4;
  (*ait)[1][2] = ((*aa)[1][1] * (*aa)[1] - (*aa)[1][0] * (*aa)[2]) * dVar4;
  (*ait)[1][3] = ((*aa)[3] * (*aa)[2] - (*aa)[1][1] * (*aa)[0]) * dVar4;
  (*ait)[2][0] = ((*aa)[1][0] * (*aa)[0] - (*aa)[3] * (*aa)[1]) * dVar4;
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

void print_ij(int param_1,int *param_2,uint *param_3,int *param_4,int *param_5,int param_6,
             int *param_7,int param_8,double *param_9,int *param_10)

{
  int iVar1;
  size_t sVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
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
  void *local_5c;
  int local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  integer_kind_4_ ubound_0;
  uint local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  
  local_24 = *param_5 + 1;
  if (1 < local_24) {
    local_24 = 1;
  }
  local_24 = *param_3 * local_24;
  ubound_0 = *param_2;
  local_20 = *param_7 * *param_2;
  local_5c = (void *)0x0;
  local_278 = (void *)0x0;
  local_28 = *param_3;
  if (0xc < (int)local_28) {
    local_28 = 0xc;
  }
  if (-1 < *param_5) {
    local_28 = 0;
    for (iVar1 = 1; iVar1 <= local_24; iVar1 = iVar1 + 1) {
      if (*(int *)(param_6 + (iVar1 + -1) * 4) == *param_5) {
        local_28 = local_28 + 1;
      }
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
  uVar4 = 0;
  if (-1 < (int)local_28) {
    uVar4 = local_28;
  }
  local_274 = ~local_260;
  if ((int)local_28 < 1) {
    sVar2 = 0;
  }
  else {
    sVar2 = uVar4 * local_260 * 8;
  }
  if ((int)sVar2 < 0) {
    sVar2 = _gfortran_runtime_error
                      ("Attempt to allocate negative amount of memory. Possible integer overflow");
  }
  if ((int)sVar2 < 1) {
    sVar2 = 1;
  }
  pvVar3 = malloc(sVar2);
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)_gfortran_os_error("Out of memory");
  }
  local_48 = (int)((*param_3 + 1) * *param_3) / 2;
  if ((int)((*param_3 + 1) * *param_3) < 2) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)((*param_3 + 1) * *param_3) / 2;
  }
  local_4c = 1;
  local_50 = 1;
  local_54 = 0x219;
  if ((int)((*param_3 + 1) * *param_3) < 2) {
    sVar2 = 0;
  }
  else {
    sVar2 = iVar1 * 8;
  }
  local_278 = pvVar3;
  if (local_5c == (void *)0x0) {
    if ((int)sVar2 < 0) {
      sVar2 = _gfortran_runtime_error
                        ("Attempt to allocate negative amount of memory. Possible integer overflow")
      ;
    }
    if ((int)sVar2 < 1) {
      sVar2 = 1;
    }
    pvVar3 = malloc(sVar2);
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)_gfortran_os_error("Out of memory");
    }
    local_58 = -1;
    iVar1 = local_4c;
    local_5c = pvVar3;
    if (*param_7 != 0) {
      for (; iVar1 <= local_48; iVar1 = iVar1 + 1) {
        *(undefined8 *)((int)pvVar3 + (iVar1 * local_50 + -1) * 8) = 0;
      }
      iVar1 = *param_2;
      local_2c = 1;
      if (0 < iVar1) {
        do {
          *(undefined8 *)
           ((int)pvVar3 + (*(int *)(param_8 + (local_2c + -1) * 4) * local_50 + -1) * 8) =
               *(undefined8 *)(param_1 + (local_2c + -1) * 8);
          bVar6 = local_2c != iVar1;
          local_2c = local_2c + 1;
        } while (bVar6);
      }
      goto LAB_0806d6ed;
    }
  }
  else {
    _gfortran_runtime_error_at
              ("At line 95 of file print_ij.F90",
               "Attempting to allocate already allocated array \'%s\'",&DAT_08073a2c);
  }
  for (iVar1 = 1; iVar1 <= ubound_0; iVar1 = iVar1 + 1) {
    *(undefined8 *)((int)local_5c + ((iVar1 + local_4c + -1) * local_50 + local_58) * 8) =
         *(undefined8 *)(param_1 + (iVar1 + -1) * 8);
  }
LAB_0806d6ed:
  local_30 = 0;
  uVar4 = *param_3;
  local_34 = 1;
  if (0 < (int)uVar4) {
    do {
      if (*param_5 < 0) {
        local_30 = local_34;
        if ((int)local_34 <= (int)local_28) {
LAB_0806d746:
          local_3c = 0;
          local_38 = (int)((local_34 - 1) * local_34) / 2;
          local_40 = 1;
          if (0 < (int)local_34) {
            do {
              if (*param_5 < 0) {
                local_3c = local_40;
LAB_0806d7b4:
                local_2c = local_38 + local_40;
                *(undefined8 *)
                 ((int)local_278 + (local_26c * local_30 + local_260 * local_3c + local_274) * 8) =
                     *(undefined8 *)((int)local_5c + (local_50 * local_2c + local_58) * 8);
                *(undefined8 *)
                 ((int)local_278 + (local_26c * local_3c + local_260 * local_30 + local_274) * 8) =
                     *(undefined8 *)
                      ((int)local_278 +
                      (local_26c * local_30 + local_260 * local_3c + local_274) * 8);
              }
              else if (*(int *)(param_6 + (local_40 - 1) * 4) == *param_5) {
                local_3c = local_3c + 1;
                goto LAB_0806d7b4;
              }
              bVar6 = local_40 != local_34;
              local_40 = local_40 + 1;
            } while (bVar6);
          }
        }
      }
      else if (*(int *)(param_6 + (local_34 - 1) * 4) == *param_5) {
        local_30 = local_30 + 1;
        goto LAB_0806d746;
      }
      bVar6 = local_34 != uVar4;
      local_34 = local_34 + 1;
    } while (bVar6);
  }
  if (local_5c == (void *)0x0) {
    _gfortran_runtime_error_at
              ("At line 129 of file print_ij.F90","Attempt to DEALLOCATE unallocated \'%s\'",
               &DAT_08073a2c);
  }
  free(local_5c);
  uVar4 = local_28;
  local_5c = (void *)0x0;
  iVar1 = local_25c;
  if (*param_10 == 2) {
    for (; iVar1 <= (int)local_258; iVar1 = iVar1 + 1) {
      for (iVar5 = local_268; iVar5 <= (int)local_264; iVar5 = iVar5 + 1) {
        *(double *)((int)local_278 + (iVar5 * local_26c + local_260 * iVar1 + local_274) * 8) =
             *(double *)((int)local_278 + (local_26c * iVar5 + local_260 * iVar1 + local_274) * 8) *
             27.2113845;
      }
    }
  }
  if (((int)*param_3 < 0xd) || (-1 < *param_5)) {
    local_40 = 1;
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
                            (local_26c * (local_40 - local_268) + local_260 * (1 - local_25c)) * 8);
        local_298 = 0;
        _gfortran_transfer_array(&local_408,&local_29c,8,0);
        _gfortran_st_write_done(&local_408);
        wrtout_(&DAT_08073abc,local_250,&DAT_08073ab8,500,4);
        if (*param_4 == 2) {
          wrtout_(&DAT_08073ac0,local_250,&DAT_08073ab8,500,4);
        }
        bVar6 = local_40 != uVar4;
        local_40 = local_40 + 1;
      } while (bVar6);
    }
  }
  else {
    local_40 = 1;
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
                            (local_26c * (local_40 - local_268) + local_260 * (1 - local_25c)) * 8);
        local_2b0 = 0;
        _gfortran_transfer_array(&local_408,&local_2b4,8,0);
        _gfortran_transfer_character(&local_408,&DAT_08073ad3,4);
        _gfortran_st_write_done(&local_408);
        wrtout_(&DAT_08073abc,local_250,&DAT_08073ab8,500,4);
        if (*param_4 == 2) {
          wrtout_(&DAT_08073ac0,local_250,&DAT_08073ab8,500,4);
        }
        bVar6 = local_40 != uVar4;
        local_40 = local_40 + 1;
      } while (bVar6);
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
    wrtout_(&DAT_08073abc,local_250,&DAT_08073ab8,500,4);
    if (*param_4 == 2) {
      wrtout_(&DAT_08073ac0,local_250,&DAT_08073ab8,500,4);
    }
  }
  if (0.0 < *param_9) {
    local_284 = *param_9;
    if (*param_10 == 2) {
      local_284 = local_284 * 27.2113845;
    }
    local_254 = 0;
    for (iVar1 = local_25c; iVar1 <= (int)local_258; iVar1 = iVar1 + 1) {
      for (iVar5 = local_268; iVar5 <= (int)local_264; iVar5 = iVar5 + 1) {
        if (local_284 <=
            ABS(*(double *)
                 ((int)local_278 + (local_26c * iVar5 + local_260 * iVar1 + local_274) * 8))) {
          local_254 = local_254 + 1;
        }
      }
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
      wrtout_(&DAT_08073abc,local_250,&DAT_08073ab8,500,4);
      if (*param_4 == 2) {
        wrtout_(&DAT_08073ac0,local_250,&DAT_08073ab8,500,4);
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
  if (local_5c != (void *)0x0) {
    free(local_5c);
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



void leave_new_(void)

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
  wrtout_(&DAT_08074180,local_200,"PERS",500,4);
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
      wrtout_(&DAT_080741d4,local_208,"PERS",500,4);
      leave_new_("PERS",4);
    }
    if (*param_2 == 0) {
      memset(__defs_time_MOD_acctim,0,0x2570);
      memset(__defs_time_MOD_tzero,0,0x2570);
      puVar2 = (undefined4 *)__defs_time_MOD_ncount;
      for (iVar1 = 599; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
      }
    }
    else if (*param_2 == 1) {
      timein(&cpu,&local_214);
      *(real_kind_8_ *)(__defs_time_MOD_tzero + (*param_1 + -1) * 0x10) = cpu;
      *(double *)(__defs_time_MOD_tzero + ((*param_1 + 1) * 2 + -3) * 8) = local_214;
    }
    else if (*param_2 == 2) {
      timein(&cpu,&local_214);
      *(double *)(__defs_time_MOD_acctim + (*param_1 + -1) * 0x10) =
           (cpu + *(double *)(__defs_time_MOD_acctim + (*param_1 + -1) * 0x10)) -
           *(double *)(__defs_time_MOD_tzero + (*param_1 + -1) * 0x10);
      *(double *)(__defs_time_MOD_acctim + ((*param_1 + 1) * 2 + -3) * 8) =
           (local_214 + *(double *)(__defs_time_MOD_acctim + ((*param_1 + 1) * 2 + -3) * 8)) -
           *(double *)(__defs_time_MOD_tzero + ((*param_1 + 1) * 2 + -3) * 8);
      *(int *)(__defs_time_MOD_ncount + (*param_1 + -1) * 4) =
           *(int *)(__defs_time_MOD_ncount + (*param_1 + -1) * 4) + 1;
    }
    else if (*param_2 == 3) {
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
                 " option 3 not valid (use time_accu).(a,a,a,a,i10,a)  Input option not valid, =",
                 0x24);
      _gfortran_st_write_done(&local_368);
      wrtout_(&DAT_080741d4,local_208,"PERS",500,4);
      leave_new_("PERS",4);
    }
    else if (*param_2 == 4) {
      timein(&cpu,&local_214);
      *param_3 = cpu - *(double *)(__defs_time_MOD_tzero + (*param_1 + -1) * 0x10);
      param_3[1] = local_214 - *(double *)(__defs_time_MOD_tzero + ((*param_1 + 1) * 2 + -3) * 8);
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
      wrtout_(&DAT_080741d4,local_208,"PERS",500,4);
      leave_new_("PERS",4);
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
      wrtout_(&DAT_08074288,local_21a,"COLL",500,4);
      leave_new_("COLL",4);
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



void wrtout_(int *param_1,void *param_2)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  void *__src;
  int iVar4;
  int iVar5;
  size_t sVar6;
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
  int local_28;
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
    local_28 = 500;
    local_24 = _gfortran_string_index(500,local_21c,1,&DAT_080742b9,0);
    while (local_24 != 0) {
      sVar3 = 0;
      if (-1 < (int)(local_24 - 1U)) {
        sVar3 = local_24 - 1U;
      }
      if ((int)sVar3 < 500) {
        memmove(local_410,local_21c,sVar3);
        memset(local_410 + sVar3,0x20,500 - sVar3);
      }
      else {
        memmove(local_410,local_21c,500);
      }
      local_664 = "wrtout.F90";
      local_660 = 0x9e;
      local_63c = "(a)BUG";
      local_638 = 3;
      local_66c = 0x1000;
      local_668 = *param_1;
      _gfortran_st_write(&local_66c);
      _gfortran_string_trim(&local_41c,&local_420,500,local_410);
      _gfortran_transfer_character(&local_66c,local_420,local_41c);
      if ((0 < local_41c) && (local_420 != (void *)0x0)) {
        free(local_420);
      }
      _gfortran_st_write_done(&local_66c);
      sVar6 = (1 - (local_24 + 1)) + local_28;
      sVar3 = 0;
      if (-1 < (int)sVar6) {
        sVar3 = sVar6;
      }
      if ((int)sVar3 < 500) {
        memmove(local_21c,local_21c + local_24,sVar3);
        memset(local_21c + sVar3,0x20,500 - sVar3);
      }
      else {
        memmove(local_21c,local_21c + local_24,500);
      }
      local_28 = local_28 - local_24;
      local_24 = _gfortran_string_index(500,local_21c,1,&DAT_080742b9,0);
    }
    local_664 = "wrtout.F90";
    local_660 = 0xa3;
    local_63c = "(a)BUG";
    local_638 = 3;
    local_66c = 0x1000;
    local_668 = *param_1;
    _gfortran_st_write(&local_66c);
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
    if ((nwarning_1508 < 10000) && (ncomment_1507 < 1000)) {
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
      _gfortran_transfer_integer(&local_66c,&nwarning_1508,4);
      _gfortran_transfer_character
                (&local_66c,
                 " WARNINGs and COMMENTs to log file.(a,i6,a,i6,a) Note : exit requested by the user.ExitWARNINGCOMMENT"
                 ,0xd);
      _gfortran_transfer_integer(&local_66c,&ncomment_1507,4);
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
      _gfortran_transfer_integer(&local_66c,&nwarning_1508,4);
      _gfortran_transfer_character
                (&local_66c,
                 " WARNINGs and COMMENTs to log file.(a,i6,a,i6,a) Note : exit requested by the user.ExitWARNINGCOMMENT"
                 ,0xd);
      _gfortran_transfer_integer(&local_66c,&ncomment_1507,4);
      _gfortran_transfer_character
                (&local_66c,
                 " COMMENTs to log file.(a,i6,a,i6,a) Note : exit requested by the user.ExitWARNINGCOMMENT"
                 ,0x16);
      _gfortran_st_write_done(&local_66c);
    }
    if (iexit_1504 != 0) {
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
    iexit_1504 = 1;
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
    nwarning_1508 = nwarning_1508 + 1;
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
    ncomment_1507 = ncomment_1507 + 1;
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
      sVar6 = 0x1f5 - (local_24 + 1);
      sVar3 = 0;
      if (-1 < (int)sVar6) {
        sVar3 = sVar6;
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



void leave_myproc(void...)

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
  MAIN__();
  return;
}



undefined4 main(undefined4 param_1,undefined4 *param_2)

{
  _gfortran_store_exe_path(*param_2);
  _gfortran_set_args(param_1,param_2);
  MAIN__();
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


