typedef unsigned char   undefined;

typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
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
  int in_stack_00000000;
  
                    // WARNING: Subroutine does not return
  __start(in_stack_00000000,&stack0x00000004,&stack0x00000004 + (in_stack_00000000 + 1) * 4);
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
  if (*(code **)__nl_symbol_ptr::_mach_init_routine != (code *)0x0) {
    (**(code **)__nl_symbol_ptr::_mach_init_routine)();
  }
  if (*(code **)__nl_symbol_ptr::__cthread_init_routine != (code *)0x0) {
    (**(code **)__nl_symbol_ptr::__cthread_init_routine)();
  }
  __picsymbol_stub::___keymgr_dwarf2_register_sections();
  if (*(int *)_pointer_to__darwin_gcc3_preregister_frame_info != 0) {
    (*(code *)_pointer_to__darwin_gcc3_preregister_frame_info)();
  }
  __call_mod_init_funcs();
  if (*(int *)_pointer_to_objcInit != 0) {
    (*(code *)_pointer_to_objcInit)();
  }
  __dyld_func_lookup("__dyld_mod_term_funcs",local_20);
  if (local_20[0] != (void *)0x0) {
    __picsymbol_stub::_atexit(local_20[0]);
  }
  *(undefined4 *)__nl_symbol_ptr::_errno = 0;
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
  __picsymbol_stub::_exit(iVar4);
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
                    // WARNING: Could not recover jumptable at 0x00001b28. Too many branches
                    // WARNING: Treating indirect jump as call
  (*dyld_lazy_symbol_binding_entry_point)();
  return;
}



void __dyld_func_lookup(void)

{
                    // WARNING: Could not recover jumptable at 0x00001b38. Too many branches
                    // WARNING: Treating indirect jump as call
  (*dyld_func_lookup_pointer)();
  return;
}



uint _main(undefined4 param_1,undefined4 param_2)

{
  undefined8 unaff_r30;
  undefined8 unaff_r31;
  undefined4 uStack00000018;
  undefined4 uStack0000001c;
  undefined auStack128 [120];
  undefined4 local_8;
  undefined4 uStack4;
  
  local_8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
  uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
  uStack00000018 = param_1;
  uStack0000001c = param_2;
  auStack128._96_4_ = __picsymbol_stub::_stat("test/source/stattest.c",(stat *)auStack128);
  __picsymbol_stub::_printf
            ("Stat returns %d; size of file is %d\n",(ulonglong)auStack128._96_4_,
             (ulonglong)auStack128._48_4_,(ulonglong)auStack128._52_4_);
  return auStack128._96_4_;
}



// dyld info library ordinal out of range1

void __picsymbol_stub::_exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x00001d70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_exit)(param_1);
  return;
}



// dyld info library ordinal out of range1

int __picsymbol_stub::_atexit(void *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00001d94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_atexit)(param_1);
  return iVar1;
}



// dyld info library ordinal out of range1

void __picsymbol_stub::___keymgr_dwarf2_register_sections(void)

{
                    // WARNING: Could not recover jumptable at 0x00001db8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::___keymgr_dwarf2_register_sections)();
  return;
}



// dyld info library ordinal out of range1

void __picsymbol_stub::__dyld_register_func_for_add_image(void)

{
                    // WARNING: Could not recover jumptable at 0x00001e00. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__dyld_register_func_for_add_image)();
  return;
}



// dyld info library ordinal out of range1

void __picsymbol_stub::__init_keymgr(void)

{
                    // WARNING: Could not recover jumptable at 0x00001e24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__init_keymgr)();
  return;
}



// dyld info library ordinal out of range1

void __picsymbol_stub::_free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x00001e48. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_free)(param_1);
  return;
}



// dyld info library ordinal out of range1

void __picsymbol_stub::_abort(void)

{
                    // WARNING: Could not recover jumptable at 0x00001e6c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_abort)();
  return;
}



// dyld info library ordinal out of range1

void __picsymbol_stub::__keymgr_set_and_unlock_processwide_ptr(void)

{
                    // WARNING: Could not recover jumptable at 0x00001e90. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__keymgr_set_and_unlock_processwide_ptr)();
  return;
}



// dyld info library ordinal out of range1

void __picsymbol_stub::__keymgr_get_and_lock_processwide_ptr(void)

{
                    // WARNING: Could not recover jumptable at 0x00001eb4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__keymgr_get_and_lock_processwide_ptr)();
  return;
}



// dyld info library ordinal out of range1

void * __picsymbol_stub::_calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00001ed8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)__la_symbol_ptr::_calloc)(param_1,param_2);
  return pvVar1;
}



// dyld info library ordinal out of range1

int __picsymbol_stub::_printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00001efc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_printf)(param_1);
  return iVar1;
}



// dyld info library ordinal out of range1

int __picsymbol_stub::_stat(char *param_1,stat *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00001f20. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_stat)(param_1,param_2);
  return iVar1;
}


