typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    word;
typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct NoteGnuPropertyElement_4 NoteGnuPropertyElement_4, *PNoteGnuPropertyElement_4;

struct NoteGnuPropertyElement_4 {
    dword prType;
    dword prDatasz;
    byte data[4];
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
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

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
};

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

typedef struct NoteGnuProperty_4 NoteGnuProperty_4, *PNoteGnuProperty_4;

struct NoteGnuProperty_4 {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
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

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void exit(int __status)

{
                    // WARNING: Subroutine does not return
  exit(__status);
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



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void processEntry _start(int __status)

{
  __libc_start_main(main);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: This is an inlined function

void __i686_get_pc_thunk_bx(void)

{
  return;
}



void _dl_relocate_static_pie(void)

{
  return;
}



// WARNING: This is an inlined function

void __x86_get_pc_thunk_bx(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x080490fc)
// WARNING: Removing unreachable block (ram,0x08049105)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x08049148)
// WARNING: Removing unreachable block (ram,0x08049151)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    deregister_tm_clones();
    completed_0 = 1;
    return;
  }
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



// WARNING: Removing unreachable block (ram,0x0804dcac)
// WARNING: Removing unreachable block (ram,0x0804dc0a)
// WARNING: Removing unreachable block (ram,0x0804d9a4)
// WARNING: Removing unreachable block (ram,0x0804d957)
// WARNING: Removing unreachable block (ram,0x0804d761)
// WARNING: Removing unreachable block (ram,0x0804d24b)
// WARNING: Removing unreachable block (ram,0x0804d112)
// WARNING: Removing unreachable block (ram,0x0804d0c9)
// WARNING: Removing unreachable block (ram,0x0804c45f)
// WARNING: Removing unreachable block (ram,0x0804b751)
// WARNING: Removing unreachable block (ram,0x0804b6ed)
// WARNING: Removing unreachable block (ram,0x0804b689)
// WARNING: Removing unreachable block (ram,0x0804b424)
// WARNING: Removing unreachable block (ram,0x0804b3c0)
// WARNING: Removing unreachable block (ram,0x0804b35c)
// WARNING: Removing unreachable block (ram,0x0804b2f8)
// WARNING: Removing unreachable block (ram,0x0804a052)
// WARNING: Removing unreachable block (ram,0x0804b7b5)
// WARNING: Removing unreachable block (ram,0x0804c03b)
// WARNING: Removing unreachable block (ram,0x0804c3fb)
// WARNING: Removing unreachable block (ram,0x0804c49d)
// WARNING: Removing unreachable block (ram,0x0804d4da)
// WARNING: Removing unreachable block (ram,0x0804d7ae)
// WARNING: Removing unreachable block (ram,0x0804dc6e)
// WARNING: Removing unreachable block (ram,0x0804e263)
// WARNING: Removing unreachable block (ram,0x0804dea2)
// WARNING: Removing unreachable block (ram,0x0804de39)
// WARNING: Removing unreachable block (ram,0x0804dde2)
// WARNING: Removing unreachable block (ram,0x0804bda1)
// WARNING: Removing unreachable block (ram,0x0804bd27)
// WARNING: Removing unreachable block (ram,0x0804bcb6)
// WARNING: Removing unreachable block (ram,0x0804def9)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void main(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 local_68;
  undefined4 uStack_64;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint uStack_44;
  
  puts("*** It\'s test for new mathlib *** !!!\n");
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_0805203a,&DAT_08052037,0,0,0,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_0805203a,&DAT_08052037,0x54442d18,
         0x400921fb,0x54442d18,0x400921fb);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_0805203a,&DAT_08052037,0x382d7366,
         0x4000c152,0x382d7365,0x4000c152);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","acosh",&DAT_08052037,0,0,0,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","acosh",&DAT_08052037,0x71980435,
         0x40051242,0x71980435,0x40051242);
  dVar9 = acosh(INFINITY);
  dVar10 = acosh(INFINITY);
  if ((dVar10 <= 1.797693134862316e+308) || (dVar10 = acosh(INFINITY), INFINITY < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_64 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_68 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","acosh",puVar1,local_68,uStack_64,0,
         0x7ff00000);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052079,&DAT_08052037,0,0,0,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052079,&DAT_08052037,0x54442d18,
         0x3ff921fb,0x54442d18,0x3ff921fb);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052079,&DAT_08052037,0x382d7366,
         0x3fe0c152,0x382d7365,0x3fe0c152);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","asinh",&DAT_08052037,0,0,0,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","asinh",&DAT_08052037,0xfe9085dd,
         0x3fe4e2a4,0xfe9085dd,0x3fe4e2a4);
  dVar9 = asinh(INFINITY);
  dVar10 = asinh(INFINITY);
  if ((dVar10 <= 1.797693134862316e+308) || (dVar10 = asinh(INFINITY), INFINITY < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_64 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_68 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","asinh",puVar1,local_68,uStack_64,0,
         0x7ff00000);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052084,&DAT_08052037,0,0,0,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052084,&DAT_08052037,0x54442d18,
         0x3fe921fb,0x54442d18,0x3fe921fb);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052084,&DAT_08052037,0x2d7bd4ad,
         0x3fe38b11,0x2d7bd4ad,0x3fe38b11);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","atan2",&DAT_08052037,0,0x80000000,0,
         0x80000000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","atan2",&DAT_08052037,0xe5b649af,
         0x3ff91ee8,0xe5b649af,0x3ff91ee8);
  dVar9 = atan2(3.0,INFINITY);
  dVar10 = atan2(3.0,INFINITY);
  if ((dVar10 < -1e-09) || (dVar10 = atan2(3.0,INFINITY), 1e-09 < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_64 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_68 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","atan2",puVar1,local_68,uStack_64,0,0);
  dVar9 = atan2(-3.0,INFINITY);
  dVar10 = atan2(-3.0,INFINITY);
  if ((dVar10 < -1e-09) || (dVar10 = atan2(-3.0,INFINITY), 1e-09 < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_64 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_68 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","atan2",puVar1,local_68,uStack_64,0,
         0x80000000);
  dVar9 = atan2(3.0,-INFINITY);
  dVar10 = atan2(3.0,-INFINITY);
  if ((dVar10 < 3.141592652589793) || (dVar10 = atan2(3.0,-INFINITY), 3.141592654589793 < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_64 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_68 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","atan2",puVar1,local_68,uStack_64,
         0x54442d18,0x400921fb);
  dVar9 = atan2(-3.0,-INFINITY);
  dVar10 = atan2(-3.0,-INFINITY);
  if ((dVar10 < -3.141592654589793) || (dVar10 = atan2(-3.0,-INFINITY), -3.141592652589793 < dVar10)
     ) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_64 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_68 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","atan2",puVar1,local_68,uStack_64,
         0x54442d18,0xc00921fb);
  dVar9 = atan2(INFINITY,2.0);
  dVar10 = atan2(INFINITY,2.0);
  if ((dVar10 < 1.570796325794896) || (dVar10 = atan2(INFINITY,2.0), 1.570796327794897 < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_64 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_68 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","atan2",puVar1,local_68,uStack_64,
         0x54442d18,0x3ff921fb);
  dVar9 = atan2(-INFINITY,-3.0);
  dVar10 = atan2(-INFINITY,-3.0);
  if ((dVar10 < -1.570796327794897) || (dVar10 = atan2(-INFINITY,-3.0), -1.570796325794896 < dVar10)
     ) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_64 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_68 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","atan2",puVar1,local_68,uStack_64,
         0x54442d18,0xbff921fb);
  dVar9 = atan2(INFINITY,INFINITY);
  dVar10 = atan2(INFINITY,INFINITY);
  if ((dVar10 < 0.7853981623974483) ||
     (dVar10 = atan2(INFINITY,INFINITY), 0.7853981643974483 < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_64 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_68 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","atan2",puVar1,local_68,uStack_64,
         0x54442d18,0x3fe921fb);
  dVar9 = atan2(-INFINITY,INFINITY);
  dVar10 = atan2(-INFINITY,INFINITY);
  if ((dVar10 < -0.7853981643974483) ||
     (dVar10 = atan2(-INFINITY,INFINITY), -0.7853981623974483 < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_64 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_68 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","atan2",puVar1,local_68,uStack_64,
         0x54442d18,0xbfe921fb);
  dVar9 = atan2(INFINITY,-INFINITY);
  dVar10 = atan2(INFINITY,-INFINITY);
  if ((dVar10 < 2.356194489192345) ||
     (dVar10 = atan2(INFINITY,-INFINITY), 2.356194491192345 < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_64 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_68 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","atan2",puVar1,local_68,uStack_64,
         0x7f3321d2,0x4002d97c);
  dVar9 = atan2(-INFINITY,-INFINITY);
  dVar10 = atan2(-INFINITY,-INFINITY);
  if ((dVar10 < -2.356194491192345) ||
     (dVar10 = atan2(-INFINITY,-INFINITY), -2.356194489192345 < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_64 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_68 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","atan2",puVar1,local_68,uStack_64,
         0x7f3321d2,0xc002d97c);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","atanh",&DAT_08052037,0,0,0,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","atanh",&DAT_08052037,0x947fbe8,0x3febc0ed
         ,0x947fbe9,0x3febc0ed);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052095,&DAT_08052037,0,0x80000000,0
         ,0x80000000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052095,&DAT_08052037,0x9999999a,
         0xbfb99999,0x9999999a,0xbfb99999);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052095,&DAT_08052037,0,0x40080000,0
         ,0x40080000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052095,&DAT_08052037,0xa72f1a99,
         0x3fec69b5,0xa72f1a9a,0x3fec69b5);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052095,&DAT_08052037,0,0xc0000000,0
         ,0xc0000000);
  dVar9 = cbrt(INFINITY);
  dVar10 = cbrt(INFINITY);
  if ((dVar10 <= 1.797693134862316e+308) || (dVar10 = cbrt(INFINITY), INFINITY < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_64 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_68 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052095,puVar1,local_68,uStack_64,0,
         0x7ff00000);
  dVar9 = cbrt(-INFINITY);
  dVar10 = cbrt(-INFINITY);
  if ((dVar10 < -INFINITY) || (dVar10 = cbrt(-INFINITY), -1.797693134862316e+308 <= dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_64 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_68 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052095,puVar1,local_68,uStack_64,0,
         0xfff00000);
  cbrt(NAN);
  cbrt(NAN);
  printf("%s - %s (NAN version)\n",&DAT_08052095,&DAT_08052074);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080520b1,&DAT_08052037,0,0x80000000,0
         ,0x80000000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080520b1,&DAT_08052037,0,0x40100000,0
         ,0x40100000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080520b1,&DAT_08052037,0,0xc0080000,0
         ,0xc0080000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080520b1,&DAT_08052037,0,0x7ff00000,0
         ,0x7ff00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080520b1,&DAT_08052037,0,0xfff00000,0
         ,0xfff00000);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","copysign",&DAT_08052037,0,0x80000000,0,
         0x80000000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","copysign",&DAT_08052037,0,0,0,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","copysign",&DAT_08052037,0,0xfff00000,0,
         0xfff00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","copysign",&DAT_08052037,0,0x7ff00000,0,
         0x7ff00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","copysign",&DAT_08052037,0,0xfff00000,0,
         0xfff00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","copysign",&DAT_08052037,0,0x7ff00000,0,
         0x7ff00000);
  printf("%s - %s (NAN version)\n","copysign",&DAT_08052037);
  printf("%s - %s (NAN version)\n","copysign",&DAT_08052037);
  printf("%s - %s (NAN version)\n","copysign",&DAT_08052037);
  printf("%s - %s (NAN version)\n","copysign",&DAT_08052037);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080520bf,&DAT_08052037,0,0x3ff00000,0
         ,0x3ff00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080520bf,&DAT_08052037,0x33145c07,
         0x3c91a626,0,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080520bf,&DAT_08052037,0xfffffffc,
         0xbfdfffff,0,0xbfe00000);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080520c3,&DAT_08052037,0,0x3ff00000,0
         ,0x3ff00000);
  uVar5 = 0x3ff4152c;
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080520c3,&DAT_08052037,0x1862342f,
         0x3ff4152c,0x1862342f,0x3ff4152c);
  dVar9 = cosh(INFINITY);
  if (dVar9 <= 1.797693134862316e+308) {
    uVar4 = 0;
  }
  else if (0.0 <= dVar9) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0xffffffff;
  }
  uVar11 = 0x7ff00000;
  dVar9 = cosh(INFINITY);
  if ((dVar9 <= 1.797693134862316e+308) || (dVar9 < 0.0)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  printf("%s - %s computed: %i should be: %i\n",&DAT_080520c3,puVar1,uVar4,1,uVar11,uVar5);
  dVar9 = cosh(-INFINITY);
  if (dVar9 <= 1.797693134862316e+308) {
    uVar5 = 0;
  }
  else if (0.0 <= dVar9) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0xffffffff;
  }
  dVar9 = cosh(-INFINITY);
  if ((dVar9 <= 1.797693134862316e+308) || (dVar9 < 0.0)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  printf("%s - %s computed: %i should be: %i\n",&DAT_080520c3,puVar1,uVar5,1);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080520ec,&DAT_08052037,0,0x3ff00000,0
         ,0x3ff00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080520ec,&DAT_08052037,0x8b145769,
         0x4005bf0a,0x8b145769,0x4005bf0a);
  uVar5 = 0x40001c2a;
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080520ec,&DAT_08052037,0x61268987,
         0x40001c2a,0x61268987,0x40001c2a);
  dVar9 = exp(INFINITY);
  if (dVar9 <= 1.797693134862316e+308) {
    uVar4 = 0;
  }
  else if (0.0 <= dVar9) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0xffffffff;
  }
  uVar11 = 0x7ff00000;
  dVar9 = exp(INFINITY);
  if ((dVar9 <= 1.797693134862316e+308) || (dVar9 < 0.0)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  printf("%s - %s computed: %i should be: %i\n",&DAT_080520ec,puVar1,uVar4,1,uVar11,uVar5);
  dVar9 = exp(-INFINITY);
  dVar10 = exp(-INFINITY);
  if ((dVar10 < -1e-09) || (dVar10 = exp(-INFINITY), 1e-09 < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_64 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_68 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080520ec,puVar1,local_68,uStack_64,0,
         0);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","exp10",&DAT_08052037,0,0x3ff00000,0,
         0x3ff00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","exp10",&DAT_08052037,0,0x408f4000,0,
         0x408f4000);
  uVar5 = 0x40140c28;
  printf("%s - %s computed: %10.15e should be: %10.15e\n","exp10",&DAT_08052037,0x430012e6,
         0x40140c28,0x430012e7,0x40140c28);
  dVar9 = exp10(INFINITY);
  if (dVar9 <= 1.797693134862316e+308) {
    uVar4 = 0;
  }
  else if (0.0 <= dVar9) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0xffffffff;
  }
  uVar11 = 0x7ff00000;
  dVar9 = exp10(INFINITY);
  if ((dVar9 <= 1.797693134862316e+308) || (dVar9 < 0.0)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  printf("%s - %s computed: %i should be: %i\n","exp10",puVar1,uVar4,1,uVar11,uVar5);
  dVar9 = exp10(-INFINITY);
  dVar10 = exp10(-INFINITY);
  if ((dVar10 < -1e-09) || (dVar10 = exp10(-INFINITY), 1e-09 < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_64 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_68 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","exp10",puVar1,local_68,uStack_64,0,0);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080520f6,&DAT_08052037,0,0x3ff00000,0
         ,0x3ff00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080520f6,&DAT_08052037,0,0x40900000,0
         ,0x40900000);
  uVar5 = 0x3ff9fdf8;
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080520f6,&DAT_08052037,0xbcce533d,
         0x3ff9fdf8,0xbcce533d,0x3ff9fdf8);
  dVar9 = exp2(INFINITY);
  if (dVar9 <= 1.797693134862316e+308) {
    uVar4 = 0;
  }
  else if (0.0 <= dVar9) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0xffffffff;
  }
  uVar11 = 0x7ff00000;
  dVar9 = exp2(INFINITY);
  if ((dVar9 <= 1.797693134862316e+308) || (dVar9 < 0.0)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  printf("%s - %s computed: %i should be: %i\n",&DAT_080520f6,puVar1,uVar4,1,uVar11,uVar5);
  dVar9 = exp2(-INFINITY);
  dVar10 = exp2(-INFINITY);
  if ((dVar10 < -1e-09) || (dVar10 = exp2(-INFINITY), 1e-09 < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_64 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_68 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080520f6,puVar1,local_68,uStack_64,0,
         0);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","expm1",&DAT_08052037,0,0,0,0);
  dVar9 = expm1(INFINITY);
  dVar10 = expm1(INFINITY);
  if ((dVar10 <= 1.797693134862316e+308) || (dVar10 = expm1(INFINITY), INFINITY < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_64 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_68 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","expm1",puVar1,local_68,uStack_64,0,
         0x7ff00000);
  dVar9 = expm1(-INFINITY);
  dVar10 = expm1(-INFINITY);
  if ((dVar10 < -1.000000001) || (dVar10 = expm1(-INFINITY), -0.999999999 < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_64 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_68 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","expm1",puVar1,local_68,uStack_64,0,
         0xbff00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","expm1",&DAT_08052037,0x1628aed3,
         0x3ffb7e15,0x1628aed2,0x3ffb7e15);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","expm1",&DAT_08052037,0xc24d130d,
         0x3ff03854,0xc24d130d,0x3ff03854);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052101,&DAT_08052037,0,0,0,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052101,&DAT_08052037,0xb851eb85,
         0x3ff3851e,0xb851eb85,0x3ff3851e);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052101,&DAT_08052037,0,0x40430000,0
         ,0x40430000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052101,&DAT_08052037,0,0x7ff00000,0
         ,0x7ff00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052101,&DAT_08052037,0,0x7ff00000,0
         ,0x7ff00000);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052106,&DAT_08052037,0,0,0,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052106,&DAT_08052037,0,0x40220000,0
         ,0x40220000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052106,&DAT_08052074,0,0,0,
         0x40220000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052106,&DAT_08052074,0,0,0,
         0x40220000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052106,&DAT_08052037,0,0x40220000,0
         ,0x40220000);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","floor",&DAT_08052037,0,0x80000000,0,
         0x80000000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","floor",&DAT_08052037,0,0x40080000,0,
         0x40080000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","floor",&DAT_08052037,0,0xc0100000,0,
         0xc0100000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","floor",&DAT_08052037,0,0x7ff00000,0,
         0x7ff00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","floor",&DAT_08052037,0,0xfff00000,0,
         0xfff00000);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052111,&DAT_08052037,0,0x40140000,0
         ,0x40140000);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052115,&DAT_08052037,0,0,0,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052115,&DAT_08052037,0,0x40220000,0
         ,0x40220000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052115,&DAT_08052037,0,0,0,0);
  dVar9 = fmax(9.0,INFINITY);
  dVar10 = fmax(9.0,INFINITY);
  if ((dVar10 <= 1.797693134862316e+308) || (dVar10 = fmax(9.0,INFINITY), INFINITY < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_64 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_68 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052115,puVar1,local_68,uStack_64,0,
         0x7ff00000);
  dVar9 = fmax(0.0,-INFINITY);
  dVar10 = fmax(0.0,-INFINITY);
  if ((dVar10 < -1e-09) || (dVar10 = fmax(0.0,-INFINITY), 1e-09 < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_64 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_68 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052115,puVar1,local_68,uStack_64,0,
         0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052115,&DAT_08052037,0,0x40220000,0
         ,0x40220000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052115,&DAT_08052037,0,0xc0220000,0
         ,0xc0220000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052115,&DAT_08052037,0,0x7ff00000,0
         ,0x7ff00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052115,&DAT_08052037,0,0xfff00000,0
         ,0xfff00000);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_0805211a,&DAT_08052037,0,0,0,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_0805211a,&DAT_08052037,0,0,0,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_0805211a,&DAT_08052037,0,0xc0220000,0
         ,0xc0220000);
  dVar9 = fmin(9.0,INFINITY);
  dVar10 = fmin(9.0,INFINITY);
  if ((dVar10 < 8.999999999) || (dVar10 = fmin(9.0,INFINITY), 9.000000001 < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_64 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_68 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_0805211a,puVar1,local_68,uStack_64,0,
         0x40220000);
  dVar9 = fmin(0.0,-INFINITY);
  dVar10 = fmin(0.0,-INFINITY);
  if ((dVar10 < -INFINITY) || (dVar10 = fmin(0.0,-INFINITY), -1.797693134862316e+308 <= dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_64 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_68 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_0805211a,puVar1,local_68,uStack_64,0,
         0xfff00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_0805211a,&DAT_08052037,0,0x40220000,0
         ,0x40220000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_0805211a,&DAT_08052037,0,0xc0220000,0
         ,0xc0220000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_0805211a,&DAT_08052037,0,0x7ff00000,0
         ,0x7ff00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_0805211a,&DAT_08052037,0,0xfff00000,0
         ,0xfff00000);
  putchar(10);
  dVar9 = fmod(6.5,2.3);
  dVar10 = fmod(6.5,2.3);
  if ((dVar10 < 1.899999999) || (dVar10 = fmod(6.5,2.3), 1.900000001 < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_64 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_68 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_0805211f,puVar1,local_68,uStack_64,
         0x66666666,0x3ffe6666);
  dVar9 = fmod(-6.5,2.3);
  dVar10 = fmod(-6.5,2.3);
  if ((dVar10 < -1.900000001) || (dVar10 = fmod(-6.5,2.3), -1.899999999 < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_64 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_68 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_0805211f,puVar1,local_68,uStack_64,
         0x66666666,0xbffe6666);
  dVar9 = fmod(6.5,-2.3);
  dVar10 = fmod(6.5,-2.3);
  if ((dVar10 < 1.899999999) || (dVar10 = fmod(6.5,-2.3), 1.900000001 < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_64 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_68 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_0805211f,puVar1,local_68,uStack_64,
         0x66666666,0x3ffe6666);
  dVar9 = fmod(-6.5,-2.3);
  dVar10 = fmod(-6.5,-2.3);
  if ((dVar10 < -1.900000001) || (dVar10 = fmod(-6.5,-2.3), -1.899999999 < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_64 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_68 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_0805211f,puVar1,local_68,uStack_64,
         0x66666666,0xbffe6666);
  dVar9 = fmod(6.5,INFINITY);
  dVar10 = fmod(6.5,INFINITY);
  if ((dVar10 < 6.499999999) || (dVar10 = fmod(6.5,INFINITY), 6.500000001 < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_64 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_68 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_0805211f,puVar1,local_68,uStack_64,0,
         0x401a0000);
  dVar9 = fmod(-6.5,-INFINITY);
  dVar10 = fmod(-6.5,-INFINITY);
  if ((dVar10 < -6.500000001) || (dVar10 = fmod(-6.5,-INFINITY), -6.499999999 < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_64 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_68 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_0805211f,puVar1,local_68,uStack_64,0,
         0xc01a0000);
  putchar(10);
  uVar5 = 0x3d70a3d7;
  uVar4 = 0xbfeb570a;
  printf("%s - %s computed: %10.15e should be: %10.15e\n","frexp",&DAT_08052037,0x3d70a3d7,
         0xbfeb570a,0x3d70a3d7,0xbfeb570a);
  printf("%s - %s computed: %i should be: %i\n","frexp",&DAT_08052037,5,5,uVar5,uVar4);
  uVar5 = 0;
  uVar4 = 0;
  printf("%s - %s computed: %10.15e should be: %10.15e\n","frexp",&DAT_08052037,0,0,0,0);
  printf("%s - %s computed: %i should be: %i\n","frexp",&DAT_08052037,0,0,uVar5,uVar4);
  uVar5 = 0x9999999a;
  uVar4 = 0x3fe99999;
  printf("%s - %s computed: %10.15e should be: %10.15e\n","frexp",&DAT_08052037,0x9999999a,
         0x3fe99999,0x9999999a,0x3fe99999);
  printf("%s - %s computed: %i should be: %i\n","frexp",&DAT_08052037,4,4,uVar5,uVar4);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","frexp",&DAT_08052037,0,0x7ff00000,0,
         0x7ff00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","frexp",&DAT_08052037,0,0xfff00000,0,
         0xfff00000);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","hypot",&DAT_08052037,0,0x40140000,0,
         0x40140000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","hypot",&DAT_08052037,0x55b9eafa,
         0x3ff63a58,0x55b9eafb,0x3ff63a58);
  dVar9 = hypot(INFINITY,NAN);
  dVar10 = hypot(INFINITY,NAN);
  if ((dVar10 <= 1.797693134862316e+308) || (dVar10 = hypot(INFINITY,NAN), INFINITY < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_64 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_68 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","hypot",puVar1,local_68,uStack_64,0,
         0x7ff00000);
  dVar9 = hypot(-INFINITY,NAN);
  dVar10 = hypot(-INFINITY,NAN);
  if ((dVar10 <= 1.797693134862316e+308) || (dVar10 = hypot(-INFINITY,NAN), INFINITY < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_64 = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_68 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","hypot",puVar1,local_68,uStack_64,0,
         0x7ff00000);
  hypot(NAN,NAN);
  printf("%s - %s (NAN version)\n","hypot",&DAT_08052074);
  putchar(10);
  printf("%s - %s computed: %i should be: %i\n","ilogb",&DAT_08052037,0,0);
  printf("%s - %s computed: %i should be: %i\n","ilogb",&DAT_08052037,1,1);
  printf("%s - %s computed: %i should be: %i\n","ilogb",&DAT_08052037,10,10);
  printf("%s - %s computed: %i should be: %i\n","ilogb",&DAT_08052037,10,10);
  putchar(10);
  printf("%s - %s computed: %i should be: %i\n","isfinite",&DAT_08052037,1,1);
  printf("%s - %s computed: %i should be: %i\n","isfinite",&DAT_08052037,1,1);
  printf("%s - %s computed: %i should be: %i\n","isfinite",&DAT_08052037,1,1);
  printf("%s - %s computed: %i should be: %i\n","isfinite",&DAT_08052037,0,0);
  printf("%s - %s computed: %i should be: %i\n","isfinite",&DAT_08052037,0,0);
  printf("%s - %s computed: %i should be: %i\n","isfinite",&DAT_08052037,0,0);
  putchar(10);
  printf("%s - %s computed: %i should be: %i\n","isnan",&DAT_08052037,0,0);
  printf("%s - %s computed: %i should be: %i\n","isnan",&DAT_08052037,0,0);
  printf("%s - %s computed: %i should be: %i\n","isnan",&DAT_08052037,0,0);
  printf("%s - %s computed: %i should be: %i\n","isnan",&DAT_08052037,0,0);
  printf("%s - %s computed: %i should be: %i\n","isnan",&DAT_08052037,0,0);
  printf("%s - %s computed: %i should be: %i\n","isnan",&DAT_08052037,1,1);
  putchar(10);
  printf("%s - %s computed: %i should be: %i\n","isinf",&DAT_08052037,0,0);
  printf("%s - %s computed: %i should be: %i\n","isinf",&DAT_08052037,0,0);
  printf("%s - %s computed: %i should be: %i\n","isinf",&DAT_08052037,0,0);
  printf("%s - %s computed: %i should be: %i\n","isinf",&DAT_08052037,1,1);
  printf("%s - %s computed: %i should be: %i\n","isinf",&DAT_08052037,0xffffffff,0xffffffff);
  printf("%s - %s computed: %i should be: %i\n","isinf",&DAT_08052037,0,0);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","ldexp",&DAT_08052037,0,0,0,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","ldexp",&DAT_08052037,0x9999999a,
         0x40299999,0x9999999a,0x40299999);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","ldexp",&DAT_08052037,0x3d70a3d7,
         0xc03b570a,0x3d70a3d7,0xc03b570a);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","ldexp",&DAT_08052037,0,0x7ff00000,0,
         0x7ff00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","ldexp",&DAT_08052037,0,0xfff00000,0,
         0xfff00000);
  printf("%s - %s (NAN version)\n","ldexp",&DAT_08052074);
  putchar(10);
  lVar6 = llrint(0.0);
  lVar7 = llrint(0.0);
  local_48 = (uint)lVar7;
  uStack_44 = (uint)((ulonglong)lVar7 >> 0x20);
  if ((uStack_44 | local_48) == 0) {
    puVar1 = &DAT_08052037;
  }
  else {
    puVar1 = &DAT_08052074;
  }
  printf("%s - %s computed: %lli should be: %lli\n","llrint",puVar1,(int)lVar6,
         (int)((ulonglong)lVar6 >> 0x20),0,0);
  lVar6 = llrint(-0.2);
  lVar7 = llrint(-0.2);
  local_50 = (uint)lVar7;
  local_4c = (uint)((ulonglong)lVar7 >> 0x20);
  if ((local_4c | local_50) == 0) {
    puVar1 = &DAT_08052037;
  }
  else {
    puVar1 = &DAT_08052074;
  }
  printf("%s - %s computed: %lli should be: %lli\n","llrint",puVar1,(int)lVar6,
         (int)((ulonglong)lVar6 >> 0x20),0,0);
  lVar6 = llrint(-1.4);
  uVar8 = llrint(-1.4);
  local_58 = (uint)(uVar8 ^ 0xffffffffffffffff);
  local_54 = (uint)((uVar8 ^ 0xffffffffffffffff) >> 0x20);
  if ((local_54 | local_58) == 0) {
    puVar1 = &DAT_08052037;
  }
  else {
    puVar1 = &DAT_08052074;
  }
  printf("%s - %s computed: %lli should be: %lli\n","llrint",puVar1,(int)lVar6,
         (int)((ulonglong)lVar6 >> 0x20),0xffffffff,0xffffffff);
  lVar6 = llrint(7.205759403792794e+16);
  lVar7 = llrint(7.205759403792794e+16);
  if (lVar7 == 0x100000000000000) {
    puVar1 = &DAT_08052037;
  }
  else {
    puVar1 = &DAT_08052074;
  }
  printf("%s - %s computed: %lli should be: %lli\n","llrint",puVar1,(int)lVar6,
         (int)((ulonglong)lVar6 >> 0x20),0,0x1000000);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052180,&DAT_08052037,0,0x3ff00000,0
         ,0x3ff00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052180,&DAT_08052037,0,0xbff00000,0
         ,0xbff00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052180,&DAT_08052037,0xfefa39ef,
         0x3fe62e42,0xfefa39ef,0x3fe62e42);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052180,&DAT_08052037,0xbbb55516,
         0x40026bb1,0xbbb55516,0x40026bb1);
  dVar9 = log(INFINITY);
  dVar10 = log(INFINITY);
  if ((dVar10 <= 1.797693134862316e+308) || (dVar10 = log(INFINITY), INFINITY < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_44 = (uint)((ulonglong)dVar9 >> 0x20);
  local_48 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052180,puVar1,local_48,uStack_44,0,
         0x7ff00000);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","log10",&DAT_08052037,0,0xbff00000,0,
         0xbff00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","log10",&DAT_08052037,0,0x3ff00000,0,
         0x3ff00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","log10",&DAT_08052037,0x1526e50e,
         0x3fdbcb7b,0x1526e50e,0x3fdbcb7b);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","log10",&DAT_08052037,0,0x40100000,0,
         0x40100000);
  dVar9 = log10(INFINITY);
  dVar10 = log10(INFINITY);
  if ((dVar10 <= 1.797693134862316e+308) || (dVar10 = log10(INFINITY), INFINITY < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_44 = (uint)((ulonglong)dVar9 >> 0x20);
  local_48 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","log10",puVar1,local_48,uStack_44,0,
         0x7ff00000);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_0805218a,&DAT_08052037,0,0,0,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_0805218a,&DAT_08052037,0x652b82fe,
         0x3ff71547,0x652b82fe,0x3ff71547);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_0805218a,&DAT_08052037,0,0x3ff00000,0
         ,0x3ff00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_0805218a,&DAT_08052037,0,0x40100000,0
         ,0x40100000);
  dVar9 = log2(INFINITY);
  dVar10 = log2(INFINITY);
  if ((dVar10 <= 1.797693134862316e+308) || (dVar10 = log2(INFINITY), INFINITY < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_44 = (uint)((ulonglong)dVar9 >> 0x20);
  local_48 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_0805218a,puVar1,local_48,uStack_44,0,
         0x7ff00000);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","log1p",&DAT_08052037,0,0,0,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","log1p",&DAT_08052037,0,0x3ff00000,0,
         0x3ff00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","log1p",&DAT_08052037,0x24e13f4e,
         0xbfd6d3c3,0x24e13f4f,0xbfd6d3c3);
  dVar9 = log1p(INFINITY);
  dVar10 = log1p(INFINITY);
  if ((dVar10 <= 1.797693134862316e+308) || (dVar10 = log1p(INFINITY), INFINITY < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_44 = (uint)((ulonglong)dVar9 >> 0x20);
  local_48 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","log1p",puVar1,local_48,uStack_44,0,
         0x7ff00000);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052195,&DAT_08052037,0,0,0,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052195,&DAT_08052037,0,0x3ff00000,0
         ,0x3ff00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052195,&DAT_08052037,0,0x40240000,0
         ,0x40240000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052195,&DAT_08052037,0,0x40240000,0
         ,0x40240000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_08052195,&DAT_08052037,0,0x7ff00000,0
         ,0x7ff00000);
  putchar(10);
  lVar2 = lrint(0.0);
  lrint(0.0);
  lVar3 = lrint(0.0);
  if (lVar3 < 1) {
    puVar1 = &DAT_08052037;
  }
  else {
    puVar1 = &DAT_08052074;
  }
  uStack_44 = (uint)((ulonglong)(double)lVar2 >> 0x20);
  local_48 = SUB84((double)lVar2,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","lrint",puVar1,local_48,uStack_44,0,0);
  lVar2 = lrint(0.4);
  lrint(0.4);
  lVar3 = lrint(0.4);
  if (lVar3 < 1) {
    puVar1 = &DAT_08052037;
  }
  else {
    puVar1 = &DAT_08052074;
  }
  uStack_44 = (uint)((ulonglong)(double)lVar2 >> 0x20);
  local_48 = SUB84((double)lVar2,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","lrint",puVar1,local_48,uStack_44,0,0);
  lVar2 = lrint(1.4);
  lVar3 = lrint(1.4);
  if ((lVar3 < 1) || (lVar3 = lrint(1.4), 1 < lVar3)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_44 = (uint)((ulonglong)(double)lVar2 >> 0x20);
  local_48 = SUB84((double)lVar2,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","lrint",puVar1,local_48,uStack_44,0,
         0x3ff00000);
  lVar2 = lrint(-1.4);
  lVar3 = lrint(-1.4);
  if ((lVar3 < -1) || (lVar3 = lrint(-1.4), -1 < lVar3)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_44 = (uint)((ulonglong)(double)lVar2 >> 0x20);
  local_48 = SUB84((double)lVar2,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","lrint",puVar1,local_48,uStack_44,0,
         0xbff00000);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080521a0,&DAT_08052037,0,0,0,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080521a0,&DAT_08052037,0,0x3ff00000,0
         ,0x3ff00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080521a0,&DAT_08052037,0,0x405f4000,0
         ,0x405f4000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080521a0,&DAT_08052037,0,0x40180000,0
         ,0x40180000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080521a0,&DAT_08052037,0,0x408f4000,0
         ,0x408f4000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080521a0,&DAT_08052037,0,0x40200000,0
         ,0x40200000);
  printf("%s - %s (NAN version)\n",&DAT_080521a0,&DAT_08052037);
  pow(NAN,NAN);
  printf("%s - %s (NAN version)\n",&DAT_080521a0,&DAT_08052074);
  pow(0.0,NAN);
  printf("%s - %s (NAN version)\n",&DAT_080521a0,&DAT_08052074);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080521a0,&DAT_08052037,0,0x7ff00000,0
         ,0x7ff00000);
  dVar9 = pow(INFINITY,INFINITY);
  dVar10 = pow(INFINITY,INFINITY);
  if ((dVar10 <= 1.797693134862316e+308) || (dVar10 = pow(INFINITY,INFINITY), INFINITY < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_44 = (uint)((ulonglong)dVar9 >> 0x20);
  local_48 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080521a0,puVar1,local_48,uStack_44,0,
         0x7ff00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080521a0,&DAT_08052037,0,0x3ff00000,0
         ,0x3ff00000);
  dVar9 = pow(0.0,INFINITY);
  dVar10 = pow(0.0,INFINITY);
  if ((dVar10 < -1e-09) || (dVar10 = pow(0.0,INFINITY), 1e-09 < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_44 = (uint)((ulonglong)dVar9 >> 0x20);
  local_48 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080521a0,puVar1,local_48,uStack_44,0,
         0);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","pow10",&DAT_08052037,0,0x3ff00000,0,
         0x3ff00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","pow10",&DAT_08052037,0,0x40240000,0,
         0x40240000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","pow10",&DAT_08052037,0,0x408f4000,0,
         0x408f4000);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","remainder",&DAT_08052037,0,0xbfd80000,0,
         0xbfd80000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","remainder",&DAT_08052037,0,0x3fd80000,0,
         0x3fd80000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","remainder",&DAT_08052037,0,0xbfd80000,0,
         0xbfd80000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","remainder",&DAT_08052037,0,0x3fd80000,0,
         0x3fd80000);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080521b4,&DAT_08052037,0,0x80000000,0
         ,0x80000000);
  putchar(10);
  dVar9 = scalb(0.8,4.0);
  dVar10 = scalb(0.8,4.0);
  if ((dVar10 < 12.799999999) || (dVar10 = scalb(0.8,4.0), 12.800000001 < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_44 = (uint)((ulonglong)dVar9 >> 0x20);
  local_48 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","scalb",puVar1,local_48,uStack_44,
         0x9999999a,0x40299999);
  dVar9 = scalb(-0.854375,5.0);
  dVar10 = scalb(-0.854375,5.0);
  if (((longdouble)dVar10 < _DAT_08052590) ||
     (dVar10 = scalb(-0.854375,5.0), _DAT_080525a0 < (longdouble)dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_44 = (uint)((ulonglong)dVar9 >> 0x20);
  local_48 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","scalb",puVar1,local_48,uStack_44,
         0x3d70a3d7,0xc03b570a);
  dVar9 = scalb(0.0,2.0);
  dVar10 = scalb(0.0,2.0);
  if ((dVar10 < -1e-09) || (dVar10 = scalb(0.0,2.0), 1e-09 < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_44 = (uint)((ulonglong)dVar9 >> 0x20);
  local_48 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","scalb",puVar1,local_48,uStack_44,0,0);
  scalb(3.0,-2.5);
  printf("%s - %s (NAN version)\n","scalb",&DAT_08052074);
  scalb(2.0,0.5);
  printf("%s - %s (NAN version)\n","scalb",&DAT_08052074);
  dVar9 = scalb(INFINITY,0.0);
  dVar10 = scalb(INFINITY,0.0);
  if ((dVar10 <= 1.797693134862316e+308) || (dVar10 = scalb(INFINITY,0.0), INFINITY < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_44 = (uint)((ulonglong)dVar9 >> 0x20);
  local_48 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","scalb",puVar1,local_48,uStack_44,0,
         0x7ff00000);
  dVar9 = scalb(-INFINITY,0.0);
  dVar10 = scalb(-INFINITY,0.0);
  if ((dVar10 < -INFINITY) || (dVar10 = scalb(-INFINITY,0.0), -1.797693134862316e+308 <= dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_44 = (uint)((ulonglong)dVar9 >> 0x20);
  local_48 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","scalb",puVar1,local_48,uStack_44,0,
         0xfff00000);
  scalb(INFINITY,-INFINITY);
  printf("%s - %s (NAN version)\n","scalb",&DAT_08052074);
  scalb(-INFINITY,-INFINITY);
  printf("%s - %s (NAN version)\n","scalb",&DAT_08052074);
  dVar9 = scalb(3.0,-INFINITY);
  dVar10 = scalb(3.0,-INFINITY);
  if ((dVar10 < -1e-09) || (dVar10 = scalb(3.0,-INFINITY), 1e-09 < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_44 = (uint)((ulonglong)dVar9 >> 0x20);
  local_48 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","scalb",puVar1,local_48,uStack_44,0,0);
  dVar9 = scalb(-2.0,-INFINITY);
  dVar10 = scalb(-2.0,-INFINITY);
  if ((dVar10 < -1e-09) || (dVar10 = scalb(-2.0,-INFINITY), 1e-09 < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_44 = (uint)((ulonglong)dVar9 >> 0x20);
  local_48 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","scalb",puVar1,local_48,uStack_44,0,
         0x80000000);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","scalbn",&DAT_08052037,0,0,0,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","scalbn",&DAT_08052037,0x9999999a,
         0x40299999,0x9999999a,0x40299999);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","scalbn",&DAT_08052037,0x3d70a3d7,
         0xc03b570a,0x3d70a3d7,0xc03b570a);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","scalbn",&DAT_08052037,0,0x7ff00000,0,
         0x7ff00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","scalbn",&DAT_08052037,0,0xfff00000,0,
         0xfff00000);
  printf("%s - %s (NAN version)\n","scalbn",&DAT_08052074);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080521c6,&DAT_08052037,0,0x80000000,0
         ,0x80000000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080521c6,&DAT_08052037,0,0x3ff00000,0
         ,0x3ff00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080521c6,&DAT_08052037,0,0xbff00000,0
         ,0xbff00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080521c6,&DAT_08052037,0x694619b8,
         0x3fe49d6e,0x694619b8,0x3fe49d6e);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","sincos",&DAT_08052037,0,0,0,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","sincos",&DAT_08052037,0,0x3ff00000,0,
         0x3ff00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","sincos",&DAT_08052037,0,0x3ff00000,0,
         0x3ff00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","sincos",&DAT_08052037,0x33145c07,
         0x3c91a626,0,0);
  if (((longdouble)0.644217687237691 < _DAT_080525d0) ||
     (_DAT_080525e0 < (longdouble)0.644217687237691)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  printf("%s - %s computed: %10.15e should be: %10.15e\n","sincos",puVar1,0x694619b8,0x3fe49d6e,
         0x694619b8,0x3fe49d6e);
  if (((longdouble)0.7648421872844885 < _DAT_080525f0) ||
     (_DAT_08052600 < (longdouble)0.7648421872844885)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  printf("%s - %s computed: %10.15e should be: %10.15e\n","sincos",puVar1,0x529f9d93,0x3fe87996,
         0x529f9d92,0x3fe87996);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080521d1,&DAT_08052037,0,0,0,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080521d1,&DAT_08052037,0x53d5bdbd,
         0x3fe84651,0x53d5bdbd,0x3fe84651);
  dVar9 = sinh(INFINITY);
  dVar10 = sinh(INFINITY);
  if ((dVar10 <= 1.797693134862316e+308) || (dVar10 = sinh(INFINITY), INFINITY < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_44 = (uint)((ulonglong)dVar9 >> 0x20);
  local_48 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080521d1,puVar1,local_48,uStack_44,0,
         0x7ff00000);
  dVar9 = sinh(-INFINITY);
  dVar10 = sinh(-INFINITY);
  if ((dVar10 < -INFINITY) || (dVar10 = sinh(-INFINITY), -1.797693134862316e+308 <= dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_44 = (uint)((ulonglong)dVar9 >> 0x20);
  local_48 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080521d1,puVar1,local_48,uStack_44,0,
         0xfff00000);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080521d6,&DAT_08052037,0,0x40080000,0
         ,0x40080000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080521d6,&DAT_08052037,0,0x3fe00000,0
         ,0x3fe00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080521d6,&DAT_08052037,0x3f7ab2f8,
         0x3feac5eb,0x3f7ab2f8,0x3feac5eb);
  sqrt(NAN);
  printf("%s - %s (NAN version)\n",&DAT_080521d6,&DAT_08052074);
  dVar9 = sqrt(INFINITY);
  dVar10 = sqrt(INFINITY);
  if ((dVar10 <= 1.797693134862316e+308) || (dVar10 = sqrt(INFINITY), INFINITY < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_44 = (uint)((ulonglong)dVar9 >> 0x20);
  local_48 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080521d6,puVar1,local_48,uStack_44,0,
         0x7ff00000);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080521db,&DAT_08052037,0,0x80000000,0
         ,0x80000000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080521db,&DAT_08052037,0xffffffff,
         0x3fefffff,0,0x3ff00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080521db,&DAT_08052037,0xc2fc78ae,
         0x3feaf406,0xc2fc78ae,0x3feaf406);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080521df,&DAT_08052037,0,0,0,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080521df,&DAT_08052037,0x17af2e91,
         0x3fe356fb,0x17af2e91,0x3fe356fb);
  dVar9 = tanh(INFINITY);
  dVar10 = tanh(INFINITY);
  if ((dVar10 < 0.999999999) || (dVar10 = tanh(INFINITY), 1.000000001 < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_44 = (uint)((ulonglong)dVar9 >> 0x20);
  local_48 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080521df,puVar1,local_48,uStack_44,0,
         0x3ff00000);
  dVar9 = tanh(-INFINITY);
  dVar10 = tanh(-INFINITY);
  if ((dVar10 < -1.000000001) || (dVar10 = tanh(-INFINITY), -0.999999999 < dVar10)) {
    puVar1 = &DAT_08052074;
  }
  else {
    puVar1 = &DAT_08052037;
  }
  uStack_44 = (uint)((ulonglong)dVar9 >> 0x20);
  local_48 = SUB84(dVar9,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n",&DAT_080521df,puVar1,local_48,uStack_44,0,
         0xbff00000);
  putchar(10);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","trunc",&DAT_08052037,0,0,0,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","trunc",&DAT_08052037,0,0,0,0);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","trunc",&DAT_08052037,0,0x41300004,0,
         0x41300004);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","trunc",&DAT_08052037,0,0x7ff00000,0,
         0x7ff00000);
  printf("%s - %s computed: %10.15e should be: %10.15e\n","trunc",&DAT_08052037,0,0xfff00000,0,
         0xfff00000);
  printf("%s - %s (NAN version)\n","trunc",&DAT_08052037);
  putchar(10);
                    // WARNING: Subroutine does not return
  exit(0);
}



int isnanf(float __value)

{
  return (uint)((ushort)((ushort)(__value != 0.0) << 10 | (ushort)(__value == 0.0) << 0xe) == 0x100)
  ;
}



int isnan(double __value)

{
  return (uint)((ushort)((ushort)(__value != 0.0) << 10 | (ushort)(__value == 0.0) << 0xe) == 0x100)
  ;
}



bool isnanl(longdouble param_1)

{
  return (ushort)((ushort)(param_1 != (longdouble)0) << 10 |
                 (ushort)(param_1 == (longdouble)0) << 0xe) == 0x100;
}



undefined4 isfinitef(float param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  
  uVar2 = (ushort)(param_1 != 0.0) << 10 | (ushort)(param_1 == 0.0) << 0xe;
  if ((uVar2 == 0x400) || (uVar2 == 0x4000)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 isfinite(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  
  uVar2 = (ushort)((double)CONCAT44(param_2,param_1) != 0.0) << 10 |
          (ushort)((double)CONCAT44(param_2,param_1) == 0.0) << 0xe;
  if ((uVar2 == 0x400) || (uVar2 == 0x4000)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 isfinitel(longdouble param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  
  uVar2 = (ushort)(param_1 != (longdouble)0) << 10 | (ushort)(param_1 == (longdouble)0) << 0xe;
  if ((uVar2 == 0x400) || (uVar2 == 0x4000)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



bool isnormalf(float param_1)

{
  return (ushort)((ushort)(param_1 != 0.0) << 10 | (ushort)(param_1 == 0.0) << 0xe) == 0x400;
}



bool isnormal(undefined4 param_1,undefined4 param_2)

{
  return (ushort)((ushort)((double)CONCAT44(param_2,param_1) != 0.0) << 10 |
                 (ushort)((double)CONCAT44(param_2,param_1) == 0.0) << 0xe) == 0x400;
}



bool isnormall(longdouble param_1)

{
  return (ushort)((ushort)(param_1 != (longdouble)0) << 10 |
                 (ushort)(param_1 == (longdouble)0) << 0xe) == 0x400;
}



int isinff(float __value)

{
  uint uVar1;
  
  uVar1 = (uint)((ushort)((ushort)(__value != 0.0) << 10 | (ushort)(__value == 0.0) << 0xe) == 0x500
                );
  if (__value < 0.0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}



int isinf(double __value)

{
  uint uVar1;
  
  uVar1 = (uint)((ushort)((ushort)(__value != 0.0) << 10 | (ushort)(__value == 0.0) << 0xe) == 0x500
                );
  if (__value < 0.0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}



uint isinfl(longdouble param_1)

{
  longdouble lVar1;
  uint uVar2;
  
  lVar1 = (longdouble)0;
  uVar2 = (uint)((ushort)((ushort)(param_1 != lVar1) << 10 | (ushort)(param_1 == lVar1) << 0xe) ==
                0x500);
  if (param_1 < lVar1) {
    uVar2 = -uVar2;
  }
  return uVar2;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

int __fpclassifyf(float __value)

{
  int iVar1;
  ushort uVar2;
  
  uVar2 = (ushort)(__value != 0.0) << 10 | (ushort)(__value == 0.0) << 0xe;
  if (uVar2 == 0x100) {
    iVar1 = 0;
  }
  else if (uVar2 == 0x500) {
    iVar1 = 1;
  }
  else if (uVar2 == 0x4000) {
    iVar1 = 2;
  }
  else if (((uint)__value & 0x7f000000) == 0) {
    iVar1 = 3;
  }
  else {
    iVar1 = 4;
  }
  return iVar1;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

int __fpclassify(double __value)

{
  int iVar1;
  ushort uVar2;
  
  uVar2 = (ushort)(__value != 0.0) << 10 | (ushort)(__value == 0.0) << 0xe;
  if (uVar2 == 0x100) {
    iVar1 = 0;
  }
  else if (uVar2 == 0x500) {
    iVar1 = 1;
  }
  else if (uVar2 == 0x4000) {
    iVar1 = 2;
  }
  else if (__value._4_4_ == 0) {
    iVar1 = 3;
  }
  else {
    iVar1 = 4;
  }
  return iVar1;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

undefined4 __fpclassifyl(undefined param_1 [12])

{
  longdouble lVar1;
  undefined4 uVar2;
  ushort uVar3;
  
  lVar1 = (longdouble)param_1._0_10_;
  uVar3 = (ushort)(lVar1 != (longdouble)0) << 10 | (ushort)(lVar1 == (longdouble)0) << 0xe;
  if (uVar3 == 0x100) {
    uVar2 = 0;
  }
  else if (uVar3 == 0x500) {
    uVar2 = 1;
  }
  else if (uVar3 == 0x4000) {
    uVar2 = 2;
  }
  else if ((param_1._8_4_ == 0) && (-1 < (int)param_1._4_4_)) {
    uVar2 = 3;
  }
  else {
    uVar2 = 4;
  }
  return uVar2;
}



undefined4 __regparm1 isgreaterf(undefined4 param_1_00,float param_1,float param_2)

{
  ushort uVar1;
  
  uVar1 = (ushort)(param_1 < param_2) << 8 | (ushort)(param_1 == param_2) << 0xe;
  return CONCAT31((int3)(CONCAT22((short)((uint)param_1_00 >> 0x10),uVar1) >> 8),
                  (char)(uVar1 >> 8) == '\0');
}



undefined4 isgreater(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  
  uVar1 = (ushort)((double)CONCAT44(param_2,param_1) < (double)CONCAT44(param_4,param_3)) << 8 |
          (ushort)((double)CONCAT44(param_2,param_1) == (double)CONCAT44(param_4,param_3)) << 0xe;
  return CONCAT31((int3)(CONCAT22((short)((uint)param_4 >> 0x10),uVar1) >> 8),
                  (char)(uVar1 >> 8) == '\0');
}



undefined4 __regparm1 isgreaterl(undefined4 param_1_00,longdouble param_1,longdouble param_2)

{
  ushort uVar1;
  
  uVar1 = (ushort)(param_1 < param_2) << 8 | (ushort)(param_1 == param_2) << 0xe;
  return CONCAT31((int3)(CONCAT22((short)((uint)param_1_00 >> 0x10),uVar1) >> 8),
                  (char)(uVar1 >> 8) == '\0');
}



undefined4 __regparm1 isgreaterequalf(undefined4 param_1_00,float param_1,float param_2)

{
  return CONCAT31((int3)(CONCAT22((short)((uint)param_1_00 >> 0x10),
                                  (ushort)(param_1 < param_2) << 8 |
                                  (ushort)(param_1 == param_2) << 0xe) >> 8),param_1 < param_2 == 0)
  ;
}



undefined4
isgreaterequal(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  
  uVar1 = (ushort)((double)CONCAT44(param_2,param_1) < (double)CONCAT44(param_4,param_3));
  return CONCAT31((int3)(CONCAT22((short)((uint)param_4 >> 0x10),
                                  uVar1 << 8 |
                                  (ushort)((double)CONCAT44(param_2,param_1) ==
                                          (double)CONCAT44(param_4,param_3)) << 0xe) >> 8),
                  uVar1 == 0);
}



undefined4 __regparm1 isgreaterequall(undefined4 param_1_00,longdouble param_1,longdouble param_2)

{
  return CONCAT31((int3)(CONCAT22((short)((uint)param_1_00 >> 0x10),
                                  (ushort)(param_1 < param_2) << 8 |
                                  (ushort)(param_1 == param_2) << 0xe) >> 8),param_1 < param_2 == 0)
  ;
}



undefined4 __regparm1 islessf(undefined4 param_1_00,float param_1,float param_2)

{
  ushort uVar1;
  
  uVar1 = (ushort)(param_2 < param_1) << 8 | (ushort)(param_2 == param_1) << 0xe;
  return CONCAT31((int3)(CONCAT22((short)((uint)param_1_00 >> 0x10),uVar1) >> 8),
                  (char)(uVar1 >> 8) == '\0');
}



undefined4 isless(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  
  uVar1 = (ushort)((double)CONCAT44(param_4,param_3) < (double)CONCAT44(param_2,param_1)) << 8 |
          (ushort)((double)CONCAT44(param_4,param_3) == (double)CONCAT44(param_2,param_1)) << 0xe;
  return CONCAT31((int3)(CONCAT22((short)((uint)param_4 >> 0x10),uVar1) >> 8),
                  (char)(uVar1 >> 8) == '\0');
}



undefined4 __regparm1 islessl(undefined4 param_1_00,longdouble param_1,longdouble param_2)

{
  ushort uVar1;
  
  uVar1 = (ushort)(param_2 < param_1) << 8 | (ushort)(param_2 == param_1) << 0xe;
  return CONCAT31((int3)(CONCAT22((short)((uint)param_1_00 >> 0x10),uVar1) >> 8),
                  (char)(uVar1 >> 8) == '\0');
}



undefined4 __regparm1 islessequalf(undefined4 param_1_00,float param_1,float param_2)

{
  return CONCAT31((int3)(CONCAT22((short)((uint)param_1_00 >> 0x10),
                                  (ushort)(param_2 < param_1) << 8 |
                                  (ushort)(param_2 == param_1) << 0xe) >> 8),param_2 < param_1 == 0)
  ;
}



undefined4 islessequal(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  
  uVar1 = (ushort)((double)CONCAT44(param_4,param_3) < (double)CONCAT44(param_2,param_1));
  return CONCAT31((int3)(CONCAT22((short)((uint)param_4 >> 0x10),
                                  uVar1 << 8 |
                                  (ushort)((double)CONCAT44(param_4,param_3) ==
                                          (double)CONCAT44(param_2,param_1)) << 0xe) >> 8),
                  uVar1 == 0);
}



undefined4 __regparm1 islessequall(undefined4 param_1_00,longdouble param_1,longdouble param_2)

{
  return CONCAT31((int3)(CONCAT22((short)((uint)param_1_00 >> 0x10),
                                  (ushort)(param_2 < param_1) << 8 |
                                  (ushort)(param_2 == param_1) << 0xe) >> 8),param_2 < param_1 == 0)
  ;
}



undefined4 __regparm1 islessgreaterf(undefined4 param_1_00,float param_1,float param_2)

{
  return CONCAT31((int3)(CONCAT22((short)((uint)param_1_00 >> 0x10),
                                  (ushort)(param_1 < param_2) << 8 |
                                  (ushort)(param_1 == param_2) << 0xe) >> 8),
                  (param_1 == param_2) == 0);
}



undefined4
islessgreater(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  
  uVar1 = (ushort)((double)CONCAT44(param_2,param_1) == (double)CONCAT44(param_4,param_3));
  return CONCAT31((int3)(CONCAT22((short)((uint)param_4 >> 0x10),
                                  (ushort)((double)CONCAT44(param_2,param_1) <
                                          (double)CONCAT44(param_4,param_3)) << 8 | uVar1 << 0xe) >>
                        8),uVar1 == 0);
}



undefined4 __regparm1 islessgreaterl(undefined4 param_1_00,longdouble param_1,longdouble param_2)

{
  return CONCAT31((int3)(CONCAT22((short)((uint)param_1_00 >> 0x10),
                                  (ushort)(param_1 < param_2) << 8 |
                                  (ushort)(param_1 == param_2) << 0xe) >> 8),
                  (param_1 == param_2) == 0);
}



ushort isunorderedf(float param_1,float param_2)

{
  return (ushort)(param_1 < param_2) << 8 | (ushort)(param_1 == param_2) << 0xe;
}



ushort isunordered(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  return (ushort)((double)CONCAT44(param_2,param_1) < (double)CONCAT44(param_4,param_3)) << 8 |
         (ushort)((double)CONCAT44(param_2,param_1) == (double)CONCAT44(param_4,param_3)) << 0xe;
}



ushort isunorderedl(longdouble param_1,longdouble param_2)

{
  return (ushort)(param_1 < param_2) << 8 | (ushort)(param_1 == param_2) << 0xe;
}



float acosf(float __x)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)__x;
  lVar1 = (longdouble)fpatan(SQRT((longdouble)1 - lVar1 * lVar1),lVar1);
  return (float)lVar1;
}



double acos(double __x)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)__x;
  lVar1 = (longdouble)fpatan(SQRT((longdouble)1 - lVar1 * lVar1),lVar1);
  return (double)lVar1;
}



unkbyte10 acosl(longdouble param_1)

{
  unkbyte10 Var1;
  
  Var1 = fpatan(SQRT((longdouble)1 - param_1 * param_1),param_1);
  return Var1;
}



float asinf(float __x)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)__x;
  lVar1 = (longdouble)fpatan(lVar1,SQRT((longdouble)1 - lVar1 * lVar1));
  return (float)lVar1;
}



double asin(double __x)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)__x;
  lVar1 = (longdouble)fpatan(lVar1,SQRT((longdouble)1 - lVar1 * lVar1));
  return (double)lVar1;
}



unkbyte10 asinl(longdouble param_1)

{
  unkbyte10 Var1;
  
  Var1 = fpatan(param_1,SQRT((longdouble)1 - param_1 * param_1));
  return Var1;
}



float atan2f(float __y,float __x)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)fpatan((longdouble)__y,(longdouble)__x);
  return (float)lVar1;
}



double atan2(double __y,double __x)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)fpatan((longdouble)__y,(longdouble)__x);
  return (double)lVar1;
}



unkbyte10 atan2l(unkbyte10 param_1,unkbyte10 param_2)

{
  unkbyte10 Var1;
  
  Var1 = fpatan(param_1,param_2);
  return Var1;
}



float expf(float __x)

{
  longdouble lVar1;
  longdouble lVar2;
  
  if ((ushort)((ushort)(__x != 0.0) << 10 | (ushort)(__x == 0.0) << 0xe) == 0x500) {
    if (0.0 <= __x) {
      lVar1 = (longdouble)__x;
    }
    else {
      lVar1 = (longdouble)0;
    }
  }
  else {
    lVar1 = ROUND((longdouble)__x * (longdouble)1.442695040888963);
    lVar2 = (longdouble)f2xm1((longdouble)__x * (longdouble)1.442695040888963 - lVar1);
    lVar1 = (longdouble)fscale((longdouble)1 + lVar2,lVar1);
  }
  return (float)lVar1;
}



double exp(double __x)

{
  longdouble lVar1;
  longdouble lVar2;
  
  if ((ushort)((ushort)(__x != 0.0) << 10 | (ushort)(__x == 0.0) << 0xe) == 0x500) {
    if (0.0 <= __x) {
      lVar1 = (longdouble)__x;
    }
    else {
      lVar1 = (longdouble)0;
    }
  }
  else {
    lVar1 = ROUND((longdouble)__x * (longdouble)1.442695040888963);
    lVar2 = (longdouble)f2xm1((longdouble)__x * (longdouble)1.442695040888963 - lVar1);
    lVar1 = (longdouble)fscale((longdouble)1 + lVar2,lVar1);
  }
  return (double)lVar1;
}



longdouble expl(longdouble param_1)

{
  longdouble lVar1;
  longdouble lVar2;
  
  lVar1 = (longdouble)0;
  if ((ushort)((ushort)(param_1 != lVar1) << 10 | (ushort)(param_1 == lVar1) << 0xe) == 0x500) {
    if (param_1 < lVar1) {
      param_1 = (longdouble)0;
    }
  }
  else {
    lVar1 = ROUND(param_1 * (longdouble)1.442695040888963);
    lVar2 = (longdouble)f2xm1(param_1 * (longdouble)1.442695040888963 - lVar1);
    param_1 = (longdouble)fscale((longdouble)1 + lVar2,lVar1);
  }
  return param_1;
}



float exp10f(float __x)

{
  longdouble lVar1;
  longdouble lVar2;
  
  if ((ushort)((ushort)(__x != 0.0) << 10 | (ushort)(__x == 0.0) << 0xe) == 0x500) {
    if (0.0 <= __x) {
      lVar1 = (longdouble)__x;
    }
    else {
      lVar1 = (longdouble)0;
    }
  }
  else {
    lVar2 = ROUND((longdouble)__x * (longdouble)3.321928094887362);
    lVar1 = (longdouble)f2xm1((longdouble)__x * (longdouble)3.321928094887362 - lVar2);
    lVar1 = (longdouble)fscale((longdouble)1 + lVar1,lVar2);
    ffree(lVar2);
  }
  return (float)lVar1;
}



double exp10(double __x)

{
  longdouble lVar1;
  longdouble lVar2;
  
  if ((ushort)((ushort)(__x != 0.0) << 10 | (ushort)(__x == 0.0) << 0xe) == 0x500) {
    if (0.0 <= __x) {
      lVar1 = (longdouble)__x;
    }
    else {
      lVar1 = (longdouble)0;
    }
  }
  else {
    lVar2 = ROUND((longdouble)__x * (longdouble)3.321928094887362);
    lVar1 = (longdouble)f2xm1((longdouble)__x * (longdouble)3.321928094887362 - lVar2);
    lVar1 = (longdouble)fscale((longdouble)1 + lVar1,lVar2);
    ffree(lVar2);
  }
  return (double)lVar1;
}



longdouble exp10l(longdouble param_1)

{
  longdouble lVar1;
  longdouble lVar2;
  
  lVar1 = (longdouble)0;
  if ((ushort)((ushort)(param_1 != lVar1) << 10 | (ushort)(param_1 == lVar1) << 0xe) == 0x500) {
    if (param_1 < lVar1) {
      param_1 = (longdouble)0;
    }
  }
  else {
    lVar1 = ROUND(param_1 * (longdouble)3.321928094887362);
    lVar2 = (longdouble)f2xm1(param_1 * (longdouble)3.321928094887362 - lVar1);
    param_1 = (longdouble)fscale((longdouble)1 + lVar2,lVar1);
    ffree(lVar1);
  }
  return param_1;
}



float fmodf(float __x,float __y)

{
  ushort in_FPUStatusWord;
  
  do {
    __x = __x - (__x / __y) * __y;
  } while ((in_FPUStatusWord & 0x400) != 0);
  return __x;
}



double fmod(double __x,double __y)

{
  ushort in_FPUStatusWord;
  
  do {
    __x = __x - (__x / __y) * __y;
  } while ((in_FPUStatusWord & 0x400) != 0);
  return __x;
}



longdouble fmodl(longdouble param_1,longdouble param_2)

{
  ushort in_FPUStatusWord;
  
  do {
    param_1 = param_1 - (param_1 / param_2) * param_2;
  } while ((in_FPUStatusWord & 0x400) != 0);
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x0804f0aa)
// WARNING: Removing unreachable block (ram,0x0804f0b0)
// WARNING: Removing unreachable block (ram,0x0804f0c0)
// WARNING: Removing unreachable block (ram,0x0804f0c4)
// WARNING: Removing unreachable block (ram,0x0804f0c6)
// WARNING: Removing unreachable block (ram,0x0804f0b8)
// WARNING: Removing unreachable block (ram,0x0804f0ba)

float hypotf(float __x,float __y)

{
  return SQRT(__y * __y + __x * __x);
}



// WARNING: Removing unreachable block (ram,0x0804f113)
// WARNING: Removing unreachable block (ram,0x0804f119)
// WARNING: Removing unreachable block (ram,0x0804f129)
// WARNING: Removing unreachable block (ram,0x0804f121)
// WARNING: Removing unreachable block (ram,0x0804f123)

double hypot(double __x,double __y)

{
  return SQRT(__y * __y + __x * __x);
}



// WARNING: Removing unreachable block (ram,0x0804f161)
// WARNING: Removing unreachable block (ram,0x0804f167)
// WARNING: Removing unreachable block (ram,0x0804f177)
// WARNING: Removing unreachable block (ram,0x0804f17b)
// WARNING: Removing unreachable block (ram,0x0804f17d)
// WARNING: Removing unreachable block (ram,0x0804f16f)
// WARNING: Removing unreachable block (ram,0x0804f171)

longdouble hypotl(longdouble param_1,longdouble param_2)

{
  return SQRT(param_2 * param_2 + param_1 * param_1);
}



float logf(float __x)

{
  return __x * 0.6931472;
}



double log(double __x)

{
  return __x * 0.6931471805599453;
}



longdouble logl(longdouble param_1)

{
  return (longdouble)0.6931471805599453 * param_1;
}



float log10f(float __x)

{
  return __x * 0.30103;
}



double log10(double __x)

{
  return __x * 0.3010299956639812;
}



longdouble log10l(longdouble param_1)

{
  return (longdouble)0.3010299956639812 * param_1;
}



float remainderf(float __x,float __y)

{
  ushort in_FPUStatusWord;
  
  do {
    __x = __x - (__x / __y) * __y;
  } while ((in_FPUStatusWord & 0x400) != 0);
  return __x;
}



double remainder(double __x,double __y)

{
  ushort in_FPUStatusWord;
  
  do {
    __x = __x - (__x / __y) * __y;
  } while ((in_FPUStatusWord & 0x400) != 0);
  return __x;
}



longdouble remainderl(longdouble param_1,longdouble param_2)

{
  ushort in_FPUStatusWord;
  
  do {
    param_1 = param_1 - (param_1 / param_2) * param_2;
  } while ((in_FPUStatusWord & 0x400) != 0);
  return param_1;
}



float dremf(float __x,float __y)

{
  ushort in_FPUStatusWord;
  
  do {
    __x = __x - (__x / __y) * __y;
  } while ((in_FPUStatusWord & 0x400) != 0);
  return __x;
}



double drem(double __x,double __y)

{
  ushort in_FPUStatusWord;
  
  do {
    __x = __x - (__x / __y) * __y;
  } while ((in_FPUStatusWord & 0x400) != 0);
  return __x;
}



longdouble dreml(longdouble param_1,longdouble param_2)

{
  ushort in_FPUStatusWord;
  
  do {
    param_1 = param_1 - (param_1 / param_2) * param_2;
  } while ((in_FPUStatusWord & 0x400) != 0);
  return param_1;
}



float sqrtf(float __x)

{
  return SQRT(__x);
}



double sqrt(double __x)

{
  return SQRT(__x);
}



longdouble sqrtl(longdouble param_1)

{
  return SQRT(param_1);
}



float atanf(float __x)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)fpatan((longdouble)__x,(longdouble)1);
  return (float)lVar1;
}



double atan(double __x)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)fpatan((longdouble)__x,(longdouble)1);
  return (double)lVar1;
}



unkbyte10 atanl(unkbyte10 param_1)

{
  unkbyte10 Var1;
  
  Var1 = fpatan(param_1,(longdouble)1);
  return Var1;
}



float ceilf(float __x)

{
  return ROUND(__x);
}



double ceil(double __x)

{
  return ROUND(__x);
}



longdouble ceill(longdouble param_1)

{
  return ROUND(param_1);
}



// WARNING: Restarted to delay deadcode elimination for space: stack

float copysignf(float __x,float __y)

{
  if (0.0 <= __y) {
    __x = (float)((uint)__x & 0x7fffffff);
  }
  else {
    __x = (float)((uint)__x | 0x80000000);
  }
  return __x;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

double copysign(double __x,double __y)

{
  undefined8 local_24;
  
  local_24 = __x;
  if (0.0 <= __y) {
                    // WARNING: Ignoring partial resolution of indirect
    local_24._4_4_ = __x._4_4_ & 0x7fffffff;
  }
  else {
                    // WARNING: Ignoring partial resolution of indirect
    local_24._4_4_ = __x._4_4_ | 0x80000000;
  }
  return local_24;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

unkbyte10 copysignl(unkbyte10 param_1)

{
  return param_1;
}



float cosf(float __x)

{
  ushort in_FPUStatusWord;
  longdouble lVar1;
  longdouble lVar2;
  
  lVar1 = (longdouble)fcos((longdouble)__x);
  if ((in_FPUStatusWord & 0x400) != 0) {
    lVar2 = (longdouble)3.141592653589793 + (longdouble)3.141592653589793;
    do {
      lVar1 = lVar1 - (lVar1 / lVar2) * lVar2;
    } while ((in_FPUStatusWord & 0x400) != 0);
    lVar1 = (longdouble)fcos(lVar1);
  }
  return (float)lVar1;
}



double cos(double __x)

{
  ushort in_FPUStatusWord;
  longdouble lVar1;
  longdouble lVar2;
  
  lVar1 = (longdouble)fcos((longdouble)__x);
  if ((in_FPUStatusWord & 0x400) != 0) {
    lVar2 = (longdouble)3.141592653589793 + (longdouble)3.141592653589793;
    do {
      lVar1 = lVar1 - (lVar1 / lVar2) * lVar2;
    } while ((in_FPUStatusWord & 0x400) != 0);
    lVar1 = (longdouble)fcos(lVar1);
  }
  return (double)lVar1;
}



longdouble cosl(unkbyte10 param_1)

{
  ushort in_FPUStatusWord;
  longdouble lVar1;
  longdouble lVar2;
  
  lVar1 = (longdouble)fcos(param_1);
  if ((in_FPUStatusWord & 0x400) != 0) {
    lVar2 = (longdouble)3.141592653589793 + (longdouble)3.141592653589793;
    do {
      lVar1 = lVar1 - (lVar1 / lVar2) * lVar2;
    } while ((in_FPUStatusWord & 0x400) != 0);
    lVar1 = (longdouble)fcos(lVar1);
  }
  return lVar1;
}



float sinf(float __x)

{
  ushort in_FPUStatusWord;
  longdouble lVar1;
  longdouble lVar2;
  
  lVar1 = (longdouble)fsin((longdouble)__x);
  if ((in_FPUStatusWord & 0x400) != 0) {
    lVar2 = (longdouble)3.141592653589793 + (longdouble)3.141592653589793;
    do {
      lVar1 = lVar1 - (lVar1 / lVar2) * lVar2;
    } while ((in_FPUStatusWord & 0x400) != 0);
    lVar1 = (longdouble)fsin(lVar1);
  }
  return (float)lVar1;
}



double sin(double __x)

{
  ushort in_FPUStatusWord;
  longdouble lVar1;
  longdouble lVar2;
  
  lVar1 = (longdouble)fsin((longdouble)__x);
  if ((in_FPUStatusWord & 0x400) != 0) {
    lVar2 = (longdouble)3.141592653589793 + (longdouble)3.141592653589793;
    do {
      lVar1 = lVar1 - (lVar1 / lVar2) * lVar2;
    } while ((in_FPUStatusWord & 0x400) != 0);
    lVar1 = (longdouble)fsin(lVar1);
  }
  return (double)lVar1;
}



longdouble sinl(unkbyte10 param_1)

{
  ushort in_FPUStatusWord;
  longdouble lVar1;
  longdouble lVar2;
  
  lVar1 = (longdouble)fsin(param_1);
  if ((in_FPUStatusWord & 0x400) != 0) {
    lVar2 = (longdouble)3.141592653589793 + (longdouble)3.141592653589793;
    do {
      lVar1 = lVar1 - (lVar1 / lVar2) * lVar2;
    } while ((in_FPUStatusWord & 0x400) != 0);
    lVar1 = (longdouble)fsin(lVar1);
  }
  return lVar1;
}



float tanf(float __x)

{
  ushort in_FPUStatusWord;
  longdouble lVar1;
  longdouble lVar2;
  
  lVar1 = (longdouble)fptan((longdouble)__x);
  lVar2 = (longdouble)1;
  if ((in_FPUStatusWord & 0x400) != 0) {
    lVar1 = (longdouble)3.141592653589793 + (longdouble)3.141592653589793;
    do {
      lVar2 = lVar2 - (lVar2 / lVar1) * lVar1;
    } while ((in_FPUStatusWord & 0x400) != 0);
    lVar1 = (longdouble)fptan(lVar2);
  }
  ffree((longdouble)1);
  return (float)lVar1;
}



double tan(double __x)

{
  ushort in_FPUStatusWord;
  longdouble lVar1;
  longdouble lVar2;
  
  lVar1 = (longdouble)fptan((longdouble)__x);
  lVar2 = (longdouble)1;
  if ((in_FPUStatusWord & 0x400) != 0) {
    lVar1 = (longdouble)3.141592653589793 + (longdouble)3.141592653589793;
    do {
      lVar2 = lVar2 - (lVar2 / lVar1) * lVar1;
    } while ((in_FPUStatusWord & 0x400) != 0);
    lVar1 = (longdouble)fptan(lVar2);
  }
  ffree((longdouble)1);
  return (double)lVar1;
}



unkbyte10 tanl(unkbyte10 param_1)

{
  ushort in_FPUStatusWord;
  unkbyte10 Var1;
  longdouble lVar2;
  longdouble lVar3;
  
  Var1 = fptan(param_1);
  lVar3 = (longdouble)1;
  if ((in_FPUStatusWord & 0x400) != 0) {
    lVar2 = (longdouble)3.141592653589793 + (longdouble)3.141592653589793;
    do {
      lVar3 = lVar3 - (lVar3 / lVar2) * lVar2;
    } while ((in_FPUStatusWord & 0x400) != 0);
    Var1 = fptan(lVar3);
  }
  ffree((longdouble)1);
  return Var1;
}



float exp2f(float __x)

{
  longdouble lVar1;
  longdouble lVar2;
  
  lVar1 = (longdouble)__x;
  lVar2 = (longdouble)0;
  if ((byte)((byte)((ushort)((ushort)(lVar1 != lVar2) << 10) >> 8) |
            (byte)((ushort)((ushort)(lVar1 == lVar2) << 0xe) >> 8)) == 5) {
    if (lVar1 < lVar2) {
      ffree(lVar1);
      lVar1 = (longdouble)0;
    }
  }
  else {
    lVar2 = (longdouble)f2xm1(lVar1 - ROUND(lVar1));
    lVar1 = (longdouble)fscale((longdouble)1 + lVar2,ROUND(lVar1));
  }
  return (float)lVar1;
}



double exp2(double __x)

{
  longdouble lVar1;
  longdouble lVar2;
  
  lVar1 = (longdouble)__x;
  lVar2 = (longdouble)0;
  if ((byte)((byte)((ushort)((ushort)(lVar1 != lVar2) << 10) >> 8) |
            (byte)((ushort)((ushort)(lVar1 == lVar2) << 0xe) >> 8)) == 5) {
    if (lVar1 < lVar2) {
      ffree(lVar1);
      lVar1 = (longdouble)0;
    }
  }
  else {
    lVar2 = (longdouble)f2xm1(lVar1 - ROUND(lVar1));
    lVar1 = (longdouble)fscale((longdouble)1 + lVar2,ROUND(lVar1));
  }
  return (double)lVar1;
}



longdouble exp2l(longdouble param_1)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)0;
  if ((byte)((byte)((ushort)((ushort)(param_1 != lVar1) << 10) >> 8) |
            (byte)((ushort)((ushort)(param_1 == lVar1) << 0xe) >> 8)) == 5) {
    if (param_1 < lVar1) {
      ffree(param_1);
      param_1 = (longdouble)0;
    }
  }
  else {
    lVar1 = (longdouble)f2xm1(param_1 - ROUND(param_1));
    param_1 = (longdouble)fscale((longdouble)1 + lVar1,ROUND(param_1));
  }
  return param_1;
}



float fdimf(float __x,float __y)

{
  return ABS(__y - __x);
}



double fdim(double __x,double __y)

{
  return ABS(__y - __x);
}



longdouble fdiml(longdouble param_1,longdouble param_2)

{
  return ABS(param_2 - param_1);
}



float floorf(float __x)

{
  return ROUND(__x);
}



double floor(double __x)

{
  return ROUND(__x);
}



longdouble floorl(longdouble param_1)

{
  return ROUND(param_1);
}



float fmaf(float __x,float __y,float __z)

{
  return __x * __y + __z;
}



double fma(double __x,double __y,double __z)

{
  return __x * __y + __z;
}



longdouble fmal(longdouble param_1,longdouble param_2,longdouble param_3)

{
  return param_3 + param_2 * param_1;
}



float fmaxf(float __x,float __y)

{
  if (((byte)((byte)((ushort)((ushort)(__y != 0.0) << 10) >> 8) |
             (byte)((ushort)((ushort)(__y == 0.0) << 0xe) >> 8)) != 1) && (__x < __y)) {
    __x = __y;
  }
  return __x;
}



double fmax(double __x,double __y)

{
  if (((byte)((byte)((ushort)((ushort)(__y != 0.0) << 10) >> 8) |
             (byte)((ushort)((ushort)(__y == 0.0) << 0xe) >> 8)) != 1) && (__x < __y)) {
    __x = __y;
  }
  return __x;
}



void fmaxl(void)

{
  return;
}



float fminf(float __x,float __y)

{
  if (((byte)((byte)((ushort)((ushort)(__y != 0.0) << 10) >> 8) |
             (byte)((ushort)((ushort)(__y == 0.0) << 0xe) >> 8)) == 1) || (__x <= __y)) {
    __y = __x;
  }
  return __y;
}



double fmin(double __x,double __y)

{
  if (((byte)((byte)((ushort)((ushort)(__y != 0.0) << 10) >> 8) |
             (byte)((ushort)((ushort)(__y == 0.0) << 0xe) >> 8)) == 1) || (__x <= __y)) {
    __y = __x;
  }
  return __y;
}



void fminl(void)

{
  return;
}



float frexpf(float __x,int *__exponent)

{
  longdouble lVar1;
  
  *__exponent = 0;
  lVar1 = (longdouble)__x;
  if ((byte)(lVar1 < (longdouble)0 | (byte)((ushort)((ushort)(lVar1 == (longdouble)0) << 0xe) >> 8))
      != 0x40) {
    *__exponent = (int)ROUND(lVar1);
    lVar1 = (longdouble)fscale(lVar1,-(longdouble)1);
    *__exponent = *__exponent + 1;
  }
  return (float)lVar1;
}



double frexp(double __x,int *__exponent)

{
  longdouble lVar1;
  
  *__exponent = 0;
  lVar1 = (longdouble)__x;
  if ((byte)(lVar1 < (longdouble)0 | (byte)((ushort)((ushort)(lVar1 == (longdouble)0) << 0xe) >> 8))
      != 0x40) {
    *__exponent = (int)ROUND(lVar1);
    lVar1 = (longdouble)fscale(lVar1,-(longdouble)1);
    *__exponent = *__exponent + 1;
  }
  return (double)lVar1;
}



longdouble frexpl(longdouble param_1,int *param_2)

{
  *param_2 = 0;
  if ((byte)(param_1 < (longdouble)0 |
            (byte)((ushort)((ushort)(param_1 == (longdouble)0) << 0xe) >> 8)) != 0x40) {
    *param_2 = (int)ROUND(param_1);
    param_1 = (longdouble)fscale(param_1,-(longdouble)1);
    *param_2 = *param_2 + 1;
  }
  return param_1;
}



int ilogbf(float __x)

{
  return (int)ROUND(__x);
}



int ilogb(double __x)

{
  return (int)ROUND(__x);
}



int ilogbl(longdouble param_1)

{
  return (int)ROUND(param_1);
}



longlong llrintf(float __x)

{
  return (longlong)ROUND(__x);
}



longlong llrint(double __x)

{
  return (longlong)ROUND(__x);
}



longlong llrintl(longdouble param_1)

{
  return (longlong)ROUND(param_1);
}



float log1pf(float __x)

{
  return (__x + 1.0) * 0.6931472;
}



double log1p(double __x)

{
  return (__x + 1.0) * 0.6931471805599453;
}



longdouble log1pl(longdouble param_1)

{
  return (longdouble)0.6931471805599453 * ((longdouble)1 + param_1);
}



float log2f(float __x)

{
  return __x * 1.0;
}



double log2(double __x)

{
  return __x * 1.0;
}



longdouble log2l(longdouble param_1)

{
  return (longdouble)1 * param_1;
}



float logbf(float __x)

{
  return __x;
}



double logb(double __x)

{
  return __x;
}



unkbyte10 logbl(unkbyte10 param_1)

{
  return param_1;
}



long lrintf(float __x)

{
  return (int)ROUND(__x);
}



long lrint(double __x)

{
  return (int)ROUND(__x);
}



int lrintl(longdouble param_1)

{
  return (int)ROUND(param_1);
}



float rintf(float __x)

{
  return ROUND(__x);
}



double rint(double __x)

{
  return ROUND(__x);
}



longdouble rintl(longdouble param_1)

{
  return ROUND(param_1);
}



float scalbnf(float __x,int __n)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)fscale((longdouble)__x,(longdouble)__n);
  return (float)lVar1;
}



double scalbn(double __x,int __n)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)fscale((longdouble)__x,(longdouble)__n);
  return (double)lVar1;
}



unkbyte10 scalbnl(unkbyte10 param_1,int param_2)

{
  unkbyte10 Var1;
  
  Var1 = fscale(param_1,(longdouble)param_2);
  return Var1;
}



float ldexpf(float __x,int __exponent)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)fscale((longdouble)__x,(longdouble)__exponent);
  return (float)lVar1;
}



double ldexp(double __x,int __exponent)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)fscale((longdouble)__x,(longdouble)__exponent);
  return (double)lVar1;
}



unkbyte10 ldexpl(unkbyte10 param_1,int param_2)

{
  unkbyte10 Var1;
  
  Var1 = fscale(param_1,(longdouble)param_2);
  return Var1;
}



float significandf(float __x)

{
  return __x;
}



double significand(double __x)

{
  return __x;
}



unkbyte10 significandl(unkbyte10 param_1)

{
  return param_1;
}



void sincosf(float __x,float *__sinx,float *__cosx)

{
  longdouble lVar1;
  longdouble lVar2;
  
  lVar1 = (longdouble)fcos((longdouble)__x);
  lVar2 = (longdouble)fsin((longdouble)__x);
  *__cosx = (float)lVar1;
  *__sinx = (float)lVar2;
  return;
}



void sincos(double __x,double *__sinx,double *__cosx)

{
  longdouble lVar1;
  longdouble lVar2;
  
  lVar1 = (longdouble)fcos((longdouble)__x);
  lVar2 = (longdouble)fsin((longdouble)__x);
  *__cosx = (double)lVar1;
  *__sinx = (double)lVar2;
  return;
}



void sincosl(unkbyte10 param_1,unkbyte10 *param_2,unkbyte10 *param_3)

{
  unkbyte10 Var1;
  unkbyte10 Var2;
  
  Var1 = fcos(param_1);
  Var2 = fsin(param_1);
  *param_3 = Var1;
  *param_2 = Var2;
  return;
}



float truncf(float __x)

{
  return ROUND(__x);
}



double trunc(double __x)

{
  return ROUND(__x);
}



longdouble truncl(longdouble param_1)

{
  return ROUND(param_1);
}



float fabsf(float __x)

{
  return ABS(__x);
}



double fabs(double __x)

{
  return ABS(__x);
}



longdouble fabsl(longdouble param_1)

{
  return ABS(param_1);
}



longdouble frac(void)

{
  longdouble in_ST0;
  
  return in_ST0 - ROUND(in_ST0);
}



unkbyte10 Lpow2(void)

{
  unkbyte10 Var1;
  longdouble lVar2;
  unkbyte10 extraout_ST1;
  
  Var1 = frac();
  lVar2 = (longdouble)f2xm1(Var1);
  Var1 = fscale((longdouble)1 + lVar2,extraout_ST1);
  return Var1;
}



float powf(float __x,float __y)

{
  longdouble in_ST0;
  longdouble lVar1;
  unkbyte10 Var2;
  unkbyte10 extraout_ST1;
  longdouble extraout_ST1_00;
  
  if (((ushort)((ushort)(__x != 0.0) << 10 | (ushort)(__x == 0.0) << 0xe) == 0x500) ||
     ((byte)(__x < 1.0 | (byte)((ushort)((ushort)(__x == 1.0) << 0xe) >> 8)) == 0x40)) {
    lVar1 = (longdouble)__x;
  }
  else if ((byte)(__x < 10.0 | (byte)((ushort)((ushort)(__x == 10.0) << 0xe) >> 8)) == 0x40) {
    Var2 = frac();
    lVar1 = (longdouble)f2xm1(Var2);
    lVar1 = (longdouble)fscale((longdouble)1 + lVar1,extraout_ST1);
  }
  else {
    lVar1 = (longdouble)__y;
    if (__x <= 0.0) {
      if (__x < 0.0) {
        lVar1 = (longdouble)frac();
        if (lVar1 == (longdouble)0) {
          lVar1 = (longdouble)Lpow2();
          if (((int)ROUND(extraout_ST1_00) & 1U) != 0) {
            lVar1 = -lVar1;
          }
          goto LAB_0804fe0d;
        }
        lVar1 = -in_ST0;
      }
      else {
        if ((longdouble)0 < lVar1) {
          lVar1 = (longdouble)0;
          goto LAB_0804fe0d;
        }
        if ((longdouble)0 <= lVar1) {
          lVar1 = -(longdouble)1;
        }
      }
      lVar1 = SQRT(lVar1);
    }
    else {
      lVar1 = (longdouble)Lpow2();
    }
  }
LAB_0804fe0d:
  return (float)lVar1;
}



double pow(double __x,double __y)

{
  longdouble in_ST0;
  longdouble lVar1;
  unkbyte10 Var2;
  unkbyte10 extraout_ST1;
  longdouble extraout_ST1_00;
  
  if (((ushort)((ushort)(__x != 0.0) << 10 | (ushort)(__x == 0.0) << 0xe) == 0x500) ||
     ((byte)(__x < 1.0 | (byte)((ushort)((ushort)(__x == 1.0) << 0xe) >> 8)) == 0x40)) {
    lVar1 = (longdouble)__x;
  }
  else if ((byte)(__x < 10.0 | (byte)((ushort)((ushort)(__x == 10.0) << 0xe) >> 8)) == 0x40) {
    Var2 = frac();
    lVar1 = (longdouble)f2xm1(Var2);
    lVar1 = (longdouble)fscale((longdouble)1 + lVar1,extraout_ST1);
  }
  else {
    lVar1 = (longdouble)__y;
    if (__x <= 0.0) {
      if (__x < 0.0) {
        lVar1 = (longdouble)frac();
        if (lVar1 == (longdouble)0) {
          lVar1 = (longdouble)Lpow2();
          if (((int)ROUND(extraout_ST1_00) & 1U) != 0) {
            lVar1 = -lVar1;
          }
          goto LAB_0804feef;
        }
        lVar1 = -in_ST0;
      }
      else {
        if ((longdouble)0 < lVar1) {
          lVar1 = (longdouble)0;
          goto LAB_0804feef;
        }
        if ((longdouble)0 <= lVar1) {
          lVar1 = -(longdouble)1;
        }
      }
      lVar1 = SQRT(lVar1);
    }
    else {
      lVar1 = (longdouble)Lpow2();
    }
  }
LAB_0804feef:
  return (double)lVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longdouble powl(longdouble param_1,longdouble param_2)

{
  longdouble in_ST0;
  unkbyte10 Var1;
  longdouble lVar2;
  unkbyte10 extraout_ST1;
  longdouble extraout_ST1_00;
  
  if (((ushort)((ushort)(param_1 != (longdouble)0) << 10 | (ushort)(param_1 == (longdouble)0) << 0xe
               ) != 0x500) &&
     ((byte)(param_1 < (longdouble)1 |
            (byte)((ushort)((ushort)(param_1 == (longdouble)1) << 0xe) >> 8)) != 0x40)) {
    if ((byte)(param_1 < _DAT_08052660 |
              (byte)((ushort)((ushort)(param_1 == _DAT_08052660) << 0xe) >> 8)) == 0x40) {
      Var1 = frac();
      lVar2 = (longdouble)f2xm1(Var1);
      param_1 = (longdouble)fscale((longdouble)1 + lVar2,extraout_ST1);
    }
    else if (param_1 <= (longdouble)0) {
      if (param_1 < (longdouble)0) {
        lVar2 = (longdouble)frac();
        if (lVar2 == (longdouble)0) {
          lVar2 = (longdouble)Lpow2();
          if (((int)ROUND(extraout_ST1_00) & 1U) == 0) {
            return lVar2;
          }
          return -lVar2;
        }
        param_2 = -in_ST0;
      }
      else {
        if ((longdouble)0 < param_2) {
          return (longdouble)0;
        }
        if ((longdouble)0 <= param_2) {
          param_2 = -(longdouble)1;
        }
      }
      param_1 = SQRT(param_2);
    }
    else {
      param_1 = (longdouble)Lpow2();
    }
  }
                    // WARNING: Read-only address (ram,0x08052660) is written
  return param_1;
}



float pow10f(float __x)

{
  longdouble lVar1;
  unkbyte10 Var2;
  unkbyte10 extraout_ST1;
  
  if ((ushort)((ushort)(__x != 0.0) << 10 | (ushort)(__x == 0.0) << 0xe) == 0x500) {
    lVar1 = (longdouble)__x;
  }
  else {
    Var2 = frac();
    lVar1 = (longdouble)f2xm1(Var2);
    lVar1 = (longdouble)fscale((longdouble)1 + lVar1,extraout_ST1);
  }
  return (float)lVar1;
}



double pow10(double __x)

{
  longdouble lVar1;
  unkbyte10 Var2;
  unkbyte10 extraout_ST1;
  
  if ((ushort)((ushort)(__x != 0.0) << 10 | (ushort)(__x == 0.0) << 0xe) == 0x500) {
    lVar1 = (longdouble)__x;
  }
  else {
    Var2 = frac();
    lVar1 = (longdouble)f2xm1(Var2);
    lVar1 = (longdouble)fscale((longdouble)1 + lVar1,extraout_ST1);
  }
  return (double)lVar1;
}



longdouble pow10l(longdouble param_1)

{
  unkbyte10 Var1;
  longdouble lVar2;
  unkbyte10 extraout_ST1;
  
  if ((ushort)((ushort)(param_1 != (longdouble)0) << 10 | (ushort)(param_1 == (longdouble)0) << 0xe)
      != 0x500) {
    Var1 = frac();
    lVar2 = (longdouble)f2xm1(Var1);
    param_1 = (longdouble)fscale((longdouble)1 + lVar2,extraout_ST1);
  }
  return param_1;
}



float cbrtf(float __x)

{
  float fVar1;
  
  if ((ushort)((ushort)(__x != 0.0) << 10 | (ushort)(__x == 0.0) << 0xe) != 0x500) {
    if (__x < 0.0) {
      fVar1 = powf(-__x,0.3333333);
      __x = -fVar1;
    }
    else {
      __x = powf(__x,0.3333333);
    }
  }
  return __x;
}



double cbrt(double __x)

{
  double dVar1;
  
  if ((ushort)((ushort)(__x != 0.0) << 10 | (ushort)(__x == 0.0) << 0xe) != 0x500) {
    if (__x < 0.0) {
      dVar1 = pow(-__x,0.3333333333333333);
      __x = -dVar1;
    }
    else {
      __x = pow(__x,0.3333333333333333);
    }
  }
  return __x;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

unkbyte10 cbrtl(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  unkbyte10 Var1;
  longdouble lVar2;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined2 uStack_c;
  undefined2 uStack_a;
  
  lVar2 = (longdouble)CONCAT28((undefined2)param_3,CONCAT44(param_2,param_1));
  local_14 = param_1;
  uStack_10 = param_2;
  uStack_c = (undefined2)param_3;
  if ((ushort)((ushort)(lVar2 != (longdouble)0) << 10 | (ushort)(lVar2 == (longdouble)0) << 0xe) !=
      0x500) {
    if ((longdouble)CONCAT28((undefined2)param_3,CONCAT44(param_2,param_1)) < (longdouble)0) {
      lVar2 = -(longdouble)CONCAT28((undefined2)param_3,CONCAT44(param_2,param_1));
      local_14 = SUB104(lVar2,0);
      uStack_10 = (undefined4)((unkuint10)lVar2 >> 0x20);
      uStack_c = (undefined2)((unkuint10)lVar2 >> 0x40);
      lVar2 = (longdouble)powl(local_14,uStack_10,CONCAT22(uStack_a,uStack_c),_DAT_08052680);
      lVar2 = -lVar2;
      local_14 = SUB104(lVar2,0);
      uStack_10 = (undefined4)((unkuint10)lVar2 >> 0x20);
      uStack_c = (undefined2)((unkuint10)lVar2 >> 0x40);
    }
    else {
      Var1 = powl(param_1,param_2,param_3,_DAT_08052680);
      local_14 = (undefined4)Var1;
      uStack_10 = (undefined4)((unkuint10)Var1 >> 0x20);
      uStack_c = (undefined2)((unkuint10)Var1 >> 0x40);
    }
  }
  return CONCAT28(uStack_c,CONCAT44(uStack_10,local_14));
}



float acoshf(float __x)

{
  return (__x + SQRT(__x * __x - 1.0)) * 0.6931472;
}



double acosh(double __x)

{
  return (__x + SQRT(__x * __x - 1.0)) * 0.6931471805599453;
}



longdouble acoshl(longdouble param_1)

{
  return (longdouble)0.6931471805599453 * (SQRT(param_1 * param_1 - (longdouble)1) + param_1);
}



float asinhf(float __x)

{
  float fVar1;
  float local_8;
  
  fVar1 = SQRT(__x * __x + 1.0);
  if (__x <= 0.0) {
    local_8 = -((fVar1 - __x) * 0.6931472);
  }
  else {
    local_8 = (__x + fVar1) * 0.6931472;
  }
  return local_8;
}



double asinh(double __x)

{
  double dVar1;
  double local_c;
  
  dVar1 = SQRT(__x * __x + 1.0);
  if (__x <= 0.0) {
    local_c = -((dVar1 - __x) * 0.6931471805599453);
  }
  else {
    local_c = (__x + dVar1) * 0.6931471805599453;
  }
  return local_c;
}



unkbyte10 asinhl(longdouble param_1)

{
  longdouble lVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined2 uStack_8;
  
  lVar1 = SQRT((longdouble)1 + param_1 * param_1);
  if (param_1 <= (longdouble)0) {
    lVar1 = -((longdouble)0.6931471805599453 * (lVar1 - param_1));
    local_20 = SUB104(lVar1,0);
    uStack_1c = (undefined4)((unkuint10)lVar1 >> 0x20);
    uStack_18 = (undefined2)((unkuint10)lVar1 >> 0x40);
    local_10 = local_20;
    uStack_c = uStack_1c;
    uStack_8 = uStack_18;
  }
  else {
    lVar1 = (longdouble)0.6931471805599453 * (lVar1 + param_1);
    local_10 = SUB104(lVar1,0);
    uStack_c = (undefined4)((unkuint10)lVar1 >> 0x20);
    uStack_8 = (undefined2)((unkuint10)lVar1 >> 0x40);
  }
  return CONCAT28(uStack_8,CONCAT44(uStack_c,local_10));
}



float atanhf(float __x)

{
  return (((__x + 1.0) / (1.0 - __x)) * 0.6931472) / 2.0;
}



double atanh(double __x)

{
  return (((__x + 1.0) / (1.0 - __x)) * 0.6931471805599453) / 2.0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longdouble atanhl(longdouble param_1)

{
  return ((longdouble)0.6931471805599453 * (((longdouble)1 + param_1) / ((longdouble)1 - param_1)))
         / _DAT_080526a0;
}



float coshf(float __x)

{
  longdouble lVar1;
  longdouble lVar2;
  float local_10;
  
  local_10 = ABS(__x);
  if ((ushort)((ushort)(local_10 != 0.0) << 10 | (ushort)(local_10 == 0.0) << 0xe) == 0x500) {
    if (local_10 < 0.0) {
      local_10 = 0.0;
    }
  }
  else {
    lVar1 = ROUND((longdouble)local_10 * (longdouble)1.442695040888963);
    lVar2 = (longdouble)f2xm1((longdouble)local_10 * (longdouble)1.442695040888963 - lVar1);
    lVar1 = (longdouble)fscale((longdouble)1 + lVar2,lVar1);
    local_10 = (float)lVar1;
  }
  return (1.0 / local_10 + local_10) / 2.0;
}



double cosh(double __x)

{
  longdouble lVar1;
  longdouble lVar2;
  double local_14;
  
  local_14 = ABS(__x);
  if ((ushort)((ushort)(local_14 != 0.0) << 10 | (ushort)(local_14 == 0.0) << 0xe) == 0x500) {
    if (local_14 < 0.0) {
      local_14 = 0.0;
    }
  }
  else {
    lVar1 = ROUND((longdouble)local_14 * (longdouble)1.442695040888963);
    lVar2 = (longdouble)f2xm1((longdouble)local_14 * (longdouble)1.442695040888963 - lVar1);
    lVar1 = (longdouble)fscale((longdouble)1 + lVar2,lVar1);
    local_14 = (double)lVar1;
  }
  return (1.0 / local_14 + local_14) / 2.0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longdouble coshl(longdouble param_1)

{
  longdouble lVar1;
  longdouble lVar2;
  longdouble local_14;
  
  local_14 = ABS(param_1);
  lVar1 = (longdouble)0;
  if ((ushort)((ushort)(local_14 != lVar1) << 10 | (ushort)(local_14 == lVar1) << 0xe) == 0x500) {
    if (local_14 < lVar1) {
      local_14 = (longdouble)0;
    }
  }
  else {
    lVar1 = ROUND(local_14 * (longdouble)1.442695040888963);
    lVar2 = (longdouble)f2xm1(local_14 * (longdouble)1.442695040888963 - lVar1);
    local_14 = (longdouble)fscale((longdouble)1 + lVar2,lVar1);
  }
  return (local_14 + (longdouble)1 / local_14) / _DAT_080526a0;
}



float sinhf(float __x)

{
  float fVar1;
  longdouble lVar2;
  longdouble lVar3;
  float local_20;
  float local_14;
  float local_10;
  
  if (__x < 0.0) {
    fVar1 = -__x;
    if ((ushort)((ushort)(fVar1 != 0.0) << 10 | (ushort)(fVar1 == 0.0) << 0xe) == 0x500) {
      if (0.0 <= fVar1) {
        local_14 = -__x;
      }
      else {
        local_14 = 0.0;
      }
    }
    else {
      lVar2 = ROUND(-(longdouble)__x * (longdouble)1.442695040888963);
      lVar3 = (longdouble)f2xm1(-(longdouble)__x * (longdouble)1.442695040888963 - lVar2);
      lVar2 = (longdouble)fscale((longdouble)1 + lVar3,lVar2);
      local_14 = (float)lVar2;
    }
    local_10 = 1.0 / local_14 - local_14;
  }
  else {
    if ((ushort)((ushort)(__x != 0.0) << 10 | (ushort)(__x == 0.0) << 0xe) == 0x500) {
      if (0.0 <= __x) {
        local_10 = __x;
      }
      else {
        local_10 = 0.0;
      }
    }
    else {
      lVar2 = ROUND((longdouble)__x * (longdouble)1.442695040888963);
      lVar3 = (longdouble)f2xm1((longdouble)__x * (longdouble)1.442695040888963 - lVar2);
      lVar2 = (longdouble)fscale((longdouble)1 + lVar3,lVar2);
      local_10 = (float)lVar2;
    }
    local_10 = local_10 - 1.0 / local_10;
  }
  local_20 = local_10 / 2.0;
  return local_20;
}



double sinh(double __x)

{
  double dVar1;
  longdouble lVar2;
  longdouble lVar3;
  double local_1c;
  double local_14;
  
  if (__x < 0.0) {
    dVar1 = -__x;
    if ((ushort)((ushort)(dVar1 != 0.0) << 10 | (ushort)(dVar1 == 0.0) << 0xe) == 0x500) {
      if (0.0 <= dVar1) {
        local_1c = -__x;
      }
      else {
        local_1c = 0.0;
      }
    }
    else {
      lVar2 = ROUND((longdouble)-__x * (longdouble)1.442695040888963);
      lVar3 = (longdouble)f2xm1((longdouble)-__x * (longdouble)1.442695040888963 - lVar2);
      lVar2 = (longdouble)fscale((longdouble)1 + lVar3,lVar2);
      local_1c = (double)lVar2;
    }
    local_14 = 1.0 / local_1c - local_1c;
  }
  else {
    if ((ushort)((ushort)(__x != 0.0) << 10 | (ushort)(__x == 0.0) << 0xe) == 0x500) {
      if (0.0 <= __x) {
        local_14 = __x;
      }
      else {
        local_14 = 0.0;
      }
    }
    else {
      lVar2 = ROUND((longdouble)__x * (longdouble)1.442695040888963);
      lVar3 = (longdouble)f2xm1((longdouble)__x * (longdouble)1.442695040888963 - lVar2);
      lVar2 = (longdouble)fscale((longdouble)1 + lVar3,lVar2);
      local_14 = (double)lVar2;
    }
    local_14 = local_14 - 1.0 / local_14;
  }
  return local_14 / 2.0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longdouble sinhl(longdouble param_1)

{
  longdouble lVar1;
  longdouble lVar2;
  unkbyte10 Var3;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  longdouble local_14;
  
  if (param_1 < (longdouble)0) {
    lVar2 = -param_1;
    lVar1 = (longdouble)0;
    if ((ushort)((ushort)(lVar2 != lVar1) << 10 | (ushort)(lVar2 == lVar1) << 0xe) == 0x500) {
      if (lVar1 <= lVar2) {
        param_1 = -param_1;
        local_34 = SUB104(param_1,0);
        uStack_30 = (undefined4)((unkuint10)param_1 >> 0x20);
        uStack_2c = (undefined2)((unkuint10)param_1 >> 0x40);
        local_20 = local_34;
        uStack_1c = uStack_30;
        uStack_18 = uStack_2c;
      }
      else {
        lVar1 = (longdouble)0;
        local_20 = SUB104(lVar1,0);
        uStack_1c = (undefined4)((unkuint10)lVar1 >> 0x20);
        uStack_18 = (undefined2)((unkuint10)lVar1 >> 0x40);
      }
    }
    else {
      lVar1 = ROUND(-param_1 * (longdouble)1.442695040888963);
      lVar2 = (longdouble)f2xm1(-param_1 * (longdouble)1.442695040888963 - lVar1);
      Var3 = fscale((longdouble)1 + lVar2,lVar1);
      local_20 = (undefined4)Var3;
      uStack_1c = (undefined4)((unkuint10)Var3 >> 0x20);
      uStack_18 = (undefined2)((unkuint10)Var3 >> 0x40);
    }
    local_14 = (longdouble)1 / (longdouble)CONCAT28(uStack_18,CONCAT44(uStack_1c,local_20)) -
               (longdouble)CONCAT28(uStack_18,CONCAT44(uStack_1c,local_20));
  }
  else {
    lVar1 = (longdouble)0;
    if ((ushort)((ushort)(param_1 != lVar1) << 10 | (ushort)(param_1 == lVar1) << 0xe) == 0x500) {
      if (lVar1 <= param_1) {
        local_14 = param_1;
      }
      else {
        local_14 = (longdouble)0;
      }
    }
    else {
      lVar1 = ROUND(param_1 * (longdouble)1.442695040888963);
      lVar2 = (longdouble)f2xm1(param_1 * (longdouble)1.442695040888963 - lVar1);
      local_14 = (longdouble)fscale((longdouble)1 + lVar2,lVar1);
    }
    local_14 = local_14 - (longdouble)1 / local_14;
  }
  return local_14 / _DAT_080526a0;
}



float tanhf(float __x)

{
  float fVar1;
  longdouble lVar2;
  longdouble lVar3;
  float local_c;
  
  if (__x <= 50.0) {
    if (-50.0 <= __x) {
      if ((ushort)((ushort)(__x != 0.0) << 10 | (ushort)(__x == 0.0) << 0xe) == 0x500) {
        if (0.0 <= __x) {
          local_c = __x;
        }
        else {
          local_c = 0.0;
        }
      }
      else {
        lVar2 = ROUND((longdouble)__x * (longdouble)1.442695040888963);
        lVar3 = (longdouble)f2xm1((longdouble)__x * (longdouble)1.442695040888963 - lVar2);
        lVar2 = (longdouble)fscale((longdouble)1 + lVar3,lVar2);
        local_c = (float)lVar2;
      }
      fVar1 = (local_c - 1.0 / local_c) / (local_c + 1.0 / local_c);
    }
    else {
      fVar1 = -1.0;
    }
  }
  else {
    fVar1 = 1.0;
  }
  return fVar1;
}



double tanh(double __x)

{
  double dVar1;
  longdouble lVar2;
  longdouble lVar3;
  double local_14;
  
  if (__x <= 50.0) {
    if (-50.0 <= __x) {
      if ((ushort)((ushort)(__x != 0.0) << 10 | (ushort)(__x == 0.0) << 0xe) == 0x500) {
        if (0.0 <= __x) {
          local_14 = __x;
        }
        else {
          local_14 = 0.0;
        }
      }
      else {
        lVar2 = ROUND((longdouble)__x * (longdouble)1.442695040888963);
        lVar3 = (longdouble)f2xm1((longdouble)__x * (longdouble)1.442695040888963 - lVar2);
        lVar2 = (longdouble)fscale((longdouble)1 + lVar3,lVar2);
        local_14 = (double)lVar2;
      }
      dVar1 = (local_14 - 1.0 / local_14) / (local_14 + 1.0 / local_14);
    }
    else {
      dVar1 = -1.0;
    }
  }
  else {
    dVar1 = 1.0;
  }
  return dVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longdouble tanhl(longdouble param_1)

{
  longdouble lVar1;
  longdouble lVar2;
  longdouble local_14;
  
  if (param_1 <= _DAT_080526d0) {
    if (_DAT_080526e0 <= param_1) {
      lVar1 = (longdouble)0;
      if ((ushort)((ushort)(param_1 != lVar1) << 10 | (ushort)(param_1 == lVar1) << 0xe) == 0x500) {
        if (lVar1 <= param_1) {
          local_14 = param_1;
        }
        else {
          local_14 = (longdouble)0;
        }
      }
      else {
        lVar1 = ROUND(param_1 * (longdouble)1.442695040888963);
        lVar2 = (longdouble)f2xm1(param_1 * (longdouble)1.442695040888963 - lVar1);
        local_14 = (longdouble)fscale((longdouble)1 + lVar2,lVar1);
      }
      lVar1 = (local_14 - (longdouble)1 / local_14) / ((longdouble)1 / local_14 + local_14);
    }
    else {
      lVar1 = -(longdouble)1;
    }
  }
  else {
    lVar1 = (longdouble)1;
  }
  return lVar1;
}



float nearbyintf(float __x)

{
  return ROUND(__x);
}



double nearbyint(double __x)

{
  return ROUND(__x);
}



longdouble nearbyintl(longdouble param_1)

{
  return ROUND(param_1);
}



float expm1f(float __x)

{
  byte bVar1;
  longdouble lVar2;
  longdouble lVar3;
  unkbyte10 Var4;
  
  lVar2 = (longdouble)__x;
  lVar3 = (longdouble)0;
  bVar1 = (byte)((ushort)((ushort)(lVar2 != lVar3) << 10) >> 8) |
          (byte)((ushort)((ushort)(lVar2 == lVar3) << 0xe) >> 8);
  if (bVar1 != 0x40) {
    if (bVar1 == 5) {
      if (lVar2 < lVar3) {
        ffree(lVar2);
        lVar2 = -(longdouble)1;
      }
    }
    else {
      lVar3 = ROUND((longdouble)1.442695040888963 * lVar2);
      Var4 = f2xm1((longdouble)1.442695040888963 * lVar2 - lVar3);
      lVar2 = (longdouble)fscale(Var4,lVar3);
      lVar3 = (longdouble)fscale((longdouble)1,lVar3);
      lVar2 = lVar2 - ((longdouble)1 - lVar3);
    }
  }
  return (float)lVar2;
}



double expm1(double __x)

{
  byte bVar1;
  longdouble lVar2;
  longdouble lVar3;
  unkbyte10 Var4;
  
  lVar2 = (longdouble)__x;
  lVar3 = (longdouble)0;
  bVar1 = (byte)((ushort)((ushort)(lVar2 != lVar3) << 10) >> 8) |
          (byte)((ushort)((ushort)(lVar2 == lVar3) << 0xe) >> 8);
  if (bVar1 != 0x40) {
    if (bVar1 == 5) {
      if (lVar2 < lVar3) {
        ffree(lVar2);
        lVar2 = -(longdouble)1;
      }
    }
    else {
      lVar3 = ROUND((longdouble)1.442695040888963 * lVar2);
      Var4 = f2xm1((longdouble)1.442695040888963 * lVar2 - lVar3);
      lVar2 = (longdouble)fscale(Var4,lVar3);
      lVar3 = (longdouble)fscale((longdouble)1,lVar3);
      lVar2 = lVar2 - ((longdouble)1 - lVar3);
    }
  }
  return (double)lVar2;
}



longdouble expm1l(longdouble param_1)

{
  byte bVar1;
  longdouble lVar2;
  unkbyte10 Var3;
  
  lVar2 = (longdouble)0;
  bVar1 = (byte)((ushort)((ushort)(param_1 != lVar2) << 10) >> 8) |
          (byte)((ushort)((ushort)(param_1 == lVar2) << 0xe) >> 8);
  if (bVar1 != 0x40) {
    if (bVar1 == 5) {
      if (param_1 < lVar2) {
        ffree(param_1);
        param_1 = -(longdouble)1;
      }
    }
    else {
      lVar2 = ROUND((longdouble)1.442695040888963 * param_1);
      Var3 = f2xm1((longdouble)1.442695040888963 * param_1 - lVar2);
      param_1 = (longdouble)fscale(Var3,lVar2);
      lVar2 = (longdouble)fscale((longdouble)1,lVar2);
      param_1 = param_1 - ((longdouble)1 - lVar2);
    }
  }
  return param_1;
}



float scalbf(float __x,float __n)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  double dVar4;
  
  if (((ushort)((ushort)(__x != 0.0) << 10 | (ushort)(__x == 0.0) << 0xe) == 0x100) ||
     ((ushort)((ushort)(__n != 0.0) << 10 | (ushort)(__n == 0.0) << 0xe) == 0x100)) {
    __x = __x * __n;
  }
  else {
    uVar3 = (ushort)(__x != 0.0) << 10 | (ushort)(__x == 0.0) << 0xe;
    if ((uVar3 == 0x400) || (uVar3 == 0x4000)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    uVar3 = (ushort)(__n != 0.0) << 10 | (ushort)(__n == 0.0) << 0xe;
    if ((uVar3 == 0x400) || (uVar3 == 0x4000)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      dVar4 = rint((double)__n);
      if ((byte)(dVar4 < (double)__n | (byte)((ushort)((ushort)(dVar4 == (double)__n) << 0xe) >> 8))
          == 0x40) {
        if (__n <= 65000.0) {
          if (-65000.0 <= __n) {
            dVar4 = scalbn((double)__x,(int)ROUND(__n));
            __x = (float)dVar4;
          }
          else {
            dVar4 = scalbn((double)__x,-65000);
            __x = (float)dVar4;
          }
        }
        else {
          dVar4 = scalbn((double)__x,65000);
          __x = (float)dVar4;
        }
      }
      else {
        __x = -NAN;
      }
    }
    else if (__n <= 0.0) {
      if ((byte)(__x < 0.0 | (byte)((ushort)((ushort)(__x == 0.0) << 0xe) >> 8)) != 0x40) {
        if (bVar2) {
          __x = -__x / __n;
        }
        else {
          __x = -NAN;
        }
      }
    }
    else {
      __x = __x * __n;
    }
  }
  return __x;
}



double scalb(double __x,double __n)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  double dVar4;
  
  if (((ushort)((ushort)(__x != 0.0) << 10 | (ushort)(__x == 0.0) << 0xe) == 0x100) ||
     ((ushort)((ushort)(__n != 0.0) << 10 | (ushort)(__n == 0.0) << 0xe) == 0x100)) {
    __x = __x * __n;
  }
  else {
    uVar3 = (ushort)(__x != 0.0) << 10 | (ushort)(__x == 0.0) << 0xe;
    if ((uVar3 == 0x400) || (uVar3 == 0x4000)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    uVar3 = (ushort)(__n != 0.0) << 10 | (ushort)(__n == 0.0) << 0xe;
    if ((uVar3 == 0x400) || (uVar3 == 0x4000)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      dVar4 = rint(__n);
      if ((byte)(__n < dVar4 | (byte)((ushort)((ushort)(__n == dVar4) << 0xe) >> 8)) == 0x40) {
        if (__n <= 65000.0) {
          if (-65000.0 <= __n) {
            __x = scalbn(__x,(int)ROUND(__n));
          }
          else {
            __x = scalbn(__x,-65000);
          }
        }
        else {
          __x = scalbn(__x,65000);
        }
      }
      else {
        __x = -NAN;
      }
    }
    else if (__n <= 0.0) {
      if ((byte)(__x < 0.0 | (byte)((ushort)((ushort)(__x == 0.0) << 0xe) >> 8)) != 0x40) {
        if (bVar2) {
          __x = -__x / __n;
        }
        else {
          __x = -NAN;
        }
      }
    }
    else {
      __x = __x * __n;
    }
  }
  return __x;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longdouble scalbl(longdouble param_1,longdouble param_2)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  double dVar4;
  
  if (((ushort)((ushort)(param_1 != (longdouble)0) << 10 | (ushort)(param_1 == (longdouble)0) << 0xe
               ) == 0x100) ||
     ((ushort)((ushort)(param_2 != (longdouble)0) << 10 | (ushort)(param_2 == (longdouble)0) << 0xe)
      == 0x100)) {
    param_1 = param_2 * param_1;
  }
  else {
    uVar3 = (ushort)(param_1 != (longdouble)0) << 10 | (ushort)(param_1 == (longdouble)0) << 0xe;
    if ((uVar3 == 0x400) || (uVar3 == 0x4000)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    uVar3 = (ushort)(param_2 != (longdouble)0) << 10 | (ushort)(param_2 == (longdouble)0) << 0xe;
    if ((uVar3 == 0x400) || (uVar3 == 0x4000)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      dVar4 = rint((double)param_2);
      if ((byte)(param_2 < (longdouble)dVar4 |
                (byte)((ushort)((ushort)(param_2 == (longdouble)dVar4) << 0xe) >> 8)) == 0x40) {
        if (param_2 <= _DAT_08052710) {
          if (_DAT_08052720 <= param_2) {
            dVar4 = scalbn((double)param_1,(int)ROUND(param_2));
            param_1 = (longdouble)dVar4;
          }
          else {
            dVar4 = scalbn((double)param_1,-65000);
            param_1 = (longdouble)dVar4;
          }
        }
        else {
          dVar4 = scalbn((double)param_1,65000);
          param_1 = (longdouble)dVar4;
        }
      }
      else {
        param_1 = (longdouble)0 / (longdouble)0;
      }
    }
    else if (param_2 <= (longdouble)0) {
      if ((byte)(param_1 < (longdouble)0 |
                (byte)((ushort)((ushort)(param_1 == (longdouble)0) << 0xe) >> 8)) != 0x40) {
        if (bVar2) {
          param_1 = -param_1 / param_2;
        }
        else {
          param_1 = (longdouble)0 / (longdouble)0;
        }
      }
    }
    else {
      param_1 = param_2 * param_1;
    }
  }
  return param_1;
}



void __libc_csu_init(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int unaff_EBP;
  int iVar1;
  EVP_PKEY_CTX *in_stack_ffffffe4;
  
  __x86_get_pc_thunk_bp();
  _init(in_stack_ffffffe4);
  iVar1 = 0;
  do {
    (**(code **)(unaff_EBP + 0x4d22 + iVar1 * 4))(param_1,param_2,param_3);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 1);
  return;
}



void __libc_csu_fini(void)

{
  return;
}



void __x86_get_pc_thunk_bp(void)

{
  return;
}



// WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void _fini(void)

{
  return;
}


