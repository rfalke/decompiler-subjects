typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    ulong;
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

typedef ulong size_t;

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




// WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_08048350(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int abs(int __x)

{
  int iVar1;
  
  iVar1 = abs(__x);
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



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
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



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



void main(undefined4 param_1,char **param_2)

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
  
  iVar1 = basic_1_reg_in_block(param_1);
  iVar2 = basic_2_reg_in_prev_block(param_1);
  iVar3 = basic_3_reg_cond_overwrite(param_1);
  iVar4 = basic_4_reg_cond_change(param_1);
  iVar5 = basic_5_reg_different_values(param_1);
  iVar6 = basic_6_reg_overwrite_in_block(param_1);
  iVar7 = intermediate_1_mem_in_block(param_1);
  iVar8 = intermediate_2_mem_in_prev_block(param_1);
  iVar9 = intermediate_3_mem_cond_overwrite(param_1);
  iVar10 = intermediate_4_mem_cond_change(param_1);
  iVar11 = intermediate_5_mem_different_values(param_1);
  iVar12 = intermediate_6_mem_overwrite_in_block(param_1);
  iVar13 = intermediate_10_subregs();
  iVar14 = advanced_1_writes_can_be_omitted_for_non_mem_access_calls(param_1);
  iVar15 = advanced_2_mem_values_can_be_propagated_for_non_write_calls(*param_2);
  iVar16 = advanced_3_value_range_analysis(param_1);
                    // WARNING: Subroutine does not return
  exit(iVar1 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
       iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + (int)**param_2);
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



// WARNING: This is an inlined function

void __x86_get_pc_thunk_bx(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x080484df)
// WARNING: Removing unreachable block (ram,0x080484e8)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x08048518)
// WARNING: Removing unreachable block (ram,0x08048521)

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



// WARNING: Removing unreachable block (ram,0x08048579)
// WARNING: Removing unreachable block (ram,0x08048570)

void frame_dummy(void)

{
  register_tm_clones();
  return;
}



// WARNING: Removing unreachable block (ram,0x0804861e)
// WARNING: Removing unreachable block (ram,0x08048636)
// WARNING: Removing unreachable block (ram,0x08048655)

undefined4 advanced_3_value_range_analysis(int param_1)

{
  int iVar1;
  
  if (10 < param_1) {
    if (param_1 < 0xb) {
      iVar1 = 0x61;
    }
    else {
      iVar1 = 0x62;
    }
    putchar(iVar1);
    if (param_1 < 0xb) {
      iVar1 = 0x42;
    }
    else {
      iVar1 = 0x41;
    }
    putchar(iVar1);
    if (param_1 < 10) {
      iVar1 = 0x30;
    }
    else {
      iVar1 = 0x31;
    }
    putchar(iVar1);
    if (8 < param_1) {
      puts(">10");
    }
  }
  if (param_1 == 0x2a) {
    putchar(0x62);
    putchar(0x41);
    putchar(0x30);
    puts("= 42");
  }
  return 0;
}



undefined4 basic_1_reg_in_block(int param_1)

{
  putchar(param_1 + 0x30);
  return 0;
}



undefined4 basic_2_reg_in_prev_block(int param_1)

{
  putchar(param_1 + 0x31);
  return 0;
}



undefined4 basic_3_reg_cond_overwrite(int param_1)

{
  int iVar1;
  
  iVar1 = 0x41;
  if (param_1 != 0x2a) {
    iVar1 = 0x61;
  }
  putchar(param_1 + iVar1);
  return 0;
}



undefined4 basic_4_reg_cond_change(int param_1)

{
  int iVar1;
  
  iVar1 = 0x41;
  if (param_1 != 0x2a) {
    iVar1 = 0x61;
  }
  putchar(param_1 + iVar1);
  return 0;
}



undefined4 basic_5_reg_different_values(int param_1)

{
  int iVar1;
  
  if (param_1 == 0x2a) {
    iVar1 = 0x61;
  }
  else {
    iVar1 = 0x41;
  }
  putchar(param_1 + iVar1);
  return 0;
}



undefined4 basic_6_reg_overwrite_in_block(int param_1)

{
  putchar(param_1 + 0x30);
  return 0;
}



undefined4 intermediate_1_mem_in_block(int param_1)

{
  global_var = 0x30;
  putchar(param_1 + 0x30);
  return 0;
}



undefined4 intermediate_2_mem_in_prev_block(int param_1)

{
  global_var = 0x30;
  putchar(param_1 + 0x31);
  return 0;
}



undefined4 intermediate_3_mem_cond_overwrite(int param_1)

{
  global_var = 0x41;
  if (param_1 != 0x2a) {
    global_var = 0x61;
  }
  putchar(param_1 + global_var);
  return 0;
}



undefined4 intermediate_4_mem_cond_change(int param_1)

{
  global_var = 0x41;
  if (param_1 != 0x2a) {
    global_var = 0x61;
  }
  putchar(param_1 + global_var);
  return 0;
}



undefined4 intermediate_5_mem_different_values(int param_1)

{
  if (param_1 == 0x2a) {
    global_var = 0x61;
  }
  else {
    global_var = 0x41;
  }
  putchar(param_1 + global_var);
  return 0;
}



undefined4 intermediate_6_mem_overwrite_in_block(int param_1)

{
  global_var = 0x30;
  putchar(param_1 + 0x30);
  return 0;
}



undefined4 intermediate_10_subregs(void)

{
  putchar((CONCAT11(global_char1 * '\x02',global_char2 << 2) & 0xff) +
          (uint)(byte)(global_char1 * '\x02'));
  return 0;
}



int advanced_1_writes_can_be_omitted_for_non_mem_access_calls(int param_1)

{
  int iVar1;
  
  global_var = 1;
  iVar1 = abs(param_1);
  global_var = 2;
  return iVar1 + 2;
}



int advanced_2_mem_values_can_be_propagated_for_non_write_calls(char *param_1)

{
  size_t sVar1;
  
  global_var = 1;
  sVar1 = strlen(param_1);
  return sVar1 + global_var;
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


