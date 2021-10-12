typedef unsigned char   undefined;

typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned long    ulong;
typedef unsigned int    undefined4;
typedef struct thread_state_hdr thread_state_hdr, *Pthread_state_hdr;

struct thread_state_hdr {
    dword flavor;
    dword count;
};

typedef ulong __darwin_size_t;

typedef __darwin_size_t size_t;

typedef longlong __int64_t;

typedef __int64_t __darwin_off_t;

typedef struct __sFILEX __sFILEX, *P__sFILEX;

struct __sFILEX {
};

typedef struct __sbuf __sbuf, *P__sbuf;

struct __sbuf {
    uchar * _base;
    int _size;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef __darwin_off_t fpos_t;

typedef struct __sFILE FILE;

struct __sFILE {
    uchar * _p;
    int _r;
    int _w;
    short _flags;
    short _file;
    struct __sbuf _bf;
    int _lbfsize;
    void * _cookie;
    int (* _close)(void *);
    int (* _read)(void *, char *, int);
    fpos_t (* _seek)(void *, fpos_t, int);
    int (* _write)(void *, char *, int);
    struct __sbuf _ub;
    struct __sFILEX * _extra;
    int _ur;
    uchar _ubuf[3];
    uchar _nbuf[1];
    struct __sbuf _lb;
    int _blksize;
    fpos_t _offset;
};

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
                    // WARNING: Could not recover jumptable at 0x00002680. Too many branches
                    // WARNING: Treating indirect jump as call
  (*dyld_lazy_symbol_binding_entry_point)();
  return;
}



void __dyld_func_lookup(void)

{
                    // WARNING: Could not recover jumptable at 0x00002690. Too many branches
                    // WARNING: Treating indirect jump as call
  (*dyld_func_lookup_pointer)();
  return;
}



undefined4 _main(uint param_1,uint param_2,char *param_3)

{
  int iVar2;
  undefined8 uVar1;
  uint uStack00000018;
  uint uStack0000001c;
  char *pcStack00000020;
  undefined4 local_20;
  
  uStack00000018 = param_1;
  uStack0000001c = param_2;
  pcStack00000020 = param_3;
  if ((int)param_1 < 2) {
    if ((int)param_1 < 0) {
      if ((int)param_1 < -0x48) {
        local_20 = _main(param_2,param_1,
                         "@n\'+,#\'/*{}w+/w#cdnr/+,{}r/*de}+,/*{*+,/w{%+,/w#q#n+,/#{l,+,/n{n+,/+#n+,/#;#q#n+,/+k#;*+,/\'r :\'d*\'3,}{w+K w\'K:\'+}e#\';dq#\'l q#\'+d\'K#!/+k#;q#\'r}eKK#}w\'r}eKK{nl]\'/#;#q#n\'){)#}w\'){){nl]\'/+#n\';d}rw\' i;# ){nl]!/n{n#\'; r{#w\'r nc{nl]\'/#{l,+\'K {rw\' iK{;[{nl]\'/w#q#n\'wk nw\' iwk{KK{nl]!/w{%\'l##w#\' i; :{nl]\'/*{q#\'ld;r\'}{nlwb!/*de}\'c ;;{nl\'-{}rw]\'/+,}##\'*}#nc,\',#nw]\'/+kd\'+e}+;#\'rdq#w! nr\'/ \') }+}{rl#\'{n\' \')# }\'+}##(!!/"
                        );
      }
      else {
        if ((int)param_1 < -0x32) {
          if (param_2 == (int)*param_3) {
            local_20 = ___sputc(param_3[0x1f],ZEXT48(__nl_symbol_ptr::___sF) + 0x58);
          }
          else {
            local_20 = _main(0xffffffffffffffbf,param_2,param_3 + 1);
          }
        }
        else {
          local_20 = _main((ulonglong)(*param_3 == '/') + (ulonglong)param_1,param_2,param_3 + 1);
        }
      }
    }
    else {
      if ((int)param_1 < 1) {
        if (*param_3 != '/') {
          uVar1 = _main(0xffffffffffffffc3,*param_3,
                        "!ek;dc i@bK\'(q)-[w]*%n+r3#l,{}:\nuwloca-O;m .vpbks,fxntdCeghiry");
          iVar2 = _main(0,uVar1,pcStack00000020 + 1);
          if (iVar2 == 0) {
            return 0;
          }
        }
        local_20 = 1;
      }
      else {
        local_20 = _main(2,2,"%s");
      }
    }
  }
  else {
    if ((int)param_1 < 3) {
      iVar2 = _main(0xffffffffffffffaa,0,param_3 + 1);
      iVar2 = _main(0xffffffffffffffa9,1 - (ulonglong)uStack0000001c,pcStack00000020 + iVar2);
      _main(0xffffffffffffffb1,0xfffffffffffffff3,pcStack00000020 + iVar2);
    }
    if ((int)uStack00000018 < (int)uStack0000001c) {
      _main((ulonglong)uStack00000018 + 1,uStack0000001c,pcStack00000020);
    }
    iVar2 = _main(0xffffffffffffffa2,(ulonglong)uStack00000018 - 0x1b,pcStack00000020);
    if ((iVar2 == 0) || (uStack00000018 != 2)) {
      local_20 = 0x10;
    }
    else {
      if ((int)uStack0000001c < 0xd) {
        local_20 = _main(2,(ulonglong)uStack0000001c + 1,"%s %d %d\n");
      }
      else {
        local_20 = 9;
      }
    }
  }
  return local_20;
}



uint ___sputc(uint param_1,FILE *param_2)

{
  uchar *puVar1;
  int iVar2;
  uchar uStack0000001b;
  uint uStack00000018;
  FILE *pFStack0000001c;
  uint local_20;
  
  iVar2 = param_2->_w + -1;
  param_2->_w = iVar2;
  uStack0000001b = (uchar)param_1;
  if ((iVar2 < 0) && ((param_2->_w < param_2->_lbfsize || (uStack0000001b == '\n')))) {
    uStack00000018 = param_1;
    pFStack0000001c = param_2;
    local_20 = __picsymbol_stub::___swbuf(param_1,param_2);
  }
  else {
    puVar1 = param_2->_p;
    *puVar1 = uStack0000001b;
    local_20 = param_1 & 0xff;
    param_2->_p = puVar1 + 1;
  }
  return local_20;
}



// dyld info library ordinal out of range1

void __picsymbol_stub::_exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x00002be8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_exit)(param_1);
  return;
}



// dyld info library ordinal out of range1

int __picsymbol_stub::_atexit(void *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00002c0c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_atexit)(param_1);
  return iVar1;
}



// dyld info library ordinal out of range1

void __picsymbol_stub::___keymgr_dwarf2_register_sections(void)

{
                    // WARNING: Could not recover jumptable at 0x00002c30. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::___keymgr_dwarf2_register_sections)();
  return;
}



// dyld info library ordinal out of range1

void __picsymbol_stub::__dyld_register_func_for_add_image(void)

{
                    // WARNING: Could not recover jumptable at 0x00002c78. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__dyld_register_func_for_add_image)();
  return;
}



// dyld info library ordinal out of range1

void __picsymbol_stub::__init_keymgr(void)

{
                    // WARNING: Could not recover jumptable at 0x00002c9c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__init_keymgr)();
  return;
}



// dyld info library ordinal out of range1

void __picsymbol_stub::_free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x00002cc0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_free)(param_1);
  return;
}



// dyld info library ordinal out of range1

void __picsymbol_stub::_abort(void)

{
                    // WARNING: Could not recover jumptable at 0x00002ce4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_abort)();
  return;
}



// dyld info library ordinal out of range1

void __picsymbol_stub::__keymgr_set_and_unlock_processwide_ptr(void)

{
                    // WARNING: Could not recover jumptable at 0x00002d08. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__keymgr_set_and_unlock_processwide_ptr)();
  return;
}



// dyld info library ordinal out of range1

void __picsymbol_stub::__keymgr_get_and_lock_processwide_ptr(void)

{
                    // WARNING: Could not recover jumptable at 0x00002d2c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__keymgr_get_and_lock_processwide_ptr)();
  return;
}



// dyld info library ordinal out of range1

void * __picsymbol_stub::_calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00002d50. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)__la_symbol_ptr::_calloc)(param_1,param_2);
  return pvVar1;
}



// dyld info library ordinal out of range1

int __picsymbol_stub::___swbuf(int param_1,FILE *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00002d74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::___swbuf)(param_1,param_2);
  return iVar1;
}


