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

typedef struct Gnu_BuildId Gnu_BuildId, *PGnu_BuildId;

struct Gnu_BuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Build-id vendor name
    byte description[20]; // Build-id value
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



// WARNING: Unknown calling convention yet parameter storage is locked

void * operator_new__(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new__(param_1);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::terminate(void)

{
                    // WARNING: Subroutine does not return
  terminate();
}



// WARNING: Unknown calling convention yet parameter storage is locked

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



void __thiscall std::thread::_State::__State(_State *this)

{
  __State(this);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::__throw_length_error(char *param_1)

{
  __throw_length_error(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

basic_ostream *
std::basic_ostream<char,std::char_traits<char>>::_M_insert_unsigned_long_(ulong param_1)

{
  basic_ostream *pbVar1;
  
  pbVar1 = _M_insert_unsigned_long_(param_1);
  return pbVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::thread::_M_start_thread(unique_ptr param_1,FuncDef1 *param_2)

{
  _M_start_thread(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(param_1);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void operator_delete(void *param_1,ulong param_2)

{
  operator_delete(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

basic_ostream *
std::__ostream_insert_char_std__char_traits_char__
          (basic_ostream *param_1,char *param_2,long param_3)

{
  basic_ostream *pbVar1;
  
  pbVar1 = __ostream_insert_char_std__char_traits_char__(param_1,param_2,param_3);
  return pbVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

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



// WARNING: Unknown calling convention yet parameter storage is locked

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



// WARNING: Unknown calling convention yet parameter storage is locked

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

void __thiscall std::ios_base::Init::_Init(Init *this)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void main_cold(void)

{
  void *unaff_RBP;
  void *in_stack_00000020;
  long in_stack_00000030;
  
  operator_delete(unaff_RBP,0x28);
  if (in_stack_00000020 != (void *)0x0) {
    operator_delete(in_stack_00000020,in_stack_00000030 - (long)in_stack_00000020);
  }
                    // WARNING: Subroutine does not return
  _Unwind_Resume();
}



// WARNING: Could not reconcile some variable overlaps

void _annobin_lto_startup(int __status)

{
  long **pplVar1;
  long **pplVar2;
  uint uVar3;
  long *plVar4;
  void *pvVar5;
  ulong uVar6;
  basic_ostream *pbVar7;
  long **pplVar8;
  long lVar9;
  long lVar10;
  long *plStack136;
  long *plStack128;
  long **pplStack120;
  long **pplStack112;
  long **pplStack104;
  undefined auStack88 [16];
  long *plStack72;
  
  uVar3 = std::thread::hardware_concurrency();
  pplStack104 = (long **)0x0;
  pplStack120 = (long **)0x0;
  pplStack112 = (long **)0x0;
  if ((ulong)uVar3 != 0) {
    lVar10 = 0;
    while( true ) {
      pplVar1 = pplStack104;
      plVar4 = (long *)operator_new(0x28);
      plVar4[2] = 10000000;
      pvVar5 = operator_new__(400000000);
      plVar4[3] = (long)pvVar5;
      auStack88 = CONCAT88(auStack88._8_8_,plVar4);
      if (pplStack112 == pplVar1) {
        std::vector<worker*,std::allocator<worker*>>::_M_realloc_insert_worker__
                  ((vector_worker__std__allocator_worker___ *)&pplStack120,
                   (__normal_iterator)pplVar1,(worker **)auStack88);
      }
      else {
        *pplStack112 = plVar4;
        pplStack112 = pplStack112 + 1;
      }
      if ((ulong)uVar3 == lVar10 + 1U) break;
      lVar10 = lVar10 + 1;
    }
  }
  pplVar2 = pplStack112;
  pplVar1 = pplStack120;
  lVar10 = 0;
  uVar6 = (long)pplStack112 + (-8 - (long)pplStack120);
LAB_004012e8:
  pplVar8 = pplVar1;
  lVar9 = lVar10;
  if (pplVar2 == pplVar1) goto LAB_00401481;
  do {
    do {
      plVar4 = *pplVar8;
      pplVar8 = pplVar8 + 1;
      *plVar4 = lVar10;
      plVar4[1] = lVar10 + 10000000;
      lVar10 = lVar10 + 10000000;
    } while (pplVar8 != pplVar2);
    lVar10 = lVar9 + ((uVar6 >> 3) + 1) * 10000000;
    plStack72 = (long *)0x0;
    auStack88._8_8_ = (long *)0x0;
    auStack88 = (undefined  [16])0x0;
    pplVar8 = pplVar1;
    while( true ) {
      plVar4 = *pplVar8;
      plStack136 = plVar4;
      if (auStack88._8_8_ == plStack72) {
        std::vector<std::thread,std::allocator<std::thread>>::
        _M_realloc_insert_void____worker___worker___
                  ((vector_std__thread_std__allocator_std__thread__ *)auStack88,
                   (unique_ptr)auStack88._8_8_,task,(worker **)&plStack136);
      }
      else {
        *auStack88._8_8_ = 0;
        plStack128 = (long *)operator_new(0x18);
        *plStack128 = (long)&PTR___State_impl_004030b0;
        plStack128[1] = (long)plVar4;
        plStack128[2] = (long)task;
        std::thread::_M_start_thread((unique_ptr)auStack88._8_8_,(FuncDef1 *)&plStack128);
        if (plStack128 != (long *)0x0) {
          (**(code **)(*plStack128 + 8))();
        }
        auStack88._8_8_ = auStack88._8_8_ + 1;
      }
      if (pplVar2 == pplVar8 + 1) break;
      pplVar8 = pplVar8 + 1;
    }
    for (plVar4 = auStack88._0_8_; pplVar8 = pplVar1, plVar4 != auStack88._8_8_; plVar4 = plVar4 + 1
        ) {
      std::thread::join();
    }
    do {
      write(1,(void *)(*pplVar8)[3],(*pplVar8)[4]);
      pplVar8 = pplVar8 + 1;
    } while (pplVar2 != pplVar8);
    while( true ) {
      pbVar7 = std::basic_ostream<char,std::char_traits<char>>::_M_insert_unsigned_long_
                         ((ulong)std::cerr);
      std::__ostream_insert_char_std__char_traits_char__(pbVar7,"\n",1);
      for (plVar4 = auStack88._0_8_; auStack88._8_8_ != plVar4; plVar4 = plVar4 + 1) {
        if (*plVar4 != 0) {
                    // WARNING: Subroutine does not return
          std::terminate();
        }
      }
      if (auStack88._0_8_ == (long *)0x0) goto LAB_004012e8;
      operator_delete(auStack88._0_8_,(long)plStack72 - (long)auStack88._0_8_);
      pplVar8 = pplVar1;
      lVar9 = lVar10;
      if (pplVar2 != pplVar1) break;
LAB_00401481:
      auStack88._0_8_ = (long *)0x0;
      auStack88._8_8_ = (long *)0x0;
      plStack72 = (long *)0x0;
      auStack88 = (undefined  [16])0x0;
    }
  } while( true );
}



// WARNING: Could not reconcile some variable overlaps

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
  long lVar9;
  long lVar10;
  long *local_88;
  long *local_80;
  long **local_78;
  long **pplStack112;
  long **local_68;
  undefined local_58 [16];
  long *local_48;
  
  uVar3 = std::thread::hardware_concurrency();
  local_68 = (long **)0x0;
  local_78 = (long **)0x0;
  pplStack112 = (long **)0x0;
  if ((ulong)uVar3 != 0) {
    lVar10 = 0;
    while( true ) {
      pplVar1 = local_68;
                    // try { // try from 00401273 to 00401277 has its CatchHandler @ 0040149f
      plVar4 = (long *)operator_new(0x28);
      plVar4[2] = 10000000;
                    // try { // try from 00401288 to 0040128c has its CatchHandler @ 004014b7
      pvVar5 = operator_new__(400000000);
      plVar4[3] = (long)pvVar5;
      local_58 = CONCAT88(local_58._8_8_,plVar4);
      if (pplStack112 == pplVar1) {
                    // try { // try from 004012ad to 004012b1 has its CatchHandler @ 0040149f
        std::vector<worker*,std::allocator<worker*>>::_M_realloc_insert_worker__
                  ((vector_worker__std__allocator_worker___ *)&local_78,(__normal_iterator)pplVar1,
                   (worker **)local_58);
      }
      else {
        *pplStack112 = plVar4;
        pplStack112 = pplStack112 + 1;
      }
      if ((ulong)uVar3 == lVar10 + 1U) break;
      lVar10 = lVar10 + 1;
    }
  }
  pplVar2 = pplStack112;
  pplVar1 = local_78;
  lVar10 = 0;
  uVar6 = (long)pplStack112 + (-8 - (long)local_78);
LAB_004012e8:
  pplVar8 = pplVar1;
  lVar9 = lVar10;
  if (pplVar2 == pplVar1) goto LAB_00401481;
  do {
    do {
      plVar4 = *pplVar8;
      pplVar8 = pplVar8 + 1;
      *plVar4 = lVar10;
      plVar4[1] = lVar10 + 10000000;
      lVar10 = lVar10 + 10000000;
    } while (pplVar8 != pplVar2);
    lVar10 = lVar9 + ((uVar6 >> 3) + 1) * 10000000;
    local_48 = (long *)0x0;
    local_58._8_8_ = (long *)0x0;
    local_58 = (undefined  [16])0x0;
    pplVar8 = pplVar1;
    while( true ) {
      plVar4 = *pplVar8;
      local_88 = plVar4;
      if (local_58._8_8_ == local_48) {
                    // try { // try from 004013ca to 00401444 has its CatchHandler @ 004014af
        std::vector<std::thread,std::allocator<std::thread>>::
        _M_realloc_insert_void____worker___worker___
                  ((vector_std__thread_std__allocator_std__thread__ *)local_58,
                   (unique_ptr)local_58._8_8_,task,(worker **)&local_88);
      }
      else {
        *local_58._8_8_ = 0;
                    // try { // try from 00401355 to 00401359 has its CatchHandler @ 004014af
        local_80 = (long *)operator_new(0x18);
        *local_80 = (long)&PTR___State_impl_004030b0;
        local_80[1] = (long)plVar4;
        local_80[2] = (long)task;
                    // try { // try from 0040137f to 00401383 has its CatchHandler @ 004014a7
        std::thread::_M_start_thread((unique_ptr)local_58._8_8_,(FuncDef1 *)&local_80);
        if (local_80 != (long *)0x0) {
          (**(code **)(*local_80 + 8))();
        }
        local_58._8_8_ = local_58._8_8_ + 1;
      }
      if (pplVar2 == pplVar8 + 1) break;
      pplVar8 = pplVar8 + 1;
    }
    for (plVar4 = local_58._0_8_; pplVar8 = pplVar1, plVar4 != local_58._8_8_; plVar4 = plVar4 + 1)
    {
      std::thread::join();
    }
    do {
      write(1,(void *)(*pplVar8)[3],(*pplVar8)[4]);
      pplVar8 = pplVar8 + 1;
    } while (pplVar2 != pplVar8);
    while( true ) {
      pbVar7 = std::basic_ostream<char,std::char_traits<char>>::_M_insert_unsigned_long_
                         ((ulong)std::cerr);
      std::__ostream_insert_char_std__char_traits_char__(pbVar7,"\n",1);
      for (plVar4 = local_58._0_8_; local_58._8_8_ != plVar4; plVar4 = plVar4 + 1) {
        if (*plVar4 != 0) {
                    // WARNING: Subroutine does not return
          std::terminate();
        }
      }
      if (local_58._0_8_ == (long *)0x0) goto LAB_004012e8;
      operator_delete(local_58._0_8_,(long)local_48 - (long)local_58._0_8_);
      pplVar8 = pplVar1;
      lVar9 = lVar10;
      if (pplVar2 != pplVar1) break;
LAB_00401481:
      local_58._0_8_ = (long *)0x0;
      local_58._8_8_ = (long *)0x0;
      local_48 = (long *)0x0;
      local_58 = (undefined  [16])0x0;
    }
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked
// task(worker*)

void _GLOBAL__sub_I_task(void)

{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::_Init,&std::__ioinit,&__dso_handle);
  return;
}



void _start(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000000;
  undefined auStack8 [8];
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_3,
                    auStack8);
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



// WARNING: Could not reconcile some variable overlaps
// task(worker*)

void task(worker *param_1)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  int unaff_EBP;
  undefined8 *puVar10;
  char cVar11;
  long in_R11;
  ulong uVar12;
  undefined8 local_60;
  undefined8 uStack88;
  char local_50;
  char local_4f;
  char local_4e;
  char local_4d;
  char local_4c;
  char local_4b;
  char local_4a;
  char local_49;
  
  puVar10 = *(undefined8 **)(param_1 + 0x18);
  local_60 = *(ulong *)param_1;
  if (*(ulong *)(param_1 + 8) <= local_60) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    return;
  }
  cVar11 = '\0';
  uVar9 = 0xffffffffffffff9c;
  do {
    while( true ) {
      uVar12 = local_60 -
               ((SUB168(ZEXT816(local_60) * ZEXT816(0xaaaaaaaaaaaaaaab) >> 0x40,0) &
                0xfffffffffffffffe) + local_60 / 3);
      uVar3 = local_60 -
              ((SUB168(ZEXT816(local_60) * ZEXT816(0xcccccccccccccccd) >> 0x40,0) &
               0xfffffffffffffffc) + local_60 / 5);
      if ((uVar12 | uVar3) == 0) {
        puVar4 = puVar10 + 1;
        *puVar10 = 0x7a7a75427a7a6946;
      }
      else if (uVar12 == 0) {
        *(undefined4 *)puVar10 = 0x7a7a6946;
        puVar4 = (undefined8 *)((long)puVar10 + 4);
      }
      else if (uVar3 == 0) {
        *(undefined4 *)puVar10 = 0x7a7a7542;
        puVar4 = (undefined8 *)((long)puVar10 + 4);
      }
      else if ((local_60 - uVar9 < 10) && ((int)(char)unaff_EBP + (int)cVar11 < 10)) {
        if (in_R11 != 0xf) {
          uVar3 = 0xf - in_R11;
          puVar4 = (undefined8 *)((long)&uStack88 + in_R11);
          uVar5 = (uint)uVar3;
          if (uVar5 < 8) {
            if ((uVar3 & 4) == 0) {
              if ((uVar5 != 0) && (*(undefined *)puVar10 = *(undefined *)puVar4, (uVar3 & 2) != 0))
              {
                *(undefined2 *)((long)puVar10 + ((uVar3 & 0xffffffff) - 2)) =
                     *(undefined2 *)((long)&uStack88 + (uVar3 & 0xffffffff) + in_R11 + -2);
              }
            }
            else {
              *(undefined4 *)puVar10 = *(undefined4 *)puVar4;
              *(undefined4 *)((long)puVar10 + ((uVar3 & 0xffffffff) - 4)) =
                   *(undefined4 *)((long)&uStack88 + (uVar3 & 0xffffffff) + in_R11 + -4);
            }
          }
          else {
            *puVar10 = *puVar4;
            *(undefined8 *)((long)puVar10 + ((uVar3 & 0xffffffff) - 8)) =
                 *(undefined8 *)((long)&uStack88 + (uVar3 & 0xffffffff) + in_R11 + -8);
            lVar7 = (long)puVar10 - ((ulong)(puVar10 + 1) & 0xfffffffffffffff8);
            uVar5 = (int)lVar7 + uVar5 & 0xfffffff8;
            if (7 < uVar5) {
              uVar8 = 0;
              do {
                uVar12 = (ulong)uVar8;
                uVar8 = uVar8 + 8;
                *(undefined8 *)(((ulong)(puVar10 + 1) & 0xfffffffffffffff8) + uVar12) =
                     *(undefined8 *)((long)puVar4 + (uVar12 - lVar7));
              } while (uVar8 < uVar5);
            }
          }
          puVar10 = (undefined8 *)((long)puVar10 + uVar3);
        }
        puVar4 = (undefined8 *)((long)puVar10 + 1);
        *(char *)puVar10 = (cVar11 - (char)unaff_EBP) + local_49;
      }
      else {
        uVar9 = local_60 / 10;
        unaff_EBP = (int)local_60 + (int)uVar9 * -10;
        local_49 = (char)unaff_EBP + '0';
        if (local_60 < 10) {
          in_R11 = 0xf;
        }
        else {
          uVar3 = uVar9 / 10;
          local_4a = (char)uVar9 + (char)uVar3 * -10 + '0';
          if (local_60 < 100) {
            in_R11 = 0xe;
          }
          else {
            uVar12 = uVar3 / 10;
            local_4b = (char)uVar3 + (char)uVar12 * -10 + '0';
            if (local_60 < 1000) {
              in_R11 = 0xd;
            }
            else {
              cVar1 = (char)(uVar12 / 10);
              local_4c = (char)uVar12 + cVar1 * -10 + '0';
              if (local_60 < 10000) {
                in_R11 = 0xc;
              }
              else {
                uVar6 = (uVar12 / 10) / 10;
                cVar2 = (char)uVar6;
                local_4d = cVar1 + cVar2 * -10 + '0';
                if (local_60 < 100000) {
                  in_R11 = 0xb;
                }
                else {
                  uVar6 = uVar6 / 10;
                  cVar1 = (char)uVar6;
                  local_4e = cVar2 + cVar1 * -10 + '0';
                  if (local_60 < 1000000) {
                    in_R11 = 10;
                  }
                  else {
                    uVar6 = uVar6 / 10;
                    cVar2 = (char)uVar6;
                    local_4f = cVar1 + cVar2 * -10 + '0';
                    if (local_60 < 10000000) {
                      in_R11 = 9;
                    }
                    else {
                      uVar6 = uVar6 / 10;
                      cVar1 = (char)uVar6;
                      local_50 = cVar2 + cVar1 * -10 + '0';
                      if (local_60 < 100000000) {
                        in_R11 = 8;
                      }
                      else {
                        uVar6 = uVar6 / 10;
                        cVar2 = (char)uVar6;
                        uStack88._7_1_ = cVar1 + cVar2 * -10 + '0';
                        if (local_60 < 1000000000) {
                          in_R11 = 7;
                        }
                        else {
                          uVar6 = uVar6 / 10;
                          cVar1 = (char)uVar6;
                          uStack88._6_1_ = cVar2 + cVar1 * -10 + '0';
                          if (local_60 < 10000000000) {
                            in_R11 = 6;
                          }
                          else {
                            uVar6 = uVar6 / 10;
                            cVar2 = (char)uVar6;
                            uStack88._5_1_ = cVar1 + cVar2 * -10 + '0';
                            if (local_60 < 100000000000) {
                              in_R11 = 5;
                            }
                            else {
                              uVar6 = uVar6 / 10;
                              cVar1 = (char)uVar6;
                              uStack88._4_1_ = cVar2 + cVar1 * -10 + '0';
                              if (local_60 < 1000000000000) {
                                in_R11 = 4;
                              }
                              else {
                                uVar6 = uVar6 / 10;
                                cVar2 = (char)uVar6;
                                uStack88._3_1_ = cVar1 + cVar2 * -10 + '0';
                                if (uVar9 < 1000000000000) {
                                  in_R11 = 3;
                                }
                                else {
                                  uVar6 = uVar6 / 10;
                                  cVar1 = (char)uVar6;
                                  uStack88._2_1_ = cVar2 + cVar1 * -10 + '0';
                                  if (uVar3 < 1000000000000) {
                                    in_R11 = 2;
                                  }
                                  else {
                                    uVar6 = uVar6 / 10;
                                    cVar2 = (char)uVar6;
                                    uStack88._1_1_ = cVar1 + cVar2 * -10 + '0';
                                    if (uVar12 < 1000000000000) {
                                      in_R11 = 1;
                                    }
                                    else {
                                      in_R11 = 0;
                                      uStack88._0_1_ = cVar2 + (char)(uVar6 / 10) * -10 + '0';
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
        uVar9 = 0x10 - in_R11;
        if (0x10 < in_R11 + 1U) {
          uVar9 = 1;
        }
        puVar4 = (undefined8 *)((long)&uStack88 + in_R11);
        uVar5 = (uint)uVar9;
        if (uVar5 < 8) {
          if ((uVar9 & 4) == 0) {
            if ((uVar5 != 0) && (*(undefined *)puVar10 = *(undefined *)puVar4, (uVar9 & 2) != 0)) {
              *(undefined2 *)((long)puVar10 + ((uVar9 & 0xffffffff) - 2)) =
                   *(undefined2 *)((long)&uStack88 + (uVar9 & 0xffffffff) + in_R11 + -2);
            }
          }
          else {
            *(undefined4 *)puVar10 = *(undefined4 *)puVar4;
            *(undefined4 *)((long)puVar10 + ((uVar9 & 0xffffffff) - 4)) =
                 *(undefined4 *)((long)&uStack88 + (uVar9 & 0xffffffff) + in_R11 + -4);
          }
        }
        else {
          *puVar10 = *puVar4;
          *(undefined8 *)((long)puVar10 + ((uVar9 & 0xffffffff) - 8)) =
               *(undefined8 *)((long)&uStack88 + (uVar9 & 0xffffffff) + in_R11 + -8);
          lVar7 = (long)puVar10 - ((ulong)(puVar10 + 1) & 0xfffffffffffffff8);
          uVar5 = (int)lVar7 + uVar5 & 0xfffffff8;
          if (7 < uVar5) {
            uVar8 = 0;
            do {
              uVar3 = (ulong)uVar8;
              uVar8 = uVar8 + 8;
              *(undefined8 *)(((ulong)(puVar10 + 1) & 0xfffffffffffffff8) + uVar3) =
                   *(undefined8 *)((long)puVar4 + (uVar3 - lVar7));
            } while (uVar8 < uVar5);
          }
        }
        puVar4 = (undefined8 *)(uVar9 + (long)puVar10);
        uVar9 = local_60;
      }
      cVar11 = cVar11 + '\x01';
      *(undefined *)puVar4 = 10;
      puVar10 = (undefined8 *)((long)puVar4 + 1);
      local_60 = local_60 + 1;
      if (cVar11 != '\n') break;
      if (*(ulong *)(param_1 + 8) < local_60 || *(ulong *)(param_1 + 8) == local_60)
      goto LAB_00401683;
      cVar11 = '\0';
    }
  } while (local_60 < *(ulong *)(param_1 + 8));
LAB_00401683:
  *(long *)(param_1 + 0x20) = (long)puVar10 - *(long *)(param_1 + 0x18);
  return;
}



// std::thread::_State_impl<std::thread::_Invoker<std::tuple<void (*)(worker*), worker*>>>::_M_run()

void __thiscall
std::thread::_State_impl<std::thread::_Invoker<std::tuple<void(*)(worker*),worker*>>>::_M_run
          (_State_impl_std__thread___Invoker_std__tuple_void____worker___worker____ *this)

{
                    // WARNING: Could not recover jumptable at 0x00401c4b. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(this + 0x10))(*(undefined8 *)(this + 8));
  return;
}



// std::thread::_State_impl<std::thread::_Invoker<std::tuple<void (*)(worker*),
// worker*>>>::~_State_impl()

void __thiscall
std::thread::_State_impl<std::thread::_Invoker<std::tuple<void(*)(worker*),worker*>>>::__State_impl
          (_State_impl_std__thread___Invoker_std__tuple_void____worker___worker____ *this)

{
  *(undefined ***)this = &PTR___State_impl_004030b0;
  std::thread::_State::__State((_State *)this);
  return;
}



// std::thread::_State_impl<std::thread::_Invoker<std::tuple<void (*)(worker*),
// worker*>>>::~_State_impl()

void __thiscall
std::thread::_State_impl<std::thread::_Invoker<std::tuple<void(*)(worker*),worker*>>>::__State_impl
          (_State_impl_std__thread___Invoker_std__tuple_void____worker___worker____ *this)

{
  *(undefined ***)this = &PTR___State_impl_004030b0;
  std::thread::_State::__State((_State *)this);
  operator_delete(this,0x18);
  return;
}



// void std::vector<std::thread, std::allocator<std::thread>>::_M_realloc_insert<void (&)(worker*),
// worker*&>(__gnu_cxx::__normal_iterator<std::thread*, std::vector<std::thread,
// std::allocator<std::thread>>>, void (&)(worker*), worker*&)

void __thiscall
std::vector<std::thread,std::allocator<std::thread>>::_M_realloc_insert_void____worker___worker___
          (vector_std__thread_std__allocator_std__thread__ *this,__normal_iterator param_1,
          FuncDef0 *param_2,worker **param_3)

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
      goto LAB_00401cf6;
    }
    uVar9 = 0xfffffffffffffff;
    if (uVar10 < 0x1000000000000000) {
      uVar9 = uVar10;
    }
    uVar10 = uVar9 * 8;
  }
  else {
    uVar10 = 0x7ffffffffffffff8;
  }
  puVar7 = (undefined8 *)operator_new(uVar10);
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
  std::thread::_M_start_thread((unique_ptr)puVar11,(FuncDef1 *)local_40);
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
  *(ulong *)(this + 0x10) = (long)puVar7 + uVar10;
  return;
}



// void std::vector<worker*,
// std::allocator<worker*>>::_M_realloc_insert<worker*>(__gnu_cxx::__normal_iterator<worker**,
// std::vector<worker*, std::allocator<worker*>>>, worker*&&)

void __thiscall
std::vector<worker*,std::allocator<worker*>>::_M_realloc_insert_worker__
          (vector_worker__std__allocator_worker___ *this,__normal_iterator param_1,worker **param_2)

{
  void *__dest;
  void *__src;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  void *__dest_00;
  ulong uVar4;
  size_t __n;
  undefined8 extraout_RDX;
  long lVar5;
  long lVar6;
  undefined4 in_register_00000034;
  void *__src_00;
  char *ctx;
  size_t __n_00;
  undefined4 local_58;
  undefined4 uStack84;
  undefined4 uStack80;
  undefined4 uStack76;
  
  __src_00 = (void *)CONCAT44(in_register_00000034,param_1);
  lVar6 = *(long *)(this + 8);
  __src = *(void **)this;
  uVar2 = lVar6 - (long)__src >> 3;
  if (uVar2 == 0xfffffffffffffff) {
    ctx = "vector::_M_realloc_insert";
    std::__throw_length_error("vector::_M_realloc_insert");
    _init((EVP_PKEY_CTX *)ctx);
    lVar6 = 0;
    do {
      (*(code *)(&__frame_dummy_init_array_entry)[lVar6])
                ((ulong)ctx & 0xffffffff,__src_00,extraout_RDX);
      lVar6 = lVar6 + 1;
    } while (lVar6 != 2);
    return;
  }
  uVar4 = 1;
  if (uVar2 != 0) {
    uVar4 = uVar2;
  }
  uVar3 = uVar2 + uVar4;
  __n = (long)__src_00 - (long)__src;
  if (CARRY8(uVar2,uVar4) == false) {
    if (uVar3 != 0) {
      if (0xfffffffffffffff < uVar3) {
        uVar3 = 0xfffffffffffffff;
      }
      uVar3 = uVar3 * 8;
      goto LAB_00401fa2;
    }
    lVar5 = 0;
    __dest_00 = (void *)0x0;
  }
  else {
    uVar3 = 0x7ffffffffffffff8;
LAB_00401fa2:
    __dest_00 = operator_new(uVar3);
    lVar5 = uVar3 + (long)__dest_00;
  }
  __dest = (void *)((long)__dest_00 + __n + 8);
  __n_00 = lVar6 - (long)__src_00;
  lVar1 = *(long *)(this + 0x10);
  *(worker **)((long)__dest_00 + __n) = *param_2;
  lVar6 = (long)__dest + __n_00;
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
  operator_delete(__src,lVar1 - (long)__src);
LAB_00401f33:
  local_58 = SUB84(__dest_00,0);
  uStack84 = (undefined4)((ulong)__dest_00 >> 0x20);
  uStack80 = (undefined4)lVar6;
  uStack76 = (undefined4)((ulong)lVar6 >> 0x20);
  *(long *)(this + 0x10) = lVar5;
  *(undefined4 *)this = local_58;
  *(undefined4 *)(this + 4) = uStack84;
  *(undefined4 *)(this + 8) = uStack80;
  *(undefined4 *)(this + 0xc) = uStack76;
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


