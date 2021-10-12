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
    char _unused2[15];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct _IO_FILE FILE;

typedef long __time_t;

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef __time_t time_t;

typedef struct Elf32_Dyn_x86 Elf32_Dyn_x86, *PElf32_Dyn_x86;

typedef enum Elf32_DynTag_x86 {
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRENT=1879040003,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELSZ=1610612752,
    DT_AUDIT=1879047932,
    DT_AUXILIARY=2147483645,
    DT_BIND_NOW=24,
    DT_CHECKSUM=1879047672,
    DT_CONFIG=1879047930,
    DT_DEBUG=21,
    DT_DEPAUDIT=1879047931,
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
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_REL=17,
    DT_RELA=7,
    DT_RELACOUNT=1879048185,
    DT_RELAENT=9,
    DT_RELASZ=8,
    DT_RELCOUNT=1879048186,
    DT_RELENT=19,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_RELRSZ=35,
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
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
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

typedef struct Gnu_BuildId Gnu_BuildId, *PGnu_BuildId;

struct Gnu_BuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Build-id vendor name
    byte description[20]; // Build-id value
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



void FUN_08048390(void)

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



// WARNING: Unknown calling convention yet parameter storage is locked

void exit(int __status)

{
                    // WARNING: Subroutine does not return
  exit(__status);
}



// WARNING: Unknown calling convention yet parameter storage is locked

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



// WARNING: Unknown calling convention yet parameter storage is locked

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = putchar(__c);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = fputs(__s,__stream);
  return iVar1;
}



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



int main(undefined4 param_1,char **param_2)

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
  
  iVar1 = basic_1_multiple_calling_conventions_3_ints(param_1);
  iVar2 = basic_2_calling_varargs(param_1);
  iVar3 = basic_3_accessing_all_registers();
  iVar4 = basic_4_tail_call(param_1);
  iVar5 = intermediate_1_accessing_varargs();
  iVar6 = intermediate_2_use_uncommon_registers_for_parameters(param_1);
  iVar7 = intermediate_3_calling_noreturn();
  iVar8 = intermediate_4_asm_instr_with_multiple_results(1,1);
  iVar9 = intermediate_5_pushs_in_different_blocks(param_1);
  iVar10 = advanced_1_pass_in_flags_reg(param_1);
  iVar11 = advanced_2_return_in_flags_reg(param_1);
  iVar12 = advanced_3_uneven_stack(param_1);
  return iVar12 + iVar1 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 +
                  iVar11 + (int)**param_2;
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



// WARNING: Removing unreachable block (ram,0x0804850f)
// WARNING: Removing unreachable block (ram,0x08048518)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x08048548)
// WARNING: Removing unreachable block (ram,0x08048551)

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



// WARNING: Removing unreachable block (ram,0x080485a9)

void frame_dummy(void)

{
  register_tm_clones();
  return;
}



int sum3_cdecl(int param_1,int param_2,int param_3)

{
  return param_1 + param_2 * 2 + 1 + param_3 * 3;
}



int __regparm3 sum3_fastcall(undefined4 param_1_00,int param_2,int param_3,int param_1)

{
  return param_3 + param_2 * 2 + 2 + param_1 * 3;
}



int sum3_thiscall(int param_1,int param_2)

{
  int in_ECX;
  
  return in_ECX + param_1 * 2 + 3 + param_2 * 3;
}



int sum3_ms_abi(int param_1,int param_2,int param_3)

{
  return param_1 + param_2 * 2 + 4 + param_3 * 3;
}



int sum3_sysv_abi(int param_1,int param_2,int param_3)

{
  return param_1 + param_2 * 2 + 5 + param_3 * 3;
}



int sum3_stdcall(int param_1,int param_2,int param_3)

{
  return param_1 + param_2 * 2 + 6 + param_3 * 3;
}



undefined4 basic_1_multiple_calling_conventions_3_ints(undefined4 param_1)

{
  time_t tVar1;
  int iVar2;
  
  tVar1 = time((time_t *)0x0);
  iVar2 = sum3_cdecl(param_1,tVar1,0x2a);
  if (0x7b < iVar2) {
    puts("cdecl");
  }
  iVar2 = sum3_fastcall(0x2a);
  if (0x7b < iVar2) {
    puts("fastcall");
  }
  iVar2 = sum3_thiscall(tVar1,0x2a);
  if (0x7b < iVar2) {
    puts("thiscall");
  }
  iVar2 = sum3_ms_abi(param_1,tVar1,0x2a);
  if (0x7b < iVar2) {
    puts("ms_abi");
  }
  iVar2 = sum3_sysv_abi(param_1,tVar1,0x2a);
  if (0x7b < iVar2) {
    puts("sysv_abi");
  }
  iVar2 = sum3_stdcall(param_1,tVar1,0x2a);
  if (0x7b < iVar2) {
    puts("stdcall");
  }
  return 0;
}



undefined4 a_vararg(void)

{
  puts("a_vararg called");
  return 0;
}



undefined4 basic_2_calling_varargs(void)

{
  a_vararg();
  a_vararg(1);
  a_vararg(1,2);
  a_vararg(1,2,3);
  a_vararg(1,2,3,4);
  return 0;
}



void basic_4_tail_call(void)

{
  time((time_t *)0x0);
  return;
}



int crude_printf(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int __c;
  size_t sVar3;
  int iVar4;
  char **ppcVar5;
  
  __c = (int)*param_1;
  if (*param_1 == '\0') {
    iVar4 = 0;
  }
  else {
    ppcVar5 = (char **)&stack0x00000008;
    iVar4 = 0;
    do {
      while ((char)__c != '%') {
        iVar4 = iVar4 + 1;
        putchar(__c);
        pcVar1 = param_1 + 1;
        __c = (int)*pcVar1;
        param_1 = param_1 + 1;
        if (*pcVar1 == '\0') {
          return iVar4;
        }
      }
      cVar2 = param_1[1];
      if (cVar2 == '%') {
        iVar4 = iVar4 + 1;
        putchar(0x25);
      }
      else {
        if (cVar2 == 'c') {
          iVar4 = iVar4 + 1;
          putchar((int)*(char *)ppcVar5);
          ppcVar5 = ppcVar5 + 1;
        }
        else {
          if (cVar2 == 's') {
            pcVar1 = *ppcVar5;
            fputs(pcVar1,stdout);
            sVar3 = strlen(pcVar1);
            iVar4 = iVar4 + sVar3;
            ppcVar5 = ppcVar5 + 1;
          }
          else {
            puts("Not implemented");
          }
        }
      }
      pcVar1 = param_1 + 2;
      __c = (int)*pcVar1;
      param_1 = param_1 + 2;
    } while (*pcVar1 != '\0');
  }
  return iVar4;
}



int even_more_crude(undefined4 param_1,char param_2,char *param_3)

{
  size_t sVar1;
  
  putchar((int)param_2);
  fputs(param_3,stdout);
  sVar1 = strlen(param_3);
  return sVar1 + 1;
}



int intermediate_1_accessing_varargs(void)

{
  int iVar1;
  
  even_more_crude("low: a %c b %s c\n",0x30,"hello");
  iVar1 = crude_printf("higher: a %c b %s c\n",0x30,"hello");
  return iVar1 + 0x2a;
}



int intermediate_4_asm_instr_with_multiple_results(int param_1)

{
  int *piVar1;
  
  if (param_1 == 0) {
    piVar1 = (int *)cpuid_basic_info(0);
  }
  else {
    if (param_1 == 1) {
      piVar1 = (int *)cpuid_Version_info(1);
    }
    else {
      if (param_1 == 2) {
        piVar1 = (int *)cpuid_cache_tlb_info(2);
      }
      else {
        if (param_1 == 3) {
          piVar1 = (int *)cpuid_serial_info(3);
        }
        else {
          if (param_1 == 4) {
            piVar1 = (int *)cpuid_Deterministic_Cache_Parameters_info(4);
          }
          else {
            if (param_1 == 5) {
              piVar1 = (int *)cpuid_MONITOR_MWAIT_Features_info(5);
            }
            else {
              if (param_1 == 6) {
                piVar1 = (int *)cpuid_Thermal_Power_Management_info(6);
              }
              else {
                if (param_1 == 7) {
                  piVar1 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
                }
                else {
                  if (param_1 == 9) {
                    piVar1 = (int *)cpuid_Direct_Cache_Access_info(9);
                  }
                  else {
                    if (param_1 == 10) {
                      piVar1 = (int *)cpuid_Architectural_Performance_Monitoring_info(10);
                    }
                    else {
                      if (param_1 == 0xb) {
                        piVar1 = (int *)cpuid_Extended_Topology_info(0xb);
                      }
                      else {
                        if (param_1 == 0xd) {
                          piVar1 = (int *)cpuid_Processor_Extended_States_info(0xd);
                        }
                        else {
                          if (param_1 == 0xf) {
                            piVar1 = (int *)cpuid_Quality_of_Service_info(0xf);
                          }
                          else {
                            if (param_1 == -0x7ffffffe) {
                              piVar1 = (int *)cpuid_brand_part1_info(0x80000002);
                            }
                            else {
                              if (param_1 == -0x7ffffffd) {
                                piVar1 = (int *)cpuid_brand_part2_info(0x80000003);
                              }
                              else {
                                if (param_1 == -0x7ffffffc) {
                                  piVar1 = (int *)cpuid_brand_part3_info(0x80000004);
                                }
                                else {
                                  piVar1 = (int *)cpuid(param_1);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return *piVar1 + piVar1[3] * 3 + piVar1[1] * 2 + piVar1[2] * 4;
}



int basic_3_accessing_all_registers(void)

{
  int in_ECX;
  int unaff_EBP;
  
  return in_ECX + unaff_EBP * 8;
}



int sum3_uncommon(void)

{
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  
  return unaff_ESI + unaff_EDI * 2 + unaff_EBP * 3 + 10;
}



undefined4 intermediate_2_use_uncommon_registers_for_parameters(void)

{
  int iVar1;
  
  time((time_t *)0x0);
  iVar1 = sum3_uncommon();
  if (0x7b < iVar1) {
    puts("un common");
  }
  return 0;
}



void intermediate_3_calling_noreturn(void)

{
  puts("before");
                    // WARNING: Subroutine does not return
  exit(1);
}



undefined4 intermediate_5_pushs_in_different_blocks(void)

{
  int in_stack_00000010;
  char *__s;
  
  if (in_stack_00000010 == 0x2a) {
    __s = "is 42";
  }
  else {
    __s = "it not 42";
  }
  puts(__s);
  return 0;
}



undefined4 advanced_1_pass_in_flags_reg_helper(void)

{
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (!in_ZF && in_OF == in_SF) {
    puts("is above 2");
  }
  return 0;
}



undefined4 advanced_1_pass_in_flags_reg(void)

{
  advanced_1_pass_in_flags_reg_helper();
  return 0;
}



undefined4 advanced_2_return_in_flags_reg_helper(void)

{
  return 0;
}



undefined4 advanced_2_return_in_flags_reg(void)

{
  undefined in_ZF;
  char in_SF;
  char in_OF;
  
  advanced_2_return_in_flags_reg_helper();
  if (!(bool)in_ZF && in_OF == in_SF) {
    puts("is above 2");
  }
  return 0;
}



undefined4 advanced_3_uneven_stack(undefined4 param_1,undefined4 param_2,int param_3)

{
  char **ppcVar1;
  char *pcStack12;
  char *pcStack8;
  
  if (param_3 == 0x2a) {
    pcStack8 = "you should not see this";
    ppcVar1 = &pcStack12;
    pcStack12 = "is 42";
  }
  else {
    ppcVar1 = &pcStack8;
    pcStack8 = "it not 42";
  }
  ppcVar1[-1] = (char *)0x8048aba;
  puts(*ppcVar1);
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


