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
typedef ulong size_t;

typedef long __clock_t;

typedef uint __uid_t;

typedef int __pid_t;

typedef void (* __sighandler_t)(int);

typedef struct __sigset_t __sigset_t, *P__sigset_t;

struct __sigset_t {
    ulong __val[32];
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
    int _pad[29];
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

size_t strlen(char *__s)

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
                    // WARNING: Could not recover jumptable at 0x08048266. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_external)();
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  undefined4 uVar10;
  
  piVar1 = *(int **)(*(int *)(*(int *)(*(int *)(sp + -0x200068) + -0x200068) + -0x200068) +
                    -0x200068);
  sesp = (undefined4 *)register0x00000010;
  *piVar1 = 0xb;
  piVar1[1] = (int)&sa_dispatch;
  piVar1[2] = 0;
  piVar1[-1] = 0x80482b0;
  sigaction(*piVar1,(sigaction *)piVar1[1],(sigaction *)piVar1[2]);
  piVar1 = *(int **)(*(int *)(*(int *)(sp + -0x200068) + -0x200068) + -0x200068);
  *piVar1 = 4;
  piVar1[1] = (int)&sa_loop;
  piVar1[2] = 0;
  piVar1[-1] = (int)_start0;
  sigaction(*piVar1,(sigaction *)piVar1[1],(sigaction *)piVar1[2]);
  *(undefined4 *)(&sel_on)[toggle_execution] = 1;
  toggle_execution = 0;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)((&alu_add16)[(uint)sesp & 0xffff] + 0x10)] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(&alu_add16)[(uint)sesp >> 0x10]] +
                       (*(uint *)(&alu_add16)[*(int *)((&alu_add16)[(uint)sesp & 0xffff] + 0x10)] >>
                       0x10) * 4) << 0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)*sesp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x8804854e;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8804d158;
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
  puVar2[1] = DAT_08050084;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805008c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x4e]] +
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = (undefined *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x94]] +
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
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
  DAT_081f9124 = DAT_0805008c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200068) + -0x200068);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_081f9124;
  *(undefined **)(&sel_data)[on] = sp;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(sp + -0x200068) + -0x200068) + -0x200068) +
                          -0x200068) + -0x200068) + -0x200068);
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 0;
  uVar4 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)_alu_inv16 * 4)] +
                   4);
  cf = cf & 0xffffff00;
  sf = sf & 0xffffff00;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar4 & 0xff] +
                                                     (uVar4 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar4 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                               (uint)_alu_inv16 * 4)] + (uVar4 >> 0x10) * 4) >> 8 &
                           0xff)]];
  of = of & 0xffffff00;
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x8804b195;
  iVar3 = b0;
  puVar2 = (undefined4 *)(&sel_data)[b0];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = D0;
  puVar2[1] = DAT_08050084;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805008c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  *(undefined4 *)(&sel_data)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x81]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x8e] *
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xff]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x90] *
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  uVar4 = *(uint *)(&sel_data)[on];
  alu_s._0_2_ = CONCAT11(*(&alu_band8)[uVar4 >> 8 & 0xff],(&alu_band8)[uVar4 & 0xff][1]);
  alu_s._0_3_ = CONCAT12(*(&alu_band8)[uVar4 >> 0x10 & 0xff],(undefined2)alu_s);
  alu_s = CONCAT13(*(&alu_band8)[uVar4 >> 0x18],(uint3)alu_s);
  R3 = (undefined *)alu_s;
  R2 = 0;
  uVar4 = *(uint *)((&alu_add16)
                    [*(int *)((&alu_add16)[(uint3)alu_s & 0xffff] + (uint)_alu_inv16 * 4)] + 4);
  cf = cf & 0xffffff00;
  sf = sf & 0xffffff00;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar4 & 0xff] +
                                                     (uVar4 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[alu_s >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar4 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[alu_s >> 0x10] + (uint)_alu_inv16 * 4)]
                                     + (uVar4 >> 0x10) * 4) >> 8 & 0xff)]];
  of = of & 0xffffff00;
  b0 = *(int *)((&and)[zf] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88049b22;
  iVar3 = b0;
  puVar2 = (undefined4 *)(&sel_data)[b0];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = D0;
  puVar2[1] = DAT_08050084;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805008c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  uVar4 = *(uint *)(&sel_data)[on];
  _alu_sc = (uint)(byte)*alu_bor8;
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = CONCAT31((uint3)(byte)(&alu_true)[_alu_sc],1);
  puVar5 = (&alu_rshu8)[(&alu_clamp32)[_alu_sc]];
  uVar6 = *(uint *)(puVar5 + (uVar4 >> 0x10 & 0xff) * 4);
  uVar7 = *(uint *)(puVar5 + (uVar4 >> 0x18) * 4);
  alu_s._0_2_ = CONCAT11(alu_bor8[*(uint *)(puVar5 + (uVar4 >> 8 & 0xff) * 4) >> 0x18],
                         (&alu_bor8)[*(uint *)(puVar5 + (uVar4 & 0xff) * 4) >> 0x18]
                         [*(uint *)(puVar5 + (uVar4 >> 8 & 0xff) * 4) >> 0x10 & 0xff]);
  alu_s._0_3_ = CONCAT12(*alu_bor8,(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[((uint3)alu_s & 0xff00) >> 8][uVar6 >> 0x10 & 0xff],
                         (&alu_bor8)[(uint3)alu_s & 0xff][uVar6 >> 8 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(byte)*alu_bor8][uVar6 >> 0x18],(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[((uint3)alu_s & 0xff00) >> 8][uVar7 >> 8 & 0xff],
                         (&alu_bor8)[(uint3)alu_s & 0xff][uVar7 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(byte)(&alu_bor8)[(byte)*alu_bor8][uVar6 >> 0x18]]
                         [uVar7 >> 0x10 & 0xff],(undefined2)alu_s);
  alu_s = CONCAT13((&alu_bor8)[(byte)*(&alu_bor8)[(byte)*alu_bor8]][uVar7 >> 0x18],(uint3)alu_s);
  *(uint *)(&sel_data)[on] = alu_s;
  uVar4 = *(uint *)(&sel_data)[on];
  R2 = 0xedb88320;
  alu_s._0_2_ = CONCAT11((&alu_bxor8)[uVar4 >> 8 & 0xff][0x83],(&alu_bxor8)[uVar4 & 0xff][0x20]);
  alu_s._0_3_ = CONCAT12((&alu_bxor8)[uVar4 >> 0x10 & 0xff][0xb8],(undefined2)alu_s);
  alu_s = CONCAT13((&alu_bxor8)[uVar4 >> 0x18][0xed],(uint3)alu_s);
  R3 = (undefined *)alu_s;
  *(uint *)(&sel_data)[on] = alu_s;
  *(undefined4 *)(&sel_target)[on] = 0x8804a050;
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
  puVar2[1] = DAT_08050084;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805008c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x22]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x9b] *
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  uVar4 = *(uint *)(&sel_data)[on];
  _alu_sc = (uint)(byte)*alu_bor8;
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = CONCAT31((uint3)(byte)(&alu_true)[_alu_sc],1);
  puVar5 = (&alu_rshu8)[(&alu_clamp32)[_alu_sc]];
  uVar6 = *(uint *)(puVar5 + (uVar4 >> 0x10 & 0xff) * 4);
  uVar7 = *(uint *)(puVar5 + (uVar4 >> 0x18) * 4);
  alu_s._0_2_ = CONCAT11(alu_bor8[*(uint *)(puVar5 + (uVar4 >> 8 & 0xff) * 4) >> 0x18],
                         (&alu_bor8)[*(uint *)(puVar5 + (uVar4 & 0xff) * 4) >> 0x18]
                         [*(uint *)(puVar5 + (uVar4 >> 8 & 0xff) * 4) >> 0x10 & 0xff]);
  alu_s._0_3_ = CONCAT12(*alu_bor8,(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[((uint3)alu_s & 0xff00) >> 8][uVar6 >> 0x10 & 0xff],
                         (&alu_bor8)[(uint3)alu_s & 0xff][uVar6 >> 8 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(byte)*alu_bor8][uVar6 >> 0x18],(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[((uint3)alu_s & 0xff00) >> 8][uVar7 >> 8 & 0xff],
                         (&alu_bor8)[(uint3)alu_s & 0xff][uVar7 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(byte)(&alu_bor8)[(byte)*alu_bor8][uVar6 >> 0x18]]
                         [uVar7 >> 0x10 & 0xff],(undefined2)alu_s);
  alu_s = CONCAT13((&alu_bor8)[(byte)*(&alu_bor8)[(byte)*alu_bor8]][uVar7 >> 0x18],(uint3)alu_s);
  *(uint *)(&sel_data)[on] = alu_s;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x50]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xa0] *
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x2a]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xa2] *
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(uint *)(&sel_data)[on] =
       *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] & 0xffff
       | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                 (*(uint *)(&alu_add16)
                           [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] >> 0x10)
                 * 4) << 0x10;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 8;
  alu_s = *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                  (*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)uRam08164070 * 4)] +
                            4) >> 0x10) * 4) << 0x10;
  cf = cf & 0xffffff00;
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
  zf = zf & 0xffffff00;
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           & 0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)((&xor)[sf] + of * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x880490ff;
  iVar3 = b0;
  puVar2 = (undefined4 *)(&sel_data)[b0];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = D0;
  puVar2[1] = DAT_08050084;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805008c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xcf]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xab] *
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(uint *)(&sel_data)[on] =
       *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] & 0xffff
       | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                 (*(uint *)(&alu_add16)
                           [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] >> 0x10)
                 * 4) << 0x10;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 0x100;
  alu_s = *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                  (*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)uRam08164260 * 4)] +
                            4) >> 0x10) * 4) << 0x10;
  cf = cf & 0xffffff00;
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
  zf = zf & 0xffffff00;
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           & 0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)((&xor)[sf] + of * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88048e81;
  iVar3 = b0;
  puVar2 = (undefined4 *)(&sel_data)[b0];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = D0;
  puVar2[1] = DAT_08050084;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805008c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  *(undefined4 *)(&sel_data)[on] = 1;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x95]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xb1] *
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  uVar4 = *(uint *)(&sel_data)[on];
  _alu_x = CONCAT11((&alu_inv8)[(uVar4 & 0xff00) >> 8],(&alu_inv8)[uVar4 & 0xff]);
  _alu_x = CONCAT12((&alu_inv8)[(uVar4 & 0xff0000) >> 0x10],_alu_x);
  _alu_x = CONCAT13((&alu_inv8)[uVar4 >> 0x18],_alu_x);
  *(uint *)(&sel_data)[on] = _alu_x;
  R2 = *(uint *)(&sel_data)[on];
  *(uint *)(&sel_data)[on] =
       *(uint *)(&alu_add16)
                [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + (R2 & 0xffff) * 4)] &
       0xffff | *(int *)((&alu_add16)
                         [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10] + (R2 >> 0x10) * 4
                                  )] +
                        (*(uint *)(&alu_add16)
                                  [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] +
                                           (R2 & 0xffff) * 4)] >> 0x10) * 4) << 0x10;
  R3 = *(undefined **)(&sel_data)[on];
  *(undefined **)(&sel_data)[on] = R3;
  *(undefined4 *)(&sel_target)[on] = 0x8804c702;
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
  puVar2[1] = DAT_08050084;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805008c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x7a]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xb7] *
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R0._0_1_ = (undefined)*(undefined4 *)(&alu_sex8 + (uint)(byte)*(&sel_data)[on] * 4);
  *(&sel_data)[on] = R0._0_1_;
  uVar4 = *(uint *)(&sel_data)[on];
  _alu_sc = (uint)(byte)*alu_bor8;
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = CONCAT31((uint3)(byte)(&alu_true)[_alu_sc],8);
  puVar5 = (&alu_rshu8)[(&alu_clamp32)[_alu_sc]];
  uVar6 = *(uint *)(puVar5 + (uVar4 >> 8 & 0xff) * 4);
  _DAT_081f902e = (undefined2)uVar6;
  uVar7 = *(uint *)(puVar5 + (uVar4 >> 0x10 & 0xff) * 4);
  DAT_081f903b = (undefined)uVar7;
  uVar8 = *(uint *)(puVar5 + (uVar4 >> 0x18) * 4);
  alu_s._0_2_ = CONCAT11(alu_bor8[uVar6 >> 0x18],
                         (&alu_bor8)[*(uint *)(puVar5 + (uVar4 & 0xff) * 4) >> 0x18]
                         [uVar6 >> 0x10 & 0xff]);
  alu_s._0_3_ = CONCAT12(*alu_bor8,(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[((uint3)alu_s & 0xff00) >> 8][uVar7 >> 0x10 & 0xff],
                         (&alu_bor8)[(uint3)alu_s & 0xff][uVar7 >> 8 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(byte)*alu_bor8][uVar7 >> 0x18],(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[((uint3)alu_s & 0xff00) >> 8][uVar8 >> 8 & 0xff],
                         (&alu_bor8)[(uint3)alu_s & 0xff][uVar8 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(byte)(&alu_bor8)[(byte)*alu_bor8][uVar7 >> 0x18]]
                         [uVar8 >> 0x10 & 0xff],(undefined2)alu_s);
  uVar6 = (uint)(uint3)alu_s;
  alu_s = CONCAT13((&alu_bor8)[(byte)*(&alu_bor8)[(byte)*alu_bor8]][uVar8 >> 0x18],(uint3)alu_s);
  R1 = alu_s;
  alu_s._0_2_ = CONCAT11(*(&alu_band8)[uVar4 >> 8 & 0xff],(&alu_band8)[uVar4 & 0xff][0xff]);
  alu_s._0_3_ = CONCAT12(*(&alu_band8)[uVar4 >> 0x10 & 0xff],(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11(*(&alu_bxor8)[(byte)*(&alu_band8)[uVar4 >> 8 & 0xff]],
                         (&alu_bxor8)[(uint3)alu_s & 0xff][(byte)*(&sel_data)[on]]);
  alu_s._0_3_ = CONCAT12(*(&alu_bxor8)[(byte)*(&alu_band8)[uVar4 >> 0x10 & 0xff]],(undefined2)alu_s)
  ;
  _alu_sx = 2;
  _alu_sc = (uint)(byte)*alu_bor8;
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = CONCAT31((uint3)(byte)(&alu_true)[_alu_sc],2);
  alu_s1 = 0;
  alu_s2 = 0;
  DAT_081f903d = 0;
  alu_s3 = 0;
  DAT_081f9049 = 0;
  DAT_081f904a = 0;
  puVar9 = (&alu_lshu8)[(&alu_clamp32)[_alu_sc]];
  iVar3 = *(int *)(puVar9 + ((uint3)alu_s & 0xff) * 4);
  _DAT_081f9021 = *(uint *)(puVar5 + (uVar4 & 0xff) * 4) & 0xffffff | iVar3 << 0x18;
  DAT_081f9025 = (undefined)((uint)iVar3 >> 8);
  DAT_081f9026 = (undefined)((uint)iVar3 >> 0x10);
  DAT_081f9027 = (undefined)((uint)iVar3 >> 0x18);
  uVar10 = *(undefined4 *)
            (puVar9 + (uint)(byte)*(&alu_bxor8)[(byte)*(&alu_band8)[uVar4 >> 8 & 0xff]] * 4);
  DAT_081f9031 = (undefined)uVar10;
  DAT_081f9032 = (undefined)((uint)uVar10 >> 8);
  DAT_081f9033 = (undefined)((uint)uVar10 >> 0x10);
  uRam081f9034 = (undefined)((uint)uVar10 >> 0x18);
  uVar10 = *(undefined4 *)
            (puVar9 + (uint)(byte)*(&alu_bxor8)[(byte)*(&alu_band8)[uVar4 >> 0x10 & 0xff]] * 4);
  DAT_081f903e = (undefined)uVar10;
  DAT_081f903f = (undefined)((uint)uVar10 >> 8);
  uRam081f9040 = (undefined2)((uint)uVar10 >> 0x10);
  _DAT_081f904b =
       *(undefined4 *)(puVar9 + (uint)(byte)*(&alu_bxor8)[(byte)*(&alu_band8)[uVar4 >> 0x18]] * 4);
  R0 = table_8;
  uVar4 = *(uint *)(&sel_data)[on];
  alu_s._0_2_ = CONCAT11((&alu_bxor8)[(uVar6 & 0xff00) >> 8][uVar4 >> 8 & 0xff],
                         (&alu_bxor8)[uVar6 & 0xff][uVar4 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bxor8)
                         [(byte)(&alu_bor8)[(byte)(&alu_bor8)[(byte)*alu_bor8][uVar7 >> 0x18]]
                                [uVar8 >> 0x10 & 0xff]][uVar4 >> 0x10 & 0xff],(undefined2)alu_s);
  alu_s = CONCAT13((&alu_bxor8)
                   [(byte)(&alu_bor8)[(byte)*(&alu_bor8)[(byte)*alu_bor8]][uVar8 >> 0x18]]
                   [uVar4 >> 0x18],(uint3)alu_s);
  *(uint *)(&sel_data)[on] = alu_s;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x15]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xc4] *
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(uint *)(&sel_data)[on] =
       *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] & 0xffff
       | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                 (*(uint *)(&alu_add16)
                           [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] >> 0x10)
                 * 4) << 0x10;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][2]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][199] * 4
                                                  )] +
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = *(uint *)(&sel_data)[on];
  uVar4 = *(uint *)((&alu_add16)
                    [*(int *)((&alu_add16)[(uint)R3 & 0xffff] +
                             (uint)*(ushort *)(&alu_inv16 + (R2 & 0xffff) * 2) * 4)] + 4);
  uVar6 = *(uint *)((&alu_add16)
                    [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                             (uint)*(ushort *)(&alu_inv16 + (R2 >> 0x10) * 2) * 4)] +
                   (uVar4 >> 0x10) * 4);
  _DAT_081f900e = (undefined2)uVar6;
  cf = cf & 0xffffff00 | (uint)(byte)(&alu_false)[uVar6 >> 0x10 & 0xff];
  alu_s._3_1_ = (byte)(uVar6 >> 8);
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar4 & 0xff] +
                                                     (uVar4 >> 8 & 0xff)] + (uVar6 & 0xff)] +
                           (uint)alu_s._3_1_]];
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00 |
                                    R2 >> 0x18) * 4) * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00 |
                                    R2 >> 0x18) * 4) & 0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) &
       0xff;
  b0 = *(int *)((&and)[cf] + on * 4);
  alu_t = R2;
  *(undefined4 *)(&sel_target)[b0] = 0x8804b77a;
  iVar3 = b0;
  puVar2 = (undefined4 *)(&sel_data)[b0];
  *puVar2 = R0;
  puVar2[1] = R1;
  puVar2[2] = R2;
  puVar2[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = D0;
  puVar2[1] = DAT_08050084;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805008c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R3 = *(undefined **)(&sel_data)[on];
  _alu_x = CONCAT11((&alu_inv8)[((uint)R3 & 0xff00) >> 8],(&alu_inv8)[(uint)R3 & 0xff]);
  _alu_x = CONCAT12((&alu_inv8)[((uint)R3 & 0xff0000) >> 0x10],_alu_x);
  _alu_x = CONCAT13((&alu_inv8)[(uint)R3 >> 0x18],_alu_x);
  R0 = (undefined1 *)_alu_x;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x6c]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xcc] *
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_081f9124 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_081f9124;
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
  *(undefined **)(&sel_target)[on] = stack_temp;
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
  puVar2[1] = DAT_08050084;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805008c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x58]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xd1] *
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
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
  DAT_081f9124 = DAT_0805008c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200068) + -0x200068);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_081f9124;
  *(undefined **)(&sel_data)[on] = sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = s_The_quick_brown_fox_jumps_over_t_08050028;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_55066_08099ba8] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34820_08085f50 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_55066_08099ba8] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R0 = *(undefined1 **)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  stack_temp = R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = (undefined *)0x0;
  stack_temp = (undefined *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x8804d9ca;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88048794;
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
  puVar2[1] = DAT_08050084;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805008c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xca]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xd9] *
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(*(int *)(*(int *)(sp + -0x200060) + -0x200060) + -0x200060);
  stack_temp = R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = &DAT_08050024;
  stack_temp = &DAT_08050024;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  iVar3 = *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34820_08085f50 + 0x20000)] +
                  (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_56723_0809b58c] >> 0x10) * 4);
  alu_s = *(uint *)(&alu_add16)[*(int *)PTR_alu_add16_56723_0809b58c] & 0xffff | iVar3 << 0x10;
  alu_c = (undefined)iVar3;
  uRam081f9011 = (undefined)((uint)iVar3 >> 8);
  DAT_081f9012 = (undefined2)((uint)iVar3 >> 0x10);
  stack_temp = (undefined *)alu_s;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  _external = printf;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  R0 = (undefined1 *)0x0;
  _alu_x = target;
  _alu_y = 0x8804de11;
  b1 = (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xde];
  b2 = (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4];
  b3 = (uint)(byte)(&alu_eq)[target >> 0x18][0x88];
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x11]] +
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_081f9124 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_081f9124;
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
  puVar2[1] = DAT_08050084;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805008c;
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
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  
  *(undefined4 *)(&sel_on)[toggle_execution] = 1;
  toggle_execution = 0;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)((&alu_add16)[(uint)sesp & 0xffff] + 0x10)] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(&alu_add16)[(uint)sesp >> 0x10]] +
                       (*(uint *)(&alu_add16)[*(int *)((&alu_add16)[(uint)sesp & 0xffff] + 0x10)] >>
                       0x10) * 4) << 0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)*sesp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x8804854e;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8804d158;
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
  puVar1[1] = DAT_08050084;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805008c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x4e]] +
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
  puVar1[1] = DAT_085f91bc;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = (undefined *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x94]] +
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
  puVar1[1] = DAT_085f91bc;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085f91c4;
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
  DAT_081f9124 = DAT_0805008c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200068) + -0x200068);
  puVar1 = (undefined4 *)(&sel_data)[on];
  *puVar1 = stack_temp;
  puVar1[1] = DAT_081f9124;
  *(undefined **)(&sel_data)[on] = sp;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(sp + -0x200068) + -0x200068) + -0x200068) +
                          -0x200068) + -0x200068) + -0x200068);
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 0;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)_alu_inv16 * 4)] +
                   4);
  cf = cf & 0xffffff00;
  sf = sf & 0xffffff00;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar3 & 0xff] +
                                                     (uVar3 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar3 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                               (uint)_alu_inv16 * 4)] + (uVar3 >> 0x10) * 4) >> 8 &
                           0xff)]];
  of = of & 0xffffff00;
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x8804b195;
  iVar2 = b0;
  puVar1 = (undefined4 *)(&sel_data)[b0];
  *puVar1 = R0;
  puVar1[1] = R1;
  puVar1[2] = R2;
  puVar1[3] = R3;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = F0;
  puVar1[1] = F1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = D0;
  puVar1[1] = DAT_08050084;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805008c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  *(undefined4 *)(&sel_data)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x81]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x8e] *
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
  puVar1[1] = DAT_085f91bc;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xff]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x90] *
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
  puVar1[1] = DAT_085f91bc;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  uVar3 = *(uint *)(&sel_data)[on];
  alu_s._0_2_ = CONCAT11(*(&alu_band8)[uVar3 >> 8 & 0xff],(&alu_band8)[uVar3 & 0xff][1]);
  alu_s._0_3_ = CONCAT12(*(&alu_band8)[uVar3 >> 0x10 & 0xff],(undefined2)alu_s);
  alu_s = CONCAT13(*(&alu_band8)[uVar3 >> 0x18],(uint3)alu_s);
  R3 = (undefined *)alu_s;
  R2 = 0;
  uVar3 = *(uint *)((&alu_add16)
                    [*(int *)((&alu_add16)[(uint3)alu_s & 0xffff] + (uint)_alu_inv16 * 4)] + 4);
  cf = cf & 0xffffff00;
  sf = sf & 0xffffff00;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar3 & 0xff] +
                                                     (uVar3 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[alu_s >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar3 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[alu_s >> 0x10] + (uint)_alu_inv16 * 4)]
                                     + (uVar3 >> 0x10) * 4) >> 8 & 0xff)]];
  of = of & 0xffffff00;
  b0 = *(int *)((&and)[zf] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88049b22;
  iVar2 = b0;
  puVar1 = (undefined4 *)(&sel_data)[b0];
  *puVar1 = R0;
  puVar1[1] = R1;
  puVar1[2] = R2;
  puVar1[3] = R3;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = F0;
  puVar1[1] = F1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = D0;
  puVar1[1] = DAT_08050084;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805008c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  uVar3 = *(uint *)(&sel_data)[on];
  _alu_sc = (uint)(byte)*alu_bor8;
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = CONCAT31((uint3)(byte)(&alu_true)[_alu_sc],1);
  puVar4 = (&alu_rshu8)[(&alu_clamp32)[_alu_sc]];
  uVar5 = *(uint *)(puVar4 + (uVar3 >> 0x10 & 0xff) * 4);
  uVar6 = *(uint *)(puVar4 + (uVar3 >> 0x18) * 4);
  alu_s._0_2_ = CONCAT11(alu_bor8[*(uint *)(puVar4 + (uVar3 >> 8 & 0xff) * 4) >> 0x18],
                         (&alu_bor8)[*(uint *)(puVar4 + (uVar3 & 0xff) * 4) >> 0x18]
                         [*(uint *)(puVar4 + (uVar3 >> 8 & 0xff) * 4) >> 0x10 & 0xff]);
  alu_s._0_3_ = CONCAT12(*alu_bor8,(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[((uint3)alu_s & 0xff00) >> 8][uVar5 >> 0x10 & 0xff],
                         (&alu_bor8)[(uint3)alu_s & 0xff][uVar5 >> 8 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(byte)*alu_bor8][uVar5 >> 0x18],(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[((uint3)alu_s & 0xff00) >> 8][uVar6 >> 8 & 0xff],
                         (&alu_bor8)[(uint3)alu_s & 0xff][uVar6 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(byte)(&alu_bor8)[(byte)*alu_bor8][uVar5 >> 0x18]]
                         [uVar6 >> 0x10 & 0xff],(undefined2)alu_s);
  alu_s = CONCAT13((&alu_bor8)[(byte)*(&alu_bor8)[(byte)*alu_bor8]][uVar6 >> 0x18],(uint3)alu_s);
  *(uint *)(&sel_data)[on] = alu_s;
  uVar3 = *(uint *)(&sel_data)[on];
  R2 = 0xedb88320;
  alu_s._0_2_ = CONCAT11((&alu_bxor8)[uVar3 >> 8 & 0xff][0x83],(&alu_bxor8)[uVar3 & 0xff][0x20]);
  alu_s._0_3_ = CONCAT12((&alu_bxor8)[uVar3 >> 0x10 & 0xff][0xb8],(undefined2)alu_s);
  alu_s = CONCAT13((&alu_bxor8)[uVar3 >> 0x18][0xed],(uint3)alu_s);
  R3 = (undefined *)alu_s;
  *(uint *)(&sel_data)[on] = alu_s;
  *(undefined4 *)(&sel_target)[on] = 0x8804a050;
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
  puVar1[1] = DAT_08050084;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805008c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x22]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x9b] *
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
  puVar1[1] = DAT_085f91bc;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  uVar3 = *(uint *)(&sel_data)[on];
  _alu_sc = (uint)(byte)*alu_bor8;
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = CONCAT31((uint3)(byte)(&alu_true)[_alu_sc],1);
  puVar4 = (&alu_rshu8)[(&alu_clamp32)[_alu_sc]];
  uVar5 = *(uint *)(puVar4 + (uVar3 >> 0x10 & 0xff) * 4);
  uVar6 = *(uint *)(puVar4 + (uVar3 >> 0x18) * 4);
  alu_s._0_2_ = CONCAT11(alu_bor8[*(uint *)(puVar4 + (uVar3 >> 8 & 0xff) * 4) >> 0x18],
                         (&alu_bor8)[*(uint *)(puVar4 + (uVar3 & 0xff) * 4) >> 0x18]
                         [*(uint *)(puVar4 + (uVar3 >> 8 & 0xff) * 4) >> 0x10 & 0xff]);
  alu_s._0_3_ = CONCAT12(*alu_bor8,(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[((uint3)alu_s & 0xff00) >> 8][uVar5 >> 0x10 & 0xff],
                         (&alu_bor8)[(uint3)alu_s & 0xff][uVar5 >> 8 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(byte)*alu_bor8][uVar5 >> 0x18],(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[((uint3)alu_s & 0xff00) >> 8][uVar6 >> 8 & 0xff],
                         (&alu_bor8)[(uint3)alu_s & 0xff][uVar6 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(byte)(&alu_bor8)[(byte)*alu_bor8][uVar5 >> 0x18]]
                         [uVar6 >> 0x10 & 0xff],(undefined2)alu_s);
  alu_s = CONCAT13((&alu_bor8)[(byte)*(&alu_bor8)[(byte)*alu_bor8]][uVar6 >> 0x18],(uint3)alu_s);
  *(uint *)(&sel_data)[on] = alu_s;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x50]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xa0] *
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
  puVar1[1] = DAT_085f91bc;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x2a]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xa2] *
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
  puVar1[1] = DAT_085f91bc;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(uint *)(&sel_data)[on] =
       *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] & 0xffff
       | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                 (*(uint *)(&alu_add16)
                           [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] >> 0x10)
                 * 4) << 0x10;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 8;
  alu_s = *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                  (*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)uRam08164070 * 4)] +
                            4) >> 0x10) * 4) << 0x10;
  cf = cf & 0xffffff00;
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
  zf = zf & 0xffffff00;
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           & 0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)((&xor)[sf] + of * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x880490ff;
  iVar2 = b0;
  puVar1 = (undefined4 *)(&sel_data)[b0];
  *puVar1 = R0;
  puVar1[1] = R1;
  puVar1[2] = R2;
  puVar1[3] = R3;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = F0;
  puVar1[1] = F1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = D0;
  puVar1[1] = DAT_08050084;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805008c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xcf]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xab] *
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
  puVar1[1] = DAT_085f91bc;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(uint *)(&sel_data)[on] =
       *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] & 0xffff
       | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                 (*(uint *)(&alu_add16)
                           [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] >> 0x10)
                 * 4) << 0x10;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 0x100;
  alu_s = *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                  (*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)uRam08164260 * 4)] +
                            4) >> 0x10) * 4) << 0x10;
  cf = cf & 0xffffff00;
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
  zf = zf & 0xffffff00;
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           & 0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)((&xor)[sf] + of * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88048e81;
  iVar2 = b0;
  puVar1 = (undefined4 *)(&sel_data)[b0];
  *puVar1 = R0;
  puVar1[1] = R1;
  puVar1[2] = R2;
  puVar1[3] = R3;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = F0;
  puVar1[1] = F1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = D0;
  puVar1[1] = DAT_08050084;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805008c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  *(undefined4 *)(&sel_data)[on] = 1;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x95]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xb1] *
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
  puVar1[1] = DAT_085f91bc;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  uVar3 = *(uint *)(&sel_data)[on];
  _alu_x = CONCAT11((&alu_inv8)[(uVar3 & 0xff00) >> 8],(&alu_inv8)[uVar3 & 0xff]);
  _alu_x = CONCAT12((&alu_inv8)[(uVar3 & 0xff0000) >> 0x10],_alu_x);
  _alu_x = CONCAT13((&alu_inv8)[uVar3 >> 0x18],_alu_x);
  *(uint *)(&sel_data)[on] = _alu_x;
  R2 = *(uint *)(&sel_data)[on];
  *(uint *)(&sel_data)[on] =
       *(uint *)(&alu_add16)
                [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + (R2 & 0xffff) * 4)] &
       0xffff | *(int *)((&alu_add16)
                         [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10] + (R2 >> 0x10) * 4
                                  )] +
                        (*(uint *)(&alu_add16)
                                  [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] +
                                           (R2 & 0xffff) * 4)] >> 0x10) * 4) << 0x10;
  R3 = *(undefined **)(&sel_data)[on];
  *(undefined **)(&sel_data)[on] = R3;
  *(undefined4 *)(&sel_target)[on] = 0x8804c702;
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
  puVar1[1] = DAT_08050084;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805008c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x7a]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xb7] *
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
  puVar1[1] = DAT_085f91bc;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R0._0_1_ = (undefined)*(undefined4 *)(&alu_sex8 + (uint)(byte)*(&sel_data)[on] * 4);
  *(&sel_data)[on] = R0._0_1_;
  uVar3 = *(uint *)(&sel_data)[on];
  _alu_sc = (uint)(byte)*alu_bor8;
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = CONCAT31((uint3)(byte)(&alu_true)[_alu_sc],8);
  puVar4 = (&alu_rshu8)[(&alu_clamp32)[_alu_sc]];
  uVar5 = *(uint *)(puVar4 + (uVar3 >> 8 & 0xff) * 4);
  _DAT_081f902e = (undefined2)uVar5;
  uVar6 = *(uint *)(puVar4 + (uVar3 >> 0x10 & 0xff) * 4);
  DAT_081f903b = (undefined)uVar6;
  uVar7 = *(uint *)(puVar4 + (uVar3 >> 0x18) * 4);
  alu_s._0_2_ = CONCAT11(alu_bor8[uVar5 >> 0x18],
                         (&alu_bor8)[*(uint *)(puVar4 + (uVar3 & 0xff) * 4) >> 0x18]
                         [uVar5 >> 0x10 & 0xff]);
  alu_s._0_3_ = CONCAT12(*alu_bor8,(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[((uint3)alu_s & 0xff00) >> 8][uVar6 >> 0x10 & 0xff],
                         (&alu_bor8)[(uint3)alu_s & 0xff][uVar6 >> 8 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(byte)*alu_bor8][uVar6 >> 0x18],(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[((uint3)alu_s & 0xff00) >> 8][uVar7 >> 8 & 0xff],
                         (&alu_bor8)[(uint3)alu_s & 0xff][uVar7 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(byte)(&alu_bor8)[(byte)*alu_bor8][uVar6 >> 0x18]]
                         [uVar7 >> 0x10 & 0xff],(undefined2)alu_s);
  uVar5 = (uint)(uint3)alu_s;
  alu_s = CONCAT13((&alu_bor8)[(byte)*(&alu_bor8)[(byte)*alu_bor8]][uVar7 >> 0x18],(uint3)alu_s);
  R1 = alu_s;
  alu_s._0_2_ = CONCAT11(*(&alu_band8)[uVar3 >> 8 & 0xff],(&alu_band8)[uVar3 & 0xff][0xff]);
  alu_s._0_3_ = CONCAT12(*(&alu_band8)[uVar3 >> 0x10 & 0xff],(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11(*(&alu_bxor8)[(byte)*(&alu_band8)[uVar3 >> 8 & 0xff]],
                         (&alu_bxor8)[(uint3)alu_s & 0xff][(byte)*(&sel_data)[on]]);
  alu_s._0_3_ = CONCAT12(*(&alu_bxor8)[(byte)*(&alu_band8)[uVar3 >> 0x10 & 0xff]],(undefined2)alu_s)
  ;
  _alu_sx = 2;
  _alu_sc = (uint)(byte)*alu_bor8;
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = CONCAT31((uint3)(byte)(&alu_true)[_alu_sc],2);
  alu_s1 = 0;
  alu_s2 = 0;
  DAT_081f903d = 0;
  alu_s3 = 0;
  DAT_081f9049 = 0;
  DAT_081f904a = 0;
  puVar8 = (&alu_lshu8)[(&alu_clamp32)[_alu_sc]];
  iVar2 = *(int *)(puVar8 + ((uint3)alu_s & 0xff) * 4);
  _DAT_081f9021 = *(uint *)(puVar4 + (uVar3 & 0xff) * 4) & 0xffffff | iVar2 << 0x18;
  DAT_081f9025 = (undefined)((uint)iVar2 >> 8);
  DAT_081f9026 = (undefined)((uint)iVar2 >> 0x10);
  DAT_081f9027 = (undefined)((uint)iVar2 >> 0x18);
  uVar9 = *(undefined4 *)
           (puVar8 + (uint)(byte)*(&alu_bxor8)[(byte)*(&alu_band8)[uVar3 >> 8 & 0xff]] * 4);
  DAT_081f9031 = (undefined)uVar9;
  DAT_081f9032 = (undefined)((uint)uVar9 >> 8);
  DAT_081f9033 = (undefined)((uint)uVar9 >> 0x10);
  uRam081f9034 = (undefined)((uint)uVar9 >> 0x18);
  uVar9 = *(undefined4 *)
           (puVar8 + (uint)(byte)*(&alu_bxor8)[(byte)*(&alu_band8)[uVar3 >> 0x10 & 0xff]] * 4);
  DAT_081f903e = (undefined)uVar9;
  DAT_081f903f = (undefined)((uint)uVar9 >> 8);
  uRam081f9040 = (undefined2)((uint)uVar9 >> 0x10);
  _DAT_081f904b =
       *(undefined4 *)(puVar8 + (uint)(byte)*(&alu_bxor8)[(byte)*(&alu_band8)[uVar3 >> 0x18]] * 4);
  R0 = table_8;
  uVar3 = *(uint *)(&sel_data)[on];
  alu_s._0_2_ = CONCAT11((&alu_bxor8)[(uVar5 & 0xff00) >> 8][uVar3 >> 8 & 0xff],
                         (&alu_bxor8)[uVar5 & 0xff][uVar3 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bxor8)
                         [(byte)(&alu_bor8)[(byte)(&alu_bor8)[(byte)*alu_bor8][uVar6 >> 0x18]]
                                [uVar7 >> 0x10 & 0xff]][uVar3 >> 0x10 & 0xff],(undefined2)alu_s);
  alu_s = CONCAT13((&alu_bxor8)
                   [(byte)(&alu_bor8)[(byte)*(&alu_bor8)[(byte)*alu_bor8]][uVar7 >> 0x18]]
                   [uVar3 >> 0x18],(uint3)alu_s);
  *(uint *)(&sel_data)[on] = alu_s;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x15]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xc4] *
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
  puVar1[1] = DAT_085f91bc;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(uint *)(&sel_data)[on] =
       *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] & 0xffff
       | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                 (*(uint *)(&alu_add16)
                           [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] >> 0x10)
                 * 4) << 0x10;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][2]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][199] * 4
                                                  )] +
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
  puVar1[1] = DAT_085f91bc;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = *(uint *)(&sel_data)[on];
  uVar3 = *(uint *)((&alu_add16)
                    [*(int *)((&alu_add16)[(uint)R3 & 0xffff] +
                             (uint)*(ushort *)(&alu_inv16 + (R2 & 0xffff) * 2) * 4)] + 4);
  uVar5 = *(uint *)((&alu_add16)
                    [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                             (uint)*(ushort *)(&alu_inv16 + (R2 >> 0x10) * 2) * 4)] +
                   (uVar3 >> 0x10) * 4);
  _DAT_081f900e = (undefined2)uVar5;
  cf = cf & 0xffffff00 | (uint)(byte)(&alu_false)[uVar5 >> 0x10 & 0xff];
  alu_s._3_1_ = (byte)(uVar5 >> 8);
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar3 & 0xff] +
                                                     (uVar3 >> 8 & 0xff)] + (uVar5 & 0xff)] +
                           (uint)alu_s._3_1_]];
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00 |
                                    R2 >> 0x18) * 4) * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00 |
                                    R2 >> 0x18) * 4) & 0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) &
       0xff;
  b0 = *(int *)((&and)[cf] + on * 4);
  alu_t = R2;
  *(undefined4 *)(&sel_target)[b0] = 0x8804b77a;
  iVar2 = b0;
  puVar1 = (undefined4 *)(&sel_data)[b0];
  *puVar1 = R0;
  puVar1[1] = R1;
  puVar1[2] = R2;
  puVar1[3] = R3;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = F0;
  puVar1[1] = F1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = D0;
  puVar1[1] = DAT_08050084;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805008c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R3 = *(undefined **)(&sel_data)[on];
  _alu_x = CONCAT11((&alu_inv8)[((uint)R3 & 0xff00) >> 8],(&alu_inv8)[(uint)R3 & 0xff]);
  _alu_x = CONCAT12((&alu_inv8)[((uint)R3 & 0xff0000) >> 0x10],_alu_x);
  _alu_x = CONCAT13((&alu_inv8)[(uint)R3 >> 0x18],_alu_x);
  R0 = (undefined1 *)_alu_x;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x6c]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xcc] *
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
  puVar1[1] = DAT_085f91bc;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_081f9124 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  puVar1 = (undefined4 *)(&sel_data)[on];
  *puVar1 = stack_temp;
  puVar1[1] = DAT_081f9124;
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
  *(undefined **)(&sel_target)[on] = stack_temp;
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
  puVar1[1] = DAT_08050084;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805008c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x58]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xd1] *
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
  puVar1[1] = DAT_085f91bc;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085f91c4;
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
  DAT_081f9124 = DAT_0805008c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200068) + -0x200068);
  puVar1 = (undefined4 *)(&sel_data)[on];
  *puVar1 = stack_temp;
  puVar1[1] = DAT_081f9124;
  *(undefined **)(&sel_data)[on] = sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = s_The_quick_brown_fox_jumps_over_t_08050028;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_55066_08099ba8] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34820_08085f50 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_55066_08099ba8] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R0 = *(undefined1 **)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  stack_temp = R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = (undefined *)0x0;
  stack_temp = (undefined *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x8804d9ca;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88048794;
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
  puVar1[1] = DAT_08050084;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805008c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xca]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xd9] *
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
  puVar1[1] = DAT_085f91bc;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(*(int *)(*(int *)(sp + -0x200060) + -0x200060) + -0x200060);
  stack_temp = R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = &DAT_08050024;
  stack_temp = &DAT_08050024;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  iVar2 = *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34820_08085f50 + 0x20000)] +
                  (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_56723_0809b58c] >> 0x10) * 4);
  alu_s = *(uint *)(&alu_add16)[*(int *)PTR_alu_add16_56723_0809b58c] & 0xffff | iVar2 << 0x10;
  alu_c = (undefined)iVar2;
  uRam081f9011 = (undefined)((uint)iVar2 >> 8);
  DAT_081f9012 = (undefined2)((uint)iVar2 >> 0x10);
  stack_temp = (undefined *)alu_s;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  _external = printf;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  R0 = (undefined1 *)0x0;
  _alu_x = target;
  _alu_y = 0x8804de11;
  b1 = (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xde];
  b2 = (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4];
  b3 = (uint)(byte)(&alu_eq)[target >> 0x18][0x88];
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x11]] +
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
  puVar1[1] = DAT_085f91bc;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_081f9124 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  puVar1 = (undefined4 *)(&sel_data)[on];
  *puVar1 = stack_temp;
  puVar1[1] = DAT_081f9124;
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
  puVar1[1] = DAT_08050084;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805008c;
  *(undefined4 *)(&sel_on)[on] = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rc_crc32(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x94]] +
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
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
  DAT_081f9124 = DAT_0805008c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200068) + -0x200068);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_081f9124;
  *(undefined **)(&sel_data)[on] = sp;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(sp + -0x200068) + -0x200068) + -0x200068) +
                          -0x200068) + -0x200068) + -0x200068);
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 0;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)_alu_inv16 * 4)] +
                   4);
  cf = cf & 0xffffff00;
  sf = sf & 0xffffff00;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar3 & 0xff] +
                                                     (uVar3 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar3 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                               (uint)_alu_inv16 * 4)] + (uVar3 >> 0x10) * 4) >> 8 &
                           0xff)]];
  of = of & 0xffffff00;
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x8804b195;
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
  puVar2[1] = DAT_08050084;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805008c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  *(undefined4 *)(&sel_data)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x81]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x8e] *
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xff]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x90] *
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  uVar3 = *(uint *)(&sel_data)[on];
  alu_s._0_2_ = CONCAT11(*(&alu_band8)[uVar3 >> 8 & 0xff],(&alu_band8)[uVar3 & 0xff][1]);
  alu_s._0_3_ = CONCAT12(*(&alu_band8)[uVar3 >> 0x10 & 0xff],(undefined2)alu_s);
  alu_s = CONCAT13(*(&alu_band8)[uVar3 >> 0x18],(uint3)alu_s);
  R3 = (undefined *)alu_s;
  R2 = 0;
  uVar3 = *(uint *)((&alu_add16)
                    [*(int *)((&alu_add16)[(uint3)alu_s & 0xffff] + (uint)_alu_inv16 * 4)] + 4);
  cf = cf & 0xffffff00;
  sf = sf & 0xffffff00;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar3 & 0xff] +
                                                     (uVar3 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[alu_s >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar3 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[alu_s >> 0x10] + (uint)_alu_inv16 * 4)]
                                     + (uVar3 >> 0x10) * 4) >> 8 & 0xff)]];
  of = of & 0xffffff00;
  b0 = *(int *)((&and)[zf] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88049b22;
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
  puVar2[1] = DAT_08050084;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805008c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  uVar3 = *(uint *)(&sel_data)[on];
  _alu_sc = (uint)(byte)*alu_bor8;
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = CONCAT31((uint3)(byte)(&alu_true)[_alu_sc],1);
  puVar4 = (&alu_rshu8)[(&alu_clamp32)[_alu_sc]];
  uVar5 = *(uint *)(puVar4 + (uVar3 >> 0x10 & 0xff) * 4);
  uVar6 = *(uint *)(puVar4 + (uVar3 >> 0x18) * 4);
  alu_s._0_2_ = CONCAT11(alu_bor8[*(uint *)(puVar4 + (uVar3 >> 8 & 0xff) * 4) >> 0x18],
                         (&alu_bor8)[*(uint *)(puVar4 + (uVar3 & 0xff) * 4) >> 0x18]
                         [*(uint *)(puVar4 + (uVar3 >> 8 & 0xff) * 4) >> 0x10 & 0xff]);
  alu_s._0_3_ = CONCAT12(*alu_bor8,(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[((uint3)alu_s & 0xff00) >> 8][uVar5 >> 0x10 & 0xff],
                         (&alu_bor8)[(uint3)alu_s & 0xff][uVar5 >> 8 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(byte)*alu_bor8][uVar5 >> 0x18],(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[((uint3)alu_s & 0xff00) >> 8][uVar6 >> 8 & 0xff],
                         (&alu_bor8)[(uint3)alu_s & 0xff][uVar6 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(byte)(&alu_bor8)[(byte)*alu_bor8][uVar5 >> 0x18]]
                         [uVar6 >> 0x10 & 0xff],(undefined2)alu_s);
  alu_s = CONCAT13((&alu_bor8)[(byte)*(&alu_bor8)[(byte)*alu_bor8]][uVar6 >> 0x18],(uint3)alu_s);
  *(uint *)(&sel_data)[on] = alu_s;
  uVar3 = *(uint *)(&sel_data)[on];
  R2 = 0xedb88320;
  alu_s._0_2_ = CONCAT11((&alu_bxor8)[uVar3 >> 8 & 0xff][0x83],(&alu_bxor8)[uVar3 & 0xff][0x20]);
  alu_s._0_3_ = CONCAT12((&alu_bxor8)[uVar3 >> 0x10 & 0xff][0xb8],(undefined2)alu_s);
  alu_s = CONCAT13((&alu_bxor8)[uVar3 >> 0x18][0xed],(uint3)alu_s);
  R3 = (undefined *)alu_s;
  *(uint *)(&sel_data)[on] = alu_s;
  *(undefined4 *)(&sel_target)[on] = 0x8804a050;
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
  puVar2[1] = DAT_08050084;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805008c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x22]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x9b] *
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  uVar3 = *(uint *)(&sel_data)[on];
  _alu_sc = (uint)(byte)*alu_bor8;
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = CONCAT31((uint3)(byte)(&alu_true)[_alu_sc],1);
  puVar4 = (&alu_rshu8)[(&alu_clamp32)[_alu_sc]];
  uVar5 = *(uint *)(puVar4 + (uVar3 >> 0x10 & 0xff) * 4);
  uVar6 = *(uint *)(puVar4 + (uVar3 >> 0x18) * 4);
  alu_s._0_2_ = CONCAT11(alu_bor8[*(uint *)(puVar4 + (uVar3 >> 8 & 0xff) * 4) >> 0x18],
                         (&alu_bor8)[*(uint *)(puVar4 + (uVar3 & 0xff) * 4) >> 0x18]
                         [*(uint *)(puVar4 + (uVar3 >> 8 & 0xff) * 4) >> 0x10 & 0xff]);
  alu_s._0_3_ = CONCAT12(*alu_bor8,(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[((uint3)alu_s & 0xff00) >> 8][uVar5 >> 0x10 & 0xff],
                         (&alu_bor8)[(uint3)alu_s & 0xff][uVar5 >> 8 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(byte)*alu_bor8][uVar5 >> 0x18],(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[((uint3)alu_s & 0xff00) >> 8][uVar6 >> 8 & 0xff],
                         (&alu_bor8)[(uint3)alu_s & 0xff][uVar6 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(byte)(&alu_bor8)[(byte)*alu_bor8][uVar5 >> 0x18]]
                         [uVar6 >> 0x10 & 0xff],(undefined2)alu_s);
  alu_s = CONCAT13((&alu_bor8)[(byte)*(&alu_bor8)[(byte)*alu_bor8]][uVar6 >> 0x18],(uint3)alu_s);
  *(uint *)(&sel_data)[on] = alu_s;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x50]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xa0] *
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x2a]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xa2] *
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(uint *)(&sel_data)[on] =
       *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] & 0xffff
       | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                 (*(uint *)(&alu_add16)
                           [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] >> 0x10)
                 * 4) << 0x10;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 8;
  alu_s = *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                  (*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)uRam08164070 * 4)] +
                            4) >> 0x10) * 4) << 0x10;
  cf = cf & 0xffffff00;
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
  zf = zf & 0xffffff00;
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           & 0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)((&xor)[sf] + of * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x880490ff;
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
  puVar2[1] = DAT_08050084;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805008c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xcf]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xab] *
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(uint *)(&sel_data)[on] =
       *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] & 0xffff
       | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                 (*(uint *)(&alu_add16)
                           [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] >> 0x10)
                 * 4) << 0x10;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 0x100;
  alu_s = *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                  (*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)uRam08164260 * 4)] +
                            4) >> 0x10) * 4) << 0x10;
  cf = cf & 0xffffff00;
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
  zf = zf & 0xffffff00;
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           & 0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)((&xor)[sf] + of * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88048e81;
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
  puVar2[1] = DAT_08050084;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805008c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  *(undefined4 *)(&sel_data)[on] = 1;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x95]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xb1] *
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  uVar3 = *(uint *)(&sel_data)[on];
  _alu_x = CONCAT11((&alu_inv8)[(uVar3 & 0xff00) >> 8],(&alu_inv8)[uVar3 & 0xff]);
  _alu_x = CONCAT12((&alu_inv8)[(uVar3 & 0xff0000) >> 0x10],_alu_x);
  _alu_x = CONCAT13((&alu_inv8)[uVar3 >> 0x18],_alu_x);
  *(uint *)(&sel_data)[on] = _alu_x;
  R2 = *(uint *)(&sel_data)[on];
  *(uint *)(&sel_data)[on] =
       *(uint *)(&alu_add16)
                [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + (R2 & 0xffff) * 4)] &
       0xffff | *(int *)((&alu_add16)
                         [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10] + (R2 >> 0x10) * 4
                                  )] +
                        (*(uint *)(&alu_add16)
                                  [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] +
                                           (R2 & 0xffff) * 4)] >> 0x10) * 4) << 0x10;
  R3 = *(undefined **)(&sel_data)[on];
  *(undefined **)(&sel_data)[on] = R3;
  *(undefined4 *)(&sel_target)[on] = 0x8804c702;
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
  puVar2[1] = DAT_08050084;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805008c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x7a]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xb7] *
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R0._0_1_ = (undefined)*(undefined4 *)(&alu_sex8 + (uint)(byte)*(&sel_data)[on] * 4);
  *(&sel_data)[on] = R0._0_1_;
  uVar3 = *(uint *)(&sel_data)[on];
  _alu_sc = (uint)(byte)*alu_bor8;
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = CONCAT31((uint3)(byte)(&alu_true)[_alu_sc],8);
  puVar4 = (&alu_rshu8)[(&alu_clamp32)[_alu_sc]];
  uVar5 = *(uint *)(puVar4 + (uVar3 >> 8 & 0xff) * 4);
  _DAT_081f902e = (undefined2)uVar5;
  uVar6 = *(uint *)(puVar4 + (uVar3 >> 0x10 & 0xff) * 4);
  DAT_081f903b = (undefined)uVar6;
  uVar7 = *(uint *)(puVar4 + (uVar3 >> 0x18) * 4);
  alu_s._0_2_ = CONCAT11(alu_bor8[uVar5 >> 0x18],
                         (&alu_bor8)[*(uint *)(puVar4 + (uVar3 & 0xff) * 4) >> 0x18]
                         [uVar5 >> 0x10 & 0xff]);
  alu_s._0_3_ = CONCAT12(*alu_bor8,(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[((uint3)alu_s & 0xff00) >> 8][uVar6 >> 0x10 & 0xff],
                         (&alu_bor8)[(uint3)alu_s & 0xff][uVar6 >> 8 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(byte)*alu_bor8][uVar6 >> 0x18],(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[((uint3)alu_s & 0xff00) >> 8][uVar7 >> 8 & 0xff],
                         (&alu_bor8)[(uint3)alu_s & 0xff][uVar7 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(byte)(&alu_bor8)[(byte)*alu_bor8][uVar6 >> 0x18]]
                         [uVar7 >> 0x10 & 0xff],(undefined2)alu_s);
  uVar5 = (uint)(uint3)alu_s;
  alu_s = CONCAT13((&alu_bor8)[(byte)*(&alu_bor8)[(byte)*alu_bor8]][uVar7 >> 0x18],(uint3)alu_s);
  R1 = alu_s;
  alu_s._0_2_ = CONCAT11(*(&alu_band8)[uVar3 >> 8 & 0xff],(&alu_band8)[uVar3 & 0xff][0xff]);
  alu_s._0_3_ = CONCAT12(*(&alu_band8)[uVar3 >> 0x10 & 0xff],(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11(*(&alu_bxor8)[(byte)*(&alu_band8)[uVar3 >> 8 & 0xff]],
                         (&alu_bxor8)[(uint3)alu_s & 0xff][(byte)*(&sel_data)[on]]);
  alu_s._0_3_ = CONCAT12(*(&alu_bxor8)[(byte)*(&alu_band8)[uVar3 >> 0x10 & 0xff]],(undefined2)alu_s)
  ;
  _alu_sx = 2;
  _alu_sc = (uint)(byte)*alu_bor8;
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = CONCAT31((uint3)(byte)(&alu_true)[_alu_sc],2);
  alu_s1 = 0;
  alu_s2 = 0;
  DAT_081f903d = 0;
  alu_s3 = 0;
  DAT_081f9049 = 0;
  DAT_081f904a = 0;
  puVar8 = (&alu_lshu8)[(&alu_clamp32)[_alu_sc]];
  iVar1 = *(int *)(puVar8 + ((uint3)alu_s & 0xff) * 4);
  _DAT_081f9021 = *(uint *)(puVar4 + (uVar3 & 0xff) * 4) & 0xffffff | iVar1 << 0x18;
  DAT_081f9025 = (undefined)((uint)iVar1 >> 8);
  DAT_081f9026 = (undefined)((uint)iVar1 >> 0x10);
  DAT_081f9027 = (undefined)((uint)iVar1 >> 0x18);
  uVar9 = *(undefined4 *)
           (puVar8 + (uint)(byte)*(&alu_bxor8)[(byte)*(&alu_band8)[uVar3 >> 8 & 0xff]] * 4);
  DAT_081f9031 = (undefined)uVar9;
  DAT_081f9032 = (undefined)((uint)uVar9 >> 8);
  DAT_081f9033 = (undefined)((uint)uVar9 >> 0x10);
  uRam081f9034 = (undefined)((uint)uVar9 >> 0x18);
  uVar9 = *(undefined4 *)
           (puVar8 + (uint)(byte)*(&alu_bxor8)[(byte)*(&alu_band8)[uVar3 >> 0x10 & 0xff]] * 4);
  DAT_081f903e = (undefined)uVar9;
  DAT_081f903f = (undefined)((uint)uVar9 >> 8);
  uRam081f9040 = (undefined2)((uint)uVar9 >> 0x10);
  _DAT_081f904b =
       *(undefined4 *)(puVar8 + (uint)(byte)*(&alu_bxor8)[(byte)*(&alu_band8)[uVar3 >> 0x18]] * 4);
  R0 = table_8;
  uVar3 = *(uint *)(&sel_data)[on];
  alu_s._0_2_ = CONCAT11((&alu_bxor8)[(uVar5 & 0xff00) >> 8][uVar3 >> 8 & 0xff],
                         (&alu_bxor8)[uVar5 & 0xff][uVar3 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bxor8)
                         [(byte)(&alu_bor8)[(byte)(&alu_bor8)[(byte)*alu_bor8][uVar6 >> 0x18]]
                                [uVar7 >> 0x10 & 0xff]][uVar3 >> 0x10 & 0xff],(undefined2)alu_s);
  alu_s = CONCAT13((&alu_bxor8)
                   [(byte)(&alu_bor8)[(byte)*(&alu_bor8)[(byte)*alu_bor8]][uVar7 >> 0x18]]
                   [uVar3 >> 0x18],(uint3)alu_s);
  *(uint *)(&sel_data)[on] = alu_s;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x15]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xc4] *
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(uint *)(&sel_data)[on] =
       *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] & 0xffff
       | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                 (*(uint *)(&alu_add16)
                           [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] >> 0x10)
                 * 4) << 0x10;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][2]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][199] * 4
                                                  )] +
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = *(uint *)(&sel_data)[on];
  uVar3 = *(uint *)((&alu_add16)
                    [*(int *)((&alu_add16)[(uint)R3 & 0xffff] +
                             (uint)*(ushort *)(&alu_inv16 + (R2 & 0xffff) * 2) * 4)] + 4);
  uVar5 = *(uint *)((&alu_add16)
                    [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                             (uint)*(ushort *)(&alu_inv16 + (R2 >> 0x10) * 2) * 4)] +
                   (uVar3 >> 0x10) * 4);
  _DAT_081f900e = (undefined2)uVar5;
  cf = cf & 0xffffff00 | (uint)(byte)(&alu_false)[uVar5 >> 0x10 & 0xff];
  alu_s._3_1_ = (byte)(uVar5 >> 8);
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar3 & 0xff] +
                                                     (uVar3 >> 8 & 0xff)] + (uVar5 & 0xff)] +
                           (uint)alu_s._3_1_]];
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00 |
                                    R2 >> 0x18) * 4) * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00 |
                                    R2 >> 0x18) * 4) & 0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) &
       0xff;
  b0 = *(int *)((&and)[cf] + on * 4);
  alu_t = R2;
  *(undefined4 *)(&sel_target)[b0] = 0x8804b77a;
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
  puVar2[1] = DAT_08050084;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805008c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R3 = *(undefined **)(&sel_data)[on];
  _alu_x = CONCAT11((&alu_inv8)[((uint)R3 & 0xff00) >> 8],(&alu_inv8)[(uint)R3 & 0xff]);
  _alu_x = CONCAT12((&alu_inv8)[((uint)R3 & 0xff0000) >> 0x10],_alu_x);
  _alu_x = CONCAT13((&alu_inv8)[(uint)R3 >> 0x18],_alu_x);
  R0 = (undefined1 *)_alu_x;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x6c]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xcc] *
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_081f9124 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_081f9124;
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
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08050084;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805008c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x58]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xd1] *
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
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
  DAT_081f9124 = DAT_0805008c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200068) + -0x200068);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_081f9124;
  *(undefined **)(&sel_data)[on] = sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = s_The_quick_brown_fox_jumps_over_t_08050028;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_55066_08099ba8] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34820_08085f50 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_55066_08099ba8] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R0 = *(undefined1 **)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  stack_temp = R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = (undefined *)0x0;
  stack_temp = (undefined *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x8804d9ca;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88048794;
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
  puVar2[1] = DAT_08050084;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805008c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xca]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xd9] *
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(*(int *)(*(int *)(sp + -0x200060) + -0x200060) + -0x200060);
  stack_temp = R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = &DAT_08050024;
  stack_temp = &DAT_08050024;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  iVar1 = *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34820_08085f50 + 0x20000)] +
                  (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_56723_0809b58c] >> 0x10) * 4);
  alu_s = *(uint *)(&alu_add16)[*(int *)PTR_alu_add16_56723_0809b58c] & 0xffff | iVar1 << 0x10;
  alu_c = (undefined)iVar1;
  uRam081f9011 = (undefined)((uint)iVar1 >> 8);
  DAT_081f9012 = (undefined2)((uint)iVar1 >> 0x10);
  stack_temp = (undefined *)alu_s;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  _external = printf;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  R0 = (undefined1 *)0x0;
  _alu_x = target;
  _alu_y = 0x8804de11;
  b1 = (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xde];
  b2 = (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4];
  b3 = (uint)(byte)(&alu_eq)[target >> 0x18][0x88];
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x11]] +
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_081f9124 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_081f9124;
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
  puVar2[1] = DAT_08050084;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805008c;
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
  
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x58]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xd1] *
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
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
  DAT_081f9124 = DAT_0805008c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200068) + -0x200068);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_081f9124;
  *(undefined **)(&sel_data)[on] = sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(char **)(&sel_data)[on] = s_The_quick_brown_fox_jumps_over_t_08050028;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_55066_08099ba8] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34820_08085f50 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_55066_08099ba8] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R0 = *(undefined4 *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  stack_temp = (undefined *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = (undefined *)0x0;
  stack_temp = (undefined *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x8804d9ca;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88048794;
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
  puVar2[1] = DAT_08050084;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805008c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xca]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xd9] *
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(*(int *)(*(int *)(sp + -0x200060) + -0x200060) + -0x200060);
  stack_temp = (undefined *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = &DAT_08050024;
  stack_temp = &DAT_08050024;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  _alu_c = *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34820_08085f50 + 0x20000)] +
                   (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_56723_0809b58c] >> 0x10) * 4);
  alu_s = *(uint *)(&alu_add16)[*(int *)PTR_alu_add16_56723_0809b58c] & 0xffff | _alu_c << 0x10;
  stack_temp = (undefined *)alu_s;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  _external = printf;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  R0 = 0;
  _alu_x = target;
  _alu_y = 0x8804de11;
  b1 = (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xde];
  b2 = (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][4];
  b3 = (uint)(byte)(&alu_eq)[target >> 0x18][0x88];
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x11]] +
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
  puVar2[1] = DAT_085f91bc;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_085f91c4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_081f9124 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(*(int *)(sp + -0x200060) + -0x200060);
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_081f9124;
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
  puVar2[1] = DAT_08050084;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805008c;
  *(undefined4 *)(&sel_on)[on] = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


