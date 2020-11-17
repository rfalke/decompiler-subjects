typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
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

typedef struct Elf32_Dyn_x86 Elf32_Dyn_x86, *PElf32_Dyn_x86;

typedef enum Elf32_DynTag_x86 {
    DT_INIT_ARRAY=25,
    DT_CONFIG=1879047930,
    DT_RELASZ=8,
    DT_INIT=12,
    DT_HASH=4,
    DT_NULL=0,
    DT_GNU_CONFLICT=1879047928,
    DT_FLAGS=30,
    DT_AUXILIARY=2147483645,
    DT_GNU_HASH=1879047925,
    DT_DEBUG=21,
    DT_RELCOUNT=1879048186,
    DT_RELR=36,
    DT_FEATURE_1=1879047676,
    DT_FILTER=2147483647,
    DT_RELENT=19,
    DT_REL=17,
    DT_DEPAUDIT=1879047931,
    DT_RUNPATH=29,
    DT_GNU_PRELINKED=1879047669,
    DT_POSFLAG_1=1879047677,
    DT_VERDEF=1879048188,
    DT_ANDROID_RELRENT=1879040003,
    DT_MOVETAB=1879047934,
    DT_RPATH=15,
    DT_RELACOUNT=1879048185,
    DT_RELSZ=18,
    DT_SYMINSZ=1879047678,
    DT_VERNEED=1879048190,
    DT_ANDROID_RELASZ=1610612754,
    DT_FINI_ARRAY=26,
    DT_TEXTREL=22,
    DT_ANDROID_RELSZ=1610612752,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_VERNEEDNUM=1879048191,
    DT_STRTAB=5,
    DT_NEEDED=1,
    DT_PLTPADSZ=1879047673,
    DT_ANDROID_REL=1610612751,
    DT_FLAGS_1=1879048187,
    DT_ANDROID_RELR=1879040000,
    DT_SYMINFO=1879047935,
    DT_SYMTAB=6,
    DT_TLSDESC_GOT=1879047927,
    DT_JMPREL=23,
    DT_ANDROID_RELA=1610612753,
    DT_SYMINENT=1879047679,
    DT_SONAME=14,
    DT_FINI=13,
    DT_MOVEENT=1879047674,
    DT_RELRENT=37,
    DT_FINI_ARRAYSZ=28,
    DT_PREINIT_ARRAYSZ=33,
    DT_VERSYM=1879048176,
    DT_MOVESZ=1879047675,
    DT_RELAENT=9,
    DT_PLTRELSZ=2,
    DT_RELA=7,
    DT_VERDEFNUM=1879048189,
    DT_PLTREL=20,
    DT_CHECKSUM=1879047672,
    DT_TLSDESC_PLT=1879047926,
    DT_PLTPAD=1879047933,
    DT_RELRSZ=35,
    DT_BIND_NOW=24,
    DT_PREINIT_ARRAY=32,
    DT_SYMBOLIC=16,
    DT_GNU_LIBLIST=1879047929,
    DT_PLTGOT=3,
    DT_STRSZ=10,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_INIT_ARRAYSZ=27,
    DT_AUDIT=1879047932,
    DT_SYMENT=11,
    DT_ANDROID_RELRSZ=1879040001
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

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

typedef enum Elf_SectionHeaderType_x86 {
    SHT_SYMTAB=2,
    SHT_GNU_versym=1879048191,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_LIBLIST=1879048183,
    SHT_FINI_ARRAY=15,
    SHT_GROUP=17,
    SHT_CHECKSUM=1879048184,
    SHT_SHLIB=10,
    SHT_ANDROID_RELA=1610612738,
    SHT_NOBITS=8,
    SHT_GNU_HASH=1879048182,
    SHT_REL=9,
    SHT_SYMTAB_SHNDX=18,
    SHT_HASH=5,
    SHT_PROGBITS=1,
    SHT_ANDROID_REL=1610612737,
    SHT_NULL=0,
    SHT_GNU_verneed=1879048190,
    SHT_INIT_ARRAY=14,
    SHT_NOTE=7,
    SHT_PREINIT_ARRAY=16,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_SUNW_COMDAT=1879048187,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_DYNSYM=11,
    SHT_SUNW_syminfo=1879048188,
    SHT_DYNAMIC=6,
    SHT_SUNW_move=1879048186
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

typedef enum Elf_ProgramHeaderType_x86 {
    PT_GNU_STACK=1685382481,
    PT_NOTE=4,
    PT_INTERP=3,
    PT_PHDR=6,
    PT_LOAD=1,
    PT_NULL=0,
    PT_DYNAMIC=2,
    PT_SHLIB=5,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_RELRO=1685382482,
    PT_TLS=7
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



// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



undefined4 main(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = 0;
  do {
    iVar9 = 0;
    do {
      uVar1 = add(iVar10,iVar9);
      uVar2 = adc_clear(iVar10,iVar9);
      uVar3 = adc_set(iVar10,iVar9);
      uVar4 = adc_simu(iVar10,iVar9,1);
      uVar5 = adc_simu(iVar10,iVar9,0);
      if (uVar1 != uVar2) {
        printf("%3d = 0x%2x %3d = 0x%2x ->",iVar10,iVar10,iVar9,iVar9);
        puVar7 = &DAT_0804a00f;
        if ((uVar1 & 0x1000000) != 0) {
          puVar7 = &DAT_0804a00c;
        }
        puVar6 = &DAT_0804a00f;
        if ((uVar1 & 0x10000) != 0) {
          puVar6 = &DAT_0804a012;
        }
        printf("add=(%3d,%s,%s) ",uVar1 & 0xff,puVar6,puVar7);
        puVar7 = &DAT_0804a00f;
        if ((uVar2 & 0x1000000) != 0) {
          puVar7 = &DAT_0804a00c;
        }
        puVar6 = &DAT_0804a012;
        if ((uVar2 & 0x10000) == 0) {
          puVar6 = &DAT_0804a00f;
        }
        printf("adc_clear=(%3d,%s,%s)\n",uVar2 & 0xff,puVar6,puVar7);
      }
      if (uVar2 != uVar5) {
        printf("x=(%3d/0x%2x)   y=(%3d/0x%2x) ->",iVar10,iVar10,iVar9,iVar9);
        puVar7 = &DAT_0804a00f;
        if ((uVar5 & 0x1000000) != 0) {
          puVar7 = &DAT_0804a00c;
        }
        puVar6 = &DAT_0804a00f;
        if ((uVar5 & 0x10000) != 0) {
          puVar6 = &DAT_0804a012;
        }
        printf("adc_clear simu=(%3d,%s,%s) ",uVar5 & 0xff,puVar6,puVar7);
        puVar7 = &DAT_0804a00f;
        if ((uVar2 & 0x1000000) != 0) {
          puVar7 = &DAT_0804a00c;
        }
        puVar6 = &DAT_0804a012;
        if ((uVar2 & 0x10000) == 0) {
          puVar6 = &DAT_0804a00f;
        }
        printf("adc_clear=(%3d,%s,%s)\n",uVar2 & 0xff,puVar6,puVar7);
      }
      if (uVar3 != uVar4) {
        printf("x=(%3d/0x%2x)   y=(%3d/0x%2x) ->",iVar10,iVar10,iVar9,iVar9);
        puVar7 = &DAT_0804a00f;
        puVar6 = &DAT_0804a00f;
        if ((uVar1 & 0x1000000) != 0) {
          puVar6 = &DAT_0804a00c;
        }
        puVar8 = &DAT_0804a012;
        if ((uVar1 & 0x10000) != 0) {
          puVar7 = &DAT_0804a012;
        }
        printf("add=(%3d,%s,%s) ",uVar1 & 0xff,puVar7,puVar6);
        puVar7 = &DAT_0804a00f;
        if ((uVar3 & 0x1000000) != 0) {
          puVar7 = &DAT_0804a00c;
        }
        puVar6 = &DAT_0804a00f;
        if ((uVar3 & 0x10000) != 0) {
          puVar6 = &DAT_0804a012;
        }
        printf("adc_set=(%3d,%s,%s) ",uVar3 & 0xff,puVar6,puVar7);
        puVar7 = &DAT_0804a00f;
        if ((uVar4 & 0x1000000) != 0) {
          puVar7 = &DAT_0804a00c;
        }
        if ((uVar4 & 0x10000) == 0) {
          puVar8 = &DAT_0804a00f;
        }
        printf("adc_set simu=(%3d,%s,%s)\n",uVar4 & 0xff,puVar8,puVar7);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0x100);
    iVar10 = iVar10 + 1;
  } while (iVar10 != 0x100);
  return 0;
}



// WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

void _start(void)

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



// WARNING: Removing unreachable block (ram,0x0804935c)
// WARNING: Removing unreachable block (ram,0x08049365)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x080493a8)
// WARNING: Removing unreachable block (ram,0x080493b1)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_6844 == '\0') {
    deregister_tm_clones();
    completed_6844 = 1;
    return;
  }
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



bool carry(byte param_1,char param_2)

{
  return (byte)(param_2 + param_1) < param_1;
}



uint signed_carry(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_1 >> 7 & 1;
  return (param_1 + param_2 >> 7 & 1 ^ uVar1) & (uint)(((byte)(param_2 >> 7) & 1) == (byte)uVar1);
}



uint adc_simu(uint param_1,byte param_2,byte param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  bVar4 = (byte)param_1 + param_2;
  bVar2 = bVar4 + param_3;
  bVar3 = (byte)(param_1 >> 7) & 1;
  uVar1 = (uint)bVar2;
  if (((bVar2 ^ bVar4) >> 7 & param_3 >> 7 == bVar4 >> 7) !=
      ((bVar4 >> 7 ^ bVar3) & param_2 >> 7 == bVar3)) {
    uVar1 = bVar2 + 0x10000;
  }
  if (CARRY1((byte)param_1,param_2) != false || CARRY1(bVar4,param_3)) {
    uVar1 = uVar1 + 0x1000000;
  }
  return uVar1;
}



int add(byte param_1,byte param_2)

{
  return (uint)(byte)(param_1 + param_2) +
         (uint)CONCAT11(CARRY1(param_1,param_2),SCARRY1(param_1,param_2)) * 0x10000;
}



int adc_set(byte param_1,byte param_2)

{
  byte bVar1;
  
  bVar1 = param_1 + param_2;
  return (uint)(byte)(bVar1 + 1) +
         (uint)CONCAT11(CARRY1(param_1,param_2) || 0xfe < bVar1,
                        SCARRY1(param_1,param_2) != SCARRY1(bVar1,'\x01')) * 0x10000;
}



int adc_clear(byte param_1,byte param_2)

{
  return (uint)(byte)(param_1 + param_2) +
         (uint)CONCAT11(CARRY1(param_1,param_2),
                        SCARRY1(param_1,param_2) != SCARRY1(param_1 + param_2,'\0')) * 0x10000;
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


