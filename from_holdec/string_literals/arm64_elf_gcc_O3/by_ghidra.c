typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef long __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char * _IO_read_ptr;
    char * _IO_read_end;
    char * _IO_read_base;
    char * _IO_write_base;
    char * _IO_write_ptr;
    char * _IO_write_end;
    char * _IO_buf_base;
    char * _IO_buf_end;
    char * _IO_save_base;
    char * _IO_backup_base;
    char * _IO_save_end;
    struct _IO_marker * _markers;
    struct _IO_FILE * _chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t * _lock;
    __off64_t _offset;
    void * __pad1;
    void * __pad2;
    void * __pad3;
    void * __pad4;
    size_t __pad5;
    int _mode;
    char _unused2[56];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct _IO_FILE FILE;

typedef ulong sizetype;


// WARNING! conflicting data type names: /DWARF/libio.h/_IO_marker - /libio.h/_IO_marker


// WARNING! conflicting data type names: /DWARF/libio.h/_IO_FILE - /stdio.h/_IO_FILE


// WARNING! conflicting data type names: /DWARF/stdio.h/FILE - /stdio.h/FILE

typedef struct _IO_FILE_plus _IO_FILE_plus, *P_IO_FILE_plus;

struct _IO_FILE_plus {
};

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType_AARCH64 {
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
    SHT_GNU_versym=1879048191,
    SHT_AARCH64_ATTRIBUTES=1879048195
} Elf_SectionHeaderType_AARCH64;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_AARCH64 sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

typedef enum Elf_ProgramHeaderType_AARCH64 {
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
    PT_GNU_RELRO=1685382482,
    PT_AARCH64_ARCHEXT=1879048192
} Elf_ProgramHeaderType_AARCH64;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType_AARCH64 p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf64_Dyn_AARCH64 Elf64_Dyn_AARCH64, *PElf64_Dyn_AARCH64;

typedef enum Elf64_DynTag_AARCH64 {
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
} Elf64_DynTag_AARCH64;

struct Elf64_Dyn_AARCH64 {
    enum Elf64_DynTag_AARCH64 d_tag;
    qword d_val;
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




int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



void FUN_00100790(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fclose(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = fopen(__filename,__modes);
  return pFVar1;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void abort(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Unknown calling convention yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = strchr(__s,__c);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



int main(int argc,char **argv)

{
  char *pcVar1;
  FILE *__s;
  
  pcVar1 = strchr(*argv,0x27);
  printf("with single \' quote %p\n",pcVar1);
  pcVar1 = strchr(*argv,0x22);
  printf("with double \" quote %p\n",pcVar1);
  __s = fopen("with-null-byte","w");
  fwrite("with null byte ",0x11,1,__s);
  fwrite("with null byte ",1,0x11,__s);
  fclose(__s);
  puts("hex=0x01 dec=1 char=\x01FINI");
  puts("hex=0x02 dec=2 char=\x02FINI");
  puts("hex=0x03 dec=3 char=\x03FINI");
  puts("hex=0x04 dec=4 char=\x04FINI");
  puts("hex=0x05 dec=5 char=\x05FINI");
  puts("hex=0x06 dec=6 char=\x06FINI");
  puts("hex=0x07 dec=7 char=\aFINI");
  puts("hex=0x08 dec=8 char=\bFINI");
  puts("hex=0x09 dec=9 char=\tFINI");
  puts("hex=0x0a dec=10 char=\nFINI");
  puts("hex=0x0b dec=11 char=\vFINI");
  puts("hex=0x0c dec=12 char=\fFINI");
  puts("hex=0x0d dec=13 char=\rFINI");
  puts("hex=0x0e dec=14 char=\x0eFINI");
  puts("hex=0x0f dec=15 char=\x0fFINI");
  puts("hex=0x10 dec=16 char=\x10FINI");
  puts("hex=0x11 dec=17 char=\x11FINI");
  puts("hex=0x12 dec=18 char=\x12FINI");
  puts("hex=0x13 dec=19 char=\x13FINI");
  puts("hex=0x14 dec=20 char=\x14FINI");
  puts("hex=0x15 dec=21 char=\x15FINI");
  puts("hex=0x16 dec=22 char=\x16FINI");
  puts("hex=0x17 dec=23 char=\x17FINI");
  puts("hex=0x18 dec=24 char=\x18FINI");
  puts("hex=0x19 dec=25 char=\x19FINI");
  puts("hex=0x1a dec=26 char=\x1aFINI");
  puts("hex=0x1b dec=27 char=\x1bFINI");
  puts("hex=0x1c dec=28 char=\x1cFINI");
  puts("hex=0x1d dec=29 char=\x1dFINI");
  puts("hex=0x1e dec=30 char=\x1eFINI");
  puts("hex=0x1f dec=31 char=\x1fFINI");
  puts("hex=0x20 dec=32 char= FINI");
  puts("hex=0x21 dec=33 char=!FINI");
  puts("hex=0x22 dec=34 char=\"FINI");
  puts("hex=0x23 dec=35 char=#FINI");
  puts("hex=0x24 dec=36 char=$FINI");
  puts("hex=0x25 dec=37 char=%FINI");
  puts("hex=0x26 dec=38 char=&FINI");
  puts("hex=0x27 dec=39 char=\'FINI");
  puts("hex=0x28 dec=40 char=(FINI");
  puts("hex=0x29 dec=41 char=)FINI");
  puts("hex=0x2a dec=42 char=*FINI");
  puts("hex=0x2b dec=43 char=+FINI");
  puts("hex=0x2c dec=44 char=,FINI");
  puts("hex=0x2d dec=45 char=-FINI");
  puts("hex=0x2e dec=46 char=.FINI");
  puts("hex=0x2f dec=47 char=/FINI");
  puts("hex=0x30 dec=48 char=0FINI");
  puts("hex=0x31 dec=49 char=1FINI");
  puts("hex=0x32 dec=50 char=2FINI");
  puts("hex=0x33 dec=51 char=3FINI");
  puts("hex=0x34 dec=52 char=4FINI");
  puts("hex=0x35 dec=53 char=5FINI");
  puts("hex=0x36 dec=54 char=6FINI");
  puts("hex=0x37 dec=55 char=7FINI");
  puts("hex=0x38 dec=56 char=8FINI");
  puts("hex=0x39 dec=57 char=9FINI");
  puts("hex=0x3a dec=58 char=:FINI");
  puts("hex=0x3b dec=59 char=;FINI");
  puts("hex=0x3c dec=60 char=<FINI");
  puts("hex=0x3d dec=61 char==FINI");
  puts("hex=0x3e dec=62 char=>FINI");
  puts("hex=0x3f dec=63 char=?FINI");
  puts("hex=0x40 dec=64 char=@FINI");
  puts("hex=0x41 dec=65 char=AFINI");
  puts("hex=0x42 dec=66 char=BFINI");
  puts("hex=0x43 dec=67 char=CFINI");
  puts("hex=0x44 dec=68 char=DFINI");
  puts("hex=0x45 dec=69 char=EFINI");
  puts("hex=0x46 dec=70 char=FFINI");
  puts("hex=0x47 dec=71 char=GFINI");
  puts("hex=0x48 dec=72 char=HFINI");
  puts("hex=0x49 dec=73 char=IFINI");
  puts("hex=0x4a dec=74 char=JFINI");
  puts("hex=0x4b dec=75 char=KFINI");
  puts("hex=0x4c dec=76 char=LFINI");
  puts("hex=0x4d dec=77 char=MFINI");
  puts("hex=0x4e dec=78 char=NFINI");
  puts("hex=0x4f dec=79 char=OFINI");
  puts("hex=0x50 dec=80 char=PFINI");
  puts("hex=0x51 dec=81 char=QFINI");
  puts("hex=0x52 dec=82 char=RFINI");
  puts("hex=0x53 dec=83 char=SFINI");
  puts("hex=0x54 dec=84 char=TFINI");
  puts("hex=0x55 dec=85 char=UFINI");
  puts("hex=0x56 dec=86 char=VFINI");
  puts("hex=0x57 dec=87 char=WFINI");
  puts("hex=0x58 dec=88 char=XFINI");
  puts("hex=0x59 dec=89 char=YFINI");
  puts("hex=0x5a dec=90 char=ZFINI");
  puts("hex=0x5b dec=91 char=[FINI");
  puts("hex=0x5c dec=92 char=\\FINI");
  puts("hex=0x5d dec=93 char=]FINI");
  puts("hex=0x5e dec=94 char=^FINI");
  puts("hex=0x5f dec=95 char=_FINI");
  puts("hex=0x60 dec=96 char=`FINI");
  puts("hex=0x61 dec=97 char=aFINI");
  puts("hex=0x62 dec=98 char=bFINI");
  puts("hex=0x63 dec=99 char=cFINI");
  puts("hex=0x64 dec=100 char=dFINI");
  puts("hex=0x65 dec=101 char=eFINI");
  puts("hex=0x66 dec=102 char=fFINI");
  puts("hex=0x67 dec=103 char=gFINI");
  puts("hex=0x68 dec=104 char=hFINI");
  puts("hex=0x69 dec=105 char=iFINI");
  puts("hex=0x6a dec=106 char=jFINI");
  puts("hex=0x6b dec=107 char=kFINI");
  puts("hex=0x6c dec=108 char=lFINI");
  puts("hex=0x6d dec=109 char=mFINI");
  puts("hex=0x6e dec=110 char=nFINI");
  puts("hex=0x6f dec=111 char=oFINI");
  puts("hex=0x70 dec=112 char=pFINI");
  puts("hex=0x71 dec=113 char=qFINI");
  puts("hex=0x72 dec=114 char=rFINI");
  puts("hex=0x73 dec=115 char=sFINI");
  puts("hex=0x74 dec=116 char=tFINI");
  puts("hex=0x75 dec=117 char=uFINI");
  puts("hex=0x76 dec=118 char=vFINI");
  puts("hex=0x77 dec=119 char=wFINI");
  puts("hex=0x78 dec=120 char=xFINI");
  puts("hex=0x79 dec=121 char=yFINI");
  puts("hex=0x7a dec=122 char=zFINI");
  puts("hex=0x7b dec=123 char={FINI");
  puts("hex=0x7c dec=124 char=|FINI");
  puts("hex=0x7d dec=125 char=}FINI");
  puts("hex=0x7e dec=126 char=~FINI");
  puts("hex=0x7f dec=127 char=\x7fFINI");
  puts(&DAT_00102708);
  puts(&DAT_00102728);
  puts(&DAT_00102748);
  puts(&DAT_00102768);
  puts(&DAT_00102788);
  puts(&DAT_001027a8);
  puts(&DAT_001027c8);
  puts(&DAT_001027e8);
  puts(&DAT_00102808);
  puts(&DAT_00102828);
  puts(&DAT_00102848);
  puts(&DAT_00102868);
  puts(&DAT_00102888);
  puts(&DAT_001028a8);
  puts(&DAT_001028c8);
  puts(&DAT_001028e8);
  puts(&DAT_00102908);
  puts(&DAT_00102928);
  puts(&DAT_00102948);
  puts(&DAT_00102968);
  puts(&DAT_00102988);
  puts(&DAT_001029a8);
  puts(&DAT_001029c8);
  puts(&DAT_001029e8);
  puts(&DAT_00102a08);
  puts(&DAT_00102a28);
  puts(&DAT_00102a48);
  puts(&DAT_00102a68);
  puts(&DAT_00102a88);
  puts(&DAT_00102aa8);
  puts(&DAT_00102ac8);
  puts(&DAT_00102ae8);
  puts(&DAT_00102b08);
  puts(&DAT_00102b28);
  puts(&DAT_00102b48);
  puts(&DAT_00102b68);
  puts(&DAT_00102b88);
  puts(&DAT_00102ba8);
  puts(&DAT_00102bc8);
  puts(&DAT_00102be8);
  puts(&DAT_00102c08);
  puts(&DAT_00102c28);
  puts(&DAT_00102c48);
  puts(&DAT_00102c68);
  puts(&DAT_00102c88);
  puts(&DAT_00102ca8);
  puts(&DAT_00102cc8);
  puts(&DAT_00102ce8);
  puts(&DAT_00102d08);
  puts(&DAT_00102d28);
  puts(&DAT_00102d48);
  puts(&DAT_00102d68);
  puts(&DAT_00102d88);
  puts(&DAT_00102da8);
  puts(&DAT_00102dc8);
  puts(&DAT_00102de8);
  puts(&DAT_00102e08);
  puts(&DAT_00102e28);
  puts(&DAT_00102e48);
  puts(&DAT_00102e68);
  puts(&DAT_00102e88);
  puts(&DAT_00102ea8);
  puts(&DAT_00102ec8);
  puts(&DAT_00102ee8);
  puts(&DAT_00102f08);
  puts(&DAT_00102f28);
  puts(&DAT_00102f48);
  puts(&DAT_00102f68);
  puts(&DAT_00102f88);
  puts(&DAT_00102fa8);
  puts(&DAT_00102fc8);
  puts(&DAT_00102fe8);
  puts(&DAT_00103008);
  puts(&DAT_00103028);
  puts(&DAT_00103048);
  puts(&DAT_00103068);
  puts(&DAT_00103088);
  puts(&DAT_001030a8);
  puts(&DAT_001030c8);
  puts(&DAT_001030e8);
  puts(&DAT_00103108);
  puts(&DAT_00103128);
  puts(&DAT_00103148);
  puts(&DAT_00103168);
  puts(&DAT_00103188);
  puts(&DAT_001031a8);
  puts(&DAT_001031c8);
  puts(&DAT_001031e8);
  puts(&DAT_00103208);
  puts(&DAT_00103228);
  puts(&DAT_00103248);
  puts(&DAT_00103268);
  puts(&DAT_00103288);
  puts(&DAT_001032a8);
  puts(&DAT_001032c8);
  puts(&DAT_001032e8);
  puts(&DAT_00103308);
  puts(&DAT_00103328);
  puts(&DAT_00103348);
  puts(&DAT_00103368);
  puts(&DAT_00103388);
  puts(&DAT_001033a8);
  puts(&DAT_001033c8);
  puts(&DAT_001033e8);
  puts(&DAT_00103408);
  puts(&DAT_00103428);
  puts(&DAT_00103448);
  puts(&DAT_00103468);
  puts(&DAT_00103488);
  puts(&DAT_001034a8);
  puts(&DAT_001034c8);
  puts(&DAT_001034e8);
  puts(&DAT_00103508);
  puts(&DAT_00103528);
  puts(&DAT_00103548);
  puts(&DAT_00103568);
  puts(&DAT_00103588);
  puts(&DAT_001035a8);
  puts(&DAT_001035c8);
  puts(&DAT_001035e8);
  puts(&DAT_00103608);
  puts(&DAT_00103628);
  puts(&DAT_00103648);
  puts(&DAT_00103668);
  puts(&DAT_00103688);
  puts(&DAT_001036a8);
  puts(&DAT_001036c8);
  puts(&DAT_001036e8);
  return 0;
}



void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1)
  ;
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x00101534)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x00101558)
// WARNING: Removing unreachable block (ram,0x00101564)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00101594)
// WARNING: Removing unreachable block (ram,0x001015a0)

void register_tm_clones(void)

{
  return;
}



void FUN_001015ac(void)

{
  if (completed_7433 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_7433 = '\x01';
  }
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_7433 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_7433 = '\x01';
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void frame_dummy(void)

{
  if (___JCR_END__ == 0) {
    register_tm_clones();
    return;
  }
  _Jv_RegisterClasses();
  register_tm_clones();
  return;
}



undefined8 __libc_csu_init(EVP_PKEY_CTX *param_1,undefined8 param_2,undefined8 param_3)

{
  code **ppcVar1;
  undefined8 uVar2;
  long lVar3;
  
  _init(param_1);
  lVar3 = 0;
  do {
    ppcVar1 = (code **)(&__frame_dummy_init_array_entry + lVar3);
    lVar3 = lVar3 + 1;
    uVar2 = (**ppcVar1)((ulong)param_1 & 0xffffffff,param_2,param_3);
  } while (lVar3 != 1);
  return uVar2;
}



void __libc_csu_fini(void)

{
  return;
}



void _fini(void)

{
  return;
}


