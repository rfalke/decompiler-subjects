typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
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
    char _unused2[15];
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

typedef long __time_t;

typedef __time_t time_t;

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

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

typedef struct Elf64_Dyn Elf64_Dyn, *PElf64_Dyn;

struct Elf64_Dyn {
    enum Elf64_DynTag d_tag;
    qword d_val;
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

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};




void _DT_INIT(void)

{
  if (DAT_00600ff8 != 0) {
    thunk_FUN_004007b6();
  }
  return;
}



void FUN_00400700(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



void thunk_FUN_00400716(void)

{
  FUN_00400700();
  return;
}



void FUN_00400716(void)

{
  FUN_00400700();
  return;
}



void thunk_FUN_00400726(void)

{
  FUN_00400700();
  return;
}



void FUN_00400726(void)

{
  FUN_00400700();
  return;
}



void thunk_FUN_00400736(void)

{
  FUN_00400700();
  return;
}



void FUN_00400736(void)

{
  FUN_00400700();
  return;
}



void thunk_FUN_00400746(void)

{
  FUN_00400700();
  return;
}



void FUN_00400746(void)

{
  FUN_00400700();
  return;
}



void thunk_FUN_00400756(void)

{
  FUN_00400700();
  return;
}



void FUN_00400756(void)

{
  FUN_00400700();
  return;
}



void thunk_FUN_00400766(void)

{
  FUN_00400700();
  return;
}



void FUN_00400766(void)

{
  FUN_00400700();
  return;
}



void thunk_FUN_00400776(void)

{
  FUN_00400700();
  return;
}



void FUN_00400776(void)

{
  FUN_00400700();
  return;
}



void thunk_FUN_00400786(void)

{
  FUN_00400700();
  return;
}



void FUN_00400786(void)

{
  FUN_00400700();
  return;
}



void thunk_FUN_004007a6(void)

{
  FUN_00400700();
  return;
}



void FUN_004007a6(void)

{
  FUN_00400700();
  return;
}



void thunk_FUN_004007b6(void)

{
  FUN_00400700();
  return;
}



void FUN_004007b6(void)

{
  FUN_00400700();
  return;
}



void thunk_FUN_004007c6(void)

{
  FUN_00400700();
  return;
}



void FUN_004007c6(void)

{
  FUN_00400700();
  return;
}



void thunk_FUN_004007d6(void)

{
  FUN_00400700();
  return;
}



void FUN_004007d6(void)

{
  FUN_00400700();
  return;
}



void thunk_FUN_004007e6(void)

{
  FUN_00400700();
  return;
}



void FUN_004007e6(void)

{
  FUN_00400700();
  return;
}



void thunk_FUN_004007f6(void)

{
  FUN_00400700();
  return;
}



void FUN_004007f6(void)

{
  FUN_00400700();
  return;
}



void _DT_FINI(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00400847)
// WARNING: Removing unreachable block (ram,0x00400851)

void FUN__text__00400830(void)

{
  return;
}



void FUN__text__004008a0(void)

{
  if (DAT_006010a8 == '\0') {
    FUN__text__00400830();
    DAT_006010a8 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00400884)
// WARNING: Removing unreachable block (ram,0x004008d4)
// WARNING: Removing unreachable block (ram,0x0040088e)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN__text__004008c0(void)

{
  return;
}



undefined8 FUN__text__004008ed(void)

{
  uint uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)thunk_FUN_004007d6(0xdead);
  *puVar2 = 0x45206e61206d2749;
  *(undefined4 *)(puVar2 + 1) = 0x3a20464c;
  *(undefined2 *)((long)puVar2 + 0xc) = 0x292d;
  *(undefined *)((long)puVar2 + 0xe) = 0;
  thunk_FUN_00400756(&DAT__text__00400bb8,puVar2);
  thunk_FUN_00400726(&DAT__text__00400bbb);
  uVar1 = thunk_FUN_004007c6(0);
  thunk_FUN_004007a6((ulong)uVar1);
  uVar1 = thunk_FUN_004007f6();
  if ((uVar1 & 1) != 0) {
    thunk_FUN_00400726("And I\'m happy. I live free ! :-)");
    thunk_FUN_004007e6(0);
  }
  FUN__text__00400996();
  thunk_FUN_00400786(10,stdout);
  return 0;
}



void FUN__text__00400996(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined8 uStack176;
  undefined auStack168 [8];
  undefined *local_a0;
  long local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  
  local_a0 = auStack168;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 0x202c657361656c50;
  local_60 = 0x7420746f6e206f64;
  local_58 = 0x7420656d20656b61;
  local_50 = 0x726f6b6c654d206f;
  local_48 = 0xa2120;
  local_88 = 0x6f63206c6c276548;
  local_80 = 0x656d207470757272;
  local_78 = 0xa2120;
  uStack176 = 0x400a2e;
  lVar2 = thunk_FUN_00400736(&local_68);
  uStack176 = 0x400a3d;
  lVar3 = thunk_FUN_00400736(&local_88);
  lVar3 = lVar3 + lVar2;
  local_98 = lVar3;
  uVar4 = (lVar3 + 0x10U) / 0x10;
  local_90 = auStack168 + uVar4 * -0x10;
  (&uStack176)[uVar4 * 0x1ffffffffffffffe] = 0x400aac;
  thunk_FUN_00400716(auStack168 + uVar4 * -0x10,&local_68,lVar3,&local_68);
  puVar1 = local_90;
  (&uStack176)[uVar4 * 0x1ffffffffffffffe] = 0x400ac6;
  thunk_FUN_00400776(puVar1,&local_88,lVar3,&local_88);
  puVar1 = local_90;
  (&uStack176)[uVar4 * 0x1ffffffffffffffe] = 0x400adf;
  thunk_FUN_00400766(puVar1,stdout,stdout);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
    *(undefined8 *)(local_a0 + -8) = 0x400afa;
    thunk_FUN_00400746();
  }
  return;
}



void FUN__text__00400b10(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0;
  _DT_INIT();
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1 & 0xffffffff,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}


