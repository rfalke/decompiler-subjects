typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned int    uint;
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

typedef struct vector<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>> vector<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>>, *Pvector<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>>;

struct vector<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>> { // PlaceHolder Class Structure
};

typedef struct vector<std::unique_ptr<std::thread,std::default_delete<std::thread>>,std::allocator<std::unique_ptr<std::thread,std::default_delete<std::thread>>>> vector<std::unique_ptr<std::thread,std::default_delete<std::thread>>,std::allocator<std::unique_ptr<std::thread,std::default_delete<std::thread>>>>, *Pvector<std::unique_ptr<std::thread,std::default_delete<std::thread>>,std::allocator<std::unique_ptr<std::thread,std::default_delete<std::thread>>>>;

struct vector<std::unique_ptr<std::thread,std::default_delete<std::thread>>,std::allocator<std::unique_ptr<std::thread,std::default_delete<std::thread>>>> { // PlaceHolder Class Structure
};

typedef struct __cxx11 __cxx11, *P__cxx11;

struct __cxx11 { // PlaceHolder Class Structure
};

typedef struct vector<std::unique_ptr<worker,std::default_delete<worker>>,std::allocator<std::unique_ptr<worker,std::default_delete<worker>>>> vector<std::unique_ptr<worker,std::default_delete<worker>>,std::allocator<std::unique_ptr<worker,std::default_delete<worker>>>>, *Pvector<std::unique_ptr<worker,std::default_delete<worker>>,std::allocator<std::unique_ptr<worker,std::default_delete<worker>>>>;

struct vector<std::unique_ptr<worker,std::default_delete<worker>>,std::allocator<std::unique_ptr<worker,std::default_delete<worker>>>> { // PlaceHolder Class Structure
};

typedef struct basic_string<char,std::char_traits<char>,std::allocator<char>> basic_string<char,std::char_traits<char>,std::allocator<char>>, *Pbasic_string<char,std::char_traits<char>,std::allocator<char>>;

struct basic_string<char,std::char_traits<char>,std::allocator<char>> { // PlaceHolder Class Structure
};

typedef ulong size_t;

typedef long __ssize_t;

typedef __ssize_t ssize_t;

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef union pthread_mutex_t pthread_mutex_t, *Ppthread_mutex_t;

typedef struct __pthread_mutex_s __pthread_mutex_s, *P__pthread_mutex_s;

typedef struct __pthread_internal_list __pthread_internal_list, *P__pthread_internal_list;

typedef struct __pthread_internal_list __pthread_list_t;

struct __pthread_internal_list {
    struct __pthread_internal_list * __prev;
    struct __pthread_internal_list * __next;
};

struct __pthread_mutex_s {
    int __lock;
    uint __count;
    int __owner;
    uint __nusers;
    int __kind;
    int __spins;
    __pthread_list_t __list;
};

union pthread_mutex_t {
    struct __pthread_mutex_s __data;
    char __size[40];
    long __align;
};

typedef union pthread_attr_t pthread_attr_t, *Ppthread_attr_t;

union pthread_attr_t {
    char __size[56];
    long __align;
};

typedef ulong pthread_t;

typedef struct iovec iovec, *Piovec;

struct iovec {
    void * iov_base;
    size_t iov_len;
};

typedef struct worker worker, *Pworker;

struct worker { // PlaceHolder Structure
};

typedef struct unique_lock unique_lock, *Punique_lock;

struct unique_lock { // PlaceHolder Structure
};

typedef struct basic_ostream basic_ostream, *Pbasic_ostream;

struct basic_ostream { // PlaceHolder Structure
};

typedef struct unique_ptr unique_ptr, *Punique_ptr;

struct unique_ptr { // PlaceHolder Structure
};

typedef struct condition_variable condition_variable, *Pcondition_variable;

struct condition_variable { // PlaceHolder Structure
};

typedef struct basic_ostream<char,std::char_traits<char>> basic_ostream<char,std::char_traits<char>>, *Pbasic_ostream<char,std::char_traits<char>>;

struct basic_ostream<char,std::char_traits<char>> { // PlaceHolder Structure
};

typedef struct Init Init, *PInit;

struct Init { // PlaceHolder Structure
};

typedef struct _State _State, *P_State;

struct _State { // PlaceHolder Structure
};

typedef struct _State_impl<std::thread::_Invoker<std::tuple<main::{lambda(worker*)#1},worker*>>> _State_impl<std::thread::_Invoker<std::tuple<main::{lambda(worker*)#1},worker*>>>, *P_State_impl<std::thread::_Invoker<std::tuple<main::{lambda(worker*)#1},worker*>>>;

struct _State_impl<std::thread::_Invoker<std::tuple<main::{lambda(worker*)#1},worker*>>> { // PlaceHolder Structure
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



void FUN_00402020(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int get_nprocs(void)

{
  int iVar1;
  
  iVar1 = get_nprocs();
  return iVar1;
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



// WARNING: Unknown calling convention yet parameter storage is locked

void std::__throw_bad_alloc(void)

{
  __throw_bad_alloc();
  return;
}



void __thiscall std::thread::_State::__State(_State *this)

{
  __State(this);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::condition_variable::notify_one(void)

{
  notify_one();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::__throw_length_error(char *param_1)

{
                    // WARNING: Subroutine does not return
  __throw_length_error(param_1);
}



// WARNING: Unknown calling convention yet parameter storage is locked

ssize_t writev(int __fd,iovec *__iovec,int __count)

{
  ssize_t sVar1;
  
  sVar1 = writev(__fd,__iovec,__count);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
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

void std::__throw_system_error(int param_1)

{
  __throw_system_error(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::basic_ostream<char,std::char_traits<char>>::flush(void)

{
  flush();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::thread::_M_start_thread(unique_ptr param_1,FuncDef0 *param_2)

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



void __thiscall std::condition_variable::condition_variable(condition_variable *this)

{
  condition_variable(this);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock(__mutex);
  return iVar1;
}



void __thiscall std::ios_base::Init::Init(Init *this)

{
  Init(this);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::condition_variable::wait(unique_lock *param_1)

{
  wait(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = snprintf(__s,__maxlen,__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memmove(__dest,__src,__n);
  return pvVar1;
}



void __pthread_key_create(void)

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



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator__
          (basic_ostream_char_std__char_traits_char__ *this,int param_1)

{
  operator__(this,param_1);
  return;
}



void __thiscall std::condition_variable::_condition_variable(condition_variable *this)

{
  _condition_variable(this);
  return;
}



// std::ios_base::Init::~Init()

void __thiscall std::ios_base::Init::_Init(Init *this)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Could not reconcile some variable overlaps

void main(int __status)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  void **ppvVar5;
  bool bVar6;
  undefined auVar7 [16];
  char cVar8;
  int iVar9;
  int iVar10;
  basic_ostream *pbVar11;
  undefined8 *puVar12;
  worker *this;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  long lVar27;
  undefined auVar28 [16];
  undefined in_YMM0 [32];
  undefined auVar29 [32];
  long *local_80;
  undefined local_78 [16];
  worker **local_68;
  undefined local_58 [8];
  long **pplStack80;
  undefined8 local_48;
  
  lVar27 = 1000;
  iVar20 = 4;
  iVar9 = get_nprocs();
  uVar23 = (ulong)iVar9;
  do {
    uVar24 = lVar27 * 3;
    iVar10 = snprintf((char *)0x0,0,"%zu",lVar27);
    lVar3 = (long)iVar10 * 8 + 0x27;
    if (((0x10000 < ((lVar3 * uVar24) / 0xf) / uVar23) ||
        (uVar24 = lVar27 * 6, 0x10000 < ((lVar3 * uVar24) / 0xf) / uVar23)) ||
       (uVar24 = lVar27 * 9, 0x10000 < ((lVar3 * uVar24) / 0xf) / uVar23)) goto LAB_004022d6;
    lVar27 = lVar27 * 10;
    iVar20 = iVar20 + -1;
  } while (iVar20 != 0);
  uVar24 = 9000000;
LAB_004022d6:
  std::__cxx11::to_string((__cxx11 *)local_58,uVar24);
  uVar18 = (ulong)pplStack80;
  if (local_58 != (long **)&local_48) {
    operator_delete(local_58,(long)local_48 + 1);
  }
  uVar26 = 1;
  uVar25 = 1;
LAB_004024cd:
  uVar22 = 0;
LAB_004025da:
  local_58 = (long **)&local_48;
  local_48 = (long **)CONCAT71(local_48._1_7_,0x2d);
  uVar17 = 1;
LAB_004023c4:
  _local_58 = CONCAT88(uVar17,local_58);
  *(char *)((long)local_58 + uVar17) = '\0';
  uVar21 = uVar25;
  uVar16 = uVar25;
  if (99 < uVar26) {
    do {
      uVar16 = uVar21 / 100;
      uVar1 = (uVar21 % 100) * 2;
      cVar8 = std::__detail::__to_chars_10_impl<unsigned_int>(char*,unsigned_int,unsigned_int)::
              __digits[uVar1];
      *(undefined1 *)((long)local_58 + (ulong)uVar22) =
           std::__detail::__to_chars_10_impl<unsigned_int>(char*,unsigned_int,unsigned_int)::
           __digits[uVar1 + 1];
      uVar1 = uVar22 - 1;
      uVar22 = uVar22 - 2;
      *(char *)((long)local_58 + (ulong)uVar1) = cVar8;
      bVar6 = 9999 < uVar21;
      uVar21 = uVar16;
    } while (bVar6);
  }
  cVar8 = (char)uVar16 + '0';
  if (9 < uVar16) {
    *(undefined1 *)((long)local_58 + 1) =
         std::__detail::__to_chars_10_impl<unsigned_int>(char*,unsigned_int,unsigned_int)::__digits
         [uVar16 * 2 + 1];
    cVar8 = std::__detail::__to_chars_10_impl<unsigned_int>(char*,unsigned_int,unsigned_int)::
            __digits[uVar16 * 2];
  }
  *(char *)local_58 = cVar8;
  if (local_58 != (long **)&local_48) {
    operator_delete(local_58,(long)local_48 + 1);
  }
  auVar28 = SUB3216(in_YMM0,0);
  if (uVar17 <= uVar18) {
    if (uVar25 * -0x11111111 < 0x11111112) {
      std::__ostream_insert_char_std__char_traits_char__((basic_ostream *)std::cout,"FizzBuzz\n",9);
    }
    else if (uVar25 * -0x33333333 < 0x33333334) {
      std::__ostream_insert_char_std__char_traits_char__((basic_ostream *)std::cout,"Buzz\n",5);
    }
    else if (uVar25 * -0x55555555 < 0x55555556) {
      std::__ostream_insert_char_std__char_traits_char__((basic_ostream *)std::cout,"Fizz\n",5);
    }
    else {
      pbVar11 = (basic_ostream *)
                std::basic_ostream<char,std::char_traits<char>>::operator__
                          ((basic_ostream_char_std__char_traits_char__ *)std::cout,uVar25);
      _local_58 = CONCAT151(stack0xffffffffffffffa9,10);
      std::__ostream_insert_char_std__char_traits_char__(pbVar11,local_58,1);
    }
    uVar26 = uVar26 + 1;
    uVar25 = (uint)uVar26;
    if (9 < uVar26) {
      if (uVar25 < 100) {
        uVar21 = 1;
LAB_00402550:
        uVar16 = uVar21 + 1;
        uVar22 = uVar21;
      }
      else if (uVar25 < 1000) {
        uVar21 = 1;
LAB_00402560:
        uVar16 = uVar21 + 2;
        uVar22 = uVar21 + 1;
      }
      else {
        if (uVar25 < 10000) {
          uVar21 = 1;
        }
        else {
          uVar17 = uVar26;
          uVar22 = 1;
          do {
            uVar21 = uVar22 + 4;
            if (uVar17 < 100000) {
              uVar22 = uVar22 + 3;
              uVar16 = uVar21;
              goto LAB_004023a1;
            }
            uVar16 = (uint)(uVar17 / 10000);
            if (uVar16 < 100) goto LAB_00402550;
            if (uVar16 < 1000) goto LAB_00402560;
            uVar17 = uVar17 / 10000;
            uVar22 = uVar21;
          } while (9999 < uVar16);
        }
        uVar16 = uVar21 + 3;
        uVar22 = uVar21 + 2;
      }
LAB_004023a1:
      local_58 = (long **)&local_48;
      uVar17 = (ulong)uVar16;
      if (uVar16 < 0x10) goto code_r0x004023b6;
      local_58 = (long **)operator_new(uVar17 + 1);
      local_48 = (long **)uVar17;
      goto LAB_00402508;
    }
    goto LAB_004024cd;
  }
  std::basic_ostream<char,std::char_traits<char>>::flush();
  auVar28 = vpxor_avx(auVar28,auVar28);
  local_68 = (worker **)0x0;
  local_78 = auVar28;
  if (uVar23 >> 0x3c != 0) {
                    // WARNING: Subroutine does not return
    std::__throw_length_error("vector::reserve");
  }
  if (uVar23 == 0) {
    local_78._0_8_ = SUB168(auVar28,0);
    local_78._8_8_ = SUB168(auVar28 >> 0x40,0);
    *(void **)(*(long *)((long)local_78._8_8_ + -8) + 0xb8) = *local_78._0_8_;
    goto LAB_00402827;
  }
  puVar12 = (undefined8 *)operator_new(uVar23 * 8);
  auVar28 = vmovq_avx(puVar12);
  auVar28 = vpunpcklqdq_avx(auVar28,auVar28);
  if (local_78._8_8_ != (worker **)local_78._0_8_) {
    uVar18 = (long)local_78._8_8_ + (-8 - (long)local_78._0_8_);
    puVar15 = local_78._0_8_;
    puVar19 = puVar12;
    if (((void **)puVar12 != local_78._0_8_ + 1) && (0x10 < uVar18)) {
      lVar27 = 0;
      uVar18 = (uVar18 >> 3) + 1;
      do {
        auVar7 = vmovdqu_avx(*(undefined (*) [16])((long)local_78._0_8_ + lVar27));
        auVar7 = vmovdqu_avx(auVar7);
        *(undefined (*) [16])((long)puVar12 + lVar27) = auVar7;
        lVar27 = lVar27 + 0x10;
      } while (lVar27 != (uVar18 >> 1) * 0x10);
      uVar26 = uVar18 & 0xfffffffffffffffe;
      if (uVar26 != uVar18) {
        puVar12[uVar26] = local_78._0_8_[uVar26];
      }
      goto LAB_004026c4;
    }
    do {
      puVar14 = puVar15 + 1;
      *puVar19 = *puVar15;
      puVar15 = puVar14;
      puVar19 = puVar19 + 1;
    } while (local_78._8_8_ != (worker **)puVar14);
  }
  if (local_78._0_8_ != (void **)0x0) {
LAB_004026c4:
    operator_delete(local_78._0_8_,(long)local_68 - (long)local_78._0_8_);
  }
  auVar29 = ZEXT1632(auVar28);
  local_68 = (worker **)(puVar12 + uVar23);
  local_78 = auVar28;
  if (iVar9 < 1) goto LAB_004027e4;
  iVar20 = 0;
  uVar18 = 0;
  do {
    while( true ) {
      uVar26 = uVar18 + uVar24;
      iVar20 = iVar20 + 1;
      this = (worker *)operator_new(0xc0);
      worker::worker(this,uVar18 / uVar23 + (long)(int)uVar25,uVar26 / uVar23 - uVar18 / uVar23,
                     uVar24);
      _local_58 = CONCAT88(pplStack80,this);
      uVar18 = uVar26;
      if (local_78._8_8_ == local_68) break;
      *local_78._8_8_ = this;
      local_78 = CONCAT88(local_78._8_8_ + 1,local_78._0_8_);
LAB_0040271c:
      auVar28 = SUB3216(auVar29,0);
      if (iVar20 == iVar9) goto LAB_004027e4;
    }
    std::
    vector<std::unique_ptr<worker,std::default_delete<worker>>,std::allocator<std::unique_ptr<worker,std::default_delete<worker>>>>
    ::_M_realloc_insert_std__unique_ptr_worker_std__default_delete_worker___
              ((vector_std__unique_ptr_worker_std__default_delete_worker___std__allocator_std__unique_ptr_worker_std__default_delete_worker____
                *)local_78,SUB164(local_78 >> 0x40,0),(unique_ptr *)local_58);
    if (local_58 == (long **)0x0) goto LAB_0040271c;
    std::condition_variable::_condition_variable((condition_variable *)(local_58 + 0xd));
    pvVar4 = local_58[4];
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4,(long)local_58[6] - (long)pvVar4);
    }
    if ((long **)*local_58 != local_58 + 2) {
      operator_delete(*local_58,(long)local_58[2] + 1);
    }
    operator_delete(local_58,0xc0);
    auVar28 = SUB3216(auVar29,0);
  } while (iVar20 != iVar9);
LAB_004027e4:
  *(void **)(*(long *)((long)local_78._8_8_ + -8) + 0xb8) = *local_78._0_8_;
  if (1 < iVar9) {
    plVar13 = (long *)local_78._0_8_ + (ulong)(iVar9 - 2) + 1;
    do {
      plVar2 = (long *)local_78._0_8_ + 1;
      lVar27 = (long)*local_78._0_8_;
      local_78._0_8_ = (void **)((long *)local_78._0_8_ + 1);
      *(long *)(lVar27 + 0xb8) = *plVar2;
    } while (local_78._0_8_ != (void **)plVar13);
  }
LAB_00402827:
  _local_58 = vpxor_avx(auVar28,auVar28);
  local_48 = (long **)0x0;
  if (uVar23 != 0) {
    puVar12 = (undefined8 *)operator_new(uVar23 * 8);
    auVar28 = vmovq_avx(puVar12);
    auVar28 = vpunpcklqdq_avx(auVar28,auVar28);
    if (pplStack80 == local_58) {
LAB_00402b6d:
      if (local_58 != (long **)0x0) goto LAB_004028d4;
    }
    else {
      uVar24 = (long)pplStack80 + (-8 - (long)local_58);
      puVar15 = local_58;
      puVar19 = puVar12;
      if (((long **)puVar12 == local_58 + 1) || (uVar24 < 0x11)) {
        do {
          puVar14 = puVar15 + 1;
          *puVar19 = *puVar15;
          puVar15 = puVar14;
          puVar19 = puVar19 + 1;
        } while (pplStack80 != (long **)puVar14);
        goto LAB_00402b6d;
      }
      lVar27 = 0;
      uVar24 = (uVar24 >> 3) + 1;
      do {
        auVar7 = vmovdqu_avx(*(undefined (*) [16])((long)local_58 + lVar27));
        auVar7 = vmovdqu_avx(auVar7);
        *(undefined (*) [16])((long)puVar12 + lVar27) = auVar7;
        lVar27 = lVar27 + 0x10;
      } while ((uVar24 >> 1) * 0x10 != lVar27);
      uVar18 = uVar24 & 0xfffffffffffffffe;
      if (uVar18 != uVar24) {
        puVar12[uVar18] = local_58[uVar18];
      }
LAB_004028d4:
      operator_delete(local_58,(long)local_48 - (long)local_58);
    }
    local_48 = (long **)(puVar12 + uVar23);
    _local_58 = auVar28;
  }
joined_r0x00402906:
  do {
    if (local_78._8_8_ == (worker **)local_78._0_8_) {
      lVar27 = (long)*local_78._0_8_;
      iVar9 = pthread_mutex_lock((pthread_mutex_t *)(lVar27 + 0x40));
      if (iVar9 != 0) {
        std::__throw_system_error(iVar9);
        std::ios_base::Init::Init((Init *)&std::__ioinit);
        __cxa_atexit(std::ios_base::Init::_Init,&std::__ioinit,&__dso_handle);
        return;
      }
      puVar12 = (undefined8 *)*local_78._0_8_;
      puVar12[0x14] = 0;
      puVar12[0x13] = *puVar12;
      pthread_mutex_unlock((pthread_mutex_t *)(lVar27 + 0x40));
      std::condition_variable::notify_one();
      std::thread::join();
      do {
        if (pplStack80 == local_58) {
          if (local_58 != (long **)0x0) {
            operator_delete(local_58,(long)local_48 - (long)local_58);
          }
          for (; local_78._8_8_ != (worker **)local_78._0_8_; local_78._0_8_ = local_78._0_8_ + 1) {
            ppvVar5 = (void **)*local_78._0_8_;
            if (ppvVar5 != (void **)0x0) {
              std::condition_variable::_condition_variable((condition_variable *)(ppvVar5 + 0xd));
              pvVar4 = ppvVar5[4];
              if (pvVar4 != (void *)0x0) {
                operator_delete(pvVar4,(long)ppvVar5[6] - (long)pvVar4);
              }
              if ((void **)*ppvVar5 != ppvVar5 + 2) {
                operator_delete(*ppvVar5,(long)ppvVar5[2] + 1);
              }
              operator_delete(ppvVar5,0xc0);
            }
          }
          if (local_78._0_8_ != (void **)0x0) {
            operator_delete(local_78._0_8_,(long)local_68 - (long)local_78._0_8_);
          }
          return;
        }
        plVar13 = *local_58;
        if (plVar13 != (long *)0x0) {
          if (*plVar13 != 0) goto LAB_00402b8f;
          operator_delete(plVar13,8);
        }
        local_58 = local_58 + 1;
      } while( true );
    }
    lVar27 = (long)*local_78._0_8_;
    plVar13 = (long *)operator_new(8);
    *plVar13 = 0;
    local_80 = (long *)operator_new(0x10);
    *local_80 = (long)&PTR___State_impl_00405120;
    local_80[1] = lVar27;
    std::thread::_M_start_thread(SUB81(plVar13,0),(FuncDef0 *)&local_80);
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 8))();
    }
    local_80 = plVar13;
    if (pplStack80 == local_48) {
      std::
      vector<std::unique_ptr<std::thread,std::default_delete<std::thread>>,std::allocator<std::unique_ptr<std::thread,std::default_delete<std::thread>>>>
      ::_M_realloc_insert_std__unique_ptr_std__thread_std__default_delete_std__thread___
                ((vector_std__unique_ptr_std__thread_std__default_delete_std__thread___std__allocator_std__unique_ptr_std__thread_std__default_delete_std__thread____
                  *)local_58,SUB164(_local_58 >> 0x40,0),(unique_ptr *)&local_80);
      if (local_80 != (long *)0x0) {
        if (*local_80 != 0) {
LAB_00402b8f:
                    // WARNING: Subroutine does not return
          std::terminate();
        }
        local_78._0_8_ = (void **)((long *)local_78._0_8_ + 1);
        operator_delete(local_80,8);
        goto joined_r0x00402906;
      }
    }
    else {
      *pplStack80 = plVar13;
      _local_58 = CONCAT88(pplStack80 + 1,local_58);
    }
    local_78._0_8_ = (void **)((long *)local_78._0_8_ + 1);
  } while( true );
code_r0x004023b6:
  if (uVar17 != 0) {
    if (uVar17 != 1) {
LAB_00402508:
      memset(local_58,0x2d,uVar17);
      goto LAB_004023c4;
    }
    goto LAB_004025da;
  }
  goto LAB_004023c4;
}



void _GLOBAL__sub_I_main(void)

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



// WARNING: Removing unreachable block (ram,0x00402c1d)
// WARNING: Removing unreachable block (ram,0x00402c27)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00402c5f)
// WARNING: Removing unreachable block (ram,0x00402c69)

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



// std::thread::_State_impl<std::thread::_Invoker<std::tuple<main::{lambda(worker*)#1},
// worker*>>>::~_State_impl()

void __thiscall
std::thread::_State_impl<std::thread::_Invoker<std::tuple<main::{lambda(worker*)#1},worker*>>>::
__State_impl(_State_impl_std__thread___Invoker_std__tuple_main___lambda_worker___1__worker____ *this
            )

{
  *(undefined ***)this = &PTR___State_impl_00405120;
  std::thread::_State::__State((_State *)this);
  return;
}



// std::thread::_State_impl<std::thread::_Invoker<std::tuple<main::{lambda(worker*)#1},
// worker*>>>::~_State_impl()

void __thiscall
std::thread::_State_impl<std::thread::_Invoker<std::tuple<main::{lambda(worker*)#1},worker*>>>::
__State_impl(_State_impl_std__thread___Invoker_std__tuple_main___lambda_worker___1__worker____ *this
            )

{
  *(undefined ***)this = &PTR___State_impl_00405120;
  std::thread::_State::__State((_State *)this);
  operator_delete(this,0x10);
  return;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Could not reconcile some variable overlaps
// worker::loop()

void worker::loop(void)

{
  long **pplVar1;
  pthread_mutex_t *ppVar2;
  pthread_mutex_t *ppVar3;
  long lVar4;
  pthread_mutex_t *ppVar5;
  bool bVar6;
  undefined auVar7 [16];
  void **ppvVar8;
  char cVar9;
  uint uVar10;
  iovec *piVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  char **ppcVar17;
  iovec *in_RCX;
  iovec *piVar18;
  char *pcVar19;
  char *pcVar20;
  iovec *piVar21;
  ulong extraout_RDX;
  long *plVar22;
  long *plVar23;
  iovec *piVar24;
  uint uVar25;
  int iVar26;
  iovec *in_RSI;
  size_t sVar27;
  pthread_mutex_t **in_RDI;
  long **this;
  long **pplVar28;
  ulong uVar29;
  long lVar30;
  long *plVar31;
  pthread_mutex_t *unaff_R14;
  pthread_mutex_t *unaff_R15;
  undefined auVar32 [16];
  undefined in_YMM0 [32];
  undefined8 *puStack272;
  undefined8 *puStack248;
  size_t sStack240;
  undefined8 uStack232;
  char **ppcStack216;
  char *pcStack208;
  undefined auStack200 [16];
  undefined8 *puStack184;
  ulong uStack176;
  undefined8 uStack168;
  pthread_mutex_t **pppStack144;
  code *pcStack136;
  pthread_mutex_t *ppStack128;
  pthread_mutex_t *ppStack112;
  pthread_mutex_t *ppStack104;
  undefined8 uStack96;
  iovec *local_50;
  pthread_mutex_t *local_48;
  char local_40;
  
  ppStack128 = (pthread_mutex_t *)(in_RDI + 8);
  pppStack144 = in_RDI + 0xd;
LAB_00402d10:
  local_40 = '\0';
  uStack96 = 0x402d27;
  local_48 = ppStack128;
  uVar10 = pthread_mutex_lock(ppStack128);
  auVar32 = SUB3216(in_YMM0,0);
  if (uVar10 == 0) {
    ppVar5 = in_RDI[0x13];
    local_40 = '\x01';
    while (ppVar5 == (pthread_mutex_t *)0x0) {
      uStack96 = 0x402d5b;
      std::condition_variable::wait((unique_lock *)pppStack144);
      ppVar5 = in_RDI[0x13];
    }
    in_RSI = (iovec *)(in_RDI + 0x13);
    in_RDI[0x16] = (pthread_mutex_t *)(0x10000 - (long)in_RDI[0x14]);
    uStack96 = 0x402d8e;
    writev(1,in_RSI,2);
    in_RDI[0x13] = (pthread_mutex_t *)0x0;
    if ((local_40 != '\0') && (local_48 != (pthread_mutex_t *)0x0)) {
      uStack96 = 0x402feb;
      pthread_mutex_unlock(local_48);
    }
    uStack96 = 0x402dac;
    std::condition_variable::notify_one();
    unaff_R14 = (pthread_mutex_t *)((long)&in_RDI[0x16]->field_0x0 + (long)&(*in_RDI)->field_0x0);
    ppVar5 = (pthread_mutex_t *)(undefined8 *)((long)(unaff_R14 + 0x666) + 0x10U);
    if ((undefined8 *)((long)(unaff_R14 + 0x666) + 0x10U) <
        (undefined8 *)((long)&(*in_RDI)->field_0x0 + (long)&in_RDI[1]->field_0x0)) {
      do {
        unaff_R14 = ppVar5;
        in_RSI = (iovec *)((long)(unaff_R14 + 0xfffffffffffff999) + 0x18);
        uStack96 = 0x402fb5;
        write(1,in_RSI,0x10000);
        ppVar5 = (pthread_mutex_t *)(undefined8 *)((long)(unaff_R14 + 0x666) + 0x10U);
      } while ((undefined8 *)((long)(unaff_R14 + 0x666) + 0x10U) <
               (undefined8 *)((long)&in_RDI[1]->field_0x0 + (long)&(*in_RDI)->field_0x0));
    }
    unaff_R15 = (pthread_mutex_t *)((long)(in_RDI[0x17] + 1) + 0x18);
    uStack96 = 0x402de6;
    uVar10 = pthread_mutex_lock(unaff_R15);
    auVar32 = SUB3216(in_YMM0,0);
    if (uVar10 != 0) goto LAB_00403068;
    ppVar5 = in_RDI[1];
    ppVar2 = *in_RDI;
    ppVar3 = in_RDI[0x17];
    *(pthread_mutex_t **)((long)(ppVar3 + 3) + 0x20) = unaff_R14;
    *(long *)(ppVar3 + 4) = (long)ppVar2 + ((long)ppVar5 - (long)unaff_R14);
    uStack96 = 0x402e1b;
    pthread_mutex_unlock(unaff_R15);
    uStack96 = 0x402e2b;
    std::condition_variable::notify_one();
    local_40 = '\0';
    local_48 = (pthread_mutex_t *)((long)(in_RDI[0x17] + 1) + 0x18);
    uStack96 = 0x402e4a;
    uVar10 = pthread_mutex_lock(local_48);
    auVar32 = SUB3216(in_YMM0,0);
    if (uVar10 != 0) goto LAB_00403068;
    local_40 = '\x01';
    unaff_R15 = (pthread_mutex_t *)((long)(in_RDI[0x17] + 2) + 0x18);
    unaff_R14 = (pthread_mutex_t *)&local_48;
    if (*(long *)((long)(in_RDI[0x17] + 3) + 0x20) == 0) {
LAB_00402ff0:
      if (local_48 != (pthread_mutex_t *)0x0) {
        uStack96 = 0x40300c;
        pthread_mutex_unlock(local_48);
      }
    }
    else {
      do {
        uStack96 = 0x402e8b;
        std::condition_variable::wait((unique_lock *)unaff_R15);
      } while (*(long *)((long)(in_RDI[0x17] + 3) + 0x20) != 0);
      if (local_40 != '\0') goto LAB_00402ff0;
    }
    piVar24 = (iovec *)in_RDI[5];
    in_RCX = (iovec *)in_RDI[4];
    in_RSI = (iovec *)0x0;
    if (piVar24 != in_RCX) {
      do {
        if (*(char *)((long)in_RCX->iov_base + -2) != 'z') {
          pcVar19 = (char *)((long)in_RCX->iov_base - (long)*(int *)(in_RDI + 7));
          cVar9 = *(char *)((long)in_RDI + 0x3c) + *pcVar19;
          *pcVar19 = cVar9;
          while ('9' < cVar9) {
            pcVar20 = pcVar19 + -1;
            *pcVar19 = cVar9 + -10;
            cVar9 = *pcVar20 + '\x01';
            *pcVar20 = cVar9;
            pcVar19 = pcVar20;
          }
          in_RSI = (iovec *)(ulong)((int)in_RSI + (uint)(cVar9 == '\v'));
        }
        in_RCX = (iovec *)&in_RCX->iov_len;
      } while (piVar24 != in_RCX);
      if ((int)in_RSI != 0) {
        piVar24 = (iovec *)in_RDI[1];
        unaff_R14 = in_RDI[5];
        unaff_R15 = *in_RDI;
        piVar18 = (iovec *)((long)&piVar24->iov_base + (long)&in_RSI->iov_base);
        if (piVar24 < piVar18) {
          uStack96 = 0x403026;
          local_50 = piVar24;
          std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
          _M_replace_aux((basic_string_char_std__char_traits_char__std__allocator_char__ *)in_RDI,
                         (ulong)piVar24,0,(ulong)in_RSI,'\0');
          in_RCX = (iovec *)((long)&in_RDI[1]->field_0x0 + (long)&(*in_RDI)->field_0x0);
          in_RSI = piVar24;
          piVar24 = local_50;
        }
        else {
          in_RCX = (iovec *)((long)&piVar24->iov_base + (long)unaff_R15);
          if (CARRY8((ulong)in_RSI,(ulong)piVar24) != false) {
            in_RDI[1] = (pthread_mutex_t *)piVar18;
            *(undefined *)((long)&piVar18->iov_base + (long)unaff_R15) = 0;
            in_RCX = (iovec *)((long)&in_RDI[1]->field_0x0 + (long)&(*in_RDI)->field_0x0);
          }
        }
        piVar18 = (iovec *)((long)&in_RCX[-1].iov_len + 7);
        piVar11 = (iovec *)((undefined *)((long)(unaff_R15 + 0xffffffffffffffff) + 0x27) +
                           (long)piVar24);
        piVar21 = in_RCX;
        ppVar5 = unaff_R14;
        if ((iovec *)((undefined *)((long)(unaff_R15 + 0xffffffffffffffff) + 0x27) + (long)piVar24)
            < piVar18) {
          do {
            while( true ) {
              unaff_R14 = ppVar5;
              in_RCX = piVar21;
              cVar9 = *(char *)&piVar11->iov_base;
              piVar21 = piVar18;
              if (cVar9 == '\v') {
                *(undefined *)&piVar11->iov_base = 10;
                *(undefined *)((long)&in_RCX[-1].iov_len + 7) = 0x31;
                cVar9 = *(char *)&piVar11->iov_base;
                piVar21 = (iovec *)((long)&in_RCX[-1].iov_len + 6);
              }
              if (cVar9 != '\n') break;
              piVar24 = (iovec *)((long)&piVar11[-1].iov_len + 7);
              in_RCX = (iovec *)((long)(unaff_R14 + 0xffffffffffffffff) + 0x20);
              *(undefined **)unaff_R14 = (undefined *)((long)&piVar21->iov_base + 1);
              *(undefined *)&piVar21->iov_base = *(undefined *)&piVar11->iov_base;
              piVar18 = (iovec *)((long)&piVar21[-1].iov_len + 7);
              piVar11 = piVar24;
              in_RSI = piVar18;
              ppVar5 = (pthread_mutex_t *)in_RCX;
              if (piVar18 <= piVar24) goto LAB_00402d10;
            }
            *(char *)&piVar21->iov_base = cVar9;
            piVar11 = (iovec *)((long)&piVar11[-1].iov_len + 7);
            piVar18 = (iovec *)((long)&piVar21[-1].iov_len + 7);
            in_RSI = piVar18;
            ppVar5 = unaff_R14;
          } while (piVar11 < piVar18);
        }
      }
    }
    goto LAB_00402d10;
  }
LAB_00403068:
  uVar29 = (ulong)uVar10;
  uStack96 = 0x40306f;
  std::__throw_system_error(uVar10);
  this = *(long ***)(uVar29 + 8);
  ppStack104 = (pthread_mutex_t *)0x40307d;
  loop();
  auVar7 = vpxor_avx(auVar32,auVar32);
  pplVar1 = this + 2;
  pcStack136 = __pthread_key_create;
  auVar32 = vmovdqu_avx(auVar7);
  *(undefined (*) [16])(this + 4) = auVar32;
  auVar7 = vpxor_avx(auVar7,auVar7);
  *this = (long *)pplVar1;
  this[1] = (long *)0x0;
  *(undefined *)(this + 2) = 0;
  this[6] = (long *)0x0;
  *(undefined4 *)(this + 7) = 0;
  *(undefined *)((long)this + 0x3c) = 0;
  auVar32 = vmovdqu_avx(auVar7);
  *(undefined (*) [16])(this + 8) = auVar32;
  auVar32 = vmovdqu_avx(auVar7);
  *(undefined (*) [16])(this + 10) = auVar32;
  this[0xc] = (long *)0x0;
  ppStack112 = unaff_R14;
  ppStack104 = unaff_R15;
  std::condition_variable::condition_variable((condition_variable *)(this + 0xd));
  this[0x13] = (long *)0x0;
  this[0x14] = (long *)0x0;
  this[0x15] = (long *)0x0;
  this[0x16] = (long *)0x0;
  this[0x17] = (long *)0x0;
  if (in_RCX < (iovec *)0xa) {
LAB_00403a76:
    puStack272 = &uStack232;
    uStack232 = (ulong)uStack232._1_7_ << 8;
    sStack240 = 1;
    puStack248 = puStack272;
LAB_00403985:
    *(char *)((long)puStack248 + sStack240) = '\0';
    uVar10 = (int)sStack240 - 1;
    piVar24 = in_RCX;
    if (in_RCX < (iovec *)0x64) goto LAB_0040324b;
  }
  else {
    if (in_RCX < (iovec *)0x64) {
      puStack248 = &uStack232;
      sStack240 = 2;
LAB_00403976:
      memset(puStack248,0,sStack240);
      goto LAB_00403985;
    }
    if (in_RCX < (iovec *)0x3e8) {
      puStack248 = &uStack232;
      sStack240 = 3;
      goto LAB_00403976;
    }
    piVar24 = in_RCX;
    uVar10 = 1;
    if (in_RCX < (iovec *)0x2710) {
      puStack248 = &uStack232;
      sStack240 = 4;
      goto LAB_00403976;
    }
    do {
      uVar25 = uVar10;
      if (piVar24 < (iovec *)0x186a0) {
        sStack240 = (size_t)(uVar25 + 4);
        goto LAB_004031b5;
      }
      if (piVar24 < (iovec *)0xf4240) {
        sStack240 = (size_t)(uVar25 + 5);
        goto LAB_004031b5;
      }
      if (piVar24 < (iovec *)0x989680) {
        sStack240 = (size_t)(uVar25 + 6);
        goto LAB_004031b5;
      }
      bVar6 = (iovec *)0x5f5e0ff < piVar24;
      piVar24 = (iovec *)((ulong)piVar24 / 10000);
      uVar10 = uVar25 + 4;
    } while (bVar6);
    sStack240 = (size_t)(uVar25 + 7);
LAB_004031b5:
    puStack248 = &uStack232;
    if (0xf < sStack240) {
      puStack248 = (undefined8 *)operator_new(sStack240 + 1);
      uStack232 = sStack240;
      goto LAB_00403976;
    }
    if (sStack240 != 0) {
      if (sStack240 == 1) goto LAB_00403a76;
      goto LAB_00403976;
    }
    sStack240 = 0;
    uStack232 = (ulong)uStack232._1_7_ << 8;
    uVar10 = 0xffffffff;
    piVar24 = in_RCX;
  }
  do {
    in_RCX = (iovec *)(((ulong)piVar24 >> 2) / 0x19);
    lVar30 = (long)((long)piVar24 + (long)in_RCX * -100) * 2;
    cVar9 = std::__detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::
            __digits[lVar30];
    *(undefined1 *)((long)puStack248 + (ulong)uVar10) =
         std::__detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::
         __digits[lVar30 + 1];
    uVar25 = uVar10 - 1;
    uVar10 = uVar10 - 2;
    *(char *)((long)puStack248 + (ulong)uVar25) = cVar9;
    bVar6 = (iovec *)0x270f < piVar24;
    piVar24 = in_RCX;
  } while (bVar6);
LAB_0040324b:
  puStack272 = &uStack232;
  cVar9 = (char)in_RCX + '0';
  if ((iovec *)0x9 < in_RCX) {
    *(undefined1 *)((long)puStack248 + 1) =
         std::__detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::
         __digits[(long)in_RCX * 2 + 1];
    cVar9 = std::__detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::
            __digits[(long)in_RCX * 2];
  }
  *(char *)puStack248 = cVar9;
  *(int *)(this + 7) = (int)sStack240 + 1;
  *(char *)((long)this + 0x3c) = *(char *)puStack248 + -0x30;
  plVar22 = (long *)((extraout_RDX * 0xef) / 0xf + 1);
  if ((long **)*this == pplVar1) {
    plVar31 = (long *)0xf;
  }
  else {
    plVar31 = this[2];
  }
  if (plVar31 < plVar22) {
    plVar12 = (long *)((long)plVar31 * 2);
    if ((long *)((long)plVar31 * 2) < plVar22) {
      plVar12 = plVar22;
    }
    plVar22 = (long *)operator_new((long)plVar12 + 1);
    pplVar28 = (long **)*this;
    sVar27 = (long)this[1] + 1;
    if (this[1] == (long *)0x0) {
      *(undefined *)plVar22 = *(undefined *)pplVar28;
    }
    else if (sVar27 != 0) {
      memcpy(plVar22,pplVar28,sVar27);
    }
    if (pplVar28 != pplVar1) {
      operator_delete(pplVar28,(long)this[2] + 1);
    }
    *this = plVar22;
    this[2] = plVar12;
  }
  if (extraout_RDX >> 0x3c != 0) {
                    // WARNING: Subroutine does not return
    std::__throw_length_error("vector::reserve");
  }
  plVar22 = this[4];
  uVar29 = (long)this[6] - (long)plVar22;
  if ((ulong)((long)uVar29 >> 3) < extraout_RDX) {
    plVar31 = this[5];
    plVar12 = (long *)0x0;
    lVar30 = (long)plVar31 - (long)plVar22;
    if (extraout_RDX != 0) {
      plVar12 = (long *)operator_new(extraout_RDX * 8);
      plVar22 = this[4];
      plVar31 = this[5];
      uVar29 = (long)this[6] - (long)plVar22;
    }
    if (plVar22 != plVar31) {
      plVar13 = plVar12;
      plVar23 = plVar22;
      do {
        lVar4 = *plVar23;
        plVar14 = plVar13 + 1;
        plVar23 = plVar23 + 1;
        *plVar13 = lVar4;
        plVar13 = plVar14;
      } while (plVar14 != (long *)(((long)plVar31 - (long)plVar22) + (long)plVar12));
    }
    if (plVar22 != (long *)0x0) {
      operator_delete(plVar22,uVar29);
    }
    auVar32 = vmovq_avx(plVar12);
    auVar32 = vpinsrq_avx(auVar32,lVar30 + (long)plVar12,1);
    this[6] = plVar12 + extraout_RDX;
    auVar32 = vmovdqu_avx(auVar32);
    *(undefined (*) [16])(this + 4) = auVar32;
  }
  ppvVar8 = &in_RSI->iov_base;
  do {
    if ((iovec *)((long)ppvVar8 + extraout_RDX) <= in_RSI) {
      this[0x15] = *this;
      if (puStack248 != puStack272) {
        operator_delete(puStack248,uStack232 + 1);
      }
      return;
    }
    if ((ulong)((long)in_RSI * -0x1111111111111111) < 0x1111111111111112) {
      plVar22 = this[1];
      if (0x7fffffffffffffffU - (long)plVar22 < 9) {
LAB_00403b4e:
                    // WARNING: Subroutine does not return
        std::__throw_length_error("basic_string::append");
      }
      plVar31 = (long *)((long)plVar22 + 9);
      if (pplVar1 == (long **)*this) {
        plVar12 = (long *)0xf;
      }
      else {
        plVar12 = this[2];
      }
      if (plVar12 < plVar31) {
        std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_mutate
                  ((basic_string_char_std__char_traits_char__std__allocator_char__ *)this,
                   (ulong)plVar22,0,"FizzBuzz\n",9);
      }
      else {
        puVar16 = (undefined8 *)((long)*this + (long)plVar22);
        *puVar16 = 0x7a7a75427a7a6946;
        *(undefined *)(puVar16 + 1) = 10;
      }
LAB_00403480:
      this[1] = plVar31;
      *(undefined *)((long)*this + (long)plVar31) = 0;
    }
    else {
      if ((ulong)((long)in_RSI * -0x3333333333333333) < 0x3333333333333334) {
        plVar22 = this[1];
        if (0x7fffffffffffffffU - (long)plVar22 < 5) goto LAB_00403b4e;
        plVar31 = (long *)((long)plVar22 + 5);
        if (pplVar1 == (long **)*this) {
          plVar12 = (long *)0xf;
        }
        else {
          plVar12 = this[2];
        }
        if (plVar12 < plVar31) {
          std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_mutate
                    ((basic_string_char_std__char_traits_char__std__allocator_char__ *)this,
                     (ulong)plVar22,0,"Buzz\n",5);
        }
        else {
          puVar15 = (undefined4 *)((long)*this + (long)plVar22);
          *puVar15 = 0x7a7a7542;
          *(undefined *)(puVar15 + 1) = 10;
        }
        goto LAB_00403480;
      }
      if ((ulong)((long)in_RSI * -0x5555555555555555) < 0x5555555555555556) {
        plVar22 = this[1];
        if (0x7fffffffffffffffU - (long)plVar22 < 5) goto LAB_00403b4e;
        plVar31 = (long *)((long)plVar22 + 5);
        if (pplVar1 == (long **)*this) {
          plVar12 = (long *)0xf;
        }
        else {
          plVar12 = this[2];
        }
        if (plVar12 < plVar31) {
          std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_mutate
                    ((basic_string_char_std__char_traits_char__std__allocator_char__ *)this,
                     (ulong)plVar22,0,"Fizz\n",5);
        }
        else {
          puVar15 = (undefined4 *)((long)*this + (long)plVar22);
          *puVar15 = 0x7a7a6946;
          *(undefined *)(puVar15 + 1) = 10;
        }
        goto LAB_00403480;
      }
      uStack168._1_7_ = (uint7)(uStack168 >> 8);
      if (in_RSI < (iovec *)0xa) {
LAB_00403a4a:
        puStack184 = &uStack168;
        uStack168 = (ulong)uStack168._1_7_ << 8;
        sVar27 = 1;
LAB_004038e6:
        *(char *)((long)puStack184 + sVar27) = '\0';
        uStack176._0_4_ = (int)sVar27;
        uVar29 = (ulong)((int)uStack176 - 1);
        piVar24 = in_RSI;
        piVar18 = in_RSI;
        uStack176 = sVar27;
        if ((iovec *)0x63 < in_RSI) goto LAB_00403640;
      }
      else {
        if (in_RSI < (iovec *)0x64) {
          puStack184 = &uStack168;
          sVar27 = 2;
LAB_004038d0:
          memset(puStack184,0,sVar27);
          goto LAB_004038e6;
        }
        if (in_RSI < (iovec *)0x3e8) {
          puStack184 = &uStack168;
          sVar27 = 3;
          goto LAB_004038d0;
        }
        sVar27 = 1;
        piVar24 = in_RSI;
        if (in_RSI < (iovec *)0x2710) {
          puStack184 = &uStack168;
          sVar27 = 4;
          goto LAB_004038d0;
        }
        do {
          iVar26 = (int)sVar27;
          sVar27 = (size_t)(iVar26 + 4);
          if (piVar24 < (iovec *)0x186a0) goto LAB_004035f4;
          if (piVar24 < (iovec *)0xf4240) {
            sVar27 = (size_t)(iVar26 + 5);
            goto LAB_004035f4;
          }
          if (piVar24 < (iovec *)0x989680) {
            sVar27 = (size_t)(iVar26 + 6);
            goto LAB_004035f4;
          }
          bVar6 = (iovec *)0x5f5e0ff < piVar24;
          piVar24 = (iovec *)((ulong)piVar24 / 10000);
        } while (bVar6);
        sVar27 = (size_t)(iVar26 + 7);
LAB_004035f4:
        puStack184 = &uStack168;
        if (0xf < sVar27) {
          puStack184 = (undefined8 *)operator_new(sVar27 + 1);
          uStack168 = sVar27;
          goto LAB_004038d0;
        }
        if (sVar27 != 0) {
          if (sVar27 == 1) goto LAB_00403a4a;
          goto LAB_004038d0;
        }
        uStack176 = 0;
        uStack168 = (ulong)uStack168._1_7_ << 8;
        uVar29 = 0xffffffff;
        piVar18 = in_RSI;
LAB_00403640:
        do {
          piVar24 = (iovec *)(((ulong)piVar18 >> 2) / 0x19);
          iVar26 = (int)uVar29;
          lVar30 = ((long)piVar18 + (long)piVar24 * -100) * 2;
          cVar9 = std::__detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)
                  ::__digits[lVar30];
          *(undefined1 *)((long)puStack184 + uVar29) =
               std::__detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::
               __digits[lVar30 + 1];
          uVar29 = (ulong)(iVar26 - 2);
          *(char *)((long)puStack184 + (ulong)(iVar26 - 1)) = cVar9;
          bVar6 = (iovec *)0x270f < piVar18;
          piVar18 = piVar24;
        } while (bVar6);
      }
      cVar9 = (char)piVar24 + '0';
      if ((iovec *)0x9 < piVar24) {
        *(undefined1 *)((long)puStack184 + 1) =
             std::__detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::
             __digits[(long)piVar24 * 2 + 1];
        cVar9 = std::__detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::
                __digits[(long)piVar24 * 2];
      }
      *(char *)puStack184 = cVar9;
      ppcVar17 = (char **)std::__cxx11::
                          basic_string<char,std::char_traits<char>,std::allocator<char>>::
                          _M_replace_aux((basic_string_char_std__char_traits_char__std__allocator_char__
                                          *)&puStack184,uStack176,0,1,'\n');
      ppcStack216 = (char **)auStack200;
      if ((char **)*ppcVar17 == ppcVar17 + 2) {
        auStack200 = vmovdqu_avx(*(undefined (*) [16])(ppcVar17 + 2));
      }
      else {
        auStack200 = CONCAT88(auStack200._8_8_,ppcVar17[2]);
        ppcStack216 = (char **)*ppcVar17;
      }
      pcStack208 = ppcVar17[1];
      *(undefined *)(ppcVar17 + 2) = 0;
      ppcVar17[1] = (char *)0x0;
      plVar31 = this[1];
      *ppcVar17 = (char *)(ppcVar17 + 2);
      pplVar28 = (long **)*this;
      plVar22 = (long *)(pcStack208 + (long)plVar31);
      if (pplVar1 == pplVar28) {
        plVar12 = (long *)0xf;
      }
      else {
        plVar12 = this[2];
      }
      if (plVar12 < plVar22) {
        std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_mutate
                  ((basic_string_char_std__char_traits_char__std__allocator_char__ *)this,
                   (ulong)plVar31,0,(char *)ppcStack216,(ulong)pcStack208);
        pplVar28 = (long **)*this;
      }
      else if (pcStack208 != (char *)0x0) {
        if (pcStack208 == (char *)0x1) {
          *(char *)((long)pplVar28 + (long)plVar31) = *(char *)ppcStack216;
          pplVar28 = (long **)*this;
        }
        else {
          memcpy((char *)((long)pplVar28 + (long)plVar31),ppcStack216,(size_t)pcStack208);
          pplVar28 = (long **)*this;
        }
      }
      this[1] = plVar22;
      *(undefined *)((long)pplVar28 + (long)plVar22) = 0;
      if (ppcStack216 != (char **)auStack200) {
        operator_delete(ppcStack216,auStack200._0_8_ + 1);
      }
      if (puStack184 != &uStack168) {
        operator_delete(puStack184,uStack168 + 1);
      }
    }
    puStack184 = (undefined8 *)((long)this[1] + (long)*this);
    plVar22 = this[5];
    if (plVar22 == this[6]) {
      in_RSI = (iovec *)((long)&in_RSI->iov_base + 1);
      std::
      vector<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>>
      ::
      _M_realloc_insert___gnu_cxx____normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____
                ((vector___gnu_cxx____normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator___gnu_cxx____normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char_____
                  *)(this + 4),(__normal_iterator)plVar22,(__normal_iterator *)&puStack184);
    }
    else {
      *plVar22 = (long)puStack184;
      in_RSI = (iovec *)((long)&in_RSI->iov_base + 1);
      this[5] = plVar22 + 1;
    }
  } while( true );
}



// WARNING: Could not reconcile some variable overlaps
// std::thread::_State_impl<std::thread::_Invoker<std::tuple<main::{lambda(worker*)#1},
// worker*>>>::_M_run()

void std::thread::_State_impl<std::thread::_Invoker<std::tuple<main::{lambda(worker*)#1},worker*>>>
     ::_M_run(void)

{
  long **pplVar1;
  long lVar2;
  bool bVar3;
  undefined auVar4 [16];
  char cVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  char **ppcVar11;
  uint uVar12;
  ulong in_RCX;
  ulong uVar13;
  ulong extraout_RDX;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  uint uVar17;
  int iVar18;
  ulong in_RSI;
  size_t sVar19;
  ulong uVar20;
  long in_RDI;
  long **this;
  long **pplVar21;
  ulong uVar22;
  long lVar23;
  long *plVar24;
  undefined auVar25 [16];
  undefined in_YMM0 [32];
  undefined8 *puStack184;
  undefined8 *puStack160;
  size_t sStack152;
  undefined8 uStack144;
  char **ppcStack128;
  char *pcStack120;
  undefined auStack112 [16];
  undefined8 *puStack96;
  ulong uStack88;
  undefined8 uStack80;
  
  auVar25 = SUB3216(in_YMM0,0);
  this = *(long ***)(in_RDI + 8);
  worker::loop();
  auVar4 = vpxor_avx(auVar25,auVar25);
  pplVar1 = this + 2;
  auVar25 = vmovdqu_avx(auVar4);
  *(undefined (*) [16])(this + 4) = auVar25;
  auVar4 = vpxor_avx(auVar4,auVar4);
  *this = (long *)pplVar1;
  this[1] = (long *)0x0;
  *(undefined *)(this + 2) = 0;
  this[6] = (long *)0x0;
  *(undefined4 *)(this + 7) = 0;
  *(undefined *)((long)this + 0x3c) = 0;
  auVar25 = vmovdqu_avx(auVar4);
  *(undefined (*) [16])(this + 8) = auVar25;
  auVar25 = vmovdqu_avx(auVar4);
  *(undefined (*) [16])(this + 10) = auVar25;
  this[0xc] = (long *)0x0;
  std::condition_variable::condition_variable((condition_variable *)(this + 0xd));
  this[0x13] = (long *)0x0;
  this[0x14] = (long *)0x0;
  this[0x15] = (long *)0x0;
  this[0x16] = (long *)0x0;
  this[0x17] = (long *)0x0;
  if (in_RCX < 10) {
LAB_00403a76:
    puStack184 = &uStack144;
    uStack144 = (ulong)uStack144._1_7_ << 8;
    sStack152 = 1;
    puStack160 = puStack184;
LAB_00403985:
    *(char *)((long)puStack160 + sStack152) = '\0';
    uVar12 = (int)sStack152 - 1;
    uVar22 = in_RCX;
    if (in_RCX < 100) goto LAB_0040324b;
  }
  else {
    if (in_RCX < 100) {
      puStack160 = &uStack144;
      sStack152 = 2;
LAB_00403976:
      memset(puStack160,0,sStack152);
      goto LAB_00403985;
    }
    if (in_RCX < 1000) {
      puStack160 = &uStack144;
      sStack152 = 3;
      goto LAB_00403976;
    }
    uVar22 = in_RCX;
    uVar12 = 1;
    if (in_RCX < 10000) {
      puStack160 = &uStack144;
      sStack152 = 4;
      goto LAB_00403976;
    }
    do {
      uVar17 = uVar12;
      if (uVar22 < 100000) {
        sStack152 = (size_t)(uVar17 + 4);
        goto LAB_004031b5;
      }
      if (uVar22 < 1000000) {
        sStack152 = (size_t)(uVar17 + 5);
        goto LAB_004031b5;
      }
      if (uVar22 < 10000000) {
        sStack152 = (size_t)(uVar17 + 6);
        goto LAB_004031b5;
      }
      bVar3 = 99999999 < uVar22;
      uVar22 = uVar22 / 10000;
      uVar12 = uVar17 + 4;
    } while (bVar3);
    sStack152 = (size_t)(uVar17 + 7);
LAB_004031b5:
    puStack160 = &uStack144;
    if (0xf < sStack152) {
      puStack160 = (undefined8 *)operator_new(sStack152 + 1);
      uStack144 = sStack152;
      goto LAB_00403976;
    }
    if (sStack152 != 0) {
      if (sStack152 == 1) goto LAB_00403a76;
      goto LAB_00403976;
    }
    sStack152 = 0;
    uStack144 = (ulong)uStack144._1_7_ << 8;
    uVar12 = 0xffffffff;
    uVar22 = in_RCX;
  }
  do {
    in_RCX = (uVar22 >> 2) / 0x19;
    lVar23 = (uVar22 + in_RCX * -100) * 2;
    cVar5 = __detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::__digits
            [lVar23];
    *(undefined1 *)((long)puStack160 + (ulong)uVar12) =
         __detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::__digits
         [lVar23 + 1];
    uVar17 = uVar12 - 1;
    uVar12 = uVar12 - 2;
    *(char *)((long)puStack160 + (ulong)uVar17) = cVar5;
    bVar3 = 9999 < uVar22;
    uVar22 = in_RCX;
  } while (bVar3);
LAB_0040324b:
  puStack184 = &uStack144;
  cVar5 = (char)in_RCX + '0';
  if (9 < in_RCX) {
    *(undefined1 *)((long)puStack160 + 1) =
         __detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::__digits
         [in_RCX * 2 + 1];
    cVar5 = __detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::__digits
            [in_RCX * 2];
  }
  *(char *)puStack160 = cVar5;
  *(int *)(this + 7) = (int)sStack152 + 1;
  *(char *)((long)this + 0x3c) = *(char *)puStack160 + -0x30;
  plVar14 = (long *)((extraout_RDX * 0xef) / 0xf + 1);
  if ((long **)*this == pplVar1) {
    plVar24 = (long *)0xf;
  }
  else {
    plVar24 = this[2];
  }
  if (plVar24 < plVar14) {
    plVar6 = (long *)((long)plVar24 * 2);
    if ((long *)((long)plVar24 * 2) < plVar14) {
      plVar6 = plVar14;
    }
    plVar14 = (long *)operator_new((long)plVar6 + 1);
    pplVar21 = (long **)*this;
    sVar19 = (long)this[1] + 1;
    if (this[1] == (long *)0x0) {
      *(undefined *)plVar14 = *(undefined *)pplVar21;
    }
    else if (sVar19 != 0) {
      memcpy(plVar14,pplVar21,sVar19);
    }
    if (pplVar21 != pplVar1) {
      operator_delete(pplVar21,(long)this[2] + 1);
    }
    *this = plVar14;
    this[2] = plVar6;
  }
  if (extraout_RDX >> 0x3c != 0) {
                    // WARNING: Subroutine does not return
    std::__throw_length_error("vector::reserve");
  }
  plVar14 = this[4];
  uVar22 = (long)this[6] - (long)plVar14;
  if ((ulong)((long)uVar22 >> 3) < extraout_RDX) {
    plVar24 = this[5];
    plVar6 = (long *)0x0;
    lVar23 = (long)plVar24 - (long)plVar14;
    if (extraout_RDX != 0) {
      plVar6 = (long *)operator_new(extraout_RDX * 8);
      plVar14 = this[4];
      plVar24 = this[5];
      uVar22 = (long)this[6] - (long)plVar14;
    }
    if (plVar14 != plVar24) {
      plVar7 = plVar6;
      plVar15 = plVar14;
      do {
        lVar2 = *plVar15;
        plVar8 = plVar7 + 1;
        plVar15 = plVar15 + 1;
        *plVar7 = lVar2;
        plVar7 = plVar8;
      } while (plVar8 != (long *)(((long)plVar24 - (long)plVar14) + (long)plVar6));
    }
    if (plVar14 != (long *)0x0) {
      operator_delete(plVar14,uVar22);
    }
    auVar25 = vmovq_avx(plVar6);
    auVar25 = vpinsrq_avx(auVar25,lVar23 + (long)plVar6,1);
    this[6] = plVar6 + extraout_RDX;
    auVar25 = vmovdqu_avx(auVar25);
    *(undefined (*) [16])(this + 4) = auVar25;
  }
  uVar22 = extraout_RDX + in_RSI;
  do {
    if (uVar22 <= in_RSI) {
      this[0x15] = *this;
      if (puStack160 != puStack184) {
        operator_delete(puStack160,uStack144 + 1);
      }
      return;
    }
    if (in_RSI * -0x1111111111111111 < 0x1111111111111112) {
      plVar14 = this[1];
      if (0x7fffffffffffffffU - (long)plVar14 < 9) {
LAB_00403b4e:
                    // WARNING: Subroutine does not return
        std::__throw_length_error("basic_string::append");
      }
      plVar24 = (long *)((long)plVar14 + 9);
      if (pplVar1 == (long **)*this) {
        plVar6 = (long *)0xf;
      }
      else {
        plVar6 = this[2];
      }
      if (plVar6 < plVar24) {
        __cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_mutate
                  ((basic_string_char_std__char_traits_char__std__allocator_char__ *)this,
                   (ulong)plVar14,0,"FizzBuzz\n",9);
      }
      else {
        puVar10 = (undefined8 *)((long)*this + (long)plVar14);
        *puVar10 = 0x7a7a75427a7a6946;
        *(undefined *)(puVar10 + 1) = 10;
      }
LAB_00403480:
      this[1] = plVar24;
      *(undefined *)((long)*this + (long)plVar24) = 0;
    }
    else {
      if (in_RSI * -0x3333333333333333 < 0x3333333333333334) {
        plVar14 = this[1];
        if (0x7fffffffffffffffU - (long)plVar14 < 5) goto LAB_00403b4e;
        plVar24 = (long *)((long)plVar14 + 5);
        if (pplVar1 == (long **)*this) {
          plVar6 = (long *)0xf;
        }
        else {
          plVar6 = this[2];
        }
        if (plVar6 < plVar24) {
          __cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_mutate
                    ((basic_string_char_std__char_traits_char__std__allocator_char__ *)this,
                     (ulong)plVar14,0,"Buzz\n",5);
        }
        else {
          puVar9 = (undefined4 *)((long)*this + (long)plVar14);
          *puVar9 = 0x7a7a7542;
          *(undefined *)(puVar9 + 1) = 10;
        }
        goto LAB_00403480;
      }
      if (in_RSI * -0x5555555555555555 < 0x5555555555555556) {
        plVar14 = this[1];
        if (0x7fffffffffffffffU - (long)plVar14 < 5) goto LAB_00403b4e;
        plVar24 = (long *)((long)plVar14 + 5);
        if (pplVar1 == (long **)*this) {
          plVar6 = (long *)0xf;
        }
        else {
          plVar6 = this[2];
        }
        if (plVar6 < plVar24) {
          __cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_mutate
                    ((basic_string_char_std__char_traits_char__std__allocator_char__ *)this,
                     (ulong)plVar14,0,"Fizz\n",5);
        }
        else {
          puVar9 = (undefined4 *)((long)*this + (long)plVar14);
          *puVar9 = 0x7a7a6946;
          *(undefined *)(puVar9 + 1) = 10;
        }
        goto LAB_00403480;
      }
      uStack80._1_7_ = (uint7)(uStack80 >> 8);
      if (in_RSI < 10) {
LAB_00403a4a:
        puStack96 = &uStack80;
        uStack80 = (ulong)uStack80._1_7_ << 8;
        sVar19 = 1;
LAB_004038e6:
        *(char *)((long)puStack96 + sVar19) = '\0';
        uStack88._0_4_ = (int)sVar19;
        uVar20 = (ulong)((int)uStack88 - 1);
        uVar16 = in_RSI;
        uVar13 = in_RSI;
        uStack88 = sVar19;
        if (99 < in_RSI) goto LAB_00403640;
      }
      else {
        if (in_RSI < 100) {
          puStack96 = &uStack80;
          sVar19 = 2;
LAB_004038d0:
          memset(puStack96,0,sVar19);
          goto LAB_004038e6;
        }
        if (in_RSI < 1000) {
          puStack96 = &uStack80;
          sVar19 = 3;
          goto LAB_004038d0;
        }
        sVar19 = 1;
        uVar16 = in_RSI;
        if (in_RSI < 10000) {
          puStack96 = &uStack80;
          sVar19 = 4;
          goto LAB_004038d0;
        }
        do {
          iVar18 = (int)sVar19;
          sVar19 = (size_t)(iVar18 + 4);
          if (uVar16 < 100000) goto LAB_004035f4;
          if (uVar16 < 1000000) {
            sVar19 = (size_t)(iVar18 + 5);
            goto LAB_004035f4;
          }
          if (uVar16 < 10000000) {
            sVar19 = (size_t)(iVar18 + 6);
            goto LAB_004035f4;
          }
          bVar3 = 99999999 < uVar16;
          uVar16 = uVar16 / 10000;
        } while (bVar3);
        sVar19 = (size_t)(iVar18 + 7);
LAB_004035f4:
        puStack96 = &uStack80;
        if (0xf < sVar19) {
          puStack96 = (undefined8 *)operator_new(sVar19 + 1);
          uStack80 = sVar19;
          goto LAB_004038d0;
        }
        if (sVar19 != 0) {
          if (sVar19 == 1) goto LAB_00403a4a;
          goto LAB_004038d0;
        }
        uStack88 = 0;
        uStack80 = (ulong)uStack80._1_7_ << 8;
        uVar20 = 0xffffffff;
        uVar13 = in_RSI;
LAB_00403640:
        do {
          uVar16 = (uVar13 >> 2) / 0x19;
          iVar18 = (int)uVar20;
          lVar23 = (uVar13 + uVar16 * -100) * 2;
          cVar5 = __detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::
                  __digits[lVar23];
          *(undefined1 *)((long)puStack96 + uVar20) =
               __detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::
               __digits[lVar23 + 1];
          uVar20 = (ulong)(iVar18 - 2);
          *(char *)((long)puStack96 + (ulong)(iVar18 - 1)) = cVar5;
          bVar3 = 9999 < uVar13;
          uVar13 = uVar16;
        } while (bVar3);
      }
      cVar5 = (char)uVar16 + '0';
      if (9 < uVar16) {
        *(undefined1 *)((long)puStack96 + 1) =
             __detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::__digits
             [uVar16 * 2 + 1];
        cVar5 = __detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::
                __digits[uVar16 * 2];
      }
      *(char *)puStack96 = cVar5;
      ppcVar11 = (char **)__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                          _M_replace_aux((basic_string_char_std__char_traits_char__std__allocator_char__
                                          *)&puStack96,uStack88,0,1,'\n');
      ppcStack128 = (char **)auStack112;
      if ((char **)*ppcVar11 == ppcVar11 + 2) {
        auStack112 = vmovdqu_avx(*(undefined (*) [16])(ppcVar11 + 2));
      }
      else {
        auStack112 = CONCAT88(auStack112._8_8_,ppcVar11[2]);
        ppcStack128 = (char **)*ppcVar11;
      }
      pcStack120 = ppcVar11[1];
      *(undefined *)(ppcVar11 + 2) = 0;
      ppcVar11[1] = (char *)0x0;
      plVar24 = this[1];
      *ppcVar11 = (char *)(ppcVar11 + 2);
      pplVar21 = (long **)*this;
      plVar14 = (long *)(pcStack120 + (long)plVar24);
      if (pplVar1 == pplVar21) {
        plVar6 = (long *)0xf;
      }
      else {
        plVar6 = this[2];
      }
      if (plVar6 < plVar14) {
        __cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_mutate
                  ((basic_string_char_std__char_traits_char__std__allocator_char__ *)this,
                   (ulong)plVar24,0,(char *)ppcStack128,(ulong)pcStack120);
        pplVar21 = (long **)*this;
      }
      else if (pcStack120 != (char *)0x0) {
        if (pcStack120 == (char *)0x1) {
          *(char *)((long)pplVar21 + (long)plVar24) = *(char *)ppcStack128;
          pplVar21 = (long **)*this;
        }
        else {
          memcpy((char *)((long)pplVar21 + (long)plVar24),ppcStack128,(size_t)pcStack120);
          pplVar21 = (long **)*this;
        }
      }
      this[1] = plVar14;
      *(undefined *)((long)pplVar21 + (long)plVar14) = 0;
      if (ppcStack128 != (char **)auStack112) {
        operator_delete(ppcStack128,auStack112._0_8_ + 1);
      }
      if (puStack96 != &uStack80) {
        operator_delete(puStack96,uStack80 + 1);
      }
    }
    puStack96 = (undefined8 *)((long)this[1] + (long)*this);
    plVar14 = this[5];
    if (plVar14 == this[6]) {
      in_RSI = in_RSI + 1;
      vector<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>>
      ::
      _M_realloc_insert___gnu_cxx____normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____
                ((vector___gnu_cxx____normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator___gnu_cxx____normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char_____
                  *)(this + 4),(__normal_iterator)plVar14,(__normal_iterator *)&puStack96);
    }
    else {
      *plVar14 = (long)puStack96;
      in_RSI = in_RSI + 1;
      this[5] = plVar14 + 1;
    }
  } while( true );
}



// WARNING: Could not reconcile some variable overlaps
// worker::worker(unsigned long, unsigned long, unsigned long)

void __thiscall worker::worker(worker *this,ulong param_1,ulong param_2,ulong param_3)

{
  worker *pwVar1;
  undefined auVar2 [16];
  worker *pwVar3;
  undefined8 uVar4;
  long *plVar5;
  bool bVar6;
  undefined auVar7 [16];
  char cVar8;
  worker *pwVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  worker **ppwVar15;
  worker *pwVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  int iVar24;
  undefined8 *puVar25;
  size_t sVar26;
  long lVar27;
  undefined in_YMM0 [32];
  undefined8 *local_b0;
  undefined8 *local_98;
  size_t local_90;
  undefined8 local_88;
  worker **local_78;
  worker *local_70;
  undefined local_68 [16];
  undefined8 *local_58;
  size_t local_50;
  undefined8 local_48;
  
  auVar7 = vpxor_avx(SUB3216(in_YMM0,0),SUB3216(in_YMM0,0));
  pwVar1 = this + 0x10;
  auVar2 = vmovdqu_avx(auVar7);
  *(undefined (*) [16])(this + 0x20) = auVar2;
  auVar7 = vpxor_avx(auVar7,auVar7);
  *(worker **)this = pwVar1;
  *(undefined8 *)(this + 8) = 0;
  this[0x10] = (worker)0x0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  this[0x3c] = (worker)0x0;
  auVar2 = vmovdqu_avx(auVar7);
  *(undefined (*) [16])(this + 0x40) = auVar2;
  auVar2 = vmovdqu_avx(auVar7);
  *(undefined (*) [16])(this + 0x50) = auVar2;
  *(undefined8 *)(this + 0x60) = 0;
  std::condition_variable::condition_variable((condition_variable *)(this + 0x68));
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  if (param_3 < 10) {
LAB_00403a76:
    local_b0 = &local_88;
    local_88 = (ulong)local_88._1_7_ << 8;
    local_90 = 1;
    local_98 = local_b0;
LAB_00403985:
    *(char *)((long)local_98 + local_90) = '\0';
    uVar17 = (int)local_90 - 1;
    uVar19 = param_3;
    if (param_3 < 100) goto LAB_0040324b;
  }
  else {
    if (param_3 < 100) {
      local_98 = &local_88;
      local_90 = 2;
LAB_00403976:
      memset(local_98,0,local_90);
      goto LAB_00403985;
    }
    if (param_3 < 1000) {
      local_98 = &local_88;
      local_90 = 3;
      goto LAB_00403976;
    }
    uVar19 = param_3;
    uVar17 = 1;
    if (param_3 < 10000) {
      local_98 = &local_88;
      local_90 = 4;
      goto LAB_00403976;
    }
    do {
      uVar23 = uVar17;
      if (uVar19 < 100000) {
        local_90 = (size_t)(uVar23 + 4);
        goto LAB_004031b5;
      }
      if (uVar19 < 1000000) {
        local_90 = (size_t)(uVar23 + 5);
        goto LAB_004031b5;
      }
      if (uVar19 < 10000000) {
        local_90 = (size_t)(uVar23 + 6);
        goto LAB_004031b5;
      }
      bVar6 = 99999999 < uVar19;
      uVar19 = uVar19 / 10000;
      uVar17 = uVar23 + 4;
    } while (bVar6);
    local_90 = (size_t)(uVar23 + 7);
LAB_004031b5:
    local_98 = &local_88;
    if (0xf < local_90) {
      local_98 = (undefined8 *)operator_new(local_90 + 1);
      local_88 = local_90;
      goto LAB_00403976;
    }
    if (local_90 != 0) {
      if (local_90 == 1) goto LAB_00403a76;
      goto LAB_00403976;
    }
    local_90 = 0;
    local_88 = (ulong)local_88._1_7_ << 8;
    uVar17 = 0xffffffff;
    uVar19 = param_3;
  }
  do {
    param_3 = (uVar19 >> 2) / 0x19;
    lVar27 = (uVar19 + param_3 * -100) * 2;
    cVar8 = std::__detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::
            __digits[lVar27];
    *(undefined1 *)((long)local_98 + (ulong)uVar17) =
         std::__detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::
         __digits[lVar27 + 1];
    uVar23 = uVar17 - 1;
    uVar17 = uVar17 - 2;
    *(char *)((long)local_98 + (ulong)uVar23) = cVar8;
    bVar6 = 9999 < uVar19;
    uVar19 = param_3;
  } while (bVar6);
LAB_0040324b:
  local_b0 = &local_88;
  cVar8 = (char)param_3 + '0';
  if (9 < param_3) {
    *(undefined1 *)((long)local_98 + 1) =
         std::__detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::
         __digits[param_3 * 2 + 1];
    cVar8 = std::__detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::
            __digits[param_3 * 2];
  }
  *(char *)local_98 = cVar8;
  *(int *)(this + 0x38) = (int)local_90 + 1;
  this[0x3c] = (worker)(*(char *)local_98 + -0x30);
  uVar19 = (param_2 * 0xef) / 0xf + 1;
  if (*(worker **)this == pwVar1) {
    uVar21 = 0xf;
  }
  else {
    uVar21 = *(ulong *)(this + 0x10);
  }
  if (uVar21 < uVar19) {
    uVar18 = uVar21 * 2;
    if (uVar21 * 2 < uVar19) {
      uVar18 = uVar19;
    }
    pwVar9 = (worker *)operator_new(uVar18 + 1);
    pwVar3 = *(worker **)this;
    sVar26 = *(long *)(this + 8) + 1;
    if (*(long *)(this + 8) == 0) {
      *pwVar9 = *pwVar3;
    }
    else if (sVar26 != 0) {
      memcpy(pwVar9,pwVar3,sVar26);
    }
    if (pwVar3 != pwVar1) {
      operator_delete(pwVar3,*(long *)(this + 0x10) + 1);
    }
    *(worker **)this = pwVar9;
    *(ulong *)(this + 0x10) = uVar18;
  }
  if (param_2 >> 0x3c != 0) {
                    // WARNING: Subroutine does not return
    std::__throw_length_error("vector::reserve");
  }
  puVar14 = *(undefined8 **)(this + 0x20);
  uVar19 = *(long *)(this + 0x30) - (long)puVar14;
  if ((ulong)((long)uVar19 >> 3) < param_2) {
    puVar25 = *(undefined8 **)(this + 0x28);
    puVar10 = (undefined8 *)0x0;
    lVar27 = (long)puVar25 - (long)puVar14;
    if (param_2 != 0) {
      puVar10 = (undefined8 *)operator_new(param_2 * 8);
      puVar14 = *(undefined8 **)(this + 0x20);
      puVar25 = *(undefined8 **)(this + 0x28);
      uVar19 = *(long *)(this + 0x30) - (long)puVar14;
    }
    if (puVar14 != puVar25) {
      puVar11 = puVar10;
      puVar20 = puVar14;
      do {
        uVar4 = *puVar20;
        puVar12 = puVar11 + 1;
        puVar20 = puVar20 + 1;
        *puVar11 = uVar4;
        puVar11 = puVar12;
      } while (puVar12 != (undefined8 *)(((long)puVar25 - (long)puVar14) + (long)puVar10));
    }
    if (puVar14 != (undefined8 *)0x0) {
      operator_delete(puVar14,uVar19);
    }
    auVar2 = vmovq_avx(puVar10);
    auVar2 = vpinsrq_avx(auVar2,lVar27 + (long)puVar10,1);
    *(undefined8 **)(this + 0x30) = puVar10 + param_2;
    auVar2 = vmovdqu_avx(auVar2);
    *(undefined (*) [16])(this + 0x20) = auVar2;
  }
  uVar19 = param_2 + param_1;
  if (param_1 < uVar19) {
LAB_004033e0:
    do {
      if (param_1 * -0x1111111111111111 < 0x1111111111111112) {
        uVar21 = *(ulong *)(this + 8);
        if (0x7fffffffffffffff - uVar21 < 9) {
LAB_00403b4e:
                    // WARNING: Subroutine does not return
          std::__throw_length_error("basic_string::append");
        }
        uVar18 = uVar21 + 9;
        if (pwVar1 == *(worker **)this) {
          uVar22 = 0xf;
        }
        else {
          uVar22 = *(ulong *)(this + 0x10);
        }
        if (uVar22 < uVar18) {
          std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_mutate
                    ((basic_string_char_std__char_traits_char__std__allocator_char__ *)this,uVar21,0
                     ,"FizzBuzz\n",9);
        }
        else {
          puVar14 = (undefined8 *)(*(worker **)this + uVar21);
          *puVar14 = 0x7a7a75427a7a6946;
          *(undefined *)(puVar14 + 1) = 10;
        }
LAB_00403480:
        *(ulong *)(this + 8) = uVar18;
        *(undefined *)(*(long *)this + uVar18) = 0;
      }
      else {
        if (param_1 * -0x3333333333333333 < 0x3333333333333334) {
          uVar21 = *(ulong *)(this + 8);
          if (0x7fffffffffffffff - uVar21 < 5) goto LAB_00403b4e;
          uVar18 = uVar21 + 5;
          if (pwVar1 == *(worker **)this) {
            uVar22 = 0xf;
          }
          else {
            uVar22 = *(ulong *)(this + 0x10);
          }
          if (uVar22 < uVar18) {
            std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_mutate
                      ((basic_string_char_std__char_traits_char__std__allocator_char__ *)this,uVar21
                       ,0,"Buzz\n",5);
          }
          else {
            puVar13 = (undefined4 *)(*(worker **)this + uVar21);
            *puVar13 = 0x7a7a7542;
            *(undefined *)(puVar13 + 1) = 10;
          }
          goto LAB_00403480;
        }
        if (param_1 * -0x5555555555555555 < 0x5555555555555556) {
          uVar21 = *(ulong *)(this + 8);
          if (0x7fffffffffffffff - uVar21 < 5) goto LAB_00403b4e;
          uVar18 = uVar21 + 5;
          if (pwVar1 == *(worker **)this) {
            uVar22 = 0xf;
          }
          else {
            uVar22 = *(ulong *)(this + 0x10);
          }
          if (uVar22 < uVar18) {
            std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_mutate
                      ((basic_string_char_std__char_traits_char__std__allocator_char__ *)this,uVar21
                       ,0,"Fizz\n",5);
          }
          else {
            puVar13 = (undefined4 *)(*(worker **)this + uVar21);
            *puVar13 = 0x7a7a6946;
            *(undefined *)(puVar13 + 1) = 10;
          }
          goto LAB_00403480;
        }
        if (param_1 < 10) {
LAB_00403a4a:
          local_58 = &local_48;
          local_48 = (ulong)local_48._1_7_ << 8;
          sVar26 = 1;
LAB_004038e6:
          *(char *)((long)local_58 + sVar26) = '\0';
          local_50._0_4_ = (int)sVar26;
          uVar22 = (ulong)((int)local_50 - 1);
          uVar21 = param_1;
          uVar18 = param_1;
          local_50 = sVar26;
          if (99 < param_1) goto LAB_00403640;
        }
        else {
          if (param_1 < 100) {
            local_58 = &local_48;
            sVar26 = 2;
LAB_004038d0:
            memset(local_58,0,sVar26);
            goto LAB_004038e6;
          }
          if (param_1 < 1000) {
            local_58 = &local_48;
            sVar26 = 3;
            goto LAB_004038d0;
          }
          sVar26 = 1;
          uVar21 = param_1;
          if (param_1 < 10000) {
            local_58 = &local_48;
            sVar26 = 4;
            goto LAB_004038d0;
          }
          do {
            iVar24 = (int)sVar26;
            sVar26 = (size_t)(iVar24 + 4);
            if (uVar21 < 100000) goto LAB_004035f4;
            if (uVar21 < 1000000) {
              sVar26 = (size_t)(iVar24 + 5);
              goto LAB_004035f4;
            }
            if (uVar21 < 10000000) {
              sVar26 = (size_t)(iVar24 + 6);
              goto LAB_004035f4;
            }
            bVar6 = 99999999 < uVar21;
            uVar21 = uVar21 / 10000;
          } while (bVar6);
          sVar26 = (size_t)(iVar24 + 7);
LAB_004035f4:
          local_58 = &local_48;
          if (0xf < sVar26) {
            local_58 = (undefined8 *)operator_new(sVar26 + 1);
            local_48 = sVar26;
            goto LAB_004038d0;
          }
          if (sVar26 != 0) {
            if (sVar26 == 1) goto LAB_00403a4a;
            goto LAB_004038d0;
          }
          local_50 = 0;
          local_48 = (ulong)local_48._1_7_ << 8;
          uVar22 = 0xffffffff;
          uVar18 = param_1;
LAB_00403640:
          do {
            uVar21 = (uVar18 >> 2) / 0x19;
            iVar24 = (int)uVar22;
            lVar27 = (uVar18 + uVar21 * -100) * 2;
            cVar8 = std::__detail::
                    __to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::__digits
                    [lVar27];
            *(undefined1 *)((long)local_58 + uVar22) =
                 std::__detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)
                 ::__digits[lVar27 + 1];
            uVar22 = (ulong)(iVar24 - 2);
            *(char *)((long)local_58 + (ulong)(iVar24 - 1)) = cVar8;
            bVar6 = 9999 < uVar18;
            uVar18 = uVar21;
          } while (bVar6);
        }
        cVar8 = (char)uVar21 + '0';
        if (9 < uVar21) {
          *(undefined1 *)((long)local_58 + 1) =
               std::__detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::
               __digits[uVar21 * 2 + 1];
          cVar8 = std::__detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)
                  ::__digits[uVar21 * 2];
        }
        *(char *)local_58 = cVar8;
        ppwVar15 = (worker **)
                   std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                   _M_replace_aux((basic_string_char_std__char_traits_char__std__allocator_char__ *)
                                  &local_58,local_50,0,1,'\n');
        local_78 = (worker **)local_68;
        if ((worker **)*ppwVar15 == ppwVar15 + 2) {
          local_68 = vmovdqu_avx(*(undefined (*) [16])(ppwVar15 + 2));
        }
        else {
          local_68 = CONCAT88(local_68._8_8_,ppwVar15[2]);
          local_78 = (worker **)*ppwVar15;
        }
        local_70 = ppwVar15[1];
        *(undefined *)(ppwVar15 + 2) = 0;
        ppwVar15[1] = (worker *)0x0;
        uVar21 = *(ulong *)(this + 8);
        *ppwVar15 = (worker *)(ppwVar15 + 2);
        pwVar9 = *(worker **)this;
        pwVar3 = local_70 + uVar21;
        if (pwVar1 == pwVar9) {
          pwVar16 = (worker *)0xf;
        }
        else {
          pwVar16 = *(worker **)(this + 0x10);
        }
        if (pwVar16 < pwVar3) {
          std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_mutate
                    ((basic_string_char_std__char_traits_char__std__allocator_char__ *)this,uVar21,0
                     ,(char *)local_78,(ulong)local_70);
          pwVar9 = *(worker **)this;
        }
        else if (local_70 != (worker *)0x0) {
          if (local_70 == (worker *)0x1) {
            pwVar9[uVar21] = *(worker *)local_78;
            pwVar9 = *(worker **)this;
          }
          else {
            memcpy(pwVar9 + uVar21,local_78,(size_t)local_70);
            pwVar9 = *(worker **)this;
          }
        }
        *(worker **)(this + 8) = pwVar3;
        pwVar9[(long)pwVar3] = (worker)0x0;
        if (local_78 != (worker **)local_68) {
          operator_delete(local_78,local_68._0_8_ + 1);
        }
        if (local_58 != &local_48) {
          operator_delete(local_58,local_48 + 1);
        }
      }
      local_58 = (undefined8 *)(*(long *)(this + 8) + *(long *)this);
      plVar5 = *(long **)(this + 0x28);
      if (plVar5 == *(long **)(this + 0x30)) {
        param_1 = param_1 + 1;
        std::
        vector<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>>
        ::
        _M_realloc_insert___gnu_cxx____normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____
                  ((vector___gnu_cxx____normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator___gnu_cxx____normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char_____
                    *)(this + 0x20),(__normal_iterator)plVar5,(__normal_iterator *)&local_58);
        if (uVar19 <= param_1) break;
        goto LAB_004033e0;
      }
      *plVar5 = (long)local_58;
      param_1 = param_1 + 1;
      *(long **)(this + 0x28) = plVar5 + 1;
    } while (param_1 < uVar19);
  }
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)this;
  if (local_98 != local_b0) {
    operator_delete(local_98,local_88 + 1);
  }
  return;
}



// std::__cxx11::to_string(unsigned long)

__cxx11 * __thiscall std::__cxx11::to_string(__cxx11 *this,ulong param_1)

{
  uint uVar1;
  bool bVar2;
  __cxx11 _Var3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  size_t __n;
  __cxx11 *__s;
  
  __s = this + 0x10;
  if (param_1 < 10) {
    *(__cxx11 **)this = __s;
LAB_00403d46:
    lVar4 = *(long *)this;
    this[0x10] = (__cxx11)0x0;
    __n = 1;
LAB_00403ce3:
    *(size_t *)(this + 8) = __n;
    *(undefined *)(lVar4 + __n) = 0;
    __s = *(__cxx11 **)this;
    uVar5 = *(int *)(this + 8) - 1;
    uVar6 = param_1;
    if (param_1 < 100) goto LAB_00403c8b;
  }
  else {
    if (param_1 < 100) {
      *(__cxx11 **)this = __s;
      __n = 2;
LAB_00403cd5:
      memset(__s,0,__n);
      lVar4 = *(long *)this;
      goto LAB_00403ce3;
    }
    if (param_1 < 1000) {
      *(__cxx11 **)this = __s;
      __n = 3;
      goto LAB_00403cd5;
    }
    __n = 1;
    uVar6 = param_1;
    if (param_1 < 10000) {
      *(__cxx11 **)this = __s;
      __n = 4;
      goto LAB_00403cd5;
    }
    do {
      iVar7 = (int)__n;
      __n = (size_t)(iVar7 + 4);
      if (uVar6 < 100000) goto LAB_00403c04;
      if (uVar6 < 1000000) {
        __n = (size_t)(iVar7 + 5);
        goto LAB_00403c04;
      }
      if (uVar6 < 10000000) {
        __n = (size_t)(iVar7 + 6);
        goto LAB_00403c04;
      }
      bVar2 = 99999999 < uVar6;
      uVar6 = uVar6 / 10000;
    } while (bVar2);
    __n = (size_t)(iVar7 + 7);
LAB_00403c04:
    *(__cxx11 **)this = __s;
    if (0xf < __n) {
      __s = (__cxx11 *)operator_new(__n + 1);
      *(size_t *)(this + 0x10) = __n;
      *(__cxx11 **)this = __s;
      goto LAB_00403cd5;
    }
    if (__n != 0) {
      if (__n == 1) goto LAB_00403d46;
      goto LAB_00403cd5;
    }
    *(undefined8 *)(this + 8) = 0;
    this[0x10] = (__cxx11)0x0;
    uVar5 = 0xffffffff;
    uVar6 = param_1;
  }
  do {
    param_1 = (uVar6 >> 2) / 0x19;
    lVar4 = (uVar6 + param_1 * -100) * 2;
    _Var3 = *(__cxx11 *)
             (__detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::
              __digits + lVar4);
    __s[uVar5] = *(__cxx11 *)
                  (__detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::
                   __digits + lVar4 + 1);
    uVar1 = uVar5 - 1;
    uVar5 = uVar5 - 2;
    __s[uVar1] = _Var3;
    bVar2 = 9999 < uVar6;
    uVar6 = param_1;
  } while (bVar2);
LAB_00403c8b:
  _Var3 = (__cxx11)((char)param_1 + '0');
  if (9 < param_1) {
    __s[1] = *(__cxx11 *)
              (__detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::
               __digits + param_1 * 2 + 1);
    _Var3 = *(__cxx11 *)
             (__detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::
              __digits + param_1 * 2);
  }
  *__s = _Var3;
  return this;
}



// void std::vector<std::unique_ptr<worker, std::default_delete<worker>>,
// std::allocator<std::unique_ptr<worker,
// std::default_delete<worker>>>>::_M_realloc_insert<std::unique_ptr<worker,
// std::default_delete<worker>>>(__gnu_cxx::__normal_iterator<std::unique_ptr<worker,
// std::default_delete<worker>>*, std::vector<std::unique_ptr<worker, std::default_delete<worker>>,
// std::allocator<std::unique_ptr<worker, std::default_delete<worker>>>>>, std::unique_ptr<worker,
// std::default_delete<worker>>&&)

void __thiscall
std::
vector<std::unique_ptr<worker,std::default_delete<worker>>,std::allocator<std::unique_ptr<worker,std::default_delete<worker>>>>
::_M_realloc_insert_std__unique_ptr_worker_std__default_delete_worker___
          (vector_std__unique_ptr_worker_std__default_delete_worker___std__allocator_std__unique_ptr_worker_std__default_delete_worker____
           *this,__normal_iterator param_1,unique_ptr *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined4 in_register_00000034;
  undefined8 *__src;
  ulong uVar14;
  long lVar15;
  
  __src = (undefined8 *)CONCAT44(in_register_00000034,param_1);
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar10 = (long)puVar1 - (long)puVar2 >> 3;
  if (uVar10 == 0xfffffffffffffff) {
                    // WARNING: Subroutine does not return
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar14 = 1;
  if (uVar10 != 0) {
    uVar14 = uVar10;
  }
  uVar5 = uVar14 + uVar10;
  if (CARRY8(uVar14,uVar10) == false) {
    if (uVar5 == 0) {
      puVar11 = (undefined8 *)&DAT_00000008;
      lVar15 = 0;
      puVar8 = (undefined8 *)0x0;
      goto LAB_00403e01;
    }
    if (0xfffffffffffffff < uVar5) {
      uVar5 = 0xfffffffffffffff;
    }
    uVar5 = uVar5 * 8;
  }
  else {
    uVar5 = 0x7ffffffffffffff8;
  }
  puVar8 = (undefined8 *)operator_new(uVar5);
  lVar15 = uVar5 + (long)puVar8;
  puVar11 = puVar8 + 1;
LAB_00403e01:
  uVar3 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = 0;
  *(undefined8 *)((long)puVar8 + ((long)__src - (long)puVar2)) = uVar3;
  if (__src != puVar2) {
    lVar12 = (long)__src - (long)puVar2;
    if ((puVar8 == puVar2 + 1) || (lVar12 - 8U < 0x11)) {
      puVar11 = puVar8;
      puVar13 = puVar2;
      do {
        uVar3 = *puVar13;
        puVar9 = puVar11 + 1;
        puVar13 = puVar13 + 1;
        *puVar11 = uVar3;
        puVar11 = puVar9;
      } while (puVar9 != (undefined8 *)((long)puVar8 + lVar12));
    }
    else {
      lVar6 = 0;
      uVar10 = (lVar12 - 8U >> 3) + 1;
      do {
        auVar4 = vmovdqu_avx(*(undefined (*) [16])((long)puVar2 + lVar6));
        auVar4 = vmovdqu_avx(auVar4);
        *(undefined (*) [16])((long)puVar8 + lVar6) = auVar4;
        lVar6 = lVar6 + 0x10;
      } while ((uVar10 >> 1) * 0x10 != lVar6);
      uVar14 = uVar10 & 0xfffffffffffffffe;
      if (uVar10 != uVar14) {
        puVar8[uVar14] = puVar2[uVar14];
      }
    }
    puVar11 = (undefined8 *)((long)puVar8 + lVar12 + 8);
  }
  if (__src != puVar1) {
    pvVar7 = memcpy(puVar11,__src,(long)puVar1 - (long)__src);
    puVar11 = (undefined8 *)((long)pvVar7 + ((long)puVar1 - (long)__src));
  }
  auVar4 = vmovq_avx(puVar8);
  auVar4 = vpinsrq_avx(auVar4,puVar11,1);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  auVar4 = vmovdqu_avx(auVar4);
  *(undefined (*) [16])this = auVar4;
  *(long *)(this + 0x10) = lVar15;
  return;
}



// void std::vector<std::unique_ptr<std::thread, std::default_delete<std::thread>>,
// std::allocator<std::unique_ptr<std::thread,
// std::default_delete<std::thread>>>>::_M_realloc_insert<std::unique_ptr<std::thread,
// std::default_delete<std::thread>>>(__gnu_cxx::__normal_iterator<std::unique_ptr<std::thread,
// std::default_delete<std::thread>>*, std::vector<std::unique_ptr<std::thread,
// std::default_delete<std::thread>>, std::allocator<std::unique_ptr<std::thread,
// std::default_delete<std::thread>>>>>, std::unique_ptr<std::thread,
// std::default_delete<std::thread>>&&)

void __thiscall
std::
vector<std::unique_ptr<std::thread,std::default_delete<std::thread>>,std::allocator<std::unique_ptr<std::thread,std::default_delete<std::thread>>>>
::_M_realloc_insert_std__unique_ptr_std__thread_std__default_delete_std__thread___
          (vector_std__unique_ptr_std__thread_std__default_delete_std__thread___std__allocator_std__unique_ptr_std__thread_std__default_delete_std__thread____
           *this,__normal_iterator param_1,unique_ptr *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined4 in_register_00000034;
  undefined8 *__src;
  ulong uVar15;
  
  __src = (undefined8 *)CONCAT44(in_register_00000034,param_1);
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar5 = (long)puVar1 - (long)puVar2 >> 3;
  if (uVar5 == 0xfffffffffffffff) {
                    // WARNING: Subroutine does not return
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar15 = 1;
  if (uVar5 != 0) {
    uVar15 = uVar5;
  }
  uVar6 = uVar5 + uVar15;
  if (CARRY8(uVar5,uVar15) == false) {
    if (uVar6 == 0) {
      puVar11 = (undefined8 *)&DAT_00000008;
      lVar14 = 0;
      puVar9 = (undefined8 *)0x0;
      goto LAB_00403fec;
    }
    if (0xfffffffffffffff < uVar6) {
      uVar6 = 0xfffffffffffffff;
    }
    uVar6 = uVar6 * 8;
  }
  else {
    uVar6 = 0x7ffffffffffffff8;
  }
  puVar9 = (undefined8 *)operator_new(uVar6);
  lVar14 = uVar6 + (long)puVar9;
  puVar11 = puVar9 + 1;
LAB_00403fec:
  uVar3 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = 0;
  *(undefined8 *)((long)puVar9 + ((long)__src - (long)puVar2)) = uVar3;
  if (__src != puVar2) {
    lVar12 = (long)__src - (long)puVar2;
    if ((puVar9 == puVar2 + 1) || (lVar12 - 8U < 0x11)) {
      puVar11 = puVar9;
      puVar13 = puVar2;
      do {
        uVar3 = *puVar13;
        puVar10 = puVar11 + 1;
        puVar13 = puVar13 + 1;
        *puVar11 = uVar3;
        puVar11 = puVar10;
      } while (puVar10 != (undefined8 *)((long)puVar9 + lVar12));
    }
    else {
      lVar7 = 0;
      uVar5 = (lVar12 - 8U >> 3) + 1;
      do {
        auVar4 = vmovdqu_avx(*(undefined (*) [16])((long)puVar2 + lVar7));
        auVar4 = vmovdqu_avx(auVar4);
        *(undefined (*) [16])((long)puVar9 + lVar7) = auVar4;
        lVar7 = lVar7 + 0x10;
      } while ((uVar5 >> 1) * 0x10 != lVar7);
      uVar15 = uVar5 & 0xfffffffffffffffe;
      if (uVar5 != uVar15) {
        puVar9[uVar15] = puVar2[uVar15];
      }
    }
    puVar11 = (undefined8 *)((long)puVar9 + lVar12 + 8);
  }
  if (__src != puVar1) {
    pvVar8 = memcpy(puVar11,__src,(long)puVar1 - (long)__src);
    puVar11 = (undefined8 *)((long)pvVar8 + ((long)puVar1 - (long)__src));
  }
  auVar4 = vmovq_avx(puVar9);
  auVar4 = vpinsrq_avx(auVar4,puVar11,1);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  auVar4 = vmovdqu_avx(auVar4);
  *(undefined (*) [16])this = auVar4;
  *(long *)(this + 0x10) = lVar14;
  return;
}



// void std::vector<__gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<__gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char,
// std::char_traits<char>,
// std::allocator<char>>>>>::_M_realloc_insert<__gnu_cxx::__normal_iterator<char*,
// std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>>>(__gnu_cxx::__normal_iterator<__gnu_cxx::__normal_iterator<char*,
// std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>*,
// std::vector<__gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>,
// std::allocator<__gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char>>>>>>, __gnu_cxx::__normal_iterator<char*,
// std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>&&)

void __thiscall
std::
vector<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>>
::
_M_realloc_insert___gnu_cxx____normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____
          (vector___gnu_cxx____normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char____std__allocator___gnu_cxx____normal_iterator_char__std____cxx11__basic_string_char_std__char_traits_char__std__allocator_char_____
           *this,__normal_iterator param_1,__normal_iterator *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *pvVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined4 in_register_00000034;
  undefined8 *__src;
  
  __src = (undefined8 *)CONCAT44(in_register_00000034,param_1);
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  uVar5 = (long)puVar1 - (long)puVar2 >> 3;
  if (uVar5 == 0xfffffffffffffff) {
                    // WARNING: Subroutine does not return
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar11 = 1;
  if (uVar5 != 0) {
    uVar11 = uVar5;
  }
  uVar6 = uVar5 + uVar11;
  if (CARRY8(uVar5,uVar11) == false) {
    if (uVar6 == 0) {
      puVar12 = (undefined8 *)&DAT_00000008;
      lVar14 = 0;
      puVar10 = (undefined8 *)0x0;
      goto LAB_004041dc;
    }
    if (0xfffffffffffffff < uVar6) {
      uVar6 = 0xfffffffffffffff;
    }
    uVar6 = uVar6 * 8;
  }
  else {
    uVar6 = 0x7ffffffffffffff8;
  }
  puVar10 = (undefined8 *)operator_new(uVar6);
  lVar14 = uVar6 + (long)puVar10;
  puVar12 = puVar10 + 1;
LAB_004041dc:
  *(undefined8 *)((long)puVar10 + ((long)__src - (long)puVar2)) = *(undefined8 *)param_2;
  if (__src != puVar2) {
    puVar12 = (undefined8 *)(((long)__src - (long)puVar2) + (long)puVar10);
    puVar7 = puVar10;
    puVar13 = puVar2;
    do {
      uVar3 = *puVar13;
      puVar8 = puVar7 + 1;
      puVar13 = puVar13 + 1;
      *puVar7 = uVar3;
      puVar7 = puVar8;
    } while (puVar12 != puVar8);
    puVar12 = puVar12 + 1;
  }
  if (__src != puVar1) {
    pvVar9 = memcpy(puVar12,__src,(long)puVar1 - (long)__src);
    puVar12 = (undefined8 *)((long)pvVar9 + ((long)puVar1 - (long)__src));
  }
  auVar4 = vmovq_avx(puVar10);
  auVar4 = vpinsrq_avx(auVar4,puVar12,1);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
  }
  auVar4 = vmovdqu_avx(auVar4);
  *(undefined (*) [16])this = auVar4;
  *(long *)(this + 0x10) = lVar14;
  return;
}



// std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>::_M_mutate(unsigned long, unsigned long, char const*, unsigned long)

void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_mutate
          (basic_string_char_std__char_traits_char__std__allocator_char__ *this,ulong param_1,
          ulong param_2,char *param_3,ulong param_4)

{
  basic_string_char_std__char_traits_char__std__allocator_char__ *__src;
  basic_string_char_std__char_traits_char__std__allocator_char__ *__dest;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  size_t __n;
  
  uVar2 = (param_4 - param_2) + *(long *)(this + 8);
  __n = *(long *)(this + 8) - (param_1 + param_2);
  if (this + 0x10 == *(basic_string_char_std__char_traits_char__std__allocator_char__ **)this)
  goto LAB_00404440;
  uVar1 = *(ulong *)(this + 0x10);
  while( true ) {
    if ((long)uVar2 < 0) {
                    // WARNING: Subroutine does not return
      std::__throw_length_error("basic_string::_M_create");
    }
    uVar3 = uVar2;
    if ((((uVar2 <= uVar1) || (uVar1 = uVar1 * 2, uVar1 <= uVar2)) ||
        (uVar3 = uVar1, -1 < (long)uVar1)) && (uVar2 = uVar3, -1 < (long)(uVar3 + 1))) break;
    std::__throw_bad_alloc();
LAB_00404440:
    uVar1 = 0xf;
  }
  __dest = (basic_string_char_std__char_traits_char__std__allocator_char__ *)operator_new(uVar3 + 1)
  ;
  __src = *(basic_string_char_std__char_traits_char__std__allocator_char__ **)this;
  if (param_1 != 0) {
    if (param_1 == 1) {
      *__dest = *__src;
    }
    else {
      memcpy(__dest,__src,param_1);
    }
  }
  if (((basic_string_char_std__char_traits_char__std__allocator_char__ *)param_3 !=
       (basic_string_char_std__char_traits_char__std__allocator_char__ *)0x0) && (param_4 != 0)) {
    if (param_4 == 1) {
      __dest[param_1] = (basic_string_char_std__char_traits_char__std__allocator_char__)*param_3;
    }
    else {
      memcpy(__dest + param_1,param_3,param_4);
    }
  }
  if (__n != 0) {
    if (__n == 1) {
      __dest[param_1 + param_4] = __src[param_1 + param_2];
    }
    else {
      memcpy(__dest + param_1 + param_4,__src + param_1 + param_2,__n);
    }
  }
  if (__src != this + 0x10) {
    operator_delete(__src,*(long *)(this + 0x10) + 1);
  }
  *(basic_string_char_std__char_traits_char__std__allocator_char__ **)this = __dest;
  *(ulong *)(this + 0x10) = uVar3;
  return;
}



// std::__cxx11::basic_string<char, std::char_traits<char>,
// std::allocator<char>>::_M_replace_aux(unsigned long, unsigned long, unsigned long, char)

basic_string_char_std__char_traits_char__std__allocator_char__ * __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_replace_aux
          (basic_string_char_std__char_traits_char__std__allocator_char__ *this,ulong param_1,
          ulong param_2,ulong param_3,char param_4)

{
  long lVar1;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  basic_string_char_std__char_traits_char__std__allocator_char__ *pbVar4;
  
  lVar1 = *(long *)(this + 8);
  if (param_3 <= (param_2 + 0x7fffffffffffffff) - lVar1) {
    pbVar4 = *(basic_string_char_std__char_traits_char__std__allocator_char__ **)this;
    uVar3 = (param_3 - param_2) + lVar1;
    if (pbVar4 == this + 0x10) {
      uVar2 = 0xf;
    }
    else {
      uVar2 = *(ulong *)(this + 0x10);
    }
    if (uVar2 < uVar3) {
      _M_mutate(this,param_1,param_2,(char *)0x0,param_3);
      pbVar4 = *(basic_string_char_std__char_traits_char__std__allocator_char__ **)this;
    }
    else {
      __n = lVar1 - (param_2 + param_1);
      if ((__n != 0) && (param_2 != param_3)) {
        if (__n == 1) {
          pbVar4[param_3 + param_1] = pbVar4[param_2 + param_1];
          pbVar4 = *(basic_string_char_std__char_traits_char__std__allocator_char__ **)this;
        }
        else {
          memmove(pbVar4 + param_3 + param_1,pbVar4 + param_2 + param_1,__n);
          pbVar4 = *(basic_string_char_std__char_traits_char__std__allocator_char__ **)this;
        }
      }
    }
    if (param_3 != 0) {
      if (param_3 == 1) {
        pbVar4[param_1] = (basic_string_char_std__char_traits_char__std__allocator_char__)param_4;
        pbVar4 = *(basic_string_char_std__char_traits_char__std__allocator_char__ **)this;
      }
      else {
        memset(pbVar4 + param_1,(int)param_4,param_3);
        pbVar4 = *(basic_string_char_std__char_traits_char__std__allocator_char__ **)this;
      }
    }
    *(ulong *)(this + 8) = uVar3;
    pbVar4[uVar3] = (basic_string_char_std__char_traits_char__std__allocator_char__)0x0;
    return this;
  }
                    // WARNING: Subroutine does not return
  std::__throw_length_error("basic_string::_M_replace_aux");
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


