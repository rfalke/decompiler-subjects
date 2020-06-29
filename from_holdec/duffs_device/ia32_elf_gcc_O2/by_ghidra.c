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


// WARNING! conflicting data type names: /DWARF/stddef.h/size_t - /stddef.h/size_t

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



// WARNING: Unknown calling convention yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



void _start(void)

{
  __libc_start_main(main);
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



void copy1_four_times(short *to,short *from,int count)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = count + 3;
  if (count + 3 < 0) {
    iVar5 = count + 6;
  }
  uVar6 = (uint)(count >> 0x1f) >> 0x1e;
  uVar2 = count + uVar6 & 3;
  iVar3 = uVar2 - uVar6;
  iVar5 = iVar5 >> 2;
  if (iVar3 == 1) goto LAB_08048430;
  if (iVar3 < 2) {
    if (uVar2 == uVar6) goto LAB_08048443;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 != 3) {
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
      iVar5 = iVar5 + -1;
      *to = *from;
      if (iVar5 < 1) break;
      to = to + 1;
      from = from + 1;
LAB_08048443:
      psVar4 = from + 1;
      *to = *from;
      from = from + 2;
      to[1] = *psVar4;
      to = to + 2;
    }
  }
  return;
}



void copy1_eight_times(short *to,short *from,int count)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = count + 7;
  if (count + 7 < 0) {
    iVar2 = count + 0xe;
  }
  uVar3 = (uint)(count >> 0x1f) >> 0x1d;
  iVar2 = iVar2 >> 3;
  switch((count + uVar3 & 7) - uVar3) {
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
    else {
      if (iVar2 != 3) {
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



int main(int argc,char **argv)

{
  int iVar1;
  short *from;
  short *to;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  
  bVar4 = 0;
  bVar2 = &stack0xffffffe8 < (undefined *)0x18;
  bVar3 = (undefined *)register0x00000010 == (undefined *)0x30;
  from = (short *)malloc(200);
  to = (short *)malloc(200);
  copy1_four_times(to,from,100);
  copy1_eight_times(to,from,100);
  copy2_four_times(to,from,100);
  copy2_eight_times(to,from,100);
  iVar1 = 200;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar2 = *(byte *)from < *(byte *)to;
    bVar3 = *(byte *)from == *(byte *)to;
    from = (short *)((int)from + (uint)bVar4 * -2 + 1);
    to = (short *)((int)to + (uint)bVar4 * -2 + 1);
  } while (bVar3);
  return (int)(char)((!bVar2 && !bVar3) - bVar2);
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
  EVP_PKEY_CTX *local_2c;
  
  _init(local_2c);
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
    ppcVar2 = (code **)&__CTOR_LIST__;
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


