typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
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

typedef ulong size_t;


// WARNING! conflicting data type names: /DWARF/size_t - /stddef.h/size_t

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



void FUN_080482c4(void)

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

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
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



// WARNING: Removing unreachable block (ram,0x0804836a)
// WARNING: Removing unreachable block (ram,0x08048370)

void __do_global_dtors_aux(void)

{
  if (completed_5978 == '\0') {
    completed_5978 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x080483b8)

void frame_dummy(void)

{
  return;
}



// WARNING: Unknown calling convention

void copy1_four_times(short *to,short *from,int count)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int n;
  
  iVar4 = count + 3;
  if (count + 3 < 0) {
    iVar4 = count + 6;
  }
  iVar2 = count % 4;
  iVar4 = iVar4 >> 2;
  if (iVar2 == 1) goto LAB_08048430;
  if (iVar2 < 2) {
    if (iVar2 == 0) goto LAB_08048443;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 != 3) {
        return;
      }
      sVar1 = *from;
      from = from + 1;
      *to = sVar1;
      to = to + 1;
    }
    while( true ) {
      sVar1 = *from;
      from = from + 1;
      *to = sVar1;
      to = to + 1;
LAB_08048430:
      iVar4 = iVar4 + -1;
      *to = *from;
      if (iVar4 < 1) break;
      to = to + 1;
      from = from + 1;
LAB_08048443:
      psVar3 = from + 1;
      *to = *from;
      from = from + 2;
      to[1] = *psVar3;
      to = to + 2;
    }
  }
  return;
}



// WARNING: Unknown calling convention

void copy1_eight_times(short *to,short *from,int count)

{
  short sVar1;
  int iVar2;
  int n;
  
  iVar2 = count + 7;
  if (count + 7 < 0) {
    iVar2 = count + 0xe;
  }
  iVar2 = iVar2 >> 3;
  switch(count % 8) {
  case 0:
    while( true ) {
      sVar1 = *from;
      from = from + 1;
      *to = sVar1;
      to = to + 1;
switchD_080484a8_caseD_7:
      sVar1 = *from;
      from = from + 1;
      *to = sVar1;
      to = to + 1;
switchD_080484a8_caseD_6:
      sVar1 = *from;
      from = from + 1;
      *to = sVar1;
      to = to + 1;
switchD_080484a8_caseD_5:
      sVar1 = *from;
      from = from + 1;
      *to = sVar1;
      to = to + 1;
switchD_080484a8_caseD_4:
      sVar1 = *from;
      from = from + 1;
      *to = sVar1;
      to = to + 1;
switchD_080484a8_caseD_3:
      sVar1 = *from;
      from = from + 1;
      *to = sVar1;
      to = to + 1;
switchD_080484a8_caseD_2:
      sVar1 = *from;
      from = from + 1;
      *to = sVar1;
      to = to + 1;
switchD_080484a8_caseD_1:
      iVar2 = iVar2 + -1;
      *to = *from;
      if (iVar2 < 1) break;
      to = to + 1;
      from = from + 1;
    }
    break;
  case 1:
    goto switchD_080484a8_caseD_1;
  case 2:
    goto switchD_080484a8_caseD_2;
  case 3:
    goto switchD_080484a8_caseD_3;
  case 4:
    goto switchD_080484a8_caseD_4;
  case 5:
    goto switchD_080484a8_caseD_5;
  case 6:
    goto switchD_080484a8_caseD_6;
  case 7:
    goto switchD_080484a8_caseD_7;
  }
  return;
}



// WARNING: Unknown calling convention

void copy2_four_times(short *to,short *from,int n)

{
  short sVar1;
  int iVar2;
  
  if (n < 1) {
    return;
  }
  iVar2 = 4 - n;
  do {
    if (iVar2 == 2) {
DUFF_2:
      sVar1 = *from;
      from = from + 1;
      *to = sVar1;
      to = to + 1;
    }
    else if (iVar2 != 3) {
      if (iVar2 != 1) {
        sVar1 = *from;
        from = from + 1;
        *to = sVar1;
        to = to + 1;
      }
      sVar1 = *from;
      from = from + 1;
      *to = sVar1;
      to = to + 1;
      goto DUFF_2;
    }
    iVar2 = iVar2 + 4;
    *to = *from;
    if (iVar2 == (8 - n) + (n - 4U & 0xfffffffc)) {
      return;
    }
    to = to + 1;
    from = from + 1;
  } while( true );
}



// WARNING: Unknown calling convention

void copy2_eight_times(short *to,short *from,int n)

{
  short sVar1;
  int iVar2;
  
  if (n < 1) {
    return;
  }
  iVar2 = 8 - n;
  do {
    switch(iVar2) {
    default:
      sVar1 = *from;
      from = from + 1;
      *to = sVar1;
      to = to + 1;
    case 1:
      sVar1 = *from;
      from = from + 1;
      *to = sVar1;
      to = to + 1;
    case 2:
      sVar1 = *from;
      from = from + 1;
      *to = sVar1;
      to = to + 1;
    case 3:
      sVar1 = *from;
      from = from + 1;
      *to = sVar1;
      to = to + 1;
    case 4:
      sVar1 = *from;
      from = from + 1;
      *to = sVar1;
      to = to + 1;
    case 5:
      sVar1 = *from;
      from = from + 1;
      *to = sVar1;
      to = to + 1;
    case 6:
      sVar1 = *from;
      from = from + 1;
      *to = sVar1;
      to = to + 1;
      break;
    case 7:
      break;
    }
    iVar2 = iVar2 + 8;
    *to = *from;
    if (iVar2 == (0x10 - n) + (n - 8U & 0xfffffff8)) {
      return;
    }
    to = to + 1;
    from = from + 1;
  } while( true );
}



// WARNING: Unknown calling convention

int main(int argc,char **argv)

{
  short *from;
  short *src;
  short *dest;
  int iVar1;
  undefined uVar2;
  undefined uVar3;
  byte bVar4;
  
  bVar4 = 0;
  uVar2 = &stack0xffffffe8 < (undefined *)0x18;
  uVar3 = &stack0x00000000 == (undefined *)0x30;
  from = (short *)malloc(200);
  src = (short *)malloc(200);
  copy1_four_times(src,from,100);
  copy1_eight_times(src,from,100);
  copy2_four_times(src,from,100);
  copy2_eight_times(src,from,100);
  iVar1 = 200;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    uVar2 = *(byte *)from < *(byte *)src;
    uVar3 = *(byte *)from == *(byte *)src;
    from = (short *)((int)from + (uint)bVar4 * -2 + 1);
    src = (short *)((int)src + (uint)bVar4 * -2 + 1);
  } while ((bool)uVar3);
  return (int)(char)((!(bool)uVar2 && !(bool)uVar3) - uVar2);
}



void __libc_csu_fini(void)

{
  return;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx
// WARNING: Removing unreachable block (ram,0x0804872e)
// WARNING: Removing unreachable block (ram,0x08048730)

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


