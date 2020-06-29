typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned int    uint;
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
    char _unused2[15];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct _IO_FILE FILE;

typedef uint __mode_t;

typedef long __time_t;

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef __time_t time_t;

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




// WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_08048410(void)

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

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = time(__timer);
  return tVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = memcmp(__s1,__s2,__n);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = fseek(__stream,__off,__whence);
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



// WARNING: Unknown calling convention yet parameter storage is locked

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = putchar(__c);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int chmod(char *__file,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = chmod(__file,__mode);
  return iVar1;
}



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



int main(undefined4 param_1,char **param_2)

{
  basic_1_string_literals_quoting();
  basic_2_string_literals_low_chars();
  basic_3_string_literals_high_chars();
  basic_4_readonly_vs_modifiable();
  basic_10_result_var_name(param_1);
  intermediate_1_for_loop_name(param_1);
  intermediate_2_parameter_names(param_1);
  intermediate_10_int_literal_in_bit_context(param_1);
  intermediate_11_int_literal_in_arithm_context(param_1);
  advanced_1_null_bytes_with_fixed_length(0);
  advanced_2_naming_enums(0);
  advanced_10_int_literal_in_char_context(*param_2);
  advanced_11_printf_type_related();
  return (int)**param_2;
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



// WARNING: Removing unreachable block (ram,0x080485af)
// WARNING: Removing unreachable block (ram,0x080485b8)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x080485e8)
// WARNING: Removing unreachable block (ram,0x080485f1)

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



// WARNING: Removing unreachable block (ram,0x08048649)

void frame_dummy(void)

{
  register_tm_clones();
  return;
}



undefined4 basic_1_string_literals_quoting(void)

{
  puts("with \' single quote");
  puts("with \" double quote");
  return 0;
}



undefined4 basic_2_string_literals_low_chars(void)

{
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
  return 0;
}



undefined4 basic_3_string_literals_high_chars(void)

{
  puts(&DAT_08048ff8);
  puts(&DAT_08049014);
  puts(&DAT_08049030);
  puts(&DAT_0804904c);
  puts(&DAT_08049068);
  puts(&DAT_08049084);
  puts(&DAT_080490a0);
  puts(&DAT_080490bc);
  puts(&DAT_080490d8);
  puts(&DAT_080490f4);
  puts(&DAT_08049110);
  puts(&DAT_0804912c);
  puts(&DAT_08049148);
  puts(&DAT_08049164);
  puts(&DAT_08049180);
  puts(&DAT_0804919c);
  return 0;
}



undefined4 basic_4_readonly_vs_modifiable(void)

{
  puts("a read only string");
  puts(a_modifiable_string);
  return 0;
}



int basic_10_result_var_name(int param_1)

{
  time_t tVar1;
  
  if (5 < param_1) {
    return param_1 << 2;
  }
  tVar1 = time((time_t *)0x0);
  return tVar1 + 10;
}



undefined4 intermediate_1_for_loop_name(int param_1)

{
  int __c;
  int iVar1;
  
  if (0 < param_1) {
    __c = 0x30;
    do {
      iVar1 = __c + 1;
      putchar(__c);
      __c = iVar1;
    } while (iVar1 != param_1 + 0x30);
  }
  return 0;
}



undefined4 intermediate_2_parameter_names(int param_1)

{
  char *__modes;
  FILE *pFVar1;
  char *__filename;
  
  if (param_1 == 1) {
    __filename = "/is/a/1";
    __modes = "r";
  }
  else {
    __modes = "r";
    __filename = "/is/something/else";
    if (param_1 < 0) {
      __modes = "w";
    }
  }
  pFVar1 = fopen(__filename,__modes);
  if (pFVar1 != (FILE *)0x0) {
    return 0;
  }
  puts("failed");
  return 0;
}



undefined4 intermediate_10_int_literal_in_bit_context(uint param_1)

{
  putchar(param_1 & 0xf0f0);
  putchar(param_1 | 0xff0000);
  putchar(param_1 ^ 3);
  putchar(param_1 & 0x2a);
  putchar(param_1 | 999);
  putchar(param_1 ^ 0x12d591);
  return 0;
}



undefined4 intermediate_11_int_literal_in_arithm_context(int param_1)

{
  putchar(param_1 + 0xf0f0);
  putchar(param_1 + -0xff0000);
  putchar(param_1 * 3);
  putchar(param_1 + 0x2a);
  putchar(param_1 + -999);
  putchar(param_1 * 0x12d591);
  return 0;
}



void advanced_1_null_bytes_with_fixed_length(FILE *param_1)

{
  fwrite("with null byte ",0x11,1,param_1);
  fwrite("with null byte ",1,0x11,param_1);
  memcmp(param_1,"with null byte ",0x11);
  return;
}



undefined4 advanced_2_naming_enums(FILE *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = fseek(param_1,0,0);
  iVar2 = fseek(param_1,0,1);
  iVar3 = fseek(param_1,0,2);
  iVar4 = chmod("/some/path",0x24);
  if (4 < iVar4 + iVar1 + iVar2 + iVar3) {
    puts("something");
  }
  return 0;
}



undefined4 advanced_10_int_literal_in_char_context(char *param_1)

{
  char *pcVar1;
  char local_f;
  undefined local_e;
  undefined local_d;
  
  putchar(0x31);
  pcVar1 = strchr(param_1,0x31);
  if (pcVar1 != (char *)0x0) {
    puts("contains a \'1\'");
  }
  local_f = 'a';
  local_d = 0;
  local_e = 0x31;
  puts(&local_f);
  return 0;
}



undefined4 advanced_11_printf_type_related(void)

{
  printf("as char %c\n",0x30);
  printf("as int %d\n",0x30);
  printf("as pointer %p\n",0x30);
  printf("as octal %o\n",0x30);
  printf("as hex %x\n",0x30);
  printf("as unsigned %u\n",0xffffffff);
  printf("as signed %d\n",0xffffffff);
  return 0;
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


