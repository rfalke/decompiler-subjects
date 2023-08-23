typedef unsigned char   undefined;

typedef unsigned int    dword;
typedef unsigned long    ulong;
typedef unsigned int    undefined4;
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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(void)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  undefined4 unaff_r28;
  undefined4 unaff_r29;
  int *piVar12;
  undefined4 unaff_r30;
  char **ppcVar13;
  undefined4 unaff_r31;
  undefined4 uVar14;
  code *pcVar15;
  uint in_stack_00000000;
  
  uVar4 = ZEXT48(&stack0x00000000) - 4 & 0xffffffe0;
  uVar5 = 0;
  puVar6 = (undefined4 *)uVar4;
  *puVar6 = 0;
  puVar6[-0x10] = puVar6;
  lVar9 = ZEXT48(&stack0x00000000) + 4;
  lVar10 = lVar9 + ((ulonglong)in_stack_00000000 + 1 & 0x3fffffff) * 4;
  uVar14 = 0x1938;
  uVar7 = __start();
  trapWord(0x1f,uVar5,uVar5);
  puVar6[-0x14] = unaff_r28;
  puVar6[-0x13] = unaff_r29;
  puVar6[-0x12] = unaff_r30;
  puVar6[-0x11] = unaff_r31;
  puVar6[-0xe] = uVar14;
  puVar6[-0x28] = puVar6 + -0x10;
  __dyld_init_check();
  __NXArgc = (undefined4)uVar7;
  ppcVar13 = (char **)lVar9;
  piVar12 = (int *)lVar10;
  __NXArgv = ppcVar13;
  __environ = piVar12;
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
  __dyld_func_lookup("__dyld_mod_term_funcs",uVar4 - 0x60);
  if ((void *)puVar6[-0x18] != (void *)0x0) {
    __picsymbol_stub::_atexit((void *)puVar6[-0x18]);
  }
  *(undefined4 *)__nl_symbol_ptr::_errno = 0;
  pcVar3 = *ppcVar13;
  if (pcVar3 != (char *)0x0) {
    pcVar11 = (char *)0x0;
    iVar8 = 0;
    cVar2 = *pcVar3;
    while (cVar2 != '\0') {
      if (pcVar3[iVar8] == '/') {
        pcVar11 = pcVar3 + iVar8;
      }
      iVar8 = iVar8 + 1;
      pcVar3 = *ppcVar13;
      cVar2 = pcVar3[iVar8];
    }
    if (pcVar11 == (char *)0x0) {
      ___progname = *ppcVar13;
    }
    else {
      ___progname = pcVar11 + 1;
    }
  }
  iVar8 = *piVar12;
  lVar1 = lVar10;
  while (iVar8 != 0) {
    lVar1 = lVar1 + 4;
    iVar8 = *(int *)lVar1;
  }
  iVar8 = _main(uVar7,lVar9,lVar10,lVar1 + 4);
  pcVar15 = __call_mod_init_funcs;
  __picsymbol_stub::_exit(iVar8);
  puVar6[-0x29] = 0x1950;
  puVar6[-0x26] = pcVar15;
  puVar6[-0x40] = puVar6 + -0x28;
  __dyld_func_lookup("__dyld_make_delayed_module_initializer_calls",uVar4 - 0xc0);
  (*(code *)puVar6[-0x30])();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __start(undefined8 param_1,char **param_2,int *param_3)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  code *apcStack_80 [7];
  undefined4 uStack_64;
  undefined *local_60;
  code *pcStack_58;
  void *local_20 [8];
  
  local_60 = (undefined *)register0x0000000c;
  __dyld_init_check();
  __NXArgc = (undefined4)param_1;
  __NXArgv = param_2;
  __environ = param_3;
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
  pcStack_58 = __call_mod_init_funcs;
  __picsymbol_stub::_exit(iVar4);
  uStack_64 = 0x1950;
  __dyld_func_lookup("__dyld_make_delayed_module_initializer_calls",apcStack_80);
  (*apcStack_80[0])();
  return;
}



void __call_mod_init_funcs(void)

{
  code *local_20 [8];
  
  __dyld_func_lookup("__dyld_make_delayed_module_initializer_calls",local_20);
  (*local_20[0])();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __dyld_init_check(void)

{
  if (_dyld_lazy_symbol_binding_entry_point != 0) {
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __dyld_func_lookup(void)

{
                    // WARNING: Could not recover jumptable at 0x00001b64. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_dyld_func_lookup_pointer)();
  return;
}



void ___darwin_gcc3_preregister_frame_info(void)

{
  __picsymbol_stub::__init_keymgr();
  if ((*(int *)(__nl_symbol_ptr::___keymgr_global + 8) != 0) &&
     (2 < *(ushort *)(*(int *)(__nl_symbol_ptr::___keymgr_global + 8) + 4))) {
    return;
  }
  __picsymbol_stub::__dyld_register_func_for_add_image
            (PTR__darwin_unwind_dyld_add_image_hook_0000201c);
  __picsymbol_stub::__dyld_register_func_for_remove_image
            (PTR__darwin_unwind_dyld_remove_image_hook_00002018);
  return;
}



undefined8 _main(void)

{
  uint local_20;
  int local_1c;
  
  local_20 = 0;
  for (local_1c = 0; local_1c < 10; local_1c = local_1c + 1) {
    local_20 = local_20 + *(int *)(&_a + local_1c * 4);
  }
  __picsymbol_stub::_printf("Sum is %d\n",(ulonglong)local_20);
  return 0;
}



void __picsymbol_stub::_exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x00001dc8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_exit)(param_1);
  return;
}



int __picsymbol_stub::_atexit(void *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00001dec. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_atexit)(param_1);
  return iVar1;
}



void __picsymbol_stub::___keymgr_dwarf2_register_sections(void)

{
                    // WARNING: Could not recover jumptable at 0x00001e10. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::___keymgr_dwarf2_register_sections)();
  return;
}



void __picsymbol_stub::__dyld_register_func_for_remove_image(void)

{
                    // WARNING: Could not recover jumptable at 0x00001e34. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__dyld_register_func_for_remove_image)();
  return;
}



void __picsymbol_stub::__dyld_register_func_for_add_image(void)

{
                    // WARNING: Could not recover jumptable at 0x00001e58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__dyld_register_func_for_add_image)();
  return;
}



void __picsymbol_stub::__init_keymgr(void)

{
                    // WARNING: Could not recover jumptable at 0x00001e7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__init_keymgr)();
  return;
}



void __picsymbol_stub::_free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x00001ea0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_free)(param_1);
  return;
}



void __picsymbol_stub::_abort(void)

{
                    // WARNING: Could not recover jumptable at 0x00001ec4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_abort)();
  return;
}



void __picsymbol_stub::__keymgr_set_and_unlock_processwide_ptr(void)

{
                    // WARNING: Could not recover jumptable at 0x00001ee8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__keymgr_set_and_unlock_processwide_ptr)();
  return;
}



void __picsymbol_stub::__keymgr_get_and_lock_processwide_ptr(void)

{
                    // WARNING: Could not recover jumptable at 0x00001f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__keymgr_get_and_lock_processwide_ptr)();
  return;
}



void * __picsymbol_stub::_calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00001f30. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)__la_symbol_ptr::_calloc)(param_1,param_2);
  return pvVar1;
}



int __picsymbol_stub::_printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00001f54. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_printf)(param_1);
  return iVar1;
}


