typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
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

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef longlong __quad_t;

typedef __quad_t __off64_t;

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

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

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




// WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_08048390(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fclose(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
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



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = fopen(__filename,__modes);
  return pFVar1;
}



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



undefined4 main(undefined4 param_1,char **param_2)

{
  char *pcVar1;
  FILE *__s;
  
  pcVar1 = strchr(*param_2,0x27);
  printf("with single \' quote %p\n",pcVar1);
  pcVar1 = strchr(*param_2,0x22);
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
  puts(&DAT_08049fdd);
  puts(&DAT_08049ff9);
  puts(&DAT_0804a015);
  puts(&DAT_0804a031);
  puts(&DAT_0804a04d);
  puts(&DAT_0804a069);
  puts(&DAT_0804a085);
  puts(&DAT_0804a0a1);
  puts(&DAT_0804a0bd);
  puts(&DAT_0804a0d9);
  puts(&DAT_0804a0f5);
  puts(&DAT_0804a111);
  puts(&DAT_0804a12d);
  puts(&DAT_0804a149);
  puts(&DAT_0804a165);
  puts(&DAT_0804a181);
  puts(&DAT_0804a19d);
  puts(&DAT_0804a1b9);
  puts(&DAT_0804a1d5);
  puts(&DAT_0804a1f1);
  puts(&DAT_0804a20d);
  puts(&DAT_0804a229);
  puts(&DAT_0804a245);
  puts(&DAT_0804a261);
  puts(&DAT_0804a27d);
  puts(&DAT_0804a299);
  puts(&DAT_0804a2b5);
  puts(&DAT_0804a2d1);
  puts(&DAT_0804a2ed);
  puts(&DAT_0804a309);
  puts(&DAT_0804a325);
  puts(&DAT_0804a341);
  puts(&DAT_0804a35d);
  puts(&DAT_0804a379);
  puts(&DAT_0804a395);
  puts(&DAT_0804a3b1);
  puts(&DAT_0804a3cd);
  puts(&DAT_0804a3e9);
  puts(&DAT_0804a405);
  puts(&DAT_0804a421);
  puts(&DAT_0804a43d);
  puts(&DAT_0804a459);
  puts(&DAT_0804a475);
  puts(&DAT_0804a491);
  puts(&DAT_0804a4ad);
  puts(&DAT_0804a4c9);
  puts(&DAT_0804a4e5);
  puts(&DAT_0804a501);
  puts(&DAT_0804a51d);
  puts(&DAT_0804a539);
  puts(&DAT_0804a555);
  puts(&DAT_0804a571);
  puts(&DAT_0804a58d);
  puts(&DAT_0804a5a9);
  puts(&DAT_0804a5c5);
  puts(&DAT_0804a5e1);
  puts(&DAT_0804a5fd);
  puts(&DAT_0804a619);
  puts(&DAT_0804a635);
  puts(&DAT_0804a651);
  puts(&DAT_0804a66d);
  puts(&DAT_0804a689);
  puts(&DAT_0804a6a5);
  puts(&DAT_0804a6c1);
  puts(&DAT_0804a6dd);
  puts(&DAT_0804a6f9);
  puts(&DAT_0804a715);
  puts(&DAT_0804a731);
  puts(&DAT_0804a74d);
  puts(&DAT_0804a769);
  puts(&DAT_0804a785);
  puts(&DAT_0804a7a1);
  puts(&DAT_0804a7bd);
  puts(&DAT_0804a7d9);
  puts(&DAT_0804a7f5);
  puts(&DAT_0804a811);
  puts(&DAT_0804a82d);
  puts(&DAT_0804a849);
  puts(&DAT_0804a865);
  puts(&DAT_0804a881);
  puts(&DAT_0804a89d);
  puts(&DAT_0804a8b9);
  puts(&DAT_0804a8d5);
  puts(&DAT_0804a8f1);
  puts(&DAT_0804a90d);
  puts(&DAT_0804a929);
  puts(&DAT_0804a945);
  puts(&DAT_0804a961);
  puts(&DAT_0804a97d);
  puts(&DAT_0804a999);
  puts(&DAT_0804a9b5);
  puts(&DAT_0804a9d1);
  puts(&DAT_0804a9ed);
  puts(&DAT_0804aa09);
  puts(&DAT_0804aa25);
  puts(&DAT_0804aa41);
  puts(&DAT_0804aa5d);
  puts(&DAT_0804aa79);
  puts(&DAT_0804aa95);
  puts(&DAT_0804aab1);
  puts(&DAT_0804aacd);
  puts(&DAT_0804aae9);
  puts(&DAT_0804ab05);
  puts(&DAT_0804ab21);
  puts(&DAT_0804ab3d);
  puts(&DAT_0804ab59);
  puts(&DAT_0804ab75);
  puts(&DAT_0804ab91);
  puts(&DAT_0804abad);
  puts(&DAT_0804abc9);
  puts(&DAT_0804abe5);
  puts(&DAT_0804ac01);
  puts(&DAT_0804ac1d);
  puts(&DAT_0804ac39);
  puts(&DAT_0804ac55);
  puts(&DAT_0804ac71);
  puts(&DAT_0804ac8d);
  puts(&DAT_0804aca9);
  puts(&DAT_0804acc5);
  puts(&DAT_0804ace1);
  puts(&DAT_0804acfd);
  puts(&DAT_0804ad19);
  puts(&DAT_0804ad35);
  puts(&DAT_0804ad51);
  puts(&DAT_0804ad6d);
  puts(&DAT_0804ad89);
  puts(&DAT_0804ada5);
  puts(&DAT_0804adc1);
  return 0;
}



void _start(void)

{
  __libc_start_main(main);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: This is an inlined function

void __x86_get_pc_thunk_bx(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x080490ef)
// WARNING: Removing unreachable block (ram,0x080490f8)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x08049128)
// WARNING: Removing unreachable block (ram,0x08049131)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_6532 == '\0') {
    deregister_tm_clones();
    completed_6532 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x08049189)

void frame_dummy(void)

{
  register_tm_clones();
  return;
}



// WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void __libc_csu_init(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  EVP_PKEY_CTX *in_stack_ffffffe4;
  
  _init(in_stack_ffffffe4);
  iVar1 = 0;
  do {
    (*(code *)(&__frame_dummy_init_array_entry)[iVar1])(param_1,param_2,param_3);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 1);
  return;
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


