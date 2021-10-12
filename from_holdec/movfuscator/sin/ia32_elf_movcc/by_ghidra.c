typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    word;
typedef unsigned int    wchar32;
typedef long __clock_t;

typedef uint __uid_t;

typedef int __pid_t;

typedef void (* __sighandler_t)(int);

typedef struct __sigset_t __sigset_t, *P__sigset_t;

struct __sigset_t {
    ulong __val[128];
};

typedef struct sigaction sigaction, *Psigaction;

typedef union _union_1048 _union_1048, *P_union_1048;

typedef struct siginfo siginfo, *Psiginfo;

typedef struct siginfo siginfo_t;

typedef union _union_1028 _union_1028, *P_union_1028;

typedef struct _struct_1029 _struct_1029, *P_struct_1029;

typedef struct _struct_1030 _struct_1030, *P_struct_1030;

typedef struct _struct_1031 _struct_1031, *P_struct_1031;

typedef struct _struct_1032 _struct_1032, *P_struct_1032;

typedef struct _struct_1033 _struct_1033, *P_struct_1033;

typedef struct _struct_1034 _struct_1034, *P_struct_1034;

typedef union sigval sigval, *Psigval;

typedef union sigval sigval_t;

struct _struct_1034 {
    long si_band;
    int si_fd;
};

struct _struct_1033 {
    void * si_addr;
};

union sigval {
    int sival_int;
    void * sival_ptr;
};

struct _struct_1032 {
    __pid_t si_pid;
    __uid_t si_uid;
    int si_status;
    __clock_t si_utime;
    __clock_t si_stime;
};

struct _struct_1031 {
    __pid_t si_pid;
    __uid_t si_uid;
    sigval_t si_sigval;
};

struct _struct_1029 {
    __pid_t si_pid;
    __uid_t si_uid;
};

struct _struct_1030 {
    int si_tid;
    int si_overrun;
    sigval_t si_sigval;
};

union _union_1028 {
    int _pad[125];
    struct _struct_1029 _kill;
    struct _struct_1030 _timer;
    struct _struct_1031 _rt;
    struct _struct_1032 _sigchld;
    struct _struct_1033 _sigfault;
    struct _struct_1034 _sigpoll;
};

struct siginfo {
    int si_signo;
    int si_errno;
    int si_code;
    union _union_1028 _sifields;
};

union _union_1048 {
    __sighandler_t sa_handler;
    void (* sa_sigaction)(int, siginfo_t *, void *);
};

struct sigaction {
    union _union_1048 __sigaction_handler;
    struct __sigset_t sa_mask;
    int sa_flags;
    void (* sa_restorer)(void);
};

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

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
};

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
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

typedef struct Elf32_Dyn_x86 Elf32_Dyn_x86, *PElf32_Dyn_x86;

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




// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

void exit(int __status)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int iVar1;
  
  iVar1 = sigaction(__sig,__act,__oact);
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void dispatch(void)

{
                    // WARNING: Could not recover jumptable at 0x08048246. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_external)();
  return;
}


/*
Unable to decompile 'entry'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile '_start0'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'shift32RightJamming'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'shift64Right'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'shift64RightJamming'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'shift64ExtraRightJamming'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'shortShift64Left'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'shortShift96Left'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'add64'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'add96'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'sub64'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'sub96'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'mul32To64'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'mul64By32To96'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'mul64To128'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'estimateDiv64To32'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'estimateSqrt32'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'countLeadingZeros32'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'eq64'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'le64'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'lt64'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'ne64'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'float_raise'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'float32_is_nan'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'float32_is_signaling_nan'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'float32ToCommonNaN'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'commonNaNToFloat32'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'propagateFloat32NaN'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'float64_is_nan'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'float64_is_signaling_nan'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'float64ToCommonNaN'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'commonNaNToFloat64'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'propagateFloat64NaN'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'extractFloat32Frac'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'extractFloat32Exp'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'extractFloat32Sign'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'normalizeFloat32Subnormal'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'packFloat32'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'roundAndPackFloat32'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'normalizeRoundAndPackFloat32'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'extractFloat64Frac1'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'extractFloat64Frac0'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'extractFloat64Exp'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'extractFloat64Sign'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'normalizeFloat64Subnormal'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'packFloat64'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'roundAndPackFloat64'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'normalizeRoundAndPackFloat64'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'int32_to_float32'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'int32_to_float64'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'float32_to_int32'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'float32_to_int32_round_to_zero'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'float32_to_float64'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'float32_round_to_int'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'addFloat32Sigs'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'subFloat32Sigs'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'float32_add'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'float32_sub'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'float32_mul'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'float32_div'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'float32_rem'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'float32_sqrt'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'float32_eq'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'float32_le'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'float32_lt'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'float32_eq_signaling'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'float32_le_quiet'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'float32_lt_quiet'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'float64_to_int32'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'float64_to_int32_round_to_zero'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'float64_to_float32'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'float64_round_to_int'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'addFloat64Sigs'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'subFloat64Sigs'
Cause: 
Low-level Error: Flow exceeded maximum allowable instructions
*/

/*
Unable to decompile 'float64_add'
Cause: Exception while decompiling 081b6a45: process: timeout

*/

/*
Unable to decompile 'float64_sub'
Cause: Exception while decompiling 081b8fa7: process: timeout

*/

/*
Unable to decompile 'float64_mul'
Cause: Exception while decompiling 081bb509: process: timeout

*/

/*
Unable to decompile 'float64_div'
Cause: Exception while decompiling 081c92b7: process: timeout

*/

/*
Unable to decompile 'float64_rem'
Cause: Exception while decompiling 081dcf4f: process: timeout

*/

/*
Unable to decompile 'float64_sqrt'
Cause: Exception while decompiling 081f40e4: process: timeout

*/

/*
Unable to decompile 'float64_eq'
Cause: Exception while decompiling 082039ef: process: timeout

*/

/*
Unable to decompile 'float64_le'
Cause: Exception while decompiling 082098e7: process: timeout

*/

/*
Unable to decompile 'float64_lt'
Cause: Exception while decompiling 0821050f: process: timeout

*/

/*
Unable to decompile 'float64_eq_signaling'
Cause: Exception while decompiling 08216f3b: process: timeout

*/


// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void float64_le_quiet(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x14]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xbd] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x21] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = (undefined4 *)fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)R1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)R2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)D1;
  DAT_083e0574 = DAT_082374dc;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200068) + -0x200068);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_083e0574;
  *(undefined **)(&sel_data)[on] = sp;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(*(int *)(*(int *)(sp + -0x200068) + -0x200068) + -0x200068);
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + -0x200060) + -0x200060)
                                                     + -0x200060) + -0x200060) + -0x200060) +
                          -0x200060) + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  puVar2 = (undefined4 *)(&sel_data)[on];
  puVar3 = (undefined4 *)(&sel_data)[on];
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  stack_temp = (undefined4 *)0x8821c383;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880c4b60;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x83]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xc3] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x21] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  R3 = (undefined *)R0;
  R2 = 0x7ff;
  uVar5 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R0 & 0xffff] + (uint)uRam0834c4ae * 4)] + 4);
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar5 & 0xff] +
                                                     (uVar5 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[R0 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar5 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[R0 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                     (uVar5 >> 0x10) * 4) >> 8 & 0xff)]];
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x8821d3bc;
  iVar1 = b0;
  puVar4 = (uint *)(&sel_data)[b0];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + -0x200060) + -0x200060)
                                                     + -0x200060) + -0x200060) + -0x200060) +
                          -0x200060) + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  puVar2 = (undefined4 *)(&sel_data)[on];
  puVar3 = (undefined4 *)(&sel_data)[on];
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  stack_temp = (undefined4 *)0x8821ca3b;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880c4176;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x3b]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xca] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x21] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  R3 = (undefined *)R0;
  R2 = *(uint *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + -0x200060) +
                                                                      -0x200060) + -0x200060) +
                                                    -0x200060) + -0x200060) + -0x200060) + -0x200060
                         ) + -0x200060);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  puVar2 = (undefined4 *)(&sel_data)[on];
  puVar3 = (undefined4 *)(&sel_data)[on];
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  stack_temp = (undefined4 *)0x8821cea2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880c384c;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xa2]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xce] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x21] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[(uint)R3 >> 8 & 0xff][R0 >> 8 & 0xff],
                         (&alu_bor8)[(uint)R3 & 0xff][R0 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(uint)R3 >> 0x10 & 0xff][R0 >> 0x10 & 0xff],(undefined2)alu_s);
  alu_s = CONCAT13((&alu_bor8)[(uint)R3 >> 0x18][R0 >> 0x18],(uint3)alu_s);
  R3 = (undefined *)alu_s;
  R2 = 0;
  uVar5 = *(uint *)((&alu_add16)
                    [*(int *)((&alu_add16)[(uint3)alu_s & 0xffff] + (uint)_alu_inv16 * 4)] + 4);
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar5 & 0xff] +
                                                     (uVar5 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[alu_s >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar5 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[alu_s >> 0x10] + (uint)_alu_inv16 * 4)]
                                     + (uVar5 >> 0x10) * 4) >> 8 & 0xff)]];
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x8821e830;
  iVar1 = b0;
  puVar4 = (uint *)(&sel_data)[b0];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[b0] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xbc]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xd3] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x21] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + 
                                                  -0x200060) + -0x200060) + -0x200060) + -0x200060)
                                                  + -0x200060) + -0x200060) + -0x200060) + -0x200060
                          ) + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  puVar2 = (undefined4 *)(&sel_data)[on];
  puVar3 = (undefined4 *)(&sel_data)[on];
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  stack_temp = (undefined4 *)0x8821d7f0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880c4b60;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xf0]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xd7] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x21] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  R3 = (undefined *)R0;
  R2 = 0x7ff;
  uVar5 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R0 & 0xffff] + (uint)uRam0834c4ae * 4)] + 4);
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar5 & 0xff] +
                                                     (uVar5 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[R0 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar5 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[R0 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                     (uVar5 >> 0x10) * 4) >> 8 & 0xff)]];
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x8821ff66;
  iVar1 = b0;
  puVar4 = (uint *)(&sel_data)[b0];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + 
                                                  -0x200060) + -0x200060) + -0x200060) + -0x200060)
                                                  + -0x200060) + -0x200060) + -0x200060) + -0x200060
                          ) + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  puVar2 = (undefined4 *)(&sel_data)[on];
  puVar3 = (undefined4 *)(&sel_data)[on];
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  stack_temp = (undefined4 *)0x8821deb4;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880c4176;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xb4]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xde] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x21] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  R3 = (undefined *)R0;
  R2 = *(uint *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp
                                                                                                 + 
                                                  -0x200060) + -0x200060) + -0x200060) + -0x200060)
                                                  + -0x200060) + -0x200060) + -0x200060) + -0x200060
                                  ) + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  puVar2 = (undefined4 *)(&sel_data)[on];
  puVar3 = (undefined4 *)(&sel_data)[on];
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  stack_temp = (undefined4 *)0x8821e327;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880c384c;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x27]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xe3] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x21] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[(uint)R3 >> 8 & 0xff][R0 >> 8 & 0xff],
                         (&alu_bor8)[(uint)R3 & 0xff][R0 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(uint)R3 >> 0x10 & 0xff][R0 >> 0x10 & 0xff],(undefined2)alu_s);
  alu_s = CONCAT13((&alu_bor8)[(uint)R3 >> 0x18][R0 >> 0x18],(uint3)alu_s);
  R3 = (undefined *)alu_s;
  R2 = 0;
  uVar5 = *(uint *)((&alu_add16)
                    [*(int *)((&alu_add16)[(uint3)alu_s & 0xffff] + (uint)_alu_inv16 * 4)] + 4);
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar5 & 0xff] +
                                                     (uVar5 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[alu_s >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar5 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[alu_s >> 0x10] + (uint)_alu_inv16 * 4)]
                                     + (uVar5 >> 0x10) * 4) >> 8 & 0xff)]];
  b0 = *(int *)((&and)[zf] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x8821ff66;
  iVar1 = b0;
  puVar4 = (uint *)(&sel_data)[b0];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[b0] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x30]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xe8] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x21] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + -0x200060) + -0x200060)
                                                     + -0x200060) + -0x200060) + -0x200060) +
                          -0x200060) + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  puVar2 = (undefined4 *)(&sel_data)[on];
  puVar3 = (undefined4 *)(&sel_data)[on];
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  stack_temp = (undefined4 *)0x8821ec58;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880a765e;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x58]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xec] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x21] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  R3 = (undefined *)R0;
  R2 = 0;
  uVar5 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R0 & 0xffff] + (uint)_alu_inv16 * 4)] + 4);
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar5 & 0xff] +
                                                     (uVar5 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[R0 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar5 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[R0 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                     (uVar5 >> 0x10) * 4) >> 8 & 0xff)]];
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x8821f775;
  iVar1 = b0;
  puVar4 = (uint *)(&sel_data)[b0];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + 
                                                  -0x200060) + -0x200060) + -0x200060) + -0x200060)
                                                  + -0x200060) + -0x200060) + -0x200060) + -0x200060
                          ) + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  puVar2 = (undefined4 *)(&sel_data)[on];
  puVar3 = (undefined4 *)(&sel_data)[on];
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  stack_temp = (undefined4 *)0x8821f31c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880a765e;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x1c]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xf3] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x21] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  R3 = (undefined *)R0;
  R2 = 0;
  uVar5 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R0 & 0xffff] + (uint)_alu_inv16 * 4)] + 4);
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar5 & 0xff] +
                                                     (uVar5 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[R0 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar5 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[R0 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                     (uVar5 >> 0x10) * 4) >> 8 & 0xff)]];
  b0 = *(int *)((&and)[zf] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x8821fcc2;
  iVar1 = b0;
  puVar4 = (uint *)(&sel_data)[b0];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[b0] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x75]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xf7] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x21] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = (undefined *)0x10;
  stack_temp = (undefined4 *)0x10;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8821fab9;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88098b0e;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xb9]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xfa] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x21] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xc2]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xfc] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x21] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R0 = 0;
  *(undefined4 *)(&sel_target)[on] = 0x8822356f;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x66]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xff] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x21] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + -0x200060) + -0x200060)
                                                     + -0x200060) + -0x200060) + -0x200060) +
                          -0x200060) + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  puVar2 = (undefined4 *)(&sel_data)[on];
  puVar3 = (undefined4 *)(&sel_data)[on];
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  stack_temp = (undefined4 *)0x8822038e;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880c5855;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x8e]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][3] * 4)]
                                  + (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + 
                                                  -0x200060) + -0x200060) + -0x200060) + -0x200060)
                                                  + -0x200060) + -0x200060) + -0x200060) + -0x200060
                          ) + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  puVar2 = (undefined4 *)(&sel_data)[on];
  puVar3 = (undefined4 *)(&sel_data)[on];
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  stack_temp = (undefined4 *)0x88220826;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880c5855;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x26]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][8] * 4)]
                                  + (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = *(uint *)(&sel_data)[on];
  uVar5 = *(uint *)((&alu_add16)
                    [*(int *)((&alu_add16)[(uint)R3 & 0xffff] +
                             (uint)*(ushort *)(&alu_inv16 + (R2 & 0xffff) * 2) * 4)] + 4);
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar5 & 0xff] +
                                                     (uVar5 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 + (R2 >> 0x10) * 2) *
                                                            4)] + (uVar5 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                               (uint)*(ushort *)(&alu_inv16 + (R2 >> 0x10) * 2) * 4)
                                      ] + (uVar5 >> 0x10) * 4) >> 8 & 0xff)]];
  b0 = *(int *)((&and)[zf] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88222025;
  iVar1 = b0;
  puVar2 = (undefined4 *)(&sel_data)[b0];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 0;
  uVar5 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)_alu_inv16 * 4)] +
                   4);
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar5 & 0xff] +
                                                     (uVar5 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar5 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                               (uint)_alu_inv16 * 4)] + (uVar5 >> 0x10) * 4) >> 8 &
                           0xff)]];
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88221867;
  iVar1 = b0;
  puVar2 = (undefined4 *)(&sel_data)[b0];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[b0] = 0;
  uVar5 = *(uint *)(&sel_data)[on];
  uVar6 = *(uint *)(&sel_data)[on];
  alu_s._0_2_ = CONCAT11((&alu_bor8)[uVar5 >> 8 & 0xff][uVar6 >> 8 & 0xff],
                         (&alu_bor8)[uVar5 & 0xff][uVar6 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[uVar5 >> 0x10 & 0xff][uVar6 >> 0x10 & 0xff],(undefined2)alu_s);
  _alu_sc = (uint)(byte)*alu_bor8;
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = CONCAT31((uint3)(byte)(&alu_true)[_alu_sc],1);
  puVar7 = (&alu_lshu8)[(&alu_clamp32)[_alu_sc]];
  uVar8 = *(uint *)(puVar7 + ((uint3)alu_s & 0xff) * 4);
  uVar9 = *(uint *)(puVar7 + (uint)(byte)(&alu_bor8)[uVar5 >> 8 & 0xff][uVar6 >> 8 & 0xff] * 4);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[uVar8 >> 8 & 0xff][uVar9 & 0xff],*(&alu_bor8)[uVar8 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[uVar8 >> 0x10 & 0xff][uVar9 >> 8 & 0xff],(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11(*(&alu_bor8)[((uint3)alu_s & 0xff00) >> 8],
                         *(&alu_bor8)[(uint3)alu_s & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(byte)(&alu_bor8)[uVar8 >> 0x10 & 0xff][uVar9 >> 8 & 0xff]]
                         [*(uint *)(puVar7 + (uint)(byte)(&alu_bor8)[uVar5 >> 0x10 & 0xff]
                                                         [uVar6 >> 0x10 & 0xff] * 4) & 0xff],
                         (undefined2)alu_s);
  alu_s._0_2_ = CONCAT11(*(&alu_bor8)[((uint3)alu_s & 0xff00) >> 8],
                         *(&alu_bor8)[(uint3)alu_s & 0xff]);
  alu_s._0_3_ = CONCAT12(*(&alu_bor8)
                          [(byte)(&alu_bor8)
                                 [(byte)(&alu_bor8)[uVar8 >> 0x10 & 0xff][uVar9 >> 8 & 0xff]]
                                 [*(uint *)(puVar7 + (uint)(byte)(&alu_bor8)[uVar5 >> 0x10 & 0xff]
                                                                 [uVar6 >> 0x10 & 0xff] * 4) & 0xff]
                          ],(undefined2)alu_s);
  uVar12 = (uint)(uint3)alu_s;
  uVar10 = *(uint *)(&sel_data)[on];
  alu_s._0_2_ = CONCAT11((&alu_bor8)[(uVar12 & 0xff00) >> 8][uVar10 >> 8 & 0xff],
                         (&alu_bor8)[uVar12 & 0xff][uVar10 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)
                         [(byte)*(&alu_bor8)
                                 [(byte)(&alu_bor8)
                                        [(byte)(&alu_bor8)[uVar8 >> 0x10 & 0xff][uVar9 >> 8 & 0xff]]
                                        [*(uint *)(puVar7 + (uint)(byte)(&alu_bor8)
                                                                        [uVar5 >> 0x10 & 0xff]
                                                                        [uVar6 >> 0x10 & 0xff] * 4)
                                         & 0xff]]][uVar10 >> 0x10 & 0xff],(undefined2)alu_s);
  uVar11 = *(uint *)(&sel_data)[on];
  alu_s._0_2_ = CONCAT11((&alu_bor8)[(byte)(&alu_bor8)[(uVar12 & 0xff00) >> 8][uVar10 >> 8 & 0xff]]
                         [uVar11 >> 8 & 0xff],(&alu_bor8)[(uint3)alu_s & 0xff][uVar11 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)
                         [(byte)(&alu_bor8)
                                [(byte)*(&alu_bor8)
                                        [(byte)(&alu_bor8)
                                               [(byte)(&alu_bor8)[uVar8 >> 0x10 & 0xff]
                                                      [uVar9 >> 8 & 0xff]]
                                               [*(uint *)(puVar7 + (uint)(byte)(&alu_bor8)
                                                                               [uVar5 >> 0x10 & 0xff
                                                                               ][uVar6 >> 0x10 &
                                                                                 0xff] * 4) & 0xff]]
                                ][uVar10 >> 0x10 & 0xff]][uVar11 >> 0x10 & 0xff],(undefined2)alu_s);
  alu_s = CONCAT13((&alu_bor8)
                   [(byte)(&alu_bor8)
                          [(byte)(&alu_bor8)
                                 [(byte)(&alu_bor8)
                                        [(byte)(&alu_bor8)[uVar8 >> 0x18][uVar9 >> 0x10 & 0xff]]
                                        [*(uint *)(puVar7 + (uint)(byte)(&alu_bor8)
                                                                        [uVar5 >> 0x10 & 0xff]
                                                                        [uVar6 >> 0x10 & 0xff] * 4)
                                         >> 8 & 0xff]]
                                 [*(uint *)(puVar7 + (uint)(byte)(&alu_bor8)[uVar5 >> 0x18]
                                                                 [uVar6 >> 0x18] * 4) & 0xff]]
                          [uVar10 >> 0x18]][uVar11 >> 0x18],(uint3)alu_s);
  R3 = (undefined *)alu_s;
  R2 = 0;
  uVar5 = *(uint *)((&alu_add16)
                    [*(int *)((&alu_add16)[(uint3)alu_s & 0xffff] + (uint)_alu_inv16 * 4)] + 4);
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar5 & 0xff] +
                                                     (uVar5 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[alu_s >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar5 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[alu_s >> 0x10] + (uint)_alu_inv16 * 4)]
                                     + (uVar5 >> 0x10) * 4) >> 8 & 0xff)]];
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88221b3c;
  iVar1 = b0;
  puVar2 = (undefined4 *)(&sel_data)[b0];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[b0] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x67]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x18] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = (undefined *)0x1;
  *(undefined4 *)(&sel_data)[on] = 1;
  *(undefined4 *)(&sel_target)[on] = 0x88221d51;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x3c]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x1b] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x51]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x1d] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(*(int *)(*(int *)(fp + -0x200068) + -0x200068) + -0x200068);
  R0 = *(uint *)(&sel_data)[on];
  *(undefined4 *)(&sel_target)[on] = 0x8822356f;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x25]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x20] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 0;
  uVar5 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)_alu_inv16 * 4)] +
                   4);
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar5 & 0xff] +
                                                     (uVar5 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar5 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                               (uint)_alu_inv16 * 4)] + (uVar5 >> 0x10) * 4) >> 8 &
                           0xff)]];
  b0 = *(int *)((&and)[zf] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88222b57;
  iVar1 = b0;
  puVar2 = (undefined4 *)(&sel_data)[b0];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[b0] = 0;
  stack_temp = *(undefined4 **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = (undefined4 *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x88222841;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880944c1;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x41]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x28] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)
        (*(int *)(*(int *)(*(int *)(sp + -0x200060) + -0x200060) + -0x200060) + -0x200060);
  R3 = (undefined *)R0;
  *(uint *)(&sel_data)[on] = R0;
  *(undefined4 *)(&sel_target)[on] = 0x8822335b;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x57]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x2b] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = *(undefined4 **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = (undefined4 *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x88223105;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880944c1;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][5]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x31] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)
        (*(int *)(*(int *)(*(int *)(sp + -0x200060) + -0x200060) + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x5b]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x33] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(*(int *)(*(int *)(fp + -0x200068) + -0x200068) + -0x200068);
  R0 = *(uint *)(&sel_data)[on];
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x6f]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x35] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined4 **)sp;
  DAT_083e0574 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_083e0574;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_target)[on] = stack_temp;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x5b]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x3a] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = (undefined4 *)fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)R1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)R2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)D1;
  DAT_083e0574 = DAT_082374dc;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200068) + -0x200068);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_083e0574;
  *(undefined **)(&sel_data)[on] = sp;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(*(int *)(*(int *)(sp + -0x200068) + -0x200068) + -0x200068);
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + -0x200060) + -0x200060)
                                                     + -0x200060) + -0x200060) + -0x200060) +
                          -0x200060) + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  puVar2 = (undefined4 *)(&sel_data)[on];
  puVar3 = (undefined4 *)(&sel_data)[on];
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  stack_temp = (undefined4 *)0x882240ca;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880c4b60;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xca]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x40] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  R3 = (undefined *)R0;
  R2 = 0x7ff;
  uVar5 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R0 & 0xffff] + (uint)uRam0834c4ae * 4)] + 4);
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar5 & 0xff] +
                                                     (uVar5 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[R0 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar5 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[R0 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                     (uVar5 >> 0x10) * 4) >> 8 & 0xff)]];
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88225103;
  iVar1 = b0;
  puVar4 = (uint *)(&sel_data)[b0];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + -0x200060) + -0x200060)
                                                     + -0x200060) + -0x200060) + -0x200060) +
                          -0x200060) + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  puVar2 = (undefined4 *)(&sel_data)[on];
  puVar3 = (undefined4 *)(&sel_data)[on];
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  stack_temp = (undefined4 *)0x88224782;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880c4176;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x82]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x47] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  R3 = (undefined *)R0;
  R2 = *(uint *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + -0x200060) +
                                                                      -0x200060) + -0x200060) +
                                                    -0x200060) + -0x200060) + -0x200060) + -0x200060
                         ) + -0x200060);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  puVar2 = (undefined4 *)(&sel_data)[on];
  puVar3 = (undefined4 *)(&sel_data)[on];
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  stack_temp = (undefined4 *)0x88224be9;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880c384c;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xe9]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x4b] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[(uint)R3 >> 8 & 0xff][R0 >> 8 & 0xff],
                         (&alu_bor8)[(uint)R3 & 0xff][R0 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(uint)R3 >> 0x10 & 0xff][R0 >> 0x10 & 0xff],(undefined2)alu_s);
  alu_s = CONCAT13((&alu_bor8)[(uint)R3 >> 0x18][R0 >> 0x18],(uint3)alu_s);
  R3 = (undefined *)alu_s;
  R2 = 0;
  uVar5 = *(uint *)((&alu_add16)
                    [*(int *)((&alu_add16)[(uint3)alu_s & 0xffff] + (uint)_alu_inv16 * 4)] + 4);
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar5 & 0xff] +
                                                     (uVar5 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[alu_s >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar5 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[alu_s >> 0x10] + (uint)_alu_inv16 * 4)]
                                     + (uVar5 >> 0x10) * 4) >> 8 & 0xff)]];
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88226577;
  iVar1 = b0;
  puVar4 = (uint *)(&sel_data)[b0];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[b0] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][3]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x51] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + 
                                                  -0x200060) + -0x200060) + -0x200060) + -0x200060)
                                                  + -0x200060) + -0x200060) + -0x200060) + -0x200060
                          ) + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  puVar2 = (undefined4 *)(&sel_data)[on];
  puVar3 = (undefined4 *)(&sel_data)[on];
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  stack_temp = (undefined4 *)0x88225537;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880c4b60;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x37]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x55] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  R3 = (undefined *)R0;
  R2 = 0x7ff;
  uVar5 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R0 & 0xffff] + (uint)uRam0834c4ae * 4)] + 4);
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar5 & 0xff] +
                                                     (uVar5 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[R0 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar5 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[R0 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                     (uVar5 >> 0x10) * 4) >> 8 & 0xff)]];
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88227cad;
  iVar1 = b0;
  puVar4 = (uint *)(&sel_data)[b0];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + 
                                                  -0x200060) + -0x200060) + -0x200060) + -0x200060)
                                                  + -0x200060) + -0x200060) + -0x200060) + -0x200060
                          ) + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  puVar2 = (undefined4 *)(&sel_data)[on];
  puVar3 = (undefined4 *)(&sel_data)[on];
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  stack_temp = (undefined4 *)0x88225bfb;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880c4176;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xfb]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x5b] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  R3 = (undefined *)R0;
  R2 = *(uint *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp
                                                                                                 + 
                                                  -0x200060) + -0x200060) + -0x200060) + -0x200060)
                                                  + -0x200060) + -0x200060) + -0x200060) + -0x200060
                                  ) + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  puVar2 = (undefined4 *)(&sel_data)[on];
  puVar3 = (undefined4 *)(&sel_data)[on];
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  stack_temp = (undefined4 *)0x8822606e;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880c384c;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x6e]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x60] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[(uint)R3 >> 8 & 0xff][R0 >> 8 & 0xff],
                         (&alu_bor8)[(uint)R3 & 0xff][R0 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(uint)R3 >> 0x10 & 0xff][R0 >> 0x10 & 0xff],(undefined2)alu_s);
  alu_s = CONCAT13((&alu_bor8)[(uint)R3 >> 0x18][R0 >> 0x18],(uint3)alu_s);
  R3 = (undefined *)alu_s;
  R2 = 0;
  uVar5 = *(uint *)((&alu_add16)
                    [*(int *)((&alu_add16)[(uint3)alu_s & 0xffff] + (uint)_alu_inv16 * 4)] + 4);
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar5 & 0xff] +
                                                     (uVar5 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[alu_s >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar5 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[alu_s >> 0x10] + (uint)_alu_inv16 * 4)]
                                     + (uVar5 >> 0x10) * 4) >> 8 & 0xff)]];
  b0 = *(int *)((&and)[zf] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88227cad;
  iVar1 = b0;
  puVar4 = (uint *)(&sel_data)[b0];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[b0] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x77]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x65] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + -0x200060) + -0x200060)
                                                     + -0x200060) + -0x200060) + -0x200060) +
                          -0x200060) + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  puVar2 = (undefined4 *)(&sel_data)[on];
  puVar3 = (undefined4 *)(&sel_data)[on];
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  stack_temp = (undefined4 *)0x8822699f;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880a765e;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x9f]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x69] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  R3 = (undefined *)R0;
  R2 = 0;
  uVar5 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R0 & 0xffff] + (uint)_alu_inv16 * 4)] + 4);
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar5 & 0xff] +
                                                     (uVar5 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[R0 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar5 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[R0 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                     (uVar5 >> 0x10) * 4) >> 8 & 0xff)]];
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x882274bc;
  iVar1 = b0;
  puVar4 = (uint *)(&sel_data)[b0];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + 
                                                  -0x200060) + -0x200060) + -0x200060) + -0x200060)
                                                  + -0x200060) + -0x200060) + -0x200060) + -0x200060
                          ) + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  puVar2 = (undefined4 *)(&sel_data)[on];
  puVar3 = (undefined4 *)(&sel_data)[on];
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  stack_temp = (undefined4 *)0x88227063;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880a765e;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][99]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x70] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  R3 = (undefined *)R0;
  R2 = 0;
  uVar5 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R0 & 0xffff] + (uint)_alu_inv16 * 4)] + 4);
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar5 & 0xff] +
                                                     (uVar5 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[R0 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar5 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[R0 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                     (uVar5 >> 0x10) * 4) >> 8 & 0xff)]];
  b0 = *(int *)((&and)[zf] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88227a09;
  iVar1 = b0;
  puVar4 = (uint *)(&sel_data)[b0];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[b0] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xbc]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x74] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = (undefined *)0x10;
  stack_temp = (undefined4 *)0x10;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x88227800;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88098b0e;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)*(&alu_eq)[target & 0xff]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x78] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][9]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x7a] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R0 = 0;
  *(undefined4 *)(&sel_target)[on] = 0x8822b0ba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xad]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x7c] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + -0x200060) + -0x200060)
                                                     + -0x200060) + -0x200060) + -0x200060) +
                          -0x200060) + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  puVar2 = (undefined4 *)(&sel_data)[on];
  puVar3 = (undefined4 *)(&sel_data)[on];
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  stack_temp = (undefined4 *)0x882280d5;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880c5855;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xd5]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x80] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + 
                                                  -0x200060) + -0x200060) + -0x200060) + -0x200060)
                                                  + -0x200060) + -0x200060) + -0x200060) + -0x200060
                          ) + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  puVar2 = (undefined4 *)(&sel_data)[on];
  puVar3 = (undefined4 *)(&sel_data)[on];
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  stack_temp = (undefined4 *)0x8822856d;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880c5855;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x6d]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x85] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = *(uint *)(&sel_data)[on];
  uVar5 = *(uint *)((&alu_add16)
                    [*(int *)((&alu_add16)[(uint)R3 & 0xffff] +
                             (uint)*(ushort *)(&alu_inv16 + (R2 & 0xffff) * 2) * 4)] + 4);
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar5 & 0xff] +
                                                     (uVar5 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 + (R2 >> 0x10) * 2) *
                                                            4)] + (uVar5 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                               (uint)*(ushort *)(&alu_inv16 + (R2 >> 0x10) * 2) * 4)
                                      ] + (uVar5 >> 0x10) * 4) >> 8 & 0xff)]];
  b0 = *(int *)((&and)[zf] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88229b70;
  iVar1 = b0;
  puVar2 = (undefined4 *)(&sel_data)[b0];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 0;
  uVar5 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)_alu_inv16 * 4)] +
                   4);
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar5 & 0xff] +
                                                     (uVar5 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar5 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                               (uint)_alu_inv16 * 4)] + (uVar5 >> 0x10) * 4) >> 8 &
                           0xff)]];
  b0 = *(int *)((&and)[zf] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88229687;
  iVar1 = b0;
  puVar2 = (undefined4 *)(&sel_data)[b0];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[b0] = 0;
  uVar5 = *(uint *)(&sel_data)[on];
  uVar6 = *(uint *)(&sel_data)[on];
  alu_s._0_2_ = CONCAT11((&alu_bor8)[uVar5 >> 8 & 0xff][uVar6 >> 8 & 0xff],
                         (&alu_bor8)[uVar5 & 0xff][uVar6 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[uVar5 >> 0x10 & 0xff][uVar6 >> 0x10 & 0xff],(undefined2)alu_s);
  _alu_sx = 1;
  _alu_sc = (uint)(byte)*alu_bor8;
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = CONCAT31((uint3)(byte)(&alu_true)[_alu_sc],1);
  alu_s1 = 0;
  alu_s2 = 0;
  DAT_083e048d = 0;
  alu_s3 = 0;
  DAT_083e0499 = 0;
  DAT_083e049a = 0;
  puVar7 = (&alu_lshu8)[(&alu_clamp32)[_alu_sc]];
  _alu_s0 = *(uint *)(puVar7 + ((uint3)alu_s & 0xff) * 4);
  uVar8 = *(uint *)(puVar7 + (uint)(byte)(&alu_bor8)[uVar5 >> 8 & 0xff][uVar6 >> 8 & 0xff] * 4);
  DAT_083e0481 = (undefined)uVar8;
  DAT_083e0482 = (byte)(uVar8 >> 8);
  DAT_083e0483 = (byte)(uVar8 >> 0x10);
  uRam083e0484 = (undefined)(uVar8 >> 0x18);
  uVar9 = *(uint *)(puVar7 + (uint)(byte)(&alu_bor8)[uVar5 >> 0x10 & 0xff][uVar6 >> 0x10 & 0xff] * 4
                   );
  DAT_083e048e = (undefined)uVar9;
  DAT_083e048f = (byte)(uVar9 >> 8);
  uRam083e0490 = (undefined2)(uVar9 >> 0x10);
  _DAT_083e049b = *(uint *)(puVar7 + (uint)(byte)(&alu_bor8)[uVar5 >> 0x18][uVar6 >> 0x18] * 4);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[_alu_s0 >> 8 & 0xff][uVar8 & 0xff],*(&alu_bor8)[_alu_s0 & 0xff]
                        );
  alu_s._0_3_ = CONCAT12((&alu_bor8)[_alu_s0 >> 0x10 & 0xff][DAT_083e0482],(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11(*(&alu_bor8)[((uint3)alu_s & 0xff00) >> 8],
                         *(&alu_bor8)[(uint3)alu_s & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(byte)(&alu_bor8)[_alu_s0 >> 0x10 & 0xff][DAT_083e0482]]
                         [uVar9 & 0xff],(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11(*(&alu_bor8)[((uint3)alu_s & 0xff00) >> 8],
                         *(&alu_bor8)[(uint3)alu_s & 0xff]);
  alu_s._0_3_ = CONCAT12(*(&alu_bor8)
                          [(byte)(&alu_bor8)
                                 [(byte)(&alu_bor8)[_alu_s0 >> 0x10 & 0xff][DAT_083e0482]]
                                 [uVar9 & 0xff]],(undefined2)alu_s);
  uVar8 = (uint)(uint3)alu_s;
  uVar5 = *(uint *)(&sel_data)[on];
  alu_s._0_2_ = CONCAT11((&alu_bor8)[(uVar8 & 0xff00) >> 8][uVar5 >> 8 & 0xff],
                         (&alu_bor8)[uVar8 & 0xff][uVar5 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)
                         [(byte)*(&alu_bor8)
                                 [(byte)(&alu_bor8)
                                        [(byte)(&alu_bor8)[_alu_s0 >> 0x10 & 0xff][DAT_083e0482]]
                                        [uVar9 & 0xff]]][uVar5 >> 0x10 & 0xff],(undefined2)alu_s);
  uVar6 = *(uint *)(&sel_data)[on];
  alu_s._0_2_ = CONCAT11((&alu_bor8)[(byte)(&alu_bor8)[(uVar8 & 0xff00) >> 8][uVar5 >> 8 & 0xff]]
                         [uVar6 >> 8 & 0xff],(&alu_bor8)[(uint3)alu_s & 0xff][uVar6 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)
                         [(byte)(&alu_bor8)
                                [(byte)*(&alu_bor8)
                                        [(byte)(&alu_bor8)
                                               [(byte)(&alu_bor8)[_alu_s0 >> 0x10 & 0xff]
                                                      [DAT_083e0482]][uVar9 & 0xff]]]
                                [uVar5 >> 0x10 & 0xff]][uVar6 >> 0x10 & 0xff],(undefined2)alu_s);
  alu_s = CONCAT13((&alu_bor8)
                   [(byte)(&alu_bor8)
                          [(byte)(&alu_bor8)
                                 [(byte)(&alu_bor8)
                                        [(byte)(&alu_bor8)[_alu_s0 >> 0x18][DAT_083e0483]]
                                        [DAT_083e048f]][_DAT_083e049b & 0xff]][uVar5 >> 0x18]]
                   [uVar6 >> 0x18],(uint3)alu_s);
  R3 = (undefined *)alu_s;
  R2 = 0;
  uVar5 = *(uint *)((&alu_add16)
                    [*(int *)((&alu_add16)[(uint3)alu_s & 0xffff] + (uint)_alu_inv16 * 4)] + 4);
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar5 & 0xff] +
                                                     (uVar5 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[alu_s >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar5 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[alu_s >> 0x10] + (uint)_alu_inv16 * 4)]
                                     + (uVar5 >> 0x10) * 4) >> 8 & 0xff)]];
  b0 = *(int *)((&and)[zf] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88229687;
  iVar1 = b0;
  puVar2 = (undefined4 *)(&sel_data)[b0];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R3 = (undefined *)0x1;
  *(undefined4 *)(&sel_data)[on] = 1;
  *(undefined4 *)(&sel_target)[on] = 0x8822989c;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x87]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x96] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x9c]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x98] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(*(int *)(*(int *)(fp + -0x200068) + -0x200068) + -0x200068);
  R0 = *(uint *)(&sel_data)[on];
  *(undefined4 *)(&sel_target)[on] = 0x8822b0ba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x70]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x9b] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 0;
  alu_t = 0;
  uVar5 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)_alu_inv16 * 4)] +
                   4);
  uVar6 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                   (uVar5 >> 0x10) * 4);
  _DAT_083e045e = (undefined2)uVar6;
  cf._0_1_ = (&alu_false)[uVar6 >> 0x10 & 0xff];
  alu_s._3_1_ = (byte)(uVar6 >> 8);
  sf._0_1_ = (undefined)*(undefined4 *)(&alu_b7 + (uint)alu_s._3_1_ * 4);
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar5 & 0xff] +
                                                     (uVar5 >> 8 & 0xff)] + (uVar6 & 0xff)] +
                           (uint)alu_s._3_1_]];
  of._0_1_ = (undefined)
             **(undefined4 **)
               (*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4)] +
                        *(uint *)(&alu_b7 +
                                 (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4) * 4
                        ) +
               *(int *)(&alu_b7 +
                       (*(uint *)(&alu_b7 +
                                 (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4) &
                        0xffffff00 | (uint)alu_s._3_1_) * 4) * 4);
  b0 = *(int *)((&and)[zf] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x8822a6a2;
  iVar1 = b0;
  puVar2 = (undefined4 *)(&sel_data)[b0];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[b0] = 0;
  stack_temp = *(undefined4 **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = (undefined4 *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822a38c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88095d0f;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x8c]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xa3] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)
        (*(int *)(*(int *)(*(int *)(sp + -0x200060) + -0x200060) + -0x200060) + -0x200060);
  R3 = (undefined *)R0;
  *(uint *)(&sel_data)[on] = R0;
  *(undefined4 *)(&sel_target)[on] = 0x8822aea6;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xa2]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xa6] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = *(undefined4 **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = (undefined4 *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822ac50;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88095d0f;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x50]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xac] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)
        (*(int *)(*(int *)(*(int *)(sp + -0x200060) + -0x200060) + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xa6]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xae] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(*(int *)(*(int *)(fp + -0x200068) + -0x200068) + -0x200068);
  R0 = *(uint *)(&sel_data)[on];
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xba]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xb0] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined4 **)sp;
  DAT_083e0574 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_083e0574;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_target)[on] = stack_temp;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xa6]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xb5] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = (undefined4 *)fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)R1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)R2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)D1;
  DAT_083e0574 = DAT_082374dc;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200068) + -0x200068);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_083e0574;
  *(undefined **)(&sel_data)[on] = sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200068) + -0x200068);
  R3 = &DAT_082374a5;
  F1 = *(undefined4 *)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = F1;
  *(undefined4 *)(&sel_target)[on] = 0x8822d136;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xce]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xba] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(fp + -0x200068);
  F1 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822be36;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8822dd0d;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x36]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xbe] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = F0;
  R3 = *(undefined **)(*(int *)(fp + -0x200068) + -0x200068);
  F1 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = &D0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822c24a;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880f3b5e;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x4a]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xc2] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  D1 = D0;
  DAT_082374dc = DAT_082374d4;
  stack_temp = (undefined4 *)D0;
  DAT_083e0574 = DAT_082374d4;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200068) + -0x200068);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_083e0574;
  R3 = *(undefined **)(fp + -0x200068);
  F1 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = &D0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822c6ae;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880f3b5e;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xae]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xc6] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  D1 = D0;
  DAT_082374dc = DAT_082374d4;
  stack_temp = (undefined4 *)D0;
  DAT_083e0574 = DAT_082374d4;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200068) + -0x200068);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_083e0574;
  stack_temp = (undefined4 *)(s_I_sin___4f_____4f_08237492 + 2);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  iVar1 = *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34850_0826d418 + 0x20000)] +
                  (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_51858_0827ddd8] >> 0x10) * 4);
  alu_s = *(uint *)(&alu_add16)[*(int *)PTR_alu_add16_51858_0827ddd8] & 0xffff | iVar1 << 0x10;
  alu_c._0_1_ = (undefined)iVar1;
  alu_c._1_1_ = (undefined)((uint)iVar1 >> 8);
  alu_c._2_2_ = (undefined2)((uint)iVar1 >> 0x10);
  stack_temp = (undefined4 *)alu_s;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  _external = printf;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)
        (*(int *)(*(int *)(*(int *)(*(int *)(sp + -0x200060) + -0x200060) + -0x200060) + -0x200060)
        + -0x200060);
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x18]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xcb] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = &DAT_08237490;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822cef8;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88117f1a;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xf8]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xce] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x36]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xd1] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = &DAT_0823748c;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822d516;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x881542dc;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x16]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xd5] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  b0 = *(int *)((&and)[(byte)(&alu_true)[R0 & 0xff]] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x8822bace;
  iVar1 = b0;
  puVar4 = (uint *)(&sel_data)[b0];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R0 = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x21]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xd8] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined4 **)sp;
  DAT_083e0574 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_083e0574;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_target)[on] = stack_temp;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xd]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xdd] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = (undefined4 *)fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)R1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)R2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)D1;
  DAT_083e0574 = DAT_082374dc;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200068) + -0x200068);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_083e0574;
  *(undefined **)(&sel_data)[on] = sp;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int 
                                                  *)(*(int *)(*(int *)(*(int *)(sp + -0x200068) +
                                                                      -0x200068) + -0x200068) +
                                                    -0x200068) + -0x200068) + -0x200068) + -0x200068
                                                  ) + -0x200068) + -0x200068) + -0x200068) +
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                                  + -0x200068) + -0x200068) + -0x200068) + -0x200068
                          ) + -0x200068) + -0x200068);
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + -0x200060) + -0x200060)
                                                     + -0x200060) + -0x200060) + -0x200060) +
                          -0x200060) + -0x200060) + -0x200060);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822e3f4;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xf4]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xe3] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = *(undefined **)(fp + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822e83e;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x3e]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xe8] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = &DAT_08237484;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822edee;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x881272ff;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xee]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xed] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(fp + -0x200068) +
                                                                  -0x200068) + -0x200068) +
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                                  + -0x200068) + -0x200068) + -0x200068) + -0x200068
                                   ) + -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822f233;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88119f6a;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x33]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xf2] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(fp + -0x200068) + -0x200068) +
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                                  + -0x200068) + -0x200068) + -0x200068) + -0x200068
                                   ) + -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822f672;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x72]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xf6] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = *(undefined **)(*(int *)(*(int *)(fp + -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822fb10;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x10]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xfb] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = &DAT_08237480;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x882300c6;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x881272ff;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xc6]] +
                                                  (uint)(byte)*(&alu_eq)[target >> 8 & 0xff] * 4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + 
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                                  + -0x200068) + -0x200068) + -0x200068) + -0x200068
                                                  ) + -0x200068) + -0x200068) + -0x200068) +
                                            -0x200068) + -0x200068) + -0x200068) + -0x200068) +
        -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x88230517;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88119f6a;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x17]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][5] * 4)]
                                  + (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(*(int *)(fp + -0x200068)
                                                                           + -0x200068) + -0x200068)
                                                         + -0x200068) + -0x200068) + -0x200068) +
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                            + -0x200068) + -0x200068) + -0x200068) + -0x200068) +
        -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x88230962;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x62]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][9] * 4)]
                                  + (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = &DAT_0823747c;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x88230d53;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x881272ff;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x53]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xd] * 4
                                                  )] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = *(undefined **)(*(int *)(*(int *)(fp + -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x882311df;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xdf]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x11] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = &DAT_08237478;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x882317b9;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x881272ff;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xb9]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x17] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int 
                                                  *)(*(int *)(fp + -0x200068) + -0x200068) +
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                                  + -0x200068) + -0x200068) + -0x200068) + -0x200068
                                                  ) + -0x200068) + -0x200068) + -0x200068) +
                                            -0x200068) + -0x200068) + -0x200068) + -0x200068) +
        -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x88231c16;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88119f6a;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x16]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x1c] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int 
                                                  *)(fp + -0x200068) + -0x200068) + -0x200068) +
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                                  + -0x200068) + -0x200068) + -0x200068) + -0x200068
                                                  ) + -0x200068) + -0x200068) + -0x200068) +
                          -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8823206d;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x6d]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x20] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = &DAT_08237474;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8823245e;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x881272ff;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x5e]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x24] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = *(undefined **)(*(int *)(*(int *)(fp + -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x882328f6;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xf6]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x28] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = &DAT_08237470;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x88232f18;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x881272ff;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x18]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x2f] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int 
                                                  *)(*(int *)(*(int *)(*(int *)(fp + -0x200068) +
                                                                      -0x200068) + -0x200068) +
                                                    -0x200068) + -0x200068) + -0x200068) + -0x200068
                                                  ) + -0x200068) + -0x200068) + -0x200068) +
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                                  + -0x200068) + -0x200068) + -0x200068) + -0x200068
                          ) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x88233381;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88119f6a;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x81]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x33] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int 
                                                  *)(*(int *)(*(int *)(fp + -0x200068) + -0x200068)
                                                    + -0x200068) + -0x200068) + -0x200068) +
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                                  + -0x200068) + -0x200068) + -0x200068) + -0x200068
                                                  ) + -0x200068) + -0x200068) + -0x200068) +
                          -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x882337e4;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xe4]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x37] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = &DAT_0823746c;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x88233bd5;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x881272ff;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xd5]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x3b] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + -0x200068) + -0x200068)
                                                     + -0x200068) + -0x200068) + -0x200068) +
                          -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x88234114;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88117f1a;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x14]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x41] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + -0x200068) + -0x200068) +
                                            -0x200068) + -0x200068) + -0x200068) + -0x200068) +
        -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8823458e;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88117f1a;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x8e]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x45] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + -0x200068) + -0x200068) + -0x200068) +
                          -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x88234a02;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88117f1a;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][2]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x4a] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  *(uint *)(&sel_data)[on] = R0;
  R3 = *(undefined **)(*(int *)(fp + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  _alu_x = target;
  _alu_y = 0x88234c7a;
  b1 = (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x4c];
  b2 = (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23];
  b3 = (uint)(byte)(&alu_eq)[target >> 0x18][0x88];
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x7a]] +
                                                  b1 * 4)] + b2 * 4)] + b3 * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined4 **)sp;
  DAT_083e0574 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_083e0574;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  branch_temp = stack_temp;
  *(undefined4 **)(&sel_target)[on] = stack_temp;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  data_p = &jmp_d0;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void float64_lt_quiet(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x5b]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x3a] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = (undefined4 *)fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)R1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)R2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)D1;
  DAT_083e0574 = DAT_082374dc;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200068) + -0x200068);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_083e0574;
  *(undefined **)(&sel_data)[on] = sp;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(*(int *)(*(int *)(sp + -0x200068) + -0x200068) + -0x200068);
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + -0x200060) + -0x200060)
                                                     + -0x200060) + -0x200060) + -0x200060) +
                          -0x200060) + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  puVar2 = (undefined4 *)(&sel_data)[on];
  puVar3 = (undefined4 *)(&sel_data)[on];
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  stack_temp = (undefined4 *)0x882240ca;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880c4b60;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xca]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x40] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  R3 = (undefined *)R0;
  R2 = 0x7ff;
  uVar5 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R0 & 0xffff] + (uint)uRam0834c4ae * 4)] + 4);
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar5 & 0xff] +
                                                     (uVar5 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[R0 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar5 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[R0 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                     (uVar5 >> 0x10) * 4) >> 8 & 0xff)]];
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88225103;
  iVar1 = b0;
  puVar4 = (uint *)(&sel_data)[b0];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + -0x200060) + -0x200060)
                                                     + -0x200060) + -0x200060) + -0x200060) +
                          -0x200060) + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  puVar2 = (undefined4 *)(&sel_data)[on];
  puVar3 = (undefined4 *)(&sel_data)[on];
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  stack_temp = (undefined4 *)0x88224782;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880c4176;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x82]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x47] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  R3 = (undefined *)R0;
  R2 = *(uint *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + -0x200060) +
                                                                      -0x200060) + -0x200060) +
                                                    -0x200060) + -0x200060) + -0x200060) + -0x200060
                         ) + -0x200060);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  puVar2 = (undefined4 *)(&sel_data)[on];
  puVar3 = (undefined4 *)(&sel_data)[on];
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  stack_temp = (undefined4 *)0x88224be9;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880c384c;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xe9]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x4b] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[(uint)R3 >> 8 & 0xff][R0 >> 8 & 0xff],
                         (&alu_bor8)[(uint)R3 & 0xff][R0 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(uint)R3 >> 0x10 & 0xff][R0 >> 0x10 & 0xff],(undefined2)alu_s);
  alu_s = CONCAT13((&alu_bor8)[(uint)R3 >> 0x18][R0 >> 0x18],(uint3)alu_s);
  R3 = (undefined *)alu_s;
  R2 = 0;
  uVar5 = *(uint *)((&alu_add16)
                    [*(int *)((&alu_add16)[(uint3)alu_s & 0xffff] + (uint)_alu_inv16 * 4)] + 4);
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar5 & 0xff] +
                                                     (uVar5 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[alu_s >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar5 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[alu_s >> 0x10] + (uint)_alu_inv16 * 4)]
                                     + (uVar5 >> 0x10) * 4) >> 8 & 0xff)]];
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88226577;
  iVar1 = b0;
  puVar4 = (uint *)(&sel_data)[b0];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[b0] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][3]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x51] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + 
                                                  -0x200060) + -0x200060) + -0x200060) + -0x200060)
                                                  + -0x200060) + -0x200060) + -0x200060) + -0x200060
                          ) + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  puVar2 = (undefined4 *)(&sel_data)[on];
  puVar3 = (undefined4 *)(&sel_data)[on];
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  stack_temp = (undefined4 *)0x88225537;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880c4b60;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x37]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x55] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  R3 = (undefined *)R0;
  R2 = 0x7ff;
  uVar5 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R0 & 0xffff] + (uint)uRam0834c4ae * 4)] + 4);
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar5 & 0xff] +
                                                     (uVar5 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[R0 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar5 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[R0 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                     (uVar5 >> 0x10) * 4) >> 8 & 0xff)]];
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88227cad;
  iVar1 = b0;
  puVar4 = (uint *)(&sel_data)[b0];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + 
                                                  -0x200060) + -0x200060) + -0x200060) + -0x200060)
                                                  + -0x200060) + -0x200060) + -0x200060) + -0x200060
                          ) + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  puVar2 = (undefined4 *)(&sel_data)[on];
  puVar3 = (undefined4 *)(&sel_data)[on];
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  stack_temp = (undefined4 *)0x88225bfb;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880c4176;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xfb]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x5b] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  R3 = (undefined *)R0;
  R2 = *(uint *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp
                                                                                                 + 
                                                  -0x200060) + -0x200060) + -0x200060) + -0x200060)
                                                  + -0x200060) + -0x200060) + -0x200060) + -0x200060
                                  ) + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  puVar2 = (undefined4 *)(&sel_data)[on];
  puVar3 = (undefined4 *)(&sel_data)[on];
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  stack_temp = (undefined4 *)0x8822606e;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880c384c;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x6e]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x60] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[(uint)R3 >> 8 & 0xff][R0 >> 8 & 0xff],
                         (&alu_bor8)[(uint)R3 & 0xff][R0 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(uint)R3 >> 0x10 & 0xff][R0 >> 0x10 & 0xff],(undefined2)alu_s);
  alu_s = CONCAT13((&alu_bor8)[(uint)R3 >> 0x18][R0 >> 0x18],(uint3)alu_s);
  R3 = (undefined *)alu_s;
  R2 = 0;
  uVar5 = *(uint *)((&alu_add16)
                    [*(int *)((&alu_add16)[(uint3)alu_s & 0xffff] + (uint)_alu_inv16 * 4)] + 4);
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar5 & 0xff] +
                                                     (uVar5 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[alu_s >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar5 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[alu_s >> 0x10] + (uint)_alu_inv16 * 4)]
                                     + (uVar5 >> 0x10) * 4) >> 8 & 0xff)]];
  b0 = *(int *)((&and)[zf] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88227cad;
  iVar1 = b0;
  puVar4 = (uint *)(&sel_data)[b0];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[b0] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x77]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x65] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + -0x200060) + -0x200060)
                                                     + -0x200060) + -0x200060) + -0x200060) +
                          -0x200060) + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  puVar2 = (undefined4 *)(&sel_data)[on];
  puVar3 = (undefined4 *)(&sel_data)[on];
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  stack_temp = (undefined4 *)0x8822699f;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880a765e;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x9f]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x69] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  R3 = (undefined *)R0;
  R2 = 0;
  uVar5 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R0 & 0xffff] + (uint)_alu_inv16 * 4)] + 4);
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar5 & 0xff] +
                                                     (uVar5 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[R0 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar5 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[R0 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                     (uVar5 >> 0x10) * 4) >> 8 & 0xff)]];
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x882274bc;
  iVar1 = b0;
  puVar4 = (uint *)(&sel_data)[b0];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + 
                                                  -0x200060) + -0x200060) + -0x200060) + -0x200060)
                                                  + -0x200060) + -0x200060) + -0x200060) + -0x200060
                          ) + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  puVar2 = (undefined4 *)(&sel_data)[on];
  puVar3 = (undefined4 *)(&sel_data)[on];
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  stack_temp = (undefined4 *)0x88227063;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880a765e;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][99]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x70] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  R3 = (undefined *)R0;
  R2 = 0;
  uVar5 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R0 & 0xffff] + (uint)_alu_inv16 * 4)] + 4);
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar5 & 0xff] +
                                                     (uVar5 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[R0 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar5 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[R0 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                     (uVar5 >> 0x10) * 4) >> 8 & 0xff)]];
  b0 = *(int *)((&and)[zf] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88227a09;
  iVar1 = b0;
  puVar4 = (uint *)(&sel_data)[b0];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[b0] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xbc]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x74] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = (undefined *)0x10;
  stack_temp = (undefined4 *)0x10;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x88227800;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88098b0e;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)*(&alu_eq)[target & 0xff]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x78] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][9]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x7a] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R0 = 0;
  *(undefined4 *)(&sel_target)[on] = 0x8822b0ba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xad]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x7c] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + -0x200060) + -0x200060)
                                                     + -0x200060) + -0x200060) + -0x200060) +
                          -0x200060) + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  puVar2 = (undefined4 *)(&sel_data)[on];
  puVar3 = (undefined4 *)(&sel_data)[on];
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  stack_temp = (undefined4 *)0x882280d5;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880c5855;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xd5]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x80] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + 
                                                  -0x200060) + -0x200060) + -0x200060) + -0x200060)
                                                  + -0x200060) + -0x200060) + -0x200060) + -0x200060
                          ) + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] +
                4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)sp >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)sp & 0xffff] + (uint)uRam0834b4c0 * 4)] + 4)
               >> 0x10) * 4) << 0x10;
  puVar2 = (undefined4 *)(&sel_data)[on];
  puVar3 = (undefined4 *)(&sel_data)[on];
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  stack_temp = (undefined4 *)0x8822856d;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880c5855;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x6d]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x85] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = *(uint *)(&sel_data)[on];
  uVar5 = *(uint *)((&alu_add16)
                    [*(int *)((&alu_add16)[(uint)R3 & 0xffff] +
                             (uint)*(ushort *)(&alu_inv16 + (R2 & 0xffff) * 2) * 4)] + 4);
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar5 & 0xff] +
                                                     (uVar5 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                                            (uint)*(ushort *)
                                                                   (&alu_inv16 + (R2 >> 0x10) * 2) *
                                                            4)] + (uVar5 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                               (uint)*(ushort *)(&alu_inv16 + (R2 >> 0x10) * 2) * 4)
                                      ] + (uVar5 >> 0x10) * 4) >> 8 & 0xff)]];
  b0 = *(int *)((&and)[zf] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88229b70;
  iVar1 = b0;
  puVar2 = (undefined4 *)(&sel_data)[b0];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 0;
  uVar5 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)_alu_inv16 * 4)] +
                   4);
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar5 & 0xff] +
                                                     (uVar5 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar5 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                               (uint)_alu_inv16 * 4)] + (uVar5 >> 0x10) * 4) >> 8 &
                           0xff)]];
  b0 = *(int *)((&and)[zf] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88229687;
  iVar1 = b0;
  puVar2 = (undefined4 *)(&sel_data)[b0];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[b0] = 0;
  uVar5 = *(uint *)(&sel_data)[on];
  uVar6 = *(uint *)(&sel_data)[on];
  alu_s._0_2_ = CONCAT11((&alu_bor8)[uVar5 >> 8 & 0xff][uVar6 >> 8 & 0xff],
                         (&alu_bor8)[uVar5 & 0xff][uVar6 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[uVar5 >> 0x10 & 0xff][uVar6 >> 0x10 & 0xff],(undefined2)alu_s);
  _alu_sx = 1;
  _alu_sc = (uint)(byte)*alu_bor8;
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = CONCAT31((uint3)(byte)(&alu_true)[_alu_sc],1);
  alu_s1 = 0;
  alu_s2 = 0;
  DAT_083e048d = 0;
  alu_s3 = 0;
  DAT_083e0499 = 0;
  DAT_083e049a = 0;
  puVar7 = (&alu_lshu8)[(&alu_clamp32)[_alu_sc]];
  _alu_s0 = *(uint *)(puVar7 + ((uint3)alu_s & 0xff) * 4);
  uVar8 = *(uint *)(puVar7 + (uint)(byte)(&alu_bor8)[uVar5 >> 8 & 0xff][uVar6 >> 8 & 0xff] * 4);
  DAT_083e0481 = (undefined)uVar8;
  DAT_083e0482 = (byte)(uVar8 >> 8);
  DAT_083e0483 = (byte)(uVar8 >> 0x10);
  uRam083e0484 = (undefined)(uVar8 >> 0x18);
  uVar9 = *(uint *)(puVar7 + (uint)(byte)(&alu_bor8)[uVar5 >> 0x10 & 0xff][uVar6 >> 0x10 & 0xff] * 4
                   );
  DAT_083e048e = (undefined)uVar9;
  DAT_083e048f = (byte)(uVar9 >> 8);
  uRam083e0490 = (undefined2)(uVar9 >> 0x10);
  _DAT_083e049b = *(uint *)(puVar7 + (uint)(byte)(&alu_bor8)[uVar5 >> 0x18][uVar6 >> 0x18] * 4);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[_alu_s0 >> 8 & 0xff][uVar8 & 0xff],*(&alu_bor8)[_alu_s0 & 0xff]
                        );
  alu_s._0_3_ = CONCAT12((&alu_bor8)[_alu_s0 >> 0x10 & 0xff][DAT_083e0482],(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11(*(&alu_bor8)[((uint3)alu_s & 0xff00) >> 8],
                         *(&alu_bor8)[(uint3)alu_s & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(byte)(&alu_bor8)[_alu_s0 >> 0x10 & 0xff][DAT_083e0482]]
                         [uVar9 & 0xff],(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11(*(&alu_bor8)[((uint3)alu_s & 0xff00) >> 8],
                         *(&alu_bor8)[(uint3)alu_s & 0xff]);
  alu_s._0_3_ = CONCAT12(*(&alu_bor8)
                          [(byte)(&alu_bor8)
                                 [(byte)(&alu_bor8)[_alu_s0 >> 0x10 & 0xff][DAT_083e0482]]
                                 [uVar9 & 0xff]],(undefined2)alu_s);
  uVar8 = (uint)(uint3)alu_s;
  uVar5 = *(uint *)(&sel_data)[on];
  alu_s._0_2_ = CONCAT11((&alu_bor8)[(uVar8 & 0xff00) >> 8][uVar5 >> 8 & 0xff],
                         (&alu_bor8)[uVar8 & 0xff][uVar5 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)
                         [(byte)*(&alu_bor8)
                                 [(byte)(&alu_bor8)
                                        [(byte)(&alu_bor8)[_alu_s0 >> 0x10 & 0xff][DAT_083e0482]]
                                        [uVar9 & 0xff]]][uVar5 >> 0x10 & 0xff],(undefined2)alu_s);
  uVar6 = *(uint *)(&sel_data)[on];
  alu_s._0_2_ = CONCAT11((&alu_bor8)[(byte)(&alu_bor8)[(uVar8 & 0xff00) >> 8][uVar5 >> 8 & 0xff]]
                         [uVar6 >> 8 & 0xff],(&alu_bor8)[(uint3)alu_s & 0xff][uVar6 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)
                         [(byte)(&alu_bor8)
                                [(byte)*(&alu_bor8)
                                        [(byte)(&alu_bor8)
                                               [(byte)(&alu_bor8)[_alu_s0 >> 0x10 & 0xff]
                                                      [DAT_083e0482]][uVar9 & 0xff]]]
                                [uVar5 >> 0x10 & 0xff]][uVar6 >> 0x10 & 0xff],(undefined2)alu_s);
  alu_s = CONCAT13((&alu_bor8)
                   [(byte)(&alu_bor8)
                          [(byte)(&alu_bor8)
                                 [(byte)(&alu_bor8)
                                        [(byte)(&alu_bor8)[_alu_s0 >> 0x18][DAT_083e0483]]
                                        [DAT_083e048f]][_DAT_083e049b & 0xff]][uVar5 >> 0x18]]
                   [uVar6 >> 0x18],(uint3)alu_s);
  R3 = (undefined *)alu_s;
  R2 = 0;
  uVar5 = *(uint *)((&alu_add16)
                    [*(int *)((&alu_add16)[(uint3)alu_s & 0xffff] + (uint)_alu_inv16 * 4)] + 4);
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar5 & 0xff] +
                                                     (uVar5 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[alu_s >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar5 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[alu_s >> 0x10] + (uint)_alu_inv16 * 4)]
                                     + (uVar5 >> 0x10) * 4) >> 8 & 0xff)]];
  b0 = *(int *)((&and)[zf] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88229687;
  iVar1 = b0;
  puVar2 = (undefined4 *)(&sel_data)[b0];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R3 = (undefined *)0x1;
  *(undefined4 *)(&sel_data)[on] = 1;
  *(undefined4 *)(&sel_target)[on] = 0x8822989c;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x87]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x96] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x9c]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x98] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(*(int *)(*(int *)(fp + -0x200068) + -0x200068) + -0x200068);
  R0 = *(uint *)(&sel_data)[on];
  *(undefined4 *)(&sel_target)[on] = 0x8822b0ba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x70]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x9b] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 0;
  alu_t = 0;
  uVar5 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)_alu_inv16 * 4)] +
                   4);
  uVar6 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                   (uVar5 >> 0x10) * 4);
  _DAT_083e045e = (undefined2)uVar6;
  cf._0_1_ = (&alu_false)[uVar6 >> 0x10 & 0xff];
  alu_s._3_1_ = (byte)(uVar6 >> 8);
  sf._0_1_ = (undefined)*(undefined4 *)(&alu_b7 + (uint)alu_s._3_1_ * 4);
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar5 & 0xff] +
                                                     (uVar5 >> 8 & 0xff)] + (uVar6 & 0xff)] +
                           (uint)alu_s._3_1_]];
  of._0_1_ = (undefined)
             **(undefined4 **)
               (*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4)] +
                        *(uint *)(&alu_b7 +
                                 (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4) * 4
                        ) +
               *(int *)(&alu_b7 +
                       (*(uint *)(&alu_b7 +
                                 (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4) &
                        0xffffff00 | (uint)alu_s._3_1_) * 4) * 4);
  b0 = *(int *)((&and)[zf] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x8822a6a2;
  iVar1 = b0;
  puVar2 = (undefined4 *)(&sel_data)[b0];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[b0] = 0;
  stack_temp = *(undefined4 **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = (undefined4 *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822a38c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88095d0f;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x8c]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xa3] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)
        (*(int *)(*(int *)(*(int *)(sp + -0x200060) + -0x200060) + -0x200060) + -0x200060);
  R3 = (undefined *)R0;
  *(uint *)(&sel_data)[on] = R0;
  *(undefined4 *)(&sel_target)[on] = 0x8822aea6;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xa2]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xa6] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = *(undefined4 **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = (undefined4 *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822ac50;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88095d0f;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x50]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xac] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)
        (*(int *)(*(int *)(*(int *)(sp + -0x200060) + -0x200060) + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xa6]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xae] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(*(int *)(*(int *)(fp + -0x200068) + -0x200068) + -0x200068);
  R0 = *(uint *)(&sel_data)[on];
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xba]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xb0] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined4 **)sp;
  DAT_083e0574 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_083e0574;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_target)[on] = stack_temp;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xa6]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xb5] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = (undefined4 *)fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)R1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)R2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)D1;
  DAT_083e0574 = DAT_082374dc;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200068) + -0x200068);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_083e0574;
  *(undefined **)(&sel_data)[on] = sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200068) + -0x200068);
  R3 = &DAT_082374a5;
  F1 = *(undefined4 *)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = F1;
  *(undefined4 *)(&sel_target)[on] = 0x8822d136;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xce]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xba] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(fp + -0x200068);
  F1 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822be36;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8822dd0d;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x36]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xbe] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = F0;
  R3 = *(undefined **)(*(int *)(fp + -0x200068) + -0x200068);
  F1 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = &D0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822c24a;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880f3b5e;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x4a]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xc2] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  D1 = D0;
  DAT_082374dc = DAT_082374d4;
  stack_temp = (undefined4 *)D0;
  DAT_083e0574 = DAT_082374d4;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200068) + -0x200068);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_083e0574;
  R3 = *(undefined **)(fp + -0x200068);
  F1 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = &D0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822c6ae;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880f3b5e;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xae]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xc6] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  D1 = D0;
  DAT_082374dc = DAT_082374d4;
  stack_temp = (undefined4 *)D0;
  DAT_083e0574 = DAT_082374d4;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200068) + -0x200068);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_083e0574;
  stack_temp = (undefined4 *)(s_I_sin___4f_____4f_08237492 + 2);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  iVar1 = *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34850_0826d418 + 0x20000)] +
                  (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_51858_0827ddd8] >> 0x10) * 4);
  alu_s = *(uint *)(&alu_add16)[*(int *)PTR_alu_add16_51858_0827ddd8] & 0xffff | iVar1 << 0x10;
  alu_c._0_1_ = (undefined)iVar1;
  alu_c._1_1_ = (undefined)((uint)iVar1 >> 8);
  alu_c._2_2_ = (undefined2)((uint)iVar1 >> 0x10);
  stack_temp = (undefined4 *)alu_s;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  _external = printf;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)
        (*(int *)(*(int *)(*(int *)(*(int *)(sp + -0x200060) + -0x200060) + -0x200060) + -0x200060)
        + -0x200060);
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x18]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xcb] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = &DAT_08237490;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822cef8;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88117f1a;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xf8]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xce] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x36]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xd1] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = &DAT_0823748c;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822d516;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x881542dc;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x16]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xd5] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  b0 = *(int *)((&and)[(byte)(&alu_true)[R0 & 0xff]] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x8822bace;
  iVar1 = b0;
  puVar4 = (uint *)(&sel_data)[b0];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R0 = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x21]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xd8] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined4 **)sp;
  DAT_083e0574 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_083e0574;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_target)[on] = stack_temp;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xd]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xdd] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = (undefined4 *)fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)R1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)R2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)D1;
  DAT_083e0574 = DAT_082374dc;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200068) + -0x200068);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_083e0574;
  *(undefined **)(&sel_data)[on] = sp;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int 
                                                  *)(*(int *)(*(int *)(*(int *)(sp + -0x200068) +
                                                                      -0x200068) + -0x200068) +
                                                    -0x200068) + -0x200068) + -0x200068) + -0x200068
                                                  ) + -0x200068) + -0x200068) + -0x200068) +
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                                  + -0x200068) + -0x200068) + -0x200068) + -0x200068
                          ) + -0x200068) + -0x200068);
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + -0x200060) + -0x200060)
                                                     + -0x200060) + -0x200060) + -0x200060) +
                          -0x200060) + -0x200060) + -0x200060);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822e3f4;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xf4]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xe3] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = *(undefined **)(fp + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822e83e;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x3e]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xe8] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = &DAT_08237484;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822edee;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x881272ff;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xee]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xed] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(fp + -0x200068) +
                                                                  -0x200068) + -0x200068) +
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                                  + -0x200068) + -0x200068) + -0x200068) + -0x200068
                                   ) + -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822f233;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88119f6a;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x33]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xf2] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(fp + -0x200068) + -0x200068) +
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                                  + -0x200068) + -0x200068) + -0x200068) + -0x200068
                                   ) + -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822f672;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x72]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xf6] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = *(undefined **)(*(int *)(*(int *)(fp + -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822fb10;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x10]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xfb] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = &DAT_08237480;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x882300c6;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x881272ff;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xc6]] +
                                                  (uint)(byte)*(&alu_eq)[target >> 8 & 0xff] * 4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + 
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                                  + -0x200068) + -0x200068) + -0x200068) + -0x200068
                                                  ) + -0x200068) + -0x200068) + -0x200068) +
                                            -0x200068) + -0x200068) + -0x200068) + -0x200068) +
        -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x88230517;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88119f6a;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x17]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][5] * 4)]
                                  + (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(*(int *)(fp + -0x200068)
                                                                           + -0x200068) + -0x200068)
                                                         + -0x200068) + -0x200068) + -0x200068) +
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                            + -0x200068) + -0x200068) + -0x200068) + -0x200068) +
        -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x88230962;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x62]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][9] * 4)]
                                  + (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = &DAT_0823747c;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x88230d53;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x881272ff;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x53]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xd] * 4
                                                  )] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = *(undefined **)(*(int *)(*(int *)(fp + -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x882311df;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xdf]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x11] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = &DAT_08237478;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x882317b9;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x881272ff;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xb9]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x17] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int 
                                                  *)(*(int *)(fp + -0x200068) + -0x200068) +
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                                  + -0x200068) + -0x200068) + -0x200068) + -0x200068
                                                  ) + -0x200068) + -0x200068) + -0x200068) +
                                            -0x200068) + -0x200068) + -0x200068) + -0x200068) +
        -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x88231c16;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88119f6a;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x16]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x1c] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int 
                                                  *)(fp + -0x200068) + -0x200068) + -0x200068) +
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                                  + -0x200068) + -0x200068) + -0x200068) + -0x200068
                                                  ) + -0x200068) + -0x200068) + -0x200068) +
                          -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8823206d;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x6d]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x20] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = &DAT_08237474;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8823245e;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x881272ff;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x5e]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x24] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = *(undefined **)(*(int *)(*(int *)(fp + -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x882328f6;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xf6]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x28] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = &DAT_08237470;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x88232f18;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x881272ff;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x18]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x2f] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int 
                                                  *)(*(int *)(*(int *)(*(int *)(fp + -0x200068) +
                                                                      -0x200068) + -0x200068) +
                                                    -0x200068) + -0x200068) + -0x200068) + -0x200068
                                                  ) + -0x200068) + -0x200068) + -0x200068) +
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                                  + -0x200068) + -0x200068) + -0x200068) + -0x200068
                          ) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x88233381;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88119f6a;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x81]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x33] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int 
                                                  *)(*(int *)(*(int *)(fp + -0x200068) + -0x200068)
                                                    + -0x200068) + -0x200068) + -0x200068) +
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                                  + -0x200068) + -0x200068) + -0x200068) + -0x200068
                                                  ) + -0x200068) + -0x200068) + -0x200068) +
                          -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x882337e4;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xe4]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x37] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = &DAT_0823746c;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x88233bd5;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x881272ff;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xd5]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x3b] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + -0x200068) + -0x200068)
                                                     + -0x200068) + -0x200068) + -0x200068) +
                          -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x88234114;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88117f1a;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x14]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x41] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + -0x200068) + -0x200068) +
                                            -0x200068) + -0x200068) + -0x200068) + -0x200068) +
        -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8823458e;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88117f1a;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x8e]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x45] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + -0x200068) + -0x200068) + -0x200068) +
                          -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x88234a02;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88117f1a;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][2]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x4a] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  *(uint *)(&sel_data)[on] = R0;
  R3 = *(undefined **)(*(int *)(fp + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  _alu_x = target;
  _alu_y = 0x88234c7a;
  b1 = (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x4c];
  b2 = (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23];
  b3 = (uint)(byte)(&alu_eq)[target >> 0x18][0x88];
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x7a]] +
                                                  b1 * 4)] + b2 * 4)] + b3 * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined4 **)sp;
  DAT_083e0574 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_083e0574;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  branch_temp = stack_temp;
  *(undefined4 **)(&sel_target)[on] = stack_temp;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  data_p = &jmp_d0;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void main(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xa6]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xb5] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = (undefined4 *)fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)R1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)R2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)D1;
  DAT_083e0574 = DAT_082374dc;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200068) + -0x200068);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_083e0574;
  *(undefined **)(&sel_data)[on] = sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200068) + -0x200068);
  R3 = &DAT_082374a5;
  F1 = *(undefined4 *)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = F1;
  *(undefined4 *)(&sel_target)[on] = 0x8822d136;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xce]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xba] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(fp + -0x200068);
  F1 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822be36;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8822dd0d;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x36]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xbe] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = F0;
  R3 = *(undefined **)(*(int *)(fp + -0x200068) + -0x200068);
  F1 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = &D0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822c24a;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880f3b5e;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x4a]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xc2] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  D1 = D0;
  DAT_082374dc = DAT_082374d4;
  stack_temp = (undefined4 *)D0;
  DAT_083e0574 = DAT_082374d4;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200068) + -0x200068);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_083e0574;
  R3 = *(undefined **)(fp + -0x200068);
  F1 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = &D0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822c6ae;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880f3b5e;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xae]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xc6] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  D1 = D0;
  DAT_082374dc = DAT_082374d4;
  stack_temp = (undefined4 *)D0;
  DAT_083e0574 = DAT_082374d4;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200068) + -0x200068);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_083e0574;
  stack_temp = (undefined4 *)(s_I_sin___4f_____4f_08237492 + 2);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  alu_c = *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34850_0826d418 + 0x20000)] +
                  (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_51858_0827ddd8] >> 0x10) * 4);
  alu_s = *(uint *)(&alu_add16)[*(int *)PTR_alu_add16_51858_0827ddd8] & 0xffff | alu_c << 0x10;
  stack_temp = (undefined4 *)alu_s;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  _external = printf;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)
        (*(int *)(*(int *)(*(int *)(*(int *)(sp + -0x200060) + -0x200060) + -0x200060) + -0x200060)
        + -0x200060);
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x18]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xcb] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = &DAT_08237490;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822cef8;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88117f1a;
  iVar1 = on;
  puVar3 = (uint *)(&sel_data)[on];
  *puVar3 = R0;
  puVar3[1] = R1;
  puVar3[2] = R2;
  puVar3[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xf8]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xce] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x36]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xd1] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = &DAT_0823748c;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822d516;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x881542dc;
  iVar1 = on;
  puVar3 = (uint *)(&sel_data)[on];
  *puVar3 = R0;
  puVar3[1] = R1;
  puVar3[2] = R2;
  puVar3[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x16]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xd5] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  b0 = *(int *)((&and)[(byte)(&alu_true)[R0 & 0xff]] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x8822bace;
  iVar1 = b0;
  puVar3 = (uint *)(&sel_data)[b0];
  *puVar3 = R0;
  puVar3[1] = R1;
  puVar3[2] = R2;
  puVar3[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R0 = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x21]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xd8] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined4 **)sp;
  DAT_083e0574 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_083e0574;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_target)[on] = stack_temp;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xd]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xdd] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = (undefined4 *)fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)R1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)R2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)D1;
  DAT_083e0574 = DAT_082374dc;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200068) + -0x200068);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_083e0574;
  *(undefined **)(&sel_data)[on] = sp;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int 
                                                  *)(*(int *)(*(int *)(*(int *)(sp + -0x200068) +
                                                                      -0x200068) + -0x200068) +
                                                    -0x200068) + -0x200068) + -0x200068) + -0x200068
                                                  ) + -0x200068) + -0x200068) + -0x200068) +
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                                  + -0x200068) + -0x200068) + -0x200068) + -0x200068
                          ) + -0x200068) + -0x200068);
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + -0x200060) + -0x200060)
                                                     + -0x200060) + -0x200060) + -0x200060) +
                          -0x200060) + -0x200060) + -0x200060);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822e3f4;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xf4]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xe3] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = *(undefined **)(fp + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822e83e;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x3e]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xe8] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = &DAT_08237484;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822edee;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x881272ff;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xee]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xed] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(fp + -0x200068) +
                                                                  -0x200068) + -0x200068) +
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                                  + -0x200068) + -0x200068) + -0x200068) + -0x200068
                                   ) + -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822f233;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88119f6a;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x33]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xf2] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(fp + -0x200068) + -0x200068) +
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                                  + -0x200068) + -0x200068) + -0x200068) + -0x200068
                                   ) + -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822f672;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x72]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xf6] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = *(undefined **)(*(int *)(*(int *)(fp + -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8822fb10;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x10]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xfb] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = &DAT_08237480;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x882300c6;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x881272ff;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xc6]] +
                                                  (uint)(byte)*(&alu_eq)[target >> 8 & 0xff] * 4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + 
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                                  + -0x200068) + -0x200068) + -0x200068) + -0x200068
                                                  ) + -0x200068) + -0x200068) + -0x200068) +
                                            -0x200068) + -0x200068) + -0x200068) + -0x200068) +
        -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x88230517;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88119f6a;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x17]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][5] * 4)]
                                  + (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(*(int *)(fp + -0x200068)
                                                                           + -0x200068) + -0x200068)
                                                         + -0x200068) + -0x200068) + -0x200068) +
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                            + -0x200068) + -0x200068) + -0x200068) + -0x200068) +
        -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x88230962;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x62]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][9] * 4)]
                                  + (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = &DAT_0823747c;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x88230d53;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x881272ff;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x53]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xd] * 4
                                                  )] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = *(undefined **)(*(int *)(*(int *)(fp + -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x882311df;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xdf]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x11] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = &DAT_08237478;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x882317b9;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x881272ff;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xb9]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x17] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int 
                                                  *)(*(int *)(fp + -0x200068) + -0x200068) +
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                                  + -0x200068) + -0x200068) + -0x200068) + -0x200068
                                                  ) + -0x200068) + -0x200068) + -0x200068) +
                                            -0x200068) + -0x200068) + -0x200068) + -0x200068) +
        -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x88231c16;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88119f6a;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x16]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x1c] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int 
                                                  *)(fp + -0x200068) + -0x200068) + -0x200068) +
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                                  + -0x200068) + -0x200068) + -0x200068) + -0x200068
                                                  ) + -0x200068) + -0x200068) + -0x200068) +
                          -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8823206d;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x6d]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x20] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = &DAT_08237474;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8823245e;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x881272ff;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x5e]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x24] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = *(undefined **)(*(int *)(*(int *)(fp + -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x882328f6;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xf6]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x28] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = &DAT_08237470;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x88232f18;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x881272ff;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x18]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x2f] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int 
                                                  *)(*(int *)(*(int *)(*(int *)(fp + -0x200068) +
                                                                      -0x200068) + -0x200068) +
                                                    -0x200068) + -0x200068) + -0x200068) + -0x200068
                                                  ) + -0x200068) + -0x200068) + -0x200068) +
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                                  + -0x200068) + -0x200068) + -0x200068) + -0x200068
                          ) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x88233381;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88119f6a;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x81]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x33] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int 
                                                  *)(*(int *)(*(int *)(fp + -0x200068) + -0x200068)
                                                    + -0x200068) + -0x200068) + -0x200068) +
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                                  + -0x200068) + -0x200068) + -0x200068) + -0x200068
                                                  ) + -0x200068) + -0x200068) + -0x200068) +
                          -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x882337e4;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xe4]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x37] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = &DAT_0823746c;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x88233bd5;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x881272ff;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xd5]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x3b] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + -0x200068) + -0x200068)
                                                     + -0x200068) + -0x200068) + -0x200068) +
                          -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x88234114;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88117f1a;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x14]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x41] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + -0x200068) + -0x200068) +
                                            -0x200068) + -0x200068) + -0x200068) + -0x200068) +
        -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x8823458e;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88117f1a;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x8e]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x45] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(uint *)(&sel_data)[on] = R0;
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + -0x200068) + -0x200068) + -0x200068) +
                          -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined4 *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined4 *)0x88234a02;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88117f1a;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][2]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x4a] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  *(uint *)(&sel_data)[on] = R0;
  R3 = *(undefined **)(*(int *)(fp + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  _alu_x = target;
  _alu_y = 0x88234c7a;
  b1 = (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x4c];
  b2 = (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23];
  b3 = (uint)(byte)(&alu_eq)[target >> 0x18][0x88];
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x7a]] +
                                                  b1 * 4)] + b2 * 4)] + b3 * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined4 **)sp;
  DAT_083e0574 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_083e0574;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined4 **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  branch_temp = stack_temp;
  *(undefined4 **)(&sel_target)[on] = stack_temp;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  data_p = &jmp_d0;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

double sin(double __x)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xd]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xdd] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)R1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)R2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)D1;
  DAT_083e0574 = DAT_082374dc;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200068) + -0x200068);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_083e0574;
  *(undefined **)(&sel_data)[on] = sp;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int 
                                                  *)(*(int *)(*(int *)(*(int *)(sp + -0x200068) +
                                                                      -0x200068) + -0x200068) +
                                                    -0x200068) + -0x200068) + -0x200068) + -0x200068
                                                  ) + -0x200068) + -0x200068) + -0x200068) +
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                                  + -0x200068) + -0x200068) + -0x200068) + -0x200068
                          ) + -0x200068) + -0x200068);
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + -0x200060) + -0x200060)
                                                     + -0x200060) + -0x200060) + -0x200060) +
                          -0x200060) + -0x200060) + -0x200060);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x8822e3f4;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xf4]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xe3] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(undefined4 *)(&sel_data)[on] = R0;
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = *(undefined **)(fp + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x8822e83e;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x3e]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xe8] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(undefined4 *)(&sel_data)[on] = R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = &DAT_08237484;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x8822edee;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x881272ff;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xee]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xed] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(fp + -0x200068) +
                                                                  -0x200068) + -0x200068) +
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                                  + -0x200068) + -0x200068) + -0x200068) + -0x200068
                                   ) + -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x8822f233;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88119f6a;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x33]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xf2] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(fp + -0x200068) + -0x200068) +
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                                  + -0x200068) + -0x200068) + -0x200068) + -0x200068
                                   ) + -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x8822f672;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x72]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xf6] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(undefined4 *)(&sel_data)[on] = R0;
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = *(undefined **)(*(int *)(*(int *)(fp + -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x8822fb10;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x10]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xfb] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x22] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(undefined4 *)(&sel_data)[on] = R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = &DAT_08237480;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x882300c6;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x881272ff;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xc6]] +
                                                  (uint)(byte)*(&alu_eq)[target >> 8 & 0xff] * 4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + 
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                                  + -0x200068) + -0x200068) + -0x200068) + -0x200068
                                                  ) + -0x200068) + -0x200068) + -0x200068) +
                                            -0x200068) + -0x200068) + -0x200068) + -0x200068) +
        -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88230517;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88119f6a;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x17]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][5] * 4)]
                                  + (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(*(int *)(fp + -0x200068)
                                                                           + -0x200068) + -0x200068)
                                                         + -0x200068) + -0x200068) + -0x200068) +
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                            + -0x200068) + -0x200068) + -0x200068) + -0x200068) +
        -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88230962;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x62]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][9] * 4)]
                                  + (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = &DAT_0823747c;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88230d53;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x881272ff;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x53]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xd] * 4
                                                  )] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(undefined4 *)(&sel_data)[on] = R0;
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = *(undefined **)(*(int *)(*(int *)(fp + -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x882311df;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xdf]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x11] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(undefined4 *)(&sel_data)[on] = R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = &DAT_08237478;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x882317b9;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x881272ff;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xb9]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x17] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int 
                                                  *)(*(int *)(fp + -0x200068) + -0x200068) +
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                                  + -0x200068) + -0x200068) + -0x200068) + -0x200068
                                                  ) + -0x200068) + -0x200068) + -0x200068) +
                                            -0x200068) + -0x200068) + -0x200068) + -0x200068) +
        -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88231c16;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88119f6a;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x16]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x1c] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int 
                                                  *)(fp + -0x200068) + -0x200068) + -0x200068) +
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                                  + -0x200068) + -0x200068) + -0x200068) + -0x200068
                                                  ) + -0x200068) + -0x200068) + -0x200068) +
                          -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x8823206d;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x6d]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x20] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = &DAT_08237474;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x8823245e;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x881272ff;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x5e]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x24] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(undefined4 *)(&sel_data)[on] = R0;
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = *(undefined **)(*(int *)(*(int *)(fp + -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x882328f6;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xf6]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x28] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(undefined4 *)(&sel_data)[on] = R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = &DAT_08237470;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88232f18;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x881272ff;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x18]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x2f] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int 
                                                  *)(*(int *)(*(int *)(*(int *)(fp + -0x200068) +
                                                                      -0x200068) + -0x200068) +
                                                    -0x200068) + -0x200068) + -0x200068) + -0x200068
                                                  ) + -0x200068) + -0x200068) + -0x200068) +
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                                  + -0x200068) + -0x200068) + -0x200068) + -0x200068
                          ) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88233381;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88119f6a;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x81]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x33] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int 
                                                  *)(*(int *)(*(int *)(fp + -0x200068) + -0x200068)
                                                    + -0x200068) + -0x200068) + -0x200068) +
                                                  -0x200068) + -0x200068) + -0x200068) + -0x200068)
                                                  + -0x200068) + -0x200068) + -0x200068) + -0x200068
                                                  ) + -0x200068) + -0x200068) + -0x200068) +
                          -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x882337e4;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8811bfba;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xe4]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x37] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  R3 = &DAT_0823746c;
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88233bd5;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x881272ff;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xd5]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x3b] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(undefined4 *)(&sel_data)[on] = R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + -0x200068) + -0x200068)
                                                     + -0x200068) + -0x200068) + -0x200068) +
                          -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88234114;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88117f1a;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x14]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x41] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(undefined4 *)(&sel_data)[on] = R0;
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + -0x200068) + -0x200068) +
                                            -0x200068) + -0x200068) + -0x200068) + -0x200068) +
        -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x8823458e;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88117f1a;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x8e]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x45] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  *(undefined4 *)(&sel_data)[on] = R0;
  F1 = *(undefined4 *)(&sel_data)[on];
  R3 = *(undefined **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(fp + -0x200068) + -0x200068) + -0x200068) +
                          -0x200068) + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  stack_temp = (undefined *)F0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88234a02;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88117f1a;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][2]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x4a] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  F1 = R0;
  *(undefined4 *)(&sel_data)[on] = R0;
  R3 = *(undefined **)(*(int *)(fp + -0x200068) + -0x200068);
  F0 = *(undefined4 *)(&sel_data)[on];
  _alu_x = target;
  _alu_y = 0x88234c7a;
  b1 = (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x4c];
  b2 = (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][0x23];
  b3 = (uint)(byte)(&alu_eq)[target >> 0x18][0x88];
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x7a]] +
                                                  b1 * 4)] + b2 * 4)] + b3 * 4);
  b0 = iVar1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar1] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_087e060c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_087e0614;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_083e0574 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_083e0574;
  stack_temp = *(undefined **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  branch_temp = stack_temp;
  *(undefined **)(&sel_target)[on] = stack_temp;
  iVar1 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  data_p = &jmp_d0;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_082374d4;
  puVar2[2] = D1;
  puVar2[3] = DAT_082374dc;
  *(undefined4 *)(&sel_on)[on] = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


