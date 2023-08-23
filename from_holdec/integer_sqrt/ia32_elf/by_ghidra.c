typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef long double    longdouble;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined5;
typedef unsigned long long    undefined8;
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

typedef uint size_t;

typedef int __off_t;

typedef longlong __quad_t;

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef __quad_t __off64_t;

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

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;




int _init(EVP_PKEY_CTX *ctx)

{
  int iStack_c;
  
  __gmon_start__();
  frame_dummy();
  __do_global_ctors_aux();
  return iStack_c;
}



void FUN_0804831c(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void __assert_fail(char *__assertion,char *__file,uint __line,char *__function)

{
                    // WARNING: Subroutine does not return
  __assert_fail(__assertion,__file,__line,__function);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,__libc_csu_init,__libc_csu_fini,param_1,auStack_4)
  ;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x080483ca)
// WARNING: Removing unreachable block (ram,0x080483d0)

void __do_global_dtors_aux(void)

{
  if (completed_5978 == '\0') {
    completed_5978 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x08048418)

void frame_dummy(void)

{
  return;
}



undefined8 __regparm3 integer_sqrt_in_asm(undefined4 param_1,undefined4 param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  bool bVar10;
  
  uVar2 = (ushort)((uint)param_1 >> 0x10);
  uVar7 = -(ushort)(uVar2 < 0x4000);
  uVar1 = (ushort)(uVar2 < 0x4000 != 0);
  bVar10 = uVar1 != 0;
  uVar1 = -uVar1;
  uVar9 = uVar2 + 0xc000;
  if (bVar10) {
    uVar9 = (ushort)(0xbfff < (ushort)(uVar2 + 0xc000));
    bVar10 = CARRY2(uVar7,uVar9);
    uVar7 = uVar7 + uVar9;
    uVar9 = (ushort)bVar10;
    bVar10 = CARRY2(uVar1,uVar9);
    uVar1 = uVar1 + uVar9;
    uVar9 = uVar2;
  }
  uVar2 = (ushort)!bVar10;
  uVar6 = (ushort)param_1;
  uVar3 = uVar9 * 2 + (ushort)CARRY2(uVar6,uVar6);
  uVar9 = (ushort)(CARRY2(uVar9,uVar9) || CARRY2(uVar9 * 2,(ushort)CARRY2(uVar6,uVar6)));
  uVar8 = uVar7 * 2 + uVar9;
  uVar5 = (ushort)CARRY2(uVar6 * 2,uVar6 * 2);
  uVar4 = uVar3 * 2 + uVar5;
  uVar5 = (ushort)(CARRY2(uVar3,uVar3) || CARRY2(uVar3 * 2,uVar5));
  uVar3 = uVar8 * 2 + uVar5;
  uVar7 = (uVar1 * 2 + (ushort)(CARRY2(uVar7,uVar7) || CARRY2(uVar7 * 2,uVar9))) * 2 +
          (ushort)(CARRY2(uVar8,uVar8) || CARRY2(uVar8 * 2,uVar5));
  uVar1 = uVar3 - uVar2;
  uVar9 = uVar1 - (uVar4 < 0x4000);
  uVar1 = (ushort)(uVar3 < uVar2 || uVar1 < (uVar4 < 0x4000));
  bVar10 = uVar7 < uVar1;
  uVar7 = uVar7 - uVar1;
  uVar1 = uVar4 + 0xc000;
  if (bVar10) {
    uVar1 = (ushort)(0xbfff < (ushort)(uVar4 + 0xc000));
    bVar10 = CARRY2(uVar9,uVar2);
    uVar5 = uVar9 + uVar2;
    uVar9 = uVar5 + uVar1;
    uVar1 = (ushort)(bVar10 || CARRY2(uVar5,uVar1));
    bVar10 = CARRY2(uVar7,uVar1);
    uVar7 = uVar7 + uVar1;
    uVar1 = uVar4;
  }
  uVar8 = uVar2 * 2 + (ushort)!bVar10;
  uVar2 = (ushort)CARRY2(uVar6 * 4,uVar6 * 4);
  uVar5 = uVar1 * 2 + uVar2;
  uVar1 = (ushort)(CARRY2(uVar1,uVar1) || CARRY2(uVar1 * 2,uVar2));
  uVar4 = uVar9 * 2 + uVar1;
  uVar2 = (ushort)CARRY2(uVar6 << 3,uVar6 << 3);
  uVar3 = uVar5 * 2 + uVar2;
  uVar2 = (ushort)(CARRY2(uVar5,uVar5) || CARRY2(uVar5 * 2,uVar2));
  uVar5 = uVar4 * 2 + uVar2;
  uVar7 = (uVar7 * 2 + (ushort)(CARRY2(uVar9,uVar9) || CARRY2(uVar9 * 2,uVar1))) * 2 +
          (ushort)(CARRY2(uVar4,uVar4) || CARRY2(uVar4 * 2,uVar2));
  uVar1 = uVar5 - uVar8;
  uVar9 = uVar1 - (uVar3 < 0x4000);
  uVar1 = (ushort)(uVar5 < uVar8 || uVar1 < (uVar3 < 0x4000));
  bVar10 = uVar7 < uVar1;
  uVar7 = uVar7 - uVar1;
  uVar1 = uVar3 + 0xc000;
  if (bVar10) {
    uVar1 = (ushort)(0xbfff < (ushort)(uVar3 + 0xc000));
    bVar10 = CARRY2(uVar9,uVar8);
    uVar2 = uVar9 + uVar8;
    uVar9 = uVar2 + uVar1;
    uVar1 = (ushort)(bVar10 || CARRY2(uVar2,uVar1));
    bVar10 = CARRY2(uVar7,uVar1);
    uVar7 = uVar7 + uVar1;
    uVar1 = uVar3;
  }
  uVar8 = uVar8 * 2 + (ushort)!bVar10;
  uVar2 = (ushort)CARRY2(uVar6 << 4,uVar6 << 4);
  uVar5 = uVar1 * 2 + uVar2;
  uVar1 = (ushort)(CARRY2(uVar1,uVar1) || CARRY2(uVar1 * 2,uVar2));
  uVar4 = uVar9 * 2 + uVar1;
  uVar2 = (ushort)CARRY2(uVar6 << 5,uVar6 << 5);
  uVar3 = uVar5 * 2 + uVar2;
  uVar2 = (ushort)(CARRY2(uVar5,uVar5) || CARRY2(uVar5 * 2,uVar2));
  uVar5 = uVar4 * 2 + uVar2;
  uVar7 = (uVar7 * 2 + (ushort)(CARRY2(uVar9,uVar9) || CARRY2(uVar9 * 2,uVar1))) * 2 +
          (ushort)(CARRY2(uVar4,uVar4) || CARRY2(uVar4 * 2,uVar2));
  uVar1 = uVar5 - uVar8;
  uVar9 = uVar1 - (uVar3 < 0x4000);
  uVar1 = (ushort)(uVar5 < uVar8 || uVar1 < (uVar3 < 0x4000));
  bVar10 = uVar7 < uVar1;
  uVar7 = uVar7 - uVar1;
  uVar1 = uVar3 + 0xc000;
  if (bVar10) {
    uVar1 = (ushort)(0xbfff < (ushort)(uVar3 + 0xc000));
    bVar10 = CARRY2(uVar9,uVar8);
    uVar2 = uVar9 + uVar8;
    uVar9 = uVar2 + uVar1;
    uVar1 = (ushort)(bVar10 || CARRY2(uVar2,uVar1));
    bVar10 = CARRY2(uVar7,uVar1);
    uVar7 = uVar7 + uVar1;
    uVar1 = uVar3;
  }
  uVar8 = uVar8 * 2 + (ushort)!bVar10;
  uVar2 = (ushort)CARRY2(uVar6 << 6,uVar6 << 6);
  uVar5 = uVar1 * 2 + uVar2;
  uVar1 = (ushort)(CARRY2(uVar1,uVar1) || CARRY2(uVar1 * 2,uVar2));
  uVar4 = uVar9 * 2 + uVar1;
  uVar2 = (ushort)CARRY2(uVar6 << 7,uVar6 << 7);
  uVar3 = uVar5 * 2 + uVar2;
  uVar2 = (ushort)(CARRY2(uVar5,uVar5) || CARRY2(uVar5 * 2,uVar2));
  uVar5 = uVar4 * 2 + uVar2;
  uVar7 = (uVar7 * 2 + (ushort)(CARRY2(uVar9,uVar9) || CARRY2(uVar9 * 2,uVar1))) * 2 +
          (ushort)(CARRY2(uVar4,uVar4) || CARRY2(uVar4 * 2,uVar2));
  uVar1 = uVar5 - uVar8;
  uVar9 = uVar1 - (uVar3 < 0x4000);
  uVar1 = (ushort)(uVar5 < uVar8 || uVar1 < (uVar3 < 0x4000));
  bVar10 = uVar7 < uVar1;
  uVar7 = uVar7 - uVar1;
  uVar1 = uVar3 + 0xc000;
  if (bVar10) {
    uVar1 = (ushort)(0xbfff < (ushort)(uVar3 + 0xc000));
    bVar10 = CARRY2(uVar9,uVar8);
    uVar2 = uVar9 + uVar8;
    uVar9 = uVar2 + uVar1;
    uVar1 = (ushort)(bVar10 || CARRY2(uVar2,uVar1));
    bVar10 = CARRY2(uVar7,uVar1);
    uVar7 = uVar7 + uVar1;
    uVar1 = uVar3;
  }
  uVar8 = uVar8 * 2 + (ushort)!bVar10;
  uVar2 = (ushort)CARRY2(uVar6 << 8,uVar6 << 8);
  uVar5 = uVar1 * 2 + uVar2;
  uVar1 = (ushort)(CARRY2(uVar1,uVar1) || CARRY2(uVar1 * 2,uVar2));
  uVar4 = uVar9 * 2 + uVar1;
  uVar2 = (ushort)CARRY2(uVar6 << 9,uVar6 << 9);
  uVar3 = uVar5 * 2 + uVar2;
  uVar2 = (ushort)(CARRY2(uVar5,uVar5) || CARRY2(uVar5 * 2,uVar2));
  uVar5 = uVar4 * 2 + uVar2;
  uVar7 = (uVar7 * 2 + (ushort)(CARRY2(uVar9,uVar9) || CARRY2(uVar9 * 2,uVar1))) * 2 +
          (ushort)(CARRY2(uVar4,uVar4) || CARRY2(uVar4 * 2,uVar2));
  uVar1 = uVar5 - uVar8;
  uVar9 = uVar1 - (uVar3 < 0x4000);
  uVar1 = (ushort)(uVar5 < uVar8 || uVar1 < (uVar3 < 0x4000));
  bVar10 = uVar7 < uVar1;
  uVar7 = uVar7 - uVar1;
  uVar1 = uVar3 + 0xc000;
  if (bVar10) {
    uVar1 = (ushort)(0xbfff < (ushort)(uVar3 + 0xc000));
    bVar10 = CARRY2(uVar9,uVar8);
    uVar2 = uVar9 + uVar8;
    uVar9 = uVar2 + uVar1;
    uVar1 = (ushort)(bVar10 || CARRY2(uVar2,uVar1));
    bVar10 = CARRY2(uVar7,uVar1);
    uVar7 = uVar7 + uVar1;
    uVar1 = uVar3;
  }
  uVar8 = uVar8 * 2 + (ushort)!bVar10;
  uVar2 = (ushort)CARRY2(uVar6 << 10,uVar6 << 10);
  uVar5 = uVar1 * 2 + uVar2;
  uVar1 = (ushort)(CARRY2(uVar1,uVar1) || CARRY2(uVar1 * 2,uVar2));
  uVar4 = uVar9 * 2 + uVar1;
  uVar2 = (ushort)CARRY2(uVar6 << 0xb,uVar6 << 0xb);
  uVar3 = uVar5 * 2 + uVar2;
  uVar2 = (ushort)(CARRY2(uVar5,uVar5) || CARRY2(uVar5 * 2,uVar2));
  uVar5 = uVar4 * 2 + uVar2;
  uVar7 = (uVar7 * 2 + (ushort)(CARRY2(uVar9,uVar9) || CARRY2(uVar9 * 2,uVar1))) * 2 +
          (ushort)(CARRY2(uVar4,uVar4) || CARRY2(uVar4 * 2,uVar2));
  uVar1 = uVar5 - uVar8;
  uVar9 = uVar1 - (uVar3 < 0x4000);
  uVar1 = (ushort)(uVar5 < uVar8 || uVar1 < (uVar3 < 0x4000));
  bVar10 = uVar7 < uVar1;
  uVar7 = uVar7 - uVar1;
  uVar1 = uVar3 + 0xc000;
  if (bVar10) {
    uVar1 = (ushort)(0xbfff < (ushort)(uVar3 + 0xc000));
    bVar10 = CARRY2(uVar9,uVar8);
    uVar2 = uVar9 + uVar8;
    uVar9 = uVar2 + uVar1;
    uVar1 = (ushort)(bVar10 || CARRY2(uVar2,uVar1));
    bVar10 = CARRY2(uVar7,uVar1);
    uVar7 = uVar7 + uVar1;
    uVar1 = uVar3;
  }
  uVar8 = uVar8 * 2 + (ushort)!bVar10;
  uVar2 = (ushort)CARRY2(uVar6 << 0xc,uVar6 << 0xc);
  uVar5 = uVar1 * 2 + uVar2;
  uVar1 = (ushort)(CARRY2(uVar1,uVar1) || CARRY2(uVar1 * 2,uVar2));
  uVar4 = uVar9 * 2 + uVar1;
  uVar2 = (ushort)CARRY2(uVar6 << 0xd,uVar6 << 0xd);
  uVar3 = uVar5 * 2 + uVar2;
  uVar2 = (ushort)(CARRY2(uVar5,uVar5) || CARRY2(uVar5 * 2,uVar2));
  uVar5 = uVar4 * 2 + uVar2;
  uVar7 = (uVar7 * 2 + (ushort)(CARRY2(uVar9,uVar9) || CARRY2(uVar9 * 2,uVar1))) * 2 +
          (ushort)(CARRY2(uVar4,uVar4) || CARRY2(uVar4 * 2,uVar2));
  uVar1 = uVar5 - uVar8;
  uVar9 = uVar1 - (uVar3 < 0x4000);
  uVar1 = (ushort)(uVar5 < uVar8 || uVar1 < (uVar3 < 0x4000));
  bVar10 = uVar7 < uVar1;
  uVar7 = uVar7 - uVar1;
  uVar1 = uVar3 + 0xc000;
  if (bVar10) {
    uVar1 = (ushort)(0xbfff < (ushort)(uVar3 + 0xc000));
    bVar10 = CARRY2(uVar9,uVar8);
    uVar2 = uVar9 + uVar8;
    uVar9 = uVar2 + uVar1;
    uVar1 = (ushort)(bVar10 || CARRY2(uVar2,uVar1));
    bVar10 = CARRY2(uVar7,uVar1);
    uVar7 = uVar7 + uVar1;
    uVar1 = uVar3;
  }
  uVar4 = uVar8 * 2 + (ushort)!bVar10;
  uVar2 = (ushort)CARRY2(uVar6 << 0xe,uVar6 << 0xe);
  uVar5 = uVar1 * 2 + uVar2;
  uVar1 = (ushort)(CARRY2(uVar1,uVar1) || CARRY2(uVar1 * 2,uVar2));
  uVar3 = uVar9 * 2 + uVar1;
  uVar2 = (ushort)CARRY2(uVar6 << 0xf,uVar6 << 0xf);
  uVar6 = uVar5 * 2 + uVar2;
  uVar2 = (ushort)(CARRY2(uVar5,uVar5) || CARRY2(uVar5 * 2,uVar2));
  uVar5 = uVar3 * 2 + uVar2;
  uVar7 = (uVar7 * 2 + (ushort)(CARRY2(uVar9,uVar9) || CARRY2(uVar9 * 2,uVar1))) * 2 +
          (ushort)(CARRY2(uVar3,uVar3) || CARRY2(uVar3 * 2,uVar2));
  uVar1 = uVar5 - uVar4;
  uVar9 = uVar1 - (uVar6 < 0x4000);
  uVar1 = (ushort)(uVar5 < uVar4 || uVar1 < (uVar6 < 0x4000));
  bVar10 = uVar7 < uVar1;
  uVar7 = uVar7 - uVar1;
  uVar1 = uVar6 + 0xc000;
  if (bVar10) {
    uVar1 = (ushort)(0xbfff < (ushort)(uVar6 + 0xc000));
    bVar10 = CARRY2(uVar9,uVar4);
    uVar2 = uVar9 + uVar4;
    uVar9 = uVar2 + uVar1;
    uVar1 = (ushort)(bVar10 || CARRY2(uVar2,uVar1));
    bVar10 = CARRY2(uVar7,uVar1);
    uVar7 = uVar7 + uVar1;
    uVar1 = uVar6;
  }
  uVar4 = uVar4 * 2 + (ushort)!bVar10;
  uVar6 = uVar9 * 2 + (ushort)CARRY2(uVar1,uVar1);
  uVar5 = uVar1 * 4;
  uVar2 = (ushort)CARRY2(uVar1 * 2,uVar1 * 2);
  uVar3 = uVar6 * 2 + uVar2;
  uVar7 = (uVar7 * 2 +
          (ushort)(CARRY2(uVar9,uVar9) || CARRY2(uVar9 * 2,(ushort)CARRY2(uVar1,uVar1)))) * 2 +
          (ushort)(CARRY2(uVar6,uVar6) || CARRY2(uVar6 * 2,uVar2));
  uVar1 = uVar3 - uVar4;
  uVar9 = uVar1 - (uVar5 < 0x4000);
  uVar1 = (ushort)(uVar3 < uVar4 || uVar1 < (uVar5 < 0x4000));
  bVar10 = uVar7 < uVar1;
  uVar7 = uVar7 - uVar1;
  uVar1 = uVar5 + 0xc000;
  if (bVar10) {
    uVar1 = (ushort)(0xbfff < (ushort)(uVar5 + 0xc000));
    bVar10 = CARRY2(uVar9,uVar4);
    uVar2 = uVar9 + uVar4;
    uVar9 = uVar2 + uVar1;
    uVar1 = (ushort)(bVar10 || CARRY2(uVar2,uVar1));
    bVar10 = CARRY2(uVar7,uVar1);
    uVar7 = uVar7 + uVar1;
    uVar1 = uVar5;
  }
  uVar4 = uVar4 * 2 + (ushort)!bVar10;
  uVar6 = uVar9 * 2 + (ushort)CARRY2(uVar1,uVar1);
  uVar5 = uVar1 * 4;
  uVar2 = (ushort)CARRY2(uVar1 * 2,uVar1 * 2);
  uVar3 = uVar6 * 2 + uVar2;
  uVar7 = (uVar7 * 2 +
          (ushort)(CARRY2(uVar9,uVar9) || CARRY2(uVar9 * 2,(ushort)CARRY2(uVar1,uVar1)))) * 2 +
          (ushort)(CARRY2(uVar6,uVar6) || CARRY2(uVar6 * 2,uVar2));
  uVar1 = uVar3 - uVar4;
  uVar9 = uVar1 - (uVar5 < 0x4000);
  uVar1 = (ushort)(uVar3 < uVar4 || uVar1 < (uVar5 < 0x4000));
  bVar10 = uVar7 < uVar1;
  uVar7 = uVar7 - uVar1;
  uVar1 = uVar5 + 0xc000;
  if (bVar10) {
    uVar1 = (ushort)(0xbfff < (ushort)(uVar5 + 0xc000));
    bVar10 = CARRY2(uVar9,uVar4);
    uVar2 = uVar9 + uVar4;
    uVar9 = uVar2 + uVar1;
    uVar1 = (ushort)(bVar10 || CARRY2(uVar2,uVar1));
    bVar10 = CARRY2(uVar7,uVar1);
    uVar7 = uVar7 + uVar1;
    uVar1 = uVar5;
  }
  uVar4 = uVar4 * 2 + (ushort)!bVar10;
  uVar6 = uVar9 * 2 + (ushort)CARRY2(uVar1,uVar1);
  uVar5 = uVar1 * 4;
  uVar2 = (ushort)CARRY2(uVar1 * 2,uVar1 * 2);
  uVar3 = uVar6 * 2 + uVar2;
  uVar7 = (uVar7 * 2 +
          (ushort)(CARRY2(uVar9,uVar9) || CARRY2(uVar9 * 2,(ushort)CARRY2(uVar1,uVar1)))) * 2 +
          (ushort)(CARRY2(uVar6,uVar6) || CARRY2(uVar6 * 2,uVar2));
  uVar1 = uVar3 - uVar4;
  uVar9 = uVar1 - (uVar5 < 0x4000);
  uVar1 = (ushort)(uVar3 < uVar4 || uVar1 < (uVar5 < 0x4000));
  bVar10 = uVar7 < uVar1;
  uVar7 = uVar7 - uVar1;
  uVar1 = uVar5 + 0xc000;
  if (bVar10) {
    uVar1 = (ushort)(0xbfff < (ushort)(uVar5 + 0xc000));
    bVar10 = CARRY2(uVar9,uVar4);
    uVar2 = uVar9 + uVar4;
    uVar9 = uVar2 + uVar1;
    uVar1 = (ushort)(bVar10 || CARRY2(uVar2,uVar1));
    bVar10 = CARRY2(uVar7,uVar1);
    uVar7 = uVar7 + uVar1;
    uVar1 = uVar5;
  }
  uVar4 = uVar4 * 2 + (ushort)!bVar10;
  uVar6 = uVar9 * 2 + (ushort)CARRY2(uVar1,uVar1);
  uVar5 = uVar1 * 4;
  uVar2 = (ushort)CARRY2(uVar1 * 2,uVar1 * 2);
  uVar3 = uVar6 * 2 + uVar2;
  uVar7 = (uVar7 * 2 +
          (ushort)(CARRY2(uVar9,uVar9) || CARRY2(uVar9 * 2,(ushort)CARRY2(uVar1,uVar1)))) * 2 +
          (ushort)(CARRY2(uVar6,uVar6) || CARRY2(uVar6 * 2,uVar2));
  uVar1 = uVar3 - uVar4;
  uVar9 = uVar1 - (uVar5 < 0x4000);
  uVar1 = (ushort)(uVar3 < uVar4 || uVar1 < (uVar5 < 0x4000));
  bVar10 = uVar7 < uVar1;
  uVar7 = uVar7 - uVar1;
  uVar1 = uVar5 + 0xc000;
  if (bVar10) {
    uVar1 = (ushort)(0xbfff < (ushort)(uVar5 + 0xc000));
    bVar10 = CARRY2(uVar9,uVar4);
    uVar2 = uVar9 + uVar4;
    uVar9 = uVar2 + uVar1;
    uVar1 = (ushort)(bVar10 || CARRY2(uVar2,uVar1));
    bVar10 = CARRY2(uVar7,uVar1);
    uVar7 = uVar7 + uVar1;
    uVar1 = uVar5;
  }
  uVar4 = uVar4 * 2 + (ushort)!bVar10;
  uVar6 = uVar9 * 2 + (ushort)CARRY2(uVar1,uVar1);
  uVar5 = uVar1 * 4;
  uVar2 = (ushort)CARRY2(uVar1 * 2,uVar1 * 2);
  uVar3 = uVar6 * 2 + uVar2;
  uVar7 = (uVar7 * 2 +
          (ushort)(CARRY2(uVar9,uVar9) || CARRY2(uVar9 * 2,(ushort)CARRY2(uVar1,uVar1)))) * 2 +
          (ushort)(CARRY2(uVar6,uVar6) || CARRY2(uVar6 * 2,uVar2));
  uVar1 = uVar3 - uVar4;
  uVar9 = uVar1 - (uVar5 < 0x4000);
  uVar1 = (ushort)(uVar3 < uVar4 || uVar1 < (uVar5 < 0x4000));
  bVar10 = uVar7 < uVar1;
  uVar7 = uVar7 - uVar1;
  uVar1 = uVar5 + 0xc000;
  if (bVar10) {
    uVar1 = (ushort)(0xbfff < (ushort)(uVar5 + 0xc000));
    bVar10 = CARRY2(uVar9,uVar4);
    uVar2 = uVar9 + uVar4;
    uVar9 = uVar2 + uVar1;
    uVar1 = (ushort)(bVar10 || CARRY2(uVar2,uVar1));
    bVar10 = CARRY2(uVar7,uVar1);
    uVar7 = uVar7 + uVar1;
    uVar1 = uVar5;
  }
  uVar4 = uVar4 * 2 + (ushort)!bVar10;
  uVar6 = uVar9 * 2 + (ushort)CARRY2(uVar1,uVar1);
  uVar5 = uVar1 * 4;
  uVar2 = (ushort)CARRY2(uVar1 * 2,uVar1 * 2);
  uVar3 = uVar6 * 2 + uVar2;
  uVar7 = (uVar7 * 2 +
          (ushort)(CARRY2(uVar9,uVar9) || CARRY2(uVar9 * 2,(ushort)CARRY2(uVar1,uVar1)))) * 2 +
          (ushort)(CARRY2(uVar6,uVar6) || CARRY2(uVar6 * 2,uVar2));
  uVar1 = uVar3 - uVar4;
  uVar9 = uVar1 - (uVar5 < 0x4000);
  uVar1 = (ushort)(uVar3 < uVar4 || uVar1 < (uVar5 < 0x4000));
  bVar10 = uVar7 < uVar1;
  uVar7 = uVar7 - uVar1;
  uVar1 = uVar5 + 0xc000;
  if (bVar10) {
    uVar1 = (ushort)(0xbfff < (ushort)(uVar5 + 0xc000));
    bVar10 = CARRY2(uVar9,uVar4);
    uVar2 = uVar9 + uVar4;
    uVar9 = uVar2 + uVar1;
    uVar1 = (ushort)(bVar10 || CARRY2(uVar2,uVar1));
    bVar10 = CARRY2(uVar7,uVar1);
    uVar7 = uVar7 + uVar1;
    uVar1 = uVar5;
  }
  uVar3 = uVar4 * 2 + (ushort)!bVar10;
  uVar5 = uVar9 * 2 + (ushort)CARRY2(uVar1,uVar1);
  uVar2 = (ushort)CARRY2(uVar1 * 2,uVar1 * 2);
  uVar6 = uVar5 * 2 + uVar2;
  uVar2 = (uVar7 * 2 +
          (ushort)(CARRY2(uVar9,uVar9) || CARRY2(uVar9 * 2,(ushort)CARRY2(uVar1,uVar1)))) * 2 +
          (ushort)(CARRY2(uVar5,uVar5) || CARRY2(uVar5 * 2,uVar2));
  uVar7 = (ushort)((ushort)(uVar1 * 4) < 0x4000);
  uVar9 = uVar6 - uVar3;
  uVar5 = uVar9 - uVar7;
  uVar7 = (ushort)(uVar6 < uVar3 || uVar9 < uVar7);
  bVar10 = uVar2 < uVar7;
  if (bVar10) {
    bVar10 = CARRY2(uVar2 - uVar7,
                    (ushort)(CARRY2(uVar5,uVar3) ||
                            CARRY2(uVar5 + uVar3,(ushort)(0xbfff < (ushort)(uVar1 * 4 + 0xc000)))));
  }
  return CONCAT44(param_2,(uint)(ushort)(uVar3 * 2 + (ushort)!bVar10));
}



// WARNING: Unknown calling convention

uint integer_sqrt_in_c(uint n)

{
  ushort uVar1;
  ushort uVar2;
  ushort ax;
  ushort dx;
  ushort uVar3;
  ushort uVar5;
  ushort uVar6;
  bool bVar7;
  ushort tmp;
  ushort local_1a;
  int local_18;
  ushort local_14;
  ushort local_12;
  uint uVar4;
  
  uVar1 = 0;
  local_18 = 0;
  local_12 = 0;
  local_14 = 0;
  uVar4 = n >> 0x10;
  while( true ) {
    uVar6 = (ushort)uVar4;
    uVar3 = (uVar6 < 0x4000) + uVar1;
    uVar2 = local_12 - (local_14 < uVar3);
    local_1a = local_14 - uVar3;
    if (local_12 < (local_14 < uVar3)) {
      bVar7 = CARRY2(local_1a,uVar3);
      local_1a = local_1a + uVar3;
      uVar3 = (ushort)CARRY2(uVar2,(ushort)bVar7);
      local_14 = uVar2 + bVar7;
    }
    else {
      uVar6 = uVar6 + 0xc000;
      uVar3 = 0;
      local_14 = uVar2;
    }
    local_18 = local_18 + 1;
    uVar1 = (uVar1 * 2 + 1) - uVar3;
    if (local_18 == 0x10) break;
    uVar2 = (ushort)n * 2;
    uVar5 = uVar6 + (uVar2 < (ushort)n);
    uVar3 = uVar6 + uVar5;
    uVar6 = CARRY2(uVar6,uVar5) + local_1a;
    n = n << 2;
    local_1a = local_1a + uVar6;
    uVar2 = ((ushort)n < uVar2) + uVar3;
    uVar4 = (uint)(ushort)(uVar3 + uVar2);
    uVar2 = CARRY2(uVar3,uVar2) + local_1a;
    local_12 = (ushort)CARRY2(local_1a,uVar2) + ((ushort)(local_1a < uVar6) + local_14 * 2) * 2;
    local_14 = local_1a + uVar2;
  }
  return (uint)uVar1;
}



// WARNING: Unknown calling convention

uint integer_sqrt_in_c_cleaned_up(uint n)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  ulonglong cmp;
  
  uVar2 = 0;
  uVar1 = 0;
  iVar4 = 0;
  while( true ) {
    uVar3 = uVar1 & 0xffff;
    uVar1 = uVar1 * 2;
    if ((uVar3 <= uVar2) && ((uVar3 < uVar2 || (0x3fffffff < (n & 0xffff0000))))) {
      uVar1 = uVar1 + 1;
      bVar5 = n < 0x40000000;
      n = n + 0xc0000000;
      uVar2 = (uVar2 - uVar3) - (uint)bVar5;
    }
    iVar4 = iVar4 + 1;
    if (iVar4 == 0x10) break;
    uVar2 = uVar2 << 2 | n >> 0x1e;
    n = n << 2;
  }
  return uVar1 & 0xffff;
}



// WARNING: Unknown calling convention

int main(void)

{
  uint uVar1;
  int y;
  uint uVar2;
  int c1;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int c2;
  uint uVar6;
  bool bVar7;
  int check;
  int local_54;
  int local_50;
  uint local_44;
  
  local_50 = 1000;
  local_44 = 0;
  while( true ) {
    uVar1 = integer_sqrt_in_asm();
    uVar2 = integer_sqrt_in_c(local_44);
    uVar5 = 0;
    uVar4 = 0;
    local_54 = 0;
    uVar3 = local_44;
    while( true ) {
      uVar6 = uVar4 & 0xffff;
      uVar4 = uVar4 * 2;
      if ((uVar6 <= uVar5) && ((uVar6 < uVar5 || (0x3fffffff < (uVar3 & 0xffff0000))))) {
        uVar4 = uVar4 + 1;
        bVar7 = uVar3 < 0x40000000;
        uVar3 = uVar3 + 0xc0000000;
        uVar5 = (uVar5 - uVar6) - (uint)bVar7;
      }
      local_54 = local_54 + 1;
      if (local_54 == 0x10) break;
      uVar5 = uVar5 << 2 | uVar3 >> 0x1e;
      uVar3 = uVar3 << 2;
    }
    printf("f(%3u) = %d | c1=%d | c2=%d | using-float=%d\n",local_44,uVar1,uVar2,uVar4 & 0xffff,
           (int)ROUND(SQRT((longdouble)(ulonglong)local_44)));
    if ((int)ROUND(SQRT((longdouble)(ulonglong)local_44)) != uVar1) {
                    // WARNING: Subroutine does not return
      __assert_fail("check == y","source/main.c",0x4f,"main");
    }
    if (uVar2 != uVar1) {
                    // WARNING: Subroutine does not return
      __assert_fail("check == c1","source/main.c",0x50,"main");
    }
    if (uVar2 != (uVar4 & 0xffff)) break;
    local_44 = local_44 + 1;
    local_50 = local_50 + -1;
    if (local_50 == 0) {
      return 0;
    }
  }
                    // WARNING: Subroutine does not return
  __assert_fail("check == c2","source/main.c",0x51,"main");
}



void __libc_csu_fini(void)

{
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx
// WARNING: Removing unreachable block (ram,0x08048b7e)
// WARNING: Removing unreachable block (ram,0x08048b80)

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


