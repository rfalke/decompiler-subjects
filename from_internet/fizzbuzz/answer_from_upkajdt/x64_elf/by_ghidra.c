typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    word;
typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct NoteGnuPropertyElement_4 NoteGnuPropertyElement_4, *PNoteGnuPropertyElement_4;

struct NoteGnuPropertyElement_4 {
    dword prType;
    dword prDatasz;
    byte data[4];
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef struct vector<std::thread,std::allocator<std::thread>> vector<std::thread,std::allocator<std::thread>>, *Pvector<std::thread,std::allocator<std::thread>>;

struct vector<std::thread,std::allocator<std::thread>> { // PlaceHolder Class Structure
};

typedef struct vector<worker*,std::allocator<worker*>> vector<worker*,std::allocator<worker*>>, *Pvector<worker*,std::allocator<worker*>>;

struct vector<worker*,std::allocator<worker*>> { // PlaceHolder Class Structure
};

typedef ulong size_t;

typedef long __ssize_t;

typedef __ssize_t ssize_t;

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef union pthread_attr_t pthread_attr_t, *Ppthread_attr_t;

union pthread_attr_t {
    char __size[56];
    long __align;
};

typedef ulong pthread_t;

typedef struct worker worker, *Pworker;

struct worker { // PlaceHolder Structure
};

typedef struct basic_ostream basic_ostream, *Pbasic_ostream;

struct basic_ostream { // PlaceHolder Structure
};

typedef dword unique_ptr;

typedef struct Init Init, *PInit;

struct Init { // PlaceHolder Structure
};

typedef struct _State_impl<std::thread::_Invoker<std::tuple<void(*)(worker*),worker*>>> _State_impl<std::thread::_Invoker<std::tuple<void(*)(worker*),worker*>>>, *P_State_impl<std::thread::_Invoker<std::tuple<void(*)(worker*),worker*>>>;

struct _State_impl<std::thread::_Invoker<std::tuple<void(*)(worker*),worker*>>> { // PlaceHolder Structure
};

typedef struct _State _State, *P_State;

struct _State { // PlaceHolder Structure
};

typedef dword __normal_iterator;

typedef enum Elf64_DynTag {
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
} Elf64_DynTag;

typedef enum Elf_ProgramHeaderType {
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
} Elf_ProgramHeaderType;

typedef struct Elf64_Dyn Elf64_Dyn, *PElf64_Dyn;

struct Elf64_Dyn {
    enum Elf64_DynTag d_tag;
    qword d_val;
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType {
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
} Elf_SectionHeaderType;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct NoteAbiTag NoteAbiTag, *PNoteAbiTag;

struct NoteAbiTag {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    dword abiType; // 0 == Linux
    dword requiredKernelVersion[3]; // Major.minor.patch
};

typedef struct GnuBuildId GnuBuildId, *PGnuBuildId;

struct GnuBuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    byte hash[20];
};

typedef struct NoteGnuProperty_4 NoteGnuProperty_4, *PNoteGnuProperty_4;

struct NoteGnuProperty_4 {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
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
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};




int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_00401020(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * operator_new__(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new__(param_1);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::terminate(void)

{
                    // WARNING: Subroutine does not return
  terminate();
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = write(__fd,__buf,__n);
  return sVar1;
}



void __cxa_begin_catch(void)

{
  __cxa_begin_catch();
  return;
}



void __thiscall std::thread::_State::~_State(_State *this)

{
  ~_State(this);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::__throw_length_error(char *param_1)

{
  __throw_length_error(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

basic_ostream *
std::basic_ostream<char,std::char_traits<char>>::_M_insert<unsigned_long>(ulong param_1)

{
  basic_ostream *pbVar1;
  
  pbVar1 = _M_insert<unsigned_long>(param_1);
  return pbVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



void __cxa_atexit(void)

{
  __cxa_atexit();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::thread::_M_start_thread(unique_ptr param_1,_func_void *param_2)

{
  _M_start_thread(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(param_1);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void operator_delete(void *param_1,ulong param_2)

{
  operator_delete(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

basic_ostream *
std::__ostream_insert<char,std::char_traits<char>>
          (basic_ostream *param_1,char *param_2,long param_3)

{
  basic_ostream *pbVar1;
  
  pbVar1 = __ostream_insert<char,std::char_traits<char>>(param_1,param_2,param_3);
  return pbVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::thread::hardware_concurrency(void)

{
  hardware_concurrency();
  return;
}



void __cxa_rethrow(void)

{
  __cxa_rethrow();
  return;
}



void __thiscall std::ios_base::Init::Init(Init *this)

{
  Init(this);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memmove(__dest,__src,__n);
  return pvVar1;
}



void __cxa_end_catch(void)

{
  __cxa_end_catch();
  return;
}



void __gxx_personality_v0(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::thread::join(void)

{
  join();
  return;
}



void _Unwind_Resume(void)

{
                    // WARNING: Subroutine does not return
  _Unwind_Resume();
}



// std::ios_base::Init::~Init()

void __thiscall std::ios_base::Init::~Init(Init *this)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void main_cold(void)

{
  void *unaff_RBP;
  void *param_10;
  long param_11;
  
  operator_delete(unaff_RBP,0x28);
  if (param_10 != (void *)0x0) {
    operator_delete(param_10,param_11 - (long)param_10);
  }
                    // WARNING: Subroutine does not return
  _Unwind_Resume();
}



void FUN_004011cf(void)

{
  long *plVar1;
  long *param_9;
  void *in_stack_00000020;
  long in_stack_00000030;
  long *in_stack_00000040;
  long *in_stack_00000048;
  long in_stack_00000050;
  
  plVar1 = in_stack_00000040;
  if (param_9 != (long *)0x0) {
    (**(code **)(*param_9 + 8))();
  }
  while( true ) {
    if (in_stack_00000048 == plVar1) {
      if (in_stack_00000040 != (long *)0x0) {
        operator_delete(in_stack_00000040,in_stack_00000050 - (long)in_stack_00000040);
      }
      if (in_stack_00000020 != (void *)0x0) {
        operator_delete(in_stack_00000020,in_stack_00000030 - (long)in_stack_00000020);
      }
                    // WARNING: Subroutine does not return
      _Unwind_Resume();
    }
    if (*plVar1 != 0) break;
    plVar1 = plVar1 + 1;
  }
                    // WARNING: Subroutine does not return
  std::terminate();
}



void FUN_004011df(void)

{
  long *plVar1;
  void *param_10;
  long in_stack_00000030;
  long *param_11;
  long *param_12;
  long param_13;
  
  plVar1 = param_11;
  while( true ) {
    if (param_12 == plVar1) {
      if (param_11 != (long *)0x0) {
        operator_delete(param_11,param_13 - (long)param_11);
      }
      if (param_10 != (void *)0x0) {
        operator_delete(param_10,in_stack_00000030 - (long)param_10);
      }
                    // WARNING: Subroutine does not return
      _Unwind_Resume();
    }
    if (*plVar1 != 0) break;
    plVar1 = plVar1 + 1;
  }
                    // WARNING: Subroutine does not return
  std::terminate();
}



void main(void)

{
  long **pplVar1;
  long **pplVar2;
  uint uVar3;
  long *plVar4;
  void *pvVar5;
  ulong uVar6;
  basic_ostream *pbVar7;
  long **pplVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *local_88;
  long *local_80;
  long **local_78;
  long **pplStack_70;
  long **local_68;
  undefined local_58 [16];
  long *local_48;
  
  uVar3 = std::thread::hardware_concurrency();
  local_68 = (long **)0x0;
  local_78 = (long **)0x0;
  pplStack_70 = (long **)0x0;
  if ((ulong)uVar3 != 0) {
    lVar11 = 0;
    while( true ) {
      pplVar1 = local_68;
                    // try { // try from 00401273 to 00401277 has its CatchHandler @ 0040149f
      plVar4 = (long *)operator_new(0x28);
      plVar4[2] = 10000000;
                    // try { // try from 00401288 to 0040128c has its CatchHandler @ 004014b7
      pvVar5 = operator_new__(400000000);
      plVar4[3] = (long)pvVar5;
      local_58._0_8_ = plVar4;
      if (pplStack_70 == pplVar1) {
                    // try { // try from 004012ad to 004012b1 has its CatchHandler @ 0040149f
        std::vector<worker*,std::allocator<worker*>>::_M_realloc_insert<worker*>
                  ((vector<worker*,std::allocator<worker*>> *)&local_78,(__normal_iterator)pplVar1,
                   (worker **)local_58);
      }
      else {
        *pplStack_70 = plVar4;
        pplStack_70 = pplStack_70 + 1;
      }
      if ((ulong)uVar3 == lVar11 + 1U) break;
      lVar11 = lVar11 + 1;
    }
  }
  pplVar2 = pplStack_70;
  pplVar1 = local_78;
  lVar11 = 0;
  uVar6 = (long)pplStack_70 + (-8 - (long)local_78);
LAB_004012e8:
  pplVar8 = pplVar1;
  lVar10 = lVar11;
  if (pplVar2 == pplVar1) goto LAB_00401481;
  do {
    do {
      plVar4 = *pplVar8;
      pplVar8 = pplVar8 + 1;
      *plVar4 = lVar11;
      plVar4[1] = lVar11 + 10000000;
      lVar11 = lVar11 + 10000000;
    } while (pplVar8 != pplVar2);
    lVar11 = lVar10 + ((uVar6 >> 3) + 1) * 10000000;
    local_48 = (long *)0x0;
    plVar4 = (long *)0x0;
    local_58 = (undefined  [16])0x0;
    pplVar8 = pplVar1;
    while( true ) {
      plVar9 = *pplVar8;
      local_88 = plVar9;
      if (plVar4 == local_48) {
                    // try { // try from 004013ca to 00401444 has its CatchHandler @ 004014af
        std::vector<std::thread,std::allocator<std::thread>>::
        _M_realloc_insert<void(&)(worker*),worker*&>
                  ((vector<std::thread,std::allocator<std::thread>> *)local_58,(unique_ptr)plVar4,
                   task,(worker **)&local_88);
        plVar4 = (long *)local_58._8_8_;
      }
      else {
        *plVar4 = 0;
                    // try { // try from 00401355 to 00401359 has its CatchHandler @ 004014af
        local_80 = (long *)operator_new(0x18);
        *local_80 = (long)&PTR___State_impl_004030b0;
        local_80[1] = (long)plVar9;
        local_80[2] = (long)task;
                    // try { // try from 0040137f to 00401383 has its CatchHandler @ 004014a7
        std::thread::_M_start_thread((unique_ptr)plVar4,(_func_void *)&local_80);
        if (local_80 != (long *)0x0) {
          (**(code **)(*local_80 + 8))();
        }
        local_58._8_8_ = plVar4 + 1;
        plVar4 = plVar4 + 1;
      }
      if (pplVar2 == pplVar8 + 1) break;
      pplVar8 = pplVar8 + 1;
    }
    plVar12 = (long *)local_58._0_8_;
    for (plVar9 = (long *)local_58._0_8_; pplVar8 = pplVar1, plVar9 != plVar4; plVar9 = plVar9 + 1)
    {
      std::thread::join();
    }
    do {
      write(1,(void *)(*pplVar8)[3],(*pplVar8)[4]);
      pplVar8 = pplVar8 + 1;
    } while (pplVar2 != pplVar8);
    while( true ) {
      pbVar7 = std::basic_ostream<char,std::char_traits<char>>::_M_insert<unsigned_long>
                         ((ulong)std::cerr);
      std::__ostream_insert<char,std::char_traits<char>>(pbVar7,"\n",1);
      for (plVar9 = plVar12; plVar4 != plVar9; plVar9 = plVar9 + 1) {
        if (*plVar9 != 0) {
                    // WARNING: Subroutine does not return
          std::terminate();
        }
      }
      if (plVar12 == (long *)0x0) goto LAB_004012e8;
      operator_delete(plVar12,(long)local_48 - (long)plVar12);
      pplVar8 = pplVar1;
      lVar10 = lVar11;
      if (pplVar2 != pplVar1) break;
LAB_00401481:
      plVar12 = (long *)0x0;
      plVar4 = (long *)0x0;
      local_48 = (long *)0x0;
      local_58 = (undefined  [16])0x0;
    }
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// task(worker*)

void _GLOBAL__sub_I_task(void)

{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
  return;
}



void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1,auStack_8)
  ;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _dl_relocate_static_pie(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0040153d)
// WARNING: Removing unreachable block (ram,0x00401547)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x0040157f)
// WARNING: Removing unreachable block (ram,0x00401589)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    deregister_tm_clones();
    completed_0 = 1;
    return;
  }
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



// task(worker*)

void task(worker *param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  char cVar3;
  char cVar4;
  ulong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  int unaff_EBP;
  undefined8 *puVar12;
  char cVar13;
  long in_R11;
  ulong uVar14;
  undefined8 local_60;
  undefined8 uStack_58;
  char local_50;
  char local_4f;
  char local_4e;
  char local_4d;
  char local_4c;
  char local_4b;
  char local_4a;
  char local_49;
  
  puVar12 = *(undefined8 **)(param_1 + 0x18);
  local_60 = *(ulong *)param_1;
  if (*(ulong *)(param_1 + 8) <= local_60) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    return;
  }
  cVar13 = '\0';
  uVar11 = 0xffffffffffffff9c;
  do {
    while( true ) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60;
      uVar14 = local_60 -
               ((SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe) + local_60 / 3
               );
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60;
      uVar5 = local_60 -
              ((SUB168(auVar2 * ZEXT816(0xcccccccccccccccd),8) & 0xfffffffffffffffc) + local_60 / 5)
      ;
      if ((uVar14 | uVar5) == 0) {
        puVar6 = puVar12 + 1;
        *puVar12 = 0x7a7a75427a7a6946;
      }
      else if (uVar14 == 0) {
        *(undefined4 *)puVar12 = 0x7a7a6946;
        puVar6 = (undefined8 *)((long)puVar12 + 4);
      }
      else if (uVar5 == 0) {
        *(undefined4 *)puVar12 = 0x7a7a7542;
        puVar6 = (undefined8 *)((long)puVar12 + 4);
      }
      else if ((local_60 - uVar11 < 10) && ((int)(char)unaff_EBP + (int)cVar13 < 10)) {
        if (in_R11 != 0xf) {
          uVar5 = 0xf - in_R11;
          puVar6 = (undefined8 *)((long)&uStack_58 + in_R11);
          uVar7 = (uint)uVar5;
          if (uVar7 < 8) {
            if ((uVar5 & 4) == 0) {
              if ((uVar7 != 0) && (*(undefined *)puVar12 = *(undefined *)puVar6, (uVar5 & 2) != 0))
              {
                *(undefined2 *)((long)puVar12 + ((uVar5 & 0xffffffff) - 2)) =
                     *(undefined2 *)((long)&uStack_58 + (uVar5 & 0xffffffff) + in_R11 + -2);
              }
            }
            else {
              *(undefined4 *)puVar12 = *(undefined4 *)puVar6;
              *(undefined4 *)((long)puVar12 + ((uVar5 & 0xffffffff) - 4)) =
                   *(undefined4 *)((long)&uStack_58 + (uVar5 & 0xffffffff) + in_R11 + -4);
            }
          }
          else {
            *puVar12 = *puVar6;
            *(undefined8 *)((long)puVar12 + ((uVar5 & 0xffffffff) - 8)) =
                 *(undefined8 *)((long)&uStack_58 + (uVar5 & 0xffffffff) + in_R11 + -8);
            lVar9 = (long)puVar12 - ((ulong)(puVar12 + 1) & 0xfffffffffffffff8);
            uVar7 = (int)lVar9 + uVar7 & 0xfffffff8;
            if (7 < uVar7) {
              uVar10 = 0;
              do {
                uVar14 = (ulong)uVar10;
                uVar10 = uVar10 + 8;
                *(undefined8 *)(((ulong)(puVar12 + 1) & 0xfffffffffffffff8) + uVar14) =
                     *(undefined8 *)((long)puVar6 + (uVar14 - lVar9));
              } while (uVar10 < uVar7);
            }
          }
          puVar12 = (undefined8 *)((long)puVar12 + uVar5);
        }
        puVar6 = (undefined8 *)((long)puVar12 + 1);
        *(char *)puVar12 = (cVar13 - (char)unaff_EBP) + local_49;
      }
      else {
        uVar11 = local_60 / 10;
        unaff_EBP = (int)local_60 + (int)uVar11 * -10;
        local_49 = (char)unaff_EBP + '0';
        if (local_60 < 10) {
          in_R11 = 0xf;
        }
        else {
          uVar5 = uVar11 / 10;
          local_4a = (char)uVar11 + (char)uVar5 * -10 + '0';
          if (local_60 < 100) {
            in_R11 = 0xe;
          }
          else {
            uVar14 = uVar5 / 10;
            local_4b = (char)uVar5 + (char)uVar14 * -10 + '0';
            if (local_60 < 1000) {
              in_R11 = 0xd;
            }
            else {
              cVar3 = (char)(uVar14 / 10);
              local_4c = (char)uVar14 + cVar3 * -10 + '0';
              if (local_60 < 10000) {
                in_R11 = 0xc;
              }
              else {
                uVar8 = (uVar14 / 10) / 10;
                cVar4 = (char)uVar8;
                local_4d = cVar3 + cVar4 * -10 + '0';
                if (local_60 < 100000) {
                  in_R11 = 0xb;
                }
                else {
                  uVar8 = uVar8 / 10;
                  cVar3 = (char)uVar8;
                  local_4e = cVar4 + cVar3 * -10 + '0';
                  if (local_60 < 1000000) {
                    in_R11 = 10;
                  }
                  else {
                    uVar8 = uVar8 / 10;
                    cVar4 = (char)uVar8;
                    local_4f = cVar3 + cVar4 * -10 + '0';
                    if (local_60 < 10000000) {
                      in_R11 = 9;
                    }
                    else {
                      uVar8 = uVar8 / 10;
                      cVar3 = (char)uVar8;
                      local_50 = cVar4 + cVar3 * -10 + '0';
                      if (local_60 < 100000000) {
                        in_R11 = 8;
                      }
                      else {
                        uVar8 = uVar8 / 10;
                        cVar4 = (char)uVar8;
                        uStack_58._7_1_ = cVar3 + cVar4 * -10 + '0';
                        if (local_60 < 1000000000) {
                          in_R11 = 7;
                        }
                        else {
                          uVar8 = uVar8 / 10;
                          cVar3 = (char)uVar8;
                          uStack_58._6_1_ = cVar4 + cVar3 * -10 + '0';
                          if (local_60 < 10000000000) {
                            in_R11 = 6;
                          }
                          else {
                            uVar8 = uVar8 / 10;
                            cVar4 = (char)uVar8;
                            uStack_58._5_1_ = cVar3 + cVar4 * -10 + '0';
                            if (local_60 < 100000000000) {
                              in_R11 = 5;
                            }
                            else {
                              uVar8 = uVar8 / 10;
                              cVar3 = (char)uVar8;
                              uStack_58._4_1_ = cVar4 + cVar3 * -10 + '0';
                              if (local_60 < 1000000000000) {
                                in_R11 = 4;
                              }
                              else {
                                uVar8 = uVar8 / 10;
                                cVar4 = (char)uVar8;
                                uStack_58._3_1_ = cVar3 + cVar4 * -10 + '0';
                                if (uVar11 < 1000000000000) {
                                  in_R11 = 3;
                                }
                                else {
                                  uVar8 = uVar8 / 10;
                                  cVar3 = (char)uVar8;
                                  uStack_58._2_1_ = cVar4 + cVar3 * -10 + '0';
                                  if (uVar5 < 1000000000000) {
                                    in_R11 = 2;
                                  }
                                  else {
                                    uVar8 = uVar8 / 10;
                                    cVar4 = (char)uVar8;
                                    uStack_58._1_1_ = cVar3 + cVar4 * -10 + '0';
                                    if (uVar14 < 1000000000000) {
                                      in_R11 = 1;
                                    }
                                    else {
                                      in_R11 = 0;
                                      uStack_58._0_1_ = cVar4 + (char)(uVar8 / 10) * -10 + '0';
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        uVar11 = 0x10 - in_R11;
        if (0x10 < in_R11 + 1U) {
          uVar11 = 1;
        }
        puVar6 = (undefined8 *)((long)&uStack_58 + in_R11);
        uVar7 = (uint)uVar11;
        if (uVar7 < 8) {
          if ((uVar11 & 4) == 0) {
            if ((uVar7 != 0) && (*(undefined *)puVar12 = *(undefined *)puVar6, (uVar11 & 2) != 0)) {
              *(undefined2 *)((long)puVar12 + ((uVar11 & 0xffffffff) - 2)) =
                   *(undefined2 *)((long)&uStack_58 + (uVar11 & 0xffffffff) + in_R11 + -2);
            }
          }
          else {
            *(undefined4 *)puVar12 = *(undefined4 *)puVar6;
            *(undefined4 *)((long)puVar12 + ((uVar11 & 0xffffffff) - 4)) =
                 *(undefined4 *)((long)&uStack_58 + (uVar11 & 0xffffffff) + in_R11 + -4);
          }
        }
        else {
          *puVar12 = *puVar6;
          *(undefined8 *)((long)puVar12 + ((uVar11 & 0xffffffff) - 8)) =
               *(undefined8 *)((long)&uStack_58 + (uVar11 & 0xffffffff) + in_R11 + -8);
          lVar9 = (long)puVar12 - ((ulong)(puVar12 + 1) & 0xfffffffffffffff8);
          uVar7 = (int)lVar9 + uVar7 & 0xfffffff8;
          if (7 < uVar7) {
            uVar10 = 0;
            do {
              uVar5 = (ulong)uVar10;
              uVar10 = uVar10 + 8;
              *(undefined8 *)(((ulong)(puVar12 + 1) & 0xfffffffffffffff8) + uVar5) =
                   *(undefined8 *)((long)puVar6 + (uVar5 - lVar9));
            } while (uVar10 < uVar7);
          }
        }
        puVar6 = (undefined8 *)(uVar11 + (long)puVar12);
        uVar11 = local_60;
      }
      cVar13 = cVar13 + '\x01';
      *(undefined *)puVar6 = 10;
      puVar12 = (undefined8 *)((long)puVar6 + 1);
      local_60 = local_60 + 1;
      if (cVar13 != '\n') break;
      if (*(ulong *)(param_1 + 8) < local_60 || *(ulong *)(param_1 + 8) == local_60)
      goto LAB_00401683;
      cVar13 = '\0';
    }
  } while (local_60 < *(ulong *)(param_1 + 8));
LAB_00401683:
  *(long *)(param_1 + 0x20) = (long)puVar12 - *(long *)(param_1 + 0x18);
  return;
}



// std::thread::_State_impl<std::thread::_Invoker<std::tuple<void (*)(worker*), worker*> >
// >::_M_run()

void __thiscall
std::thread::_State_impl<std::thread::_Invoker<std::tuple<void(*)(worker*),worker*>>>::_M_run
          (_State_impl<std::thread::_Invoker<std::tuple<void(*)(worker*),worker*>>> *this)

{
                    // WARNING: Could not recover jumptable at 0x00401c4b. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(this + 0x10))(*(undefined8 *)(this + 8));
  return;
}



// std::thread::_State_impl<std::thread::_Invoker<std::tuple<void (*)(worker*), worker*> >
// >::~_State_impl()

void __thiscall
std::thread::_State_impl<std::thread::_Invoker<std::tuple<void(*)(worker*),worker*>>>::~_State_impl
          (_State_impl<std::thread::_Invoker<std::tuple<void(*)(worker*),worker*>>> *this)

{
  *(undefined ***)this = &PTR___State_impl_004030b0;
  std::thread::_State::~_State((_State *)this);
  return;
}



// std::thread::_State_impl<std::thread::_Invoker<std::tuple<void (*)(worker*), worker*> >
// >::~_State_impl()

void __thiscall
std::thread::_State_impl<std::thread::_Invoker<std::tuple<void(*)(worker*),worker*>>>::~_State_impl
          (_State_impl<std::thread::_Invoker<std::tuple<void(*)(worker*),worker*>>> *this)

{
  *(undefined ***)this = &PTR___State_impl_004030b0;
  std::thread::_State::~_State((_State *)this);
  operator_delete(this,0x18);
  return;
}



// void std::vector<std::thread, std::allocator<std::thread> >::_M_realloc_insert<void (&)(worker*),
// worker*&>(__gnu_cxx::__normal_iterator<std::thread*, std::vector<std::thread,
// std::allocator<std::thread> > >, void (&)(worker*), worker*&)

void __thiscall
std::vector<std::thread,std::allocator<std::thread>>::_M_realloc_insert<void(&)(worker*),worker*&>
          (vector<std::thread,std::allocator<std::thread>> *this,__normal_iterator param_1,
          _func_void_worker_ptr *param_2,worker **param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  worker *pwVar3;
  ulong uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined4 in_register_00000034;
  undefined8 *__src;
  ulong uVar9;
  ulong uVar10;
  void *unaff_R13;
  long *unaff_R15;
  undefined8 *puVar11;
  long *local_40 [2];
  
  __src = (undefined8 *)CONCAT44(in_register_00000034,param_1);
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar9 = (long)puVar1 - (long)puVar2 >> 3;
  if (uVar9 == 0xfffffffffffffff) {
    uVar8 = std::__throw_length_error("vector::_M_realloc_insert");
                    // catch(type#1 @ 00000000) { ... } // from try @ 00401d05 with catch @ 00401e2f
    __cxa_begin_catch(uVar8);
    if (unaff_R13 == (void *)0x0) goto LAB_00401e5e;
    operator_delete(unaff_R13,0xfffffffffffffff);
    do {
                    // try { // try from 00401e59 to 00401e5d has its CatchHandler @ 00401e69
      __cxa_rethrow();
LAB_00401e5e:
    } while (*unaff_R15 == 0);
                    // WARNING: Subroutine does not return
    std::terminate();
  }
  uVar4 = 1;
  if (uVar9 != 0) {
    uVar4 = uVar9;
  }
  uVar10 = uVar9 + uVar4;
  if (CARRY8(uVar9,uVar4) == false) {
    if (uVar10 == 0) {
      puVar7 = (undefined8 *)0x0;
      uVar9 = 0;
      goto LAB_00401cf6;
    }
    uVar9 = 0xfffffffffffffff;
    if (uVar10 < 0x1000000000000000) {
      uVar9 = uVar10;
    }
    uVar9 = uVar9 * 8;
  }
  else {
    uVar9 = 0x7ffffffffffffff8;
  }
  puVar7 = (undefined8 *)operator_new(uVar9);
LAB_00401cf6:
  puVar11 = (undefined8 *)(((long)__src - (long)puVar2) + (long)puVar7);
  *puVar11 = 0;
                    // try { // try from 00401d05 to 00401d09 has its CatchHandler @ 00401e2f
  local_40[0] = (long *)operator_new(0x18);
  *local_40[0] = (long)&PTR___State_impl_004030b0;
  pwVar3 = *param_3;
  local_40[0][2] = (long)param_2;
  local_40[0][1] = (long)pwVar3;
                    // try { // try from 00401d38 to 00401d3c has its CatchHandler @ 00401e34
  std::thread::_M_start_thread((unique_ptr)puVar11,(_func_void *)local_40);
  if (local_40[0] != (long *)0x0) {
    (**(code **)(*local_40[0] + 8))();
  }
  puVar5 = puVar2;
  puVar11 = puVar7;
  if (__src != puVar2) {
    do {
      uVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      *puVar11 = uVar8;
      puVar11 = puVar11 + 1;
    } while (puVar5 != __src);
    puVar11 = (undefined8 *)((long)puVar7 + ((long)__src - (long)puVar2));
  }
  puVar11 = puVar11 + 1;
  if (__src != puVar1) {
    pvVar6 = memcpy(puVar11,__src,(long)puVar1 - (long)__src);
    puVar11 = (undefined8 *)((long)pvVar6 + ((long)puVar1 - (long)__src));
  }
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  *(undefined8 **)this = puVar7;
  *(undefined8 **)(this + 8) = puVar11;
  *(ulong *)(this + 0x10) = (long)puVar7 + uVar9;
  return;
}



// void std::vector<worker*, std::allocator<worker*>
// >::_M_realloc_insert<worker*>(__gnu_cxx::__normal_iterator<worker**, std::vector<worker*,
// std::allocator<worker*> > >, worker*&&)

void __thiscall
std::vector<worker*,std::allocator<worker*>>::_M_realloc_insert<worker*>
          (vector<worker*,std::allocator<worker*>> *this,__normal_iterator param_1,worker **param_2)

{
  void *__dest;
  void *__src;
  ulong uVar1;
  ulong uVar2;
  void *__dest_00;
  ulong uVar3;
  size_t __n;
  undefined8 extraout_RDX;
  long lVar4;
  long lVar5;
  undefined4 in_register_00000034;
  void *__src_00;
  char *ctx;
  size_t __n_00;
  undefined4 local_58;
  undefined4 uStack_54;
  
  __src_00 = (void *)CONCAT44(in_register_00000034,param_1);
  lVar5 = *(long *)(this + 8);
  __src = *(void **)this;
  uVar1 = lVar5 - (long)__src >> 3;
  if (uVar1 == 0xfffffffffffffff) {
    ctx = "vector::_M_realloc_insert";
    std::__throw_length_error("vector::_M_realloc_insert");
    _init((EVP_PKEY_CTX *)ctx);
    lVar5 = 0;
    do {
      (*(code *)(&__frame_dummy_init_array_entry)[lVar5])
                ((ulong)ctx & 0xffffffff,__src_00,extraout_RDX);
      lVar5 = lVar5 + 1;
    } while (lVar5 != 2);
    return;
  }
  uVar3 = 1;
  if (uVar1 != 0) {
    uVar3 = uVar1;
  }
  uVar2 = uVar1 + uVar3;
  __n = (long)__src_00 - (long)__src;
  if (CARRY8(uVar1,uVar3) == false) {
    if (uVar2 != 0) {
      if (0xfffffffffffffff < uVar2) {
        uVar2 = 0xfffffffffffffff;
      }
      uVar2 = uVar2 * 8;
      goto LAB_00401fa2;
    }
    lVar4 = 0;
    __dest_00 = (void *)0x0;
  }
  else {
    uVar2 = 0x7ffffffffffffff8;
LAB_00401fa2:
    __dest_00 = operator_new(uVar2);
    lVar4 = uVar2 + (long)__dest_00;
  }
  __dest = (void *)((long)__dest_00 + __n + 8);
  __n_00 = lVar5 - (long)__src_00;
  lVar5 = *(long *)(this + 0x10);
  *(worker **)((long)__dest_00 + __n) = *param_2;
  if ((long)__n < 1) {
    if (0 < (long)__n_00) {
LAB_00401f80:
      memcpy(__dest,__src_00,__n_00);
    }
    if (__src == (void *)0x0) goto LAB_00401f33;
  }
  else {
    memmove(__dest_00,__src,__n);
    if (0 < (long)__n_00) goto LAB_00401f80;
  }
  operator_delete(__src,lVar5 - (long)__src);
LAB_00401f33:
  local_58 = SUB84(__dest_00,0);
  uStack_54 = (undefined4)((ulong)__dest_00 >> 0x20);
  *(long *)(this + 0x10) = lVar4;
  *(undefined4 *)this = local_58;
  *(undefined4 *)(this + 4) = uStack_54;
  *(size_t *)(this + 8) = (long)__dest + __n_00;
  return;
}



void __libc_csu_init(EVP_PKEY_CTX *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _init(param_1);
  lVar1 = 0;
  do {
    (*(code *)(&__frame_dummy_init_array_entry)[lVar1])((ulong)param_1 & 0xffffffff,param_2,param_3)
    ;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 2);
  return;
}



void __libc_csu_fini(void)

{
  return;
}



void _fini(void)

{
  return;
}


