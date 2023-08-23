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
    char _unused2[40];
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

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
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



// WARNING: Unknown calling convention -- yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = putchar(__c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = fputs(__s,__stream);
  return iVar1;
}



int main(int param_1,char **param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = **param_2;
  iVar2 = call_all();
  return iVar2 + cVar1 + param_1;
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



// WARNING: Removing unreachable block (ram,0x0804910c)
// WARNING: Removing unreachable block (ram,0x08049115)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x08049158)
// WARNING: Removing unreachable block (ram,0x08049161)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_6843 == '\0') {
    deregister_tm_clones();
    completed_6843 = 1;
    return;
  }
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



undefined4 var0000_0123456789(void)

{
  int __c;
  
  fputs("0000 signed start:48, iter:10, inc:+1, order:buj cmp:!=0               expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
  } while (__c != 0x3a);
  puts("<");
  return 0;
}



undefined4 var0001_0123456789(void)

{
  int __c;
  
  fputs("0001 signed start:48, iter:10, inc:+1, order:buj cmp:< 0               expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
  } while (__c < 0x3a);
  puts("<");
  return 0;
}



undefined4 var0002_0123456789(void)

{
  int __c;
  
  fputs("0002 signed start:48, iter:10, inc:+1, order:buj cmp:<=0               expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
  } while (__c < 0x3a);
  puts("<");
  return 0;
}



undefined4 var0003_0123456789(void)

{
  int __c;
  
  fputs("0003 signed start:48, iter:10, inc:+1, order:bju cmp:!=0               expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  while( true ) {
    putchar(__c);
    if (__c == 0x39) break;
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0004_0123456789(void)

{
  int __c;
  
  fputs("0004 signed start:48, iter:10, inc:+1, order:bju cmp:< 0               expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  while( true ) {
    putchar(__c);
    if (0x38 < __c) break;
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0005_0123456789(void)

{
  int __c;
  
  fputs("0005 signed start:48, iter:10, inc:+1, order:bju cmp:<=0               expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  while( true ) {
    putchar(__c);
    if (0x38 < __c) break;
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0006_0123456789(void)

{
  int __c;
  
  fputs("0006 signed start:48, iter:10, inc:+1, order:ubj cmp:!=0               expected=\'0123456789\' >"
        ,stdout);
  __c = 0x2f;
  do {
    __c = __c + 1;
    putchar(__c);
  } while (__c != 0x39);
  puts("<");
  return 0;
}



undefined4 var0007_0123456789(void)

{
  int __c;
  
  fputs("0007 signed start:48, iter:10, inc:+1, order:ubj cmp:< 0               expected=\'0123456789\' >"
        ,stdout);
  __c = 0x2f;
  do {
    __c = __c + 1;
    putchar(__c);
  } while (__c < 0x39);
  puts("<");
  return 0;
}



undefined4 var0008_0123456789(void)

{
  int __c;
  
  fputs("0008 signed start:48, iter:10, inc:+1, order:ubj cmp:<=0               expected=\'0123456789\' >"
        ,stdout);
  __c = 0x2f;
  do {
    __c = __c + 1;
    putchar(__c);
  } while (__c < 0x39);
  puts("<");
  return 0;
}



undefined4 var0009_0123456789(void)

{
  int __c;
  
  fputs("0009 signed start:48, iter:10, inc:+1, order:ujb cmp:!=0               expected=\'0123456789\' >"
        ,stdout);
  __c = 0x2f;
  while (__c = __c + 1, __c != 0x3a) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0010_0123456789(void)

{
  int __c;
  
  fputs("0010 signed start:48, iter:10, inc:+1, order:ujb cmp:< 0               expected=\'0123456789\' >"
        ,stdout);
  __c = 0x2f;
  while (__c = __c + 1, __c < 0x3a) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0011_0123456789(void)

{
  int __c;
  
  fputs("0011 signed start:48, iter:10, inc:+1, order:ujb cmp:<=0               expected=\'0123456789\' >"
        ,stdout);
  __c = 0x2f;
  while (__c = __c + 1, __c < 0x3a) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0012_0123456789(void)

{
  int __c;
  
  fputs("0012 signed start:48, iter:10, inc:+1, order:jbu cmp:!=0               expected=\'0123456789\' >"
        ,stdout);
  for (__c = 0x30; __c != 0x3a; __c = __c + 1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0013_0123456789(void)

{
  int __c;
  
  fputs("0013 signed start:48, iter:10, inc:+1, order:jbu cmp:< 0               expected=\'0123456789\' >"
        ,stdout);
  for (__c = 0x30; __c < 0x3a; __c = __c + 1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0014_0123456789(void)

{
  int __c;
  
  fputs("0014 signed start:48, iter:10, inc:+1, order:jbu cmp:<=0               expected=\'0123456789\' >"
        ,stdout);
  for (__c = 0x30; __c < 0x3a; __c = __c + 1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0015_0123456789(void)

{
  int __c;
  
  fputs("0015 signed start:48, iter:10, inc:+1, order:jub cmp:!=0               expected=\'0123456789\' >"
        ,stdout);
  __c = 0x2f;
  while (__c != 0x39) {
    __c = __c + 1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0016_0123456789(void)

{
  int __c;
  
  fputs("0016 signed start:48, iter:10, inc:+1, order:jub cmp:< 0               expected=\'0123456789\' >"
        ,stdout);
  __c = 0x2f;
  while (__c < 0x39) {
    __c = __c + 1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0017_0123456789(void)

{
  int __c;
  
  fputs("0017 signed start:48, iter:10, inc:+1, order:jub cmp:<=0               expected=\'0123456789\' >"
        ,stdout);
  __c = 0x2f;
  while (__c < 0x39) {
    __c = __c + 1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0018_0123456789(void)

{
  int iVar1;
  
  fputs("0018 signed start:0, iter:10, inc:+1, order:buj cmp:!=0 exp:+48        expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 0;
  do {
    putchar(iVar1 + 0x30);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 10);
  puts("<");
  return 0;
}



undefined4 var0019_0123456789(void)

{
  int iVar1;
  
  fputs("0019 signed start:0, iter:10, inc:+1, order:buj cmp:< 0 exp:+48        expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 0;
  do {
    putchar(iVar1 + 0x30);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 10);
  puts("<");
  return 0;
}



undefined4 var0020_0123456789(void)

{
  int iVar1;
  
  fputs("0020 signed start:0, iter:10, inc:+1, order:buj cmp:<=0 exp:+48        expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 0;
  do {
    putchar(iVar1 + 0x30);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 10);
  puts("<");
  return 0;
}



undefined4 var0021_0123456789(void)

{
  int iVar1;
  
  fputs("0021 signed start:0, iter:10, inc:+1, order:bju cmp:!=0 exp:+48        expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 0;
  while( true ) {
    putchar(iVar1 + 0x30);
    if (iVar1 == 9) break;
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0022_0123456789(void)

{
  int iVar1;
  
  fputs("0022 signed start:0, iter:10, inc:+1, order:bju cmp:< 0 exp:+48        expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 0;
  while( true ) {
    putchar(iVar1 + 0x30);
    if (8 < iVar1) break;
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0023_0123456789(void)

{
  int iVar1;
  
  fputs("0023 signed start:0, iter:10, inc:+1, order:bju cmp:<=0 exp:+48        expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 0;
  while( true ) {
    putchar(iVar1 + 0x30);
    if (8 < iVar1) break;
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0024_0123456789(void)

{
  int iVar1;
  int iVar2;
  
  fputs("0024 signed start:0, iter:10, inc:+1, order:ubj cmp:!=0 exp:+48        expected=\'0123456789\' >"
        ,stdout);
  iVar2 = -1;
  do {
    iVar1 = iVar2 + 1;
    putchar(iVar2 + 0x31);
    iVar2 = iVar1;
  } while (iVar1 != 9);
  puts("<");
  return 0;
}



undefined4 var0025_0123456789(void)

{
  int iVar1;
  int iVar2;
  
  fputs("0025 signed start:0, iter:10, inc:+1, order:ubj cmp:< 0 exp:+48        expected=\'0123456789\' >"
        ,stdout);
  iVar2 = -1;
  do {
    iVar1 = iVar2 + 1;
    putchar(iVar2 + 0x31);
    iVar2 = iVar1;
  } while (iVar1 < 9);
  puts("<");
  return 0;
}



undefined4 var0026_0123456789(void)

{
  int iVar1;
  int iVar2;
  
  fputs("0026 signed start:0, iter:10, inc:+1, order:ubj cmp:<=0 exp:+48        expected=\'0123456789\' >"
        ,stdout);
  iVar2 = -1;
  do {
    iVar1 = iVar2 + 1;
    putchar(iVar2 + 0x31);
    iVar2 = iVar1;
  } while (iVar1 < 9);
  puts("<");
  return 0;
}



undefined4 var0027_0123456789(void)

{
  int iVar1;
  
  fputs("0027 signed start:0, iter:10, inc:+1, order:ujb cmp:!=0 exp:+48        expected=\'0123456789\' >"
        ,stdout);
  iVar1 = -1;
  while (iVar1 + 1 != 10) {
    putchar(iVar1 + 0x31);
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0028_0123456789(void)

{
  int iVar1;
  
  fputs("0028 signed start:0, iter:10, inc:+1, order:ujb cmp:< 0 exp:+48        expected=\'0123456789\' >"
        ,stdout);
  iVar1 = -1;
  while (iVar1 + 1 < 10) {
    putchar(iVar1 + 0x31);
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0029_0123456789(void)

{
  int iVar1;
  
  fputs("0029 signed start:0, iter:10, inc:+1, order:ujb cmp:<=0 exp:+48        expected=\'0123456789\' >"
        ,stdout);
  iVar1 = -1;
  while (iVar1 + 1 < 10) {
    putchar(iVar1 + 0x31);
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0030_0123456789(void)

{
  int iVar1;
  
  fputs("0030 signed start:0, iter:10, inc:+1, order:jbu cmp:!=0 exp:+48        expected=\'0123456789\' >"
        ,stdout);
  for (iVar1 = 0; iVar1 != 10; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x30);
  }
  puts("<");
  return 0;
}



undefined4 var0031_0123456789(void)

{
  int iVar1;
  
  fputs("0031 signed start:0, iter:10, inc:+1, order:jbu cmp:< 0 exp:+48        expected=\'0123456789\' >"
        ,stdout);
  for (iVar1 = 0; iVar1 < 10; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x30);
  }
  puts("<");
  return 0;
}



undefined4 var0032_0123456789(void)

{
  int iVar1;
  
  fputs("0032 signed start:0, iter:10, inc:+1, order:jbu cmp:<=0 exp:+48        expected=\'0123456789\' >"
        ,stdout);
  for (iVar1 = 0; iVar1 < 10; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x30);
  }
  puts("<");
  return 0;
}



undefined4 var0033_0123456789(void)

{
  int iVar1;
  
  fputs("0033 signed start:0, iter:10, inc:+1, order:jub cmp:!=0 exp:+48        expected=\'0123456789\' >"
        ,stdout);
  for (iVar1 = -1; iVar1 != 9; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x31);
  }
  puts("<");
  return 0;
}



undefined4 var0034_0123456789(void)

{
  int iVar1;
  
  fputs("0034 signed start:0, iter:10, inc:+1, order:jub cmp:< 0 exp:+48        expected=\'0123456789\' >"
        ,stdout);
  for (iVar1 = -1; iVar1 < 9; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x31);
  }
  puts("<");
  return 0;
}



undefined4 var0035_0123456789(void)

{
  int iVar1;
  
  fputs("0035 signed start:0, iter:10, inc:+1, order:jub cmp:<=0 exp:+48        expected=\'0123456789\' >"
        ,stdout);
  for (iVar1 = -1; iVar1 < 9; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x31);
  }
  puts("<");
  return 0;
}



undefined4 var0036_0123456789(void)

{
  uint uVar1;
  
  fputs("0036 signed start:16, iter:10, inc:+2, order:buj cmp:!=0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0x10;
  do {
    putchar((uVar1 >> 1) + 0x28);
    uVar1 = uVar1 + 2;
  } while (uVar1 != 0x24);
  puts("<");
  return 0;
}



undefined4 var0037_0123456789(void)

{
  uint uVar1;
  
  fputs("0037 signed start:16, iter:10, inc:+2, order:buj cmp:< 0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0x10;
  do {
    putchar((uVar1 >> 1) + 0x28);
    uVar1 = uVar1 + 2;
  } while ((int)uVar1 < 0x24);
  puts("<");
  return 0;
}



undefined4 var0038_0123456789(void)

{
  uint uVar1;
  
  fputs("0038 signed start:16, iter:10, inc:+2, order:buj cmp:< 1 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0x10;
  do {
    putchar((uVar1 >> 1) + 0x28);
    uVar1 = uVar1 + 2;
  } while ((int)uVar1 < 0x23);
  puts("<");
  return 0;
}



undefined4 var0039_0123456789(void)

{
  uint uVar1;
  
  fputs("0039 signed start:16, iter:10, inc:+2, order:buj cmp:<=0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0x10;
  do {
    putchar((uVar1 >> 1) + 0x28);
    uVar1 = uVar1 + 2;
  } while ((int)uVar1 < 0x24);
  puts("<");
  return 0;
}



undefined4 var0040_0123456789(void)

{
  uint uVar1;
  
  fputs("0040 signed start:16, iter:10, inc:+2, order:buj cmp:<=1 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0x10;
  do {
    putchar((uVar1 >> 1) + 0x28);
    uVar1 = uVar1 + 2;
  } while ((int)uVar1 < 0x23);
  puts("<");
  return 0;
}



undefined4 var0041_0123456789(void)

{
  uint uVar1;
  
  fputs("0041 signed start:16, iter:10, inc:+2, order:bju cmp:!=0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0x10;
  while( true ) {
    putchar((uVar1 >> 1) + 0x28);
    if (uVar1 == 0x22) break;
    uVar1 = uVar1 + 2;
  }
  puts("<");
  return 0;
}



undefined4 var0042_0123456789(void)

{
  uint uVar1;
  
  fputs("0042 signed start:16, iter:10, inc:+2, order:bju cmp:< 0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0x10;
  while( true ) {
    putchar((uVar1 >> 1) + 0x28);
    if (0x21 < (int)uVar1) break;
    uVar1 = uVar1 + 2;
  }
  puts("<");
  return 0;
}



undefined4 var0043_0123456789(void)

{
  uint uVar1;
  
  fputs("0043 signed start:16, iter:10, inc:+2, order:bju cmp:< 1 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0x10;
  while( true ) {
    putchar((uVar1 >> 1) + 0x28);
    if (0x20 < (int)uVar1) break;
    uVar1 = uVar1 + 2;
  }
  puts("<");
  return 0;
}



undefined4 var0044_0123456789(void)

{
  uint uVar1;
  
  fputs("0044 signed start:16, iter:10, inc:+2, order:bju cmp:<=0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0x10;
  while( true ) {
    putchar((uVar1 >> 1) + 0x28);
    if (0x21 < (int)uVar1) break;
    uVar1 = uVar1 + 2;
  }
  puts("<");
  return 0;
}



undefined4 var0045_0123456789(void)

{
  uint uVar1;
  
  fputs("0045 signed start:16, iter:10, inc:+2, order:bju cmp:<=1 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0x10;
  while( true ) {
    putchar((uVar1 >> 1) + 0x28);
    if (0x20 < (int)uVar1) break;
    uVar1 = uVar1 + 2;
  }
  puts("<");
  return 0;
}



undefined4 var0046_0123456789(void)

{
  uint uVar1;
  
  fputs("0046 signed start:16, iter:10, inc:+2, order:ubj cmp:!=0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xe;
  do {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  } while (uVar1 != 0x22);
  puts("<");
  return 0;
}



undefined4 var0047_0123456789(void)

{
  uint uVar1;
  
  fputs("0047 signed start:16, iter:10, inc:+2, order:ubj cmp:< 0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xe;
  do {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  } while ((int)uVar1 < 0x22);
  puts("<");
  return 0;
}



undefined4 var0048_0123456789(void)

{
  uint uVar1;
  
  fputs("0048 signed start:16, iter:10, inc:+2, order:ubj cmp:< 1 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xe;
  do {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  } while ((int)uVar1 < 0x21);
  puts("<");
  return 0;
}



undefined4 var0049_0123456789(void)

{
  uint uVar1;
  
  fputs("0049 signed start:16, iter:10, inc:+2, order:ubj cmp:<=0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xe;
  do {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  } while ((int)uVar1 < 0x22);
  puts("<");
  return 0;
}



undefined4 var0050_0123456789(void)

{
  uint uVar1;
  
  fputs("0050 signed start:16, iter:10, inc:+2, order:ubj cmp:<=1 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xe;
  do {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  } while ((int)uVar1 < 0x21);
  puts("<");
  return 0;
}



undefined4 var0051_0123456789(void)

{
  uint uVar1;
  
  fputs("0051 signed start:16, iter:10, inc:+2, order:ujb cmp:!=0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xe;
  while (uVar1 = uVar1 + 2, uVar1 != 0x24) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0052_0123456789(void)

{
  uint uVar1;
  
  fputs("0052 signed start:16, iter:10, inc:+2, order:ujb cmp:< 0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xe;
  while (uVar1 = uVar1 + 2, (int)uVar1 < 0x24) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0053_0123456789(void)

{
  uint uVar1;
  
  fputs("0053 signed start:16, iter:10, inc:+2, order:ujb cmp:< 1 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xe;
  while (uVar1 = uVar1 + 2, (int)uVar1 < 0x23) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0054_0123456789(void)

{
  uint uVar1;
  
  fputs("0054 signed start:16, iter:10, inc:+2, order:ujb cmp:<=0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xe;
  while (uVar1 = uVar1 + 2, (int)uVar1 < 0x24) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0055_0123456789(void)

{
  uint uVar1;
  
  fputs("0055 signed start:16, iter:10, inc:+2, order:ujb cmp:<=1 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xe;
  while (uVar1 = uVar1 + 2, (int)uVar1 < 0x23) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0056_0123456789(void)

{
  uint uVar1;
  
  fputs("0056 signed start:16, iter:10, inc:+2, order:jbu cmp:!=0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  for (uVar1 = 0x10; uVar1 != 0x24; uVar1 = uVar1 + 2) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0057_0123456789(void)

{
  uint uVar1;
  
  fputs("0057 signed start:16, iter:10, inc:+2, order:jbu cmp:< 0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  for (uVar1 = 0x10; (int)uVar1 < 0x24; uVar1 = uVar1 + 2) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0058_0123456789(void)

{
  uint uVar1;
  
  fputs("0058 signed start:16, iter:10, inc:+2, order:jbu cmp:< 1 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  for (uVar1 = 0x10; (int)uVar1 < 0x23; uVar1 = uVar1 + 2) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0059_0123456789(void)

{
  uint uVar1;
  
  fputs("0059 signed start:16, iter:10, inc:+2, order:jbu cmp:<=0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  for (uVar1 = 0x10; (int)uVar1 < 0x24; uVar1 = uVar1 + 2) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0060_0123456789(void)

{
  uint uVar1;
  
  fputs("0060 signed start:16, iter:10, inc:+2, order:jbu cmp:<=1 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  for (uVar1 = 0x10; (int)uVar1 < 0x23; uVar1 = uVar1 + 2) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0061_0123456789(void)

{
  uint uVar1;
  
  fputs("0061 signed start:16, iter:10, inc:+2, order:jub cmp:!=0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xe;
  while (uVar1 != 0x22) {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0062_0123456789(void)

{
  uint uVar1;
  
  fputs("0062 signed start:16, iter:10, inc:+2, order:jub cmp:< 0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xe;
  while ((int)uVar1 < 0x22) {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0063_0123456789(void)

{
  uint uVar1;
  
  fputs("0063 signed start:16, iter:10, inc:+2, order:jub cmp:< 1 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xe;
  while ((int)uVar1 < 0x21) {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0064_0123456789(void)

{
  uint uVar1;
  
  fputs("0064 signed start:16, iter:10, inc:+2, order:jub cmp:<=0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xe;
  while ((int)uVar1 < 0x22) {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0065_0123456789(void)

{
  uint uVar1;
  
  fputs("0065 signed start:16, iter:10, inc:+2, order:jub cmp:<=1 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xe;
  while ((int)uVar1 < 0x21) {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0066_9876543210(void)

{
  int __c;
  
  fputs("0066 signed start:57, iter:10, inc:-1, order:buj cmp:!=0               expected=\'9876543210\' >"
        ,stdout);
  __c = 0x39;
  do {
    putchar(__c);
    __c = __c + -1;
  } while (__c != 0x2f);
  puts("<");
  return 0;
}



undefined4 var0067_9876543210(void)

{
  int __c;
  
  fputs("0067 signed start:57, iter:10, inc:-1, order:buj cmp:< 0               expected=\'9876543210\' >"
        ,stdout);
  __c = 0x39;
  do {
    putchar(__c);
    __c = __c + -1;
  } while (0x2f < __c);
  puts("<");
  return 0;
}



undefined4 var0068_9876543210(void)

{
  int __c;
  
  fputs("0068 signed start:57, iter:10, inc:-1, order:buj cmp:<=0               expected=\'9876543210\' >"
        ,stdout);
  __c = 0x39;
  do {
    putchar(__c);
    __c = __c + -1;
  } while (0x2f < __c);
  puts("<");
  return 0;
}



undefined4 var0069_9876543210(void)

{
  int __c;
  
  fputs("0069 signed start:57, iter:10, inc:-1, order:bju cmp:!=0               expected=\'9876543210\' >"
        ,stdout);
  __c = 0x39;
  while( true ) {
    putchar(__c);
    if (__c == 0x30) break;
    __c = __c + -1;
  }
  puts("<");
  return 0;
}



undefined4 var0070_9876543210(void)

{
  int __c;
  
  fputs("0070 signed start:57, iter:10, inc:-1, order:bju cmp:< 0               expected=\'9876543210\' >"
        ,stdout);
  __c = 0x39;
  while( true ) {
    putchar(__c);
    if (__c < 0x31) break;
    __c = __c + -1;
  }
  puts("<");
  return 0;
}



undefined4 var0071_9876543210(void)

{
  int __c;
  
  fputs("0071 signed start:57, iter:10, inc:-1, order:bju cmp:<=0               expected=\'9876543210\' >"
        ,stdout);
  __c = 0x39;
  while( true ) {
    putchar(__c);
    if (__c < 0x31) break;
    __c = __c + -1;
  }
  puts("<");
  return 0;
}



undefined4 var0072_9876543210(void)

{
  int __c;
  
  fputs("0072 signed start:57, iter:10, inc:-1, order:ubj cmp:!=0               expected=\'9876543210\' >"
        ,stdout);
  __c = 0x3a;
  do {
    __c = __c + -1;
    putchar(__c);
  } while (__c != 0x30);
  puts("<");
  return 0;
}



undefined4 var0073_9876543210(void)

{
  int __c;
  
  fputs("0073 signed start:57, iter:10, inc:-1, order:ubj cmp:< 0               expected=\'9876543210\' >"
        ,stdout);
  __c = 0x3a;
  do {
    __c = __c + -1;
    putchar(__c);
  } while (0x30 < __c);
  puts("<");
  return 0;
}



undefined4 var0074_9876543210(void)

{
  int __c;
  
  fputs("0074 signed start:57, iter:10, inc:-1, order:ubj cmp:<=0               expected=\'9876543210\' >"
        ,stdout);
  __c = 0x3a;
  do {
    __c = __c + -1;
    putchar(__c);
  } while (0x30 < __c);
  puts("<");
  return 0;
}



undefined4 var0075_9876543210(void)

{
  int __c;
  
  fputs("0075 signed start:57, iter:10, inc:-1, order:ujb cmp:!=0               expected=\'9876543210\' >"
        ,stdout);
  __c = 0x3a;
  while (__c = __c + -1, __c != 0x2f) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0076_9876543210(void)

{
  int __c;
  
  fputs("0076 signed start:57, iter:10, inc:-1, order:ujb cmp:< 0               expected=\'9876543210\' >"
        ,stdout);
  __c = 0x3a;
  while (__c = __c + -1, 0x2f < __c) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0077_9876543210(void)

{
  int __c;
  
  fputs("0077 signed start:57, iter:10, inc:-1, order:ujb cmp:<=0               expected=\'9876543210\' >"
        ,stdout);
  __c = 0x3a;
  while (__c = __c + -1, 0x2f < __c) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0078_9876543210(void)

{
  int __c;
  
  fputs("0078 signed start:57, iter:10, inc:-1, order:jbu cmp:!=0               expected=\'9876543210\' >"
        ,stdout);
  for (__c = 0x39; __c != 0x2f; __c = __c + -1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0079_9876543210(void)

{
  int __c;
  
  fputs("0079 signed start:57, iter:10, inc:-1, order:jbu cmp:< 0               expected=\'9876543210\' >"
        ,stdout);
  for (__c = 0x39; 0x2f < __c; __c = __c + -1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0080_9876543210(void)

{
  int __c;
  
  fputs("0080 signed start:57, iter:10, inc:-1, order:jbu cmp:<=0               expected=\'9876543210\' >"
        ,stdout);
  for (__c = 0x39; 0x2f < __c; __c = __c + -1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0081_9876543210(void)

{
  int __c;
  
  fputs("0081 signed start:57, iter:10, inc:-1, order:jub cmp:!=0               expected=\'9876543210\' >"
        ,stdout);
  __c = 0x3a;
  while (__c != 0x30) {
    __c = __c + -1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0082_9876543210(void)

{
  int __c;
  
  fputs("0082 signed start:57, iter:10, inc:-1, order:jub cmp:< 0               expected=\'9876543210\' >"
        ,stdout);
  __c = 0x3a;
  while (0x30 < __c) {
    __c = __c + -1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0083_9876543210(void)

{
  int __c;
  
  fputs("0083 signed start:57, iter:10, inc:-1, order:jub cmp:<=0               expected=\'9876543210\' >"
        ,stdout);
  __c = 0x3a;
  while (0x30 < __c) {
    __c = __c + -1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0084_9876543210(void)

{
  uint uVar1;
  
  fputs("0084 signed start:100, iter:10, inc:-2, order:buj cmp:!=0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 100;
  do {
    putchar((uVar1 >> 1) + 7);
    uVar1 = uVar1 - 2;
  } while (uVar1 != 0x50);
  puts("<");
  return 0;
}



undefined4 var0085_9876543210(void)

{
  uint uVar1;
  
  fputs("0085 signed start:100, iter:10, inc:-2, order:buj cmp:< -1 exp:/2 +7   expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 100;
  do {
    putchar((uVar1 >> 1) + 7);
    uVar1 = uVar1 - 2;
  } while (0x51 < (int)uVar1);
  puts("<");
  return 0;
}



undefined4 var0086_9876543210(void)

{
  uint uVar1;
  
  fputs("0086 signed start:100, iter:10, inc:-2, order:buj cmp:< 0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 100;
  do {
    putchar((uVar1 >> 1) + 7);
    uVar1 = uVar1 - 2;
  } while (0x50 < (int)uVar1);
  puts("<");
  return 0;
}



undefined4 var0087_9876543210(void)

{
  uint uVar1;
  
  fputs("0087 signed start:100, iter:10, inc:-2, order:buj cmp:<=-1 exp:/2 +7   expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 100;
  do {
    putchar((uVar1 >> 1) + 7);
    uVar1 = uVar1 - 2;
  } while (0x51 < (int)uVar1);
  puts("<");
  return 0;
}



undefined4 var0088_9876543210(void)

{
  uint uVar1;
  
  fputs("0088 signed start:100, iter:10, inc:-2, order:buj cmp:<=0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 100;
  do {
    putchar((uVar1 >> 1) + 7);
    uVar1 = uVar1 - 2;
  } while (0x50 < (int)uVar1);
  puts("<");
  return 0;
}



undefined4 var0089_9876543210(void)

{
  uint uVar1;
  
  fputs("0089 signed start:100, iter:10, inc:-2, order:bju cmp:!=0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 100;
  while( true ) {
    putchar((uVar1 >> 1) + 7);
    if (uVar1 == 0x52) break;
    uVar1 = uVar1 - 2;
  }
  puts("<");
  return 0;
}



undefined4 var0090_9876543210(void)

{
  uint uVar1;
  
  fputs("0090 signed start:100, iter:10, inc:-2, order:bju cmp:< -1 exp:/2 +7   expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 100;
  while( true ) {
    putchar((uVar1 >> 1) + 7);
    if ((int)uVar1 < 0x54) break;
    uVar1 = uVar1 - 2;
  }
  puts("<");
  return 0;
}



undefined4 var0091_9876543210(void)

{
  uint uVar1;
  
  fputs("0091 signed start:100, iter:10, inc:-2, order:bju cmp:< 0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 100;
  while( true ) {
    putchar((uVar1 >> 1) + 7);
    if ((int)uVar1 < 0x53) break;
    uVar1 = uVar1 - 2;
  }
  puts("<");
  return 0;
}



undefined4 var0092_9876543210(void)

{
  uint uVar1;
  
  fputs("0092 signed start:100, iter:10, inc:-2, order:bju cmp:<=-1 exp:/2 +7   expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 100;
  while( true ) {
    putchar((uVar1 >> 1) + 7);
    if ((int)uVar1 < 0x54) break;
    uVar1 = uVar1 - 2;
  }
  puts("<");
  return 0;
}



undefined4 var0093_9876543210(void)

{
  uint uVar1;
  
  fputs("0093 signed start:100, iter:10, inc:-2, order:bju cmp:<=0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 100;
  while( true ) {
    putchar((uVar1 >> 1) + 7);
    if ((int)uVar1 < 0x53) break;
    uVar1 = uVar1 - 2;
  }
  puts("<");
  return 0;
}



undefined4 var0094_9876543210(void)

{
  uint uVar1;
  
  fputs("0094 signed start:100, iter:10, inc:-2, order:ubj cmp:!=0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 0x66;
  do {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  } while (uVar1 != 0x52);
  puts("<");
  return 0;
}



undefined4 var0095_9876543210(void)

{
  uint uVar1;
  
  fputs("0095 signed start:100, iter:10, inc:-2, order:ubj cmp:< -1 exp:/2 +7   expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 0x66;
  do {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  } while (0x53 < (int)uVar1);
  puts("<");
  return 0;
}



undefined4 var0096_9876543210(void)

{
  uint uVar1;
  
  fputs("0096 signed start:100, iter:10, inc:-2, order:ubj cmp:< 0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 0x66;
  do {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  } while (0x52 < (int)uVar1);
  puts("<");
  return 0;
}



undefined4 var0097_9876543210(void)

{
  uint uVar1;
  
  fputs("0097 signed start:100, iter:10, inc:-2, order:ubj cmp:<=-1 exp:/2 +7   expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 0x66;
  do {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  } while (0x53 < (int)uVar1);
  puts("<");
  return 0;
}



undefined4 var0098_9876543210(void)

{
  uint uVar1;
  
  fputs("0098 signed start:100, iter:10, inc:-2, order:ubj cmp:<=0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 0x66;
  do {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  } while (0x52 < (int)uVar1);
  puts("<");
  return 0;
}



undefined4 var0099_9876543210(void)

{
  uint uVar1;
  
  fputs("0099 signed start:100, iter:10, inc:-2, order:ujb cmp:!=0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 0x66;
  while (uVar1 = uVar1 - 2, uVar1 != 0x50) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0100_9876543210(void)

{
  uint uVar1;
  
  fputs("0100 signed start:100, iter:10, inc:-2, order:ujb cmp:< -1 exp:/2 +7   expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 0x66;
  while (uVar1 = uVar1 - 2, 0x51 < (int)uVar1) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0101_9876543210(void)

{
  uint uVar1;
  
  fputs("0101 signed start:100, iter:10, inc:-2, order:ujb cmp:< 0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 0x66;
  while (uVar1 = uVar1 - 2, 0x50 < (int)uVar1) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0102_9876543210(void)

{
  uint uVar1;
  
  fputs("0102 signed start:100, iter:10, inc:-2, order:ujb cmp:<=-1 exp:/2 +7   expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 0x66;
  while (uVar1 = uVar1 - 2, 0x51 < (int)uVar1) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0103_9876543210(void)

{
  uint uVar1;
  
  fputs("0103 signed start:100, iter:10, inc:-2, order:ujb cmp:<=0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 0x66;
  while (uVar1 = uVar1 - 2, 0x50 < (int)uVar1) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0104_9876543210(void)

{
  uint uVar1;
  
  fputs("0104 signed start:100, iter:10, inc:-2, order:jbu cmp:!=0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  for (uVar1 = 100; uVar1 != 0x50; uVar1 = uVar1 - 2) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0105_9876543210(void)

{
  uint uVar1;
  
  fputs("0105 signed start:100, iter:10, inc:-2, order:jbu cmp:< -1 exp:/2 +7   expected=\'9876543210\' >"
        ,stdout);
  for (uVar1 = 100; 0x51 < (int)uVar1; uVar1 = uVar1 - 2) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0106_9876543210(void)

{
  uint uVar1;
  
  fputs("0106 signed start:100, iter:10, inc:-2, order:jbu cmp:< 0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  for (uVar1 = 100; 0x50 < (int)uVar1; uVar1 = uVar1 - 2) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0107_9876543210(void)

{
  uint uVar1;
  
  fputs("0107 signed start:100, iter:10, inc:-2, order:jbu cmp:<=-1 exp:/2 +7   expected=\'9876543210\' >"
        ,stdout);
  for (uVar1 = 100; 0x51 < (int)uVar1; uVar1 = uVar1 - 2) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0108_9876543210(void)

{
  uint uVar1;
  
  fputs("0108 signed start:100, iter:10, inc:-2, order:jbu cmp:<=0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  for (uVar1 = 100; 0x50 < (int)uVar1; uVar1 = uVar1 - 2) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0109_9876543210(void)

{
  uint uVar1;
  
  fputs("0109 signed start:100, iter:10, inc:-2, order:jub cmp:!=0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 0x66;
  while (uVar1 != 0x52) {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0110_9876543210(void)

{
  uint uVar1;
  
  fputs("0110 signed start:100, iter:10, inc:-2, order:jub cmp:< -1 exp:/2 +7   expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 0x66;
  while (0x53 < (int)uVar1) {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0111_9876543210(void)

{
  uint uVar1;
  
  fputs("0111 signed start:100, iter:10, inc:-2, order:jub cmp:< 0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 0x66;
  while (0x52 < (int)uVar1) {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0112_9876543210(void)

{
  uint uVar1;
  
  fputs("0112 signed start:100, iter:10, inc:-2, order:jub cmp:<=-1 exp:/2 +7   expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 0x66;
  while (0x53 < (int)uVar1) {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0113_9876543210(void)

{
  uint uVar1;
  
  fputs("0113 signed start:100, iter:10, inc:-2, order:jub cmp:<=0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 0x66;
  while (0x52 < (int)uVar1) {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0114_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0114 signed start:0, iter:10, inc:+1, order:buj cmp:!=0 second:=48 +1  expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 0;
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 10);
  puts("<");
  return 0;
}



undefined4 var0115_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0115 signed start:0, iter:10, inc:+1, order:buj cmp:< 0 second:=48 +1  expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 0;
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 10);
  puts("<");
  return 0;
}



undefined4 var0116_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0116 signed start:0, iter:10, inc:+1, order:buj cmp:<=0 second:=48 +1  expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 0;
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 10);
  puts("<");
  return 0;
}



undefined4 var0117_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0117 signed start:0, iter:10, inc:+1, order:bju cmp:!=0 second:=48 +1  expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 0;
  __c = 0x30;
  while( true ) {
    putchar(__c);
    __c = __c + 1;
    if (iVar1 == 9) break;
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0118_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0118 signed start:0, iter:10, inc:+1, order:bju cmp:< 0 second:=48 +1  expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 0;
  __c = 0x30;
  while( true ) {
    putchar(__c);
    __c = __c + 1;
    if (8 < iVar1) break;
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0119_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0119 signed start:0, iter:10, inc:+1, order:bju cmp:<=0 second:=48 +1  expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 0;
  __c = 0x30;
  while( true ) {
    putchar(__c);
    __c = __c + 1;
    if (8 < iVar1) break;
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0120_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0120 signed start:0, iter:10, inc:+1, order:ubj cmp:!=0 second:=48 +1  expected=\'0123456789\' >"
        ,stdout);
  iVar1 = -1;
  __c = 0x30;
  do {
    iVar1 = iVar1 + 1;
    putchar(__c);
    __c = __c + 1;
  } while (iVar1 != 9);
  puts("<");
  return 0;
}



undefined4 var0121_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0121 signed start:0, iter:10, inc:+1, order:ubj cmp:< 0 second:=48 +1  expected=\'0123456789\' >"
        ,stdout);
  iVar1 = -1;
  __c = 0x30;
  do {
    iVar1 = iVar1 + 1;
    putchar(__c);
    __c = __c + 1;
  } while (iVar1 < 9);
  puts("<");
  return 0;
}



undefined4 var0122_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0122 signed start:0, iter:10, inc:+1, order:ubj cmp:<=0 second:=48 +1  expected=\'0123456789\' >"
        ,stdout);
  iVar1 = -1;
  __c = 0x30;
  do {
    iVar1 = iVar1 + 1;
    putchar(__c);
    __c = __c + 1;
  } while (iVar1 < 9);
  puts("<");
  return 0;
}



undefined4 var0123_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0123 signed start:0, iter:10, inc:+1, order:ujb cmp:!=0 second:=48 +1  expected=\'0123456789\' >"
        ,stdout);
  iVar1 = -1;
  __c = 0x30;
  while (iVar1 = iVar1 + 1, iVar1 != 10) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0124_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0124 signed start:0, iter:10, inc:+1, order:ujb cmp:< 0 second:=48 +1  expected=\'0123456789\' >"
        ,stdout);
  iVar1 = -1;
  __c = 0x30;
  while (iVar1 = iVar1 + 1, iVar1 < 10) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0125_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0125 signed start:0, iter:10, inc:+1, order:ujb cmp:<=0 second:=48 +1  expected=\'0123456789\' >"
        ,stdout);
  iVar1 = -1;
  __c = 0x30;
  while (iVar1 = iVar1 + 1, iVar1 < 10) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0126_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0126 signed start:0, iter:10, inc:+1, order:jbu cmp:!=0 second:=48 +1  expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  for (iVar1 = 0; iVar1 != 10; iVar1 = iVar1 + 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0127_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0127 signed start:0, iter:10, inc:+1, order:jbu cmp:< 0 second:=48 +1  expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  for (iVar1 = 0; iVar1 < 10; iVar1 = iVar1 + 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0128_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0128 signed start:0, iter:10, inc:+1, order:jbu cmp:<=0 second:=48 +1  expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  for (iVar1 = 0; iVar1 < 10; iVar1 = iVar1 + 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0129_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0129 signed start:0, iter:10, inc:+1, order:jub cmp:!=0 second:=48 +1  expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  for (iVar1 = -1; iVar1 != 9; iVar1 = iVar1 + 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0130_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0130 signed start:0, iter:10, inc:+1, order:jub cmp:< 0 second:=48 +1  expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  for (iVar1 = -1; iVar1 < 9; iVar1 = iVar1 + 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0131_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0131 signed start:0, iter:10, inc:+1, order:jub cmp:<=0 second:=48 +1  expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  for (iVar1 = -1; iVar1 < 9; iVar1 = iVar1 + 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0132_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0132 signed start:10, iter:10, inc:-1, order:buj cmp:!=0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 10;
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puts("<");
  return 0;
}



undefined4 var0133_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0133 signed start:10, iter:10, inc:-1, order:buj cmp:< 0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 10;
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
    iVar1 = iVar1 + -1;
  } while (0 < iVar1);
  puts("<");
  return 0;
}



undefined4 var0134_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0134 signed start:10, iter:10, inc:-1, order:buj cmp:<=0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 10;
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
    iVar1 = iVar1 + -1;
  } while (0 < iVar1);
  puts("<");
  return 0;
}



undefined4 var0135_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0135 signed start:10, iter:10, inc:-1, order:bju cmp:!=0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 10;
  __c = 0x30;
  while( true ) {
    putchar(__c);
    __c = __c + 1;
    if (iVar1 == 1) break;
    iVar1 = iVar1 + -1;
  }
  puts("<");
  return 0;
}



undefined4 var0136_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0136 signed start:10, iter:10, inc:-1, order:bju cmp:< 0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 10;
  __c = 0x30;
  while( true ) {
    putchar(__c);
    __c = __c + 1;
    if (iVar1 < 2) break;
    iVar1 = iVar1 + -1;
  }
  puts("<");
  return 0;
}



undefined4 var0137_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0137 signed start:10, iter:10, inc:-1, order:bju cmp:<=0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 10;
  __c = 0x30;
  while( true ) {
    putchar(__c);
    __c = __c + 1;
    if (iVar1 < 2) break;
    iVar1 = iVar1 + -1;
  }
  puts("<");
  return 0;
}



undefined4 var0138_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0138 signed start:10, iter:10, inc:-1, order:ubj cmp:!=0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 0xb;
  __c = 0x30;
  do {
    iVar1 = iVar1 + -1;
    putchar(__c);
    __c = __c + 1;
  } while (iVar1 != 1);
  puts("<");
  return 0;
}



undefined4 var0139_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0139 signed start:10, iter:10, inc:-1, order:ubj cmp:< 0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 0xb;
  __c = 0x30;
  do {
    iVar1 = iVar1 + -1;
    putchar(__c);
    __c = __c + 1;
  } while (1 < iVar1);
  puts("<");
  return 0;
}



undefined4 var0140_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0140 signed start:10, iter:10, inc:-1, order:ubj cmp:<=0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 0xb;
  __c = 0x30;
  do {
    iVar1 = iVar1 + -1;
    putchar(__c);
    __c = __c + 1;
  } while (1 < iVar1);
  puts("<");
  return 0;
}



undefined4 var0141_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0141 signed start:10, iter:10, inc:-1, order:ujb cmp:!=0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 0xb;
  __c = 0x30;
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0142_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0142 signed start:10, iter:10, inc:-1, order:ujb cmp:< 0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 0xb;
  __c = 0x30;
  while (iVar1 = iVar1 + -1, 0 < iVar1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0143_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0143 signed start:10, iter:10, inc:-1, order:ujb cmp:<=0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 0xb;
  __c = 0x30;
  while (iVar1 = iVar1 + -1, 0 < iVar1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0144_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0144 signed start:10, iter:10, inc:-1, order:jbu cmp:!=0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0145_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0145 signed start:10, iter:10, inc:-1, order:jbu cmp:< 0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  for (iVar1 = 10; 0 < iVar1; iVar1 = iVar1 + -1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0146_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0146 signed start:10, iter:10, inc:-1, order:jbu cmp:<=0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  for (iVar1 = 10; 0 < iVar1; iVar1 = iVar1 + -1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0147_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0147 signed start:10, iter:10, inc:-1, order:jub cmp:!=0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  for (iVar1 = 0xb; iVar1 != 1; iVar1 = iVar1 + -1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0148_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0148 signed start:10, iter:10, inc:-1, order:jub cmp:< 0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  for (iVar1 = 0xb; 1 < iVar1; iVar1 = iVar1 + -1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0149_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0149 signed start:10, iter:10, inc:-1, order:jub cmp:<=0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  for (iVar1 = 0xb; 1 < iVar1; iVar1 = iVar1 + -1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0150_0123456789(void)

{
  int iVar1;
  
  fputs("0150 signed start:-20, iter:10, inc:+1, order:buj cmp:!=0 exp:+68      expected=\'0123456789\' >"
        ,stdout);
  iVar1 = -0x14;
  do {
    putchar(iVar1 + 0x44);
    iVar1 = iVar1 + 1;
  } while (iVar1 != -10);
  puts("<");
  return 0;
}



undefined4 var0151_0123456789(void)

{
  int iVar1;
  
  fputs("0151 signed start:-20, iter:10, inc:+1, order:buj cmp:< 0 exp:+68      expected=\'0123456789\' >"
        ,stdout);
  iVar1 = -0x14;
  do {
    putchar(iVar1 + 0x44);
    iVar1 = iVar1 + 1;
  } while (iVar1 < -10);
  puts("<");
  return 0;
}



undefined4 var0152_0123456789(void)

{
  int iVar1;
  
  fputs("0152 signed start:-20, iter:10, inc:+1, order:buj cmp:<=0 exp:+68      expected=\'0123456789\' >"
        ,stdout);
  iVar1 = -0x14;
  do {
    putchar(iVar1 + 0x44);
    iVar1 = iVar1 + 1;
  } while (iVar1 < -10);
  puts("<");
  return 0;
}



undefined4 var0153_0123456789(void)

{
  int iVar1;
  
  fputs("0153 signed start:-20, iter:10, inc:+1, order:bju cmp:!=0 exp:+68      expected=\'0123456789\' >"
        ,stdout);
  iVar1 = -0x14;
  while( true ) {
    putchar(iVar1 + 0x44);
    if (iVar1 == -0xb) break;
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0154_0123456789(void)

{
  int iVar1;
  
  fputs("0154 signed start:-20, iter:10, inc:+1, order:bju cmp:< 0 exp:+68      expected=\'0123456789\' >"
        ,stdout);
  iVar1 = -0x14;
  while( true ) {
    putchar(iVar1 + 0x44);
    if (-0xc < iVar1) break;
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0155_0123456789(void)

{
  int iVar1;
  
  fputs("0155 signed start:-20, iter:10, inc:+1, order:bju cmp:<=0 exp:+68      expected=\'0123456789\' >"
        ,stdout);
  iVar1 = -0x14;
  while( true ) {
    putchar(iVar1 + 0x44);
    if (-0xc < iVar1) break;
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0156_0123456789(void)

{
  int iVar1;
  int iVar2;
  
  fputs("0156 signed start:-20, iter:10, inc:+1, order:ubj cmp:!=0 exp:+68      expected=\'0123456789\' >"
        ,stdout);
  iVar2 = -0x15;
  do {
    iVar1 = iVar2 + 1;
    putchar(iVar2 + 0x45);
    iVar2 = iVar1;
  } while (iVar1 != -0xb);
  puts("<");
  return 0;
}



undefined4 var0157_0123456789(void)

{
  int iVar1;
  int iVar2;
  
  fputs("0157 signed start:-20, iter:10, inc:+1, order:ubj cmp:< 0 exp:+68      expected=\'0123456789\' >"
        ,stdout);
  iVar2 = -0x15;
  do {
    iVar1 = iVar2 + 1;
    putchar(iVar2 + 0x45);
    iVar2 = iVar1;
  } while (iVar1 < -0xb);
  puts("<");
  return 0;
}



undefined4 var0158_0123456789(void)

{
  int iVar1;
  int iVar2;
  
  fputs("0158 signed start:-20, iter:10, inc:+1, order:ubj cmp:<=0 exp:+68      expected=\'0123456789\' >"
        ,stdout);
  iVar2 = -0x15;
  do {
    iVar1 = iVar2 + 1;
    putchar(iVar2 + 0x45);
    iVar2 = iVar1;
  } while (iVar1 < -0xb);
  puts("<");
  return 0;
}



undefined4 var0159_0123456789(void)

{
  int iVar1;
  
  fputs("0159 signed start:-20, iter:10, inc:+1, order:ujb cmp:!=0 exp:+68      expected=\'0123456789\' >"
        ,stdout);
  iVar1 = -0x15;
  while (iVar1 + 1 != -10) {
    putchar(iVar1 + 0x45);
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0160_0123456789(void)

{
  int iVar1;
  
  fputs("0160 signed start:-20, iter:10, inc:+1, order:ujb cmp:< 0 exp:+68      expected=\'0123456789\' >"
        ,stdout);
  iVar1 = -0x15;
  while (iVar1 + 1 < -10) {
    putchar(iVar1 + 0x45);
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0161_0123456789(void)

{
  int iVar1;
  
  fputs("0161 signed start:-20, iter:10, inc:+1, order:ujb cmp:<=0 exp:+68      expected=\'0123456789\' >"
        ,stdout);
  iVar1 = -0x15;
  while (iVar1 + 1 < -10) {
    putchar(iVar1 + 0x45);
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0162_0123456789(void)

{
  int iVar1;
  
  fputs("0162 signed start:-20, iter:10, inc:+1, order:jbu cmp:!=0 exp:+68      expected=\'0123456789\' >"
        ,stdout);
  for (iVar1 = -0x14; iVar1 != -10; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x44);
  }
  puts("<");
  return 0;
}



undefined4 var0163_0123456789(void)

{
  int iVar1;
  
  fputs("0163 signed start:-20, iter:10, inc:+1, order:jbu cmp:< 0 exp:+68      expected=\'0123456789\' >"
        ,stdout);
  for (iVar1 = -0x14; iVar1 < -10; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x44);
  }
  puts("<");
  return 0;
}



undefined4 var0164_0123456789(void)

{
  int iVar1;
  
  fputs("0164 signed start:-20, iter:10, inc:+1, order:jbu cmp:<=0 exp:+68      expected=\'0123456789\' >"
        ,stdout);
  for (iVar1 = -0x14; iVar1 < -10; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x44);
  }
  puts("<");
  return 0;
}



undefined4 var0165_0123456789(void)

{
  int iVar1;
  
  fputs("0165 signed start:-20, iter:10, inc:+1, order:jub cmp:!=0 exp:+68      expected=\'0123456789\' >"
        ,stdout);
  for (iVar1 = -0x15; iVar1 != -0xb; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x45);
  }
  puts("<");
  return 0;
}



undefined4 var0166_0123456789(void)

{
  int iVar1;
  
  fputs("0166 signed start:-20, iter:10, inc:+1, order:jub cmp:< 0 exp:+68      expected=\'0123456789\' >"
        ,stdout);
  for (iVar1 = -0x15; iVar1 < -0xb; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x45);
  }
  puts("<");
  return 0;
}



undefined4 var0167_0123456789(void)

{
  int iVar1;
  
  fputs("0167 signed start:-20, iter:10, inc:+1, order:jub cmp:<=0 exp:+68      expected=\'0123456789\' >"
        ,stdout);
  for (iVar1 = -0x15; iVar1 < -0xb; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x45);
  }
  puts("<");
  return 0;
}



undefined4 var0168_0(void)

{
  int __c;
  
  fputs("0168 signed start:48, iter:1, inc:+1, order:buj cmp:!=0                expected=\'0\'   >",
        stdout);
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
  } while (__c != 0x31);
  puts("<");
  return 0;
}



undefined4 var0169_0(void)

{
  int __c;
  
  fputs("0169 signed start:48, iter:1, inc:+1, order:buj cmp:< 0                expected=\'0\'   >",
        stdout);
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
  } while (__c < 0x31);
  puts("<");
  return 0;
}



undefined4 var0170_0(void)

{
  int __c;
  
  fputs("0170 signed start:48, iter:1, inc:+1, order:buj cmp:<=0                expected=\'0\'   >",
        stdout);
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
  } while (__c < 0x31);
  puts("<");
  return 0;
}



undefined4 var0171_0(void)

{
  int __c;
  
  fputs("0171 signed start:48, iter:1, inc:+1, order:bju cmp:!=0                expected=\'0\'   >",
        stdout);
  __c = 0x30;
  while( true ) {
    putchar(__c);
    if (__c == 0x30) break;
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0172_0(void)

{
  int __c;
  
  fputs("0172 signed start:48, iter:1, inc:+1, order:bju cmp:< 0                expected=\'0\'   >",
        stdout);
  __c = 0x30;
  while( true ) {
    putchar(__c);
    if (0x2f < __c) break;
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0173_0(void)

{
  int __c;
  
  fputs("0173 signed start:48, iter:1, inc:+1, order:bju cmp:<=0                expected=\'0\'   >",
        stdout);
  __c = 0x30;
  while( true ) {
    putchar(__c);
    if (0x2f < __c) break;
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0174_0(void)

{
  int __c;
  
  fputs("0174 signed start:48, iter:1, inc:+1, order:ubj cmp:!=0                expected=\'0\'   >",
        stdout);
  __c = 0x2f;
  do {
    __c = __c + 1;
    putchar(__c);
  } while (__c != 0x30);
  puts("<");
  return 0;
}



undefined4 var0175_0(void)

{
  int __c;
  
  fputs("0175 signed start:48, iter:1, inc:+1, order:ubj cmp:< 0                expected=\'0\'   >",
        stdout);
  __c = 0x2f;
  do {
    __c = __c + 1;
    putchar(__c);
  } while (__c < 0x30);
  puts("<");
  return 0;
}



undefined4 var0176_0(void)

{
  int __c;
  
  fputs("0176 signed start:48, iter:1, inc:+1, order:ubj cmp:<=0                expected=\'0\'   >",
        stdout);
  __c = 0x2f;
  do {
    __c = __c + 1;
    putchar(__c);
  } while (__c < 0x30);
  puts("<");
  return 0;
}



undefined4 var0177_0(void)

{
  int __c;
  
  fputs("0177 signed start:48, iter:1, inc:+1, order:ujb cmp:!=0                expected=\'0\'   >",
        stdout);
  __c = 0x2f;
  while (__c = __c + 1, __c != 0x31) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0178_0(void)

{
  int __c;
  
  fputs("0178 signed start:48, iter:1, inc:+1, order:ujb cmp:< 0                expected=\'0\'   >",
        stdout);
  __c = 0x2f;
  while (__c = __c + 1, __c < 0x31) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0179_0(void)

{
  int __c;
  
  fputs("0179 signed start:48, iter:1, inc:+1, order:ujb cmp:<=0                expected=\'0\'   >",
        stdout);
  __c = 0x2f;
  while (__c = __c + 1, __c < 0x31) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0180_0(void)

{
  int __c;
  
  fputs("0180 signed start:48, iter:1, inc:+1, order:jbu cmp:!=0                expected=\'0\'   >",
        stdout);
  for (__c = 0x30; __c != 0x31; __c = __c + 1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0181_0(void)

{
  int __c;
  
  fputs("0181 signed start:48, iter:1, inc:+1, order:jbu cmp:< 0                expected=\'0\'   >",
        stdout);
  for (__c = 0x30; __c < 0x31; __c = __c + 1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0182_0(void)

{
  int __c;
  
  fputs("0182 signed start:48, iter:1, inc:+1, order:jbu cmp:<=0                expected=\'0\'   >",
        stdout);
  for (__c = 0x30; __c < 0x31; __c = __c + 1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0183_0(void)

{
  int __c;
  
  fputs("0183 signed start:48, iter:1, inc:+1, order:jub cmp:!=0                expected=\'0\'   >",
        stdout);
  __c = 0x2f;
  while (__c != 0x30) {
    __c = __c + 1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0184_0(void)

{
  int __c;
  
  fputs("0184 signed start:48, iter:1, inc:+1, order:jub cmp:< 0                expected=\'0\'   >",
        stdout);
  __c = 0x2f;
  while (__c < 0x30) {
    __c = __c + 1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0185_0(void)

{
  int __c;
  
  fputs("0185 signed start:48, iter:1, inc:+1, order:jub cmp:<=0                expected=\'0\'   >",
        stdout);
  __c = 0x2f;
  while (__c < 0x30) {
    __c = __c + 1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0186_0(void)

{
  int iVar1;
  
  fputs("0186 signed start:0, iter:1, inc:+1, order:buj cmp:!=0 exp:+48         expected=\'0\'   >",
        stdout);
  iVar1 = 0;
  do {
    putchar(iVar1 + 0x30);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 1);
  puts("<");
  return 0;
}



undefined4 var0187_0(void)

{
  int iVar1;
  
  fputs("0187 signed start:0, iter:1, inc:+1, order:buj cmp:< 0 exp:+48         expected=\'0\'   >",
        stdout);
  iVar1 = 0;
  do {
    putchar(iVar1 + 0x30);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 1);
  puts("<");
  return 0;
}



undefined4 var0188_0(void)

{
  int iVar1;
  
  fputs("0188 signed start:0, iter:1, inc:+1, order:buj cmp:<=0 exp:+48         expected=\'0\'   >",
        stdout);
  iVar1 = 0;
  do {
    putchar(iVar1 + 0x30);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 1);
  puts("<");
  return 0;
}



undefined4 var0189_0(void)

{
  int iVar1;
  
  fputs("0189 signed start:0, iter:1, inc:+1, order:bju cmp:!=0 exp:+48         expected=\'0\'   >",
        stdout);
  iVar1 = 0;
  while( true ) {
    putchar(iVar1 + 0x30);
    if (iVar1 == 0) break;
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0190_0(void)

{
  int iVar1;
  
  fputs("0190 signed start:0, iter:1, inc:+1, order:bju cmp:< 0 exp:+48         expected=\'0\'   >",
        stdout);
  iVar1 = 0;
  while( true ) {
    putchar(iVar1 + 0x30);
    if (-1 < iVar1) break;
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0191_0(void)

{
  uint uVar1;
  
  fputs("0191 signed start:0, iter:1, inc:+1, order:bju cmp:<=0 exp:+48         expected=\'0\'   >",
        stdout);
  uVar1 = 0;
  while( true ) {
    putchar(uVar1 + 0x30);
    if (uVar1 < 0x80000000) break;
    uVar1 = uVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0192_0(void)

{
  int iVar1;
  int iVar2;
  
  fputs("0192 signed start:0, iter:1, inc:+1, order:ubj cmp:!=0 exp:+48         expected=\'0\'   >",
        stdout);
  iVar2 = -1;
  do {
    iVar1 = iVar2 + 1;
    putchar(iVar2 + 0x31);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  puts("<");
  return 0;
}



undefined4 var0193_0(void)

{
  int iVar1;
  int iVar2;
  
  fputs("0193 signed start:0, iter:1, inc:+1, order:ubj cmp:< 0 exp:+48         expected=\'0\'   >",
        stdout);
  iVar2 = -1;
  do {
    iVar1 = iVar2 + 1;
    putchar(iVar2 + 0x31);
    iVar2 = iVar1;
  } while (iVar1 < 0);
  puts("<");
  return 0;
}



undefined4 var0194_0(void)

{
  int iVar1;
  int iVar2;
  
  fputs("0194 signed start:0, iter:1, inc:+1, order:ubj cmp:<=0 exp:+48         expected=\'0\'   >",
        stdout);
  iVar2 = -1;
  do {
    iVar1 = iVar2 + 1;
    putchar(iVar2 + 0x31);
    iVar2 = iVar1;
  } while (iVar1 < 0);
  puts("<");
  return 0;
}



undefined4 var0195_0(void)

{
  int iVar1;
  
  fputs("0195 signed start:0, iter:1, inc:+1, order:ujb cmp:!=0 exp:+48         expected=\'0\'   >",
        stdout);
  iVar1 = -1;
  while (iVar1 + 1 != 1) {
    putchar(iVar1 + 0x31);
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0196_0(void)

{
  int iVar1;
  
  fputs("0196 signed start:0, iter:1, inc:+1, order:ujb cmp:< 0 exp:+48         expected=\'0\'   >",
        stdout);
  iVar1 = -1;
  while (iVar1 + 1 < 1) {
    putchar(iVar1 + 0x31);
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0197_0(void)

{
  int iVar1;
  
  fputs("0197 signed start:0, iter:1, inc:+1, order:ujb cmp:<=0 exp:+48         expected=\'0\'   >",
        stdout);
  iVar1 = -1;
  while (iVar1 + 1 < 1) {
    putchar(iVar1 + 0x31);
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0198_0(void)

{
  int iVar1;
  
  fputs("0198 signed start:0, iter:1, inc:+1, order:jbu cmp:!=0 exp:+48         expected=\'0\'   >",
        stdout);
  for (iVar1 = 0; iVar1 != 1; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x30);
  }
  puts("<");
  return 0;
}



undefined4 var0199_0(void)

{
  int iVar1;
  
  fputs("0199 signed start:0, iter:1, inc:+1, order:jbu cmp:< 0 exp:+48         expected=\'0\'   >",
        stdout);
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x30);
  }
  puts("<");
  return 0;
}



undefined4 var0200_0(void)

{
  int iVar1;
  
  fputs("0200 signed start:0, iter:1, inc:+1, order:jbu cmp:<=0 exp:+48         expected=\'0\'   >",
        stdout);
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x30);
  }
  puts("<");
  return 0;
}



undefined4 var0201_0(void)

{
  int iVar1;
  
  fputs("0201 signed start:0, iter:1, inc:+1, order:jub cmp:!=0 exp:+48         expected=\'0\'   >",
        stdout);
  for (iVar1 = -1; iVar1 != 0; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x31);
  }
  puts("<");
  return 0;
}



undefined4 var0202_0(void)

{
  int iVar1;
  
  fputs("0202 signed start:0, iter:1, inc:+1, order:jub cmp:< 0 exp:+48         expected=\'0\'   >",
        stdout);
  for (iVar1 = -1; iVar1 < 0; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x31);
  }
  puts("<");
  return 0;
}



undefined4 var0203_0(void)

{
  uint uVar1;
  
  fputs("0203 signed start:0, iter:1, inc:+1, order:jub cmp:<=0 exp:+48         expected=\'0\'   >",
        stdout);
  for (uVar1 = 0xffffffff; 0x7fffffff < uVar1; uVar1 = uVar1 + 1) {
    putchar(uVar1 + 0x31);
  }
  puts("<");
  return 0;
}



undefined4 var0204_0(void)

{
  uint uVar1;
  
  fputs("0204 signed start:16, iter:1, inc:+2, order:buj cmp:!=0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0x10;
  do {
    putchar((uVar1 >> 1) + 0x28);
    uVar1 = uVar1 + 2;
  } while (uVar1 != 0x12);
  puts("<");
  return 0;
}



undefined4 var0205_0(void)

{
  uint uVar1;
  
  fputs("0205 signed start:16, iter:1, inc:+2, order:buj cmp:< 0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0x10;
  do {
    putchar((uVar1 >> 1) + 0x28);
    uVar1 = uVar1 + 2;
  } while ((int)uVar1 < 0x12);
  puts("<");
  return 0;
}



undefined4 var0206_0(void)

{
  uint uVar1;
  
  fputs("0206 signed start:16, iter:1, inc:+2, order:buj cmp:< 1 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0x10;
  do {
    putchar((uVar1 >> 1) + 0x28);
    uVar1 = uVar1 + 2;
  } while ((int)uVar1 < 0x11);
  puts("<");
  return 0;
}



undefined4 var0207_0(void)

{
  uint uVar1;
  
  fputs("0207 signed start:16, iter:1, inc:+2, order:buj cmp:<=0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0x10;
  do {
    putchar((uVar1 >> 1) + 0x28);
    uVar1 = uVar1 + 2;
  } while ((int)uVar1 < 0x12);
  puts("<");
  return 0;
}



undefined4 var0208_0(void)

{
  uint uVar1;
  
  fputs("0208 signed start:16, iter:1, inc:+2, order:buj cmp:<=1 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0x10;
  do {
    putchar((uVar1 >> 1) + 0x28);
    uVar1 = uVar1 + 2;
  } while ((int)uVar1 < 0x11);
  puts("<");
  return 0;
}



undefined4 var0209_0(void)

{
  uint uVar1;
  
  fputs("0209 signed start:16, iter:1, inc:+2, order:bju cmp:!=0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0x10;
  while( true ) {
    putchar((uVar1 >> 1) + 0x28);
    if (uVar1 == 0x10) break;
    uVar1 = uVar1 + 2;
  }
  puts("<");
  return 0;
}



undefined4 var0210_0(void)

{
  uint uVar1;
  
  fputs("0210 signed start:16, iter:1, inc:+2, order:bju cmp:< 0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0x10;
  while( true ) {
    putchar((uVar1 >> 1) + 0x28);
    if (0xf < (int)uVar1) break;
    uVar1 = uVar1 + 2;
  }
  puts("<");
  return 0;
}



undefined4 var0211_0(void)

{
  uint uVar1;
  
  fputs("0211 signed start:16, iter:1, inc:+2, order:bju cmp:< 1 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0x10;
  while( true ) {
    putchar((uVar1 >> 1) + 0x28);
    if (0xe < (int)uVar1) break;
    uVar1 = uVar1 + 2;
  }
  puts("<");
  return 0;
}



undefined4 var0212_0(void)

{
  uint uVar1;
  
  fputs("0212 signed start:16, iter:1, inc:+2, order:bju cmp:<=0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0x10;
  while( true ) {
    putchar((uVar1 >> 1) + 0x28);
    if (0xf < (int)uVar1) break;
    uVar1 = uVar1 + 2;
  }
  puts("<");
  return 0;
}



undefined4 var0213_0(void)

{
  uint uVar1;
  
  fputs("0213 signed start:16, iter:1, inc:+2, order:bju cmp:<=1 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0x10;
  while( true ) {
    putchar((uVar1 >> 1) + 0x28);
    if (0xe < (int)uVar1) break;
    uVar1 = uVar1 + 2;
  }
  puts("<");
  return 0;
}



undefined4 var0214_0(void)

{
  uint uVar1;
  
  fputs("0214 signed start:16, iter:1, inc:+2, order:ubj cmp:!=0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0xe;
  do {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  } while (uVar1 != 0x10);
  puts("<");
  return 0;
}



undefined4 var0215_0(void)

{
  uint uVar1;
  
  fputs("0215 signed start:16, iter:1, inc:+2, order:ubj cmp:< 0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0xe;
  do {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  } while ((int)uVar1 < 0x10);
  puts("<");
  return 0;
}



undefined4 var0216_0(void)

{
  uint uVar1;
  
  fputs("0216 signed start:16, iter:1, inc:+2, order:ubj cmp:< 1 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0xe;
  do {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  } while ((int)uVar1 < 0xf);
  puts("<");
  return 0;
}



undefined4 var0217_0(void)

{
  uint uVar1;
  
  fputs("0217 signed start:16, iter:1, inc:+2, order:ubj cmp:<=0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0xe;
  do {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  } while ((int)uVar1 < 0x10);
  puts("<");
  return 0;
}



undefined4 var0218_0(void)

{
  uint uVar1;
  
  fputs("0218 signed start:16, iter:1, inc:+2, order:ubj cmp:<=1 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0xe;
  do {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  } while ((int)uVar1 < 0xf);
  puts("<");
  return 0;
}



undefined4 var0219_0(void)

{
  uint uVar1;
  
  fputs("0219 signed start:16, iter:1, inc:+2, order:ujb cmp:!=0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0xe;
  while (uVar1 = uVar1 + 2, uVar1 != 0x12) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0220_0(void)

{
  uint uVar1;
  
  fputs("0220 signed start:16, iter:1, inc:+2, order:ujb cmp:< 0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0xe;
  while (uVar1 = uVar1 + 2, (int)uVar1 < 0x12) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0221_0(void)

{
  uint uVar1;
  
  fputs("0221 signed start:16, iter:1, inc:+2, order:ujb cmp:< 1 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0xe;
  while (uVar1 = uVar1 + 2, (int)uVar1 < 0x11) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0222_0(void)

{
  uint uVar1;
  
  fputs("0222 signed start:16, iter:1, inc:+2, order:ujb cmp:<=0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0xe;
  while (uVar1 = uVar1 + 2, (int)uVar1 < 0x12) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0223_0(void)

{
  uint uVar1;
  
  fputs("0223 signed start:16, iter:1, inc:+2, order:ujb cmp:<=1 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0xe;
  while (uVar1 = uVar1 + 2, (int)uVar1 < 0x11) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0224_0(void)

{
  uint uVar1;
  
  fputs("0224 signed start:16, iter:1, inc:+2, order:jbu cmp:!=0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  for (uVar1 = 0x10; uVar1 != 0x12; uVar1 = uVar1 + 2) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0225_0(void)

{
  uint uVar1;
  
  fputs("0225 signed start:16, iter:1, inc:+2, order:jbu cmp:< 0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  for (uVar1 = 0x10; (int)uVar1 < 0x12; uVar1 = uVar1 + 2) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0226_0(void)

{
  uint uVar1;
  
  fputs("0226 signed start:16, iter:1, inc:+2, order:jbu cmp:< 1 exp:/2 +40     expected=\'0\'   >",
        stdout);
  for (uVar1 = 0x10; (int)uVar1 < 0x11; uVar1 = uVar1 + 2) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0227_0(void)

{
  uint uVar1;
  
  fputs("0227 signed start:16, iter:1, inc:+2, order:jbu cmp:<=0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  for (uVar1 = 0x10; (int)uVar1 < 0x12; uVar1 = uVar1 + 2) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0228_0(void)

{
  uint uVar1;
  
  fputs("0228 signed start:16, iter:1, inc:+2, order:jbu cmp:<=1 exp:/2 +40     expected=\'0\'   >",
        stdout);
  for (uVar1 = 0x10; (int)uVar1 < 0x11; uVar1 = uVar1 + 2) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0229_0(void)

{
  uint uVar1;
  
  fputs("0229 signed start:16, iter:1, inc:+2, order:jub cmp:!=0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0xe;
  while (uVar1 != 0x10) {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0230_0(void)

{
  uint uVar1;
  
  fputs("0230 signed start:16, iter:1, inc:+2, order:jub cmp:< 0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0xe;
  while ((int)uVar1 < 0x10) {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0231_0(void)

{
  uint uVar1;
  
  fputs("0231 signed start:16, iter:1, inc:+2, order:jub cmp:< 1 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0xe;
  while ((int)uVar1 < 0xf) {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0232_0(void)

{
  uint uVar1;
  
  fputs("0232 signed start:16, iter:1, inc:+2, order:jub cmp:<=0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0xe;
  while ((int)uVar1 < 0x10) {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0233_0(void)

{
  uint uVar1;
  
  fputs("0233 signed start:16, iter:1, inc:+2, order:jub cmp:<=1 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0xe;
  while ((int)uVar1 < 0xf) {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0234_9(void)

{
  int __c;
  
  fputs("0234 signed start:57, iter:1, inc:-1, order:buj cmp:!=0                expected=\'9\'   >",
        stdout);
  __c = 0x39;
  do {
    putchar(__c);
    __c = __c + -1;
  } while (__c != 0x38);
  puts("<");
  return 0;
}



undefined4 var0235_9(void)

{
  int __c;
  
  fputs("0235 signed start:57, iter:1, inc:-1, order:buj cmp:< 0                expected=\'9\'   >",
        stdout);
  __c = 0x39;
  do {
    putchar(__c);
    __c = __c + -1;
  } while (0x38 < __c);
  puts("<");
  return 0;
}



undefined4 var0236_9(void)

{
  int __c;
  
  fputs("0236 signed start:57, iter:1, inc:-1, order:buj cmp:<=0                expected=\'9\'   >",
        stdout);
  __c = 0x39;
  do {
    putchar(__c);
    __c = __c + -1;
  } while (0x38 < __c);
  puts("<");
  return 0;
}



undefined4 var0237_9(void)

{
  int __c;
  
  fputs("0237 signed start:57, iter:1, inc:-1, order:bju cmp:!=0                expected=\'9\'   >",
        stdout);
  __c = 0x39;
  while( true ) {
    putchar(__c);
    if (__c == 0x39) break;
    __c = __c + -1;
  }
  puts("<");
  return 0;
}



undefined4 var0238_9(void)

{
  int __c;
  
  fputs("0238 signed start:57, iter:1, inc:-1, order:bju cmp:< 0                expected=\'9\'   >",
        stdout);
  __c = 0x39;
  while( true ) {
    putchar(__c);
    if (__c < 0x3a) break;
    __c = __c + -1;
  }
  puts("<");
  return 0;
}



undefined4 var0239_9(void)

{
  int __c;
  
  fputs("0239 signed start:57, iter:1, inc:-1, order:bju cmp:<=0                expected=\'9\'   >",
        stdout);
  __c = 0x39;
  while( true ) {
    putchar(__c);
    if (__c < 0x3a) break;
    __c = __c + -1;
  }
  puts("<");
  return 0;
}



undefined4 var0240_9(void)

{
  int __c;
  
  fputs("0240 signed start:57, iter:1, inc:-1, order:ubj cmp:!=0                expected=\'9\'   >",
        stdout);
  __c = 0x3a;
  do {
    __c = __c + -1;
    putchar(__c);
  } while (__c != 0x39);
  puts("<");
  return 0;
}



undefined4 var0241_9(void)

{
  int __c;
  
  fputs("0241 signed start:57, iter:1, inc:-1, order:ubj cmp:< 0                expected=\'9\'   >",
        stdout);
  __c = 0x3a;
  do {
    __c = __c + -1;
    putchar(__c);
  } while (0x39 < __c);
  puts("<");
  return 0;
}



undefined4 var0242_9(void)

{
  int __c;
  
  fputs("0242 signed start:57, iter:1, inc:-1, order:ubj cmp:<=0                expected=\'9\'   >",
        stdout);
  __c = 0x3a;
  do {
    __c = __c + -1;
    putchar(__c);
  } while (0x39 < __c);
  puts("<");
  return 0;
}



undefined4 var0243_9(void)

{
  int __c;
  
  fputs("0243 signed start:57, iter:1, inc:-1, order:ujb cmp:!=0                expected=\'9\'   >",
        stdout);
  __c = 0x3a;
  while (__c = __c + -1, __c != 0x38) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0244_9(void)

{
  int __c;
  
  fputs("0244 signed start:57, iter:1, inc:-1, order:ujb cmp:< 0                expected=\'9\'   >",
        stdout);
  __c = 0x3a;
  while (__c = __c + -1, 0x38 < __c) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0245_9(void)

{
  int __c;
  
  fputs("0245 signed start:57, iter:1, inc:-1, order:ujb cmp:<=0                expected=\'9\'   >",
        stdout);
  __c = 0x3a;
  while (__c = __c + -1, 0x38 < __c) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0246_9(void)

{
  int __c;
  
  fputs("0246 signed start:57, iter:1, inc:-1, order:jbu cmp:!=0                expected=\'9\'   >",
        stdout);
  for (__c = 0x39; __c != 0x38; __c = __c + -1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0247_9(void)

{
  int __c;
  
  fputs("0247 signed start:57, iter:1, inc:-1, order:jbu cmp:< 0                expected=\'9\'   >",
        stdout);
  for (__c = 0x39; 0x38 < __c; __c = __c + -1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0248_9(void)

{
  int __c;
  
  fputs("0248 signed start:57, iter:1, inc:-1, order:jbu cmp:<=0                expected=\'9\'   >",
        stdout);
  for (__c = 0x39; 0x38 < __c; __c = __c + -1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0249_9(void)

{
  int __c;
  
  fputs("0249 signed start:57, iter:1, inc:-1, order:jub cmp:!=0                expected=\'9\'   >",
        stdout);
  __c = 0x3a;
  while (__c != 0x39) {
    __c = __c + -1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0250_9(void)

{
  int __c;
  
  fputs("0250 signed start:57, iter:1, inc:-1, order:jub cmp:< 0                expected=\'9\'   >",
        stdout);
  __c = 0x3a;
  while (0x39 < __c) {
    __c = __c + -1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0251_9(void)

{
  int __c;
  
  fputs("0251 signed start:57, iter:1, inc:-1, order:jub cmp:<=0                expected=\'9\'   >",
        stdout);
  __c = 0x3a;
  while (0x39 < __c) {
    __c = __c + -1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0252_9(void)

{
  uint uVar1;
  
  fputs("0252 signed start:100, iter:1, inc:-2, order:buj cmp:!=0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  uVar1 = 100;
  do {
    putchar((uVar1 >> 1) + 7);
    uVar1 = uVar1 - 2;
  } while (uVar1 != 0x62);
  puts("<");
  return 0;
}



undefined4 var0253_9(void)

{
  uint uVar1;
  
  fputs("0253 signed start:100, iter:1, inc:-2, order:buj cmp:< -1 exp:/2 +7    expected=\'9\'   >",
        stdout);
  uVar1 = 100;
  do {
    putchar((uVar1 >> 1) + 7);
    uVar1 = uVar1 - 2;
  } while (99 < (int)uVar1);
  puts("<");
  return 0;
}



undefined4 var0254_9(void)

{
  uint uVar1;
  
  fputs("0254 signed start:100, iter:1, inc:-2, order:buj cmp:< 0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  uVar1 = 100;
  do {
    putchar((uVar1 >> 1) + 7);
    uVar1 = uVar1 - 2;
  } while (0x62 < (int)uVar1);
  puts("<");
  return 0;
}



undefined4 var0255_9(void)

{
  uint uVar1;
  
  fputs("0255 signed start:100, iter:1, inc:-2, order:buj cmp:<=-1 exp:/2 +7    expected=\'9\'   >",
        stdout);
  uVar1 = 100;
  do {
    putchar((uVar1 >> 1) + 7);
    uVar1 = uVar1 - 2;
  } while (99 < (int)uVar1);
  puts("<");
  return 0;
}



undefined4 var0256_9(void)

{
  uint uVar1;
  
  fputs("0256 signed start:100, iter:1, inc:-2, order:buj cmp:<=0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  uVar1 = 100;
  do {
    putchar((uVar1 >> 1) + 7);
    uVar1 = uVar1 - 2;
  } while (0x62 < (int)uVar1);
  puts("<");
  return 0;
}



undefined4 var0257_9(void)

{
  uint uVar1;
  
  fputs("0257 signed start:100, iter:1, inc:-2, order:bju cmp:!=0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  uVar1 = 100;
  while( true ) {
    putchar((uVar1 >> 1) + 7);
    if (uVar1 == 100) break;
    uVar1 = uVar1 - 2;
  }
  puts("<");
  return 0;
}



undefined4 var0258_9(void)

{
  uint uVar1;
  
  fputs("0258 signed start:100, iter:1, inc:-2, order:bju cmp:< -1 exp:/2 +7    expected=\'9\'   >",
        stdout);
  uVar1 = 100;
  while( true ) {
    putchar((uVar1 >> 1) + 7);
    if ((int)uVar1 < 0x66) break;
    uVar1 = uVar1 - 2;
  }
  puts("<");
  return 0;
}



undefined4 var0259_9(void)

{
  uint uVar1;
  
  fputs("0259 signed start:100, iter:1, inc:-2, order:bju cmp:< 0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  uVar1 = 100;
  while( true ) {
    putchar((uVar1 >> 1) + 7);
    if ((int)uVar1 < 0x65) break;
    uVar1 = uVar1 - 2;
  }
  puts("<");
  return 0;
}



undefined4 var0260_9(void)

{
  uint uVar1;
  
  fputs("0260 signed start:100, iter:1, inc:-2, order:bju cmp:<=-1 exp:/2 +7    expected=\'9\'   >",
        stdout);
  uVar1 = 100;
  while( true ) {
    putchar((uVar1 >> 1) + 7);
    if ((int)uVar1 < 0x66) break;
    uVar1 = uVar1 - 2;
  }
  puts("<");
  return 0;
}



undefined4 var0261_9(void)

{
  uint uVar1;
  
  fputs("0261 signed start:100, iter:1, inc:-2, order:bju cmp:<=0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  uVar1 = 100;
  while( true ) {
    putchar((uVar1 >> 1) + 7);
    if ((int)uVar1 < 0x65) break;
    uVar1 = uVar1 - 2;
  }
  puts("<");
  return 0;
}



undefined4 var0262_9(void)

{
  uint uVar1;
  
  fputs("0262 signed start:100, iter:1, inc:-2, order:ubj cmp:!=0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  uVar1 = 0x66;
  do {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  } while (uVar1 != 100);
  puts("<");
  return 0;
}



undefined4 var0263_9(void)

{
  uint uVar1;
  
  fputs("0263 signed start:100, iter:1, inc:-2, order:ubj cmp:< -1 exp:/2 +7    expected=\'9\'   >",
        stdout);
  uVar1 = 0x66;
  do {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  } while (0x65 < (int)uVar1);
  puts("<");
  return 0;
}



undefined4 var0264_9(void)

{
  uint uVar1;
  
  fputs("0264 signed start:100, iter:1, inc:-2, order:ubj cmp:< 0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  uVar1 = 0x66;
  do {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  } while (100 < (int)uVar1);
  puts("<");
  return 0;
}



undefined4 var0265_9(void)

{
  uint uVar1;
  
  fputs("0265 signed start:100, iter:1, inc:-2, order:ubj cmp:<=-1 exp:/2 +7    expected=\'9\'   >",
        stdout);
  uVar1 = 0x66;
  do {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  } while (0x65 < (int)uVar1);
  puts("<");
  return 0;
}



undefined4 var0266_9(void)

{
  uint uVar1;
  
  fputs("0266 signed start:100, iter:1, inc:-2, order:ubj cmp:<=0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  uVar1 = 0x66;
  do {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  } while (100 < (int)uVar1);
  puts("<");
  return 0;
}



undefined4 var0267_9(void)

{
  uint uVar1;
  
  fputs("0267 signed start:100, iter:1, inc:-2, order:ujb cmp:!=0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  uVar1 = 0x66;
  while (uVar1 = uVar1 - 2, uVar1 != 0x62) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0268_9(void)

{
  uint uVar1;
  
  fputs("0268 signed start:100, iter:1, inc:-2, order:ujb cmp:< -1 exp:/2 +7    expected=\'9\'   >",
        stdout);
  uVar1 = 0x66;
  while (uVar1 = uVar1 - 2, 99 < (int)uVar1) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0269_9(void)

{
  uint uVar1;
  
  fputs("0269 signed start:100, iter:1, inc:-2, order:ujb cmp:< 0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  uVar1 = 0x66;
  while (uVar1 = uVar1 - 2, 0x62 < (int)uVar1) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0270_9(void)

{
  uint uVar1;
  
  fputs("0270 signed start:100, iter:1, inc:-2, order:ujb cmp:<=-1 exp:/2 +7    expected=\'9\'   >",
        stdout);
  uVar1 = 0x66;
  while (uVar1 = uVar1 - 2, 99 < (int)uVar1) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0271_9(void)

{
  uint uVar1;
  
  fputs("0271 signed start:100, iter:1, inc:-2, order:ujb cmp:<=0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  uVar1 = 0x66;
  while (uVar1 = uVar1 - 2, 0x62 < (int)uVar1) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0272_9(void)

{
  uint uVar1;
  
  fputs("0272 signed start:100, iter:1, inc:-2, order:jbu cmp:!=0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  for (uVar1 = 100; uVar1 != 0x62; uVar1 = uVar1 - 2) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0273_9(void)

{
  uint uVar1;
  
  fputs("0273 signed start:100, iter:1, inc:-2, order:jbu cmp:< -1 exp:/2 +7    expected=\'9\'   >",
        stdout);
  for (uVar1 = 100; 99 < (int)uVar1; uVar1 = uVar1 - 2) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0274_9(void)

{
  uint uVar1;
  
  fputs("0274 signed start:100, iter:1, inc:-2, order:jbu cmp:< 0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  for (uVar1 = 100; 0x62 < (int)uVar1; uVar1 = uVar1 - 2) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0275_9(void)

{
  uint uVar1;
  
  fputs("0275 signed start:100, iter:1, inc:-2, order:jbu cmp:<=-1 exp:/2 +7    expected=\'9\'   >",
        stdout);
  for (uVar1 = 100; 99 < (int)uVar1; uVar1 = uVar1 - 2) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0276_9(void)

{
  uint uVar1;
  
  fputs("0276 signed start:100, iter:1, inc:-2, order:jbu cmp:<=0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  for (uVar1 = 100; 0x62 < (int)uVar1; uVar1 = uVar1 - 2) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0277_9(void)

{
  uint uVar1;
  
  fputs("0277 signed start:100, iter:1, inc:-2, order:jub cmp:!=0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  uVar1 = 0x66;
  while (uVar1 != 100) {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0278_9(void)

{
  uint uVar1;
  
  fputs("0278 signed start:100, iter:1, inc:-2, order:jub cmp:< -1 exp:/2 +7    expected=\'9\'   >",
        stdout);
  uVar1 = 0x66;
  while (0x65 < (int)uVar1) {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0279_9(void)

{
  uint uVar1;
  
  fputs("0279 signed start:100, iter:1, inc:-2, order:jub cmp:< 0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  uVar1 = 0x66;
  while (100 < (int)uVar1) {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0280_9(void)

{
  uint uVar1;
  
  fputs("0280 signed start:100, iter:1, inc:-2, order:jub cmp:<=-1 exp:/2 +7    expected=\'9\'   >",
        stdout);
  uVar1 = 0x66;
  while (0x65 < (int)uVar1) {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0281_9(void)

{
  uint uVar1;
  
  fputs("0281 signed start:100, iter:1, inc:-2, order:jub cmp:<=0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  uVar1 = 0x66;
  while (100 < (int)uVar1) {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0282_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0282 signed start:0, iter:1, inc:+1, order:buj cmp:!=0 second:=48 +1   expected=\'0\'   >",
        stdout);
  iVar1 = 0;
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 1);
  puts("<");
  return 0;
}



undefined4 var0283_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0283 signed start:0, iter:1, inc:+1, order:buj cmp:< 0 second:=48 +1   expected=\'0\'   >",
        stdout);
  iVar1 = 0;
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 1);
  puts("<");
  return 0;
}



undefined4 var0284_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0284 signed start:0, iter:1, inc:+1, order:buj cmp:<=0 second:=48 +1   expected=\'0\'   >",
        stdout);
  iVar1 = 0;
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 1);
  puts("<");
  return 0;
}



undefined4 var0285_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0285 signed start:0, iter:1, inc:+1, order:bju cmp:!=0 second:=48 +1   expected=\'0\'   >",
        stdout);
  iVar1 = 0;
  __c = 0x30;
  while( true ) {
    putchar(__c);
    __c = __c + 1;
    if (iVar1 == 0) break;
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0286_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0286 signed start:0, iter:1, inc:+1, order:bju cmp:< 0 second:=48 +1   expected=\'0\'   >",
        stdout);
  iVar1 = 0;
  __c = 0x30;
  while( true ) {
    putchar(__c);
    __c = __c + 1;
    if (-1 < iVar1) break;
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0287_0(void)

{
  uint uVar1;
  int __c;
  
  fputs("0287 signed start:0, iter:1, inc:+1, order:bju cmp:<=0 second:=48 +1   expected=\'0\'   >",
        stdout);
  uVar1 = 0;
  __c = 0x30;
  while( true ) {
    putchar(__c);
    __c = __c + 1;
    if (uVar1 < 0x80000000) break;
    uVar1 = uVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0288_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0288 signed start:0, iter:1, inc:+1, order:ubj cmp:!=0 second:=48 +1   expected=\'0\'   >",
        stdout);
  iVar1 = -1;
  __c = 0x30;
  do {
    iVar1 = iVar1 + 1;
    putchar(__c);
    __c = __c + 1;
  } while (iVar1 != 0);
  puts("<");
  return 0;
}



undefined4 var0289_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0289 signed start:0, iter:1, inc:+1, order:ubj cmp:< 0 second:=48 +1   expected=\'0\'   >",
        stdout);
  iVar1 = -1;
  __c = 0x30;
  do {
    iVar1 = iVar1 + 1;
    putchar(__c);
    __c = __c + 1;
  } while (iVar1 < 0);
  puts("<");
  return 0;
}



undefined4 var0290_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0290 signed start:0, iter:1, inc:+1, order:ubj cmp:<=0 second:=48 +1   expected=\'0\'   >",
        stdout);
  iVar1 = -1;
  __c = 0x30;
  do {
    iVar1 = iVar1 + 1;
    putchar(__c);
    __c = __c + 1;
  } while (iVar1 < 0);
  puts("<");
  return 0;
}



undefined4 var0291_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0291 signed start:0, iter:1, inc:+1, order:ujb cmp:!=0 second:=48 +1   expected=\'0\'   >",
        stdout);
  iVar1 = -1;
  __c = 0x30;
  while (iVar1 = iVar1 + 1, iVar1 != 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0292_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0292 signed start:0, iter:1, inc:+1, order:ujb cmp:< 0 second:=48 +1   expected=\'0\'   >",
        stdout);
  iVar1 = -1;
  __c = 0x30;
  while (iVar1 = iVar1 + 1, iVar1 < 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0293_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0293 signed start:0, iter:1, inc:+1, order:ujb cmp:<=0 second:=48 +1   expected=\'0\'   >",
        stdout);
  iVar1 = -1;
  __c = 0x30;
  while (iVar1 = iVar1 + 1, iVar1 < 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0294_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0294 signed start:0, iter:1, inc:+1, order:jbu cmp:!=0 second:=48 +1   expected=\'0\'   >",
        stdout);
  __c = 0x30;
  for (iVar1 = 0; iVar1 != 1; iVar1 = iVar1 + 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0295_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0295 signed start:0, iter:1, inc:+1, order:jbu cmp:< 0 second:=48 +1   expected=\'0\'   >",
        stdout);
  __c = 0x30;
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0296_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0296 signed start:0, iter:1, inc:+1, order:jbu cmp:<=0 second:=48 +1   expected=\'0\'   >",
        stdout);
  __c = 0x30;
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0297_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0297 signed start:0, iter:1, inc:+1, order:jub cmp:!=0 second:=48 +1   expected=\'0\'   >",
        stdout);
  __c = 0x30;
  for (iVar1 = -1; iVar1 != 0; iVar1 = iVar1 + 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0298_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0298 signed start:0, iter:1, inc:+1, order:jub cmp:< 0 second:=48 +1   expected=\'0\'   >",
        stdout);
  __c = 0x30;
  for (iVar1 = -1; iVar1 < 0; iVar1 = iVar1 + 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0299_0(void)

{
  uint uVar1;
  int __c;
  
  fputs("0299 signed start:0, iter:1, inc:+1, order:jub cmp:<=0 second:=48 +1   expected=\'0\'   >",
        stdout);
  __c = 0x30;
  for (uVar1 = 0xffffffff; 0x7fffffff < uVar1; uVar1 = uVar1 + 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0300_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0300 signed start:10, iter:1, inc:-1, order:buj cmp:!=0 second:=48 +1  expected=\'0\'   >",
        stdout);
  iVar1 = 10;
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 9);
  puts("<");
  return 0;
}



undefined4 var0301_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0301 signed start:10, iter:1, inc:-1, order:buj cmp:< 0 second:=48 +1  expected=\'0\'   >",
        stdout);
  iVar1 = 10;
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
    iVar1 = iVar1 + -1;
  } while (9 < iVar1);
  puts("<");
  return 0;
}



undefined4 var0302_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0302 signed start:10, iter:1, inc:-1, order:buj cmp:<=0 second:=48 +1  expected=\'0\'   >",
        stdout);
  iVar1 = 10;
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
    iVar1 = iVar1 + -1;
  } while (9 < iVar1);
  puts("<");
  return 0;
}



undefined4 var0303_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0303 signed start:10, iter:1, inc:-1, order:bju cmp:!=0 second:=48 +1  expected=\'0\'   >",
        stdout);
  iVar1 = 10;
  __c = 0x30;
  while( true ) {
    putchar(__c);
    __c = __c + 1;
    if (iVar1 == 10) break;
    iVar1 = iVar1 + -1;
  }
  puts("<");
  return 0;
}



undefined4 var0304_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0304 signed start:10, iter:1, inc:-1, order:bju cmp:< 0 second:=48 +1  expected=\'0\'   >",
        stdout);
  iVar1 = 10;
  __c = 0x30;
  while( true ) {
    putchar(__c);
    __c = __c + 1;
    if (iVar1 < 0xb) break;
    iVar1 = iVar1 + -1;
  }
  puts("<");
  return 0;
}



undefined4 var0305_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0305 signed start:10, iter:1, inc:-1, order:bju cmp:<=0 second:=48 +1  expected=\'0\'   >",
        stdout);
  iVar1 = 10;
  __c = 0x30;
  while( true ) {
    putchar(__c);
    __c = __c + 1;
    if (iVar1 < 0xb) break;
    iVar1 = iVar1 + -1;
  }
  puts("<");
  return 0;
}



undefined4 var0306_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0306 signed start:10, iter:1, inc:-1, order:ubj cmp:!=0 second:=48 +1  expected=\'0\'   >",
        stdout);
  iVar1 = 0xb;
  __c = 0x30;
  do {
    iVar1 = iVar1 + -1;
    putchar(__c);
    __c = __c + 1;
  } while (iVar1 != 10);
  puts("<");
  return 0;
}



undefined4 var0307_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0307 signed start:10, iter:1, inc:-1, order:ubj cmp:< 0 second:=48 +1  expected=\'0\'   >",
        stdout);
  iVar1 = 0xb;
  __c = 0x30;
  do {
    iVar1 = iVar1 + -1;
    putchar(__c);
    __c = __c + 1;
  } while (10 < iVar1);
  puts("<");
  return 0;
}



undefined4 var0308_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0308 signed start:10, iter:1, inc:-1, order:ubj cmp:<=0 second:=48 +1  expected=\'0\'   >",
        stdout);
  iVar1 = 0xb;
  __c = 0x30;
  do {
    iVar1 = iVar1 + -1;
    putchar(__c);
    __c = __c + 1;
  } while (10 < iVar1);
  puts("<");
  return 0;
}



undefined4 var0309_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0309 signed start:10, iter:1, inc:-1, order:ujb cmp:!=0 second:=48 +1  expected=\'0\'   >",
        stdout);
  iVar1 = 0xb;
  __c = 0x30;
  while (iVar1 = iVar1 + -1, iVar1 != 9) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0310_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0310 signed start:10, iter:1, inc:-1, order:ujb cmp:< 0 second:=48 +1  expected=\'0\'   >",
        stdout);
  iVar1 = 0xb;
  __c = 0x30;
  while (iVar1 = iVar1 + -1, 9 < iVar1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0311_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0311 signed start:10, iter:1, inc:-1, order:ujb cmp:<=0 second:=48 +1  expected=\'0\'   >",
        stdout);
  iVar1 = 0xb;
  __c = 0x30;
  while (iVar1 = iVar1 + -1, 9 < iVar1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0312_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0312 signed start:10, iter:1, inc:-1, order:jbu cmp:!=0 second:=48 +1  expected=\'0\'   >",
        stdout);
  __c = 0x30;
  for (iVar1 = 10; iVar1 != 9; iVar1 = iVar1 + -1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0313_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0313 signed start:10, iter:1, inc:-1, order:jbu cmp:< 0 second:=48 +1  expected=\'0\'   >",
        stdout);
  __c = 0x30;
  for (iVar1 = 10; 9 < iVar1; iVar1 = iVar1 + -1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0314_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0314 signed start:10, iter:1, inc:-1, order:jbu cmp:<=0 second:=48 +1  expected=\'0\'   >",
        stdout);
  __c = 0x30;
  for (iVar1 = 10; 9 < iVar1; iVar1 = iVar1 + -1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0315_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0315 signed start:10, iter:1, inc:-1, order:jub cmp:!=0 second:=48 +1  expected=\'0\'   >",
        stdout);
  __c = 0x30;
  for (iVar1 = 0xb; iVar1 != 10; iVar1 = iVar1 + -1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0316_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0316 signed start:10, iter:1, inc:-1, order:jub cmp:< 0 second:=48 +1  expected=\'0\'   >",
        stdout);
  __c = 0x30;
  for (iVar1 = 0xb; 10 < iVar1; iVar1 = iVar1 + -1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0317_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0317 signed start:10, iter:1, inc:-1, order:jub cmp:<=0 second:=48 +1  expected=\'0\'   >",
        stdout);
  __c = 0x30;
  for (iVar1 = 0xb; 10 < iVar1; iVar1 = iVar1 + -1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0318_0(void)

{
  int iVar1;
  
  fputs("0318 signed start:-20, iter:1, inc:+1, order:buj cmp:!=0 exp:+68       expected=\'0\'   >",
        stdout);
  iVar1 = -0x14;
  do {
    putchar(iVar1 + 0x44);
    iVar1 = iVar1 + 1;
  } while (iVar1 != -0x13);
  puts("<");
  return 0;
}



undefined4 var0319_0(void)

{
  int iVar1;
  
  fputs("0319 signed start:-20, iter:1, inc:+1, order:buj cmp:< 0 exp:+68       expected=\'0\'   >",
        stdout);
  iVar1 = -0x14;
  do {
    putchar(iVar1 + 0x44);
    iVar1 = iVar1 + 1;
  } while (iVar1 < -0x13);
  puts("<");
  return 0;
}



undefined4 var0320_0(void)

{
  int iVar1;
  
  fputs("0320 signed start:-20, iter:1, inc:+1, order:buj cmp:<=0 exp:+68       expected=\'0\'   >",
        stdout);
  iVar1 = -0x14;
  do {
    putchar(iVar1 + 0x44);
    iVar1 = iVar1 + 1;
  } while (iVar1 < -0x13);
  puts("<");
  return 0;
}



undefined4 var0321_0(void)

{
  int iVar1;
  
  fputs("0321 signed start:-20, iter:1, inc:+1, order:bju cmp:!=0 exp:+68       expected=\'0\'   >",
        stdout);
  iVar1 = -0x14;
  while( true ) {
    putchar(iVar1 + 0x44);
    if (iVar1 == -0x14) break;
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0322_0(void)

{
  int iVar1;
  
  fputs("0322 signed start:-20, iter:1, inc:+1, order:bju cmp:< 0 exp:+68       expected=\'0\'   >",
        stdout);
  iVar1 = -0x14;
  while( true ) {
    putchar(iVar1 + 0x44);
    if (-0x15 < iVar1) break;
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0323_0(void)

{
  int iVar1;
  
  fputs("0323 signed start:-20, iter:1, inc:+1, order:bju cmp:<=0 exp:+68       expected=\'0\'   >",
        stdout);
  iVar1 = -0x14;
  while( true ) {
    putchar(iVar1 + 0x44);
    if (-0x15 < iVar1) break;
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0324_0(void)

{
  int iVar1;
  int iVar2;
  
  fputs("0324 signed start:-20, iter:1, inc:+1, order:ubj cmp:!=0 exp:+68       expected=\'0\'   >",
        stdout);
  iVar2 = -0x15;
  do {
    iVar1 = iVar2 + 1;
    putchar(iVar2 + 0x45);
    iVar2 = iVar1;
  } while (iVar1 != -0x14);
  puts("<");
  return 0;
}



undefined4 var0325_0(void)

{
  int iVar1;
  int iVar2;
  
  fputs("0325 signed start:-20, iter:1, inc:+1, order:ubj cmp:< 0 exp:+68       expected=\'0\'   >",
        stdout);
  iVar2 = -0x15;
  do {
    iVar1 = iVar2 + 1;
    putchar(iVar2 + 0x45);
    iVar2 = iVar1;
  } while (iVar1 < -0x14);
  puts("<");
  return 0;
}



undefined4 var0326_0(void)

{
  int iVar1;
  int iVar2;
  
  fputs("0326 signed start:-20, iter:1, inc:+1, order:ubj cmp:<=0 exp:+68       expected=\'0\'   >",
        stdout);
  iVar2 = -0x15;
  do {
    iVar1 = iVar2 + 1;
    putchar(iVar2 + 0x45);
    iVar2 = iVar1;
  } while (iVar1 < -0x14);
  puts("<");
  return 0;
}



undefined4 var0327_0(void)

{
  int iVar1;
  
  fputs("0327 signed start:-20, iter:1, inc:+1, order:ujb cmp:!=0 exp:+68       expected=\'0\'   >",
        stdout);
  iVar1 = -0x15;
  while (iVar1 + 1 != -0x13) {
    putchar(iVar1 + 0x45);
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0328_0(void)

{
  int iVar1;
  
  fputs("0328 signed start:-20, iter:1, inc:+1, order:ujb cmp:< 0 exp:+68       expected=\'0\'   >",
        stdout);
  iVar1 = -0x15;
  while (iVar1 + 1 < -0x13) {
    putchar(iVar1 + 0x45);
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0329_0(void)

{
  int iVar1;
  
  fputs("0329 signed start:-20, iter:1, inc:+1, order:ujb cmp:<=0 exp:+68       expected=\'0\'   >",
        stdout);
  iVar1 = -0x15;
  while (iVar1 + 1 < -0x13) {
    putchar(iVar1 + 0x45);
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0330_0(void)

{
  int iVar1;
  
  fputs("0330 signed start:-20, iter:1, inc:+1, order:jbu cmp:!=0 exp:+68       expected=\'0\'   >",
        stdout);
  for (iVar1 = -0x14; iVar1 != -0x13; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x44);
  }
  puts("<");
  return 0;
}



undefined4 var0331_0(void)

{
  int iVar1;
  
  fputs("0331 signed start:-20, iter:1, inc:+1, order:jbu cmp:< 0 exp:+68       expected=\'0\'   >",
        stdout);
  for (iVar1 = -0x14; iVar1 < -0x13; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x44);
  }
  puts("<");
  return 0;
}



undefined4 var0332_0(void)

{
  int iVar1;
  
  fputs("0332 signed start:-20, iter:1, inc:+1, order:jbu cmp:<=0 exp:+68       expected=\'0\'   >",
        stdout);
  for (iVar1 = -0x14; iVar1 < -0x13; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x44);
  }
  puts("<");
  return 0;
}



undefined4 var0333_0(void)

{
  int iVar1;
  
  fputs("0333 signed start:-20, iter:1, inc:+1, order:jub cmp:!=0 exp:+68       expected=\'0\'   >",
        stdout);
  for (iVar1 = -0x15; iVar1 != -0x14; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x45);
  }
  puts("<");
  return 0;
}



undefined4 var0334_0(void)

{
  int iVar1;
  
  fputs("0334 signed start:-20, iter:1, inc:+1, order:jub cmp:< 0 exp:+68       expected=\'0\'   >",
        stdout);
  for (iVar1 = -0x15; iVar1 < -0x14; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x45);
  }
  puts("<");
  return 0;
}



undefined4 var0335_0(void)

{
  int iVar1;
  
  fputs("0335 signed start:-20, iter:1, inc:+1, order:jub cmp:<=0 exp:+68       expected=\'0\'   >",
        stdout);
  for (iVar1 = -0x15; iVar1 < -0x14; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x45);
  }
  puts("<");
  return 0;
}



undefined4 var0336_empty(void)

{
  int __c;
  
  fputs("0336 signed start:48, iter:0, inc:+1, order:ujb cmp:!=0                expected=\'\'    >",
        stdout);
  __c = 0x2f;
  while (__c = __c + 1, __c != 0x30) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0337_empty(void)

{
  int __c;
  
  fputs("0337 signed start:48, iter:0, inc:+1, order:ujb cmp:< 0                expected=\'\'    >",
        stdout);
  __c = 0x2f;
  while (__c = __c + 1, __c < 0x30) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0338_empty(void)

{
  int __c;
  
  fputs("0338 signed start:48, iter:0, inc:+1, order:ujb cmp:<=0                expected=\'\'    >",
        stdout);
  __c = 0x2f;
  while (__c = __c + 1, __c < 0x30) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0339_empty(void)

{
  int __c;
  
  fputs("0339 signed start:48, iter:0, inc:+1, order:jbu cmp:!=0                expected=\'\'    >",
        stdout);
  for (__c = 0x30; __c != 0x30; __c = __c + 1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0340_empty(void)

{
  int __c;
  
  fputs("0340 signed start:48, iter:0, inc:+1, order:jbu cmp:< 0                expected=\'\'    >",
        stdout);
  for (__c = 0x30; __c < 0x30; __c = __c + 1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0341_empty(void)

{
  int __c;
  
  fputs("0341 signed start:48, iter:0, inc:+1, order:jbu cmp:<=0                expected=\'\'    >",
        stdout);
  for (__c = 0x30; __c < 0x30; __c = __c + 1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0342_empty(void)

{
  int __c;
  
  fputs("0342 signed start:48, iter:0, inc:+1, order:jub cmp:!=0                expected=\'\'    >",
        stdout);
  __c = 0x2f;
  while (__c != 0x2f) {
    __c = __c + 1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0343_empty(void)

{
  int __c;
  
  fputs("0343 signed start:48, iter:0, inc:+1, order:jub cmp:< 0                expected=\'\'    >",
        stdout);
  __c = 0x2f;
  while (__c < 0x2f) {
    __c = __c + 1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0344_empty(void)

{
  int __c;
  
  fputs("0344 signed start:48, iter:0, inc:+1, order:jub cmp:<=0                expected=\'\'    >",
        stdout);
  __c = 0x2f;
  while (__c < 0x2f) {
    __c = __c + 1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0345_empty(void)

{
  int iVar1;
  
  fputs("0345 signed start:0, iter:0, inc:+1, order:ujb cmp:!=0 exp:+48         expected=\'\'    >",
        stdout);
  iVar1 = -1;
  while (iVar1 + 1 != 0) {
    putchar(iVar1 + 0x31);
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0346_empty(void)

{
  int iVar1;
  
  fputs("0346 signed start:0, iter:0, inc:+1, order:ujb cmp:< 0 exp:+48         expected=\'\'    >",
        stdout);
  iVar1 = -1;
  while (iVar1 + 1 < 0) {
    putchar(iVar1 + 0x31);
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0347_empty(void)

{
  uint uVar1;
  
  fputs("0347 signed start:0, iter:0, inc:+1, order:ujb cmp:<=0 exp:+48         expected=\'\'    >",
        stdout);
  uVar1 = 0xffffffff;
  while (0x7fffffff < uVar1 + 1) {
    putchar(uVar1 + 0x31);
    uVar1 = uVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0348_empty(void)

{
  int iVar1;
  
  fputs("0348 signed start:0, iter:0, inc:+1, order:jbu cmp:!=0 exp:+48         expected=\'\'    >",
        stdout);
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x30);
  }
  puts("<");
  return 0;
}



undefined4 var0349_empty(void)

{
  int iVar1;
  
  fputs("0349 signed start:0, iter:0, inc:+1, order:jbu cmp:< 0 exp:+48         expected=\'\'    >",
        stdout);
  for (iVar1 = 0; iVar1 < 0; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x30);
  }
  puts("<");
  return 0;
}



undefined4 var0350_empty(void)

{
  uint uVar1;
  
  fputs("0350 signed start:0, iter:0, inc:+1, order:jbu cmp:<=0 exp:+48         expected=\'\'    >",
        stdout);
  for (uVar1 = 0; 0x7fffffff < uVar1; uVar1 = uVar1 + 1) {
    putchar(uVar1 + 0x30);
  }
  puts("<");
  return 0;
}



undefined4 var0351_empty(void)

{
  int iVar1;
  
  fputs("0351 signed start:0, iter:0, inc:+1, order:jub cmp:!=0 exp:+48         expected=\'\'    >",
        stdout);
  for (iVar1 = -1; iVar1 != -1; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x31);
  }
  puts("<");
  return 0;
}



undefined4 var0352_empty(void)

{
  int iVar1;
  
  fputs("0352 signed start:0, iter:0, inc:+1, order:jub cmp:< 0 exp:+48         expected=\'\'    >",
        stdout);
  for (iVar1 = -1; iVar1 < -1; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x31);
  }
  puts("<");
  return 0;
}



undefined4 var0353_empty(void)

{
  int iVar1;
  
  fputs("0353 signed start:0, iter:0, inc:+1, order:jub cmp:<=0 exp:+48         expected=\'\'    >",
        stdout);
  for (iVar1 = -1; iVar1 < -1; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x31);
  }
  puts("<");
  return 0;
}



undefined4 var0354_empty(void)

{
  uint uVar1;
  
  fputs("0354 signed start:16, iter:0, inc:+2, order:ujb cmp:!=0 exp:/2 +40     expected=\'\'    >",
        stdout);
  uVar1 = 0xe;
  while (uVar1 = uVar1 + 2, uVar1 != 0x10) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0355_empty(void)

{
  uint uVar1;
  
  fputs("0355 signed start:16, iter:0, inc:+2, order:ujb cmp:< 0 exp:/2 +40     expected=\'\'    >",
        stdout);
  uVar1 = 0xe;
  while (uVar1 = uVar1 + 2, (int)uVar1 < 0x10) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0356_empty(void)

{
  uint uVar1;
  
  fputs("0356 signed start:16, iter:0, inc:+2, order:ujb cmp:< 1 exp:/2 +40     expected=\'\'    >",
        stdout);
  uVar1 = 0xe;
  while (uVar1 = uVar1 + 2, (int)uVar1 < 0xf) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0357_empty(void)

{
  uint uVar1;
  
  fputs("0357 signed start:16, iter:0, inc:+2, order:ujb cmp:<=0 exp:/2 +40     expected=\'\'    >",
        stdout);
  uVar1 = 0xe;
  while (uVar1 = uVar1 + 2, (int)uVar1 < 0x10) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0358_empty(void)

{
  uint uVar1;
  
  fputs("0358 signed start:16, iter:0, inc:+2, order:ujb cmp:<=1 exp:/2 +40     expected=\'\'    >",
        stdout);
  uVar1 = 0xe;
  while (uVar1 = uVar1 + 2, (int)uVar1 < 0xf) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0359_empty(void)

{
  uint uVar1;
  
  fputs("0359 signed start:16, iter:0, inc:+2, order:jbu cmp:!=0 exp:/2 +40     expected=\'\'    >",
        stdout);
  for (uVar1 = 0x10; uVar1 != 0x10; uVar1 = uVar1 + 2) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0360_empty(void)

{
  uint uVar1;
  
  fputs("0360 signed start:16, iter:0, inc:+2, order:jbu cmp:< 0 exp:/2 +40     expected=\'\'    >",
        stdout);
  for (uVar1 = 0x10; (int)uVar1 < 0x10; uVar1 = uVar1 + 2) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0361_empty(void)

{
  uint uVar1;
  
  fputs("0361 signed start:16, iter:0, inc:+2, order:jbu cmp:< 1 exp:/2 +40     expected=\'\'    >",
        stdout);
  for (uVar1 = 0x10; (int)uVar1 < 0xf; uVar1 = uVar1 + 2) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0362_empty(void)

{
  uint uVar1;
  
  fputs("0362 signed start:16, iter:0, inc:+2, order:jbu cmp:<=0 exp:/2 +40     expected=\'\'    >",
        stdout);
  for (uVar1 = 0x10; (int)uVar1 < 0x10; uVar1 = uVar1 + 2) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0363_empty(void)

{
  uint uVar1;
  
  fputs("0363 signed start:16, iter:0, inc:+2, order:jbu cmp:<=1 exp:/2 +40     expected=\'\'    >",
        stdout);
  for (uVar1 = 0x10; (int)uVar1 < 0xf; uVar1 = uVar1 + 2) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0364_empty(void)

{
  uint uVar1;
  
  fputs("0364 signed start:16, iter:0, inc:+2, order:jub cmp:!=0 exp:/2 +40     expected=\'\'    >",
        stdout);
  uVar1 = 0xe;
  while (uVar1 != 0xe) {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0365_empty(void)

{
  uint uVar1;
  
  fputs("0365 signed start:16, iter:0, inc:+2, order:jub cmp:< 0 exp:/2 +40     expected=\'\'    >",
        stdout);
  uVar1 = 0xe;
  while ((int)uVar1 < 0xe) {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0366_empty(void)

{
  uint uVar1;
  
  fputs("0366 signed start:16, iter:0, inc:+2, order:jub cmp:< 1 exp:/2 +40     expected=\'\'    >",
        stdout);
  uVar1 = 0xe;
  while ((int)uVar1 < 0xd) {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0367_empty(void)

{
  uint uVar1;
  
  fputs("0367 signed start:16, iter:0, inc:+2, order:jub cmp:<=0 exp:/2 +40     expected=\'\'    >",
        stdout);
  uVar1 = 0xe;
  while ((int)uVar1 < 0xe) {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0368_empty(void)

{
  uint uVar1;
  
  fputs("0368 signed start:16, iter:0, inc:+2, order:jub cmp:<=1 exp:/2 +40     expected=\'\'    >",
        stdout);
  uVar1 = 0xe;
  while ((int)uVar1 < 0xd) {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0369_empty(void)

{
  int __c;
  
  fputs("0369 signed start:57, iter:0, inc:-1, order:ujb cmp:!=0                expected=\'\'    >",
        stdout);
  __c = 0x3a;
  while (__c = __c + -1, __c != 0x39) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0370_empty(void)

{
  int __c;
  
  fputs("0370 signed start:57, iter:0, inc:-1, order:ujb cmp:< 0                expected=\'\'    >",
        stdout);
  __c = 0x3a;
  while (__c = __c + -1, 0x39 < __c) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0371_empty(void)

{
  int __c;
  
  fputs("0371 signed start:57, iter:0, inc:-1, order:ujb cmp:<=0                expected=\'\'    >",
        stdout);
  __c = 0x3a;
  while (__c = __c + -1, 0x39 < __c) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0372_empty(void)

{
  int __c;
  
  fputs("0372 signed start:57, iter:0, inc:-1, order:jbu cmp:!=0                expected=\'\'    >",
        stdout);
  for (__c = 0x39; __c != 0x39; __c = __c + -1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0373_empty(void)

{
  int __c;
  
  fputs("0373 signed start:57, iter:0, inc:-1, order:jbu cmp:< 0                expected=\'\'    >",
        stdout);
  for (__c = 0x39; 0x39 < __c; __c = __c + -1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0374_empty(void)

{
  int __c;
  
  fputs("0374 signed start:57, iter:0, inc:-1, order:jbu cmp:<=0                expected=\'\'    >",
        stdout);
  for (__c = 0x39; 0x39 < __c; __c = __c + -1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0375_empty(void)

{
  int __c;
  
  fputs("0375 signed start:57, iter:0, inc:-1, order:jub cmp:!=0                expected=\'\'    >",
        stdout);
  __c = 0x3a;
  while (__c != 0x3a) {
    __c = __c + -1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0376_empty(void)

{
  int __c;
  
  fputs("0376 signed start:57, iter:0, inc:-1, order:jub cmp:< 0                expected=\'\'    >",
        stdout);
  __c = 0x3a;
  while (0x3a < __c) {
    __c = __c + -1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0377_empty(void)

{
  int __c;
  
  fputs("0377 signed start:57, iter:0, inc:-1, order:jub cmp:<=0                expected=\'\'    >",
        stdout);
  __c = 0x3a;
  while (0x3a < __c) {
    __c = __c + -1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0378_empty(void)

{
  uint uVar1;
  
  fputs("0378 signed start:100, iter:0, inc:-2, order:ujb cmp:!=0 exp:/2 +7     expected=\'\'    >",
        stdout);
  uVar1 = 0x66;
  while (uVar1 = uVar1 - 2, uVar1 != 100) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0379_empty(void)

{
  uint uVar1;
  
  fputs("0379 signed start:100, iter:0, inc:-2, order:ujb cmp:< -1 exp:/2 +7    expected=\'\'    >",
        stdout);
  uVar1 = 0x66;
  while (uVar1 = uVar1 - 2, 0x65 < (int)uVar1) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0380_empty(void)

{
  uint uVar1;
  
  fputs("0380 signed start:100, iter:0, inc:-2, order:ujb cmp:< 0 exp:/2 +7     expected=\'\'    >",
        stdout);
  uVar1 = 0x66;
  while (uVar1 = uVar1 - 2, 100 < (int)uVar1) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0381_empty(void)

{
  uint uVar1;
  
  fputs("0381 signed start:100, iter:0, inc:-2, order:ujb cmp:<=-1 exp:/2 +7    expected=\'\'    >",
        stdout);
  uVar1 = 0x66;
  while (uVar1 = uVar1 - 2, 0x65 < (int)uVar1) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0382_empty(void)

{
  uint uVar1;
  
  fputs("0382 signed start:100, iter:0, inc:-2, order:ujb cmp:<=0 exp:/2 +7     expected=\'\'    >",
        stdout);
  uVar1 = 0x66;
  while (uVar1 = uVar1 - 2, 100 < (int)uVar1) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0383_empty(void)

{
  uint uVar1;
  
  fputs("0383 signed start:100, iter:0, inc:-2, order:jbu cmp:!=0 exp:/2 +7     expected=\'\'    >",
        stdout);
  for (uVar1 = 100; uVar1 != 100; uVar1 = uVar1 - 2) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0384_empty(void)

{
  uint uVar1;
  
  fputs("0384 signed start:100, iter:0, inc:-2, order:jbu cmp:< -1 exp:/2 +7    expected=\'\'    >",
        stdout);
  for (uVar1 = 100; 0x65 < (int)uVar1; uVar1 = uVar1 - 2) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0385_empty(void)

{
  uint uVar1;
  
  fputs("0385 signed start:100, iter:0, inc:-2, order:jbu cmp:< 0 exp:/2 +7     expected=\'\'    >",
        stdout);
  for (uVar1 = 100; 100 < (int)uVar1; uVar1 = uVar1 - 2) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0386_empty(void)

{
  uint uVar1;
  
  fputs("0386 signed start:100, iter:0, inc:-2, order:jbu cmp:<=-1 exp:/2 +7    expected=\'\'    >",
        stdout);
  for (uVar1 = 100; 0x65 < (int)uVar1; uVar1 = uVar1 - 2) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0387_empty(void)

{
  uint uVar1;
  
  fputs("0387 signed start:100, iter:0, inc:-2, order:jbu cmp:<=0 exp:/2 +7     expected=\'\'    >",
        stdout);
  for (uVar1 = 100; 100 < (int)uVar1; uVar1 = uVar1 - 2) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0388_empty(void)

{
  uint uVar1;
  
  fputs("0388 signed start:100, iter:0, inc:-2, order:jub cmp:!=0 exp:/2 +7     expected=\'\'    >",
        stdout);
  uVar1 = 0x66;
  while (uVar1 != 0x66) {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0389_empty(void)

{
  uint uVar1;
  
  fputs("0389 signed start:100, iter:0, inc:-2, order:jub cmp:< -1 exp:/2 +7    expected=\'\'    >",
        stdout);
  uVar1 = 0x66;
  while (0x67 < (int)uVar1) {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0390_empty(void)

{
  uint uVar1;
  
  fputs("0390 signed start:100, iter:0, inc:-2, order:jub cmp:< 0 exp:/2 +7     expected=\'\'    >",
        stdout);
  uVar1 = 0x66;
  while (0x66 < (int)uVar1) {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0391_empty(void)

{
  uint uVar1;
  
  fputs("0391 signed start:100, iter:0, inc:-2, order:jub cmp:<=-1 exp:/2 +7    expected=\'\'    >",
        stdout);
  uVar1 = 0x66;
  while (0x67 < (int)uVar1) {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0392_empty(void)

{
  uint uVar1;
  
  fputs("0392 signed start:100, iter:0, inc:-2, order:jub cmp:<=0 exp:/2 +7     expected=\'\'    >",
        stdout);
  uVar1 = 0x66;
  while (0x66 < (int)uVar1) {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0393_empty(void)

{
  int iVar1;
  int __c;
  
  fputs("0393 signed start:0, iter:0, inc:+1, order:ujb cmp:!=0 second:=48 +1   expected=\'\'    >",
        stdout);
  iVar1 = -1;
  __c = 0x30;
  while (iVar1 = iVar1 + 1, iVar1 != 0) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0394_empty(void)

{
  int iVar1;
  int __c;
  
  fputs("0394 signed start:0, iter:0, inc:+1, order:ujb cmp:< 0 second:=48 +1   expected=\'\'    >",
        stdout);
  iVar1 = -1;
  __c = 0x30;
  while (iVar1 = iVar1 + 1, iVar1 < 0) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0395_empty(void)

{
  uint uVar1;
  int __c;
  
  fputs("0395 signed start:0, iter:0, inc:+1, order:ujb cmp:<=0 second:=48 +1   expected=\'\'    >",
        stdout);
  uVar1 = 0xffffffff;
  __c = 0x30;
  while (uVar1 = uVar1 + 1, 0x7fffffff < uVar1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0396_empty(void)

{
  int iVar1;
  int __c;
  
  fputs("0396 signed start:0, iter:0, inc:+1, order:jbu cmp:!=0 second:=48 +1   expected=\'\'    >",
        stdout);
  __c = 0x30;
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0397_empty(void)

{
  int iVar1;
  int __c;
  
  fputs("0397 signed start:0, iter:0, inc:+1, order:jbu cmp:< 0 second:=48 +1   expected=\'\'    >",
        stdout);
  __c = 0x30;
  for (iVar1 = 0; iVar1 < 0; iVar1 = iVar1 + 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0398_empty(void)

{
  uint uVar1;
  int __c;
  
  fputs("0398 signed start:0, iter:0, inc:+1, order:jbu cmp:<=0 second:=48 +1   expected=\'\'    >",
        stdout);
  __c = 0x30;
  for (uVar1 = 0; 0x7fffffff < uVar1; uVar1 = uVar1 + 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0399_empty(void)

{
  int iVar1;
  int __c;
  
  fputs("0399 signed start:0, iter:0, inc:+1, order:jub cmp:!=0 second:=48 +1   expected=\'\'    >",
        stdout);
  __c = 0x30;
  for (iVar1 = -1; iVar1 != -1; iVar1 = iVar1 + 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0400_empty(void)

{
  int iVar1;
  int __c;
  
  fputs("0400 signed start:0, iter:0, inc:+1, order:jub cmp:< 0 second:=48 +1   expected=\'\'    >",
        stdout);
  __c = 0x30;
  for (iVar1 = -1; iVar1 < -1; iVar1 = iVar1 + 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0401_empty(void)

{
  int iVar1;
  int __c;
  
  fputs("0401 signed start:0, iter:0, inc:+1, order:jub cmp:<=0 second:=48 +1   expected=\'\'    >",
        stdout);
  __c = 0x30;
  for (iVar1 = -1; iVar1 < -1; iVar1 = iVar1 + 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0402_empty(void)

{
  int iVar1;
  int __c;
  
  fputs("0402 signed start:10, iter:0, inc:-1, order:ujb cmp:!=0 second:=48 +1  expected=\'\'    >",
        stdout);
  iVar1 = 0xb;
  __c = 0x30;
  while (iVar1 = iVar1 + -1, iVar1 != 10) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0403_empty(void)

{
  int iVar1;
  int __c;
  
  fputs("0403 signed start:10, iter:0, inc:-1, order:ujb cmp:< 0 second:=48 +1  expected=\'\'    >",
        stdout);
  iVar1 = 0xb;
  __c = 0x30;
  while (iVar1 = iVar1 + -1, 10 < iVar1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0404_empty(void)

{
  int iVar1;
  int __c;
  
  fputs("0404 signed start:10, iter:0, inc:-1, order:ujb cmp:<=0 second:=48 +1  expected=\'\'    >",
        stdout);
  iVar1 = 0xb;
  __c = 0x30;
  while (iVar1 = iVar1 + -1, 10 < iVar1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0405_empty(void)

{
  int iVar1;
  int __c;
  
  fputs("0405 signed start:10, iter:0, inc:-1, order:jbu cmp:!=0 second:=48 +1  expected=\'\'    >",
        stdout);
  __c = 0x30;
  for (iVar1 = 10; iVar1 != 10; iVar1 = iVar1 + -1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0406_empty(void)

{
  int iVar1;
  int __c;
  
  fputs("0406 signed start:10, iter:0, inc:-1, order:jbu cmp:< 0 second:=48 +1  expected=\'\'    >",
        stdout);
  __c = 0x30;
  for (iVar1 = 10; 10 < iVar1; iVar1 = iVar1 + -1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0407_empty(void)

{
  int iVar1;
  int __c;
  
  fputs("0407 signed start:10, iter:0, inc:-1, order:jbu cmp:<=0 second:=48 +1  expected=\'\'    >",
        stdout);
  __c = 0x30;
  for (iVar1 = 10; 10 < iVar1; iVar1 = iVar1 + -1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0408_empty(void)

{
  int iVar1;
  int __c;
  
  fputs("0408 signed start:10, iter:0, inc:-1, order:jub cmp:!=0 second:=48 +1  expected=\'\'    >",
        stdout);
  __c = 0x30;
  for (iVar1 = 0xb; iVar1 != 0xb; iVar1 = iVar1 + -1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0409_empty(void)

{
  int iVar1;
  int __c;
  
  fputs("0409 signed start:10, iter:0, inc:-1, order:jub cmp:< 0 second:=48 +1  expected=\'\'    >",
        stdout);
  __c = 0x30;
  for (iVar1 = 0xb; 0xb < iVar1; iVar1 = iVar1 + -1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0410_empty(void)

{
  int iVar1;
  int __c;
  
  fputs("0410 signed start:10, iter:0, inc:-1, order:jub cmp:<=0 second:=48 +1  expected=\'\'    >",
        stdout);
  __c = 0x30;
  for (iVar1 = 0xb; 0xb < iVar1; iVar1 = iVar1 + -1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0411_empty(void)

{
  int iVar1;
  
  fputs("0411 signed start:-20, iter:0, inc:+1, order:ujb cmp:!=0 exp:+68       expected=\'\'    >",
        stdout);
  iVar1 = -0x15;
  while (iVar1 + 1 != -0x14) {
    putchar(iVar1 + 0x45);
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0412_empty(void)

{
  int iVar1;
  
  fputs("0412 signed start:-20, iter:0, inc:+1, order:ujb cmp:< 0 exp:+68       expected=\'\'    >",
        stdout);
  iVar1 = -0x15;
  while (iVar1 + 1 < -0x14) {
    putchar(iVar1 + 0x45);
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0413_empty(void)

{
  int iVar1;
  
  fputs("0413 signed start:-20, iter:0, inc:+1, order:ujb cmp:<=0 exp:+68       expected=\'\'    >",
        stdout);
  iVar1 = -0x15;
  while (iVar1 + 1 < -0x14) {
    putchar(iVar1 + 0x45);
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0414_empty(void)

{
  int iVar1;
  
  fputs("0414 signed start:-20, iter:0, inc:+1, order:jbu cmp:!=0 exp:+68       expected=\'\'    >",
        stdout);
  for (iVar1 = -0x14; iVar1 != -0x14; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x44);
  }
  puts("<");
  return 0;
}



undefined4 var0415_empty(void)

{
  int iVar1;
  
  fputs("0415 signed start:-20, iter:0, inc:+1, order:jbu cmp:< 0 exp:+68       expected=\'\'    >",
        stdout);
  for (iVar1 = -0x14; iVar1 < -0x14; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x44);
  }
  puts("<");
  return 0;
}



undefined4 var0416_empty(void)

{
  int iVar1;
  
  fputs("0416 signed start:-20, iter:0, inc:+1, order:jbu cmp:<=0 exp:+68       expected=\'\'    >",
        stdout);
  for (iVar1 = -0x14; iVar1 < -0x14; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x44);
  }
  puts("<");
  return 0;
}



undefined4 var0417_empty(void)

{
  int iVar1;
  
  fputs("0417 signed start:-20, iter:0, inc:+1, order:jub cmp:!=0 exp:+68       expected=\'\'    >",
        stdout);
  for (iVar1 = -0x15; iVar1 != -0x15; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x45);
  }
  puts("<");
  return 0;
}



undefined4 var0418_empty(void)

{
  int iVar1;
  
  fputs("0418 signed start:-20, iter:0, inc:+1, order:jub cmp:< 0 exp:+68       expected=\'\'    >",
        stdout);
  for (iVar1 = -0x15; iVar1 < -0x15; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x45);
  }
  puts("<");
  return 0;
}



undefined4 var0419_empty(void)

{
  int iVar1;
  
  fputs("0419 signed start:-20, iter:0, inc:+1, order:jub cmp:<=0 exp:+68       expected=\'\'    >",
        stdout);
  for (iVar1 = -0x15; iVar1 < -0x15; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x45);
  }
  puts("<");
  return 0;
}



undefined4 var0420_0123456789(void)

{
  int __c;
  
  fputs("0420 unsign start:48, iter:10, inc:+1, order:buj cmp:!=0               expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
  } while (__c != 0x3a);
  puts("<");
  return 0;
}



undefined4 var0421_0123456789(void)

{
  uint __c;
  
  fputs("0421 unsign start:48, iter:10, inc:+1, order:buj cmp:< 0               expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
  } while (__c < 0x3a);
  puts("<");
  return 0;
}



undefined4 var0422_0123456789(void)

{
  uint __c;
  
  fputs("0422 unsign start:48, iter:10, inc:+1, order:buj cmp:<=0               expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
  } while (__c < 0x3a);
  puts("<");
  return 0;
}



undefined4 var0423_0123456789(void)

{
  int __c;
  
  fputs("0423 unsign start:48, iter:10, inc:+1, order:bju cmp:!=0               expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  while( true ) {
    putchar(__c);
    if (__c == 0x39) break;
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0424_0123456789(void)

{
  uint __c;
  
  fputs("0424 unsign start:48, iter:10, inc:+1, order:bju cmp:< 0               expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  while( true ) {
    putchar(__c);
    if (0x38 < __c) break;
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0425_0123456789(void)

{
  uint __c;
  
  fputs("0425 unsign start:48, iter:10, inc:+1, order:bju cmp:<=0               expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  while( true ) {
    putchar(__c);
    if (0x38 < __c) break;
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0426_0123456789(void)

{
  int __c;
  
  fputs("0426 unsign start:48, iter:10, inc:+1, order:ubj cmp:!=0               expected=\'0123456789\' >"
        ,stdout);
  __c = 0x2f;
  do {
    __c = __c + 1;
    putchar(__c);
  } while (__c != 0x39);
  puts("<");
  return 0;
}



undefined4 var0427_0123456789(void)

{
  uint __c;
  
  fputs("0427 unsign start:48, iter:10, inc:+1, order:ubj cmp:< 0               expected=\'0123456789\' >"
        ,stdout);
  __c = 0x2f;
  do {
    __c = __c + 1;
    putchar(__c);
  } while (__c < 0x39);
  puts("<");
  return 0;
}



undefined4 var0428_0123456789(void)

{
  uint __c;
  
  fputs("0428 unsign start:48, iter:10, inc:+1, order:ubj cmp:<=0               expected=\'0123456789\' >"
        ,stdout);
  __c = 0x2f;
  do {
    __c = __c + 1;
    putchar(__c);
  } while (__c < 0x39);
  puts("<");
  return 0;
}



undefined4 var0429_0123456789(void)

{
  int __c;
  
  fputs("0429 unsign start:48, iter:10, inc:+1, order:ujb cmp:!=0               expected=\'0123456789\' >"
        ,stdout);
  __c = 0x2f;
  while (__c = __c + 1, __c != 0x3a) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0430_0123456789(void)

{
  uint __c;
  
  fputs("0430 unsign start:48, iter:10, inc:+1, order:ujb cmp:< 0               expected=\'0123456789\' >"
        ,stdout);
  __c = 0x2f;
  while (__c = __c + 1, __c < 0x3a) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0431_0123456789(void)

{
  uint __c;
  
  fputs("0431 unsign start:48, iter:10, inc:+1, order:ujb cmp:<=0               expected=\'0123456789\' >"
        ,stdout);
  __c = 0x2f;
  while (__c = __c + 1, __c < 0x3a) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0432_0123456789(void)

{
  int __c;
  
  fputs("0432 unsign start:48, iter:10, inc:+1, order:jbu cmp:!=0               expected=\'0123456789\' >"
        ,stdout);
  for (__c = 0x30; __c != 0x3a; __c = __c + 1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0433_0123456789(void)

{
  uint __c;
  
  fputs("0433 unsign start:48, iter:10, inc:+1, order:jbu cmp:< 0               expected=\'0123456789\' >"
        ,stdout);
  for (__c = 0x30; __c < 0x3a; __c = __c + 1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0434_0123456789(void)

{
  uint __c;
  
  fputs("0434 unsign start:48, iter:10, inc:+1, order:jbu cmp:<=0               expected=\'0123456789\' >"
        ,stdout);
  for (__c = 0x30; __c < 0x3a; __c = __c + 1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0435_0123456789(void)

{
  int __c;
  
  fputs("0435 unsign start:48, iter:10, inc:+1, order:jub cmp:!=0               expected=\'0123456789\' >"
        ,stdout);
  __c = 0x2f;
  while (__c != 0x39) {
    __c = __c + 1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0436_0123456789(void)

{
  uint __c;
  
  fputs("0436 unsign start:48, iter:10, inc:+1, order:jub cmp:< 0               expected=\'0123456789\' >"
        ,stdout);
  __c = 0x2f;
  while (__c < 0x39) {
    __c = __c + 1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0437_0123456789(void)

{
  uint __c;
  
  fputs("0437 unsign start:48, iter:10, inc:+1, order:jub cmp:<=0               expected=\'0123456789\' >"
        ,stdout);
  __c = 0x2f;
  while (__c < 0x39) {
    __c = __c + 1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0438_0123456789(void)

{
  int iVar1;
  
  fputs("0438 unsign start:0, iter:10, inc:+1, order:buj cmp:!=0 exp:+48        expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 0;
  do {
    putchar(iVar1 + 0x30);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 10);
  puts("<");
  return 0;
}



undefined4 var0439_0123456789(void)

{
  uint uVar1;
  
  fputs("0439 unsign start:0, iter:10, inc:+1, order:buj cmp:< 0 exp:+48        expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0;
  do {
    putchar(uVar1 + 0x30);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 10);
  puts("<");
  return 0;
}



undefined4 var0440_0123456789(void)

{
  uint uVar1;
  
  fputs("0440 unsign start:0, iter:10, inc:+1, order:buj cmp:<=0 exp:+48        expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0;
  do {
    putchar(uVar1 + 0x30);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 10);
  puts("<");
  return 0;
}



undefined4 var0441_0123456789(void)

{
  int iVar1;
  
  fputs("0441 unsign start:0, iter:10, inc:+1, order:bju cmp:!=0 exp:+48        expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 0;
  while( true ) {
    putchar(iVar1 + 0x30);
    if (iVar1 == 9) break;
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0442_0123456789(void)

{
  uint uVar1;
  
  fputs("0442 unsign start:0, iter:10, inc:+1, order:bju cmp:< 0 exp:+48        expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0;
  while( true ) {
    putchar(uVar1 + 0x30);
    if (8 < uVar1) break;
    uVar1 = uVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0443_0123456789(void)

{
  int iVar1;
  int iVar2;
  
  fputs("0443 unsign start:0, iter:10, inc:+1, order:ubj cmp:!=0 exp:+48        expected=\'0123456789\' >"
        ,stdout);
  iVar2 = -1;
  do {
    iVar1 = iVar2 + 1;
    putchar(iVar2 + 0x31);
    iVar2 = iVar1;
  } while (iVar1 != 9);
  puts("<");
  return 0;
}



undefined4 var0444_0123456789(void)

{
  uint uVar1;
  uint uVar2;
  
  fputs("0444 unsign start:0, iter:10, inc:+1, order:ubj cmp:< 0 exp:+48        expected=\'0123456789\' >"
        ,stdout);
  uVar2 = 0xffffffff;
  do {
    uVar1 = uVar2 + 1;
    putchar(uVar2 + 0x31);
    uVar2 = uVar1;
  } while (uVar1 < 9);
  puts("<");
  return 0;
}



undefined4 var0445_0123456789(void)

{
  int iVar1;
  
  fputs("0445 unsign start:0, iter:10, inc:+1, order:ujb cmp:!=0 exp:+48        expected=\'0123456789\' >"
        ,stdout);
  iVar1 = -1;
  while (iVar1 + 1 != 10) {
    putchar(iVar1 + 0x31);
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0446_0123456789(void)

{
  uint uVar1;
  
  fputs("0446 unsign start:0, iter:10, inc:+1, order:ujb cmp:< 0 exp:+48        expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xffffffff;
  while (uVar1 + 1 < 10) {
    putchar(uVar1 + 0x31);
    uVar1 = uVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0447_0123456789(void)

{
  uint uVar1;
  
  fputs("0447 unsign start:0, iter:10, inc:+1, order:ujb cmp:<=0 exp:+48        expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xffffffff;
  while (uVar1 + 1 < 10) {
    putchar(uVar1 + 0x31);
    uVar1 = uVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0448_0123456789(void)

{
  int iVar1;
  
  fputs("0448 unsign start:0, iter:10, inc:+1, order:jbu cmp:!=0 exp:+48        expected=\'0123456789\' >"
        ,stdout);
  for (iVar1 = 0; iVar1 != 10; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x30);
  }
  puts("<");
  return 0;
}



undefined4 var0449_0123456789(void)

{
  uint uVar1;
  
  fputs("0449 unsign start:0, iter:10, inc:+1, order:jbu cmp:< 0 exp:+48        expected=\'0123456789\' >"
        ,stdout);
  for (uVar1 = 0; uVar1 < 10; uVar1 = uVar1 + 1) {
    putchar(uVar1 + 0x30);
  }
  puts("<");
  return 0;
}



undefined4 var0450_0123456789(void)

{
  uint uVar1;
  
  fputs("0450 unsign start:0, iter:10, inc:+1, order:jbu cmp:<=0 exp:+48        expected=\'0123456789\' >"
        ,stdout);
  for (uVar1 = 0; uVar1 < 10; uVar1 = uVar1 + 1) {
    putchar(uVar1 + 0x30);
  }
  puts("<");
  return 0;
}



undefined4 var0451_0123456789(void)

{
  int iVar1;
  
  fputs("0451 unsign start:0, iter:10, inc:+1, order:jub cmp:!=0 exp:+48        expected=\'0123456789\' >"
        ,stdout);
  for (iVar1 = -1; iVar1 != 9; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x31);
  }
  puts("<");
  return 0;
}



undefined4 var0452_0123456789(void)

{
  uint uVar1;
  
  fputs("0452 unsign start:16, iter:10, inc:+2, order:buj cmp:!=0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0x10;
  do {
    putchar((uVar1 >> 1) + 0x28);
    uVar1 = uVar1 + 2;
  } while (uVar1 != 0x24);
  puts("<");
  return 0;
}



undefined4 var0453_0123456789(void)

{
  uint uVar1;
  
  fputs("0453 unsign start:16, iter:10, inc:+2, order:buj cmp:< 0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0x10;
  do {
    putchar((uVar1 >> 1) + 0x28);
    uVar1 = uVar1 + 2;
  } while (uVar1 < 0x24);
  puts("<");
  return 0;
}



undefined4 var0454_0123456789(void)

{
  uint uVar1;
  
  fputs("0454 unsign start:16, iter:10, inc:+2, order:buj cmp:< 1 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0x10;
  do {
    putchar((uVar1 >> 1) + 0x28);
    uVar1 = uVar1 + 2;
  } while (uVar1 < 0x23);
  puts("<");
  return 0;
}



undefined4 var0455_0123456789(void)

{
  uint uVar1;
  
  fputs("0455 unsign start:16, iter:10, inc:+2, order:buj cmp:<=0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0x10;
  do {
    putchar((uVar1 >> 1) + 0x28);
    uVar1 = uVar1 + 2;
  } while (uVar1 < 0x24);
  puts("<");
  return 0;
}



undefined4 var0456_0123456789(void)

{
  uint uVar1;
  
  fputs("0456 unsign start:16, iter:10, inc:+2, order:buj cmp:<=1 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0x10;
  do {
    putchar((uVar1 >> 1) + 0x28);
    uVar1 = uVar1 + 2;
  } while (uVar1 < 0x23);
  puts("<");
  return 0;
}



undefined4 var0457_0123456789(void)

{
  uint uVar1;
  
  fputs("0457 unsign start:16, iter:10, inc:+2, order:bju cmp:!=0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0x10;
  while( true ) {
    putchar((uVar1 >> 1) + 0x28);
    if (uVar1 == 0x22) break;
    uVar1 = uVar1 + 2;
  }
  puts("<");
  return 0;
}



undefined4 var0458_0123456789(void)

{
  uint uVar1;
  
  fputs("0458 unsign start:16, iter:10, inc:+2, order:bju cmp:< 0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0x10;
  while( true ) {
    putchar((uVar1 >> 1) + 0x28);
    if (0x21 < uVar1) break;
    uVar1 = uVar1 + 2;
  }
  puts("<");
  return 0;
}



undefined4 var0459_0123456789(void)

{
  uint uVar1;
  
  fputs("0459 unsign start:16, iter:10, inc:+2, order:bju cmp:< 1 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0x10;
  while( true ) {
    putchar((uVar1 >> 1) + 0x28);
    if (0x20 < uVar1) break;
    uVar1 = uVar1 + 2;
  }
  puts("<");
  return 0;
}



undefined4 var0460_0123456789(void)

{
  uint uVar1;
  
  fputs("0460 unsign start:16, iter:10, inc:+2, order:bju cmp:<=0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0x10;
  while( true ) {
    putchar((uVar1 >> 1) + 0x28);
    if (0x21 < uVar1) break;
    uVar1 = uVar1 + 2;
  }
  puts("<");
  return 0;
}



undefined4 var0461_0123456789(void)

{
  uint uVar1;
  
  fputs("0461 unsign start:16, iter:10, inc:+2, order:bju cmp:<=1 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0x10;
  while( true ) {
    putchar((uVar1 >> 1) + 0x28);
    if (0x20 < uVar1) break;
    uVar1 = uVar1 + 2;
  }
  puts("<");
  return 0;
}



undefined4 var0462_0123456789(void)

{
  uint uVar1;
  
  fputs("0462 unsign start:16, iter:10, inc:+2, order:ubj cmp:!=0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xe;
  do {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  } while (uVar1 != 0x22);
  puts("<");
  return 0;
}



undefined4 var0463_0123456789(void)

{
  uint uVar1;
  
  fputs("0463 unsign start:16, iter:10, inc:+2, order:ubj cmp:< 0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xe;
  do {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  } while (uVar1 < 0x22);
  puts("<");
  return 0;
}



undefined4 var0464_0123456789(void)

{
  uint uVar1;
  
  fputs("0464 unsign start:16, iter:10, inc:+2, order:ubj cmp:< 1 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xe;
  do {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  } while (uVar1 < 0x21);
  puts("<");
  return 0;
}



undefined4 var0465_0123456789(void)

{
  uint uVar1;
  
  fputs("0465 unsign start:16, iter:10, inc:+2, order:ubj cmp:<=0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xe;
  do {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  } while (uVar1 < 0x22);
  puts("<");
  return 0;
}



undefined4 var0466_0123456789(void)

{
  uint uVar1;
  
  fputs("0466 unsign start:16, iter:10, inc:+2, order:ubj cmp:<=1 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xe;
  do {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  } while (uVar1 < 0x21);
  puts("<");
  return 0;
}



undefined4 var0467_0123456789(void)

{
  uint uVar1;
  
  fputs("0467 unsign start:16, iter:10, inc:+2, order:ujb cmp:!=0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xe;
  while (uVar1 = uVar1 + 2, uVar1 != 0x24) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0468_0123456789(void)

{
  uint uVar1;
  
  fputs("0468 unsign start:16, iter:10, inc:+2, order:ujb cmp:< 0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xe;
  while (uVar1 = uVar1 + 2, uVar1 < 0x24) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0469_0123456789(void)

{
  uint uVar1;
  
  fputs("0469 unsign start:16, iter:10, inc:+2, order:ujb cmp:< 1 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xe;
  while (uVar1 = uVar1 + 2, uVar1 < 0x23) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0470_0123456789(void)

{
  uint uVar1;
  
  fputs("0470 unsign start:16, iter:10, inc:+2, order:ujb cmp:<=0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xe;
  while (uVar1 = uVar1 + 2, uVar1 < 0x24) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0471_0123456789(void)

{
  uint uVar1;
  
  fputs("0471 unsign start:16, iter:10, inc:+2, order:ujb cmp:<=1 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xe;
  while (uVar1 = uVar1 + 2, uVar1 < 0x23) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0472_0123456789(void)

{
  uint uVar1;
  
  fputs("0472 unsign start:16, iter:10, inc:+2, order:jbu cmp:!=0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  for (uVar1 = 0x10; uVar1 != 0x24; uVar1 = uVar1 + 2) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0473_0123456789(void)

{
  uint uVar1;
  
  fputs("0473 unsign start:16, iter:10, inc:+2, order:jbu cmp:< 0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  for (uVar1 = 0x10; uVar1 < 0x24; uVar1 = uVar1 + 2) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0474_0123456789(void)

{
  uint uVar1;
  
  fputs("0474 unsign start:16, iter:10, inc:+2, order:jbu cmp:< 1 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  for (uVar1 = 0x10; uVar1 < 0x23; uVar1 = uVar1 + 2) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0475_0123456789(void)

{
  uint uVar1;
  
  fputs("0475 unsign start:16, iter:10, inc:+2, order:jbu cmp:<=0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  for (uVar1 = 0x10; uVar1 < 0x24; uVar1 = uVar1 + 2) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0476_0123456789(void)

{
  uint uVar1;
  
  fputs("0476 unsign start:16, iter:10, inc:+2, order:jbu cmp:<=1 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  for (uVar1 = 0x10; uVar1 < 0x23; uVar1 = uVar1 + 2) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0477_0123456789(void)

{
  uint uVar1;
  
  fputs("0477 unsign start:16, iter:10, inc:+2, order:jub cmp:!=0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xe;
  while (uVar1 != 0x22) {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0478_0123456789(void)

{
  uint uVar1;
  
  fputs("0478 unsign start:16, iter:10, inc:+2, order:jub cmp:< 0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xe;
  while (uVar1 < 0x22) {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0479_0123456789(void)

{
  uint uVar1;
  
  fputs("0479 unsign start:16, iter:10, inc:+2, order:jub cmp:< 1 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xe;
  while (uVar1 < 0x21) {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0480_0123456789(void)

{
  uint uVar1;
  
  fputs("0480 unsign start:16, iter:10, inc:+2, order:jub cmp:<=0 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xe;
  while (uVar1 < 0x22) {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0481_0123456789(void)

{
  uint uVar1;
  
  fputs("0481 unsign start:16, iter:10, inc:+2, order:jub cmp:<=1 exp:/2 +40    expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xe;
  while (uVar1 < 0x21) {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0482_9876543210(void)

{
  int __c;
  
  fputs("0482 unsign start:57, iter:10, inc:-1, order:buj cmp:!=0               expected=\'9876543210\' >"
        ,stdout);
  __c = 0x39;
  do {
    putchar(__c);
    __c = __c + -1;
  } while (__c != 0x2f);
  puts("<");
  return 0;
}



undefined4 var0483_9876543210(void)

{
  uint __c;
  
  fputs("0483 unsign start:57, iter:10, inc:-1, order:buj cmp:< 0               expected=\'9876543210\' >"
        ,stdout);
  __c = 0x39;
  do {
    putchar(__c);
    __c = __c - 1;
  } while (0x2f < __c);
  puts("<");
  return 0;
}



undefined4 var0484_9876543210(void)

{
  uint __c;
  
  fputs("0484 unsign start:57, iter:10, inc:-1, order:buj cmp:<=0               expected=\'9876543210\' >"
        ,stdout);
  __c = 0x39;
  do {
    putchar(__c);
    __c = __c - 1;
  } while (0x2f < __c);
  puts("<");
  return 0;
}



undefined4 var0485_9876543210(void)

{
  int __c;
  
  fputs("0485 unsign start:57, iter:10, inc:-1, order:bju cmp:!=0               expected=\'9876543210\' >"
        ,stdout);
  __c = 0x39;
  while( true ) {
    putchar(__c);
    if (__c == 0x30) break;
    __c = __c + -1;
  }
  puts("<");
  return 0;
}



undefined4 var0486_9876543210(void)

{
  uint __c;
  
  fputs("0486 unsign start:57, iter:10, inc:-1, order:bju cmp:< 0               expected=\'9876543210\' >"
        ,stdout);
  __c = 0x39;
  while( true ) {
    putchar(__c);
    if (__c < 0x31) break;
    __c = __c - 1;
  }
  puts("<");
  return 0;
}



undefined4 var0487_9876543210(void)

{
  uint __c;
  
  fputs("0487 unsign start:57, iter:10, inc:-1, order:bju cmp:<=0               expected=\'9876543210\' >"
        ,stdout);
  __c = 0x39;
  while( true ) {
    putchar(__c);
    if (__c < 0x31) break;
    __c = __c - 1;
  }
  puts("<");
  return 0;
}



undefined4 var0488_9876543210(void)

{
  int __c;
  
  fputs("0488 unsign start:57, iter:10, inc:-1, order:ubj cmp:!=0               expected=\'9876543210\' >"
        ,stdout);
  __c = 0x3a;
  do {
    __c = __c + -1;
    putchar(__c);
  } while (__c != 0x30);
  puts("<");
  return 0;
}



undefined4 var0489_9876543210(void)

{
  uint __c;
  
  fputs("0489 unsign start:57, iter:10, inc:-1, order:ubj cmp:< 0               expected=\'9876543210\' >"
        ,stdout);
  __c = 0x3a;
  do {
    __c = __c - 1;
    putchar(__c);
  } while (0x30 < __c);
  puts("<");
  return 0;
}



undefined4 var0490_9876543210(void)

{
  uint __c;
  
  fputs("0490 unsign start:57, iter:10, inc:-1, order:ubj cmp:<=0               expected=\'9876543210\' >"
        ,stdout);
  __c = 0x3a;
  do {
    __c = __c - 1;
    putchar(__c);
  } while (0x30 < __c);
  puts("<");
  return 0;
}



undefined4 var0491_9876543210(void)

{
  int __c;
  
  fputs("0491 unsign start:57, iter:10, inc:-1, order:ujb cmp:!=0               expected=\'9876543210\' >"
        ,stdout);
  __c = 0x3a;
  while (__c = __c + -1, __c != 0x2f) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0492_9876543210(void)

{
  uint __c;
  
  fputs("0492 unsign start:57, iter:10, inc:-1, order:ujb cmp:< 0               expected=\'9876543210\' >"
        ,stdout);
  __c = 0x3a;
  while (__c = __c - 1, 0x2f < __c) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0493_9876543210(void)

{
  uint __c;
  
  fputs("0493 unsign start:57, iter:10, inc:-1, order:ujb cmp:<=0               expected=\'9876543210\' >"
        ,stdout);
  __c = 0x3a;
  while (__c = __c - 1, 0x2f < __c) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0494_9876543210(void)

{
  int __c;
  
  fputs("0494 unsign start:57, iter:10, inc:-1, order:jbu cmp:!=0               expected=\'9876543210\' >"
        ,stdout);
  for (__c = 0x39; __c != 0x2f; __c = __c + -1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0495_9876543210(void)

{
  uint __c;
  
  fputs("0495 unsign start:57, iter:10, inc:-1, order:jbu cmp:< 0               expected=\'9876543210\' >"
        ,stdout);
  for (__c = 0x39; 0x2f < __c; __c = __c - 1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0496_9876543210(void)

{
  uint __c;
  
  fputs("0496 unsign start:57, iter:10, inc:-1, order:jbu cmp:<=0               expected=\'9876543210\' >"
        ,stdout);
  for (__c = 0x39; 0x2f < __c; __c = __c - 1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0497_9876543210(void)

{
  int __c;
  
  fputs("0497 unsign start:57, iter:10, inc:-1, order:jub cmp:!=0               expected=\'9876543210\' >"
        ,stdout);
  __c = 0x3a;
  while (__c != 0x30) {
    __c = __c + -1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0498_9876543210(void)

{
  uint __c;
  
  fputs("0498 unsign start:57, iter:10, inc:-1, order:jub cmp:< 0               expected=\'9876543210\' >"
        ,stdout);
  __c = 0x3a;
  while (0x30 < __c) {
    __c = __c - 1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0499_9876543210(void)

{
  uint __c;
  
  fputs("0499 unsign start:57, iter:10, inc:-1, order:jub cmp:<=0               expected=\'9876543210\' >"
        ,stdout);
  __c = 0x3a;
  while (0x30 < __c) {
    __c = __c - 1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0500_9876543210(void)

{
  uint uVar1;
  
  fputs("0500 unsign start:100, iter:10, inc:-2, order:buj cmp:!=0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 100;
  do {
    putchar((uVar1 >> 1) + 7);
    uVar1 = uVar1 - 2;
  } while (uVar1 != 0x50);
  puts("<");
  return 0;
}



undefined4 var0501_9876543210(void)

{
  uint uVar1;
  
  fputs("0501 unsign start:100, iter:10, inc:-2, order:buj cmp:< -1 exp:/2 +7   expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 100;
  do {
    putchar((uVar1 >> 1) + 7);
    uVar1 = uVar1 - 2;
  } while (0x51 < uVar1);
  puts("<");
  return 0;
}



undefined4 var0502_9876543210(void)

{
  uint uVar1;
  
  fputs("0502 unsign start:100, iter:10, inc:-2, order:buj cmp:< 0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 100;
  do {
    putchar((uVar1 >> 1) + 7);
    uVar1 = uVar1 - 2;
  } while (0x50 < uVar1);
  puts("<");
  return 0;
}



undefined4 var0503_9876543210(void)

{
  uint uVar1;
  
  fputs("0503 unsign start:100, iter:10, inc:-2, order:buj cmp:<=-1 exp:/2 +7   expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 100;
  do {
    putchar((uVar1 >> 1) + 7);
    uVar1 = uVar1 - 2;
  } while (0x51 < uVar1);
  puts("<");
  return 0;
}



undefined4 var0504_9876543210(void)

{
  uint uVar1;
  
  fputs("0504 unsign start:100, iter:10, inc:-2, order:buj cmp:<=0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 100;
  do {
    putchar((uVar1 >> 1) + 7);
    uVar1 = uVar1 - 2;
  } while (0x50 < uVar1);
  puts("<");
  return 0;
}



undefined4 var0505_9876543210(void)

{
  uint uVar1;
  
  fputs("0505 unsign start:100, iter:10, inc:-2, order:bju cmp:!=0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 100;
  while( true ) {
    putchar((uVar1 >> 1) + 7);
    if (uVar1 == 0x52) break;
    uVar1 = uVar1 - 2;
  }
  puts("<");
  return 0;
}



undefined4 var0506_9876543210(void)

{
  uint uVar1;
  
  fputs("0506 unsign start:100, iter:10, inc:-2, order:bju cmp:< -1 exp:/2 +7   expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 100;
  while( true ) {
    putchar((uVar1 >> 1) + 7);
    if (uVar1 < 0x54) break;
    uVar1 = uVar1 - 2;
  }
  puts("<");
  return 0;
}



undefined4 var0507_9876543210(void)

{
  uint uVar1;
  
  fputs("0507 unsign start:100, iter:10, inc:-2, order:bju cmp:< 0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 100;
  while( true ) {
    putchar((uVar1 >> 1) + 7);
    if (uVar1 < 0x53) break;
    uVar1 = uVar1 - 2;
  }
  puts("<");
  return 0;
}



undefined4 var0508_9876543210(void)

{
  uint uVar1;
  
  fputs("0508 unsign start:100, iter:10, inc:-2, order:bju cmp:<=-1 exp:/2 +7   expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 100;
  while( true ) {
    putchar((uVar1 >> 1) + 7);
    if (uVar1 < 0x54) break;
    uVar1 = uVar1 - 2;
  }
  puts("<");
  return 0;
}



undefined4 var0509_9876543210(void)

{
  uint uVar1;
  
  fputs("0509 unsign start:100, iter:10, inc:-2, order:bju cmp:<=0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 100;
  while( true ) {
    putchar((uVar1 >> 1) + 7);
    if (uVar1 < 0x53) break;
    uVar1 = uVar1 - 2;
  }
  puts("<");
  return 0;
}



undefined4 var0510_9876543210(void)

{
  uint uVar1;
  
  fputs("0510 unsign start:100, iter:10, inc:-2, order:ubj cmp:!=0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 0x66;
  do {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  } while (uVar1 != 0x52);
  puts("<");
  return 0;
}



undefined4 var0511_9876543210(void)

{
  uint uVar1;
  
  fputs("0511 unsign start:100, iter:10, inc:-2, order:ubj cmp:< -1 exp:/2 +7   expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 0x66;
  do {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  } while (0x53 < uVar1);
  puts("<");
  return 0;
}



undefined4 var0512_9876543210(void)

{
  uint uVar1;
  
  fputs("0512 unsign start:100, iter:10, inc:-2, order:ubj cmp:< 0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 0x66;
  do {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  } while (0x52 < uVar1);
  puts("<");
  return 0;
}



undefined4 var0513_9876543210(void)

{
  uint uVar1;
  
  fputs("0513 unsign start:100, iter:10, inc:-2, order:ubj cmp:<=-1 exp:/2 +7   expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 0x66;
  do {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  } while (0x53 < uVar1);
  puts("<");
  return 0;
}



undefined4 var0514_9876543210(void)

{
  uint uVar1;
  
  fputs("0514 unsign start:100, iter:10, inc:-2, order:ubj cmp:<=0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 0x66;
  do {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  } while (0x52 < uVar1);
  puts("<");
  return 0;
}



undefined4 var0515_9876543210(void)

{
  uint uVar1;
  
  fputs("0515 unsign start:100, iter:10, inc:-2, order:ujb cmp:!=0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 0x66;
  while (uVar1 = uVar1 - 2, uVar1 != 0x50) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0516_9876543210(void)

{
  uint uVar1;
  
  fputs("0516 unsign start:100, iter:10, inc:-2, order:ujb cmp:< -1 exp:/2 +7   expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 0x66;
  while (uVar1 = uVar1 - 2, 0x51 < uVar1) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0517_9876543210(void)

{
  uint uVar1;
  
  fputs("0517 unsign start:100, iter:10, inc:-2, order:ujb cmp:< 0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 0x66;
  while (uVar1 = uVar1 - 2, 0x50 < uVar1) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0518_9876543210(void)

{
  uint uVar1;
  
  fputs("0518 unsign start:100, iter:10, inc:-2, order:ujb cmp:<=-1 exp:/2 +7   expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 0x66;
  while (uVar1 = uVar1 - 2, 0x51 < uVar1) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0519_9876543210(void)

{
  uint uVar1;
  
  fputs("0519 unsign start:100, iter:10, inc:-2, order:ujb cmp:<=0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 0x66;
  while (uVar1 = uVar1 - 2, 0x50 < uVar1) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0520_9876543210(void)

{
  uint uVar1;
  
  fputs("0520 unsign start:100, iter:10, inc:-2, order:jbu cmp:!=0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  for (uVar1 = 100; uVar1 != 0x50; uVar1 = uVar1 - 2) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0521_9876543210(void)

{
  uint uVar1;
  
  fputs("0521 unsign start:100, iter:10, inc:-2, order:jbu cmp:< -1 exp:/2 +7   expected=\'9876543210\' >"
        ,stdout);
  for (uVar1 = 100; 0x51 < uVar1; uVar1 = uVar1 - 2) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0522_9876543210(void)

{
  uint uVar1;
  
  fputs("0522 unsign start:100, iter:10, inc:-2, order:jbu cmp:< 0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  for (uVar1 = 100; 0x50 < uVar1; uVar1 = uVar1 - 2) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0523_9876543210(void)

{
  uint uVar1;
  
  fputs("0523 unsign start:100, iter:10, inc:-2, order:jbu cmp:<=-1 exp:/2 +7   expected=\'9876543210\' >"
        ,stdout);
  for (uVar1 = 100; 0x51 < uVar1; uVar1 = uVar1 - 2) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0524_9876543210(void)

{
  uint uVar1;
  
  fputs("0524 unsign start:100, iter:10, inc:-2, order:jbu cmp:<=0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  for (uVar1 = 100; 0x50 < uVar1; uVar1 = uVar1 - 2) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0525_9876543210(void)

{
  uint uVar1;
  
  fputs("0525 unsign start:100, iter:10, inc:-2, order:jub cmp:!=0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 0x66;
  while (uVar1 != 0x52) {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0526_9876543210(void)

{
  uint uVar1;
  
  fputs("0526 unsign start:100, iter:10, inc:-2, order:jub cmp:< -1 exp:/2 +7   expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 0x66;
  while (0x53 < uVar1) {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0527_9876543210(void)

{
  uint uVar1;
  
  fputs("0527 unsign start:100, iter:10, inc:-2, order:jub cmp:< 0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 0x66;
  while (0x52 < uVar1) {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0528_9876543210(void)

{
  uint uVar1;
  
  fputs("0528 unsign start:100, iter:10, inc:-2, order:jub cmp:<=-1 exp:/2 +7   expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 0x66;
  while (0x53 < uVar1) {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0529_9876543210(void)

{
  uint uVar1;
  
  fputs("0529 unsign start:100, iter:10, inc:-2, order:jub cmp:<=0 exp:/2 +7    expected=\'9876543210\' >"
        ,stdout);
  uVar1 = 0x66;
  while (0x52 < uVar1) {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0530_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0530 unsign start:0, iter:10, inc:+1, order:buj cmp:!=0 second:=48 +1  expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 0;
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 10);
  puts("<");
  return 0;
}



undefined4 var0531_0123456789(void)

{
  uint uVar1;
  int __c;
  
  fputs("0531 unsign start:0, iter:10, inc:+1, order:buj cmp:< 0 second:=48 +1  expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0;
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 10);
  puts("<");
  return 0;
}



undefined4 var0532_0123456789(void)

{
  uint uVar1;
  int __c;
  
  fputs("0532 unsign start:0, iter:10, inc:+1, order:buj cmp:<=0 second:=48 +1  expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0;
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 10);
  puts("<");
  return 0;
}



undefined4 var0533_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0533 unsign start:0, iter:10, inc:+1, order:bju cmp:!=0 second:=48 +1  expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 0;
  __c = 0x30;
  while( true ) {
    putchar(__c);
    __c = __c + 1;
    if (iVar1 == 9) break;
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0534_0123456789(void)

{
  uint uVar1;
  int __c;
  
  fputs("0534 unsign start:0, iter:10, inc:+1, order:bju cmp:< 0 second:=48 +1  expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0;
  __c = 0x30;
  while( true ) {
    putchar(__c);
    __c = __c + 1;
    if (8 < uVar1) break;
    uVar1 = uVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0535_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0535 unsign start:0, iter:10, inc:+1, order:ubj cmp:!=0 second:=48 +1  expected=\'0123456789\' >"
        ,stdout);
  iVar1 = -1;
  __c = 0x30;
  do {
    iVar1 = iVar1 + 1;
    putchar(__c);
    __c = __c + 1;
  } while (iVar1 != 9);
  puts("<");
  return 0;
}



undefined4 var0536_0123456789(void)

{
  uint uVar1;
  int __c;
  
  fputs("0536 unsign start:0, iter:10, inc:+1, order:ubj cmp:< 0 second:=48 +1  expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xffffffff;
  __c = 0x30;
  do {
    uVar1 = uVar1 + 1;
    putchar(__c);
    __c = __c + 1;
  } while (uVar1 < 9);
  puts("<");
  return 0;
}



undefined4 var0537_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0537 unsign start:0, iter:10, inc:+1, order:ujb cmp:!=0 second:=48 +1  expected=\'0123456789\' >"
        ,stdout);
  iVar1 = -1;
  __c = 0x30;
  while (iVar1 = iVar1 + 1, iVar1 != 10) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0538_0123456789(void)

{
  uint uVar1;
  int __c;
  
  fputs("0538 unsign start:0, iter:10, inc:+1, order:ujb cmp:< 0 second:=48 +1  expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xffffffff;
  __c = 0x30;
  while (uVar1 = uVar1 + 1, uVar1 < 10) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0539_0123456789(void)

{
  uint uVar1;
  int __c;
  
  fputs("0539 unsign start:0, iter:10, inc:+1, order:ujb cmp:<=0 second:=48 +1  expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xffffffff;
  __c = 0x30;
  while (uVar1 = uVar1 + 1, uVar1 < 10) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0540_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0540 unsign start:0, iter:10, inc:+1, order:jbu cmp:!=0 second:=48 +1  expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  for (iVar1 = 0; iVar1 != 10; iVar1 = iVar1 + 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0541_0123456789(void)

{
  uint uVar1;
  int __c;
  
  fputs("0541 unsign start:0, iter:10, inc:+1, order:jbu cmp:< 0 second:=48 +1  expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  for (uVar1 = 0; uVar1 < 10; uVar1 = uVar1 + 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0542_0123456789(void)

{
  uint uVar1;
  int __c;
  
  fputs("0542 unsign start:0, iter:10, inc:+1, order:jbu cmp:<=0 second:=48 +1  expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  for (uVar1 = 0; uVar1 < 10; uVar1 = uVar1 + 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0543_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0543 unsign start:0, iter:10, inc:+1, order:jub cmp:!=0 second:=48 +1  expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  for (iVar1 = -1; iVar1 != 9; iVar1 = iVar1 + 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0544_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0544 unsign start:10, iter:10, inc:-1, order:buj cmp:!=0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 10;
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puts("<");
  return 0;
}



undefined4 var0545_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0545 unsign start:10, iter:10, inc:-1, order:buj cmp:< 0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 10;
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puts("<");
  return 0;
}



undefined4 var0546_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0546 unsign start:10, iter:10, inc:-1, order:buj cmp:<=0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 10;
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puts("<");
  return 0;
}



undefined4 var0547_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0547 unsign start:10, iter:10, inc:-1, order:bju cmp:!=0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 10;
  __c = 0x30;
  while( true ) {
    putchar(__c);
    __c = __c + 1;
    if (iVar1 == 1) break;
    iVar1 = iVar1 + -1;
  }
  puts("<");
  return 0;
}



undefined4 var0548_0123456789(void)

{
  uint uVar1;
  int __c;
  
  fputs("0548 unsign start:10, iter:10, inc:-1, order:bju cmp:< 0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 10;
  __c = 0x30;
  while( true ) {
    putchar(__c);
    __c = __c + 1;
    if (uVar1 < 2) break;
    uVar1 = uVar1 - 1;
  }
  puts("<");
  return 0;
}



undefined4 var0549_0123456789(void)

{
  uint uVar1;
  int __c;
  
  fputs("0549 unsign start:10, iter:10, inc:-1, order:bju cmp:<=0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 10;
  __c = 0x30;
  while( true ) {
    putchar(__c);
    __c = __c + 1;
    if (uVar1 < 2) break;
    uVar1 = uVar1 - 1;
  }
  puts("<");
  return 0;
}



undefined4 var0550_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0550 unsign start:10, iter:10, inc:-1, order:ubj cmp:!=0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 0xb;
  __c = 0x30;
  do {
    iVar1 = iVar1 + -1;
    putchar(__c);
    __c = __c + 1;
  } while (iVar1 != 1);
  puts("<");
  return 0;
}



undefined4 var0551_0123456789(void)

{
  uint uVar1;
  int __c;
  
  fputs("0551 unsign start:10, iter:10, inc:-1, order:ubj cmp:< 0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xb;
  __c = 0x30;
  do {
    uVar1 = uVar1 - 1;
    putchar(__c);
    __c = __c + 1;
  } while (1 < uVar1);
  puts("<");
  return 0;
}



undefined4 var0552_0123456789(void)

{
  uint uVar1;
  int __c;
  
  fputs("0552 unsign start:10, iter:10, inc:-1, order:ubj cmp:<=0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  uVar1 = 0xb;
  __c = 0x30;
  do {
    uVar1 = uVar1 - 1;
    putchar(__c);
    __c = __c + 1;
  } while (1 < uVar1);
  puts("<");
  return 0;
}



undefined4 var0553_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0553 unsign start:10, iter:10, inc:-1, order:ujb cmp:!=0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 0xb;
  __c = 0x30;
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0554_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0554 unsign start:10, iter:10, inc:-1, order:ujb cmp:< 0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 0xb;
  __c = 0x30;
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0555_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0555 unsign start:10, iter:10, inc:-1, order:ujb cmp:<=0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  iVar1 = 0xb;
  __c = 0x30;
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0556_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0556 unsign start:10, iter:10, inc:-1, order:jbu cmp:!=0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0557_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0557 unsign start:10, iter:10, inc:-1, order:jbu cmp:< 0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0558_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0558 unsign start:10, iter:10, inc:-1, order:jbu cmp:<=0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0559_0123456789(void)

{
  int iVar1;
  int __c;
  
  fputs("0559 unsign start:10, iter:10, inc:-1, order:jub cmp:!=0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  for (iVar1 = 0xb; iVar1 != 1; iVar1 = iVar1 + -1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0560_0123456789(void)

{
  uint uVar1;
  int __c;
  
  fputs("0560 unsign start:10, iter:10, inc:-1, order:jub cmp:< 0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  for (uVar1 = 0xb; 1 < uVar1; uVar1 = uVar1 - 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0561_0123456789(void)

{
  uint uVar1;
  int __c;
  
  fputs("0561 unsign start:10, iter:10, inc:-1, order:jub cmp:<=0 second:=48 +1 expected=\'0123456789\' >"
        ,stdout);
  __c = 0x30;
  for (uVar1 = 0xb; 1 < uVar1; uVar1 = uVar1 - 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0562_0(void)

{
  int __c;
  
  fputs("0562 unsign start:48, iter:1, inc:+1, order:buj cmp:!=0                expected=\'0\'   >",
        stdout);
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
  } while (__c != 0x31);
  puts("<");
  return 0;
}



undefined4 var0563_0(void)

{
  uint __c;
  
  fputs("0563 unsign start:48, iter:1, inc:+1, order:buj cmp:< 0                expected=\'0\'   >",
        stdout);
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
  } while (__c < 0x31);
  puts("<");
  return 0;
}



undefined4 var0564_0(void)

{
  uint __c;
  
  fputs("0564 unsign start:48, iter:1, inc:+1, order:buj cmp:<=0                expected=\'0\'   >",
        stdout);
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
  } while (__c < 0x31);
  puts("<");
  return 0;
}



undefined4 var0565_0(void)

{
  int __c;
  
  fputs("0565 unsign start:48, iter:1, inc:+1, order:bju cmp:!=0                expected=\'0\'   >",
        stdout);
  __c = 0x30;
  while( true ) {
    putchar(__c);
    if (__c == 0x30) break;
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0566_0(void)

{
  uint __c;
  
  fputs("0566 unsign start:48, iter:1, inc:+1, order:bju cmp:< 0                expected=\'0\'   >",
        stdout);
  __c = 0x30;
  while( true ) {
    putchar(__c);
    if (0x2f < __c) break;
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0567_0(void)

{
  uint __c;
  
  fputs("0567 unsign start:48, iter:1, inc:+1, order:bju cmp:<=0                expected=\'0\'   >",
        stdout);
  __c = 0x30;
  while( true ) {
    putchar(__c);
    if (0x2f < __c) break;
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0568_0(void)

{
  int __c;
  
  fputs("0568 unsign start:48, iter:1, inc:+1, order:ubj cmp:!=0                expected=\'0\'   >",
        stdout);
  __c = 0x2f;
  do {
    __c = __c + 1;
    putchar(__c);
  } while (__c != 0x30);
  puts("<");
  return 0;
}



undefined4 var0569_0(void)

{
  uint __c;
  
  fputs("0569 unsign start:48, iter:1, inc:+1, order:ubj cmp:< 0                expected=\'0\'   >",
        stdout);
  __c = 0x2f;
  do {
    __c = __c + 1;
    putchar(__c);
  } while (__c < 0x30);
  puts("<");
  return 0;
}



undefined4 var0570_0(void)

{
  uint __c;
  
  fputs("0570 unsign start:48, iter:1, inc:+1, order:ubj cmp:<=0                expected=\'0\'   >",
        stdout);
  __c = 0x2f;
  do {
    __c = __c + 1;
    putchar(__c);
  } while (__c < 0x30);
  puts("<");
  return 0;
}



undefined4 var0571_0(void)

{
  int __c;
  
  fputs("0571 unsign start:48, iter:1, inc:+1, order:ujb cmp:!=0                expected=\'0\'   >",
        stdout);
  __c = 0x2f;
  while (__c = __c + 1, __c != 0x31) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0572_0(void)

{
  uint __c;
  
  fputs("0572 unsign start:48, iter:1, inc:+1, order:ujb cmp:< 0                expected=\'0\'   >",
        stdout);
  __c = 0x2f;
  while (__c = __c + 1, __c < 0x31) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0573_0(void)

{
  uint __c;
  
  fputs("0573 unsign start:48, iter:1, inc:+1, order:ujb cmp:<=0                expected=\'0\'   >",
        stdout);
  __c = 0x2f;
  while (__c = __c + 1, __c < 0x31) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0574_0(void)

{
  int __c;
  
  fputs("0574 unsign start:48, iter:1, inc:+1, order:jbu cmp:!=0                expected=\'0\'   >",
        stdout);
  for (__c = 0x30; __c != 0x31; __c = __c + 1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0575_0(void)

{
  uint __c;
  
  fputs("0575 unsign start:48, iter:1, inc:+1, order:jbu cmp:< 0                expected=\'0\'   >",
        stdout);
  for (__c = 0x30; __c < 0x31; __c = __c + 1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0576_0(void)

{
  uint __c;
  
  fputs("0576 unsign start:48, iter:1, inc:+1, order:jbu cmp:<=0                expected=\'0\'   >",
        stdout);
  for (__c = 0x30; __c < 0x31; __c = __c + 1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0577_0(void)

{
  int __c;
  
  fputs("0577 unsign start:48, iter:1, inc:+1, order:jub cmp:!=0                expected=\'0\'   >",
        stdout);
  __c = 0x2f;
  while (__c != 0x30) {
    __c = __c + 1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0578_0(void)

{
  uint __c;
  
  fputs("0578 unsign start:48, iter:1, inc:+1, order:jub cmp:< 0                expected=\'0\'   >",
        stdout);
  __c = 0x2f;
  while (__c < 0x30) {
    __c = __c + 1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0579_0(void)

{
  uint __c;
  
  fputs("0579 unsign start:48, iter:1, inc:+1, order:jub cmp:<=0                expected=\'0\'   >",
        stdout);
  __c = 0x2f;
  while (__c < 0x30) {
    __c = __c + 1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0580_0(void)

{
  int iVar1;
  
  fputs("0580 unsign start:0, iter:1, inc:+1, order:buj cmp:!=0 exp:+48         expected=\'0\'   >",
        stdout);
  iVar1 = 0;
  do {
    putchar(iVar1 + 0x30);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 1);
  puts("<");
  return 0;
}



undefined4 var0581_0(void)

{
  int iVar1;
  
  fputs("0581 unsign start:0, iter:1, inc:+1, order:buj cmp:< 0 exp:+48         expected=\'0\'   >",
        stdout);
  iVar1 = 0;
  do {
    putchar(iVar1 + 0x30);
    iVar1 = iVar1 + 1;
  } while (iVar1 == 0);
  puts("<");
  return 0;
}



undefined4 var0582_0(void)

{
  int iVar1;
  
  fputs("0582 unsign start:0, iter:1, inc:+1, order:buj cmp:<=0 exp:+48         expected=\'0\'   >",
        stdout);
  iVar1 = 0;
  do {
    putchar(iVar1 + 0x30);
    iVar1 = iVar1 + 1;
  } while (iVar1 == 0);
  puts("<");
  return 0;
}



undefined4 var0583_0(void)

{
  int iVar1;
  
  fputs("0583 unsign start:0, iter:1, inc:+1, order:bju cmp:!=0 exp:+48         expected=\'0\'   >",
        stdout);
  iVar1 = 0;
  while( true ) {
    putchar(iVar1 + 0x30);
    if (iVar1 == 0) break;
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08052907)

undefined4 var0584_0(void)

{
  fputs("0584 unsign start:0, iter:1, inc:+1, order:bju cmp:< 0 exp:+48         expected=\'0\'   >",
        stdout);
  putchar(0x30);
  puts("<");
  return 0;
}



undefined4 var0585_0(void)

{
  int iVar1;
  int iVar2;
  
  fputs("0585 unsign start:0, iter:1, inc:+1, order:ubj cmp:!=0 exp:+48         expected=\'0\'   >",
        stdout);
  iVar2 = -1;
  do {
    iVar1 = iVar2 + 1;
    putchar(iVar2 + 0x31);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  puts("<");
  return 0;
}



undefined4 var0586_0(void)

{
  fputs("0586 unsign start:0, iter:1, inc:+1, order:ubj cmp:< 0 exp:+48         expected=\'0\'   >",
        stdout);
  putchar(0x30);
  puts("<");
  return 0;
}



undefined4 var0587_0(void)

{
  int iVar1;
  
  fputs("0587 unsign start:0, iter:1, inc:+1, order:ujb cmp:!=0 exp:+48         expected=\'0\'   >",
        stdout);
  iVar1 = -1;
  while (iVar1 + 1 != 1) {
    putchar(iVar1 + 0x31);
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0588_0(void)

{
  int iVar1;
  
  fputs("0588 unsign start:0, iter:1, inc:+1, order:ujb cmp:< 0 exp:+48         expected=\'0\'   >",
        stdout);
  iVar1 = -1;
  while (iVar1 == -1) {
    putchar(0x30);
    iVar1 = 0;
  }
  puts("<");
  return 0;
}



undefined4 var0589_0(void)

{
  int iVar1;
  
  fputs("0589 unsign start:0, iter:1, inc:+1, order:ujb cmp:<=0 exp:+48         expected=\'0\'   >",
        stdout);
  iVar1 = -1;
  while (iVar1 == -1) {
    putchar(0x30);
    iVar1 = 0;
  }
  puts("<");
  return 0;
}



undefined4 var0590_0(void)

{
  int iVar1;
  
  fputs("0590 unsign start:0, iter:1, inc:+1, order:jbu cmp:!=0 exp:+48         expected=\'0\'   >",
        stdout);
  for (iVar1 = 0; iVar1 != 1; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x30);
  }
  puts("<");
  return 0;
}



undefined4 var0591_0(void)

{
  bool bVar1;
  
  fputs("0591 unsign start:0, iter:1, inc:+1, order:jbu cmp:< 0 exp:+48         expected=\'0\'   >",
        stdout);
  bVar1 = false;
  while (!bVar1) {
    putchar(0x30);
    bVar1 = true;
  }
  puts("<");
  return 0;
}



undefined4 var0592_0(void)

{
  bool bVar1;
  
  fputs("0592 unsign start:0, iter:1, inc:+1, order:jbu cmp:<=0 exp:+48         expected=\'0\'   >",
        stdout);
  bVar1 = false;
  while (!bVar1) {
    putchar(0x30);
    bVar1 = true;
  }
  puts("<");
  return 0;
}



undefined4 var0593_0(void)

{
  int iVar1;
  
  fputs("0593 unsign start:0, iter:1, inc:+1, order:jub cmp:!=0 exp:+48         expected=\'0\'   >",
        stdout);
  for (iVar1 = -1; iVar1 != 0; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x31);
  }
  puts("<");
  return 0;
}



undefined4 var0594_0(void)

{
  uint uVar1;
  
  fputs("0594 unsign start:16, iter:1, inc:+2, order:buj cmp:!=0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0x10;
  do {
    putchar((uVar1 >> 1) + 0x28);
    uVar1 = uVar1 + 2;
  } while (uVar1 != 0x12);
  puts("<");
  return 0;
}



undefined4 var0595_0(void)

{
  uint uVar1;
  
  fputs("0595 unsign start:16, iter:1, inc:+2, order:buj cmp:< 0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0x10;
  do {
    putchar((uVar1 >> 1) + 0x28);
    uVar1 = uVar1 + 2;
  } while (uVar1 < 0x12);
  puts("<");
  return 0;
}



undefined4 var0596_0(void)

{
  uint uVar1;
  
  fputs("0596 unsign start:16, iter:1, inc:+2, order:buj cmp:< 1 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0x10;
  do {
    putchar((uVar1 >> 1) + 0x28);
    uVar1 = uVar1 + 2;
  } while (uVar1 < 0x11);
  puts("<");
  return 0;
}



undefined4 var0597_0(void)

{
  uint uVar1;
  
  fputs("0597 unsign start:16, iter:1, inc:+2, order:buj cmp:<=0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0x10;
  do {
    putchar((uVar1 >> 1) + 0x28);
    uVar1 = uVar1 + 2;
  } while (uVar1 < 0x12);
  puts("<");
  return 0;
}



undefined4 var0598_0(void)

{
  uint uVar1;
  
  fputs("0598 unsign start:16, iter:1, inc:+2, order:buj cmp:<=1 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0x10;
  do {
    putchar((uVar1 >> 1) + 0x28);
    uVar1 = uVar1 + 2;
  } while (uVar1 < 0x11);
  puts("<");
  return 0;
}



undefined4 var0599_0(void)

{
  uint uVar1;
  
  fputs("0599 unsign start:16, iter:1, inc:+2, order:bju cmp:!=0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0x10;
  while( true ) {
    putchar((uVar1 >> 1) + 0x28);
    if (uVar1 == 0x10) break;
    uVar1 = uVar1 + 2;
  }
  puts("<");
  return 0;
}



undefined4 var0600_0(void)

{
  uint uVar1;
  
  fputs("0600 unsign start:16, iter:1, inc:+2, order:bju cmp:< 0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0x10;
  while( true ) {
    putchar((uVar1 >> 1) + 0x28);
    if (0xf < uVar1) break;
    uVar1 = uVar1 + 2;
  }
  puts("<");
  return 0;
}



undefined4 var0601_0(void)

{
  uint uVar1;
  
  fputs("0601 unsign start:16, iter:1, inc:+2, order:bju cmp:< 1 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0x10;
  while( true ) {
    putchar((uVar1 >> 1) + 0x28);
    if (0xe < uVar1) break;
    uVar1 = uVar1 + 2;
  }
  puts("<");
  return 0;
}



undefined4 var0602_0(void)

{
  uint uVar1;
  
  fputs("0602 unsign start:16, iter:1, inc:+2, order:bju cmp:<=0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0x10;
  while( true ) {
    putchar((uVar1 >> 1) + 0x28);
    if (0xf < uVar1) break;
    uVar1 = uVar1 + 2;
  }
  puts("<");
  return 0;
}



undefined4 var0603_0(void)

{
  uint uVar1;
  
  fputs("0603 unsign start:16, iter:1, inc:+2, order:bju cmp:<=1 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0x10;
  while( true ) {
    putchar((uVar1 >> 1) + 0x28);
    if (0xe < uVar1) break;
    uVar1 = uVar1 + 2;
  }
  puts("<");
  return 0;
}



undefined4 var0604_0(void)

{
  uint uVar1;
  
  fputs("0604 unsign start:16, iter:1, inc:+2, order:ubj cmp:!=0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0xe;
  do {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  } while (uVar1 != 0x10);
  puts("<");
  return 0;
}



undefined4 var0605_0(void)

{
  uint uVar1;
  
  fputs("0605 unsign start:16, iter:1, inc:+2, order:ubj cmp:< 0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0xe;
  do {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  } while (uVar1 < 0x10);
  puts("<");
  return 0;
}



undefined4 var0606_0(void)

{
  uint uVar1;
  
  fputs("0606 unsign start:16, iter:1, inc:+2, order:ubj cmp:< 1 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0xe;
  do {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  } while (uVar1 < 0xf);
  puts("<");
  return 0;
}



undefined4 var0607_0(void)

{
  uint uVar1;
  
  fputs("0607 unsign start:16, iter:1, inc:+2, order:ubj cmp:<=0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0xe;
  do {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  } while (uVar1 < 0x10);
  puts("<");
  return 0;
}



undefined4 var0608_0(void)

{
  uint uVar1;
  
  fputs("0608 unsign start:16, iter:1, inc:+2, order:ubj cmp:<=1 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0xe;
  do {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  } while (uVar1 < 0xf);
  puts("<");
  return 0;
}



undefined4 var0609_0(void)

{
  uint uVar1;
  
  fputs("0609 unsign start:16, iter:1, inc:+2, order:ujb cmp:!=0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0xe;
  while (uVar1 = uVar1 + 2, uVar1 != 0x12) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0610_0(void)

{
  uint uVar1;
  
  fputs("0610 unsign start:16, iter:1, inc:+2, order:ujb cmp:< 0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0xe;
  while (uVar1 = uVar1 + 2, uVar1 < 0x12) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0611_0(void)

{
  uint uVar1;
  
  fputs("0611 unsign start:16, iter:1, inc:+2, order:ujb cmp:< 1 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0xe;
  while (uVar1 = uVar1 + 2, uVar1 < 0x11) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0612_0(void)

{
  uint uVar1;
  
  fputs("0612 unsign start:16, iter:1, inc:+2, order:ujb cmp:<=0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0xe;
  while (uVar1 = uVar1 + 2, uVar1 < 0x12) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0613_0(void)

{
  uint uVar1;
  
  fputs("0613 unsign start:16, iter:1, inc:+2, order:ujb cmp:<=1 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0xe;
  while (uVar1 = uVar1 + 2, uVar1 < 0x11) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0614_0(void)

{
  uint uVar1;
  
  fputs("0614 unsign start:16, iter:1, inc:+2, order:jbu cmp:!=0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  for (uVar1 = 0x10; uVar1 != 0x12; uVar1 = uVar1 + 2) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0615_0(void)

{
  uint uVar1;
  
  fputs("0615 unsign start:16, iter:1, inc:+2, order:jbu cmp:< 0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  for (uVar1 = 0x10; uVar1 < 0x12; uVar1 = uVar1 + 2) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0616_0(void)

{
  uint uVar1;
  
  fputs("0616 unsign start:16, iter:1, inc:+2, order:jbu cmp:< 1 exp:/2 +40     expected=\'0\'   >",
        stdout);
  for (uVar1 = 0x10; uVar1 < 0x11; uVar1 = uVar1 + 2) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0617_0(void)

{
  uint uVar1;
  
  fputs("0617 unsign start:16, iter:1, inc:+2, order:jbu cmp:<=0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  for (uVar1 = 0x10; uVar1 < 0x12; uVar1 = uVar1 + 2) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0618_0(void)

{
  uint uVar1;
  
  fputs("0618 unsign start:16, iter:1, inc:+2, order:jbu cmp:<=1 exp:/2 +40     expected=\'0\'   >",
        stdout);
  for (uVar1 = 0x10; uVar1 < 0x11; uVar1 = uVar1 + 2) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0619_0(void)

{
  uint uVar1;
  
  fputs("0619 unsign start:16, iter:1, inc:+2, order:jub cmp:!=0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0xe;
  while (uVar1 != 0x10) {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0620_0(void)

{
  uint uVar1;
  
  fputs("0620 unsign start:16, iter:1, inc:+2, order:jub cmp:< 0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0xe;
  while (uVar1 < 0x10) {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0621_0(void)

{
  uint uVar1;
  
  fputs("0621 unsign start:16, iter:1, inc:+2, order:jub cmp:< 1 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0xe;
  while (uVar1 < 0xf) {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0622_0(void)

{
  uint uVar1;
  
  fputs("0622 unsign start:16, iter:1, inc:+2, order:jub cmp:<=0 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0xe;
  while (uVar1 < 0x10) {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0623_0(void)

{
  uint uVar1;
  
  fputs("0623 unsign start:16, iter:1, inc:+2, order:jub cmp:<=1 exp:/2 +40     expected=\'0\'   >",
        stdout);
  uVar1 = 0xe;
  while (uVar1 < 0xf) {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0624_9(void)

{
  int __c;
  
  fputs("0624 unsign start:57, iter:1, inc:-1, order:buj cmp:!=0                expected=\'9\'   >",
        stdout);
  __c = 0x39;
  do {
    putchar(__c);
    __c = __c + -1;
  } while (__c != 0x38);
  puts("<");
  return 0;
}



undefined4 var0625_9(void)

{
  uint __c;
  
  fputs("0625 unsign start:57, iter:1, inc:-1, order:buj cmp:< 0                expected=\'9\'   >",
        stdout);
  __c = 0x39;
  do {
    putchar(__c);
    __c = __c - 1;
  } while (0x38 < __c);
  puts("<");
  return 0;
}



undefined4 var0626_9(void)

{
  uint __c;
  
  fputs("0626 unsign start:57, iter:1, inc:-1, order:buj cmp:<=0                expected=\'9\'   >",
        stdout);
  __c = 0x39;
  do {
    putchar(__c);
    __c = __c - 1;
  } while (0x38 < __c);
  puts("<");
  return 0;
}



undefined4 var0627_9(void)

{
  int __c;
  
  fputs("0627 unsign start:57, iter:1, inc:-1, order:bju cmp:!=0                expected=\'9\'   >",
        stdout);
  __c = 0x39;
  while( true ) {
    putchar(__c);
    if (__c == 0x39) break;
    __c = __c + -1;
  }
  puts("<");
  return 0;
}



undefined4 var0628_9(void)

{
  uint __c;
  
  fputs("0628 unsign start:57, iter:1, inc:-1, order:bju cmp:< 0                expected=\'9\'   >",
        stdout);
  __c = 0x39;
  while( true ) {
    putchar(__c);
    if (__c < 0x3a) break;
    __c = __c - 1;
  }
  puts("<");
  return 0;
}



undefined4 var0629_9(void)

{
  uint __c;
  
  fputs("0629 unsign start:57, iter:1, inc:-1, order:bju cmp:<=0                expected=\'9\'   >",
        stdout);
  __c = 0x39;
  while( true ) {
    putchar(__c);
    if (__c < 0x3a) break;
    __c = __c - 1;
  }
  puts("<");
  return 0;
}



undefined4 var0630_9(void)

{
  int __c;
  
  fputs("0630 unsign start:57, iter:1, inc:-1, order:ubj cmp:!=0                expected=\'9\'   >",
        stdout);
  __c = 0x3a;
  do {
    __c = __c + -1;
    putchar(__c);
  } while (__c != 0x39);
  puts("<");
  return 0;
}



undefined4 var0631_9(void)

{
  uint __c;
  
  fputs("0631 unsign start:57, iter:1, inc:-1, order:ubj cmp:< 0                expected=\'9\'   >",
        stdout);
  __c = 0x3a;
  do {
    __c = __c - 1;
    putchar(__c);
  } while (0x39 < __c);
  puts("<");
  return 0;
}



undefined4 var0632_9(void)

{
  uint __c;
  
  fputs("0632 unsign start:57, iter:1, inc:-1, order:ubj cmp:<=0                expected=\'9\'   >",
        stdout);
  __c = 0x3a;
  do {
    __c = __c - 1;
    putchar(__c);
  } while (0x39 < __c);
  puts("<");
  return 0;
}



undefined4 var0633_9(void)

{
  int __c;
  
  fputs("0633 unsign start:57, iter:1, inc:-1, order:ujb cmp:!=0                expected=\'9\'   >",
        stdout);
  __c = 0x3a;
  while (__c = __c + -1, __c != 0x38) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0634_9(void)

{
  uint __c;
  
  fputs("0634 unsign start:57, iter:1, inc:-1, order:ujb cmp:< 0                expected=\'9\'   >",
        stdout);
  __c = 0x3a;
  while (__c = __c - 1, 0x38 < __c) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0635_9(void)

{
  uint __c;
  
  fputs("0635 unsign start:57, iter:1, inc:-1, order:ujb cmp:<=0                expected=\'9\'   >",
        stdout);
  __c = 0x3a;
  while (__c = __c - 1, 0x38 < __c) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0636_9(void)

{
  int __c;
  
  fputs("0636 unsign start:57, iter:1, inc:-1, order:jbu cmp:!=0                expected=\'9\'   >",
        stdout);
  for (__c = 0x39; __c != 0x38; __c = __c + -1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0637_9(void)

{
  uint __c;
  
  fputs("0637 unsign start:57, iter:1, inc:-1, order:jbu cmp:< 0                expected=\'9\'   >",
        stdout);
  for (__c = 0x39; 0x38 < __c; __c = __c - 1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0638_9(void)

{
  uint __c;
  
  fputs("0638 unsign start:57, iter:1, inc:-1, order:jbu cmp:<=0                expected=\'9\'   >",
        stdout);
  for (__c = 0x39; 0x38 < __c; __c = __c - 1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0639_9(void)

{
  int __c;
  
  fputs("0639 unsign start:57, iter:1, inc:-1, order:jub cmp:!=0                expected=\'9\'   >",
        stdout);
  __c = 0x3a;
  while (__c != 0x39) {
    __c = __c + -1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0640_9(void)

{
  uint __c;
  
  fputs("0640 unsign start:57, iter:1, inc:-1, order:jub cmp:< 0                expected=\'9\'   >",
        stdout);
  __c = 0x3a;
  while (0x39 < __c) {
    __c = __c - 1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0641_9(void)

{
  uint __c;
  
  fputs("0641 unsign start:57, iter:1, inc:-1, order:jub cmp:<=0                expected=\'9\'   >",
        stdout);
  __c = 0x3a;
  while (0x39 < __c) {
    __c = __c - 1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0642_9(void)

{
  uint uVar1;
  
  fputs("0642 unsign start:100, iter:1, inc:-2, order:buj cmp:!=0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  uVar1 = 100;
  do {
    putchar((uVar1 >> 1) + 7);
    uVar1 = uVar1 - 2;
  } while (uVar1 != 0x62);
  puts("<");
  return 0;
}



undefined4 var0643_9(void)

{
  uint uVar1;
  
  fputs("0643 unsign start:100, iter:1, inc:-2, order:buj cmp:< -1 exp:/2 +7    expected=\'9\'   >",
        stdout);
  uVar1 = 100;
  do {
    putchar((uVar1 >> 1) + 7);
    uVar1 = uVar1 - 2;
  } while (99 < uVar1);
  puts("<");
  return 0;
}



undefined4 var0644_9(void)

{
  uint uVar1;
  
  fputs("0644 unsign start:100, iter:1, inc:-2, order:buj cmp:< 0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  uVar1 = 100;
  do {
    putchar((uVar1 >> 1) + 7);
    uVar1 = uVar1 - 2;
  } while (0x62 < uVar1);
  puts("<");
  return 0;
}



undefined4 var0645_9(void)

{
  uint uVar1;
  
  fputs("0645 unsign start:100, iter:1, inc:-2, order:buj cmp:<=-1 exp:/2 +7    expected=\'9\'   >",
        stdout);
  uVar1 = 100;
  do {
    putchar((uVar1 >> 1) + 7);
    uVar1 = uVar1 - 2;
  } while (99 < uVar1);
  puts("<");
  return 0;
}



undefined4 var0646_9(void)

{
  uint uVar1;
  
  fputs("0646 unsign start:100, iter:1, inc:-2, order:buj cmp:<=0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  uVar1 = 100;
  do {
    putchar((uVar1 >> 1) + 7);
    uVar1 = uVar1 - 2;
  } while (0x62 < uVar1);
  puts("<");
  return 0;
}



undefined4 var0647_9(void)

{
  uint uVar1;
  
  fputs("0647 unsign start:100, iter:1, inc:-2, order:bju cmp:!=0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  uVar1 = 100;
  while( true ) {
    putchar((uVar1 >> 1) + 7);
    if (uVar1 == 100) break;
    uVar1 = uVar1 - 2;
  }
  puts("<");
  return 0;
}



undefined4 var0648_9(void)

{
  uint uVar1;
  
  fputs("0648 unsign start:100, iter:1, inc:-2, order:bju cmp:< -1 exp:/2 +7    expected=\'9\'   >",
        stdout);
  uVar1 = 100;
  while( true ) {
    putchar((uVar1 >> 1) + 7);
    if (uVar1 < 0x66) break;
    uVar1 = uVar1 - 2;
  }
  puts("<");
  return 0;
}



undefined4 var0649_9(void)

{
  uint uVar1;
  
  fputs("0649 unsign start:100, iter:1, inc:-2, order:bju cmp:< 0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  uVar1 = 100;
  while( true ) {
    putchar((uVar1 >> 1) + 7);
    if (uVar1 < 0x65) break;
    uVar1 = uVar1 - 2;
  }
  puts("<");
  return 0;
}



undefined4 var0650_9(void)

{
  uint uVar1;
  
  fputs("0650 unsign start:100, iter:1, inc:-2, order:bju cmp:<=-1 exp:/2 +7    expected=\'9\'   >",
        stdout);
  uVar1 = 100;
  while( true ) {
    putchar((uVar1 >> 1) + 7);
    if (uVar1 < 0x66) break;
    uVar1 = uVar1 - 2;
  }
  puts("<");
  return 0;
}



undefined4 var0651_9(void)

{
  uint uVar1;
  
  fputs("0651 unsign start:100, iter:1, inc:-2, order:bju cmp:<=0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  uVar1 = 100;
  while( true ) {
    putchar((uVar1 >> 1) + 7);
    if (uVar1 < 0x65) break;
    uVar1 = uVar1 - 2;
  }
  puts("<");
  return 0;
}



undefined4 var0652_9(void)

{
  uint uVar1;
  
  fputs("0652 unsign start:100, iter:1, inc:-2, order:ubj cmp:!=0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  uVar1 = 0x66;
  do {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  } while (uVar1 != 100);
  puts("<");
  return 0;
}



undefined4 var0653_9(void)

{
  uint uVar1;
  
  fputs("0653 unsign start:100, iter:1, inc:-2, order:ubj cmp:< -1 exp:/2 +7    expected=\'9\'   >",
        stdout);
  uVar1 = 0x66;
  do {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  } while (0x65 < uVar1);
  puts("<");
  return 0;
}



undefined4 var0654_9(void)

{
  uint uVar1;
  
  fputs("0654 unsign start:100, iter:1, inc:-2, order:ubj cmp:< 0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  uVar1 = 0x66;
  do {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  } while (100 < uVar1);
  puts("<");
  return 0;
}



undefined4 var0655_9(void)

{
  uint uVar1;
  
  fputs("0655 unsign start:100, iter:1, inc:-2, order:ubj cmp:<=-1 exp:/2 +7    expected=\'9\'   >",
        stdout);
  uVar1 = 0x66;
  do {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  } while (0x65 < uVar1);
  puts("<");
  return 0;
}



undefined4 var0656_9(void)

{
  uint uVar1;
  
  fputs("0656 unsign start:100, iter:1, inc:-2, order:ubj cmp:<=0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  uVar1 = 0x66;
  do {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  } while (100 < uVar1);
  puts("<");
  return 0;
}



undefined4 var0657_9(void)

{
  uint uVar1;
  
  fputs("0657 unsign start:100, iter:1, inc:-2, order:ujb cmp:!=0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  uVar1 = 0x66;
  while (uVar1 = uVar1 - 2, uVar1 != 0x62) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0658_9(void)

{
  uint uVar1;
  
  fputs("0658 unsign start:100, iter:1, inc:-2, order:ujb cmp:< -1 exp:/2 +7    expected=\'9\'   >",
        stdout);
  uVar1 = 0x66;
  while (uVar1 = uVar1 - 2, 99 < uVar1) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0659_9(void)

{
  uint uVar1;
  
  fputs("0659 unsign start:100, iter:1, inc:-2, order:ujb cmp:< 0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  uVar1 = 0x66;
  while (uVar1 = uVar1 - 2, 0x62 < uVar1) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0660_9(void)

{
  uint uVar1;
  
  fputs("0660 unsign start:100, iter:1, inc:-2, order:ujb cmp:<=-1 exp:/2 +7    expected=\'9\'   >",
        stdout);
  uVar1 = 0x66;
  while (uVar1 = uVar1 - 2, 99 < uVar1) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0661_9(void)

{
  uint uVar1;
  
  fputs("0661 unsign start:100, iter:1, inc:-2, order:ujb cmp:<=0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  uVar1 = 0x66;
  while (uVar1 = uVar1 - 2, 0x62 < uVar1) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0662_9(void)

{
  uint uVar1;
  
  fputs("0662 unsign start:100, iter:1, inc:-2, order:jbu cmp:!=0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  for (uVar1 = 100; uVar1 != 0x62; uVar1 = uVar1 - 2) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0663_9(void)

{
  uint uVar1;
  
  fputs("0663 unsign start:100, iter:1, inc:-2, order:jbu cmp:< -1 exp:/2 +7    expected=\'9\'   >",
        stdout);
  for (uVar1 = 100; 99 < uVar1; uVar1 = uVar1 - 2) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0664_9(void)

{
  uint uVar1;
  
  fputs("0664 unsign start:100, iter:1, inc:-2, order:jbu cmp:< 0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  for (uVar1 = 100; 0x62 < uVar1; uVar1 = uVar1 - 2) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0665_9(void)

{
  uint uVar1;
  
  fputs("0665 unsign start:100, iter:1, inc:-2, order:jbu cmp:<=-1 exp:/2 +7    expected=\'9\'   >",
        stdout);
  for (uVar1 = 100; 99 < uVar1; uVar1 = uVar1 - 2) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0666_9(void)

{
  uint uVar1;
  
  fputs("0666 unsign start:100, iter:1, inc:-2, order:jbu cmp:<=0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  for (uVar1 = 100; 0x62 < uVar1; uVar1 = uVar1 - 2) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0667_9(void)

{
  uint uVar1;
  
  fputs("0667 unsign start:100, iter:1, inc:-2, order:jub cmp:!=0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  uVar1 = 0x66;
  while (uVar1 != 100) {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0668_9(void)

{
  uint uVar1;
  
  fputs("0668 unsign start:100, iter:1, inc:-2, order:jub cmp:< -1 exp:/2 +7    expected=\'9\'   >",
        stdout);
  uVar1 = 0x66;
  while (0x65 < uVar1) {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0669_9(void)

{
  uint uVar1;
  
  fputs("0669 unsign start:100, iter:1, inc:-2, order:jub cmp:< 0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  uVar1 = 0x66;
  while (100 < uVar1) {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0670_9(void)

{
  uint uVar1;
  
  fputs("0670 unsign start:100, iter:1, inc:-2, order:jub cmp:<=-1 exp:/2 +7    expected=\'9\'   >",
        stdout);
  uVar1 = 0x66;
  while (0x65 < uVar1) {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0671_9(void)

{
  uint uVar1;
  
  fputs("0671 unsign start:100, iter:1, inc:-2, order:jub cmp:<=0 exp:/2 +7     expected=\'9\'   >",
        stdout);
  uVar1 = 0x66;
  while (100 < uVar1) {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0672_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0672 unsign start:0, iter:1, inc:+1, order:buj cmp:!=0 second:=48 +1   expected=\'0\'   >",
        stdout);
  iVar1 = 0;
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 1);
  puts("<");
  return 0;
}



undefined4 var0673_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0673 unsign start:0, iter:1, inc:+1, order:buj cmp:< 0 second:=48 +1   expected=\'0\'   >",
        stdout);
  iVar1 = 0;
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
    iVar1 = iVar1 + 1;
  } while (iVar1 == 0);
  puts("<");
  return 0;
}



undefined4 var0674_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0674 unsign start:0, iter:1, inc:+1, order:buj cmp:<=0 second:=48 +1   expected=\'0\'   >",
        stdout);
  iVar1 = 0;
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
    iVar1 = iVar1 + 1;
  } while (iVar1 == 0);
  puts("<");
  return 0;
}



undefined4 var0675_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0675 unsign start:0, iter:1, inc:+1, order:bju cmp:!=0 second:=48 +1   expected=\'0\'   >",
        stdout);
  iVar1 = 0;
  __c = 0x30;
  while( true ) {
    putchar(__c);
    __c = __c + 1;
    if (iVar1 == 0) break;
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08054126)

undefined4 var0676_0(void)

{
  fputs("0676 unsign start:0, iter:1, inc:+1, order:bju cmp:< 0 second:=48 +1   expected=\'0\'   >",
        stdout);
  putchar(0x30);
  puts("<");
  return 0;
}



undefined4 var0677_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0677 unsign start:0, iter:1, inc:+1, order:ubj cmp:!=0 second:=48 +1   expected=\'0\'   >",
        stdout);
  iVar1 = -1;
  __c = 0x30;
  do {
    iVar1 = iVar1 + 1;
    putchar(__c);
    __c = __c + 1;
  } while (iVar1 != 0);
  puts("<");
  return 0;
}



undefined4 var0678_0(void)

{
  fputs("0678 unsign start:0, iter:1, inc:+1, order:ubj cmp:< 0 second:=48 +1   expected=\'0\'   >",
        stdout);
  putchar(0x30);
  puts("<");
  return 0;
}



undefined4 var0679_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0679 unsign start:0, iter:1, inc:+1, order:ujb cmp:!=0 second:=48 +1   expected=\'0\'   >",
        stdout);
  iVar1 = -1;
  __c = 0x30;
  while (iVar1 = iVar1 + 1, iVar1 != 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0680_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0680 unsign start:0, iter:1, inc:+1, order:ujb cmp:< 0 second:=48 +1   expected=\'0\'   >",
        stdout);
  __c = 0x30;
  iVar1 = -1;
  while (iVar1 == -1) {
    putchar(__c);
    __c = __c + 1;
    iVar1 = 0;
  }
  puts("<");
  return 0;
}



undefined4 var0681_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0681 unsign start:0, iter:1, inc:+1, order:ujb cmp:<=0 second:=48 +1   expected=\'0\'   >",
        stdout);
  __c = 0x30;
  iVar1 = -1;
  while (iVar1 == -1) {
    putchar(__c);
    __c = __c + 1;
    iVar1 = 0;
  }
  puts("<");
  return 0;
}



undefined4 var0682_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0682 unsign start:0, iter:1, inc:+1, order:jbu cmp:!=0 second:=48 +1   expected=\'0\'   >",
        stdout);
  __c = 0x30;
  for (iVar1 = 0; iVar1 != 1; iVar1 = iVar1 + 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0683_0(void)

{
  bool bVar1;
  int __c;
  
  fputs("0683 unsign start:0, iter:1, inc:+1, order:jbu cmp:< 0 second:=48 +1   expected=\'0\'   >",
        stdout);
  __c = 0x30;
  bVar1 = false;
  while (!bVar1) {
    putchar(__c);
    __c = __c + 1;
    bVar1 = true;
  }
  puts("<");
  return 0;
}



undefined4 var0684_0(void)

{
  bool bVar1;
  int __c;
  
  fputs("0684 unsign start:0, iter:1, inc:+1, order:jbu cmp:<=0 second:=48 +1   expected=\'0\'   >",
        stdout);
  __c = 0x30;
  bVar1 = false;
  while (!bVar1) {
    putchar(__c);
    __c = __c + 1;
    bVar1 = true;
  }
  puts("<");
  return 0;
}



undefined4 var0685_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0685 unsign start:0, iter:1, inc:+1, order:jub cmp:!=0 second:=48 +1   expected=\'0\'   >",
        stdout);
  __c = 0x30;
  for (iVar1 = -1; iVar1 != 0; iVar1 = iVar1 + 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0686_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0686 unsign start:10, iter:1, inc:-1, order:buj cmp:!=0 second:=48 +1  expected=\'0\'   >",
        stdout);
  iVar1 = 10;
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 9);
  puts("<");
  return 0;
}



undefined4 var0687_0(void)

{
  uint uVar1;
  int __c;
  
  fputs("0687 unsign start:10, iter:1, inc:-1, order:buj cmp:< 0 second:=48 +1  expected=\'0\'   >",
        stdout);
  uVar1 = 10;
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
    uVar1 = uVar1 - 1;
  } while (9 < uVar1);
  puts("<");
  return 0;
}



undefined4 var0688_0(void)

{
  uint uVar1;
  int __c;
  
  fputs("0688 unsign start:10, iter:1, inc:-1, order:buj cmp:<=0 second:=48 +1  expected=\'0\'   >",
        stdout);
  uVar1 = 10;
  __c = 0x30;
  do {
    putchar(__c);
    __c = __c + 1;
    uVar1 = uVar1 - 1;
  } while (9 < uVar1);
  puts("<");
  return 0;
}



undefined4 var0689_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0689 unsign start:10, iter:1, inc:-1, order:bju cmp:!=0 second:=48 +1  expected=\'0\'   >",
        stdout);
  iVar1 = 10;
  __c = 0x30;
  while( true ) {
    putchar(__c);
    __c = __c + 1;
    if (iVar1 == 10) break;
    iVar1 = iVar1 + -1;
  }
  puts("<");
  return 0;
}



undefined4 var0690_0(void)

{
  uint uVar1;
  int __c;
  
  fputs("0690 unsign start:10, iter:1, inc:-1, order:bju cmp:< 0 second:=48 +1  expected=\'0\'   >",
        stdout);
  uVar1 = 10;
  __c = 0x30;
  while( true ) {
    putchar(__c);
    __c = __c + 1;
    if (uVar1 < 0xb) break;
    uVar1 = uVar1 - 1;
  }
  puts("<");
  return 0;
}



undefined4 var0691_0(void)

{
  uint uVar1;
  int __c;
  
  fputs("0691 unsign start:10, iter:1, inc:-1, order:bju cmp:<=0 second:=48 +1  expected=\'0\'   >",
        stdout);
  uVar1 = 10;
  __c = 0x30;
  while( true ) {
    putchar(__c);
    __c = __c + 1;
    if (uVar1 < 0xb) break;
    uVar1 = uVar1 - 1;
  }
  puts("<");
  return 0;
}



undefined4 var0692_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0692 unsign start:10, iter:1, inc:-1, order:ubj cmp:!=0 second:=48 +1  expected=\'0\'   >",
        stdout);
  iVar1 = 0xb;
  __c = 0x30;
  do {
    iVar1 = iVar1 + -1;
    putchar(__c);
    __c = __c + 1;
  } while (iVar1 != 10);
  puts("<");
  return 0;
}



undefined4 var0693_0(void)

{
  uint uVar1;
  int __c;
  
  fputs("0693 unsign start:10, iter:1, inc:-1, order:ubj cmp:< 0 second:=48 +1  expected=\'0\'   >",
        stdout);
  uVar1 = 0xb;
  __c = 0x30;
  do {
    uVar1 = uVar1 - 1;
    putchar(__c);
    __c = __c + 1;
  } while (10 < uVar1);
  puts("<");
  return 0;
}



undefined4 var0694_0(void)

{
  uint uVar1;
  int __c;
  
  fputs("0694 unsign start:10, iter:1, inc:-1, order:ubj cmp:<=0 second:=48 +1  expected=\'0\'   >",
        stdout);
  uVar1 = 0xb;
  __c = 0x30;
  do {
    uVar1 = uVar1 - 1;
    putchar(__c);
    __c = __c + 1;
  } while (10 < uVar1);
  puts("<");
  return 0;
}



undefined4 var0695_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0695 unsign start:10, iter:1, inc:-1, order:ujb cmp:!=0 second:=48 +1  expected=\'0\'   >",
        stdout);
  iVar1 = 0xb;
  __c = 0x30;
  while (iVar1 = iVar1 + -1, iVar1 != 9) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0696_0(void)

{
  uint uVar1;
  int __c;
  
  fputs("0696 unsign start:10, iter:1, inc:-1, order:ujb cmp:< 0 second:=48 +1  expected=\'0\'   >",
        stdout);
  uVar1 = 0xb;
  __c = 0x30;
  while (uVar1 = uVar1 - 1, 9 < uVar1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0697_0(void)

{
  uint uVar1;
  int __c;
  
  fputs("0697 unsign start:10, iter:1, inc:-1, order:ujb cmp:<=0 second:=48 +1  expected=\'0\'   >",
        stdout);
  uVar1 = 0xb;
  __c = 0x30;
  while (uVar1 = uVar1 - 1, 9 < uVar1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0698_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0698 unsign start:10, iter:1, inc:-1, order:jbu cmp:!=0 second:=48 +1  expected=\'0\'   >",
        stdout);
  __c = 0x30;
  for (iVar1 = 10; iVar1 != 9; iVar1 = iVar1 + -1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0699_0(void)

{
  uint uVar1;
  int __c;
  
  fputs("0699 unsign start:10, iter:1, inc:-1, order:jbu cmp:< 0 second:=48 +1  expected=\'0\'   >",
        stdout);
  __c = 0x30;
  for (uVar1 = 10; 9 < uVar1; uVar1 = uVar1 - 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0700_0(void)

{
  uint uVar1;
  int __c;
  
  fputs("0700 unsign start:10, iter:1, inc:-1, order:jbu cmp:<=0 second:=48 +1  expected=\'0\'   >",
        stdout);
  __c = 0x30;
  for (uVar1 = 10; 9 < uVar1; uVar1 = uVar1 - 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0701_0(void)

{
  int iVar1;
  int __c;
  
  fputs("0701 unsign start:10, iter:1, inc:-1, order:jub cmp:!=0 second:=48 +1  expected=\'0\'   >",
        stdout);
  __c = 0x30;
  for (iVar1 = 0xb; iVar1 != 10; iVar1 = iVar1 + -1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0702_0(void)

{
  uint uVar1;
  int __c;
  
  fputs("0702 unsign start:10, iter:1, inc:-1, order:jub cmp:< 0 second:=48 +1  expected=\'0\'   >",
        stdout);
  __c = 0x30;
  for (uVar1 = 0xb; 10 < uVar1; uVar1 = uVar1 - 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0703_0(void)

{
  uint uVar1;
  int __c;
  
  fputs("0703 unsign start:10, iter:1, inc:-1, order:jub cmp:<=0 second:=48 +1  expected=\'0\'   >",
        stdout);
  __c = 0x30;
  for (uVar1 = 0xb; 10 < uVar1; uVar1 = uVar1 - 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0704_empty(void)

{
  int __c;
  
  fputs("0704 unsign start:48, iter:0, inc:+1, order:ujb cmp:!=0                expected=\'\'    >",
        stdout);
  __c = 0x2f;
  while (__c = __c + 1, __c != 0x30) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0705_empty(void)

{
  uint __c;
  
  fputs("0705 unsign start:48, iter:0, inc:+1, order:ujb cmp:< 0                expected=\'\'    >",
        stdout);
  __c = 0x2f;
  while (__c = __c + 1, __c < 0x30) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0706_empty(void)

{
  uint __c;
  
  fputs("0706 unsign start:48, iter:0, inc:+1, order:ujb cmp:<=0                expected=\'\'    >",
        stdout);
  __c = 0x2f;
  while (__c = __c + 1, __c < 0x30) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0707_empty(void)

{
  int __c;
  
  fputs("0707 unsign start:48, iter:0, inc:+1, order:jbu cmp:!=0                expected=\'\'    >",
        stdout);
  for (__c = 0x30; __c != 0x30; __c = __c + 1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0708_empty(void)

{
  uint __c;
  
  fputs("0708 unsign start:48, iter:0, inc:+1, order:jbu cmp:< 0                expected=\'\'    >",
        stdout);
  for (__c = 0x30; __c < 0x30; __c = __c + 1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0709_empty(void)

{
  uint __c;
  
  fputs("0709 unsign start:48, iter:0, inc:+1, order:jbu cmp:<=0                expected=\'\'    >",
        stdout);
  for (__c = 0x30; __c < 0x30; __c = __c + 1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0710_empty(void)

{
  int __c;
  
  fputs("0710 unsign start:48, iter:0, inc:+1, order:jub cmp:!=0                expected=\'\'    >",
        stdout);
  __c = 0x2f;
  while (__c != 0x2f) {
    __c = __c + 1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0711_empty(void)

{
  uint __c;
  
  fputs("0711 unsign start:48, iter:0, inc:+1, order:jub cmp:< 0                expected=\'\'    >",
        stdout);
  __c = 0x2f;
  while (__c < 0x2f) {
    __c = __c + 1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0712_empty(void)

{
  uint __c;
  
  fputs("0712 unsign start:48, iter:0, inc:+1, order:jub cmp:<=0                expected=\'\'    >",
        stdout);
  __c = 0x2f;
  while (__c < 0x2f) {
    __c = __c + 1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0713_empty(void)

{
  int iVar1;
  
  fputs("0713 unsign start:0, iter:0, inc:+1, order:ujb cmp:!=0 exp:+48         expected=\'\'    >",
        stdout);
  iVar1 = -1;
  while (iVar1 + 1 != 0) {
    putchar(iVar1 + 0x31);
    iVar1 = iVar1 + 1;
  }
  puts("<");
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08054af9)

undefined4 var0714_empty(void)

{
  fputs("0714 unsign start:0, iter:0, inc:+1, order:ujb cmp:< 0 exp:+48         expected=\'\'    >",
        stdout);
  puts("<");
  return 0;
}



undefined4 var0715_empty(void)

{
  int iVar1;
  
  fputs("0715 unsign start:0, iter:0, inc:+1, order:jbu cmp:!=0 exp:+48         expected=\'\'    >",
        stdout);
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + 1) {
    putchar(iVar1 + 0x30);
  }
  puts("<");
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08054b7c)

undefined4 var0716_empty(void)

{
  fputs("0716 unsign start:0, iter:0, inc:+1, order:jbu cmp:< 0 exp:+48         expected=\'\'    >",
        stdout);
  puts("<");
  return 0;
}



undefined4 var0717_empty(void)

{
  uint uVar1;
  
  fputs("0717 unsign start:16, iter:0, inc:+2, order:ujb cmp:!=0 exp:/2 +40     expected=\'\'    >",
        stdout);
  uVar1 = 0xe;
  while (uVar1 = uVar1 + 2, uVar1 != 0x10) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0718_empty(void)

{
  uint uVar1;
  
  fputs("0718 unsign start:16, iter:0, inc:+2, order:ujb cmp:< 0 exp:/2 +40     expected=\'\'    >",
        stdout);
  uVar1 = 0xe;
  while (uVar1 = uVar1 + 2, uVar1 < 0x10) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0719_empty(void)

{
  uint uVar1;
  
  fputs("0719 unsign start:16, iter:0, inc:+2, order:ujb cmp:< 1 exp:/2 +40     expected=\'\'    >",
        stdout);
  uVar1 = 0xe;
  while (uVar1 = uVar1 + 2, uVar1 < 0xf) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0720_empty(void)

{
  uint uVar1;
  
  fputs("0720 unsign start:16, iter:0, inc:+2, order:ujb cmp:<=0 exp:/2 +40     expected=\'\'    >",
        stdout);
  uVar1 = 0xe;
  while (uVar1 = uVar1 + 2, uVar1 < 0x10) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0721_empty(void)

{
  uint uVar1;
  
  fputs("0721 unsign start:16, iter:0, inc:+2, order:ujb cmp:<=1 exp:/2 +40     expected=\'\'    >",
        stdout);
  uVar1 = 0xe;
  while (uVar1 = uVar1 + 2, uVar1 < 0xf) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0722_empty(void)

{
  uint uVar1;
  
  fputs("0722 unsign start:16, iter:0, inc:+2, order:jbu cmp:!=0 exp:/2 +40     expected=\'\'    >",
        stdout);
  for (uVar1 = 0x10; uVar1 != 0x10; uVar1 = uVar1 + 2) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0723_empty(void)

{
  uint uVar1;
  
  fputs("0723 unsign start:16, iter:0, inc:+2, order:jbu cmp:< 0 exp:/2 +40     expected=\'\'    >",
        stdout);
  for (uVar1 = 0x10; uVar1 < 0x10; uVar1 = uVar1 + 2) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0724_empty(void)

{
  uint uVar1;
  
  fputs("0724 unsign start:16, iter:0, inc:+2, order:jbu cmp:< 1 exp:/2 +40     expected=\'\'    >",
        stdout);
  for (uVar1 = 0x10; uVar1 < 0xf; uVar1 = uVar1 + 2) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0725_empty(void)

{
  uint uVar1;
  
  fputs("0725 unsign start:16, iter:0, inc:+2, order:jbu cmp:<=0 exp:/2 +40     expected=\'\'    >",
        stdout);
  for (uVar1 = 0x10; uVar1 < 0x10; uVar1 = uVar1 + 2) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0726_empty(void)

{
  uint uVar1;
  
  fputs("0726 unsign start:16, iter:0, inc:+2, order:jbu cmp:<=1 exp:/2 +40     expected=\'\'    >",
        stdout);
  for (uVar1 = 0x10; uVar1 < 0xf; uVar1 = uVar1 + 2) {
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0727_empty(void)

{
  uint uVar1;
  
  fputs("0727 unsign start:16, iter:0, inc:+2, order:jub cmp:!=0 exp:/2 +40     expected=\'\'    >",
        stdout);
  uVar1 = 0xe;
  while (uVar1 != 0xe) {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0728_empty(void)

{
  uint uVar1;
  
  fputs("0728 unsign start:16, iter:0, inc:+2, order:jub cmp:< 0 exp:/2 +40     expected=\'\'    >",
        stdout);
  uVar1 = 0xe;
  while (uVar1 < 0xe) {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0729_empty(void)

{
  uint uVar1;
  
  fputs("0729 unsign start:16, iter:0, inc:+2, order:jub cmp:< 1 exp:/2 +40     expected=\'\'    >",
        stdout);
  uVar1 = 0xe;
  while (uVar1 < 0xd) {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0730_empty(void)

{
  uint uVar1;
  
  fputs("0730 unsign start:16, iter:0, inc:+2, order:jub cmp:<=0 exp:/2 +40     expected=\'\'    >",
        stdout);
  uVar1 = 0xe;
  while (uVar1 < 0xe) {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0731_empty(void)

{
  uint uVar1;
  
  fputs("0731 unsign start:16, iter:0, inc:+2, order:jub cmp:<=1 exp:/2 +40     expected=\'\'    >",
        stdout);
  uVar1 = 0xe;
  while (uVar1 < 0xd) {
    uVar1 = uVar1 + 2;
    putchar((uVar1 >> 1) + 0x28);
  }
  puts("<");
  return 0;
}



undefined4 var0732_empty(void)

{
  int __c;
  
  fputs("0732 unsign start:57, iter:0, inc:-1, order:ujb cmp:!=0                expected=\'\'    >",
        stdout);
  __c = 0x3a;
  while (__c = __c + -1, __c != 0x39) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0733_empty(void)

{
  uint __c;
  
  fputs("0733 unsign start:57, iter:0, inc:-1, order:ujb cmp:< 0                expected=\'\'    >",
        stdout);
  __c = 0x3a;
  while (__c = __c - 1, 0x39 < __c) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0734_empty(void)

{
  uint __c;
  
  fputs("0734 unsign start:57, iter:0, inc:-1, order:ujb cmp:<=0                expected=\'\'    >",
        stdout);
  __c = 0x3a;
  while (__c = __c - 1, 0x39 < __c) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0735_empty(void)

{
  int __c;
  
  fputs("0735 unsign start:57, iter:0, inc:-1, order:jbu cmp:!=0                expected=\'\'    >",
        stdout);
  for (__c = 0x39; __c != 0x39; __c = __c + -1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0736_empty(void)

{
  uint __c;
  
  fputs("0736 unsign start:57, iter:0, inc:-1, order:jbu cmp:< 0                expected=\'\'    >",
        stdout);
  for (__c = 0x39; 0x39 < __c; __c = __c - 1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0737_empty(void)

{
  uint __c;
  
  fputs("0737 unsign start:57, iter:0, inc:-1, order:jbu cmp:<=0                expected=\'\'    >",
        stdout);
  for (__c = 0x39; 0x39 < __c; __c = __c - 1) {
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0738_empty(void)

{
  int __c;
  
  fputs("0738 unsign start:57, iter:0, inc:-1, order:jub cmp:!=0                expected=\'\'    >",
        stdout);
  __c = 0x3a;
  while (__c != 0x3a) {
    __c = __c + -1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0739_empty(void)

{
  uint __c;
  
  fputs("0739 unsign start:57, iter:0, inc:-1, order:jub cmp:< 0                expected=\'\'    >",
        stdout);
  __c = 0x3a;
  while (0x3a < __c) {
    __c = __c - 1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0740_empty(void)

{
  uint __c;
  
  fputs("0740 unsign start:57, iter:0, inc:-1, order:jub cmp:<=0                expected=\'\'    >",
        stdout);
  __c = 0x3a;
  while (0x3a < __c) {
    __c = __c - 1;
    putchar(__c);
  }
  puts("<");
  return 0;
}



undefined4 var0741_empty(void)

{
  uint uVar1;
  
  fputs("0741 unsign start:100, iter:0, inc:-2, order:ujb cmp:!=0 exp:/2 +7     expected=\'\'    >",
        stdout);
  uVar1 = 0x66;
  while (uVar1 = uVar1 - 2, uVar1 != 100) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0742_empty(void)

{
  uint uVar1;
  
  fputs("0742 unsign start:100, iter:0, inc:-2, order:ujb cmp:< -1 exp:/2 +7    expected=\'\'    >",
        stdout);
  uVar1 = 0x66;
  while (uVar1 = uVar1 - 2, 0x65 < uVar1) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0743_empty(void)

{
  uint uVar1;
  
  fputs("0743 unsign start:100, iter:0, inc:-2, order:ujb cmp:< 0 exp:/2 +7     expected=\'\'    >",
        stdout);
  uVar1 = 0x66;
  while (uVar1 = uVar1 - 2, 100 < uVar1) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0744_empty(void)

{
  uint uVar1;
  
  fputs("0744 unsign start:100, iter:0, inc:-2, order:ujb cmp:<=-1 exp:/2 +7    expected=\'\'    >",
        stdout);
  uVar1 = 0x66;
  while (uVar1 = uVar1 - 2, 0x65 < uVar1) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0745_empty(void)

{
  uint uVar1;
  
  fputs("0745 unsign start:100, iter:0, inc:-2, order:ujb cmp:<=0 exp:/2 +7     expected=\'\'    >",
        stdout);
  uVar1 = 0x66;
  while (uVar1 = uVar1 - 2, 100 < uVar1) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0746_empty(void)

{
  uint uVar1;
  
  fputs("0746 unsign start:100, iter:0, inc:-2, order:jbu cmp:!=0 exp:/2 +7     expected=\'\'    >",
        stdout);
  for (uVar1 = 100; uVar1 != 100; uVar1 = uVar1 - 2) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0747_empty(void)

{
  uint uVar1;
  
  fputs("0747 unsign start:100, iter:0, inc:-2, order:jbu cmp:< -1 exp:/2 +7    expected=\'\'    >",
        stdout);
  for (uVar1 = 100; 0x65 < uVar1; uVar1 = uVar1 - 2) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0748_empty(void)

{
  uint uVar1;
  
  fputs("0748 unsign start:100, iter:0, inc:-2, order:jbu cmp:< 0 exp:/2 +7     expected=\'\'    >",
        stdout);
  for (uVar1 = 100; 100 < uVar1; uVar1 = uVar1 - 2) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0749_empty(void)

{
  uint uVar1;
  
  fputs("0749 unsign start:100, iter:0, inc:-2, order:jbu cmp:<=-1 exp:/2 +7    expected=\'\'    >",
        stdout);
  for (uVar1 = 100; 0x65 < uVar1; uVar1 = uVar1 - 2) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0750_empty(void)

{
  uint uVar1;
  
  fputs("0750 unsign start:100, iter:0, inc:-2, order:jbu cmp:<=0 exp:/2 +7     expected=\'\'    >",
        stdout);
  for (uVar1 = 100; 100 < uVar1; uVar1 = uVar1 - 2) {
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0751_empty(void)

{
  uint uVar1;
  
  fputs("0751 unsign start:100, iter:0, inc:-2, order:jub cmp:!=0 exp:/2 +7     expected=\'\'    >",
        stdout);
  uVar1 = 0x66;
  while (uVar1 != 0x66) {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0752_empty(void)

{
  uint uVar1;
  
  fputs("0752 unsign start:100, iter:0, inc:-2, order:jub cmp:< -1 exp:/2 +7    expected=\'\'    >",
        stdout);
  uVar1 = 0x66;
  while (0x67 < uVar1) {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0753_empty(void)

{
  uint uVar1;
  
  fputs("0753 unsign start:100, iter:0, inc:-2, order:jub cmp:< 0 exp:/2 +7     expected=\'\'    >",
        stdout);
  uVar1 = 0x66;
  while (0x66 < uVar1) {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0754_empty(void)

{
  uint uVar1;
  
  fputs("0754 unsign start:100, iter:0, inc:-2, order:jub cmp:<=-1 exp:/2 +7    expected=\'\'    >",
        stdout);
  uVar1 = 0x66;
  while (0x67 < uVar1) {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0755_empty(void)

{
  uint uVar1;
  
  fputs("0755 unsign start:100, iter:0, inc:-2, order:jub cmp:<=0 exp:/2 +7     expected=\'\'    >",
        stdout);
  uVar1 = 0x66;
  while (0x66 < uVar1) {
    uVar1 = uVar1 - 2;
    putchar((uVar1 >> 1) + 7);
  }
  puts("<");
  return 0;
}



undefined4 var0756_empty(void)

{
  int iVar1;
  int __c;
  
  fputs("0756 unsign start:0, iter:0, inc:+1, order:ujb cmp:!=0 second:=48 +1   expected=\'\'    >",
        stdout);
  iVar1 = -1;
  __c = 0x30;
  while (iVar1 = iVar1 + 1, iVar1 != 0) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



// WARNING: Removing unreachable block (ram,0x08055662)

undefined4 var0757_empty(void)

{
  fputs("0757 unsign start:0, iter:0, inc:+1, order:ujb cmp:< 0 second:=48 +1   expected=\'\'    >",
        stdout);
  puts("<");
  return 0;
}



undefined4 var0758_empty(void)

{
  int iVar1;
  int __c;
  
  fputs("0758 unsign start:0, iter:0, inc:+1, order:jbu cmp:!=0 second:=48 +1   expected=\'\'    >",
        stdout);
  __c = 0x30;
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



// WARNING: Removing unreachable block (ram,0x080556eb)

undefined4 var0759_empty(void)

{
  fputs("0759 unsign start:0, iter:0, inc:+1, order:jbu cmp:< 0 second:=48 +1   expected=\'\'    >",
        stdout);
  puts("<");
  return 0;
}



undefined4 var0760_empty(void)

{
  int iVar1;
  int __c;
  
  fputs("0760 unsign start:10, iter:0, inc:-1, order:ujb cmp:!=0 second:=48 +1  expected=\'\'    >",
        stdout);
  iVar1 = 0xb;
  __c = 0x30;
  while (iVar1 = iVar1 + -1, iVar1 != 10) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0761_empty(void)

{
  uint uVar1;
  int __c;
  
  fputs("0761 unsign start:10, iter:0, inc:-1, order:ujb cmp:< 0 second:=48 +1  expected=\'\'    >",
        stdout);
  uVar1 = 0xb;
  __c = 0x30;
  while (uVar1 = uVar1 - 1, 10 < uVar1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0762_empty(void)

{
  uint uVar1;
  int __c;
  
  fputs("0762 unsign start:10, iter:0, inc:-1, order:ujb cmp:<=0 second:=48 +1  expected=\'\'    >",
        stdout);
  uVar1 = 0xb;
  __c = 0x30;
  while (uVar1 = uVar1 - 1, 10 < uVar1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0763_empty(void)

{
  int iVar1;
  int __c;
  
  fputs("0763 unsign start:10, iter:0, inc:-1, order:jbu cmp:!=0 second:=48 +1  expected=\'\'    >",
        stdout);
  __c = 0x30;
  for (iVar1 = 10; iVar1 != 10; iVar1 = iVar1 + -1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0764_empty(void)

{
  uint uVar1;
  int __c;
  
  fputs("0764 unsign start:10, iter:0, inc:-1, order:jbu cmp:< 0 second:=48 +1  expected=\'\'    >",
        stdout);
  __c = 0x30;
  for (uVar1 = 10; 10 < uVar1; uVar1 = uVar1 - 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0765_empty(void)

{
  uint uVar1;
  int __c;
  
  fputs("0765 unsign start:10, iter:0, inc:-1, order:jbu cmp:<=0 second:=48 +1  expected=\'\'    >",
        stdout);
  __c = 0x30;
  for (uVar1 = 10; 10 < uVar1; uVar1 = uVar1 - 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0766_empty(void)

{
  int iVar1;
  int __c;
  
  fputs("0766 unsign start:10, iter:0, inc:-1, order:jub cmp:!=0 second:=48 +1  expected=\'\'    >",
        stdout);
  __c = 0x30;
  for (iVar1 = 0xb; iVar1 != 0xb; iVar1 = iVar1 + -1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0767_empty(void)

{
  uint uVar1;
  int __c;
  
  fputs("0767 unsign start:10, iter:0, inc:-1, order:jub cmp:< 0 second:=48 +1  expected=\'\'    >",
        stdout);
  __c = 0x30;
  for (uVar1 = 0xb; 0xb < uVar1; uVar1 = uVar1 - 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



undefined4 var0768_empty(void)

{
  uint uVar1;
  int __c;
  
  fputs("0768 unsign start:10, iter:0, inc:-1, order:jub cmp:<=0 second:=48 +1  expected=\'\'    >",
        stdout);
  __c = 0x30;
  for (uVar1 = 0xb; 0xb < uVar1; uVar1 = uVar1 - 1) {
    putchar(__c);
    __c = __c + 1;
  }
  puts("<");
  return 0;
}



int call_all(void)

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
  int iVar593;
  int iVar594;
  int iVar595;
  int iVar596;
  int iVar597;
  int iVar598;
  int iVar599;
  int iVar600;
  int iVar601;
  int iVar602;
  int iVar603;
  int iVar604;
  int iVar605;
  int iVar606;
  int iVar607;
  int iVar608;
  int iVar609;
  int iVar610;
  int iVar611;
  int iVar612;
  int iVar613;
  int iVar614;
  int iVar615;
  int iVar616;
  int iVar617;
  int iVar618;
  int iVar619;
  int iVar620;
  int iVar621;
  int iVar622;
  int iVar623;
  int iVar624;
  int iVar625;
  int iVar626;
  int iVar627;
  int iVar628;
  int iVar629;
  int iVar630;
  int iVar631;
  int iVar632;
  int iVar633;
  int iVar634;
  int iVar635;
  int iVar636;
  int iVar637;
  int iVar638;
  int iVar639;
  int iVar640;
  int iVar641;
  int iVar642;
  int iVar643;
  int iVar644;
  int iVar645;
  int iVar646;
  int iVar647;
  int iVar648;
  int iVar649;
  int iVar650;
  int iVar651;
  int iVar652;
  int iVar653;
  int iVar654;
  int iVar655;
  int iVar656;
  int iVar657;
  int iVar658;
  int iVar659;
  int iVar660;
  int iVar661;
  int iVar662;
  int iVar663;
  int iVar664;
  int iVar665;
  int iVar666;
  int iVar667;
  int iVar668;
  int iVar669;
  int iVar670;
  int iVar671;
  int iVar672;
  int iVar673;
  int iVar674;
  int iVar675;
  int iVar676;
  int iVar677;
  int iVar678;
  int iVar679;
  int iVar680;
  int iVar681;
  int iVar682;
  int iVar683;
  int iVar684;
  int iVar685;
  int iVar686;
  int iVar687;
  int iVar688;
  int iVar689;
  int iVar690;
  int iVar691;
  int iVar692;
  int iVar693;
  int iVar694;
  int iVar695;
  int iVar696;
  int iVar697;
  int iVar698;
  int iVar699;
  int iVar700;
  int iVar701;
  int iVar702;
  int iVar703;
  int iVar704;
  int iVar705;
  int iVar706;
  int iVar707;
  int iVar708;
  int iVar709;
  int iVar710;
  int iVar711;
  int iVar712;
  int iVar713;
  int iVar714;
  int iVar715;
  int iVar716;
  int iVar717;
  int iVar718;
  int iVar719;
  int iVar720;
  int iVar721;
  int iVar722;
  int iVar723;
  int iVar724;
  int iVar725;
  int iVar726;
  int iVar727;
  int iVar728;
  int iVar729;
  int iVar730;
  int iVar731;
  int iVar732;
  int iVar733;
  int iVar734;
  int iVar735;
  int iVar736;
  int iVar737;
  int iVar738;
  int iVar739;
  int iVar740;
  int iVar741;
  int iVar742;
  int iVar743;
  int iVar744;
  int iVar745;
  int iVar746;
  int iVar747;
  int iVar748;
  int iVar749;
  int iVar750;
  int iVar751;
  int iVar752;
  int iVar753;
  int iVar754;
  int iVar755;
  int iVar756;
  int iVar757;
  int iVar758;
  int iVar759;
  int iVar760;
  int iVar761;
  int iVar762;
  int iVar763;
  int iVar764;
  int iVar765;
  int iVar766;
  int iVar767;
  int iVar768;
  int iVar769;
  
  iVar1 = var0000_0123456789();
  iVar2 = var0001_0123456789();
  iVar3 = var0002_0123456789();
  iVar4 = var0003_0123456789();
  iVar5 = var0004_0123456789();
  iVar6 = var0005_0123456789();
  iVar7 = var0006_0123456789();
  iVar8 = var0007_0123456789();
  iVar9 = var0008_0123456789();
  iVar10 = var0009_0123456789();
  iVar11 = var0010_0123456789();
  iVar12 = var0011_0123456789();
  iVar13 = var0012_0123456789();
  iVar14 = var0013_0123456789();
  iVar15 = var0014_0123456789();
  iVar16 = var0015_0123456789();
  iVar17 = var0016_0123456789();
  iVar18 = var0017_0123456789();
  iVar19 = var0018_0123456789();
  iVar20 = var0019_0123456789();
  iVar21 = var0020_0123456789();
  iVar22 = var0021_0123456789();
  iVar23 = var0022_0123456789();
  iVar24 = var0023_0123456789();
  iVar25 = var0024_0123456789();
  iVar26 = var0025_0123456789();
  iVar27 = var0026_0123456789();
  iVar28 = var0027_0123456789();
  iVar29 = var0028_0123456789();
  iVar30 = var0029_0123456789();
  iVar31 = var0030_0123456789();
  iVar32 = var0031_0123456789();
  iVar33 = var0032_0123456789();
  iVar34 = var0033_0123456789();
  iVar35 = var0034_0123456789();
  iVar36 = var0035_0123456789();
  iVar37 = var0036_0123456789();
  iVar38 = var0037_0123456789();
  iVar39 = var0038_0123456789();
  iVar40 = var0039_0123456789();
  iVar41 = var0040_0123456789();
  iVar42 = var0041_0123456789();
  iVar43 = var0042_0123456789();
  iVar44 = var0043_0123456789();
  iVar45 = var0044_0123456789();
  iVar46 = var0045_0123456789();
  iVar47 = var0046_0123456789();
  iVar48 = var0047_0123456789();
  iVar49 = var0048_0123456789();
  iVar50 = var0049_0123456789();
  iVar51 = var0050_0123456789();
  iVar52 = var0051_0123456789();
  iVar53 = var0052_0123456789();
  iVar54 = var0053_0123456789();
  iVar55 = var0054_0123456789();
  iVar56 = var0055_0123456789();
  iVar57 = var0056_0123456789();
  iVar58 = var0057_0123456789();
  iVar59 = var0058_0123456789();
  iVar60 = var0059_0123456789();
  iVar61 = var0060_0123456789();
  iVar62 = var0061_0123456789();
  iVar63 = var0062_0123456789();
  iVar64 = var0063_0123456789();
  iVar65 = var0064_0123456789();
  iVar66 = var0065_0123456789();
  iVar67 = var0066_9876543210();
  iVar68 = var0067_9876543210();
  iVar69 = var0068_9876543210();
  iVar70 = var0069_9876543210();
  iVar71 = var0070_9876543210();
  iVar72 = var0071_9876543210();
  iVar73 = var0072_9876543210();
  iVar74 = var0073_9876543210();
  iVar75 = var0074_9876543210();
  iVar76 = var0075_9876543210();
  iVar77 = var0076_9876543210();
  iVar78 = var0077_9876543210();
  iVar79 = var0078_9876543210();
  iVar80 = var0079_9876543210();
  iVar81 = var0080_9876543210();
  iVar82 = var0081_9876543210();
  iVar83 = var0082_9876543210();
  iVar84 = var0083_9876543210();
  iVar85 = var0084_9876543210();
  iVar86 = var0085_9876543210();
  iVar87 = var0086_9876543210();
  iVar88 = var0087_9876543210();
  iVar89 = var0088_9876543210();
  iVar90 = var0089_9876543210();
  iVar91 = var0090_9876543210();
  iVar92 = var0091_9876543210();
  iVar93 = var0092_9876543210();
  iVar94 = var0093_9876543210();
  iVar95 = var0094_9876543210();
  iVar96 = var0095_9876543210();
  iVar97 = var0096_9876543210();
  iVar98 = var0097_9876543210();
  iVar99 = var0098_9876543210();
  iVar100 = var0099_9876543210();
  iVar101 = var0100_9876543210();
  iVar102 = var0101_9876543210();
  iVar103 = var0102_9876543210();
  iVar104 = var0103_9876543210();
  iVar105 = var0104_9876543210();
  iVar106 = var0105_9876543210();
  iVar107 = var0106_9876543210();
  iVar108 = var0107_9876543210();
  iVar109 = var0108_9876543210();
  iVar110 = var0109_9876543210();
  iVar111 = var0110_9876543210();
  iVar112 = var0111_9876543210();
  iVar113 = var0112_9876543210();
  iVar114 = var0113_9876543210();
  iVar115 = var0114_0123456789();
  iVar116 = var0115_0123456789();
  iVar117 = var0116_0123456789();
  iVar118 = var0117_0123456789();
  iVar119 = var0118_0123456789();
  iVar120 = var0119_0123456789();
  iVar121 = var0120_0123456789();
  iVar122 = var0121_0123456789();
  iVar123 = var0122_0123456789();
  iVar124 = var0123_0123456789();
  iVar125 = var0124_0123456789();
  iVar126 = var0125_0123456789();
  iVar127 = var0126_0123456789();
  iVar128 = var0127_0123456789();
  iVar129 = var0128_0123456789();
  iVar130 = var0129_0123456789();
  iVar131 = var0130_0123456789();
  iVar132 = var0131_0123456789();
  iVar133 = var0132_0123456789();
  iVar134 = var0133_0123456789();
  iVar135 = var0134_0123456789();
  iVar136 = var0135_0123456789();
  iVar137 = var0136_0123456789();
  iVar138 = var0137_0123456789();
  iVar139 = var0138_0123456789();
  iVar140 = var0139_0123456789();
  iVar141 = var0140_0123456789();
  iVar142 = var0141_0123456789();
  iVar143 = var0142_0123456789();
  iVar144 = var0143_0123456789();
  iVar145 = var0144_0123456789();
  iVar146 = var0145_0123456789();
  iVar147 = var0146_0123456789();
  iVar148 = var0147_0123456789();
  iVar149 = var0148_0123456789();
  iVar150 = var0149_0123456789();
  iVar151 = var0150_0123456789();
  iVar152 = var0151_0123456789();
  iVar153 = var0152_0123456789();
  iVar154 = var0153_0123456789();
  iVar155 = var0154_0123456789();
  iVar156 = var0155_0123456789();
  iVar157 = var0156_0123456789();
  iVar158 = var0157_0123456789();
  iVar159 = var0158_0123456789();
  iVar160 = var0159_0123456789();
  iVar161 = var0160_0123456789();
  iVar162 = var0161_0123456789();
  iVar163 = var0162_0123456789();
  iVar164 = var0163_0123456789();
  iVar165 = var0164_0123456789();
  iVar166 = var0165_0123456789();
  iVar167 = var0166_0123456789();
  iVar168 = var0167_0123456789();
  iVar169 = var0168_0();
  iVar170 = var0169_0();
  iVar171 = var0170_0();
  iVar172 = var0171_0();
  iVar173 = var0172_0();
  iVar174 = var0173_0();
  iVar175 = var0174_0();
  iVar176 = var0175_0();
  iVar177 = var0176_0();
  iVar178 = var0177_0();
  iVar179 = var0178_0();
  iVar180 = var0179_0();
  iVar181 = var0180_0();
  iVar182 = var0181_0();
  iVar183 = var0182_0();
  iVar184 = var0183_0();
  iVar185 = var0184_0();
  iVar186 = var0185_0();
  iVar187 = var0186_0();
  iVar188 = var0187_0();
  iVar189 = var0188_0();
  iVar190 = var0189_0();
  iVar191 = var0190_0();
  iVar192 = var0191_0();
  iVar193 = var0192_0();
  iVar194 = var0193_0();
  iVar195 = var0194_0();
  iVar196 = var0195_0();
  iVar197 = var0196_0();
  iVar198 = var0197_0();
  iVar199 = var0198_0();
  iVar200 = var0199_0();
  iVar201 = var0200_0();
  iVar202 = var0201_0();
  iVar203 = var0202_0();
  iVar204 = var0203_0();
  iVar205 = var0204_0();
  iVar206 = var0205_0();
  iVar207 = var0206_0();
  iVar208 = var0207_0();
  iVar209 = var0208_0();
  iVar210 = var0209_0();
  iVar211 = var0210_0();
  iVar212 = var0211_0();
  iVar213 = var0212_0();
  iVar214 = var0213_0();
  iVar215 = var0214_0();
  iVar216 = var0215_0();
  iVar217 = var0216_0();
  iVar218 = var0217_0();
  iVar219 = var0218_0();
  iVar220 = var0219_0();
  iVar221 = var0220_0();
  iVar222 = var0221_0();
  iVar223 = var0222_0();
  iVar224 = var0223_0();
  iVar225 = var0224_0();
  iVar226 = var0225_0();
  iVar227 = var0226_0();
  iVar228 = var0227_0();
  iVar229 = var0228_0();
  iVar230 = var0229_0();
  iVar231 = var0230_0();
  iVar232 = var0231_0();
  iVar233 = var0232_0();
  iVar234 = var0233_0();
  iVar235 = var0234_9();
  iVar236 = var0235_9();
  iVar237 = var0236_9();
  iVar238 = var0237_9();
  iVar239 = var0238_9();
  iVar240 = var0239_9();
  iVar241 = var0240_9();
  iVar242 = var0241_9();
  iVar243 = var0242_9();
  iVar244 = var0243_9();
  iVar245 = var0244_9();
  iVar246 = var0245_9();
  iVar247 = var0246_9();
  iVar248 = var0247_9();
  iVar249 = var0248_9();
  iVar250 = var0249_9();
  iVar251 = var0250_9();
  iVar252 = var0251_9();
  iVar253 = var0252_9();
  iVar254 = var0253_9();
  iVar255 = var0254_9();
  iVar256 = var0255_9();
  iVar257 = var0256_9();
  iVar258 = var0257_9();
  iVar259 = var0258_9();
  iVar260 = var0259_9();
  iVar261 = var0260_9();
  iVar262 = var0261_9();
  iVar263 = var0262_9();
  iVar264 = var0263_9();
  iVar265 = var0264_9();
  iVar266 = var0265_9();
  iVar267 = var0266_9();
  iVar268 = var0267_9();
  iVar269 = var0268_9();
  iVar270 = var0269_9();
  iVar271 = var0270_9();
  iVar272 = var0271_9();
  iVar273 = var0272_9();
  iVar274 = var0273_9();
  iVar275 = var0274_9();
  iVar276 = var0275_9();
  iVar277 = var0276_9();
  iVar278 = var0277_9();
  iVar279 = var0278_9();
  iVar280 = var0279_9();
  iVar281 = var0280_9();
  iVar282 = var0281_9();
  iVar283 = var0282_0();
  iVar284 = var0283_0();
  iVar285 = var0284_0();
  iVar286 = var0285_0();
  iVar287 = var0286_0();
  iVar288 = var0287_0();
  iVar289 = var0288_0();
  iVar290 = var0289_0();
  iVar291 = var0290_0();
  iVar292 = var0291_0();
  iVar293 = var0292_0();
  iVar294 = var0293_0();
  iVar295 = var0294_0();
  iVar296 = var0295_0();
  iVar297 = var0296_0();
  iVar298 = var0297_0();
  iVar299 = var0298_0();
  iVar300 = var0299_0();
  iVar301 = var0300_0();
  iVar302 = var0301_0();
  iVar303 = var0302_0();
  iVar304 = var0303_0();
  iVar305 = var0304_0();
  iVar306 = var0305_0();
  iVar307 = var0306_0();
  iVar308 = var0307_0();
  iVar309 = var0308_0();
  iVar310 = var0309_0();
  iVar311 = var0310_0();
  iVar312 = var0311_0();
  iVar313 = var0312_0();
  iVar314 = var0313_0();
  iVar315 = var0314_0();
  iVar316 = var0315_0();
  iVar317 = var0316_0();
  iVar318 = var0317_0();
  iVar319 = var0318_0();
  iVar320 = var0319_0();
  iVar321 = var0320_0();
  iVar322 = var0321_0();
  iVar323 = var0322_0();
  iVar324 = var0323_0();
  iVar325 = var0324_0();
  iVar326 = var0325_0();
  iVar327 = var0326_0();
  iVar328 = var0327_0();
  iVar329 = var0328_0();
  iVar330 = var0329_0();
  iVar331 = var0330_0();
  iVar332 = var0331_0();
  iVar333 = var0332_0();
  iVar334 = var0333_0();
  iVar335 = var0334_0();
  iVar336 = var0335_0();
  iVar337 = var0336_empty();
  iVar338 = var0337_empty();
  iVar339 = var0338_empty();
  iVar340 = var0339_empty();
  iVar341 = var0340_empty();
  iVar342 = var0341_empty();
  iVar343 = var0342_empty();
  iVar344 = var0343_empty();
  iVar345 = var0344_empty();
  iVar346 = var0345_empty();
  iVar347 = var0346_empty();
  iVar348 = var0347_empty();
  iVar349 = var0348_empty();
  iVar350 = var0349_empty();
  iVar351 = var0350_empty();
  iVar352 = var0351_empty();
  iVar353 = var0352_empty();
  iVar354 = var0353_empty();
  iVar355 = var0354_empty();
  iVar356 = var0355_empty();
  iVar357 = var0356_empty();
  iVar358 = var0357_empty();
  iVar359 = var0358_empty();
  iVar360 = var0359_empty();
  iVar361 = var0360_empty();
  iVar362 = var0361_empty();
  iVar363 = var0362_empty();
  iVar364 = var0363_empty();
  iVar365 = var0364_empty();
  iVar366 = var0365_empty();
  iVar367 = var0366_empty();
  iVar368 = var0367_empty();
  iVar369 = var0368_empty();
  iVar370 = var0369_empty();
  iVar371 = var0370_empty();
  iVar372 = var0371_empty();
  iVar373 = var0372_empty();
  iVar374 = var0373_empty();
  iVar375 = var0374_empty();
  iVar376 = var0375_empty();
  iVar377 = var0376_empty();
  iVar378 = var0377_empty();
  iVar379 = var0378_empty();
  iVar380 = var0379_empty();
  iVar381 = var0380_empty();
  iVar382 = var0381_empty();
  iVar383 = var0382_empty();
  iVar384 = var0383_empty();
  iVar385 = var0384_empty();
  iVar386 = var0385_empty();
  iVar387 = var0386_empty();
  iVar388 = var0387_empty();
  iVar389 = var0388_empty();
  iVar390 = var0389_empty();
  iVar391 = var0390_empty();
  iVar392 = var0391_empty();
  iVar393 = var0392_empty();
  iVar394 = var0393_empty();
  iVar395 = var0394_empty();
  iVar396 = var0395_empty();
  iVar397 = var0396_empty();
  iVar398 = var0397_empty();
  iVar399 = var0398_empty();
  iVar400 = var0399_empty();
  iVar401 = var0400_empty();
  iVar402 = var0401_empty();
  iVar403 = var0402_empty();
  iVar404 = var0403_empty();
  iVar405 = var0404_empty();
  iVar406 = var0405_empty();
  iVar407 = var0406_empty();
  iVar408 = var0407_empty();
  iVar409 = var0408_empty();
  iVar410 = var0409_empty();
  iVar411 = var0410_empty();
  iVar412 = var0411_empty();
  iVar413 = var0412_empty();
  iVar414 = var0413_empty();
  iVar415 = var0414_empty();
  iVar416 = var0415_empty();
  iVar417 = var0416_empty();
  iVar418 = var0417_empty();
  iVar419 = var0418_empty();
  iVar420 = var0419_empty();
  iVar421 = var0420_0123456789();
  iVar422 = var0421_0123456789();
  iVar423 = var0422_0123456789();
  iVar424 = var0423_0123456789();
  iVar425 = var0424_0123456789();
  iVar426 = var0425_0123456789();
  iVar427 = var0426_0123456789();
  iVar428 = var0427_0123456789();
  iVar429 = var0428_0123456789();
  iVar430 = var0429_0123456789();
  iVar431 = var0430_0123456789();
  iVar432 = var0431_0123456789();
  iVar433 = var0432_0123456789();
  iVar434 = var0433_0123456789();
  iVar435 = var0434_0123456789();
  iVar436 = var0435_0123456789();
  iVar437 = var0436_0123456789();
  iVar438 = var0437_0123456789();
  iVar439 = var0438_0123456789();
  iVar440 = var0439_0123456789();
  iVar441 = var0440_0123456789();
  iVar442 = var0441_0123456789();
  iVar443 = var0442_0123456789();
  iVar444 = var0443_0123456789();
  iVar445 = var0444_0123456789();
  iVar446 = var0445_0123456789();
  iVar447 = var0446_0123456789();
  iVar448 = var0447_0123456789();
  iVar449 = var0448_0123456789();
  iVar450 = var0449_0123456789();
  iVar451 = var0450_0123456789();
  iVar452 = var0451_0123456789();
  iVar453 = var0452_0123456789();
  iVar454 = var0453_0123456789();
  iVar455 = var0454_0123456789();
  iVar456 = var0455_0123456789();
  iVar457 = var0456_0123456789();
  iVar458 = var0457_0123456789();
  iVar459 = var0458_0123456789();
  iVar460 = var0459_0123456789();
  iVar461 = var0460_0123456789();
  iVar462 = var0461_0123456789();
  iVar463 = var0462_0123456789();
  iVar464 = var0463_0123456789();
  iVar465 = var0464_0123456789();
  iVar466 = var0465_0123456789();
  iVar467 = var0466_0123456789();
  iVar468 = var0467_0123456789();
  iVar469 = var0468_0123456789();
  iVar470 = var0469_0123456789();
  iVar471 = var0470_0123456789();
  iVar472 = var0471_0123456789();
  iVar473 = var0472_0123456789();
  iVar474 = var0473_0123456789();
  iVar475 = var0474_0123456789();
  iVar476 = var0475_0123456789();
  iVar477 = var0476_0123456789();
  iVar478 = var0477_0123456789();
  iVar479 = var0478_0123456789();
  iVar480 = var0479_0123456789();
  iVar481 = var0480_0123456789();
  iVar482 = var0481_0123456789();
  iVar483 = var0482_9876543210();
  iVar484 = var0483_9876543210();
  iVar485 = var0484_9876543210();
  iVar486 = var0485_9876543210();
  iVar487 = var0486_9876543210();
  iVar488 = var0487_9876543210();
  iVar489 = var0488_9876543210();
  iVar490 = var0489_9876543210();
  iVar491 = var0490_9876543210();
  iVar492 = var0491_9876543210();
  iVar493 = var0492_9876543210();
  iVar494 = var0493_9876543210();
  iVar495 = var0494_9876543210();
  iVar496 = var0495_9876543210();
  iVar497 = var0496_9876543210();
  iVar498 = var0497_9876543210();
  iVar499 = var0498_9876543210();
  iVar500 = var0499_9876543210();
  iVar501 = var0500_9876543210();
  iVar502 = var0501_9876543210();
  iVar503 = var0502_9876543210();
  iVar504 = var0503_9876543210();
  iVar505 = var0504_9876543210();
  iVar506 = var0505_9876543210();
  iVar507 = var0506_9876543210();
  iVar508 = var0507_9876543210();
  iVar509 = var0508_9876543210();
  iVar510 = var0509_9876543210();
  iVar511 = var0510_9876543210();
  iVar512 = var0511_9876543210();
  iVar513 = var0512_9876543210();
  iVar514 = var0513_9876543210();
  iVar515 = var0514_9876543210();
  iVar516 = var0515_9876543210();
  iVar517 = var0516_9876543210();
  iVar518 = var0517_9876543210();
  iVar519 = var0518_9876543210();
  iVar520 = var0519_9876543210();
  iVar521 = var0520_9876543210();
  iVar522 = var0521_9876543210();
  iVar523 = var0522_9876543210();
  iVar524 = var0523_9876543210();
  iVar525 = var0524_9876543210();
  iVar526 = var0525_9876543210();
  iVar527 = var0526_9876543210();
  iVar528 = var0527_9876543210();
  iVar529 = var0528_9876543210();
  iVar530 = var0529_9876543210();
  iVar531 = var0530_0123456789();
  iVar532 = var0531_0123456789();
  iVar533 = var0532_0123456789();
  iVar534 = var0533_0123456789();
  iVar535 = var0534_0123456789();
  iVar536 = var0535_0123456789();
  iVar537 = var0536_0123456789();
  iVar538 = var0537_0123456789();
  iVar539 = var0538_0123456789();
  iVar540 = var0539_0123456789();
  iVar541 = var0540_0123456789();
  iVar542 = var0541_0123456789();
  iVar543 = var0542_0123456789();
  iVar544 = var0543_0123456789();
  iVar545 = var0544_0123456789();
  iVar546 = var0545_0123456789();
  iVar547 = var0546_0123456789();
  iVar548 = var0547_0123456789();
  iVar549 = var0548_0123456789();
  iVar550 = var0549_0123456789();
  iVar551 = var0550_0123456789();
  iVar552 = var0551_0123456789();
  iVar553 = var0552_0123456789();
  iVar554 = var0553_0123456789();
  iVar555 = var0554_0123456789();
  iVar556 = var0555_0123456789();
  iVar557 = var0556_0123456789();
  iVar558 = var0557_0123456789();
  iVar559 = var0558_0123456789();
  iVar560 = var0559_0123456789();
  iVar561 = var0560_0123456789();
  iVar562 = var0561_0123456789();
  iVar563 = var0562_0();
  iVar564 = var0563_0();
  iVar565 = var0564_0();
  iVar566 = var0565_0();
  iVar567 = var0566_0();
  iVar568 = var0567_0();
  iVar569 = var0568_0();
  iVar570 = var0569_0();
  iVar571 = var0570_0();
  iVar572 = var0571_0();
  iVar573 = var0572_0();
  iVar574 = var0573_0();
  iVar575 = var0574_0();
  iVar576 = var0575_0();
  iVar577 = var0576_0();
  iVar578 = var0577_0();
  iVar579 = var0578_0();
  iVar580 = var0579_0();
  iVar581 = var0580_0();
  iVar582 = var0581_0();
  iVar583 = var0582_0();
  iVar584 = var0583_0();
  iVar585 = var0584_0();
  iVar586 = var0585_0();
  iVar587 = var0586_0();
  iVar588 = var0587_0();
  iVar589 = var0588_0();
  iVar590 = var0589_0();
  iVar591 = var0590_0();
  iVar592 = var0591_0();
  iVar593 = var0592_0();
  iVar594 = var0593_0();
  iVar595 = var0594_0();
  iVar596 = var0595_0();
  iVar597 = var0596_0();
  iVar598 = var0597_0();
  iVar599 = var0598_0();
  iVar600 = var0599_0();
  iVar601 = var0600_0();
  iVar602 = var0601_0();
  iVar603 = var0602_0();
  iVar604 = var0603_0();
  iVar605 = var0604_0();
  iVar606 = var0605_0();
  iVar607 = var0606_0();
  iVar608 = var0607_0();
  iVar609 = var0608_0();
  iVar610 = var0609_0();
  iVar611 = var0610_0();
  iVar612 = var0611_0();
  iVar613 = var0612_0();
  iVar614 = var0613_0();
  iVar615 = var0614_0();
  iVar616 = var0615_0();
  iVar617 = var0616_0();
  iVar618 = var0617_0();
  iVar619 = var0618_0();
  iVar620 = var0619_0();
  iVar621 = var0620_0();
  iVar622 = var0621_0();
  iVar623 = var0622_0();
  iVar624 = var0623_0();
  iVar625 = var0624_9();
  iVar626 = var0625_9();
  iVar627 = var0626_9();
  iVar628 = var0627_9();
  iVar629 = var0628_9();
  iVar630 = var0629_9();
  iVar631 = var0630_9();
  iVar632 = var0631_9();
  iVar633 = var0632_9();
  iVar634 = var0633_9();
  iVar635 = var0634_9();
  iVar636 = var0635_9();
  iVar637 = var0636_9();
  iVar638 = var0637_9();
  iVar639 = var0638_9();
  iVar640 = var0639_9();
  iVar641 = var0640_9();
  iVar642 = var0641_9();
  iVar643 = var0642_9();
  iVar644 = var0643_9();
  iVar645 = var0644_9();
  iVar646 = var0645_9();
  iVar647 = var0646_9();
  iVar648 = var0647_9();
  iVar649 = var0648_9();
  iVar650 = var0649_9();
  iVar651 = var0650_9();
  iVar652 = var0651_9();
  iVar653 = var0652_9();
  iVar654 = var0653_9();
  iVar655 = var0654_9();
  iVar656 = var0655_9();
  iVar657 = var0656_9();
  iVar658 = var0657_9();
  iVar659 = var0658_9();
  iVar660 = var0659_9();
  iVar661 = var0660_9();
  iVar662 = var0661_9();
  iVar663 = var0662_9();
  iVar664 = var0663_9();
  iVar665 = var0664_9();
  iVar666 = var0665_9();
  iVar667 = var0666_9();
  iVar668 = var0667_9();
  iVar669 = var0668_9();
  iVar670 = var0669_9();
  iVar671 = var0670_9();
  iVar672 = var0671_9();
  iVar673 = var0672_0();
  iVar674 = var0673_0();
  iVar675 = var0674_0();
  iVar676 = var0675_0();
  iVar677 = var0676_0();
  iVar678 = var0677_0();
  iVar679 = var0678_0();
  iVar680 = var0679_0();
  iVar681 = var0680_0();
  iVar682 = var0681_0();
  iVar683 = var0682_0();
  iVar684 = var0683_0();
  iVar685 = var0684_0();
  iVar686 = var0685_0();
  iVar687 = var0686_0();
  iVar688 = var0687_0();
  iVar689 = var0688_0();
  iVar690 = var0689_0();
  iVar691 = var0690_0();
  iVar692 = var0691_0();
  iVar693 = var0692_0();
  iVar694 = var0693_0();
  iVar695 = var0694_0();
  iVar696 = var0695_0();
  iVar697 = var0696_0();
  iVar698 = var0697_0();
  iVar699 = var0698_0();
  iVar700 = var0699_0();
  iVar701 = var0700_0();
  iVar702 = var0701_0();
  iVar703 = var0702_0();
  iVar704 = var0703_0();
  iVar705 = var0704_empty();
  iVar706 = var0705_empty();
  iVar707 = var0706_empty();
  iVar708 = var0707_empty();
  iVar709 = var0708_empty();
  iVar710 = var0709_empty();
  iVar711 = var0710_empty();
  iVar712 = var0711_empty();
  iVar713 = var0712_empty();
  iVar714 = var0713_empty();
  iVar715 = var0714_empty();
  iVar716 = var0715_empty();
  iVar717 = var0716_empty();
  iVar718 = var0717_empty();
  iVar719 = var0718_empty();
  iVar720 = var0719_empty();
  iVar721 = var0720_empty();
  iVar722 = var0721_empty();
  iVar723 = var0722_empty();
  iVar724 = var0723_empty();
  iVar725 = var0724_empty();
  iVar726 = var0725_empty();
  iVar727 = var0726_empty();
  iVar728 = var0727_empty();
  iVar729 = var0728_empty();
  iVar730 = var0729_empty();
  iVar731 = var0730_empty();
  iVar732 = var0731_empty();
  iVar733 = var0732_empty();
  iVar734 = var0733_empty();
  iVar735 = var0734_empty();
  iVar736 = var0735_empty();
  iVar737 = var0736_empty();
  iVar738 = var0737_empty();
  iVar739 = var0738_empty();
  iVar740 = var0739_empty();
  iVar741 = var0740_empty();
  iVar742 = var0741_empty();
  iVar743 = var0742_empty();
  iVar744 = var0743_empty();
  iVar745 = var0744_empty();
  iVar746 = var0745_empty();
  iVar747 = var0746_empty();
  iVar748 = var0747_empty();
  iVar749 = var0748_empty();
  iVar750 = var0749_empty();
  iVar751 = var0750_empty();
  iVar752 = var0751_empty();
  iVar753 = var0752_empty();
  iVar754 = var0753_empty();
  iVar755 = var0754_empty();
  iVar756 = var0755_empty();
  iVar757 = var0756_empty();
  iVar758 = var0757_empty();
  iVar759 = var0758_empty();
  iVar760 = var0759_empty();
  iVar761 = var0760_empty();
  iVar762 = var0761_empty();
  iVar763 = var0762_empty();
  iVar764 = var0763_empty();
  iVar765 = var0764_empty();
  iVar766 = var0765_empty();
  iVar767 = var0766_empty();
  iVar768 = var0767_empty();
  iVar769 = var0768_empty();
  return iVar1 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
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
         iVar588 + iVar589 + iVar590 + iVar591 + iVar592 + iVar593 + iVar594 + iVar595 + iVar596 +
         iVar597 + iVar598 + iVar599 + iVar600 + iVar601 + iVar602 + iVar603 + iVar604 + iVar605 +
         iVar606 + iVar607 + iVar608 + iVar609 + iVar610 + iVar611 + iVar612 + iVar613 + iVar614 +
         iVar615 + iVar616 + iVar617 + iVar618 + iVar619 + iVar620 + iVar621 + iVar622 + iVar623 +
         iVar624 + iVar625 + iVar626 + iVar627 + iVar628 + iVar629 + iVar630 + iVar631 + iVar632 +
         iVar633 + iVar634 + iVar635 + iVar636 + iVar637 + iVar638 + iVar639 + iVar640 + iVar641 +
         iVar642 + iVar643 + iVar644 + iVar645 + iVar646 + iVar647 + iVar648 + iVar649 + iVar650 +
         iVar651 + iVar652 + iVar653 + iVar654 + iVar655 + iVar656 + iVar657 + iVar658 + iVar659 +
         iVar660 + iVar661 + iVar662 + iVar663 + iVar664 + iVar665 + iVar666 + iVar667 + iVar668 +
         iVar669 + iVar670 + iVar671 + iVar672 + iVar673 + iVar674 + iVar675 + iVar676 + iVar677 +
         iVar678 + iVar679 + iVar680 + iVar681 + iVar682 + iVar683 + iVar684 + iVar685 + iVar686 +
         iVar687 + iVar688 + iVar689 + iVar690 + iVar691 + iVar692 + iVar693 + iVar694 + iVar695 +
         iVar696 + iVar697 + iVar698 + iVar699 + iVar700 + iVar701 + iVar702 + iVar703 + iVar704 +
         iVar705 + iVar706 + iVar707 + iVar708 + iVar709 + iVar710 + iVar711 + iVar712 + iVar713 +
         iVar714 + iVar715 + iVar716 + iVar717 + iVar718 + iVar719 + iVar720 + iVar721 + iVar722 +
         iVar723 + iVar724 + iVar725 + iVar726 + iVar727 + iVar728 + iVar729 + iVar730 + iVar731 +
         iVar732 + iVar733 + iVar734 + iVar735 + iVar736 + iVar737 + iVar738 + iVar739 + iVar740 +
         iVar741 + iVar742 + iVar743 + iVar744 + iVar745 + iVar746 + iVar747 + iVar748 + iVar749 +
         iVar750 + iVar751 + iVar752 + iVar753 + iVar754 + iVar755 + iVar756 + iVar757 + iVar758 +
         iVar759 + iVar760 + iVar761 + iVar762 + iVar763 + iVar764 + iVar765 + iVar766 + iVar767 +
         iVar768 + iVar769;
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


