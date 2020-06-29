typedef unsigned char   undefined;

typedef unsigned int    dword;
typedef unsigned long    ulong;
typedef unsigned int    undefined4;
typedef unsigned short    word;
typedef struct thread_state_hdr thread_state_hdr, *Pthread_state_hdr;

struct thread_state_hdr {
    dword flavor;
    dword count;
};

typedef ulong __darwin_size_t;

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

typedef struct objc_method_list_0_ objc_method_list_0_, *Pobjc_method_list_0_;

struct objc_method_list_0_ {
    void * obsolete;
    dword method_count;
};

typedef struct objc_method_list objc_method_list, *Pobjc_method_list;

struct objc_method_list {
    dword ivar_count;
};

typedef struct objc_method_list_1_ objc_method_list_1_, *Pobjc_method_list_1_;

typedef struct objc_method objc_method, *Pobjc_method;

struct objc_method {
    char * method_name;
    char * method_types;
    void * method_imp;
};

struct objc_method_list_1_ {
    struct objc_method_list_0_ * obsolete;
    dword method_count;
    struct objc_method method_list[1];
};

typedef struct objc_symtab_1_0_ objc_symtab_1_0_, *Pobjc_symtab_1_0_;

typedef struct objc_class objc_class, *Pobjc_class;

typedef struct objc_metaclass objc_metaclass, *Pobjc_metaclass;

typedef struct objc_protocol_list objc_protocol_list, *Pobjc_protocol_list;

struct objc_protocol_list {
    struct objc_protocol_list * next;
    dword count;
};

struct objc_class {
    struct objc_metaclass * isa;
    char * super_class;
    char * name;
    dword version;
    dword info;
    dword instance_size;
    struct objc_method_list * instance_vars;
    struct objc_method_list * method_lists;
    dword cache;
    struct objc_protocol_list * protocols;
    dword unknown0;
    dword unknown1;
};

struct objc_symtab_1_0_ {
    dword sel_ref_cnt;
    dword refs;
    word cls_def_cnt;
    word cat_def_cnt;
    struct objc_class * class0;
};

struct objc_metaclass {
    char * isa;
    char * super_class;
    char * name;
    dword version;
    dword info;
    dword instance_size;
    struct objc_method_list * instance_vars;
    struct objc_method_list * method_lists;
    dword cache;
    struct objc_protocol_list * protocols;
    dword unknown0;
    dword unknown1;
};

typedef struct objc_module objc_module, *Pobjc_module;

typedef struct objc_symtab objc_symtab, *Pobjc_symtab;

struct objc_module {
    dword version;
    dword size;
    char * name;
    struct objc_symtab * symtab;
};

struct objc_symtab {
    dword sel_ref_cnt;
    dword refs;
    word cls_def_cnt;
    word cat_def_cnt;
};

typedef dword ID;

typedef dword SEL;




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

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
  uStack88 = 0x28dc;
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
  (*(code *)&___darwin_gcc3_preregister_frame_info)();
  __call_mod_init_funcs();
  if (___objcInit != 0) {
    __objcInit();
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

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
  (*(code *)&___darwin_gcc3_preregister_frame_info)();
  __call_mod_init_funcs();
  if (___objcInit != 0) {
    __objcInit();
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
                    // WARNING: Could not recover jumptable at 0x00002af8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*dyld_lazy_symbol_binding_entry_point)();
  return;
}



void __dyld_func_lookup(void)

{
                    // WARNING: Could not recover jumptable at 0x00002b08. Too many branches
                    // WARNING: Treating indirect jump as call
  (*dyld_func_lookup_pointer)();
  return;
}



// Function Stack Size: 0x0 bytes

ID world(ID param_1,SEL param_2,undefined param_3,undefined param_4,undefined param_5,
        undefined param_6,undefined param_7,undefined param_8,undefined4 param_9,undefined param_10,
        undefined4 param_11,undefined4 param_12)

{
  int in_r12;
  ID in_LR;
  
  _printf((char *)(in_r12 + 0x310),param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return in_LR;
}



void _main(undefined8 param_1,undefined8 param_2,undefined param_3,undefined param_4,
          undefined param_5,undefined param_6,undefined8 param_7,undefined param_8)

{
  ID IVar1;
  undefined4 in_stack_ffffffa8;
  undefined in_stack_ffffffaf;
  undefined4 in_stack_ffffffb8;
  undefined4 in_stack_ffffffbc;
  
  IVar1 = _objc_msgSend("Control","new");
  do {
    world(IVar1,(SEL)"world",param_3,param_4,param_5,param_6,4,param_8,in_stack_ffffffa8,
          in_stack_ffffffaf,in_stack_ffffffb8,in_stack_ffffffbc);
  } while( true );
}



// dyld info library ordinal out of range2

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x00002d70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)_exit)(param_1);
  return;
}



// dyld info library ordinal out of range2

int _atexit(void *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00002d94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)_atexit)(param_1);
  return iVar1;
}



// dyld info library ordinal out of range2

void ___keymgr_dwarf2_register_sections(void)

{
                    // WARNING: Could not recover jumptable at 0x00002db8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)___keymgr_dwarf2_register_sections)();
  return;
}



// dyld info library ordinal out of range2

void __dyld_register_func_for_add_image(void)

{
                    // WARNING: Could not recover jumptable at 0x00002e00. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__dyld_register_func_for_add_image)();
  return;
}



// dyld info library ordinal out of range2

void __init_keymgr(void)

{
                    // WARNING: Could not recover jumptable at 0x00002e24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__init_keymgr)();
  return;
}



// dyld info library ordinal out of range2

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x00002e48. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)_free)(param_1);
  return;
}



// dyld info library ordinal out of range2

void _abort(void)

{
                    // WARNING: Could not recover jumptable at 0x00002e6c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)_abort)();
  return;
}



// dyld info library ordinal out of range2

void __keymgr_set_and_unlock_processwide_ptr(void)

{
                    // WARNING: Could not recover jumptable at 0x00002e90. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__keymgr_set_and_unlock_processwide_ptr)();
  return;
}



// dyld info library ordinal out of range2

void __keymgr_get_and_lock_processwide_ptr(void)

{
                    // WARNING: Could not recover jumptable at 0x00002eb4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__keymgr_get_and_lock_processwide_ptr)();
  return;
}



// dyld info library ordinal out of range2

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00002ed8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)_calloc)(param_1,param_2);
  return pvVar1;
}



// /usr/lib/libSystem.B.dylib

void _objc_msgSend(void)

{
                    // WARNING: Could not recover jumptable at 0x00002efc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)_objc_msgSend)();
  return;
}



// dyld info library ordinal out of range2

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00002f20. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)_printf)(param_1);
  return iVar1;
}


