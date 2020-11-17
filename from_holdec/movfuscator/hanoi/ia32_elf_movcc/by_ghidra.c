typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef unsigned int    wchar32;
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

typedef long __clock_t;

typedef int __pid_t;

typedef uint __uid_t;

typedef uint __useconds_t;

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

int fflush(FILE *__stream)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

int usleep(__useconds_t __useconds)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

int puts(char *__s)

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

int atoi(char *__nptr)

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



// WARNING: Unknown calling convention yet parameter storage is locked

void * calloc(size_t __nmemb,size_t __size)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void dispatch(void)

{
                    // WARNING: Could not recover jumptable at 0x08048356. Too many branches
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
  uint uVar9;
  uint *puVar10;
  undefined4 uVar11;
  uint3 uVar12;
  
  piVar1 = *(int **)(&push + *(int *)(&push + *(int *)(&push + *(int *)(sp + -0x200068))));
  sesp = (undefined4 *)register0x00000010;
  *piVar1 = 0xb;
  piVar1[1] = (int)&sa_dispatch;
  piVar1[2] = 0;
  piVar1[-1] = 0x80483a0;
  sigaction(*piVar1,(sigaction *)piVar1[1],(sigaction *)piVar1[2]);
  piVar1 = *(int **)(&push + *(int *)(&push + *(int *)(sp + -0x200068)));
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
  stack_temp = (undefined *)0x8804863e;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8805254d;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x3e]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x86] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = (undefined *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x84]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x88] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R1;
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
  DAT_08201114 = DAT_0805807c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
  *(undefined **)(&sel_data)[on] = sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  uVar4 = *(uint *)(&sel_data)[on];
  _alu_sc = (uint)(byte)*alu_bor8;
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = CONCAT31((uint3)(byte)(&alu_true)[_alu_sc],2);
  puVar5 = (&alu_lshu8)[(&alu_clamp32)[_alu_sc]];
  uVar6 = *(uint *)(puVar5 + (uVar4 & 0xff) * 4);
  uVar7 = *(uint *)(puVar5 + (uVar4 >> 8 & 0xff) * 4);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[uVar6 >> 8 & 0xff][uVar7 & 0xff],*(&alu_bor8)[uVar6 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[uVar6 >> 0x10 & 0xff][uVar7 >> 8 & 0xff],(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11(*(&alu_bor8)[((uint3)alu_s & 0xff00) >> 8],
                         *(&alu_bor8)[(uint3)alu_s & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(byte)(&alu_bor8)[uVar6 >> 0x10 & 0xff][uVar7 >> 8 & 0xff]]
                         [*(uint *)(puVar5 + (uVar4 >> 0x10 & 0xff) * 4) & 0xff],(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11(*(&alu_bor8)[((uint3)alu_s & 0xff00) >> 8],
                         *(&alu_bor8)[(uint3)alu_s & 0xff]);
  alu_s._0_3_ = CONCAT12(*(&alu_bor8)
                          [(byte)(&alu_bor8)
                                 [(byte)(&alu_bor8)[uVar6 >> 0x10 & 0xff][uVar7 >> 8 & 0xff]]
                                 [*(uint *)(puVar5 + (uVar4 >> 0x10 & 0xff) * 4) & 0xff]],
                         (undefined2)alu_s);
  alu_s = CONCAT13((&alu_bor8)
                   [(byte)(&alu_bor8)[(byte)(&alu_bor8)[uVar6 >> 0x18][uVar7 >> 0x10 & 0xff]]
                          [*(uint *)(puVar5 + (uVar4 >> 0x10 & 0xff) * 4) >> 8 & 0xff]]
                   [*(uint *)(puVar5 + (uVar4 >> 0x18) * 4) & 0xff],(uint3)alu_s);
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)((&alu_add16)[(uint3)alu_s & 0xffff] + 0x20)] & 0xffff
               | *(int *)((&alu_add16)[*(int *)(&alu_add16)[alu_s >> 0x10]] +
                         (*(uint *)(&alu_add16)
                                   [*(int *)((&alu_add16)[(uint3)alu_s & 0xffff] + 0x20)] >> 0x10) *
                         4) << 0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_37454_08090868] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34820_0808df40 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_37454_08090868] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  *(uint *)(&sel_data)[on] = R0;
  R2 = *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 0x20)] &
       0xffff | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                        (*(uint *)(&alu_add16)
                                  [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 0x20)]
                        >> 0x10) * 4) << 0x10;
  *(uint *)(&sel_data)[on] = R2;
  R3 = *(undefined **)(fp + -0x200068);
  R0 = *(uint *)(&sel_data)[on];
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x14]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x94] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_08201114 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)*(&alu_eq)[target & 0xff]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x99] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R1;
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
  DAT_08201114 = DAT_0805807c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
  *(undefined **)(&sel_data)[on] = sp;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 1;
  uVar4 = *(uint *)(&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + 4)];
  uVar6 = *(uint *)((&alu_add16)[*(int *)(&alu_add16)[(uint)R3 >> 0x10]] + (uVar4 >> 0x10) * 4);
  uVar7 = *(uint *)(&sel_data)[on];
  _alu_sc = (uint)(byte)*alu_bor8;
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = CONCAT31((uint3)(byte)(&alu_true)[_alu_sc],1);
  puVar5 = (&alu_lshu8)[(&alu_clamp32)[_alu_sc]];
  uVar8 = *(uint *)(puVar5 + (uVar7 & 0xff) * 4);
  uVar9 = *(uint *)(puVar5 + (uVar7 >> 8 & 0xff) * 4);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[uVar8 >> 8 & 0xff][uVar9 & 0xff],*(&alu_bor8)[uVar8 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[uVar8 >> 0x10 & 0xff][uVar9 >> 8 & 0xff],(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11(*(&alu_bor8)[((uint3)alu_s & 0xff00) >> 8],
                         *(&alu_bor8)[(uint3)alu_s & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(byte)(&alu_bor8)[uVar8 >> 0x10 & 0xff][uVar9 >> 8 & 0xff]]
                         [*(uint *)(puVar5 + (uVar7 >> 0x10 & 0xff) * 4) & 0xff],(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11(*(&alu_bor8)[((uint3)alu_s & 0xff00) >> 8],
                         *(&alu_bor8)[(uint3)alu_s & 0xff]);
  alu_s._0_3_ = CONCAT12(*(&alu_bor8)
                          [(byte)(&alu_bor8)
                                 [(byte)(&alu_bor8)[uVar8 >> 0x10 & 0xff][uVar9 >> 8 & 0xff]]
                                 [*(uint *)(puVar5 + (uVar7 >> 0x10 & 0xff) * 4) & 0xff]],
                         (undefined2)alu_s);
  alu_s = CONCAT13((&alu_bor8)
                   [(byte)(&alu_bor8)[(byte)(&alu_bor8)[uVar8 >> 0x18][uVar9 >> 0x10 & 0xff]]
                          [*(uint *)(puVar5 + (uVar7 >> 0x10 & 0xff) * 4) >> 8 & 0xff]]
                   [*(uint *)(puVar5 + (uVar7 >> 0x18) * 4) & 0xff],(uint3)alu_s);
  uVar7 = *(uint *)(&alu_add16)[*(int *)((&alu_add16)[(uint3)alu_s & 0xffff] + 4)];
  uVar8 = *(uint *)((&alu_add16)[*(int *)(&alu_add16)[alu_s >> 0x10]] + (uVar7 >> 0x10) * 4);
  DAT_08200ff1 = (byte)(uVar4 >> 8);
  _alu_z0 = CONCAT12((&alu_mul_sum8l)
                     [(uint)(byte)(&alu_mul_sum8l)
                                  [(uint)(byte)(&alu_mul_mul8h)[DAT_08200ff1][uVar7 & 0xff] +
                                   (uint)(byte)(&alu_mul_sum8h)
                                               [(uint)(byte)(&alu_mul_sum8l)
                                                            [(uint)(byte)(&alu_mul_mul8h)
                                                                         [uVar4 & 0xff]
                                                                         [uVar7 & 0xff] +
                                                             (uint)(byte)(&alu_mul_sum8h)
                                                                         [(byte)(&alu_mul_mul8l)
                                                                                [uVar4 & 0xff]
                                                                                [uVar7 & 0xff]]] +
                                                (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                            [uVar7 & 0xff]]] +
                      (uint)(byte)(&alu_mul_mul8l)[uVar6 & 0xff][uVar7 & 0xff]],
                     CONCAT11((&alu_mul_sum8l)
                              [(uint)(byte)(&alu_mul_sum8l)
                                           [(uint)(byte)(&alu_mul_mul8h)[uVar4 & 0xff][uVar7 & 0xff]
                                            + (uint)(byte)(&alu_mul_sum8h)
                                                          [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                 [uVar7 & 0xff]]] +
                               (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1][uVar7 & 0xff]],
                              (&alu_mul_sum8l)[(byte)(&alu_mul_mul8l)[uVar4 & 0xff][uVar7 & 0xff]]))
  ;
  _alu_z0 = CONCAT13((&alu_mul_sum8l)
                     [(uint)(byte)(&alu_mul_sum8l)
                                  [(uint)(byte)(&alu_mul_mul8h)[uVar6 & 0xff][uVar7 & 0xff] +
                                   (uint)(byte)(&alu_mul_sum8h)
                                               [(uint)(byte)(&alu_mul_sum8l)
                                                            [(uint)(byte)(&alu_mul_mul8h)
                                                                         [DAT_08200ff1]
                                                                         [uVar7 & 0xff] +
                                                             (uint)(byte)(&alu_mul_sum8h)
                                                                         [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[uVar4 & 0xff]
                                                               [uVar7 & 0xff] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                      [uVar7 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [uVar7 & 0xff]]] +
                                                (uint)(byte)(&alu_mul_mul8l)[uVar6 & 0xff]
                                                            [uVar7 & 0xff]]] +
                      (uint)(byte)(&alu_mul_mul8l)[uVar6 >> 8 & 0xff][uVar7 & 0xff]],_alu_z0);
  DAT_08200ff5 = (byte)(uVar7 >> 8);
  _alu_z1 = (uint)CONCAT12((&alu_mul_sum8l)
                           [(uint)(byte)(&alu_mul_sum8l)
                                        [(uint)(byte)(&alu_mul_mul8h)[DAT_08200ff1][DAT_08200ff5] +
                                         (uint)(byte)(&alu_mul_sum8h)
                                                     [(uint)(byte)(&alu_mul_sum8l)
                                                                  [(uint)(byte)(&alu_mul_mul8h)
                                                                               [uVar4 & 0xff]
                                                                               [DAT_08200ff5] +
                                                                   (uint)(byte)(&alu_mul_sum8h)
                                                                               [(byte)(&
                                                  alu_mul_mul8l)[uVar4 & 0xff][DAT_08200ff5]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [DAT_08200ff5]]] +
                            (uint)(byte)(&alu_mul_mul8l)[uVar6 & 0xff][DAT_08200ff5]],
                           CONCAT11((&alu_mul_sum8l)
                                    [(uint)(byte)(&alu_mul_sum8l)
                                                 [(uint)(byte)(&alu_mul_mul8h)[uVar4 & 0xff]
                                                              [DAT_08200ff5] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [DAT_08200ff5]]] +
                                     (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1][DAT_08200ff5]],
                                    (&alu_mul_sum8l)
                                    [(byte)(&alu_mul_mul8l)[uVar4 & 0xff][DAT_08200ff5]])) << 8;
  _alu_z2 = (uint)CONCAT11((&alu_mul_sum8l)
                           [(uint)(byte)(&alu_mul_sum8l)
                                        [(uint)(byte)(&alu_mul_mul8h)[uVar4 & 0xff][uVar8 & 0xff] +
                                         (uint)(byte)(&alu_mul_sum8h)
                                                     [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                            [uVar8 & 0xff]]] +
                            (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1][uVar8 & 0xff]],
                           (&alu_mul_sum8l)[(byte)(&alu_mul_mul8l)[uVar4 & 0xff][uVar8 & 0xff]]) <<
            0x10;
  _alu_z3 = (uint)(byte)(&alu_mul_sum8l)[(byte)(&alu_mul_mul8l)[uVar4 & 0xff][uVar8 >> 8 & 0xff]] <<
            0x18;
  uVar12 = CONCAT12((char)*(uint *)(&alu_mul_sums +
                                   *(int *)(&alu_mul_shl2 +
                                           *(int *)(&alu_mul_sums +
                                                   *(int *)(&alu_mul_shl2 +
                                                           *(int *)(&alu_mul_sums +
                                                                   *(int *)(&alu_mul_shl2 +
                                                                           (uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_sum8l)
                                                               [(uint)(byte)(&alu_mul_mul8h)
                                                                            [uVar4 & 0xff]
                                                                            [DAT_08200ff5] +
                                                                (uint)(byte)(&alu_mul_sum8h)
                                                                            [(byte)(&alu_mul_mul8l)
                                                                                   [uVar4 & 0xff]
                                                                                   [DAT_08200ff5]]]
                                                   + (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                                 [DAT_08200ff5]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[DAT_08200ff1][uVar7 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar4 & 0xff][uVar7 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [uVar7 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [uVar7 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[uVar6 & 0xff]
                                                              [uVar7 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar4 & 0xff]
                                                                             [uVar8 & 0xff]] * 4)) *
                                           4) +
                                   *(int *)(&alu_mul_shl2 +
                                           (*(uint *)(&alu_mul_sums +
                                                     *(int *)(&alu_mul_shl2 +
                                                             *(int *)(&alu_mul_sums +
                                                                     *(int *)(&alu_mul_shl2 +
                                                                             (uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                         [DAT_08200ff5]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar4 & 0xff][uVar7 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [uVar7 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [uVar7 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    _alu_mul_shl2 +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            (_alu_z0 & 0xff) * 4))
                                                           >> 8 & 0xff) * 4)) >> 8 & 0xff) * 4)),
                    CONCAT11((char)*(uint *)(&alu_mul_sums +
                                            *(int *)(&alu_mul_shl2 +
                                                    *(int *)(&alu_mul_sums +
                                                            *(int *)(&alu_mul_shl2 +
                                                                    (uint)(byte)(&alu_mul_sum8l)
                                                                                [(byte)(&
                                                  alu_mul_mul8l)[uVar4 & 0xff][DAT_08200ff5]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar4 & 0xff][uVar7 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [uVar7 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [uVar7 & 0xff]] * 4)) * 4) +
                                            *(int *)(&alu_mul_shl2 +
                                                    (*(uint *)(&alu_mul_sums +
                                                              _alu_mul_shl2 +
                                                              *(int *)(&alu_mul_shl2 +
                                                                      (_alu_z0 & 0xff) * 4)) >> 8 &
                                                    0xff) * 4)),
                             (char)*(uint *)(&alu_mul_sums +
                                            _alu_mul_shl2 +
                                            *(int *)(&alu_mul_shl2 + (_alu_z0 & 0xff) * 4))));
  stack_temp = (undefined *)
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[uVar12 & 0xffff] +
                                   (uint)*(ushort *)
                                          (&alu_inv16 + (*(uint *)(&sel_data)[on] & 0xffff) * 2) * 4
                                   )] + 4) & 0xffff |
               *(int *)((&alu_add16)
                        [*(int *)((&alu_add16)
                                  [CONCAT13((char)*(undefined4 *)
                                                   (&alu_mul_sums +
                                                   *(int *)(&alu_mul_shl2 +
                                                           *(int *)(&alu_mul_sums +
                                                                   *(int *)(&alu_mul_shl2 +
                                                                           *(int *)(&alu_mul_sums +
                                                                                   *(int *)(&
                                                  alu_mul_shl2 +
                                                  *(int *)(&alu_mul_sums +
                                                          *(int *)(&alu_mul_shl2 +
                                                                  (uint)(byte)(&alu_mul_sum8l)
                                                                              [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[DAT_08200ff1]
                                                               [DAT_08200ff5] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(uint)(byte)(&alu_mul_sum8l)
                                                                            [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar4 & 0xff][DAT_08200ff5] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [DAT_08200ff5]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [DAT_08200ff5]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[uVar6 & 0xff]
                                                              [DAT_08200ff5]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar6 & 0xff][uVar7 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[DAT_08200ff1][uVar7 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar4 & 0xff][uVar7 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [uVar7 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [uVar7 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[uVar6 & 0xff]
                                                              [uVar7 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[uVar6 >> 8 & 0xff]
                                                              [uVar7 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar4 & 0xff][uVar8 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [uVar8 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [uVar8 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar4 & 0xff]
                                                                             [uVar8 >> 8 & 0xff]] *
                                                          4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            *(int *)(&alu_mul_sums +
                                                                                    *(int *)(&
                                                  alu_mul_shl2 +
                                                  *(int *)(&alu_mul_sums +
                                                          *(int *)(&alu_mul_shl2 +
                                                                  (uint)(byte)(&alu_mul_sum8l)
                                                                              [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[uVar4 & 0xff]
                                                               [DAT_08200ff5] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                      [DAT_08200ff5]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [DAT_08200ff5]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[DAT_08200ff1][uVar7 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar4 & 0xff][uVar7 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [uVar7 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [uVar7 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[uVar6 & 0xff]
                                                              [uVar7 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar4 & 0xff]
                                                                             [uVar8 & 0xff]] * 4)) *
                                                  4) + *(int *)(&alu_mul_shl2 +
                                                               (*(uint *)(&alu_mul_sums +
                                                                         *(int *)(&alu_mul_shl2 +
                                                                                 *(int *)(&
                                                  alu_mul_sums +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar4 & 0xff]
                                                                             [DAT_08200ff5]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar4 & 0xff][uVar7 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                                     [uVar7 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [uVar7 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    _alu_mul_shl2 +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            (_alu_z0 & 0xff) * 4))
                                                           >> 8 & 0xff) * 4)) >> 8 & 0xff) * 4)) >>
                                                  8 & 0xff) * 4)),uVar12) >> 0x10] +
                                 (uint)*(ushort *)
                                        (&alu_inv16 + (*(uint *)(&sel_data)[on] >> 0x10) * 2) * 4)]
                       + (*(uint *)((&alu_add16)
                                    [*(int *)((&alu_add16)[uVar12 & 0xffff] +
                                             (uint)*(ushort *)
                                                    (&alu_inv16 +
                                                    (*(uint *)(&sel_data)[on] & 0xffff) * 2) * 4)] +
                                   4) >> 0x10) * 4) << 0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R1 = *(undefined1 **)(&sel_data)[on];
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)
                         [*(int *)((&alu_add16)
                                   [*(uint *)((&alu_add16)
                                              [*(int *)((&alu_add16)[(uint)R3 & 0xffff] +
                                                       (uint)*(ushort *)
                                                              (&alu_inv16 + ((uint)R1 & 0xffff) * 2)
                                                       * 4)] + 4) & 0xffff] + (R2 & 0xffff) * 4)] &
                0xffff | *(int *)((&alu_add16)
                                  [*(int *)((&alu_add16)
                                            [*(uint *)((&alu_add16)
                                                       [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                                                (uint)*(ushort *)
                                                                       (&alu_inv16 +
                                                                       ((uint)R1 >> 0x10) * 2) * 4)]
                                                      + (*(uint *)((&alu_add16)
                                                                   [*(int *)((&alu_add16)
                                                                             [(uint)R3 & 0xffff] +
                                                                            (uint)*(ushort *)
                                                                                   (&alu_inv16 +
                                                                                   ((uint)R1 &
                                                                                   0xffff) * 2) * 4)
                                                                   ] + 4) >> 0x10) * 4) & 0xffff] +
                                           (R2 >> 0x10) * 4)] +
                                 (*(uint *)(&alu_add16)
                                           [*(int *)((&alu_add16)
                                                     [*(uint *)((&alu_add16)
                                                                [*(int *)((&alu_add16)
                                                                          [(uint)R3 & 0xffff] +
                                                                         (uint)*(ushort *)
                                                                                (&alu_inv16 +
                                                                                ((uint)R1 & 0xffff)
                                                                                * 2) * 4)] + 4) &
                                                      0xffff] + (R2 & 0xffff) * 4)] >> 0x10) * 4) <<
                         0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = &DAT_08058042;
  stack_temp = &DAT_08058042;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_44135_080970cc] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34820_0808df40 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_44135_080970cc] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060)))
  ;
  *(undefined4 *)(&sel_target)[on] = 0x8804b203;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xa1]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xad] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = &DAT_0805803f;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_45455_0809856c] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34820_0808df40 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_45455_0809856c] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][3]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xb2] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(&sel_data)[on];
  R1 = (undefined1 *)
       (*(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)uRam0816c052 * 4)] +
                 4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)uRam0816c052 * 4)] + 4)
               >> 0x10) * 4) << 0x10);
  *(undefined1 **)(&sel_data)[on] = R1;
  R2 = 0;
  uVar4 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)_alu_inv16 * 4)] +
                   4);
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
  *(undefined4 *)(&sel_target)[b0] = 0x8804ada1;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xad]] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_08201114 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x99]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xbc] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R1;
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
  DAT_08201114 = DAT_0805807c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
  *(undefined **)(&sel_data)[on] = sp;
  *(uint *)(&sel_data)[on] =
       *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] & 0xffff
       | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                 (*(uint *)(&alu_add16)
                           [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] >> 0x10)
                 * 4) << 0x10;
  R1 = t;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  stack_temp = &DAT_0805803c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R2 = 4;
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x8804d617;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88049900;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x17]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xd6] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  stack_temp = (undefined *)0x186a0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_55692_080a2560] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34820_0808df40 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_55692_080a2560] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_56178_080a2cf8] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34820_0808df40 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_56178_080a2cf8] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xe0]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xdb] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_08201114 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xcc]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xe0] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R1;
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
  DAT_08201114 = DAT_0805807c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
  *(undefined **)(&sel_data)[on] = sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + (uint)uRam0816c052 * 4)
                 ] + 4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] +
                                   (uint)uRam0816c052 * 4)] + 4) >> 0x10) * 4) << 0x10;
  R1 = t;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  stack_temp = &DAT_08058039;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R2 = 1;
  R3 = (undefined *)
       (*(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] &
        0xffff | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                         (*(uint *)(&alu_add16)
                                   [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)]
                         >> 0x10) * 4) << 0x10);
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x8804fac5;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88049900;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xc5]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xfa] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  R3 = *(undefined **)(fp + -0x200068);
  R0 = *(uint *)(&sel_data)[on];
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xe]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xfd] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_08201114 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xfa]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][1] * 4)]
                                  + (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R1;
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
  DAT_08201114 = DAT_0805807c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
  *(undefined **)(&sel_data)[on] = sp;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 0;
  uVar4 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)_alu_inv16 * 4)] +
                   4);
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
  *(undefined4 *)(&sel_target)[b0] = 0x88050949;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  *(undefined4 *)(&sel_target)[on] = 0x88052061;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x49]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][9] * 4)]
                                  + (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R2 = 1;
  R3 = (undefined *)
       (*(uint *)((&alu_add16)
                  [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + (uint)uRam0816c052 * 4
                           )] + 4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] +
                                   (uint)uRam0816c052 * 4)] + 4) >> 0x10) * 4) << 0x10);
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88050fad;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880501fa;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xad]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xf] * 4
                                                  )] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88051386;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8804e0cc;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x86]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x13] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  stack_temp = (undefined *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x880517ad;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8804bc99;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xad]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x17] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R2 = 1;
  R3 = (undefined *)
       (*(uint *)((&alu_add16)
                  [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + (uint)uRam0816c052 * 4
                           )] + 4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] +
                                   (uint)uRam0816c052 * 4)] + 4) >> 0x10) * 4) << 0x10);
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88051e46;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880501fa;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x46]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x1e] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x61]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x20] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_08201114 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x4d]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x25] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R1;
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
  DAT_08201114 = DAT_0805807c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
  *(undefined **)(&sel_data)[on] = sp;
  stack_temp = &DAT_08058032;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_10893_08076964] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34821_0808df44 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_10893_08076964] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 1;
  uVar4 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)uRam0816c052 * 4)]
                   + 4);
  alu_s._3_1_ = (byte)(*(uint *)((&alu_add16)
                                 [*(int *)((&alu_add16)[(uint)R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                (uVar4 >> 0x10) * 4) >> 8);
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
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
                                                  (uVar4 >> 0x10) * 4) & 0xff)] + (uint)alu_s._3_1_]
                   ];
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           & 0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)((&or)[*(int *)((&xor)[sf] + of * 4)] + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88053361;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_12347_0807801c] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34821_0808df44 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_12347_0807801c] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  _external = atoi;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  R3 = (undefined *)R0;
  *(uint *)(&sel_data)[on] = R0;
  R2 = 0;
  uVar4 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)_alu_inv16 * 4)] +
                   4);
  alu_s._3_1_ = (byte)(*(uint *)((&alu_add16)
                                 [*(int *)((&alu_add16)[(uint)R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                (uVar4 >> 0x10) * 4) >> 8);
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
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
                                                  (uVar4 >> 0x10) * 4) & 0xff)] + (uint)alu_s._3_1_]
                   ];
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           & 0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)((&and)[*(int *)(&alu_false + zf * 4)] +
                               *(int *)((&xnor)[sf] + of * 4) * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x8805356e;
  iVar3 = b0;
  puVar10 = (uint *)(&sel_data)[b0];
  *puVar10 = R0;
  puVar10[1] = (uint)R1;
  puVar10[2] = R2;
  puVar10[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x61]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x33] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = 8;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x6e]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x35] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R2 = 0;
  *(undefined4 *)(&sel_data)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xab]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x37] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88053b0d;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88048884;
  iVar3 = on;
  puVar10 = (uint *)(&sel_data)[on];
  *puVar10 = R0;
  puVar10[1] = (uint)R1;
  puVar10[2] = R2;
  puVar10[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xd]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x3b] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  uVar4 = *(uint *)(&sel_data)[on];
  _alu_sx = 2;
  _alu_sc = (uint)(byte)*alu_bor8;
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = CONCAT31((uint3)(byte)(&alu_true)[_alu_sc],2);
  alu_s1 = 0;
  alu_s2 = 0;
  DAT_0820102d = 0;
  alu_s3 = 0;
  DAT_08201039 = 0;
  DAT_0820103a = 0;
  puVar5 = (&alu_lshu8)[(&alu_clamp32)[_alu_sc]];
  _alu_s0 = *(undefined4 *)(puVar5 + (uVar4 & 0xff) * 4);
  uVar11 = *(undefined4 *)(puVar5 + (uVar4 >> 8 & 0xff) * 4);
  DAT_08201021 = (undefined)uVar11;
  DAT_08201022 = (undefined)((uint)uVar11 >> 8);
  DAT_08201023 = (undefined)((uint)uVar11 >> 0x10);
  uRam08201024 = (undefined)((uint)uVar11 >> 0x18);
  uVar11 = *(undefined4 *)(puVar5 + (uVar4 >> 0x10 & 0xff) * 4);
  DAT_0820102e = (undefined)uVar11;
  DAT_0820102f = (undefined)((uint)uVar11 >> 8);
  uRam08201030 = (undefined2)((uint)uVar11 >> 0x10);
  _DAT_0820103b = *(undefined4 *)(puVar5 + (uVar4 >> 0x18) * 4);
  *(uint *)(&sel_data)[on] = R0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x40]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x41] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R1 = (undefined1 *)0x1;
  *(uint *)(&sel_data)[on] =
       *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] & 0xffff
       | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                 (*(uint *)(&alu_add16)
                           [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] >> 0x10)
                 * 4) << 0x10;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 3;
  alu_s = *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                  (*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)uRam0816c056 * 4)] +
                            4) >> 0x10) * 4) << 0x10;
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
  *(undefined4 *)(&sel_target)[b0] = 0x880537ab;
  iVar3 = b0;
  puVar10 = (uint *)(&sel_data)[b0];
  *puVar10 = R0;
  puVar10[1] = (uint)R1;
  puVar10[2] = R2;
  puVar10[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R3 = *(undefined **)
        (&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(&pop + *(
                                                  int *)(&pop + *(int *)(fp + -0x200060))))))));
  R2 = *(uint *)(&sel_data)[on];
  *(uint *)(&sel_data)[on] = R2;
  *(undefined4 *)(&sel_target)[on] = 0x880551a2;
  iVar3 = on;
  puVar10 = (uint *)(&sel_data)[on];
  *puVar10 = R0;
  puVar10[1] = (uint)R1;
  puVar10[2] = R2;
  puVar10[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x66]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x48] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = (undefined *)0x0;
  stack_temp = (undefined *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88054c52;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8804bc99;
  iVar3 = on;
  puVar10 = (uint *)(&sel_data)[on];
  *puVar10 = R0;
  puVar10[1] = (uint)R1;
  puVar10[2] = R2;
  puVar10[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x52]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x4c] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x61]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x4e] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R1 = (undefined1 *)0x1;
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + (uint)uRam0816c052 * 4)
                 ] + 4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] +
                                   (uint)uRam0816c052 * 4)] + 4) >> 0x10) * 4) << 0x10;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xa2]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x51] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 0;
  alu_t = 0;
  DAT_08201002 = 0;
  uVar4 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)_alu_inv16 * 4)] +
                   4);
  uVar6 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                   (uVar4 >> 0x10) * 4);
  _DAT_08200ffe = (undefined2)uVar6;
  alu_s = uVar4 & 0xffff | uVar6 << 0x10;
  alu_c = (byte)(uVar6 >> 0x10);
  uRam08201001 = (undefined)(uVar6 >> 0x18);
  cf = (&alu_false)[alu_c];
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
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           & 0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88054866;
  iVar3 = b0;
  puVar10 = (uint *)(&sel_data)[b0];
  *puVar10 = R0;
  puVar10[1] = (uint)R1;
  puVar10[2] = R2;
  puVar10[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  stack_temp = (undefined *)0x1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x880558bb;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880501fa;
  iVar3 = on;
  puVar10 = (uint *)(&sel_data)[on];
  *puVar10 = R0;
  puVar10[1] = (uint)R1;
  puVar10[2] = R2;
  puVar10[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xbb]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x58] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  stack_temp = &DAT_08058030;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = (undefined *)0x1;
  stack_temp = (undefined *)0x1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R2 = 0;
  stack_temp = (undefined *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88055d44;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88049900;
  iVar3 = on;
  puVar10 = (uint *)(&sel_data)[on];
  *puVar10 = R0;
  puVar10[1] = (uint)R1;
  puVar10[2] = R2;
  puVar10[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x44]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x5d] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  R0 = 0;
  _alu_x = target;
  _alu_y = 0x88055f69;
  b1 = (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x5f];
  b2 = (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5];
  b3 = (uint)(byte)(&alu_eq)[target >> 0x18][0x88];
  iVar3 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x69]] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar3];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_08201114 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
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
  uint uVar8;
  uint *puVar9;
  undefined4 uVar10;
  uint3 uVar11;
  
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
  stack_temp = (undefined *)0x8804863e;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8805254d;
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
  puVar1[1] = DAT_08058074;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x3e]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x86] *
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
  puVar1[1] = DAT_086011ac;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = (undefined *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x84]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x88] *
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
  puVar1[1] = DAT_086011ac;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R1;
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
  DAT_08201114 = DAT_0805807c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar1 = (undefined4 *)(&sel_data)[on];
  *puVar1 = stack_temp;
  puVar1[1] = DAT_08201114;
  *(undefined **)(&sel_data)[on] = sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  uVar3 = *(uint *)(&sel_data)[on];
  _alu_sc = (uint)(byte)*alu_bor8;
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = CONCAT31((uint3)(byte)(&alu_true)[_alu_sc],2);
  puVar4 = (&alu_lshu8)[(&alu_clamp32)[_alu_sc]];
  uVar5 = *(uint *)(puVar4 + (uVar3 & 0xff) * 4);
  uVar6 = *(uint *)(puVar4 + (uVar3 >> 8 & 0xff) * 4);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[uVar5 >> 8 & 0xff][uVar6 & 0xff],*(&alu_bor8)[uVar5 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[uVar5 >> 0x10 & 0xff][uVar6 >> 8 & 0xff],(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11(*(&alu_bor8)[((uint3)alu_s & 0xff00) >> 8],
                         *(&alu_bor8)[(uint3)alu_s & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(byte)(&alu_bor8)[uVar5 >> 0x10 & 0xff][uVar6 >> 8 & 0xff]]
                         [*(uint *)(puVar4 + (uVar3 >> 0x10 & 0xff) * 4) & 0xff],(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11(*(&alu_bor8)[((uint3)alu_s & 0xff00) >> 8],
                         *(&alu_bor8)[(uint3)alu_s & 0xff]);
  alu_s._0_3_ = CONCAT12(*(&alu_bor8)
                          [(byte)(&alu_bor8)
                                 [(byte)(&alu_bor8)[uVar5 >> 0x10 & 0xff][uVar6 >> 8 & 0xff]]
                                 [*(uint *)(puVar4 + (uVar3 >> 0x10 & 0xff) * 4) & 0xff]],
                         (undefined2)alu_s);
  alu_s = CONCAT13((&alu_bor8)
                   [(byte)(&alu_bor8)[(byte)(&alu_bor8)[uVar5 >> 0x18][uVar6 >> 0x10 & 0xff]]
                          [*(uint *)(puVar4 + (uVar3 >> 0x10 & 0xff) * 4) >> 8 & 0xff]]
                   [*(uint *)(puVar4 + (uVar3 >> 0x18) * 4) & 0xff],(uint3)alu_s);
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)((&alu_add16)[(uint3)alu_s & 0xffff] + 0x20)] & 0xffff
               | *(int *)((&alu_add16)[*(int *)(&alu_add16)[alu_s >> 0x10]] +
                         (*(uint *)(&alu_add16)
                                   [*(int *)((&alu_add16)[(uint3)alu_s & 0xffff] + 0x20)] >> 0x10) *
                         4) << 0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_37454_08090868] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34820_0808df40 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_37454_08090868] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  *(uint *)(&sel_data)[on] = R0;
  R2 = *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 0x20)] &
       0xffff | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                        (*(uint *)(&alu_add16)
                                  [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 0x20)]
                        >> 0x10) * 4) << 0x10;
  *(uint *)(&sel_data)[on] = R2;
  R3 = *(undefined **)(fp + -0x200068);
  R0 = *(uint *)(&sel_data)[on];
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x14]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x94] *
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
  puVar1[1] = DAT_086011ac;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_08201114 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar1 = (undefined4 *)(&sel_data)[on];
  *puVar1 = stack_temp;
  puVar1[1] = DAT_08201114;
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
  puVar1[1] = DAT_08058074;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)*(&alu_eq)[target & 0xff]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x99] *
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
  puVar1[1] = DAT_086011ac;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R1;
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
  DAT_08201114 = DAT_0805807c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar1 = (undefined4 *)(&sel_data)[on];
  *puVar1 = stack_temp;
  puVar1[1] = DAT_08201114;
  *(undefined **)(&sel_data)[on] = sp;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 1;
  uVar3 = *(uint *)(&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + 4)];
  uVar5 = *(uint *)((&alu_add16)[*(int *)(&alu_add16)[(uint)R3 >> 0x10]] + (uVar3 >> 0x10) * 4);
  uVar6 = *(uint *)(&sel_data)[on];
  _alu_sc = (uint)(byte)*alu_bor8;
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = CONCAT31((uint3)(byte)(&alu_true)[_alu_sc],1);
  puVar4 = (&alu_lshu8)[(&alu_clamp32)[_alu_sc]];
  uVar7 = *(uint *)(puVar4 + (uVar6 & 0xff) * 4);
  uVar8 = *(uint *)(puVar4 + (uVar6 >> 8 & 0xff) * 4);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[uVar7 >> 8 & 0xff][uVar8 & 0xff],*(&alu_bor8)[uVar7 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[uVar7 >> 0x10 & 0xff][uVar8 >> 8 & 0xff],(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11(*(&alu_bor8)[((uint3)alu_s & 0xff00) >> 8],
                         *(&alu_bor8)[(uint3)alu_s & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(byte)(&alu_bor8)[uVar7 >> 0x10 & 0xff][uVar8 >> 8 & 0xff]]
                         [*(uint *)(puVar4 + (uVar6 >> 0x10 & 0xff) * 4) & 0xff],(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11(*(&alu_bor8)[((uint3)alu_s & 0xff00) >> 8],
                         *(&alu_bor8)[(uint3)alu_s & 0xff]);
  alu_s._0_3_ = CONCAT12(*(&alu_bor8)
                          [(byte)(&alu_bor8)
                                 [(byte)(&alu_bor8)[uVar7 >> 0x10 & 0xff][uVar8 >> 8 & 0xff]]
                                 [*(uint *)(puVar4 + (uVar6 >> 0x10 & 0xff) * 4) & 0xff]],
                         (undefined2)alu_s);
  alu_s = CONCAT13((&alu_bor8)
                   [(byte)(&alu_bor8)[(byte)(&alu_bor8)[uVar7 >> 0x18][uVar8 >> 0x10 & 0xff]]
                          [*(uint *)(puVar4 + (uVar6 >> 0x10 & 0xff) * 4) >> 8 & 0xff]]
                   [*(uint *)(puVar4 + (uVar6 >> 0x18) * 4) & 0xff],(uint3)alu_s);
  uVar6 = *(uint *)(&alu_add16)[*(int *)((&alu_add16)[(uint3)alu_s & 0xffff] + 4)];
  uVar7 = *(uint *)((&alu_add16)[*(int *)(&alu_add16)[alu_s >> 0x10]] + (uVar6 >> 0x10) * 4);
  DAT_08200ff1 = (byte)(uVar3 >> 8);
  _alu_z0 = CONCAT12((&alu_mul_sum8l)
                     [(uint)(byte)(&alu_mul_sum8l)
                                  [(uint)(byte)(&alu_mul_mul8h)[DAT_08200ff1][uVar6 & 0xff] +
                                   (uint)(byte)(&alu_mul_sum8h)
                                               [(uint)(byte)(&alu_mul_sum8l)
                                                            [(uint)(byte)(&alu_mul_mul8h)
                                                                         [uVar3 & 0xff]
                                                                         [uVar6 & 0xff] +
                                                             (uint)(byte)(&alu_mul_sum8h)
                                                                         [(byte)(&alu_mul_mul8l)
                                                                                [uVar3 & 0xff]
                                                                                [uVar6 & 0xff]]] +
                                                (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                            [uVar6 & 0xff]]] +
                      (uint)(byte)(&alu_mul_mul8l)[uVar5 & 0xff][uVar6 & 0xff]],
                     CONCAT11((&alu_mul_sum8l)
                              [(uint)(byte)(&alu_mul_sum8l)
                                           [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff][uVar6 & 0xff]
                                            + (uint)(byte)(&alu_mul_sum8h)
                                                          [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                 [uVar6 & 0xff]]] +
                               (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1][uVar6 & 0xff]],
                              (&alu_mul_sum8l)[(byte)(&alu_mul_mul8l)[uVar3 & 0xff][uVar6 & 0xff]]))
  ;
  _alu_z0 = CONCAT13((&alu_mul_sum8l)
                     [(uint)(byte)(&alu_mul_sum8l)
                                  [(uint)(byte)(&alu_mul_mul8h)[uVar5 & 0xff][uVar6 & 0xff] +
                                   (uint)(byte)(&alu_mul_sum8h)
                                               [(uint)(byte)(&alu_mul_sum8l)
                                                            [(uint)(byte)(&alu_mul_mul8h)
                                                                         [DAT_08200ff1]
                                                                         [uVar6 & 0xff] +
                                                             (uint)(byte)(&alu_mul_sum8h)
                                                                         [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff]
                                                               [uVar6 & 0xff] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                      [uVar6 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [uVar6 & 0xff]]] +
                                                (uint)(byte)(&alu_mul_mul8l)[uVar5 & 0xff]
                                                            [uVar6 & 0xff]]] +
                      (uint)(byte)(&alu_mul_mul8l)[uVar5 >> 8 & 0xff][uVar6 & 0xff]],_alu_z0);
  DAT_08200ff5 = (byte)(uVar6 >> 8);
  _alu_z1 = (uint)CONCAT12((&alu_mul_sum8l)
                           [(uint)(byte)(&alu_mul_sum8l)
                                        [(uint)(byte)(&alu_mul_mul8h)[DAT_08200ff1][DAT_08200ff5] +
                                         (uint)(byte)(&alu_mul_sum8h)
                                                     [(uint)(byte)(&alu_mul_sum8l)
                                                                  [(uint)(byte)(&alu_mul_mul8h)
                                                                               [uVar3 & 0xff]
                                                                               [DAT_08200ff5] +
                                                                   (uint)(byte)(&alu_mul_sum8h)
                                                                               [(byte)(&
                                                  alu_mul_mul8l)[uVar3 & 0xff][DAT_08200ff5]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [DAT_08200ff5]]] +
                            (uint)(byte)(&alu_mul_mul8l)[uVar5 & 0xff][DAT_08200ff5]],
                           CONCAT11((&alu_mul_sum8l)
                                    [(uint)(byte)(&alu_mul_sum8l)
                                                 [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff]
                                                              [DAT_08200ff5] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [DAT_08200ff5]]] +
                                     (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1][DAT_08200ff5]],
                                    (&alu_mul_sum8l)
                                    [(byte)(&alu_mul_mul8l)[uVar3 & 0xff][DAT_08200ff5]])) << 8;
  _alu_z2 = (uint)CONCAT11((&alu_mul_sum8l)
                           [(uint)(byte)(&alu_mul_sum8l)
                                        [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff][uVar7 & 0xff] +
                                         (uint)(byte)(&alu_mul_sum8h)
                                                     [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                            [uVar7 & 0xff]]] +
                            (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1][uVar7 & 0xff]],
                           (&alu_mul_sum8l)[(byte)(&alu_mul_mul8l)[uVar3 & 0xff][uVar7 & 0xff]]) <<
            0x10;
  _alu_z3 = (uint)(byte)(&alu_mul_sum8l)[(byte)(&alu_mul_mul8l)[uVar3 & 0xff][uVar7 >> 8 & 0xff]] <<
            0x18;
  uVar11 = CONCAT12((char)*(uint *)(&alu_mul_sums +
                                   *(int *)(&alu_mul_shl2 +
                                           *(int *)(&alu_mul_sums +
                                                   *(int *)(&alu_mul_shl2 +
                                                           *(int *)(&alu_mul_sums +
                                                                   *(int *)(&alu_mul_shl2 +
                                                                           (uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_sum8l)
                                                               [(uint)(byte)(&alu_mul_mul8h)
                                                                            [uVar3 & 0xff]
                                                                            [DAT_08200ff5] +
                                                                (uint)(byte)(&alu_mul_sum8h)
                                                                            [(byte)(&alu_mul_mul8l)
                                                                                   [uVar3 & 0xff]
                                                                                   [DAT_08200ff5]]]
                                                   + (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                                 [DAT_08200ff5]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[DAT_08200ff1][uVar6 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar6 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar6 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [uVar6 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[uVar5 & 0xff]
                                                              [uVar6 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar3 & 0xff]
                                                                             [uVar7 & 0xff]] * 4)) *
                                           4) +
                                   *(int *)(&alu_mul_shl2 +
                                           (*(uint *)(&alu_mul_sums +
                                                     *(int *)(&alu_mul_shl2 +
                                                             *(int *)(&alu_mul_sums +
                                                                     *(int *)(&alu_mul_shl2 +
                                                                             (uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                         [DAT_08200ff5]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar6 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar6 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [uVar6 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    _alu_mul_shl2 +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            (_alu_z0 & 0xff) * 4))
                                                           >> 8 & 0xff) * 4)) >> 8 & 0xff) * 4)),
                    CONCAT11((char)*(uint *)(&alu_mul_sums +
                                            *(int *)(&alu_mul_shl2 +
                                                    *(int *)(&alu_mul_sums +
                                                            *(int *)(&alu_mul_shl2 +
                                                                    (uint)(byte)(&alu_mul_sum8l)
                                                                                [(byte)(&
                                                  alu_mul_mul8l)[uVar3 & 0xff][DAT_08200ff5]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar6 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar6 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [uVar6 & 0xff]] * 4)) * 4) +
                                            *(int *)(&alu_mul_shl2 +
                                                    (*(uint *)(&alu_mul_sums +
                                                              _alu_mul_shl2 +
                                                              *(int *)(&alu_mul_shl2 +
                                                                      (_alu_z0 & 0xff) * 4)) >> 8 &
                                                    0xff) * 4)),
                             (char)*(uint *)(&alu_mul_sums +
                                            _alu_mul_shl2 +
                                            *(int *)(&alu_mul_shl2 + (_alu_z0 & 0xff) * 4))));
  stack_temp = (undefined *)
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[uVar11 & 0xffff] +
                                   (uint)*(ushort *)
                                          (&alu_inv16 + (*(uint *)(&sel_data)[on] & 0xffff) * 2) * 4
                                   )] + 4) & 0xffff |
               *(int *)((&alu_add16)
                        [*(int *)((&alu_add16)
                                  [CONCAT13((char)*(undefined4 *)
                                                   (&alu_mul_sums +
                                                   *(int *)(&alu_mul_shl2 +
                                                           *(int *)(&alu_mul_sums +
                                                                   *(int *)(&alu_mul_shl2 +
                                                                           *(int *)(&alu_mul_sums +
                                                                                   *(int *)(&
                                                  alu_mul_shl2 +
                                                  *(int *)(&alu_mul_sums +
                                                          *(int *)(&alu_mul_shl2 +
                                                                  (uint)(byte)(&alu_mul_sum8l)
                                                                              [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[DAT_08200ff1]
                                                               [DAT_08200ff5] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(uint)(byte)(&alu_mul_sum8l)
                                                                            [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][DAT_08200ff5] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [DAT_08200ff5]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [DAT_08200ff5]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[uVar5 & 0xff]
                                                              [DAT_08200ff5]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar5 & 0xff][uVar6 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[DAT_08200ff1][uVar6 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar6 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar6 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [uVar6 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[uVar5 & 0xff]
                                                              [uVar6 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[uVar5 >> 8 & 0xff]
                                                              [uVar6 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar7 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar7 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [uVar7 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar3 & 0xff]
                                                                             [uVar7 >> 8 & 0xff]] *
                                                          4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            *(int *)(&alu_mul_sums +
                                                                                    *(int *)(&
                                                  alu_mul_shl2 +
                                                  *(int *)(&alu_mul_sums +
                                                          *(int *)(&alu_mul_shl2 +
                                                                  (uint)(byte)(&alu_mul_sum8l)
                                                                              [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff]
                                                               [DAT_08200ff5] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                      [DAT_08200ff5]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [DAT_08200ff5]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[DAT_08200ff1][uVar6 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar6 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar6 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [uVar6 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[uVar5 & 0xff]
                                                              [uVar6 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar3 & 0xff]
                                                                             [uVar7 & 0xff]] * 4)) *
                                                  4) + *(int *)(&alu_mul_shl2 +
                                                               (*(uint *)(&alu_mul_sums +
                                                                         *(int *)(&alu_mul_shl2 +
                                                                                 *(int *)(&
                                                  alu_mul_sums +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar3 & 0xff]
                                                                             [DAT_08200ff5]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar6 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar6 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [uVar6 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    _alu_mul_shl2 +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            (_alu_z0 & 0xff) * 4))
                                                           >> 8 & 0xff) * 4)) >> 8 & 0xff) * 4)) >>
                                                  8 & 0xff) * 4)),uVar11) >> 0x10] +
                                 (uint)*(ushort *)
                                        (&alu_inv16 + (*(uint *)(&sel_data)[on] >> 0x10) * 2) * 4)]
                       + (*(uint *)((&alu_add16)
                                    [*(int *)((&alu_add16)[uVar11 & 0xffff] +
                                             (uint)*(ushort *)
                                                    (&alu_inv16 +
                                                    (*(uint *)(&sel_data)[on] & 0xffff) * 2) * 4)] +
                                   4) >> 0x10) * 4) << 0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R1 = *(undefined1 **)(&sel_data)[on];
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)
                         [*(int *)((&alu_add16)
                                   [*(uint *)((&alu_add16)
                                              [*(int *)((&alu_add16)[(uint)R3 & 0xffff] +
                                                       (uint)*(ushort *)
                                                              (&alu_inv16 + ((uint)R1 & 0xffff) * 2)
                                                       * 4)] + 4) & 0xffff] + (R2 & 0xffff) * 4)] &
                0xffff | *(int *)((&alu_add16)
                                  [*(int *)((&alu_add16)
                                            [*(uint *)((&alu_add16)
                                                       [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                                                (uint)*(ushort *)
                                                                       (&alu_inv16 +
                                                                       ((uint)R1 >> 0x10) * 2) * 4)]
                                                      + (*(uint *)((&alu_add16)
                                                                   [*(int *)((&alu_add16)
                                                                             [(uint)R3 & 0xffff] +
                                                                            (uint)*(ushort *)
                                                                                   (&alu_inv16 +
                                                                                   ((uint)R1 &
                                                                                   0xffff) * 2) * 4)
                                                                   ] + 4) >> 0x10) * 4) & 0xffff] +
                                           (R2 >> 0x10) * 4)] +
                                 (*(uint *)(&alu_add16)
                                           [*(int *)((&alu_add16)
                                                     [*(uint *)((&alu_add16)
                                                                [*(int *)((&alu_add16)
                                                                          [(uint)R3 & 0xffff] +
                                                                         (uint)*(ushort *)
                                                                                (&alu_inv16 +
                                                                                ((uint)R1 & 0xffff)
                                                                                * 2) * 4)] + 4) &
                                                      0xffff] + (R2 & 0xffff) * 4)] >> 0x10) * 4) <<
                         0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = &DAT_08058042;
  stack_temp = &DAT_08058042;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_44135_080970cc] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34820_0808df40 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_44135_080970cc] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060)))
  ;
  *(undefined4 *)(&sel_target)[on] = 0x8804b203;
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
  puVar1[1] = DAT_08058074;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xa1]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xad] *
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
  puVar1[1] = DAT_086011ac;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = &DAT_0805803f;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_45455_0809856c] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34820_0808df40 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_45455_0809856c] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][3]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xb2] *
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
  puVar1[1] = DAT_086011ac;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(&sel_data)[on];
  R1 = (undefined1 *)
       (*(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)uRam0816c052 * 4)] +
                 4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)uRam0816c052 * 4)] + 4)
               >> 0x10) * 4) << 0x10);
  *(undefined1 **)(&sel_data)[on] = R1;
  R2 = 0;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)_alu_inv16 * 4)] +
                   4);
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
  *(undefined4 *)(&sel_target)[b0] = 0x8804ada1;
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
  puVar1[1] = DAT_08058074;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xad]] +
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
  puVar1[1] = DAT_086011ac;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_08201114 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar1 = (undefined4 *)(&sel_data)[on];
  *puVar1 = stack_temp;
  puVar1[1] = DAT_08201114;
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
  puVar1[1] = DAT_08058074;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x99]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xbc] *
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
  puVar1[1] = DAT_086011ac;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R1;
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
  DAT_08201114 = DAT_0805807c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar1 = (undefined4 *)(&sel_data)[on];
  *puVar1 = stack_temp;
  puVar1[1] = DAT_08201114;
  *(undefined **)(&sel_data)[on] = sp;
  *(uint *)(&sel_data)[on] =
       *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] & 0xffff
       | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                 (*(uint *)(&alu_add16)
                           [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] >> 0x10)
                 * 4) << 0x10;
  R1 = t;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  stack_temp = &DAT_0805803c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R2 = 4;
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x8804d617;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88049900;
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
  puVar1[1] = DAT_08058074;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x17]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xd6] *
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
  puVar1[1] = DAT_086011ac;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  stack_temp = (undefined *)0x186a0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_55692_080a2560] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34820_0808df40 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_55692_080a2560] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_56178_080a2cf8] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34820_0808df40 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_56178_080a2cf8] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xe0]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xdb] *
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
  puVar1[1] = DAT_086011ac;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_08201114 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar1 = (undefined4 *)(&sel_data)[on];
  *puVar1 = stack_temp;
  puVar1[1] = DAT_08201114;
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
  puVar1[1] = DAT_08058074;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xcc]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xe0] *
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
  puVar1[1] = DAT_086011ac;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R1;
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
  DAT_08201114 = DAT_0805807c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar1 = (undefined4 *)(&sel_data)[on];
  *puVar1 = stack_temp;
  puVar1[1] = DAT_08201114;
  *(undefined **)(&sel_data)[on] = sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + (uint)uRam0816c052 * 4)
                 ] + 4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] +
                                   (uint)uRam0816c052 * 4)] + 4) >> 0x10) * 4) << 0x10;
  R1 = t;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  stack_temp = &DAT_08058039;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R2 = 1;
  R3 = (undefined *)
       (*(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] &
        0xffff | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                         (*(uint *)(&alu_add16)
                                   [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)]
                         >> 0x10) * 4) << 0x10);
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x8804fac5;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88049900;
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
  puVar1[1] = DAT_08058074;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xc5]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xfa] *
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
  puVar1[1] = DAT_086011ac;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  R3 = *(undefined **)(fp + -0x200068);
  R0 = *(uint *)(&sel_data)[on];
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xe]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xfd] *
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
  puVar1[1] = DAT_086011ac;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_08201114 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar1 = (undefined4 *)(&sel_data)[on];
  *puVar1 = stack_temp;
  puVar1[1] = DAT_08201114;
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
  puVar1[1] = DAT_08058074;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xfa]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][1] * 4)]
                                  + (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar1[1] = DAT_086011ac;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R1;
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
  DAT_08201114 = DAT_0805807c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar1 = (undefined4 *)(&sel_data)[on];
  *puVar1 = stack_temp;
  puVar1[1] = DAT_08201114;
  *(undefined **)(&sel_data)[on] = sp;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 0;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)_alu_inv16 * 4)] +
                   4);
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
  *(undefined4 *)(&sel_target)[b0] = 0x88050949;
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
  puVar1[1] = DAT_08058074;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  *(undefined4 *)(&sel_target)[on] = 0x88052061;
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
  puVar1[1] = DAT_08058074;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x49]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][9] * 4)]
                                  + (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar1[1] = DAT_086011ac;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R2 = 1;
  R3 = (undefined *)
       (*(uint *)((&alu_add16)
                  [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + (uint)uRam0816c052 * 4
                           )] + 4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] +
                                   (uint)uRam0816c052 * 4)] + 4) >> 0x10) * 4) << 0x10);
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88050fad;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880501fa;
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
  puVar1[1] = DAT_08058074;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xad]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xf] * 4
                                                  )] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar1[1] = DAT_086011ac;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88051386;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8804e0cc;
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
  puVar1[1] = DAT_08058074;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x86]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x13] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar1[1] = DAT_086011ac;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  stack_temp = (undefined *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x880517ad;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8804bc99;
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
  puVar1[1] = DAT_08058074;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xad]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x17] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar1[1] = DAT_086011ac;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R2 = 1;
  R3 = (undefined *)
       (*(uint *)((&alu_add16)
                  [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + (uint)uRam0816c052 * 4
                           )] + 4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] +
                                   (uint)uRam0816c052 * 4)] + 4) >> 0x10) * 4) << 0x10);
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88051e46;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880501fa;
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
  puVar1[1] = DAT_08058074;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x46]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x1e] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar1[1] = DAT_086011ac;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x61]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x20] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar1[1] = DAT_086011ac;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_08201114 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar1 = (undefined4 *)(&sel_data)[on];
  *puVar1 = stack_temp;
  puVar1[1] = DAT_08201114;
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
  puVar1[1] = DAT_08058074;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x4d]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x25] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar1[1] = DAT_086011ac;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R1;
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
  DAT_08201114 = DAT_0805807c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar1 = (undefined4 *)(&sel_data)[on];
  *puVar1 = stack_temp;
  puVar1[1] = DAT_08201114;
  *(undefined **)(&sel_data)[on] = sp;
  stack_temp = &DAT_08058032;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_10893_08076964] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34821_0808df44 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_10893_08076964] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 1;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)uRam0816c052 * 4)]
                   + 4);
  alu_s._3_1_ = (byte)(*(uint *)((&alu_add16)
                                 [*(int *)((&alu_add16)[(uint)R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                (uVar3 >> 0x10) * 4) >> 8);
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
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
                                                  (uVar3 >> 0x10) * 4) & 0xff)] + (uint)alu_s._3_1_]
                   ];
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           & 0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)((&or)[*(int *)((&xor)[sf] + of * 4)] + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88053361;
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
  puVar1[1] = DAT_08058074;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_12347_0807801c] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34821_0808df44 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_12347_0807801c] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  _external = atoi;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  R3 = (undefined *)R0;
  *(uint *)(&sel_data)[on] = R0;
  R2 = 0;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)_alu_inv16 * 4)] +
                   4);
  alu_s._3_1_ = (byte)(*(uint *)((&alu_add16)
                                 [*(int *)((&alu_add16)[(uint)R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                (uVar3 >> 0x10) * 4) >> 8);
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
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
                                                  (uVar3 >> 0x10) * 4) & 0xff)] + (uint)alu_s._3_1_]
                   ];
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           & 0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)((&and)[*(int *)(&alu_false + zf * 4)] +
                               *(int *)((&xnor)[sf] + of * 4) * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x8805356e;
  iVar2 = b0;
  puVar9 = (uint *)(&sel_data)[b0];
  *puVar9 = R0;
  puVar9[1] = (uint)R1;
  puVar9[2] = R2;
  puVar9[3] = (uint)R3;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = F0;
  puVar1[1] = F1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = D0;
  puVar1[1] = DAT_08058074;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x61]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x33] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar1[1] = DAT_086011ac;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = 8;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x6e]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x35] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar1[1] = DAT_086011ac;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R2 = 0;
  *(undefined4 *)(&sel_data)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xab]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x37] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar1[1] = DAT_086011ac;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88053b0d;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88048884;
  iVar2 = on;
  puVar9 = (uint *)(&sel_data)[on];
  *puVar9 = R0;
  puVar9[1] = (uint)R1;
  puVar9[2] = R2;
  puVar9[3] = (uint)R3;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = F0;
  puVar1[1] = F1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = D0;
  puVar1[1] = DAT_08058074;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xd]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x3b] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar1[1] = DAT_086011ac;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  uVar3 = *(uint *)(&sel_data)[on];
  _alu_sx = 2;
  _alu_sc = (uint)(byte)*alu_bor8;
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = CONCAT31((uint3)(byte)(&alu_true)[_alu_sc],2);
  alu_s1 = 0;
  alu_s2 = 0;
  DAT_0820102d = 0;
  alu_s3 = 0;
  DAT_08201039 = 0;
  DAT_0820103a = 0;
  puVar4 = (&alu_lshu8)[(&alu_clamp32)[_alu_sc]];
  _alu_s0 = *(undefined4 *)(puVar4 + (uVar3 & 0xff) * 4);
  uVar10 = *(undefined4 *)(puVar4 + (uVar3 >> 8 & 0xff) * 4);
  DAT_08201021 = (undefined)uVar10;
  DAT_08201022 = (undefined)((uint)uVar10 >> 8);
  DAT_08201023 = (undefined)((uint)uVar10 >> 0x10);
  uRam08201024 = (undefined)((uint)uVar10 >> 0x18);
  uVar10 = *(undefined4 *)(puVar4 + (uVar3 >> 0x10 & 0xff) * 4);
  DAT_0820102e = (undefined)uVar10;
  DAT_0820102f = (undefined)((uint)uVar10 >> 8);
  uRam08201030 = (undefined2)((uint)uVar10 >> 0x10);
  _DAT_0820103b = *(undefined4 *)(puVar4 + (uVar3 >> 0x18) * 4);
  *(uint *)(&sel_data)[on] = R0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x40]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x41] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar1[1] = DAT_086011ac;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R1 = (undefined1 *)0x1;
  *(uint *)(&sel_data)[on] =
       *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] & 0xffff
       | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                 (*(uint *)(&alu_add16)
                           [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] >> 0x10)
                 * 4) << 0x10;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 3;
  alu_s = *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                  (*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)uRam0816c056 * 4)] +
                            4) >> 0x10) * 4) << 0x10;
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
  *(undefined4 *)(&sel_target)[b0] = 0x880537ab;
  iVar2 = b0;
  puVar9 = (uint *)(&sel_data)[b0];
  *puVar9 = R0;
  puVar9[1] = (uint)R1;
  puVar9[2] = R2;
  puVar9[3] = (uint)R3;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = F0;
  puVar1[1] = F1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = D0;
  puVar1[1] = DAT_08058074;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R3 = *(undefined **)
        (&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(&pop + *(
                                                  int *)(&pop + *(int *)(fp + -0x200060))))))));
  R2 = *(uint *)(&sel_data)[on];
  *(uint *)(&sel_data)[on] = R2;
  *(undefined4 *)(&sel_target)[on] = 0x880551a2;
  iVar2 = on;
  puVar9 = (uint *)(&sel_data)[on];
  *puVar9 = R0;
  puVar9[1] = (uint)R1;
  puVar9[2] = R2;
  puVar9[3] = (uint)R3;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = F0;
  puVar1[1] = F1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = D0;
  puVar1[1] = DAT_08058074;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x66]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x48] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar1[1] = DAT_086011ac;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = (undefined *)0x0;
  stack_temp = (undefined *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88054c52;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8804bc99;
  iVar2 = on;
  puVar9 = (uint *)(&sel_data)[on];
  *puVar9 = R0;
  puVar9[1] = (uint)R1;
  puVar9[2] = R2;
  puVar9[3] = (uint)R3;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = F0;
  puVar1[1] = F1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = D0;
  puVar1[1] = DAT_08058074;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x52]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x4c] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar1[1] = DAT_086011ac;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x61]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x4e] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar1[1] = DAT_086011ac;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R1 = (undefined1 *)0x1;
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + (uint)uRam0816c052 * 4)
                 ] + 4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] +
                                   (uint)uRam0816c052 * 4)] + 4) >> 0x10) * 4) << 0x10;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xa2]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x51] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar1[1] = DAT_086011ac;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 0;
  alu_t = 0;
  DAT_08201002 = 0;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)_alu_inv16 * 4)] +
                   4);
  uVar5 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                   (uVar3 >> 0x10) * 4);
  _DAT_08200ffe = (undefined2)uVar5;
  alu_s = uVar3 & 0xffff | uVar5 << 0x10;
  alu_c = (byte)(uVar5 >> 0x10);
  uRam08201001 = (undefined)(uVar5 >> 0x18);
  cf = (&alu_false)[alu_c];
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
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           & 0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88054866;
  iVar2 = b0;
  puVar9 = (uint *)(&sel_data)[b0];
  *puVar9 = R0;
  puVar9[1] = (uint)R1;
  puVar9[2] = R2;
  puVar9[3] = (uint)R3;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = F0;
  puVar1[1] = F1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = D0;
  puVar1[1] = DAT_08058074;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  stack_temp = (undefined *)0x1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x880558bb;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880501fa;
  iVar2 = on;
  puVar9 = (uint *)(&sel_data)[on];
  *puVar9 = R0;
  puVar9[1] = (uint)R1;
  puVar9[2] = R2;
  puVar9[3] = (uint)R3;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = F0;
  puVar1[1] = F1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = D0;
  puVar1[1] = DAT_08058074;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xbb]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x58] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar1[1] = DAT_086011ac;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  stack_temp = &DAT_08058030;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = (undefined *)0x1;
  stack_temp = (undefined *)0x1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R2 = 0;
  stack_temp = (undefined *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88055d44;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88049900;
  iVar2 = on;
  puVar9 = (uint *)(&sel_data)[on];
  *puVar9 = R0;
  puVar9[1] = (uint)R1;
  puVar9[2] = R2;
  puVar9[3] = (uint)R3;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = F0;
  puVar1[1] = F1;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = D0;
  puVar1[1] = DAT_08058074;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x44]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x5d] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar1[1] = DAT_086011ac;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  R0 = 0;
  _alu_x = target;
  _alu_y = 0x88055f69;
  b1 = (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x5f];
  b2 = (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5];
  b3 = (uint)(byte)(&alu_eq)[target >> 0x18][0x88];
  iVar2 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x69]] +
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
  puVar1[1] = DAT_086011ac;
  puVar1 = (undefined4 *)(&sel_data)[iVar2];
  *puVar1 = jmp_d1;
  puVar1[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_08201114 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar1 = (undefined4 *)(&sel_data)[on];
  *puVar1 = stack_temp;
  puVar1[1] = DAT_08201114;
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
  puVar1[1] = DAT_08058074;
  puVar1[2] = D1;
  puVar1[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void new_tower(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 uVar10;
  uint3 uVar11;
  
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x84]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x88] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R1;
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
  DAT_08201114 = DAT_0805807c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
  *(undefined **)(&sel_data)[on] = sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  uVar3 = *(uint *)(&sel_data)[on];
  _alu_sc = (uint)(byte)*alu_bor8;
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = CONCAT31((uint3)(byte)(&alu_true)[_alu_sc],2);
  puVar4 = (&alu_lshu8)[(&alu_clamp32)[_alu_sc]];
  uVar5 = *(uint *)(puVar4 + (uVar3 & 0xff) * 4);
  uVar6 = *(uint *)(puVar4 + (uVar3 >> 8 & 0xff) * 4);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[uVar5 >> 8 & 0xff][uVar6 & 0xff],*(&alu_bor8)[uVar5 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[uVar5 >> 0x10 & 0xff][uVar6 >> 8 & 0xff],(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11(*(&alu_bor8)[((uint3)alu_s & 0xff00) >> 8],
                         *(&alu_bor8)[(uint3)alu_s & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(byte)(&alu_bor8)[uVar5 >> 0x10 & 0xff][uVar6 >> 8 & 0xff]]
                         [*(uint *)(puVar4 + (uVar3 >> 0x10 & 0xff) * 4) & 0xff],(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11(*(&alu_bor8)[((uint3)alu_s & 0xff00) >> 8],
                         *(&alu_bor8)[(uint3)alu_s & 0xff]);
  alu_s._0_3_ = CONCAT12(*(&alu_bor8)
                          [(byte)(&alu_bor8)
                                 [(byte)(&alu_bor8)[uVar5 >> 0x10 & 0xff][uVar6 >> 8 & 0xff]]
                                 [*(uint *)(puVar4 + (uVar3 >> 0x10 & 0xff) * 4) & 0xff]],
                         (undefined2)alu_s);
  alu_s = CONCAT13((&alu_bor8)
                   [(byte)(&alu_bor8)[(byte)(&alu_bor8)[uVar5 >> 0x18][uVar6 >> 0x10 & 0xff]]
                          [*(uint *)(puVar4 + (uVar3 >> 0x10 & 0xff) * 4) >> 8 & 0xff]]
                   [*(uint *)(puVar4 + (uVar3 >> 0x18) * 4) & 0xff],(uint3)alu_s);
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)((&alu_add16)[(uint3)alu_s & 0xffff] + 0x20)] & 0xffff
               | *(int *)((&alu_add16)[*(int *)(&alu_add16)[alu_s >> 0x10]] +
                         (*(uint *)(&alu_add16)
                                   [*(int *)((&alu_add16)[(uint3)alu_s & 0xffff] + 0x20)] >> 0x10) *
                         4) << 0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_37454_08090868] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34820_0808df40 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_37454_08090868] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  *(uint *)(&sel_data)[on] = R0;
  R2 = *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 0x20)] &
       0xffff | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                        (*(uint *)(&alu_add16)
                                  [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 0x20)]
                        >> 0x10) * 4) << 0x10;
  *(uint *)(&sel_data)[on] = R2;
  R3 = *(undefined **)(fp + -0x200068);
  R0 = *(uint *)(&sel_data)[on];
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x14]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x94] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_08201114 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)*(&alu_eq)[target & 0xff]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x99] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R1;
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
  DAT_08201114 = DAT_0805807c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
  *(undefined **)(&sel_data)[on] = sp;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 1;
  uVar3 = *(uint *)(&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + 4)];
  uVar5 = *(uint *)((&alu_add16)[*(int *)(&alu_add16)[(uint)R3 >> 0x10]] + (uVar3 >> 0x10) * 4);
  uVar6 = *(uint *)(&sel_data)[on];
  _alu_sc = (uint)(byte)*alu_bor8;
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = CONCAT31((uint3)(byte)(&alu_true)[_alu_sc],1);
  puVar4 = (&alu_lshu8)[(&alu_clamp32)[_alu_sc]];
  uVar7 = *(uint *)(puVar4 + (uVar6 & 0xff) * 4);
  uVar8 = *(uint *)(puVar4 + (uVar6 >> 8 & 0xff) * 4);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[uVar7 >> 8 & 0xff][uVar8 & 0xff],*(&alu_bor8)[uVar7 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[uVar7 >> 0x10 & 0xff][uVar8 >> 8 & 0xff],(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11(*(&alu_bor8)[((uint3)alu_s & 0xff00) >> 8],
                         *(&alu_bor8)[(uint3)alu_s & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(byte)(&alu_bor8)[uVar7 >> 0x10 & 0xff][uVar8 >> 8 & 0xff]]
                         [*(uint *)(puVar4 + (uVar6 >> 0x10 & 0xff) * 4) & 0xff],(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11(*(&alu_bor8)[((uint3)alu_s & 0xff00) >> 8],
                         *(&alu_bor8)[(uint3)alu_s & 0xff]);
  alu_s._0_3_ = CONCAT12(*(&alu_bor8)
                          [(byte)(&alu_bor8)
                                 [(byte)(&alu_bor8)[uVar7 >> 0x10 & 0xff][uVar8 >> 8 & 0xff]]
                                 [*(uint *)(puVar4 + (uVar6 >> 0x10 & 0xff) * 4) & 0xff]],
                         (undefined2)alu_s);
  alu_s = CONCAT13((&alu_bor8)
                   [(byte)(&alu_bor8)[(byte)(&alu_bor8)[uVar7 >> 0x18][uVar8 >> 0x10 & 0xff]]
                          [*(uint *)(puVar4 + (uVar6 >> 0x10 & 0xff) * 4) >> 8 & 0xff]]
                   [*(uint *)(puVar4 + (uVar6 >> 0x18) * 4) & 0xff],(uint3)alu_s);
  uVar6 = *(uint *)(&alu_add16)[*(int *)((&alu_add16)[(uint3)alu_s & 0xffff] + 4)];
  uVar7 = *(uint *)((&alu_add16)[*(int *)(&alu_add16)[alu_s >> 0x10]] + (uVar6 >> 0x10) * 4);
  DAT_08200ff1 = (byte)(uVar3 >> 8);
  _alu_z0 = CONCAT12((&alu_mul_sum8l)
                     [(uint)(byte)(&alu_mul_sum8l)
                                  [(uint)(byte)(&alu_mul_mul8h)[DAT_08200ff1][uVar6 & 0xff] +
                                   (uint)(byte)(&alu_mul_sum8h)
                                               [(uint)(byte)(&alu_mul_sum8l)
                                                            [(uint)(byte)(&alu_mul_mul8h)
                                                                         [uVar3 & 0xff]
                                                                         [uVar6 & 0xff] +
                                                             (uint)(byte)(&alu_mul_sum8h)
                                                                         [(byte)(&alu_mul_mul8l)
                                                                                [uVar3 & 0xff]
                                                                                [uVar6 & 0xff]]] +
                                                (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                            [uVar6 & 0xff]]] +
                      (uint)(byte)(&alu_mul_mul8l)[uVar5 & 0xff][uVar6 & 0xff]],
                     CONCAT11((&alu_mul_sum8l)
                              [(uint)(byte)(&alu_mul_sum8l)
                                           [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff][uVar6 & 0xff]
                                            + (uint)(byte)(&alu_mul_sum8h)
                                                          [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                 [uVar6 & 0xff]]] +
                               (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1][uVar6 & 0xff]],
                              (&alu_mul_sum8l)[(byte)(&alu_mul_mul8l)[uVar3 & 0xff][uVar6 & 0xff]]))
  ;
  _alu_z0 = CONCAT13((&alu_mul_sum8l)
                     [(uint)(byte)(&alu_mul_sum8l)
                                  [(uint)(byte)(&alu_mul_mul8h)[uVar5 & 0xff][uVar6 & 0xff] +
                                   (uint)(byte)(&alu_mul_sum8h)
                                               [(uint)(byte)(&alu_mul_sum8l)
                                                            [(uint)(byte)(&alu_mul_mul8h)
                                                                         [DAT_08200ff1]
                                                                         [uVar6 & 0xff] +
                                                             (uint)(byte)(&alu_mul_sum8h)
                                                                         [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff]
                                                               [uVar6 & 0xff] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                      [uVar6 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [uVar6 & 0xff]]] +
                                                (uint)(byte)(&alu_mul_mul8l)[uVar5 & 0xff]
                                                            [uVar6 & 0xff]]] +
                      (uint)(byte)(&alu_mul_mul8l)[uVar5 >> 8 & 0xff][uVar6 & 0xff]],_alu_z0);
  DAT_08200ff5 = (byte)(uVar6 >> 8);
  _alu_z1 = (uint)CONCAT12((&alu_mul_sum8l)
                           [(uint)(byte)(&alu_mul_sum8l)
                                        [(uint)(byte)(&alu_mul_mul8h)[DAT_08200ff1][DAT_08200ff5] +
                                         (uint)(byte)(&alu_mul_sum8h)
                                                     [(uint)(byte)(&alu_mul_sum8l)
                                                                  [(uint)(byte)(&alu_mul_mul8h)
                                                                               [uVar3 & 0xff]
                                                                               [DAT_08200ff5] +
                                                                   (uint)(byte)(&alu_mul_sum8h)
                                                                               [(byte)(&
                                                  alu_mul_mul8l)[uVar3 & 0xff][DAT_08200ff5]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [DAT_08200ff5]]] +
                            (uint)(byte)(&alu_mul_mul8l)[uVar5 & 0xff][DAT_08200ff5]],
                           CONCAT11((&alu_mul_sum8l)
                                    [(uint)(byte)(&alu_mul_sum8l)
                                                 [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff]
                                                              [DAT_08200ff5] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [DAT_08200ff5]]] +
                                     (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1][DAT_08200ff5]],
                                    (&alu_mul_sum8l)
                                    [(byte)(&alu_mul_mul8l)[uVar3 & 0xff][DAT_08200ff5]])) << 8;
  _alu_z2 = (uint)CONCAT11((&alu_mul_sum8l)
                           [(uint)(byte)(&alu_mul_sum8l)
                                        [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff][uVar7 & 0xff] +
                                         (uint)(byte)(&alu_mul_sum8h)
                                                     [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                            [uVar7 & 0xff]]] +
                            (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1][uVar7 & 0xff]],
                           (&alu_mul_sum8l)[(byte)(&alu_mul_mul8l)[uVar3 & 0xff][uVar7 & 0xff]]) <<
            0x10;
  _alu_z3 = (uint)(byte)(&alu_mul_sum8l)[(byte)(&alu_mul_mul8l)[uVar3 & 0xff][uVar7 >> 8 & 0xff]] <<
            0x18;
  uVar11 = CONCAT12((char)*(uint *)(&alu_mul_sums +
                                   *(int *)(&alu_mul_shl2 +
                                           *(int *)(&alu_mul_sums +
                                                   *(int *)(&alu_mul_shl2 +
                                                           *(int *)(&alu_mul_sums +
                                                                   *(int *)(&alu_mul_shl2 +
                                                                           (uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_sum8l)
                                                               [(uint)(byte)(&alu_mul_mul8h)
                                                                            [uVar3 & 0xff]
                                                                            [DAT_08200ff5] +
                                                                (uint)(byte)(&alu_mul_sum8h)
                                                                            [(byte)(&alu_mul_mul8l)
                                                                                   [uVar3 & 0xff]
                                                                                   [DAT_08200ff5]]]
                                                   + (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                                 [DAT_08200ff5]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[DAT_08200ff1][uVar6 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar6 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar6 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [uVar6 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[uVar5 & 0xff]
                                                              [uVar6 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar3 & 0xff]
                                                                             [uVar7 & 0xff]] * 4)) *
                                           4) +
                                   *(int *)(&alu_mul_shl2 +
                                           (*(uint *)(&alu_mul_sums +
                                                     *(int *)(&alu_mul_shl2 +
                                                             *(int *)(&alu_mul_sums +
                                                                     *(int *)(&alu_mul_shl2 +
                                                                             (uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                         [DAT_08200ff5]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar6 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar6 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [uVar6 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    _alu_mul_shl2 +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            (_alu_z0 & 0xff) * 4))
                                                           >> 8 & 0xff) * 4)) >> 8 & 0xff) * 4)),
                    CONCAT11((char)*(uint *)(&alu_mul_sums +
                                            *(int *)(&alu_mul_shl2 +
                                                    *(int *)(&alu_mul_sums +
                                                            *(int *)(&alu_mul_shl2 +
                                                                    (uint)(byte)(&alu_mul_sum8l)
                                                                                [(byte)(&
                                                  alu_mul_mul8l)[uVar3 & 0xff][DAT_08200ff5]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar6 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar6 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [uVar6 & 0xff]] * 4)) * 4) +
                                            *(int *)(&alu_mul_shl2 +
                                                    (*(uint *)(&alu_mul_sums +
                                                              _alu_mul_shl2 +
                                                              *(int *)(&alu_mul_shl2 +
                                                                      (_alu_z0 & 0xff) * 4)) >> 8 &
                                                    0xff) * 4)),
                             (char)*(uint *)(&alu_mul_sums +
                                            _alu_mul_shl2 +
                                            *(int *)(&alu_mul_shl2 + (_alu_z0 & 0xff) * 4))));
  stack_temp = (undefined *)
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[uVar11 & 0xffff] +
                                   (uint)*(ushort *)
                                          (&alu_inv16 + (*(uint *)(&sel_data)[on] & 0xffff) * 2) * 4
                                   )] + 4) & 0xffff |
               *(int *)((&alu_add16)
                        [*(int *)((&alu_add16)
                                  [CONCAT13((char)*(undefined4 *)
                                                   (&alu_mul_sums +
                                                   *(int *)(&alu_mul_shl2 +
                                                           *(int *)(&alu_mul_sums +
                                                                   *(int *)(&alu_mul_shl2 +
                                                                           *(int *)(&alu_mul_sums +
                                                                                   *(int *)(&
                                                  alu_mul_shl2 +
                                                  *(int *)(&alu_mul_sums +
                                                          *(int *)(&alu_mul_shl2 +
                                                                  (uint)(byte)(&alu_mul_sum8l)
                                                                              [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[DAT_08200ff1]
                                                               [DAT_08200ff5] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(uint)(byte)(&alu_mul_sum8l)
                                                                            [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][DAT_08200ff5] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [DAT_08200ff5]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [DAT_08200ff5]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[uVar5 & 0xff]
                                                              [DAT_08200ff5]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar5 & 0xff][uVar6 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[DAT_08200ff1][uVar6 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar6 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar6 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [uVar6 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[uVar5 & 0xff]
                                                              [uVar6 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[uVar5 >> 8 & 0xff]
                                                              [uVar6 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar7 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar7 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [uVar7 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar3 & 0xff]
                                                                             [uVar7 >> 8 & 0xff]] *
                                                          4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            *(int *)(&alu_mul_sums +
                                                                                    *(int *)(&
                                                  alu_mul_shl2 +
                                                  *(int *)(&alu_mul_sums +
                                                          *(int *)(&alu_mul_shl2 +
                                                                  (uint)(byte)(&alu_mul_sum8l)
                                                                              [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff]
                                                               [DAT_08200ff5] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                      [DAT_08200ff5]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [DAT_08200ff5]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[DAT_08200ff1][uVar6 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar6 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar6 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [uVar6 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[uVar5 & 0xff]
                                                              [uVar6 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar3 & 0xff]
                                                                             [uVar7 & 0xff]] * 4)) *
                                                  4) + *(int *)(&alu_mul_shl2 +
                                                               (*(uint *)(&alu_mul_sums +
                                                                         *(int *)(&alu_mul_shl2 +
                                                                                 *(int *)(&
                                                  alu_mul_sums +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar3 & 0xff]
                                                                             [DAT_08200ff5]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar6 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar6 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [uVar6 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    _alu_mul_shl2 +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            (_alu_z0 & 0xff) * 4))
                                                           >> 8 & 0xff) * 4)) >> 8 & 0xff) * 4)) >>
                                                  8 & 0xff) * 4)),uVar11) >> 0x10] +
                                 (uint)*(ushort *)
                                        (&alu_inv16 + (*(uint *)(&sel_data)[on] >> 0x10) * 2) * 4)]
                       + (*(uint *)((&alu_add16)
                                    [*(int *)((&alu_add16)[uVar11 & 0xffff] +
                                             (uint)*(ushort *)
                                                    (&alu_inv16 +
                                                    (*(uint *)(&sel_data)[on] & 0xffff) * 2) * 4)] +
                                   4) >> 0x10) * 4) << 0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R1 = *(undefined1 **)(&sel_data)[on];
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)
                         [*(int *)((&alu_add16)
                                   [*(uint *)((&alu_add16)
                                              [*(int *)((&alu_add16)[(uint)R3 & 0xffff] +
                                                       (uint)*(ushort *)
                                                              (&alu_inv16 + ((uint)R1 & 0xffff) * 2)
                                                       * 4)] + 4) & 0xffff] + (R2 & 0xffff) * 4)] &
                0xffff | *(int *)((&alu_add16)
                                  [*(int *)((&alu_add16)
                                            [*(uint *)((&alu_add16)
                                                       [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                                                (uint)*(ushort *)
                                                                       (&alu_inv16 +
                                                                       ((uint)R1 >> 0x10) * 2) * 4)]
                                                      + (*(uint *)((&alu_add16)
                                                                   [*(int *)((&alu_add16)
                                                                             [(uint)R3 & 0xffff] +
                                                                            (uint)*(ushort *)
                                                                                   (&alu_inv16 +
                                                                                   ((uint)R1 &
                                                                                   0xffff) * 2) * 4)
                                                                   ] + 4) >> 0x10) * 4) & 0xffff] +
                                           (R2 >> 0x10) * 4)] +
                                 (*(uint *)(&alu_add16)
                                           [*(int *)((&alu_add16)
                                                     [*(uint *)((&alu_add16)
                                                                [*(int *)((&alu_add16)
                                                                          [(uint)R3 & 0xffff] +
                                                                         (uint)*(ushort *)
                                                                                (&alu_inv16 +
                                                                                ((uint)R1 & 0xffff)
                                                                                * 2) * 4)] + 4) &
                                                      0xffff] + (R2 & 0xffff) * 4)] >> 0x10) * 4) <<
                         0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = &DAT_08058042;
  stack_temp = &DAT_08058042;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_44135_080970cc] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34820_0808df40 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_44135_080970cc] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060)))
  ;
  *(undefined4 *)(&sel_target)[on] = 0x8804b203;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xa1]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xad] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = &DAT_0805803f;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_45455_0809856c] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34820_0808df40 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_45455_0809856c] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][3]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xb2] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(&sel_data)[on];
  R1 = (undefined1 *)
       (*(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)uRam0816c052 * 4)] +
                 4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)uRam0816c052 * 4)] + 4)
               >> 0x10) * 4) << 0x10);
  *(undefined1 **)(&sel_data)[on] = R1;
  R2 = 0;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)_alu_inv16 * 4)] +
                   4);
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
  *(undefined4 *)(&sel_target)[b0] = 0x8804ada1;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xad]] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_08201114 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x99]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xbc] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R1;
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
  DAT_08201114 = DAT_0805807c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
  *(undefined **)(&sel_data)[on] = sp;
  *(uint *)(&sel_data)[on] =
       *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] & 0xffff
       | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                 (*(uint *)(&alu_add16)
                           [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] >> 0x10)
                 * 4) << 0x10;
  R1 = t;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  stack_temp = &DAT_0805803c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R2 = 4;
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x8804d617;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88049900;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x17]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xd6] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  stack_temp = (undefined *)0x186a0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_55692_080a2560] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34820_0808df40 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_55692_080a2560] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_56178_080a2cf8] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34820_0808df40 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_56178_080a2cf8] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xe0]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xdb] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_08201114 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xcc]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xe0] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R1;
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
  DAT_08201114 = DAT_0805807c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
  *(undefined **)(&sel_data)[on] = sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + (uint)uRam0816c052 * 4)
                 ] + 4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] +
                                   (uint)uRam0816c052 * 4)] + 4) >> 0x10) * 4) << 0x10;
  R1 = t;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  stack_temp = &DAT_08058039;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R2 = 1;
  R3 = (undefined *)
       (*(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] &
        0xffff | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                         (*(uint *)(&alu_add16)
                                   [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)]
                         >> 0x10) * 4) << 0x10);
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x8804fac5;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88049900;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xc5]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xfa] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  R3 = *(undefined **)(fp + -0x200068);
  R0 = *(uint *)(&sel_data)[on];
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xe]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xfd] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_08201114 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xfa]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][1] * 4)]
                                  + (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R1;
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
  DAT_08201114 = DAT_0805807c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
  *(undefined **)(&sel_data)[on] = sp;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 0;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)_alu_inv16 * 4)] +
                   4);
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
  *(undefined4 *)(&sel_target)[b0] = 0x88050949;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  *(undefined4 *)(&sel_target)[on] = 0x88052061;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x49]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][9] * 4)]
                                  + (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R2 = 1;
  R3 = (undefined *)
       (*(uint *)((&alu_add16)
                  [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + (uint)uRam0816c052 * 4
                           )] + 4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] +
                                   (uint)uRam0816c052 * 4)] + 4) >> 0x10) * 4) << 0x10);
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88050fad;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880501fa;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xad]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xf] * 4
                                                  )] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88051386;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8804e0cc;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x86]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x13] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  stack_temp = (undefined *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x880517ad;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8804bc99;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xad]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x17] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R2 = 1;
  R3 = (undefined *)
       (*(uint *)((&alu_add16)
                  [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + (uint)uRam0816c052 * 4
                           )] + 4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] +
                                   (uint)uRam0816c052 * 4)] + 4) >> 0x10) * 4) << 0x10);
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88051e46;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880501fa;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x46]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x1e] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x61]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x20] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_08201114 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x4d]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x25] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R1;
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
  DAT_08201114 = DAT_0805807c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
  *(undefined **)(&sel_data)[on] = sp;
  stack_temp = &DAT_08058032;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_10893_08076964] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34821_0808df44 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_10893_08076964] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 1;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)uRam0816c052 * 4)]
                   + 4);
  alu_s._3_1_ = (byte)(*(uint *)((&alu_add16)
                                 [*(int *)((&alu_add16)[(uint)R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                (uVar3 >> 0x10) * 4) >> 8);
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
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
                                                  (uVar3 >> 0x10) * 4) & 0xff)] + (uint)alu_s._3_1_]
                   ];
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           & 0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)((&or)[*(int *)((&xor)[sf] + of * 4)] + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88053361;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_12347_0807801c] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34821_0808df44 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_12347_0807801c] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  _external = atoi;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  R3 = (undefined *)R0;
  *(uint *)(&sel_data)[on] = R0;
  R2 = 0;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)_alu_inv16 * 4)] +
                   4);
  alu_s._3_1_ = (byte)(*(uint *)((&alu_add16)
                                 [*(int *)((&alu_add16)[(uint)R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                (uVar3 >> 0x10) * 4) >> 8);
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
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
                                                  (uVar3 >> 0x10) * 4) & 0xff)] + (uint)alu_s._3_1_]
                   ];
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           & 0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)((&and)[*(int *)(&alu_false + zf * 4)] +
                               *(int *)((&xnor)[sf] + of * 4) * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x8805356e;
  iVar1 = b0;
  puVar9 = (uint *)(&sel_data)[b0];
  *puVar9 = R0;
  puVar9[1] = (uint)R1;
  puVar9[2] = R2;
  puVar9[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x61]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x33] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = 8;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x6e]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x35] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R2 = 0;
  *(undefined4 *)(&sel_data)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xab]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x37] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88053b0d;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88048884;
  iVar1 = on;
  puVar9 = (uint *)(&sel_data)[on];
  *puVar9 = R0;
  puVar9[1] = (uint)R1;
  puVar9[2] = R2;
  puVar9[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xd]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x3b] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  uVar3 = *(uint *)(&sel_data)[on];
  _alu_sx = 2;
  _alu_sc = (uint)(byte)*alu_bor8;
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = CONCAT31((uint3)(byte)(&alu_true)[_alu_sc],2);
  alu_s1 = 0;
  alu_s2 = 0;
  DAT_0820102d = 0;
  alu_s3 = 0;
  DAT_08201039 = 0;
  DAT_0820103a = 0;
  puVar4 = (&alu_lshu8)[(&alu_clamp32)[_alu_sc]];
  _alu_s0 = *(undefined4 *)(puVar4 + (uVar3 & 0xff) * 4);
  uVar10 = *(undefined4 *)(puVar4 + (uVar3 >> 8 & 0xff) * 4);
  DAT_08201021 = (undefined)uVar10;
  DAT_08201022 = (undefined)((uint)uVar10 >> 8);
  DAT_08201023 = (undefined)((uint)uVar10 >> 0x10);
  uRam08201024 = (undefined)((uint)uVar10 >> 0x18);
  uVar10 = *(undefined4 *)(puVar4 + (uVar3 >> 0x10 & 0xff) * 4);
  DAT_0820102e = (undefined)uVar10;
  DAT_0820102f = (undefined)((uint)uVar10 >> 8);
  uRam08201030 = (undefined2)((uint)uVar10 >> 0x10);
  _DAT_0820103b = *(undefined4 *)(puVar4 + (uVar3 >> 0x18) * 4);
  *(uint *)(&sel_data)[on] = R0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x40]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x41] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R1 = (undefined1 *)0x1;
  *(uint *)(&sel_data)[on] =
       *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] & 0xffff
       | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                 (*(uint *)(&alu_add16)
                           [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] >> 0x10)
                 * 4) << 0x10;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 3;
  alu_s = *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                  (*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)uRam0816c056 * 4)] +
                            4) >> 0x10) * 4) << 0x10;
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
  *(undefined4 *)(&sel_target)[b0] = 0x880537ab;
  iVar1 = b0;
  puVar9 = (uint *)(&sel_data)[b0];
  *puVar9 = R0;
  puVar9[1] = (uint)R1;
  puVar9[2] = R2;
  puVar9[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R3 = *(undefined **)
        (&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(&pop + *(
                                                  int *)(&pop + *(int *)(fp + -0x200060))))))));
  R2 = *(uint *)(&sel_data)[on];
  *(uint *)(&sel_data)[on] = R2;
  *(undefined4 *)(&sel_target)[on] = 0x880551a2;
  iVar1 = on;
  puVar9 = (uint *)(&sel_data)[on];
  *puVar9 = R0;
  puVar9[1] = (uint)R1;
  puVar9[2] = R2;
  puVar9[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x66]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x48] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = (undefined *)0x0;
  stack_temp = (undefined *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88054c52;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8804bc99;
  iVar1 = on;
  puVar9 = (uint *)(&sel_data)[on];
  *puVar9 = R0;
  puVar9[1] = (uint)R1;
  puVar9[2] = R2;
  puVar9[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x52]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x4c] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x61]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x4e] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R1 = (undefined1 *)0x1;
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + (uint)uRam0816c052 * 4)
                 ] + 4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] +
                                   (uint)uRam0816c052 * 4)] + 4) >> 0x10) * 4) << 0x10;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xa2]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x51] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 0;
  alu_t = 0;
  DAT_08201002 = 0;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)_alu_inv16 * 4)] +
                   4);
  uVar5 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                   (uVar3 >> 0x10) * 4);
  _DAT_08200ffe = (undefined2)uVar5;
  alu_s = uVar3 & 0xffff | uVar5 << 0x10;
  alu_c = (byte)(uVar5 >> 0x10);
  uRam08201001 = (undefined)(uVar5 >> 0x18);
  cf = (&alu_false)[alu_c];
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
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           & 0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88054866;
  iVar1 = b0;
  puVar9 = (uint *)(&sel_data)[b0];
  *puVar9 = R0;
  puVar9[1] = (uint)R1;
  puVar9[2] = R2;
  puVar9[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  stack_temp = (undefined *)0x1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x880558bb;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880501fa;
  iVar1 = on;
  puVar9 = (uint *)(&sel_data)[on];
  *puVar9 = R0;
  puVar9[1] = (uint)R1;
  puVar9[2] = R2;
  puVar9[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xbb]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x58] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  stack_temp = &DAT_08058030;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = (undefined *)0x1;
  stack_temp = (undefined *)0x1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R2 = 0;
  stack_temp = (undefined *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88055d44;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88049900;
  iVar1 = on;
  puVar9 = (uint *)(&sel_data)[on];
  *puVar9 = R0;
  puVar9[1] = (uint)R1;
  puVar9[2] = R2;
  puVar9[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x44]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x5d] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  R0 = 0;
  _alu_x = target;
  _alu_y = 0x88055f69;
  b1 = (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x5f];
  b2 = (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5];
  b3 = (uint)(byte)(&alu_eq)[target >> 0x18][0x88];
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x69]] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_08201114 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void text(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 uVar10;
  uint3 uVar11;
  
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)*(&alu_eq)[target & 0xff]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x99] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R1;
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
  DAT_08201114 = DAT_0805807c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
  *(undefined **)(&sel_data)[on] = sp;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 1;
  uVar3 = *(uint *)(&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + 4)];
  uVar4 = *(uint *)((&alu_add16)[*(int *)(&alu_add16)[(uint)R3 >> 0x10]] + (uVar3 >> 0x10) * 4);
  uVar5 = *(uint *)(&sel_data)[on];
  _alu_sc = (uint)(byte)*alu_bor8;
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = CONCAT31((uint3)(byte)(&alu_true)[_alu_sc],1);
  puVar6 = (&alu_lshu8)[(&alu_clamp32)[_alu_sc]];
  uVar7 = *(uint *)(puVar6 + (uVar5 & 0xff) * 4);
  uVar8 = *(uint *)(puVar6 + (uVar5 >> 8 & 0xff) * 4);
  alu_s._0_2_ = CONCAT11((&alu_bor8)[uVar7 >> 8 & 0xff][uVar8 & 0xff],*(&alu_bor8)[uVar7 & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[uVar7 >> 0x10 & 0xff][uVar8 >> 8 & 0xff],(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11(*(&alu_bor8)[((uint3)alu_s & 0xff00) >> 8],
                         *(&alu_bor8)[(uint3)alu_s & 0xff]);
  alu_s._0_3_ = CONCAT12((&alu_bor8)[(byte)(&alu_bor8)[uVar7 >> 0x10 & 0xff][uVar8 >> 8 & 0xff]]
                         [*(uint *)(puVar6 + (uVar5 >> 0x10 & 0xff) * 4) & 0xff],(undefined2)alu_s);
  alu_s._0_2_ = CONCAT11(*(&alu_bor8)[((uint3)alu_s & 0xff00) >> 8],
                         *(&alu_bor8)[(uint3)alu_s & 0xff]);
  alu_s._0_3_ = CONCAT12(*(&alu_bor8)
                          [(byte)(&alu_bor8)
                                 [(byte)(&alu_bor8)[uVar7 >> 0x10 & 0xff][uVar8 >> 8 & 0xff]]
                                 [*(uint *)(puVar6 + (uVar5 >> 0x10 & 0xff) * 4) & 0xff]],
                         (undefined2)alu_s);
  alu_s = CONCAT13((&alu_bor8)
                   [(byte)(&alu_bor8)[(byte)(&alu_bor8)[uVar7 >> 0x18][uVar8 >> 0x10 & 0xff]]
                          [*(uint *)(puVar6 + (uVar5 >> 0x10 & 0xff) * 4) >> 8 & 0xff]]
                   [*(uint *)(puVar6 + (uVar5 >> 0x18) * 4) & 0xff],(uint3)alu_s);
  uVar5 = *(uint *)(&alu_add16)[*(int *)((&alu_add16)[(uint3)alu_s & 0xffff] + 4)];
  uVar7 = *(uint *)((&alu_add16)[*(int *)(&alu_add16)[alu_s >> 0x10]] + (uVar5 >> 0x10) * 4);
  DAT_08200ff1 = (byte)(uVar3 >> 8);
  _alu_z0 = CONCAT12((&alu_mul_sum8l)
                     [(uint)(byte)(&alu_mul_sum8l)
                                  [(uint)(byte)(&alu_mul_mul8h)[DAT_08200ff1][uVar5 & 0xff] +
                                   (uint)(byte)(&alu_mul_sum8h)
                                               [(uint)(byte)(&alu_mul_sum8l)
                                                            [(uint)(byte)(&alu_mul_mul8h)
                                                                         [uVar3 & 0xff]
                                                                         [uVar5 & 0xff] +
                                                             (uint)(byte)(&alu_mul_sum8h)
                                                                         [(byte)(&alu_mul_mul8l)
                                                                                [uVar3 & 0xff]
                                                                                [uVar5 & 0xff]]] +
                                                (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                            [uVar5 & 0xff]]] +
                      (uint)(byte)(&alu_mul_mul8l)[uVar4 & 0xff][uVar5 & 0xff]],
                     CONCAT11((&alu_mul_sum8l)
                              [(uint)(byte)(&alu_mul_sum8l)
                                           [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff][uVar5 & 0xff]
                                            + (uint)(byte)(&alu_mul_sum8h)
                                                          [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                 [uVar5 & 0xff]]] +
                               (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1][uVar5 & 0xff]],
                              (&alu_mul_sum8l)[(byte)(&alu_mul_mul8l)[uVar3 & 0xff][uVar5 & 0xff]]))
  ;
  _alu_z0 = CONCAT13((&alu_mul_sum8l)
                     [(uint)(byte)(&alu_mul_sum8l)
                                  [(uint)(byte)(&alu_mul_mul8h)[uVar4 & 0xff][uVar5 & 0xff] +
                                   (uint)(byte)(&alu_mul_sum8h)
                                               [(uint)(byte)(&alu_mul_sum8l)
                                                            [(uint)(byte)(&alu_mul_mul8h)
                                                                         [DAT_08200ff1]
                                                                         [uVar5 & 0xff] +
                                                             (uint)(byte)(&alu_mul_sum8h)
                                                                         [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff]
                                                               [uVar5 & 0xff] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                      [uVar5 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [uVar5 & 0xff]]] +
                                                (uint)(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                            [uVar5 & 0xff]]] +
                      (uint)(byte)(&alu_mul_mul8l)[uVar4 >> 8 & 0xff][uVar5 & 0xff]],_alu_z0);
  DAT_08200ff5 = (byte)(uVar5 >> 8);
  _alu_z1 = (uint)CONCAT12((&alu_mul_sum8l)
                           [(uint)(byte)(&alu_mul_sum8l)
                                        [(uint)(byte)(&alu_mul_mul8h)[DAT_08200ff1][DAT_08200ff5] +
                                         (uint)(byte)(&alu_mul_sum8h)
                                                     [(uint)(byte)(&alu_mul_sum8l)
                                                                  [(uint)(byte)(&alu_mul_mul8h)
                                                                               [uVar3 & 0xff]
                                                                               [DAT_08200ff5] +
                                                                   (uint)(byte)(&alu_mul_sum8h)
                                                                               [(byte)(&
                                                  alu_mul_mul8l)[uVar3 & 0xff][DAT_08200ff5]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [DAT_08200ff5]]] +
                            (uint)(byte)(&alu_mul_mul8l)[uVar4 & 0xff][DAT_08200ff5]],
                           CONCAT11((&alu_mul_sum8l)
                                    [(uint)(byte)(&alu_mul_sum8l)
                                                 [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff]
                                                              [DAT_08200ff5] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [DAT_08200ff5]]] +
                                     (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1][DAT_08200ff5]],
                                    (&alu_mul_sum8l)
                                    [(byte)(&alu_mul_mul8l)[uVar3 & 0xff][DAT_08200ff5]])) << 8;
  _alu_z2 = (uint)CONCAT11((&alu_mul_sum8l)
                           [(uint)(byte)(&alu_mul_sum8l)
                                        [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff][uVar7 & 0xff] +
                                         (uint)(byte)(&alu_mul_sum8h)
                                                     [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                            [uVar7 & 0xff]]] +
                            (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1][uVar7 & 0xff]],
                           (&alu_mul_sum8l)[(byte)(&alu_mul_mul8l)[uVar3 & 0xff][uVar7 & 0xff]]) <<
            0x10;
  _alu_z3 = (uint)(byte)(&alu_mul_sum8l)[(byte)(&alu_mul_mul8l)[uVar3 & 0xff][uVar7 >> 8 & 0xff]] <<
            0x18;
  uVar11 = CONCAT12((char)*(uint *)(&alu_mul_sums +
                                   *(int *)(&alu_mul_shl2 +
                                           *(int *)(&alu_mul_sums +
                                                   *(int *)(&alu_mul_shl2 +
                                                           *(int *)(&alu_mul_sums +
                                                                   *(int *)(&alu_mul_shl2 +
                                                                           (uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_sum8l)
                                                               [(uint)(byte)(&alu_mul_mul8h)
                                                                            [uVar3 & 0xff]
                                                                            [DAT_08200ff5] +
                                                                (uint)(byte)(&alu_mul_sum8h)
                                                                            [(byte)(&alu_mul_mul8l)
                                                                                   [uVar3 & 0xff]
                                                                                   [DAT_08200ff5]]]
                                                   + (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                                 [DAT_08200ff5]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[DAT_08200ff1][uVar5 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar5 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar5 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [uVar5 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                              [uVar5 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar3 & 0xff]
                                                                             [uVar7 & 0xff]] * 4)) *
                                           4) +
                                   *(int *)(&alu_mul_shl2 +
                                           (*(uint *)(&alu_mul_sums +
                                                     *(int *)(&alu_mul_shl2 +
                                                             *(int *)(&alu_mul_sums +
                                                                     *(int *)(&alu_mul_shl2 +
                                                                             (uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                         [DAT_08200ff5]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar5 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar5 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [uVar5 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    _alu_mul_shl2 +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            (_alu_z0 & 0xff) * 4))
                                                           >> 8 & 0xff) * 4)) >> 8 & 0xff) * 4)),
                    CONCAT11((char)*(uint *)(&alu_mul_sums +
                                            *(int *)(&alu_mul_shl2 +
                                                    *(int *)(&alu_mul_sums +
                                                            *(int *)(&alu_mul_shl2 +
                                                                    (uint)(byte)(&alu_mul_sum8l)
                                                                                [(byte)(&
                                                  alu_mul_mul8l)[uVar3 & 0xff][DAT_08200ff5]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar5 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar5 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [uVar5 & 0xff]] * 4)) * 4) +
                                            *(int *)(&alu_mul_shl2 +
                                                    (*(uint *)(&alu_mul_sums +
                                                              _alu_mul_shl2 +
                                                              *(int *)(&alu_mul_shl2 +
                                                                      (_alu_z0 & 0xff) * 4)) >> 8 &
                                                    0xff) * 4)),
                             (char)*(uint *)(&alu_mul_sums +
                                            _alu_mul_shl2 +
                                            *(int *)(&alu_mul_shl2 + (_alu_z0 & 0xff) * 4))));
  stack_temp = (undefined *)
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[uVar11 & 0xffff] +
                                   (uint)*(ushort *)
                                          (&alu_inv16 + (*(uint *)(&sel_data)[on] & 0xffff) * 2) * 4
                                   )] + 4) & 0xffff |
               *(int *)((&alu_add16)
                        [*(int *)((&alu_add16)
                                  [CONCAT13((char)*(undefined4 *)
                                                   (&alu_mul_sums +
                                                   *(int *)(&alu_mul_shl2 +
                                                           *(int *)(&alu_mul_sums +
                                                                   *(int *)(&alu_mul_shl2 +
                                                                           *(int *)(&alu_mul_sums +
                                                                                   *(int *)(&
                                                  alu_mul_shl2 +
                                                  *(int *)(&alu_mul_sums +
                                                          *(int *)(&alu_mul_shl2 +
                                                                  (uint)(byte)(&alu_mul_sum8l)
                                                                              [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[DAT_08200ff1]
                                                               [DAT_08200ff5] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(uint)(byte)(&alu_mul_sum8l)
                                                                            [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][DAT_08200ff5] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [DAT_08200ff5]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [DAT_08200ff5]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                              [DAT_08200ff5]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar4 & 0xff][uVar5 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[DAT_08200ff1][uVar5 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar5 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar5 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [uVar5 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                              [uVar5 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[uVar4 >> 8 & 0xff]
                                                              [uVar5 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar7 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar7 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [uVar7 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar3 & 0xff]
                                                                             [uVar7 >> 8 & 0xff]] *
                                                          4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            *(int *)(&alu_mul_sums +
                                                                                    *(int *)(&
                                                  alu_mul_shl2 +
                                                  *(int *)(&alu_mul_sums +
                                                          *(int *)(&alu_mul_shl2 +
                                                                  (uint)(byte)(&alu_mul_sum8l)
                                                                              [(uint)(byte)(&
                                                  alu_mul_sum8l)
                                                  [(uint)(byte)(&alu_mul_mul8h)[uVar3 & 0xff]
                                                               [DAT_08200ff5] +
                                                   (uint)(byte)(&alu_mul_sum8h)
                                                               [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                      [DAT_08200ff5]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [DAT_08200ff5]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[DAT_08200ff1][uVar5 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(uint)(byte)(&alu_mul_sum8l)
                                                                           [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar5 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar5 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [uVar5 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[uVar4 & 0xff]
                                                              [uVar5 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar3 & 0xff]
                                                                             [uVar7 & 0xff]] * 4)) *
                                                  4) + *(int *)(&alu_mul_shl2 +
                                                               (*(uint *)(&alu_mul_sums +
                                                                         *(int *)(&alu_mul_shl2 +
                                                                                 *(int *)(&
                                                  alu_mul_sums +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(byte)(&alu_mul_mul8l)
                                                                             [uVar3 & 0xff]
                                                                             [DAT_08200ff5]] * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (uint)(byte)(&alu_mul_sum8l)
                                                                      [(uint)(byte)(&alu_mul_sum8l)
                                                                                   [(uint)(byte)(&
                                                  alu_mul_mul8h)[uVar3 & 0xff][uVar5 & 0xff] +
                                                  (uint)(byte)(&alu_mul_sum8h)
                                                              [(byte)(&alu_mul_mul8l)[uVar3 & 0xff]
                                                                     [uVar5 & 0xff]]] +
                                                  (uint)(byte)(&alu_mul_mul8l)[DAT_08200ff1]
                                                              [uVar5 & 0xff]] * 4)) * 4) +
                                                  *(int *)(&alu_mul_shl2 +
                                                          (*(uint *)(&alu_mul_sums +
                                                                    _alu_mul_shl2 +
                                                                    *(int *)(&alu_mul_shl2 +
                                                                            (_alu_z0 & 0xff) * 4))
                                                           >> 8 & 0xff) * 4)) >> 8 & 0xff) * 4)) >>
                                                  8 & 0xff) * 4)),uVar11) >> 0x10] +
                                 (uint)*(ushort *)
                                        (&alu_inv16 + (*(uint *)(&sel_data)[on] >> 0x10) * 2) * 4)]
                       + (*(uint *)((&alu_add16)
                                    [*(int *)((&alu_add16)[uVar11 & 0xffff] +
                                             (uint)*(ushort *)
                                                    (&alu_inv16 +
                                                    (*(uint *)(&sel_data)[on] & 0xffff) * 2) * 4)] +
                                   4) >> 0x10) * 4) << 0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R1 = *(undefined1 **)(&sel_data)[on];
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)
                         [*(int *)((&alu_add16)
                                   [*(uint *)((&alu_add16)
                                              [*(int *)((&alu_add16)[(uint)R3 & 0xffff] +
                                                       (uint)*(ushort *)
                                                              (&alu_inv16 + ((uint)R1 & 0xffff) * 2)
                                                       * 4)] + 4) & 0xffff] + (R2 & 0xffff) * 4)] &
                0xffff | *(int *)((&alu_add16)
                                  [*(int *)((&alu_add16)
                                            [*(uint *)((&alu_add16)
                                                       [*(int *)((&alu_add16)[(uint)R3 >> 0x10] +
                                                                (uint)*(ushort *)
                                                                       (&alu_inv16 +
                                                                       ((uint)R1 >> 0x10) * 2) * 4)]
                                                      + (*(uint *)((&alu_add16)
                                                                   [*(int *)((&alu_add16)
                                                                             [(uint)R3 & 0xffff] +
                                                                            (uint)*(ushort *)
                                                                                   (&alu_inv16 +
                                                                                   ((uint)R1 &
                                                                                   0xffff) * 2) * 4)
                                                                   ] + 4) >> 0x10) * 4) & 0xffff] +
                                           (R2 >> 0x10) * 4)] +
                                 (*(uint *)(&alu_add16)
                                           [*(int *)((&alu_add16)
                                                     [*(uint *)((&alu_add16)
                                                                [*(int *)((&alu_add16)
                                                                          [(uint)R3 & 0xffff] +
                                                                         (uint)*(ushort *)
                                                                                (&alu_inv16 +
                                                                                ((uint)R1 & 0xffff)
                                                                                * 2) * 4)] + 4) &
                                                      0xffff] + (R2 & 0xffff) * 4)] >> 0x10) * 4) <<
                         0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = &DAT_08058042;
  stack_temp = &DAT_08058042;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_44135_080970cc] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34820_0808df40 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_44135_080970cc] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060)))
  ;
  *(undefined4 *)(&sel_target)[on] = 0x8804b203;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xa1]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xad] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = &DAT_0805803f;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_45455_0809856c] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34820_0808df40 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_45455_0809856c] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][3]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xb2] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(&sel_data)[on];
  R1 = (undefined1 *)
       (*(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)uRam0816c052 * 4)] +
                 4) & 0xffff |
       *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)uRam0816c052 * 4)] + 4)
               >> 0x10) * 4) << 0x10);
  *(undefined1 **)(&sel_data)[on] = R1;
  R2 = 0;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)_alu_inv16 * 4)] +
                   4);
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
  *(undefined4 *)(&sel_target)[b0] = 0x8804ada1;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xad]] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_08201114 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x99]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xbc] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R1;
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
  DAT_08201114 = DAT_0805807c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
  *(undefined **)(&sel_data)[on] = sp;
  *(uint *)(&sel_data)[on] =
       *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] & 0xffff
       | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                 (*(uint *)(&alu_add16)
                           [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] >> 0x10)
                 * 4) << 0x10;
  R1 = t;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  stack_temp = &DAT_0805803c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R2 = 4;
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x8804d617;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88049900;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x17]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xd6] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  stack_temp = (undefined *)0x186a0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_55692_080a2560] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34820_0808df40 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_55692_080a2560] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_56178_080a2cf8] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34820_0808df40 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_56178_080a2cf8] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xe0]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xdb] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_08201114 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xcc]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xe0] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R1;
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
  DAT_08201114 = DAT_0805807c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
  *(undefined **)(&sel_data)[on] = sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + (uint)uRam0816c052 * 4)
                 ] + 4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] +
                                   (uint)uRam0816c052 * 4)] + 4) >> 0x10) * 4) << 0x10;
  R1 = t;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  stack_temp = &DAT_08058039;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R2 = 1;
  R3 = (undefined *)
       (*(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] &
        0xffff | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                         (*(uint *)(&alu_add16)
                                   [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)]
                         >> 0x10) * 4) << 0x10);
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x8804fac5;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88049900;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xc5]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xfa] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  R3 = *(undefined **)(fp + -0x200068);
  R0 = *(uint *)(&sel_data)[on];
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xe]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xfd] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_08201114 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xfa]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][1] * 4)]
                                  + (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R1;
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
  DAT_08201114 = DAT_0805807c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
  *(undefined **)(&sel_data)[on] = sp;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 0;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)_alu_inv16 * 4)] +
                   4);
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
  *(undefined4 *)(&sel_target)[b0] = 0x88050949;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  *(undefined4 *)(&sel_target)[on] = 0x88052061;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x49]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][9] * 4)]
                                  + (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R2 = 1;
  R3 = (undefined *)
       (*(uint *)((&alu_add16)
                  [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + (uint)uRam0816c052 * 4
                           )] + 4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] +
                                   (uint)uRam0816c052 * 4)] + 4) >> 0x10) * 4) << 0x10);
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88050fad;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880501fa;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xad]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xf] * 4
                                                  )] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88051386;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8804e0cc;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x86]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x13] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  stack_temp = (undefined *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x880517ad;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8804bc99;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xad]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x17] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R2 = 1;
  R3 = (undefined *)
       (*(uint *)((&alu_add16)
                  [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + (uint)uRam0816c052 * 4
                           )] + 4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] +
                                   (uint)uRam0816c052 * 4)] + 4) >> 0x10) * 4) << 0x10);
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88051e46;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880501fa;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x46]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x1e] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x61]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x20] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_08201114 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x4d]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x25] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R1;
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
  DAT_08201114 = DAT_0805807c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
  *(undefined **)(&sel_data)[on] = sp;
  stack_temp = &DAT_08058032;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_10893_08076964] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34821_0808df44 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_10893_08076964] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 1;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)uRam0816c052 * 4)]
                   + 4);
  alu_s._3_1_ = (byte)(*(uint *)((&alu_add16)
                                 [*(int *)((&alu_add16)[(uint)R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                (uVar3 >> 0x10) * 4) >> 8);
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
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
                                                  (uVar3 >> 0x10) * 4) & 0xff)] + (uint)alu_s._3_1_]
                   ];
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           & 0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)((&or)[*(int *)((&xor)[sf] + of * 4)] + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88053361;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_12347_0807801c] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34821_0808df44 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_12347_0807801c] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  _external = atoi;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  R3 = (undefined *)R0;
  *(uint *)(&sel_data)[on] = R0;
  R2 = 0;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)_alu_inv16 * 4)] +
                   4);
  alu_s._3_1_ = (byte)(*(uint *)((&alu_add16)
                                 [*(int *)((&alu_add16)[(uint)R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                (uVar3 >> 0x10) * 4) >> 8);
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
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
                                                  (uVar3 >> 0x10) * 4) & 0xff)] + (uint)alu_s._3_1_]
                   ];
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           & 0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)((&and)[*(int *)(&alu_false + zf * 4)] +
                               *(int *)((&xnor)[sf] + of * 4) * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x8805356e;
  iVar1 = b0;
  puVar9 = (uint *)(&sel_data)[b0];
  *puVar9 = R0;
  puVar9[1] = (uint)R1;
  puVar9[2] = R2;
  puVar9[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x61]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x33] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = 8;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x6e]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x35] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R2 = 0;
  *(undefined4 *)(&sel_data)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xab]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x37] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88053b0d;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88048884;
  iVar1 = on;
  puVar9 = (uint *)(&sel_data)[on];
  *puVar9 = R0;
  puVar9[1] = (uint)R1;
  puVar9[2] = R2;
  puVar9[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xd]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x3b] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  uVar3 = *(uint *)(&sel_data)[on];
  _alu_sx = 2;
  _alu_sc = (uint)(byte)*alu_bor8;
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = CONCAT31((uint3)(byte)(&alu_true)[_alu_sc],2);
  alu_s1 = 0;
  alu_s2 = 0;
  DAT_0820102d = 0;
  alu_s3 = 0;
  DAT_08201039 = 0;
  DAT_0820103a = 0;
  puVar6 = (&alu_lshu8)[(&alu_clamp32)[_alu_sc]];
  _alu_s0 = *(undefined4 *)(puVar6 + (uVar3 & 0xff) * 4);
  uVar10 = *(undefined4 *)(puVar6 + (uVar3 >> 8 & 0xff) * 4);
  DAT_08201021 = (undefined)uVar10;
  DAT_08201022 = (undefined)((uint)uVar10 >> 8);
  DAT_08201023 = (undefined)((uint)uVar10 >> 0x10);
  uRam08201024 = (undefined)((uint)uVar10 >> 0x18);
  uVar10 = *(undefined4 *)(puVar6 + (uVar3 >> 0x10 & 0xff) * 4);
  DAT_0820102e = (undefined)uVar10;
  DAT_0820102f = (undefined)((uint)uVar10 >> 8);
  uRam08201030 = (undefined2)((uint)uVar10 >> 0x10);
  _DAT_0820103b = *(undefined4 *)(puVar6 + (uVar3 >> 0x18) * 4);
  *(uint *)(&sel_data)[on] = R0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x40]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x41] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R1 = (undefined1 *)0x1;
  *(uint *)(&sel_data)[on] =
       *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] & 0xffff
       | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                 (*(uint *)(&alu_add16)
                           [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] >> 0x10)
                 * 4) << 0x10;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 3;
  alu_s = *(int *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                  (*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)uRam0816c056 * 4)] +
                            4) >> 0x10) * 4) << 0x10;
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
  *(undefined4 *)(&sel_target)[b0] = 0x880537ab;
  iVar1 = b0;
  puVar9 = (uint *)(&sel_data)[b0];
  *puVar9 = R0;
  puVar9[1] = (uint)R1;
  puVar9[2] = R2;
  puVar9[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R3 = *(undefined **)
        (&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(&pop + *(
                                                  int *)(&pop + *(int *)(fp + -0x200060))))))));
  R2 = *(uint *)(&sel_data)[on];
  *(uint *)(&sel_data)[on] = R2;
  *(undefined4 *)(&sel_target)[on] = 0x880551a2;
  iVar1 = on;
  puVar9 = (uint *)(&sel_data)[on];
  *puVar9 = R0;
  puVar9[1] = (uint)R1;
  puVar9[2] = R2;
  puVar9[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x66]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x48] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = (undefined *)0x0;
  stack_temp = (undefined *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88054c52;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8804bc99;
  iVar1 = on;
  puVar9 = (uint *)(&sel_data)[on];
  *puVar9 = R0;
  puVar9[1] = (uint)R1;
  puVar9[2] = R2;
  puVar9[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x52]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x4c] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x61]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x4e] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R1 = (undefined1 *)0x1;
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + (uint)uRam0816c052 * 4)
                 ] + 4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] +
                                   (uint)uRam0816c052 * 4)] + 4) >> 0x10) * 4) << 0x10;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xa2]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x51] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(undefined **)(&sel_data)[on];
  R2 = 0;
  alu_t = 0;
  DAT_08201002 = 0;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 & 0xffff] + (uint)_alu_inv16 * 4)] +
                   4);
  uVar4 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[(uint)R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                   (uVar3 >> 0x10) * 4);
  _DAT_08200ffe = (undefined2)uVar4;
  alu_s = uVar3 & 0xffff | uVar4 << 0x10;
  alu_c = (byte)(uVar4 >> 0x10);
  uRam08201001 = (undefined)(uVar4 >> 0x18);
  cf = (&alu_false)[alu_c];
  alu_s._3_1_ = (byte)(uVar4 >> 8);
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar3 & 0xff] +
                                                     (uVar3 >> 8 & 0xff)] + (uVar4 & 0xff)] +
                           (uint)alu_s._3_1_]];
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + ((uint)R3 >> 0x18) * 4) & 0xffffff00) * 4)
                           & 0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88054866;
  iVar1 = b0;
  puVar9 = (uint *)(&sel_data)[b0];
  *puVar9 = R0;
  puVar9[1] = (uint)R1;
  puVar9[2] = R2;
  puVar9[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  stack_temp = (undefined *)0x1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = *(undefined **)(&sel_data)[on];
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x880558bb;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880501fa;
  iVar1 = on;
  puVar9 = (uint *)(&sel_data)[on];
  *puVar9 = R0;
  puVar9[1] = (uint)R1;
  puVar9[2] = R2;
  puVar9[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xbb]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x58] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  stack_temp = &DAT_08058030;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = (undefined *)0x1;
  stack_temp = (undefined *)0x1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R2 = 0;
  stack_temp = (undefined *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88055d44;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88049900;
  iVar1 = on;
  puVar9 = (uint *)(&sel_data)[on];
  *puVar9 = R0;
  puVar9[1] = (uint)R1;
  puVar9[2] = R2;
  puVar9[3] = (uint)R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x44]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x5d] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  R0 = 0;
  _alu_x = target;
  _alu_y = 0x88055f69;
  b1 = (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x5f];
  b2 = (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5];
  b3 = (uint)(byte)(&alu_eq)[target >> 0x18][0x88];
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x69]] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_08201114 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void add_disk(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint uVar7;
  
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x99]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xbc] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)R2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)D1;
  DAT_08201114 = DAT_0805807c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
  *(undefined **)(&sel_data)[on] = sp;
  *(uint *)(&sel_data)[on] =
       *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] & 0xffff
       | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                 (*(uint *)(&alu_add16)
                           [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] >> 0x10)
                 * 4) << 0x10;
  R1 = t;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  stack_temp = &DAT_0805803c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R2 = 4;
  R3 = *(uint *)(&sel_data)[on];
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x8804d617;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88049900;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x17]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xd6] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  stack_temp = (undefined *)0x186a0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_55692_080a2560] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34820_0808df40 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_55692_080a2560] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  R3 = *(uint *)(&sel_data)[on];
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_56178_080a2cf8] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34820_0808df40 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_56178_080a2cf8] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xe0]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xdb] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_08201114 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xcc]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xe0] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)R2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)D1;
  DAT_08201114 = DAT_0805807c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
  *(undefined **)(&sel_data)[on] = sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + (uint)uRam0816c052 * 4)
                 ] + 4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] +
                                   (uint)uRam0816c052 * 4)] + 4) >> 0x10) * 4) << 0x10;
  R1 = t;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  stack_temp = &DAT_08058039;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R2 = 1;
  R3 = *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] & 0xffff
       | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                 (*(uint *)(&alu_add16)
                           [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] >> 0x10)
                 * 4) << 0x10;
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x8804fac5;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88049900;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xc5]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xfa] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  R3 = *(uint *)(fp + -0x200068);
  R0 = *(uint *)(&sel_data)[on];
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xe]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xfd] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_08201114 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xfa]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][1] * 4)]
                                  + (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)R2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)D1;
  DAT_08201114 = DAT_0805807c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
  *(undefined **)(&sel_data)[on] = sp;
  R3 = *(uint *)(&sel_data)[on];
  R2 = 0;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R3 & 0xffff] + (uint)_alu_inv16 * 4)] + 4);
  sf = sf & 0xffffff00;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar3 & 0xff] +
                                                     (uVar3 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[R3 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar3 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                     (uVar3 >> 0x10) * 4) >> 8 & 0xff)]];
  of = of & 0xffffff00;
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88050949;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  *(undefined4 *)(&sel_target)[on] = 0x88052061;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x49]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][9] * 4)]
                                  + (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R2 = 1;
  R3 = *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + (uint)uRam0816c052 * 4)
                 ] + 4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] +
                                   (uint)uRam0816c052 * 4)] + 4) >> 0x10) * 4) << 0x10;
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88050fad;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880501fa;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xad]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xf] * 4
                                                  )] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  R3 = *(uint *)(&sel_data)[on];
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88051386;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8804e0cc;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x86]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x13] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  stack_temp = (undefined *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = *(uint *)(&sel_data)[on];
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x880517ad;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8804bc99;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xad]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x17] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R2 = 1;
  R3 = *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + (uint)uRam0816c052 * 4)
                 ] + 4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] +
                                   (uint)uRam0816c052 * 4)] + 4) >> 0x10) * 4) << 0x10;
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88051e46;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880501fa;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x46]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x1e] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x61]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x20] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_08201114 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x4d]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x25] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)R2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)D1;
  DAT_08201114 = DAT_0805807c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
  *(undefined **)(&sel_data)[on] = sp;
  stack_temp = &DAT_08058032;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_10893_08076964] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34821_0808df44 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_10893_08076964] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  R3 = *(uint *)(&sel_data)[on];
  R2 = 1;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R3 & 0xffff] + (uint)uRam0816c052 * 4)] + 4);
  alu_s._3_1_ = (byte)(*(uint *)((&alu_add16)
                                 [*(int *)((&alu_add16)[R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                (uVar3 >> 0x10) * 4) >> 8);
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar3 & 0xff] +
                                                     (uVar3 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[R3 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar3 >> 0x10) * 4) & 0xff)] + (uint)alu_s._3_1_]
                   ];
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + (R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + (R3 >> 0x18) * 4) & 0xffffff00) * 4) * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + (R3 >> 0x18) * 4) & 0xffffff00) * 4) &
                           0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)((&or)[*(int *)((&xor)[sf] + of * 4)] + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88053361;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_12347_0807801c] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34821_0808df44 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_12347_0807801c] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  _external = atoi;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  R3 = R0;
  *(uint *)(&sel_data)[on] = R0;
  R2 = 0;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R3 & 0xffff] + (uint)_alu_inv16 * 4)] + 4);
  alu_s._3_1_ = (byte)(*(uint *)((&alu_add16)
                                 [*(int *)((&alu_add16)[R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                (uVar3 >> 0x10) * 4) >> 8);
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar3 & 0xff] +
                                                     (uVar3 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[R3 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar3 >> 0x10) * 4) & 0xff)] + (uint)alu_s._3_1_]
                   ];
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + (R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + (R3 >> 0x18) * 4) & 0xffffff00) * 4) * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + (R3 >> 0x18) * 4) & 0xffffff00) * 4) &
                           0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)((&and)[*(int *)(&alu_false + zf * 4)] +
                               *(int *)((&xnor)[sf] + of * 4) * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x8805356e;
  iVar1 = b0;
  puVar4 = (uint *)(&sel_data)[b0];
  *puVar4 = R0;
  puVar4[1] = (uint)R1;
  puVar4[2] = R2;
  puVar4[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x61]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x33] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = 8;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x6e]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x35] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R2 = 0;
  *(undefined4 *)(&sel_data)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xab]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x37] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(uint *)(&sel_data)[on];
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88053b0d;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88048884;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = (uint)R1;
  puVar4[2] = R2;
  puVar4[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xd]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x3b] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  uVar3 = *(uint *)(&sel_data)[on];
  _alu_sx = 2;
  _alu_sc = (uint)(byte)*alu_bor8;
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = CONCAT31((uint3)(byte)(&alu_true)[_alu_sc],2);
  alu_s1 = 0;
  alu_s2 = 0;
  DAT_0820102d = 0;
  alu_s3 = 0;
  DAT_08201039 = 0;
  DAT_0820103a = 0;
  puVar5 = (&alu_lshu8)[(&alu_clamp32)[_alu_sc]];
  _alu_s0 = *(undefined4 *)(puVar5 + (uVar3 & 0xff) * 4);
  uVar6 = *(undefined4 *)(puVar5 + (uVar3 >> 8 & 0xff) * 4);
  DAT_08201021 = (undefined)uVar6;
  DAT_08201022 = (undefined)((uint)uVar6 >> 8);
  DAT_08201023 = (undefined)((uint)uVar6 >> 0x10);
  uRam08201024 = (undefined)((uint)uVar6 >> 0x18);
  uVar6 = *(undefined4 *)(puVar5 + (uVar3 >> 0x10 & 0xff) * 4);
  DAT_0820102e = (undefined)uVar6;
  DAT_0820102f = (undefined)((uint)uVar6 >> 8);
  uRam08201030 = (undefined2)((uint)uVar6 >> 0x10);
  _DAT_0820103b = *(undefined4 *)(puVar5 + (uVar3 >> 0x18) * 4);
  *(uint *)(&sel_data)[on] = R0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x40]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x41] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R1 = (undefined1 *)0x1;
  *(uint *)(&sel_data)[on] =
       *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] & 0xffff
       | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                 (*(uint *)(&alu_add16)
                           [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] >> 0x10)
                 * 4) << 0x10;
  R3 = *(uint *)(&sel_data)[on];
  R2 = 3;
  alu_s = *(int *)((&alu_add16)[*(int *)((&alu_add16)[R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                  (*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[R3 & 0xffff] + (uint)uRam0816c056 * 4)] + 4) >>
                  0x10) * 4) << 0x10;
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
  zf = zf & 0xffffff00;
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + (R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + (R3 >> 0x18) * 4) & 0xffffff00) * 4) * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + (R3 >> 0x18) * 4) & 0xffffff00) * 4) &
                           0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)((&xor)[sf] + of * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x880537ab;
  iVar1 = b0;
  puVar4 = (uint *)(&sel_data)[b0];
  *puVar4 = R0;
  puVar4[1] = (uint)R1;
  puVar4[2] = R2;
  puVar4[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R3 = *(uint *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(&
                                                  pop + *(int *)(&pop + *(int *)(fp + -0x200060)))))
                                                )));
  R2 = *(uint *)(&sel_data)[on];
  *(uint *)(&sel_data)[on] = R2;
  *(undefined4 *)(&sel_target)[on] = 0x880551a2;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = (uint)R1;
  puVar4[2] = R2;
  puVar4[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x66]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x48] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = 0;
  stack_temp = (undefined *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88054c52;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8804bc99;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = (uint)R1;
  puVar4[2] = R2;
  puVar4[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x52]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x4c] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x61]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x4e] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R1 = (undefined1 *)0x1;
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + (uint)uRam0816c052 * 4)
                 ] + 4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] +
                                   (uint)uRam0816c052 * 4)] + 4) >> 0x10) * 4) << 0x10;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xa2]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x51] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(uint *)(&sel_data)[on];
  R2 = 0;
  alu_t = 0;
  DAT_08201002 = 0;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R3 & 0xffff] + (uint)_alu_inv16 * 4)] + 4);
  uVar7 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                   (uVar3 >> 0x10) * 4);
  _DAT_08200ffe = (undefined2)uVar7;
  alu_s = uVar3 & 0xffff | uVar7 << 0x10;
  alu_c = (byte)(uVar7 >> 0x10);
  uRam08201001 = (undefined)(uVar7 >> 0x18);
  cf = (&alu_false)[alu_c];
  alu_s._3_1_ = (byte)(uVar7 >> 8);
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar3 & 0xff] +
                                                     (uVar3 >> 8 & 0xff)] + (uVar7 & 0xff)] +
                           (uint)alu_s._3_1_]];
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + (R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + (R3 >> 0x18) * 4) & 0xffffff00) * 4) * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + (R3 >> 0x18) * 4) & 0xffffff00) * 4) &
                           0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88054866;
  iVar1 = b0;
  puVar4 = (uint *)(&sel_data)[b0];
  *puVar4 = R0;
  puVar4[1] = (uint)R1;
  puVar4[2] = R2;
  puVar4[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  stack_temp = (undefined *)0x1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = *(uint *)(&sel_data)[on];
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x880558bb;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880501fa;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = (uint)R1;
  puVar4[2] = R2;
  puVar4[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xbb]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x58] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  stack_temp = &DAT_08058030;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = 1;
  stack_temp = (undefined *)0x1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R2 = 0;
  stack_temp = (undefined *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88055d44;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88049900;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = (uint)R1;
  puVar4[2] = R2;
  puVar4[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x44]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x5d] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  R0 = 0;
  _alu_x = target;
  _alu_y = 0x88055f69;
  b1 = (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x5f];
  b2 = (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5];
  b3 = (uint)(byte)(&alu_eq)[target >> 0x18][0x88];
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x69]] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_08201114 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void remove_disk(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint uVar7;
  
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xcc]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xe0] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)R2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)D1;
  DAT_08201114 = DAT_0805807c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
  *(undefined **)(&sel_data)[on] = sp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + (uint)uRam0816c052 * 4)
                 ] + 4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] +
                                   (uint)uRam0816c052 * 4)] + 4) >> 0x10) * 4) << 0x10;
  R1 = t;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&sel_data)[on];
  stack_temp = &DAT_08058039;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R2 = 1;
  R3 = *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] & 0xffff
       | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                 (*(uint *)(&alu_add16)
                           [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] >> 0x10)
                 * 4) << 0x10;
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x8804fac5;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88049900;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xc5]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xfa] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  R3 = *(uint *)(fp + -0x200068);
  R0 = *(uint *)(&sel_data)[on];
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xe]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xfd] *
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_08201114 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xfa]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][1] * 4)]
                                  + (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)R2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)D1;
  DAT_08201114 = DAT_0805807c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
  *(undefined **)(&sel_data)[on] = sp;
  R3 = *(uint *)(&sel_data)[on];
  R2 = 0;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R3 & 0xffff] + (uint)_alu_inv16 * 4)] + 4);
  sf = sf & 0xffffff00;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar3 & 0xff] +
                                                     (uVar3 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[R3 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar3 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                     (uVar3 >> 0x10) * 4) >> 8 & 0xff)]];
  of = of & 0xffffff00;
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88050949;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  *(undefined4 *)(&sel_target)[on] = 0x88052061;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x49]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][9] * 4)]
                                  + (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R2 = 1;
  R3 = *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + (uint)uRam0816c052 * 4)
                 ] + 4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] +
                                   (uint)uRam0816c052 * 4)] + 4) >> 0x10) * 4) << 0x10;
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88050fad;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880501fa;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xad]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xf] * 4
                                                  )] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  R3 = *(uint *)(&sel_data)[on];
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88051386;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8804e0cc;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x86]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x13] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  stack_temp = (undefined *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = *(uint *)(&sel_data)[on];
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x880517ad;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8804bc99;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xad]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x17] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R2 = 1;
  R3 = *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + (uint)uRam0816c052 * 4)
                 ] + 4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] +
                                   (uint)uRam0816c052 * 4)] + 4) >> 0x10) * 4) << 0x10;
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88051e46;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880501fa;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x46]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x1e] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x61]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x20] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_08201114 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x4d]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x25] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = fp;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = R1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)R2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)D1;
  DAT_08201114 = DAT_0805807c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
  *(undefined **)(&sel_data)[on] = sp;
  stack_temp = &DAT_08058032;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_10893_08076964] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34821_0808df44 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_10893_08076964] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  R3 = *(uint *)(&sel_data)[on];
  R2 = 1;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R3 & 0xffff] + (uint)uRam0816c052 * 4)] + 4);
  alu_s._3_1_ = (byte)(*(uint *)((&alu_add16)
                                 [*(int *)((&alu_add16)[R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                (uVar3 >> 0x10) * 4) >> 8);
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar3 & 0xff] +
                                                     (uVar3 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[R3 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar3 >> 0x10) * 4) & 0xff)] + (uint)alu_s._3_1_]
                   ];
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + (R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + (R3 >> 0x18) * 4) & 0xffffff00) * 4) * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + (R3 >> 0x18) * 4) & 0xffffff00) * 4) &
                           0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)((&or)[*(int *)((&xor)[sf] + of * 4)] + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88053361;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_12347_0807801c] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34821_0808df44 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_12347_0807801c] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  _external = atoi;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  R3 = R0;
  *(uint *)(&sel_data)[on] = R0;
  R2 = 0;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R3 & 0xffff] + (uint)_alu_inv16 * 4)] + 4);
  alu_s._3_1_ = (byte)(*(uint *)((&alu_add16)
                                 [*(int *)((&alu_add16)[R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                (uVar3 >> 0x10) * 4) >> 8);
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar3 & 0xff] +
                                                     (uVar3 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[R3 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar3 >> 0x10) * 4) & 0xff)] + (uint)alu_s._3_1_]
                   ];
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + (R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + (R3 >> 0x18) * 4) & 0xffffff00) * 4) * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + (R3 >> 0x18) * 4) & 0xffffff00) * 4) &
                           0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)((&and)[*(int *)(&alu_false + zf * 4)] +
                               *(int *)((&xnor)[sf] + of * 4) * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x8805356e;
  iVar1 = b0;
  puVar4 = (uint *)(&sel_data)[b0];
  *puVar4 = R0;
  puVar4[1] = (uint)R1;
  puVar4[2] = R2;
  puVar4[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x61]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x33] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = 8;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x6e]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x35] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R2 = 0;
  *(undefined4 *)(&sel_data)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xab]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x37] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(uint *)(&sel_data)[on];
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88053b0d;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88048884;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = (uint)R1;
  puVar4[2] = R2;
  puVar4[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xd]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x3b] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  uVar3 = *(uint *)(&sel_data)[on];
  _alu_sx = 2;
  _alu_sc = (uint)(byte)*alu_bor8;
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = CONCAT31((uint3)(byte)(&alu_true)[_alu_sc],2);
  alu_s1 = 0;
  alu_s2 = 0;
  DAT_0820102d = 0;
  alu_s3 = 0;
  DAT_08201039 = 0;
  DAT_0820103a = 0;
  puVar5 = (&alu_lshu8)[(&alu_clamp32)[_alu_sc]];
  _alu_s0 = *(undefined4 *)(puVar5 + (uVar3 & 0xff) * 4);
  uVar6 = *(undefined4 *)(puVar5 + (uVar3 >> 8 & 0xff) * 4);
  DAT_08201021 = (undefined)uVar6;
  DAT_08201022 = (undefined)((uint)uVar6 >> 8);
  DAT_08201023 = (undefined)((uint)uVar6 >> 0x10);
  uRam08201024 = (undefined)((uint)uVar6 >> 0x18);
  uVar6 = *(undefined4 *)(puVar5 + (uVar3 >> 0x10 & 0xff) * 4);
  DAT_0820102e = (undefined)uVar6;
  DAT_0820102f = (undefined)((uint)uVar6 >> 8);
  uRam08201030 = (undefined2)((uint)uVar6 >> 0x10);
  _DAT_0820103b = *(undefined4 *)(puVar5 + (uVar3 >> 0x18) * 4);
  *(uint *)(&sel_data)[on] = R0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x40]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x41] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R1 = (undefined1 *)0x1;
  *(uint *)(&sel_data)[on] =
       *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] & 0xffff
       | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                 (*(uint *)(&alu_add16)
                           [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] >> 0x10)
                 * 4) << 0x10;
  R3 = *(uint *)(&sel_data)[on];
  R2 = 3;
  alu_s = *(int *)((&alu_add16)[*(int *)((&alu_add16)[R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                  (*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[R3 & 0xffff] + (uint)uRam0816c056 * 4)] + 4) >>
                  0x10) * 4) << 0x10;
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
  zf = zf & 0xffffff00;
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + (R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + (R3 >> 0x18) * 4) & 0xffffff00) * 4) * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + (R3 >> 0x18) * 4) & 0xffffff00) * 4) &
                           0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)((&xor)[sf] + of * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x880537ab;
  iVar1 = b0;
  puVar4 = (uint *)(&sel_data)[b0];
  *puVar4 = R0;
  puVar4[1] = (uint)R1;
  puVar4[2] = R2;
  puVar4[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R3 = *(uint *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(&
                                                  pop + *(int *)(&pop + *(int *)(fp + -0x200060)))))
                                                )));
  R2 = *(uint *)(&sel_data)[on];
  *(uint *)(&sel_data)[on] = R2;
  *(undefined4 *)(&sel_target)[on] = 0x880551a2;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = (uint)R1;
  puVar4[2] = R2;
  puVar4[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x66]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x48] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = 0;
  stack_temp = (undefined *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88054c52;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8804bc99;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = (uint)R1;
  puVar4[2] = R2;
  puVar4[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x52]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x4c] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x61]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x4e] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R1 = (undefined1 *)0x1;
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + (uint)uRam0816c052 * 4)
                 ] + 4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] +
                                   (uint)uRam0816c052 * 4)] + 4) >> 0x10) * 4) << 0x10;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xa2]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x51] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(uint *)(&sel_data)[on];
  R2 = 0;
  alu_t = 0;
  DAT_08201002 = 0;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R3 & 0xffff] + (uint)_alu_inv16 * 4)] + 4);
  uVar7 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                   (uVar3 >> 0x10) * 4);
  _DAT_08200ffe = (undefined2)uVar7;
  alu_s = uVar3 & 0xffff | uVar7 << 0x10;
  alu_c = (byte)(uVar7 >> 0x10);
  uRam08201001 = (undefined)(uVar7 >> 0x18);
  cf = (&alu_false)[alu_c];
  alu_s._3_1_ = (byte)(uVar7 >> 8);
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar3 & 0xff] +
                                                     (uVar3 >> 8 & 0xff)] + (uVar7 & 0xff)] +
                           (uint)alu_s._3_1_]];
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + (R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + (R3 >> 0x18) * 4) & 0xffffff00) * 4) * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + (R3 >> 0x18) * 4) & 0xffffff00) * 4) &
                           0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88054866;
  iVar1 = b0;
  puVar4 = (uint *)(&sel_data)[b0];
  *puVar4 = R0;
  puVar4[1] = (uint)R1;
  puVar4[2] = R2;
  puVar4[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  stack_temp = (undefined *)0x1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = *(uint *)(&sel_data)[on];
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x880558bb;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880501fa;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = (uint)R1;
  puVar4[2] = R2;
  puVar4[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xbb]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x58] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  stack_temp = &DAT_08058030;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = 1;
  stack_temp = (undefined *)0x1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R2 = 0;
  stack_temp = (undefined *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88055d44;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88049900;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = (uint)R1;
  puVar4[2] = R2;
  puVar4[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x44]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x5d] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  R0 = 0;
  _alu_x = target;
  _alu_y = 0x88055f69;
  b1 = (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x5f];
  b2 = (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5];
  b3 = (uint)(byte)(&alu_eq)[target >> 0x18][0x88];
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x69]] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_08201114 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void move(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint uVar7;
  
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xfa]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][1] * 4)]
                                  + (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
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
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)D1;
  DAT_08201114 = DAT_0805807c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
  *(undefined **)(&sel_data)[on] = sp;
  R3 = *(uint *)(&sel_data)[on];
  R2 = 0;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R3 & 0xffff] + (uint)_alu_inv16 * 4)] + 4);
  sf = sf & 0xffffff00;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar3 & 0xff] +
                                                     (uVar3 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[R3 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar3 >> 0x10) * 4) & 0xff)] +
                           (*(uint *)((&alu_add16)
                                      [*(int *)((&alu_add16)[R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                     (uVar3 >> 0x10) * 4) >> 8 & 0xff)]];
  of = of & 0xffffff00;
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88050949;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  *(undefined4 *)(&sel_target)[on] = 0x88052061;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x49]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][9] * 4)]
                                  + (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R2 = 1;
  R3 = *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + (uint)uRam0816c052 * 4)
                 ] + 4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] +
                                   (uint)uRam0816c052 * 4)] + 4) >> 0x10) * 4) << 0x10;
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88050fad;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880501fa;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xad]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0xf] * 4
                                                  )] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  R3 = *(uint *)(&sel_data)[on];
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88051386;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8804e0cc;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x86]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x13] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  stack_temp = (undefined *)R0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = *(uint *)(&sel_data)[on];
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x880517ad;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8804bc99;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xad]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x17] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R2 = 1;
  R3 = *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + (uint)uRam0816c052 * 4)
                 ] + 4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] +
                                   (uint)uRam0816c052 * 4)] + 4) >> 0x10) * 4) << 0x10;
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88051e46;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880501fa;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x46]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x1e] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x61]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x20] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_08201114 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x4d]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x25] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
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
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)D1;
  DAT_08201114 = DAT_0805807c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
  *(undefined **)(&sel_data)[on] = sp;
  stack_temp = &DAT_08058032;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_10893_08076964] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34821_0808df44 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_10893_08076964] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  R3 = *(uint *)(&sel_data)[on];
  R2 = 1;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R3 & 0xffff] + (uint)uRam0816c052 * 4)] + 4);
  alu_s._3_1_ = (byte)(*(uint *)((&alu_add16)
                                 [*(int *)((&alu_add16)[R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                (uVar3 >> 0x10) * 4) >> 8);
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar3 & 0xff] +
                                                     (uVar3 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[R3 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar3 >> 0x10) * 4) & 0xff)] + (uint)alu_s._3_1_]
                   ];
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + (R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + (R3 >> 0x18) * 4) & 0xffffff00) * 4) * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + (R3 >> 0x18) * 4) & 0xffffff00) * 4) &
                           0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)((&or)[*(int *)((&xor)[sf] + of * 4)] + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88053361;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_12347_0807801c] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34821_0808df44 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_12347_0807801c] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  _external = atoi;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  R3 = R0;
  *(uint *)(&sel_data)[on] = R0;
  R2 = 0;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R3 & 0xffff] + (uint)_alu_inv16 * 4)] + 4);
  alu_s._3_1_ = (byte)(*(uint *)((&alu_add16)
                                 [*(int *)((&alu_add16)[R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                (uVar3 >> 0x10) * 4) >> 8);
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar3 & 0xff] +
                                                     (uVar3 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[R3 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar3 >> 0x10) * 4) & 0xff)] + (uint)alu_s._3_1_]
                   ];
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + (R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + (R3 >> 0x18) * 4) & 0xffffff00) * 4) * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + (R3 >> 0x18) * 4) & 0xffffff00) * 4) &
                           0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)((&and)[*(int *)(&alu_false + zf * 4)] +
                               *(int *)((&xnor)[sf] + of * 4) * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x8805356e;
  iVar1 = b0;
  puVar4 = (uint *)(&sel_data)[b0];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x61]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x33] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = 8;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x6e]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x35] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R2 = 0;
  *(undefined4 *)(&sel_data)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xab]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x37] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(uint *)(&sel_data)[on];
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88053b0d;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88048884;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xd]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x3b] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  uVar3 = *(uint *)(&sel_data)[on];
  _alu_sx = 2;
  _alu_sc = (uint)(byte)*alu_bor8;
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = CONCAT31((uint3)(byte)(&alu_true)[_alu_sc],2);
  alu_s1 = 0;
  alu_s2 = 0;
  DAT_0820102d = 0;
  alu_s3 = 0;
  DAT_08201039 = 0;
  DAT_0820103a = 0;
  puVar5 = (&alu_lshu8)[(&alu_clamp32)[_alu_sc]];
  _alu_s0 = *(undefined4 *)(puVar5 + (uVar3 & 0xff) * 4);
  uVar6 = *(undefined4 *)(puVar5 + (uVar3 >> 8 & 0xff) * 4);
  DAT_08201021 = (undefined)uVar6;
  DAT_08201022 = (undefined)((uint)uVar6 >> 8);
  DAT_08201023 = (undefined)((uint)uVar6 >> 0x10);
  uRam08201024 = (undefined)((uint)uVar6 >> 0x18);
  uVar6 = *(undefined4 *)(puVar5 + (uVar3 >> 0x10 & 0xff) * 4);
  DAT_0820102e = (undefined)uVar6;
  DAT_0820102f = (undefined)((uint)uVar6 >> 8);
  uRam08201030 = (undefined2)((uint)uVar6 >> 0x10);
  _DAT_0820103b = *(undefined4 *)(puVar5 + (uVar3 >> 0x18) * 4);
  *(uint *)(&sel_data)[on] = R0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x40]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x41] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R1 = 1;
  *(uint *)(&sel_data)[on] =
       *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] & 0xffff
       | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                 (*(uint *)(&alu_add16)
                           [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] >> 0x10)
                 * 4) << 0x10;
  R3 = *(uint *)(&sel_data)[on];
  R2 = 3;
  alu_s = *(int *)((&alu_add16)[*(int *)((&alu_add16)[R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                  (*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[R3 & 0xffff] + (uint)uRam0816c056 * 4)] + 4) >>
                  0x10) * 4) << 0x10;
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
  zf = zf & 0xffffff00;
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + (R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + (R3 >> 0x18) * 4) & 0xffffff00) * 4) * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + (R3 >> 0x18) * 4) & 0xffffff00) * 4) &
                           0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)((&xor)[sf] + of * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x880537ab;
  iVar1 = b0;
  puVar4 = (uint *)(&sel_data)[b0];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R3 = *(uint *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(&
                                                  pop + *(int *)(&pop + *(int *)(fp + -0x200060)))))
                                                )));
  R2 = *(uint *)(&sel_data)[on];
  *(uint *)(&sel_data)[on] = R2;
  *(undefined4 *)(&sel_target)[on] = 0x880551a2;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x66]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x48] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = 0;
  stack_temp = (undefined *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88054c52;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8804bc99;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x52]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x4c] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x61]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x4e] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R1 = 1;
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + (uint)uRam0816c052 * 4)
                 ] + 4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] +
                                   (uint)uRam0816c052 * 4)] + 4) >> 0x10) * 4) << 0x10;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xa2]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x51] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(uint *)(&sel_data)[on];
  R2 = 0;
  alu_t = 0;
  DAT_08201002 = 0;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R3 & 0xffff] + (uint)_alu_inv16 * 4)] + 4);
  uVar7 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                   (uVar3 >> 0x10) * 4);
  _DAT_08200ffe = (undefined2)uVar7;
  alu_s = uVar3 & 0xffff | uVar7 << 0x10;
  alu_c = (byte)(uVar7 >> 0x10);
  uRam08201001 = (undefined)(uVar7 >> 0x18);
  cf = (&alu_false)[alu_c];
  alu_s._3_1_ = (byte)(uVar7 >> 8);
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar3 & 0xff] +
                                                     (uVar3 >> 8 & 0xff)] + (uVar7 & 0xff)] +
                           (uint)alu_s._3_1_]];
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + (R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + (R3 >> 0x18) * 4) & 0xffffff00) * 4) * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + (R3 >> 0x18) * 4) & 0xffffff00) * 4) &
                           0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88054866;
  iVar1 = b0;
  puVar4 = (uint *)(&sel_data)[b0];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  stack_temp = (undefined *)0x1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = *(uint *)(&sel_data)[on];
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x880558bb;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880501fa;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xbb]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x58] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  stack_temp = &DAT_08058030;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = 1;
  stack_temp = (undefined *)0x1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R2 = 0;
  stack_temp = (undefined *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88055d44;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88049900;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x44]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x5d] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  R0 = 0;
  _alu_x = target;
  _alu_y = 0x88055f69;
  b1 = (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x5f];
  b2 = (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5];
  b3 = (uint)(byte)(&alu_eq)[target >> 0x18][0x88];
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x69]] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_08201114 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
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
  uint uVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint uVar7;
  
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x4d]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x25] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
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
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)F1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)D1;
  DAT_08201114 = DAT_0805807c;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&push + *(int *)(sp + -0x200068));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
  *(undefined **)(&sel_data)[on] = sp;
  stack_temp = &DAT_08058032;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_10893_08076964] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34821_0808df44 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_10893_08076964] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  R3 = *(uint *)(&sel_data)[on];
  R2 = 1;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R3 & 0xffff] + (uint)uRam0816c052 * 4)] + 4);
  alu_s._3_1_ = (byte)(*(uint *)((&alu_add16)
                                 [*(int *)((&alu_add16)[R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                (uVar3 >> 0x10) * 4) >> 8);
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar3 & 0xff] +
                                                     (uVar3 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[R3 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar3 >> 0x10) * 4) & 0xff)] + (uint)alu_s._3_1_]
                   ];
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + (R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + (R3 >> 0x18) * 4) & 0xffffff00) * 4) * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + (R3 >> 0x18) * 4) & 0xffffff00) * 4) &
                           0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)((&or)[*(int *)((&xor)[sf] + of * 4)] + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88053361;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)
               (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_12347_0807801c] & 0xffff |
               *(int *)((&alu_add16)[*(int *)(PTR_alu_add16_34821_0808df44 + 0x20000)] +
                       (*(uint *)(&alu_add16)[*(int *)PTR_alu_add16_12347_0807801c] >> 0x10) * 4) <<
               0x10);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  _external = atoi;
  R0 = *(uint *)(&fault)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  R3 = R0;
  *(uint *)(&sel_data)[on] = R0;
  R2 = 0;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R3 & 0xffff] + (uint)_alu_inv16 * 4)] + 4);
  alu_s._3_1_ = (byte)(*(uint *)((&alu_add16)
                                 [*(int *)((&alu_add16)[R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                                (uVar3 >> 0x10) * 4) >> 8);
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar3 & 0xff] +
                                                     (uVar3 >> 8 & 0xff)] +
                                        (*(uint *)((&alu_add16)
                                                   [*(int *)((&alu_add16)[R3 >> 0x10] +
                                                            (uint)_alu_inv16 * 4)] +
                                                  (uVar3 >> 0x10) * 4) & 0xff)] + (uint)alu_s._3_1_]
                   ];
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + (R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + (R3 >> 0x18) * 4) & 0xffffff00) * 4) * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + (R3 >> 0x18) * 4) & 0xffffff00) * 4) &
                           0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)((&and)[*(int *)(&alu_false + zf * 4)] +
                               *(int *)((&xnor)[sf] + of * 4) * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x8805356e;
  iVar1 = b0;
  puVar4 = (uint *)(&sel_data)[b0];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x61]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x33] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = 8;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x6e]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x35] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R2 = 0;
  *(undefined4 *)(&sel_data)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xab]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x37] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(uint *)(&sel_data)[on];
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88053b0d;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88048884;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xd]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x3b] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200060);
  uVar3 = *(uint *)(&sel_data)[on];
  _alu_sx = 2;
  _alu_sc = (uint)(byte)*alu_bor8;
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = (uint)(byte)*(&alu_bor8)[_alu_sc];
  _alu_sc = CONCAT31((uint3)(byte)(&alu_true)[_alu_sc],2);
  alu_s1 = 0;
  alu_s2 = 0;
  DAT_0820102d = 0;
  alu_s3 = 0;
  DAT_08201039 = 0;
  DAT_0820103a = 0;
  puVar5 = (&alu_lshu8)[(&alu_clamp32)[_alu_sc]];
  _alu_s0 = *(undefined4 *)(puVar5 + (uVar3 & 0xff) * 4);
  uVar6 = *(undefined4 *)(puVar5 + (uVar3 >> 8 & 0xff) * 4);
  DAT_08201021 = (undefined)uVar6;
  DAT_08201022 = (undefined)((uint)uVar6 >> 8);
  DAT_08201023 = (undefined)((uint)uVar6 >> 0x10);
  uRam08201024 = (undefined)((uint)uVar6 >> 0x18);
  uVar6 = *(undefined4 *)(puVar5 + (uVar3 >> 0x10 & 0xff) * 4);
  DAT_0820102e = (undefined)uVar6;
  DAT_0820102f = (undefined)((uint)uVar6 >> 8);
  uRam08201030 = (undefined2)((uint)uVar6 >> 0x10);
  _DAT_0820103b = *(undefined4 *)(puVar5 + (uVar3 >> 0x18) * 4);
  *(uint *)(&sel_data)[on] = R0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x40]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x41] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R1 = 1;
  *(uint *)(&sel_data)[on] =
       *(uint *)(&alu_add16)[*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] & 0xffff
       | *(int *)((&alu_add16)[*(int *)(&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10]] +
                 (*(uint *)(&alu_add16)
                           [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + 4)] >> 0x10)
                 * 4) << 0x10;
  R3 = *(uint *)(&sel_data)[on];
  R2 = 3;
  alu_s = *(int *)((&alu_add16)[*(int *)((&alu_add16)[R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                  (*(uint *)((&alu_add16)
                             [*(int *)((&alu_add16)[R3 & 0xffff] + (uint)uRam0816c056 * 4)] + 4) >>
                  0x10) * 4) << 0x10;
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
  zf = zf & 0xffffff00;
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + (R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + (R3 >> 0x18) * 4) & 0xffffff00) * 4) * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + (R3 >> 0x18) * 4) & 0xffffff00) * 4) &
                           0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)((&xor)[sf] + of * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x880537ab;
  iVar1 = b0;
  puVar4 = (uint *)(&sel_data)[b0];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  R3 = *(uint *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(&
                                                  pop + *(int *)(&pop + *(int *)(fp + -0x200060)))))
                                                )));
  R2 = *(uint *)(&sel_data)[on];
  *(uint *)(&sel_data)[on] = R2;
  *(undefined4 *)(&sel_target)[on] = 0x880551a2;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x66]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x48] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  stack_temp = *(undefined **)(&sel_data)[on];
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = 0;
  stack_temp = (undefined *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88054c52;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x8804bc99;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x52]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x4c] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x61]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x4e] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R1 = 1;
  *(uint *)(&sel_data)[on] =
       *(uint *)((&alu_add16)
                 [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] + (uint)uRam0816c052 * 4)
                 ] + 4) & 0xffff |
       *(int *)((&alu_add16)
                [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] >> 0x10] + (uint)_alu_inv16 * 4)] +
               (*(uint *)((&alu_add16)
                          [*(int *)((&alu_add16)[*(uint *)(&sel_data)[on] & 0xffff] +
                                   (uint)uRam0816c052 * 4)] + 4) >> 0x10) * 4) << 0x10;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xa2]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x51] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  R3 = *(uint *)(&sel_data)[on];
  R2 = 0;
  alu_t = 0;
  DAT_08201002 = 0;
  uVar3 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R3 & 0xffff] + (uint)_alu_inv16 * 4)] + 4);
  uVar7 = *(uint *)((&alu_add16)[*(int *)((&alu_add16)[R3 >> 0x10] + (uint)_alu_inv16 * 4)] +
                   (uVar3 >> 0x10) * 4);
  _DAT_08200ffe = (undefined2)uVar7;
  alu_s = uVar3 & 0xffff | uVar7 << 0x10;
  alu_c = (byte)(uVar7 >> 0x10);
  uRam08201001 = (undefined)(uVar7 >> 0x18);
  cf = (&alu_false)[alu_c];
  alu_s._3_1_ = (byte)(uVar7 >> 8);
  sf = sf & 0xffffff00 | *(uint *)(&alu_b7 + (uint)alu_s._3_1_ * 4) & 0xff;
  zf = zf & 0xffffff00 |
       (uint)(byte)(&alu_false)
                   [(byte)(&alu_true)
                          [(uint)(byte)(&alu_true)
                                       [(uint)(byte)(&alu_true)
                                                    [(uint)(byte)(&alu_true)[uVar3 & 0xff] +
                                                     (uVar3 >> 8 & 0xff)] + (uVar7 & 0xff)] +
                           (uint)alu_s._3_1_]];
  of = of & 0xffffff00 |
       **(uint **)(*(int *)((&alu_cmp_of)[*(uint *)(&alu_b7 + (R3 >> 0x18) * 4)] +
                           *(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + (R3 >> 0x18) * 4) & 0xffffff00) * 4) * 4) +
                  *(int *)(&alu_b7 +
                          (*(uint *)(&alu_b7 +
                                    (*(uint *)(&alu_b7 + (R3 >> 0x18) * 4) & 0xffffff00) * 4) &
                           0xffffff00 | (uint)alu_s._3_1_) * 4) * 4) & 0xff;
  b0 = *(int *)((&and)[*(int *)(&alu_false + zf * 4)] + on * 4);
  *(undefined4 *)(&sel_target)[b0] = 0x88054866;
  iVar1 = b0;
  puVar4 = (uint *)(&sel_data)[b0];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[b0] = 0;
  stack_temp = (undefined *)0x1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x2;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = *(uint *)(&sel_data)[on];
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x880558bb;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x880501fa;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0xbb]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x58] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  stack_temp = &DAT_08058030;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R3 = 1;
  stack_temp = (undefined *)0x1;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  R2 = 0;
  stack_temp = (undefined *)0x0;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)R3;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  stack_temp = (undefined *)0x88055d44;
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(sp + -0x200068);
  *(undefined **)(&sel_data)[on] = stack_temp;
  *(undefined4 *)(&sel_target)[on] = 0x88049900;
  iVar1 = on;
  puVar4 = (uint *)(&sel_data)[on];
  *puVar4 = R0;
  puVar4[1] = R1;
  puVar4[2] = R2;
  puVar4[3] = R3;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = F0;
  puVar2[1] = F1;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = D0;
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x44]] +
                                                  (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x5d] *
                                                  4)] +
                                  (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5] * 4)] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined4 *)(&sel_data)[on] =
       *(undefined4 *)(&pop + *(int *)(&pop + *(int *)(&pop + *(int *)(sp + -0x200060))));
  R0 = 0;
  _alu_x = target;
  _alu_y = 0x88055f69;
  b1 = (uint)(byte)(&alu_eq)[target >> 8 & 0xff][0x5f];
  b2 = (uint)(byte)(&alu_eq)[target >> 0x10 & 0xff][5];
  b3 = (uint)(byte)(&alu_eq)[target >> 0x18][0x88];
  iVar1 = *(int *)((&and)[*(int *)((&and)[*(int *)((&and)[(byte)(&alu_eq)[target & 0xff][0x69]] +
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
  puVar2[1] = DAT_086011ac;
  puVar2 = (undefined4 *)(&sel_data)[iVar1];
  *puVar2 = jmp_d1;
  puVar2[1] = DAT_086011b4;
  *(undefined4 *)(&sel_on)[b0] = 1;
  *(undefined **)(&sel_data)[on] = fp;
  stack_temp = *(undefined **)sp;
  DAT_08201114 = *(undefined4 *)(sp + 4);
  *(undefined4 *)(&sel_data)[on] = *(undefined4 *)(&pop + *(int *)(sp + -0x200060));
  puVar2 = (undefined4 *)(&sel_data)[on];
  *puVar2 = stack_temp;
  puVar2[1] = DAT_08201114;
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
  puVar2[1] = DAT_08058074;
  puVar2[2] = D1;
  puVar2[3] = DAT_0805807c;
  *(undefined4 *)(&sel_on)[on] = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


