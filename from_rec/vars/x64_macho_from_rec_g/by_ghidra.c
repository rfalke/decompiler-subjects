typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef struct __program_vars __program_vars, *P__program_vars;

struct __program_vars {
    void * mh; // pointer to __mh_execute_header
    qword * NXArgcPtr; // pointer to argc
    char * * * NXArgvPtr; // pointer to argv
    char * * * environPtr; // pointer to environment
    char * * __prognamePtr; // pointer to program name
};

typedef struct thread_state_hdr thread_state_hdr, *Pthread_state_hdr;

struct thread_state_hdr {
    dword flavor;
    dword count;
};

typedef struct uuid_command uuid_command, *Puuid_command;

struct uuid_command {
    dword cmd;
    dword cmdsize;
    byte uuid[16];
};

typedef struct lc_str lc_str, *Plc_str;

struct lc_str {
    dword offset;
};

typedef struct thread_command thread_command, *Pthread_command;

typedef struct x86_THREAD_STATE64 x86_THREAD_STATE64, *Px86_THREAD_STATE64;

struct x86_THREAD_STATE64 {
    qword rax;
    qword rbx;
    qword cx;
    qword rdx;
    qword rdi;
    qword rsi;
    qword rbp;
    qword rsp;
    qword r8;
    qword r9;
    qword r10;
    qword r11;
    qword r12;
    qword r13;
    qword r14;
    qword r15;
    qword rip;
    qword rflags;
    qword cs;
    qword fs;
    qword gs;
};

struct thread_command {
    dword cmd;
    dword cmdsize;
    struct thread_state_hdr threadStateHeader;
    struct x86_THREAD_STATE64 threadState;
};

typedef struct dyld_info_command dyld_info_command, *Pdyld_info_command;

struct dyld_info_command {
    dword cmd;
    dword cmdsize;
    dword rebase_off;
    dword rebase_size;
    dword bind_off;
    dword bind_size;
    dword weak_bind_off;
    dword weak_bind_size;
    dword lazy_bind_off;
    dword lazy_bind_size;
    dword export_off;
    dword export_size;
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
    qword addr;
    qword size;
    dword offset;
    dword align;
    dword reloff;
    dword nrelocs;
    dword flags;
    dword reserved1;
    dword reserved2;
    dword reserved3;
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
    qword vmaddr;
    qword vmsize;
    qword fileoff;
    qword filesize;
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
    dword reserved;
};

typedef struct dylinker_command dylinker_command, *Pdylinker_command;

struct dylinker_command {
    dword cmd;
    dword cmdsize;
    struct lc_str name;
};




void entry(void)

{
  int iVar1;
  long *plVar2;
  int in_stack_00000000;
  
  plVar2 = (long *)(&stack0x00000008 + (uint)((in_stack_00000000 + 1) * 8));
  while (*plVar2 != 0) {
    plVar2 = plVar2 + 1;
  }
  iVar1 = _main();
                    // WARNING: Subroutine does not return
  __symbol_stub1::_exit(iVar1);
}



void _func(undefined4 *param_1)

{
  *param_1 = 1;
  *(undefined *)(param_1 + 4) = 0x6b;
  *(undefined8 *)(param_1 + 6) = 10;
  return;
}



// WARNING: Heritage AFTER dead removal. Example location: r0x000100001108 : 0x000100000eb5
// WARNING: Restarted to delay deadcode elimination for space: ram

void _func2(void)

{
  _gs1 = 3;
  DAT_100001108 = (undefined *)&_gs1;
  DAT_100001110 = 0x6b;
  DAT_100001118 = 10;
  return;
}



void _main(void)

{
  _func(&_gs1);
  _func2();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void __symbol_stub1::_exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100000ede. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_exit)();
  return;
}



void stub_helpers(void)

{
  (*(code *)PTR_dyld_stub_binder_100001000)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void __stub_helper::_exit(int param_1)

{
  stub_helpers();
  return;
}


