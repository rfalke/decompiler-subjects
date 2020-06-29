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

typedef long __time_t;

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




// WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_08048330(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = time(__timer);
  return tVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

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



// WARNING: Unknown calling convention yet parameter storage is locked

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = putchar(__c);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int rand(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1;
}



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



int main(uint param_1,char **param_2)

{
  basic_1_if(param_1);
  basic_2_if_else(param_1);
  basic_3_if_elseif(param_1);
  basic_4_if_elseif_else(param_1);
  basic_5_head_controlled_loop(param_1);
  basic_6_tail_controlled_loop(param_1);
  basic_7_for_loop();
  basic_8_forever_loop(param_1);
  basic_9_dead_block();
  intermediate_1_short_circuit_and((uint)(4 < (int)param_1),~param_1 & 1);
  intermediate_2_short_circuit_or((uint)(4 < (int)param_1),~param_1 & 1);
  intermediate_10_loop_with_one_break(param_1);
  intermediate_11_loop_with_two_breaks(param_1);
  intermediate_12_loop_with_break_and_block(param_1);
  intermediate_13_loop_with_one_continue(param_1);
  intermediate_14_loop_with_two_continues(param_1);
  intermediate_15_loop_with_continue_and_block(param_1);
  intermediate_16_loop_with_breaks_and_continues(param_1);
  intermediate_17_forever_loop_with_extra_statement();
  intermediate_20_nested_loops(param_1);
  intermediate_30_switch_case(param_1);
  advanced_1_loop_with_multiple_entries(param_1);
  advanced_2_loop_with_multiple_exits(param_1);
  advanced_10_irreducible(param_1);
  advanced_11_nested_loops_complex_condition(param_1);
  advanced_12_nested_if_in_loop(param_1);
  advanced_20_jump_table_on_stack(param_1);
  advanced_21_computed_jumps(param_1);
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



// WARNING: Removing unreachable block (ram,0x080484ff)
// WARNING: Removing unreachable block (ram,0x08048508)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x08048538)
// WARNING: Removing unreachable block (ram,0x08048541)

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



// WARNING: Removing unreachable block (ram,0x08048599)

void frame_dummy(void)

{
  register_tm_clones();
  return;
}



undefined4 basic_1_if(int param_1)

{
  if (param_1 != 0x2a) {
    return 0;
  }
  puts("if block");
  return 0;
}



undefined4 basic_2_if_else(int param_1)

{
  if (param_1 != 0x2a) {
    puts("else block");
    return 0;
  }
  puts("if block");
  return 0;
}



undefined4 basic_3_if_elseif(int param_1)

{
  if (param_1 == 0x2a) {
    puts("if block");
  }
  else {
    if (param_1 == 0x2b) {
      puts("else-if block");
      return 0;
    }
  }
  return 0;
}



undefined4 basic_4_if_elseif_else(int param_1)

{
  if (param_1 == 0x2a) {
    puts("if block");
  }
  else {
    if (param_1 == 0x2b) {
      puts("else-if block");
      return 0;
    }
    puts("else block");
  }
  return 0;
}



undefined4 basic_7_for_loop(void)

{
  int __c;
  int iVar1;
  
  __c = 0x30;
  do {
    iVar1 = __c + 1;
    putchar(__c);
    __c = iVar1;
  } while (iVar1 != 0x3a);
  return 0;
}



undefined4 intermediate_1_short_circuit_and(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = rand();
  if ((param_1 != 0) && (iVar1 == param_2)) {
    puts("both true");
  }
  return 0;
}



undefined4 intermediate_2_short_circuit_or(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = rand();
  if ((param_1 == 0) && (iVar1 != param_2)) {
    return 0;
  }
  puts("at least one is true");
  return 0;
}



undefined4 intermediate_10_loop_with_one_break(int param_1)

{
  time_t tVar1;
  
  while( true ) {
    puts("head");
    tVar1 = time((time_t *)0x0);
    if (tVar1 == param_1) break;
    puts("tail");
  }
  return 0;
}



undefined4 intermediate_11_loop_with_two_breaks(int param_1)

{
  time_t tVar1;
  
  if (0 < param_1) {
    do {
      puts("head");
      tVar1 = time((time_t *)0x0);
      if (tVar1 == param_1) {
        return 0;
      }
      puts("tail");
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return 0;
}



undefined4 intermediate_12_loop_with_break_and_block(int param_1)

{
  int iVar1;
  time_t tVar2;
  
  while( true ) {
    puts("head");
    tVar2 = time((time_t *)0x0);
    if (tVar2 == param_1) {
      puts("will break");
      return 0;
    }
    puts("barrier");
    iVar1 = rand();
    if (param_1 == iVar1) break;
    puts("tail");
  }
  return 0;
}



undefined4 intermediate_13_loop_with_one_continue(int param_1)

{
  time_t tVar1;
  
  if (param_1 < 0x7c) {
    return 0;
  }
  do {
    do {
      puts("head");
      tVar1 = time((time_t *)0x0);
    } while (param_1 == tVar1);
    puts("tail");
  } while( true );
}



undefined4 intermediate_14_loop_with_two_continues(int param_1)

{
  time_t tVar1;
  int iVar2;
  
  if (param_1 < 0x7c) {
    return 0;
  }
  do {
    do {
      do {
        puts("head");
        tVar1 = time((time_t *)0x0);
      } while (param_1 == tVar1);
      puts("barrier");
      iVar2 = rand();
    } while (param_1 == iVar2);
    puts("tail");
  } while( true );
}



undefined4 intermediate_15_loop_with_continue_and_block(int param_1)

{
  time_t tVar1;
  int iVar2;
  
  if (param_1 < 0x7c) {
    return 0;
  }
  do {
    do {
      while( true ) {
        puts("head");
        tVar1 = time((time_t *)0x0);
        if (param_1 != tVar1) break;
        puts("will continue");
      }
      puts("barrier");
      iVar2 = rand();
    } while (param_1 == iVar2);
    puts("tail");
  } while( true );
}



undefined4 intermediate_16_loop_with_breaks_and_continues(int param_1)

{
  time_t tVar1;
  
  while( true ) {
    do {
      puts("head");
      tVar1 = time((time_t *)0x0);
    } while (tVar1 + 1 == param_1);
    puts("after first continue");
    tVar1 = time((time_t *)0x0);
    if (param_1 == tVar1 + 2) break;
    puts("after first break");
    tVar1 = time((time_t *)0x0);
    if (param_1 != tVar1 + 3) {
      puts("after second continue");
      tVar1 = time((time_t *)0x0);
      if (param_1 == tVar1 + 4) {
        return 0;
      }
      puts("after second break; tail");
    }
  }
  return 0;
}



undefined4 intermediate_20_nested_loops(int param_1)

{
  time_t tVar1;
  int iVar2;
  
  puts("before");
  do {
    puts("outer loop");
    do {
      puts("inner loop");
      tVar1 = time((time_t *)0x0);
    } while (tVar1 != param_1);
    iVar2 = rand();
  } while (param_1 != iVar2);
  puts("after");
  return 0;
}



undefined4 intermediate_30_switch_case(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    puts("0");
    break;
  case 1:
    puts("1");
    break;
  case 2:
  case 3:
    puts("2 or 3");
    break;
  case 4:
    puts("4");
    break;
  case 5:
    puts("5");
    break;
  case 6:
    puts("6");
    break;
  case 7:
    puts("7 with fall through");
  case 8:
    puts("8");
    break;
  case 9:
    puts("9");
    break;
  default:
    puts("some other value");
  }
  puts("common exit");
  return 0;
}



undefined4 advanced_1_loop_with_multiple_entries(int param_1)

{
  if (param_1 != 0x2a) {
    if (0 < param_1) {
      do {
        param_1 = param_1 + -1;
        puts("body 1");
LAB_08048c54:
        puts("body 2");
      } while (0 < param_1);
    }
    return 0;
  }
  param_1 = 0x29;
  goto LAB_08048c54;
}



undefined4 advanced_2_loop_with_multiple_exits(int param_1)

{
  time_t tVar1;
  
  if (0 < param_1) {
    do {
      puts("body 1");
      tVar1 = time((time_t *)0x0);
      if (tVar1 == 1) {
        puts("took exit 1");
        return 0;
      }
      puts("body 2");
      tVar1 = time((time_t *)0x0);
      if (tVar1 == 2) {
        puts("took exit 2");
        return 0;
      }
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  puts("normal exit");
  return 0;
}



undefined4 advanced_10_irreducible(int param_1)

{
  time_t tVar1;
  
  puts("b1");
  tVar1 = time((time_t *)0x0);
  if (tVar1 != param_1) {
    puts("b2");
    tVar1 = time((time_t *)0x0);
    if (tVar1 == param_1 + 1) {
      puts("b4");
      goto LAB_08048d88;
    }
  }
  puts("b3");
LAB_08048d88:
  puts("b5");
  return 0;
}



undefined4 advanced_11_nested_loops_complex_condition(int param_1)

{
  time_t tVar1;
  time_t tVar2;
  
  puts("b0");
  tVar1 = time((time_t *)0x0);
  if (tVar1 == param_1) {
    do {
      puts("b2");
      while( true ) {
        puts("b3");
        tVar2 = time((time_t *)0x0);
        if (tVar2 == tVar1 + 2) break;
        tVar2 = time((time_t *)0x0);
        if (tVar2 != tVar1 + 3) goto LAB_08048de5;
      }
      puts("b1");
      tVar2 = time((time_t *)0x0);
    } while (tVar2 == tVar1 + 1);
  }
LAB_08048de5:
  puts("b9");
  return 0;
}



undefined4 advanced_12_nested_if_in_loop(int param_1)

{
  time_t tVar1;
  
  puts("b0");
  do {
    while( true ) {
      puts("b1");
      tVar1 = time((time_t *)0x0);
      if (tVar1 == param_1) break;
      puts("b3");
      tVar1 = time((time_t *)0x0);
      if (tVar1 != param_1 + 2) goto LAB_08048ee0;
    }
    puts("b2");
    tVar1 = time((time_t *)0x0);
  } while (tVar1 == param_1 + 1);
LAB_08048ee0:
  puts("b4");
  return 0;
}



undefined4 advanced_20_jump_table_on_stack(uint param_1)

{
  undefined4 uVar1;
  code *local_24 [9];
  
  local_24[0] = (code *)&LAB_08048f90;
  local_24[1] = &LAB_08049030;
  local_24[2] = &LAB_08049010;
  local_24[3] = &LAB_08048ff0;
  local_24[4] = &LAB_08048fd0;
  local_24[5] = &LAB_08048fb0;
  if (param_1 < 6) {
                    // WARNING: Could not recover jumptable at 0x08048f6c. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = (*local_24[param_1])();
    return uVar1;
  }
  puts("is something else");
  return 0;
}



undefined4 advanced_21_computed_jumps(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  puts("start");
  if (2 < param_1) {
    puts("is something else");
    return 0;
  }
  if (param_1 != 0) {
    iVar1 = 0x18;
    if (param_1 == 2) {
      iVar1 = 0x38;
    }
                    // WARNING: Could not recover jumptable at 0x08049090. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar2 = (*(code *)(iVar1 + 0x8049098))();
    return uVar2;
  }
  puts("is 0");
  return 0;
}



undefined4 basic_5_head_controlled_loop(int param_1)

{
  puts("before");
  while (param_1 != 0x2a) {
    param_1 = param_1 + 1;
    puts("body");
  }
  puts("after");
  return 0;
}



undefined4 basic_6_tail_controlled_loop(int param_1)

{
  puts("before");
  do {
    param_1 = param_1 + 1;
    puts("body");
  } while (param_1 != 0x2a);
  puts("after");
  return 0;
}



undefined4 basic_8_forever_loop(int param_1)

{
  if (param_1 != 0x2a) {
    return 0;
  }
  do {
    puts("loop body");
  } while( true );
}



undefined4 basic_9_dead_block(void)

{
  puts("entry");
  puts("exit");
  return 0;
}



void intermediate_17_forever_loop_with_extra_statement(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
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


