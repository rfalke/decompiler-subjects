typedef unsigned char   undefined;

typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
typedef struct thread_state_hdr thread_state_hdr, *Pthread_state_hdr;

struct thread_state_hdr {
    dword flavor;
    dword count;
};

typedef int __int32_t;

typedef __int32_t __darwin_dev_t;

typedef __darwin_dev_t dev_t;

typedef uint __uint32_t;

typedef __uint32_t __darwin_gid_t;

typedef ulonglong __uint64_t;

typedef longlong __int64_t;

typedef __int64_t __darwin_off_t;

typedef __uint32_t __darwin_uid_t;

typedef ushort __uint16_t;

typedef __uint16_t __darwin_mode_t;

typedef __uint64_t __darwin_ino64_t;

typedef long __darwin_time_t;

typedef ulong __darwin_size_t;

typedef __int64_t __darwin_blkcnt_t;

typedef __int32_t __darwin_blksize_t;

typedef struct timespec timespec, *Ptimespec;

struct timespec {
    __darwin_time_t tv_sec;
    long tv_nsec;
};

typedef __darwin_uid_t uid_t;

typedef __uint16_t nlink_t;

typedef struct stat stat, *Pstat;

typedef __darwin_mode_t mode_t;

typedef __darwin_gid_t gid_t;

typedef __darwin_off_t off_t;

typedef __darwin_blkcnt_t blkcnt_t;

typedef __darwin_blksize_t blksize_t;

struct stat {
    dev_t st_dev;
    mode_t st_mode;
    nlink_t st_nlink;
    __darwin_ino64_t st_ino;
    uid_t st_uid;
    gid_t st_gid;
    dev_t st_rdev;
    struct timespec st_atimespec;
    struct timespec st_mtimespec;
    struct timespec st_ctimespec;
    struct timespec st_birthtimespec;
    off_t st_size;
    blkcnt_t st_blocks;
    blksize_t st_blksize;
    __uint32_t st_flags;
    __uint32_t st_gen;
    __int32_t st_lspare;
    __int64_t st_qspare[2];
};

typedef __darwin_size_t size_t;

typedef struct lc_str lc_str, *Plc_str;

struct lc_str {
    dword offset;
};

typedef struct thread_command thread_command, *Pthread_command;

typedef struct PPC_THREAD_STATE PPC_THREAD_STATE, *PPPC_THREAD_STATE;

struct PPC_THREAD_STATE {
    dword srr0;
    dword srr1;
    dword r0;
    dword r1;
    dword r2;
    dword r3;
    dword r4;
    dword r5;
    dword r6;
    dword r7;
    dword r8;
    dword r9;
    dword r10;
    dword r11;
    dword r12;
    dword r13;
    dword r14;
    dword r15;
    dword r16;
    dword r17;
    dword r18;
    dword r19;
    dword r20;
    dword r21;
    dword r22;
    dword r23;
    dword r24;
    dword r25;
    dword r26;
    dword r27;
    dword r28;
    dword r29;
    dword r30;
    dword r31;
    dword cr;
    dword xer;
    dword lr;
    dword ctr;
    dword mq;
    dword vrsave;
};

struct thread_command {
    dword cmd;
    dword cmdsize;
    struct thread_state_hdr threadStateHeader;
    struct PPC_THREAD_STATE threadState;
};

typedef struct dylib dylib, *Pdylib;

struct dylib {
    struct lc_str name;
    dword timestamp;
    dword current_version;
    dword compatibility_version;
};

typedef struct section section, *Psection;

struct section {
    char sectname[16];
    char segname[16];
    dword addr;
    dword size;
    dword offset;
    dword align;
    dword reloff;
    dword nrelocs;
    dword flags;
    dword reserved1;
    dword reserved2;
};

typedef struct twolevel_hints_command twolevel_hints_command, *Ptwolevel_hints_command;

struct twolevel_hints_command {
    dword cmd;
    dword cmdsize;
    dword offset;
    dword nhints;
};

typedef struct dysymtab_command dysymtab_command, *Pdysymtab_command;

struct dysymtab_command {
    dword cmd;
    dword cmdsize;
    dword ilocalsym;
    dword nlocalsym;
    dword iextdefsym;
    dword nextdefsym;
    dword iundefsym;
    dword nundefsym;
    dword tocoff;
    dword ntoc;
    dword modtaboff;
    dword nmodtab;
    dword extrefsymoff;
    dword nextrefsyms;
    dword indirectsymoff;
    dword nindirectsyms;
    dword extreloff;
    dword nextrel;
    dword locreloff;
    dword nlocrel;
};

typedef struct segment_command segment_command, *Psegment_command;

struct segment_command {
    dword cmd;
    dword cmdsize;
    char segname[16];
    dword vmaddr;
    dword vmsize;
    dword fileoff;
    dword filesize;
    dword maxprot;
    dword initprot;
    dword nsects;
    dword flags;
};

typedef struct dylib_command dylib_command, *Pdylib_command;

struct dylib_command {
    dword cmd;
    dword cmdsize;
    struct dylib dylib;
};

typedef struct symtab_command symtab_command, *Psymtab_command;

struct symtab_command {
    dword cmd;
    dword cmdsize;
    dword symoff;
    dword nsyms;
    dword stroff;
    dword strsize;
};

typedef struct mach_header mach_header, *Pmach_header;

struct mach_header {
    dword magic;
    dword cputype;
    dword cpusubtype;
    dword filetype;
    dword ncmds;
    dword sizeofcmds;
    dword flags;
};

typedef struct dylinker_command dylinker_command, *Pdylinker_command;

struct dylinker_command {
    dword cmd;
    dword cmdsize;
    struct lc_str name;
};




void entry(void)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  undefined8 unaff_r28;
  undefined8 unaff_r29;
  int *piVar10;
  undefined8 unaff_r30;
  char **ppcVar11;
  undefined8 unaff_r31;
  int local_res0;
  void *apvStack128 [4];
  undefined4 uStack112;
  undefined4 uStack108;
  undefined4 uStack104;
  undefined4 uStack100;
  undefined4 *puStack96;
  undefined4 uStack88;
  undefined4 auStack32 [8];
  
  puStack96 = auStack32;
  uVar4 = 0;
  auStack32[0] = 0;
  lVar7 = ZEXT48(register0x0000000c) + 4;
  lVar8 = lVar7 + (ulonglong)(uint)((local_res0 + 1) * 4);
  uStack88 = 0x17bc;
  uVar5 = __start();
  trapWord(0x1f,uVar4,uVar4);
  uStack112 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
  uStack108 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
  uStack104 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
  uStack100 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
  __dyld_init_check();
  _NXArgc = (undefined4)uVar5;
  ppcVar11 = (char **)lVar7;
  piVar10 = (int *)lVar8;
  _NXArgv = ppcVar11;
  _environ = piVar10;
  if (*(code **)_mach_init_routine != (code *)0x0) {
    (**(code **)_mach_init_routine)();
  }
  if (*(code **)__cthread_init_routine != (code *)0x0) {
    (**(code **)__cthread_init_routine)();
  }
  ___keymgr_dwarf2_register_sections();
  if (*(int *)_pointer_to__darwin_gcc3_preregister_frame_info != 0) {
    (*(code *)_pointer_to__darwin_gcc3_preregister_frame_info)();
  }
  __call_mod_init_funcs();
  if (*(int *)_pointer_to_objcInit != 0) {
    (*(code *)_pointer_to_objcInit)();
  }
  __dyld_func_lookup("__dyld_mod_term_funcs",apvStack128);
  if (apvStack128[0] != (void *)0x0) {
    _atexit(apvStack128[0]);
  }
  *(undefined4 *)_errno = 0;
  pcVar3 = *ppcVar11;
  if (pcVar3 != (char *)0x0) {
    pcVar9 = (char *)0x0;
    iVar6 = 0;
    cVar2 = *pcVar3;
    while (cVar2 != '\0') {
      if (pcVar3[iVar6] == '/') {
        pcVar9 = pcVar3 + iVar6;
      }
      iVar6 = iVar6 + 1;
      pcVar3 = *ppcVar11;
      cVar2 = pcVar3[iVar6];
    }
    if (pcVar9 == (char *)0x0) {
      ___progname = *ppcVar11;
    }
    else {
      ___progname = pcVar9 + 1;
    }
  }
  iVar6 = *piVar10;
  lVar1 = lVar8;
  while (iVar6 != 0) {
    lVar1 = lVar1 + 4;
    iVar6 = *(int *)lVar1;
  }
  iVar6 = _main(uVar5,lVar7,lVar8,lVar1 + 4);
                    // WARNING: Subroutine does not return
  _exit(iVar6);
}



void __start(undefined8 param_1,char **param_2,int *param_3)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined8 unaff_r28;
  undefined8 unaff_r29;
  undefined8 unaff_r30;
  undefined8 unaff_r31;
  void *local_20 [4];
  undefined4 local_10;
  undefined4 uStack12;
  undefined4 uStack8;
  undefined4 uStack4;
  
  local_10 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
  uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
  uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
  uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
  __dyld_init_check();
  _NXArgc = (undefined4)param_1;
  _NXArgv = param_2;
  _environ = param_3;
  if (*(code **)_mach_init_routine != (code *)0x0) {
    (**(code **)_mach_init_routine)();
  }
  if (*(code **)__cthread_init_routine != (code *)0x0) {
    (**(code **)__cthread_init_routine)();
  }
  ___keymgr_dwarf2_register_sections();
  if (*(int *)_pointer_to__darwin_gcc3_preregister_frame_info != 0) {
    (*(code *)_pointer_to__darwin_gcc3_preregister_frame_info)();
  }
  __call_mod_init_funcs();
  if (*(int *)_pointer_to_objcInit != 0) {
    (*(code *)_pointer_to_objcInit)();
  }
  __dyld_func_lookup("__dyld_mod_term_funcs",local_20);
  if (local_20[0] != (void *)0x0) {
    _atexit(local_20[0]);
  }
  *(undefined4 *)_errno = 0;
  pcVar2 = *param_2;
  if (pcVar2 != (char *)0x0) {
    pcVar5 = (char *)0x0;
    iVar4 = 0;
    cVar1 = *pcVar2;
    while (cVar1 != '\0') {
      if (pcVar2[iVar4] == '/') {
        pcVar5 = pcVar2 + iVar4;
      }
      iVar4 = iVar4 + 1;
      pcVar2 = *param_2;
      cVar1 = pcVar2[iVar4];
    }
    if (pcVar5 == (char *)0x0) {
      ___progname = *param_2;
    }
    else {
      ___progname = pcVar5 + 1;
    }
  }
  iVar4 = *param_3;
  piVar3 = param_3;
  while (iVar4 != 0) {
    piVar3 = piVar3 + 1;
    iVar4 = *piVar3;
  }
  iVar4 = _main(param_1,param_2,param_3,piVar3 + 1);
                    // WARNING: Subroutine does not return
  _exit(iVar4);
}



void __call_mod_init_funcs(void)

{
  code *local_20 [8];
  
  __dyld_func_lookup("__dyld_make_delayed_module_initializer_calls",local_20);
  (*local_20[0])();
  return;
}



void __dyld_init_check(void)

{
  if (dyld_lazy_symbol_binding_entry_point != 0) {
    return;
  }
  syscall();
  syscall();
  trapWord(0x1f,1,1);
                    // WARNING: Treating indirect jump as call
  (*(code *)0x0)(0x3b,
                 "The kernel support for the dynamic linker is not present to run this program.\n",
                 0x4e);
  return;
}



void dyld_stub_binding_helper(void)

{
                    // WARNING: Could not recover jumptable at 0x000019d8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*dyld_lazy_symbol_binding_entry_point)();
  return;
}



void __dyld_func_lookup(void)

{
                    // WARNING: Could not recover jumptable at 0x000019e8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*dyld_func_lookup_pointer)();
  return;
}



undefined8 _main(undefined4 param_1,int param_2)

{
  undefined8 unaff_r30;
  undefined8 unaff_r31;
  undefined4 param_11;
  int param_12;
  uint local_80;
  uint local_7c;
  ushort local_78;
  ushort local_76;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_60;
  uint local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_20;
  undefined4 local_8;
  undefined4 uStack4;
  
  local_8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
  uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
  param_11 = param_1;
  param_12 = param_2;
  local_20 = _stat(*(char **)(param_2 + 4),(stat *)&local_80);
  _printf("res: %i\n",(ulonglong)local_20);
  _printf("dev: %i\n",(ulonglong)local_80);
  _printf("ino: %i\n",(ulonglong)local_7c);
  _printf("mode: %i\n",(ulonglong)local_78);
  _printf("nlink: %i\n",(ulonglong)local_76);
  _printf("uid: %i\n",(ulonglong)local_74);
  _printf("gid: %i\n",(ulonglong)local_70);
  _printf("rdev: %i\n",(ulonglong)local_6c);
  _printf("size: %i\n",(ulonglong)local_50,(ulonglong)local_4c);
  _printf("blksize: %i\n",(ulonglong)local_40);
  _printf("blocks: %i\n",(ulonglong)local_48,(ulonglong)local_44);
  _printf("atime: %i\n",(ulonglong)local_68);
  _printf("mtime: %i\n",(ulonglong)local_60);
  _printf("ctime: %i\n",(ulonglong)local_58);
  return 0;
}



// dyld info library ordinal out of range1

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x00001d04. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)_exit)(param_1);
  return;
}



// dyld info library ordinal out of range1

int _atexit(void *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00001d28. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)_atexit)(param_1);
  return iVar1;
}



// dyld info library ordinal out of range1

void ___keymgr_dwarf2_register_sections(void)

{
                    // WARNING: Could not recover jumptable at 0x00001d4c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)___keymgr_dwarf2_register_sections)();
  return;
}



// dyld info library ordinal out of range1

void __dyld_register_func_for_add_image(void)

{
                    // WARNING: Could not recover jumptable at 0x00001d94. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__dyld_register_func_for_add_image)();
  return;
}



// dyld info library ordinal out of range1

void __init_keymgr(void)

{
                    // WARNING: Could not recover jumptable at 0x00001db8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__init_keymgr)();
  return;
}



// dyld info library ordinal out of range1

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x00001ddc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)_free)(param_1);
  return;
}



// dyld info library ordinal out of range1

void _abort(void)

{
                    // WARNING: Could not recover jumptable at 0x00001e00. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)_abort)();
  return;
}



// dyld info library ordinal out of range1

void __keymgr_set_and_unlock_processwide_ptr(void)

{
                    // WARNING: Could not recover jumptable at 0x00001e24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__keymgr_set_and_unlock_processwide_ptr)();
  return;
}



// dyld info library ordinal out of range1

void __keymgr_get_and_lock_processwide_ptr(void)

{
                    // WARNING: Could not recover jumptable at 0x00001e48. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__keymgr_get_and_lock_processwide_ptr)();
  return;
}



// dyld info library ordinal out of range1

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00001e6c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)_calloc)(param_1,param_2);
  return pvVar1;
}



// dyld info library ordinal out of range1

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00001e90. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)_printf)(param_1);
  return iVar1;
}



// dyld info library ordinal out of range1

int _stat(char *param_1,stat *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00001eb4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)_stat)(param_1,param_2);
  return iVar1;
}


