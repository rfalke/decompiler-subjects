typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned short    word;
typedef unsigned int    wchar32;
typedef long __clock_t;

typedef uint __uid_t;

typedef int __pid_t;

typedef void (* __sighandler_t)(int);

typedef struct __sigset_t __sigset_t, *P__sigset_t;

struct __sigset_t {
    ulong __val[32];
};

typedef struct sigaction sigaction, *Psigaction;

typedef union _union_1051 _union_1051, *P_union_1051;

typedef struct siginfo siginfo, *Psiginfo;

typedef struct siginfo siginfo_t;

typedef union _union_1031 _union_1031, *P_union_1031;

typedef struct _struct_1032 _struct_1032, *P_struct_1032;

typedef struct _struct_1033 _struct_1033, *P_struct_1033;

typedef struct _struct_1034 _struct_1034, *P_struct_1034;

typedef struct _struct_1035 _struct_1035, *P_struct_1035;

typedef struct _struct_1036 _struct_1036, *P_struct_1036;

typedef struct _struct_1037 _struct_1037, *P_struct_1037;

typedef union sigval sigval, *Psigval;

typedef union sigval sigval_t;

struct _struct_1032 {
    __pid_t si_pid;
    __uid_t si_uid;
};

union sigval {
    int sival_int;
    void * sival_ptr;
};

struct _struct_1034 {
    __pid_t si_pid;
    __uid_t si_uid;
    sigval_t si_sigval;
};

struct _struct_1035 {
    __pid_t si_pid;
    __uid_t si_uid;
    int si_status;
    __clock_t si_utime;
    __clock_t si_stime;
};

struct _struct_1037 {
    long si_band;
    int si_fd;
};

struct _struct_1033 {
    int si_tid;
    int si_overrun;
    sigval_t si_sigval;
};

struct _struct_1036 {
    void * si_addr;
};

union _union_1031 {
    int _pad[29];
    struct _struct_1032 _kill;
    struct _struct_1033 _timer;
    struct _struct_1034 _rt;
    struct _struct_1035 _sigchld;
    struct _struct_1036 _sigfault;
    struct _struct_1037 _sigpoll;
};

union _union_1051 {
    __sighandler_t sa_handler;
    void (* sa_sigaction)(int, siginfo_t *, void *);
};

struct siginfo {
    int si_signo;
    int si_errno;
    int si_code;
    union _union_1031 _sifields;
};

struct sigaction {
    union _union_1051 __sigaction_handler;
    struct __sigset_t sa_mask;
    int sa_flags;
    void (* sa_restorer)(void);
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




void FUN_080481f0(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int printf(char *__format,...)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void exit(int __status)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int iVar1;
  
  iVar1 = sigaction(__sig,__act,__oact);
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void dispatch(void)

{
                    // WARNING: Could not recover jumptable at 0x08048236. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_external)();
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void processEntry entry(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  piVar1 = *(int **)(&push + *(int *)(&push + *(int *)(&push + *(int *)(sp + -0x200068))));
  sesp = (undefined4 *)register0x00000010;
  *piVar1 = 0xb;
  piVar1[1] = (int)&sa_dispatch;
  piVar1[2] = 0;
  piVar1[-1] = 0x8048280;
  sigaction(*piVar1,(sigaction *)piVar1[1],(sigaction *)piVar1[2]);
  piVar1 = *(int **)(&push + *(int *)(&push + *(int *)(sp + -0x200068)));
  *piVar1 = 4;
  piVar1[1] = (int)&sa_loop;
  piVar1[2] = 0;
  piVar1[-1] = (int)_start0;
  sigaction(*piVar1,(sigaction *)piVar1[1],(sigaction *)piVar1[2]);
  *(undefined4 *)(&sel_on)[toggle_execution] = 1;
  toggle_execution = 0;
  stack_temp = (char *)CONCAT22((short)*(undefined4 *)
                                        ((&alu_add16)[*(int *)(&alu_add16)[(uint)sesp >> 0x10]] +
                                        (*(uint *)(&alu_add16)
                                                  [*(int *)((&alu_add16)[(uint)sesp & 0xffff] + 0x10
                                                           )] >> 0x10) * 4),
                                (short)*(uint *)(&alu_add16)
                                                [*(int *)((&alu_add16)[(uint)sesp & 0xffff] + 0x10)]
                               );
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)*sesp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)0x8804851e;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88048764;
  iVar3 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = D0;
  puVar2[1] = DAT_0804b054;
  puVar2[2] = D1;
  puVar2[3] = DAT_0804b05c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x1e]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x85] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085f418c;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f4194;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = (char *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][100]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x87] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085f418c;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f4194;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)R1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)R2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)D1;
  DAT_081f40f4 = DAT_0804b05c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_081f40f4;
  *(undefined **)(&sel_data)[on] = sp;
  R3 = s_Hello__world__0804b020;
  stack_temp = s_Hello__world__0804b020;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  _alu_c = *(undefined4 *)
            ((&alu_add16)[*(int *)(PTR_alu_add16_34820_08080f20 + 0x20000)] +
            (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_36004_080821a0] >> 0x10) * 4);
  alu_s = CONCAT22((short)_alu_c,(short)*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_36004_080821a0])
  ;
  stack_temp = (char *)alu_s;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  _external = printf;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  R0 = 0;
  _alu_x = target;
  _alu_y = 0x88048d1c;
  b1 = (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x8d];
  b2 = (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4];
  b3 = (uint)(byte)(&alu_eq)[target >> 0x18][0x88];
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x1c]] +
                                                  b1 * 4)] + b2 * 4)] + b3 * 4);
  b0 = iVar3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar3] = jmp_f1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d0;
  puVar2[1] = DAT_085f418c;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f4194;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(char **)sp;
  DAT_081f40f4 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_081f40f4;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  branch_temp = stack_temp;
  *(char **)(&sel_target)[on] = stack_temp;
  iVar3 = on;
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = F0;
  puVar2[1] = F1;
  data_p = &jmp_d0;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = D0;
  puVar2[1] = DAT_0804b054;
  puVar2[2] = D1;
  puVar2[3] = DAT_0804b05c;
  *(undefined4 *)(&sel_on)[on] = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _start0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined4 *)(&sel_on)[toggle_execution] = 1;
  toggle_execution = 0;
  stack_temp = (char *)CONCAT22((short)*(undefined4 *)
                                        ((&alu_add16)[*(int *)(&alu_add16)[(uint)sesp >> 0x10]] +
                                        (*(uint *)(&alu_add16)
                                                  [*(int *)((&alu_add16)[(uint)sesp & 0xffff] + 0x10
                                                           )] >> 0x10) * 4),
                                (short)*(uint *)(&alu_add16)
                                                [*(int *)((&alu_add16)[(uint)sesp & 0xffff] + 0x10)]
                               );
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)*sesp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)0x8804851e;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88048764;
  iVar2 = on;
  puVar1 = (undefined4 *)(&sel_data)[on];
  *puVar1 = R0;
  puVar1[1] = R1;
  puVar1[2] = R2;
  puVar1[3] = R3;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = F0;
  puVar1[1] = F1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = D0;
  puVar1[1] = DAT_0804b054;
  puVar1[2] = D1;
  puVar1[3] = DAT_0804b05c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x1e]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x85] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d0;
  puVar1[1] = DAT_085f418c;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085f4194;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = (char *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][100]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x87] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4] * 4)] +
                  (uint)(byte)(&alu_eq)[target >> 0x18][0x88] * 4);
  b0 = iVar2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d0;
  puVar1[1] = DAT_085f418c;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085f4194;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)R1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)R2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)D1;
  DAT_081f40f4 = DAT_0804b05c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar1 = (undefined4 *)(&sel_data)[on];
  *puVar1 = stack_temp;
  puVar1[1] = DAT_081f40f4;
  *(undefined **)(&sel_data)[on] = sp;
  R3 = s_Hello__world__0804b020;
  stack_temp = s_Hello__world__0804b020;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  _alu_c = *(undefined4 *)
            ((&alu_add16)[*(int *)(PTR_alu_add16_34820_08080f20 + 0x20000)] +
            (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_36004_080821a0] >> 0x10) * 4);
  alu_s = CONCAT22((short)_alu_c,(short)*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_36004_080821a0])
  ;
  stack_temp = (char *)alu_s;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  _external = printf;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  R0 = 0;
  _alu_x = target;
  _alu_y = 0x88048d1c;
  b1 = (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x8d];
  b2 = (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4];
  b3 = (uint)(byte)(&alu_eq)[target >> 0x18][0x88];
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x1c]] +
                                                  b1 * 4)] + b2 * 4)] + b3 * 4);
  b0 = iVar2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r1;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r2;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_r3;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f0;
  *(undefined4 *)(&sel_data)[iVar2] = jmp_f1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d0;
  puVar1[1] = DAT_085f418c;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085f4194;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(char **)sp;
  DAT_081f40f4 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar1 = (undefined4 *)(&sel_data)[on];
  *puVar1 = stack_temp;
  puVar1[1] = DAT_081f40f4;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  branch_temp = stack_temp;
  *(char **)(&sel_target)[on] = stack_temp;
  iVar2 = on;
  puVar1 = (undefined4 *)(&sel_data)[on];
  *puVar1 = R0;
  puVar1[1] = R1;
  puVar1[2] = R2;
  puVar1[3] = R3;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = F0;
  puVar1[1] = F1;
  data_p = &jmp_d0;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = D0;
  puVar1[1] = DAT_0804b054;
  puVar1[2] = D1;
  puVar1[3] = DAT_0804b05c;
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
  
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][100]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x87] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4] * 4)] +
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
  puVar2[1] = DAT_085f418c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f4194;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)R1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)R2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = (char *)D1;
  DAT_081f40f4 = DAT_0804b05c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_081f40f4;
  *(undefined **)(&sel_data)[on] = sp;
  R3 = s_Hello__world__0804b020;
  stack_temp = s_Hello__world__0804b020;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  _alu_c = *(undefined4 *)
            ((&alu_add16)[*(int *)(PTR_alu_add16_34820_08080f20 + 0x20000)] +
            (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_36004_080821a0] >> 0x10) * 4);
  alu_s = CONCAT22((short)_alu_c,(short)*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_36004_080821a0])
  ;
  stack_temp = (char *)alu_s;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = stack_temp;
  _external = printf;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  R0 = 0;
  _alu_x = target;
  _alu_y = 0x88048d1c;
  b1 = (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x8d];
  b2 = (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4];
  b3 = (uint)(byte)(&alu_eq)[target >> 0x18][0x88];
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x1c]] +
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
  puVar2[1] = DAT_085f418c;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f4194;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(char **)sp;
  DAT_081f40f4 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_081f40f4;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(char **)(&sel_data)[on] = stack_temp;
  stack_temp = *(char **)sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  branch_temp = stack_temp;
  *(char **)(&sel_target)[on] = stack_temp;
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
  puVar2[1] = DAT_0804b054;
  puVar2[2] = D1;
  puVar2[3] = DAT_0804b05c;
  *(undefined4 *)(&sel_on)[on] = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


