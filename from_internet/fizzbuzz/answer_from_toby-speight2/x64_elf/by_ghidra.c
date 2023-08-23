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

typedef struct NoteAbiTag NoteAbiTag, *PNoteAbiTag;

struct NoteAbiTag {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    dword abiType; // 0 == Linux
    dword requiredKernelVersion[3]; // Major.minor.patch
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



void FUN_00402020(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int get_nprocs(void)

{
  int iVar1;
  
  iVar1 = get_nprocs();
  return iVar1;
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



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::__throw_bad_alloc(void)

{
  __throw_bad_alloc();
  return;
}



void __thiscall std::thread::_State::~_State(_State *this)

{
  ~_State(this);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::condition_variable::notify_one(void)

{
  notify_one();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::__throw_length_error(char *param_1)

{
                    // WARNING: Subroutine does not return
  __throw_length_error(param_1);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t writev(int __fd,iovec *__iovec,int __count)

{
  ssize_t sVar1;
  
  sVar1 = writev(__fd,__iovec,__count);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
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

void std::__throw_system_error(int param_1)

{
  __throw_system_error(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::basic_ostream<char,std::char_traits<char>>::flush(void)

{
  flush();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
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



void __thiscall std::condition_variable::condition_variable(condition_variable *this)

{
  condition_variable(this);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

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



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::condition_variable::wait(unique_lock *param_1)

{
  wait(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = snprintf(__s,__maxlen,__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

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



// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::thread::join(void)

{
  join();
  return;
}



void __thiscall
std::basic_ostream<char,std::char_traits<char>>::operator<<
          (basic_ostream<char,std::char_traits<char>> *this,int param_1)

{
  operator<<(this,param_1);
  return;
}



void __thiscall std::condition_variable::~condition_variable(condition_variable *this)

{
  ~condition_variable(this);
  return;
}



// std::ios_base::Init::~Init()

void __thiscall std::ios_base::Init::~Init(Init *this)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void main(int __status)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  void **ppvVar5;
  bool bVar6;
  undefined auVar7 [16];
  void **ppvVar8;
  long **pplVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  basic_ostream *pbVar13;
  undefined8 *puVar14;
  worker *this;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  long **pplVar26;
  void **ppvVar27;
  ulong uVar28;
  ulong uVar29;
  uint uVar30;
  ulong uVar31;
  long lVar32;
  undefined auVar33 [16];
  undefined auVar34 [32];
  undefined auVar35 [32];
  undefined auVar36 [32];
  long *local_80;
  undefined local_78 [16];
  worker **local_68;
  undefined local_58 [8];
  long **pplStack_50;
  undefined8 local_48;
  undefined extraout_var [24];
  undefined extraout_var_00 [24];
  undefined extraout_var_01 [24];
  
  lVar32 = 1000;
  iVar23 = 4;
  iVar11 = get_nprocs();
  uVar28 = (ulong)iVar11;
  do {
    uVar29 = lVar32 * 3;
    iVar12 = snprintf((char *)0x0,0,"%zu",lVar32);
    lVar3 = (long)iVar12 * 8 + 0x27;
    if (((0x10000 < ((lVar3 * uVar29) / 0xf) / uVar28) ||
        (uVar29 = lVar32 * 6, 0x10000 < ((lVar3 * uVar29) / 0xf) / uVar28)) ||
       (uVar29 = lVar32 * 9, 0x10000 < ((lVar3 * uVar29) / 0xf) / uVar28)) goto LAB_004022d6;
    lVar32 = lVar32 * 10;
    iVar23 = iVar23 + -1;
  } while (iVar23 != 0);
  uVar29 = 9000000;
LAB_004022d6:
  std::__cxx11::to_string((__cxx11 *)local_58,uVar29);
  uVar21 = (ulong)pplStack_50;
  if (local_58 != (undefined  [8])&local_48) {
    operator_delete((void *)local_58,(long)local_48 + 1);
  }
  uVar31 = 1;
  uVar30 = 1;
LAB_004024cd:
  uVar25 = 0;
LAB_004025da:
  local_58 = (undefined  [8])&local_48;
  local_48 = (long **)CONCAT71(local_48._1_7_,0x2d);
  uVar20 = 1;
LAB_004023c4:
  pplStack_50 = (long **)uVar20;
  *(char *)((long)local_58 + uVar20) = '\0';
  uVar24 = uVar30;
  uVar19 = uVar30;
  if (99 < uVar31) {
    do {
      uVar19 = uVar24 / 100;
      uVar1 = (uVar24 % 100) * 2;
      cVar10 = (&std::__detail::__to_chars_10_impl<unsigned_int>(char*,unsigned_int,unsigned_int)::
                 __digits)[uVar1];
      *(undefined1 *)((long)local_58 + (ulong)uVar25) =
           (&std::__detail::__to_chars_10_impl<unsigned_int>(char*,unsigned_int,unsigned_int)::
             __digits)[uVar1 + 1];
      uVar1 = uVar25 - 1;
      uVar25 = uVar25 - 2;
      *(char *)((long)local_58 + (ulong)uVar1) = cVar10;
      bVar6 = 9999 < uVar24;
      uVar24 = uVar19;
    } while (bVar6);
  }
  cVar10 = (char)uVar19 + '0';
  if (9 < uVar19) {
    *(undefined1 *)((long)local_58 + 1) =
         (&std::__detail::__to_chars_10_impl<unsigned_int>(char*,unsigned_int,unsigned_int)::
           __digits)[uVar19 * 2 + 1];
    cVar10 = (&std::__detail::__to_chars_10_impl<unsigned_int>(char*,unsigned_int,unsigned_int)::
               __digits)[uVar19 * 2];
  }
  *(char *)local_58 = cVar10;
  if (local_58 != (undefined  [8])&local_48) {
    operator_delete((void *)local_58,(long)local_48 + 1);
  }
  if (uVar20 <= uVar21) {
    if (uVar30 * -0x11111111 < 0x11111112) {
      std::__ostream_insert<char,std::char_traits<char>>((basic_ostream *)std::cout,"FizzBuzz\n",9);
    }
    else if (uVar30 * -0x33333333 < 0x33333334) {
      std::__ostream_insert<char,std::char_traits<char>>((basic_ostream *)std::cout,"Buzz\n",5);
    }
    else if (uVar30 * -0x55555555 < 0x55555556) {
      std::__ostream_insert<char,std::char_traits<char>>((basic_ostream *)std::cout,"Fizz\n",5);
    }
    else {
      pbVar13 = (basic_ostream *)
                std::basic_ostream<char,std::char_traits<char>>::operator<<
                          ((basic_ostream<char,std::char_traits<char>> *)std::cout,uVar30);
      local_58[0] = 10;
      std::__ostream_insert<char,std::char_traits<char>>(pbVar13,local_58,1);
    }
    uVar31 = uVar31 + 1;
    uVar30 = (uint)uVar31;
    if (9 < uVar31) {
      if (uVar30 < 100) {
        uVar24 = 1;
LAB_00402550:
        uVar19 = uVar24 + 1;
        uVar25 = uVar24;
      }
      else if (uVar30 < 1000) {
        uVar24 = 1;
LAB_00402560:
        uVar19 = uVar24 + 2;
        uVar25 = uVar24 + 1;
      }
      else {
        if (uVar30 < 10000) {
          uVar24 = 1;
        }
        else {
          uVar20 = uVar31;
          uVar25 = 1;
          do {
            uVar24 = uVar25 + 4;
            if (uVar20 < 100000) {
              uVar25 = uVar25 + 3;
              uVar19 = uVar24;
              goto LAB_004023a1;
            }
            uVar19 = (uint)(uVar20 / 10000);
            if (uVar19 < 100) goto LAB_00402550;
            if (uVar19 < 1000) goto LAB_00402560;
            uVar20 = uVar20 / 10000;
            uVar25 = uVar24;
          } while (9999 < uVar19);
        }
        uVar19 = uVar24 + 3;
        uVar25 = uVar24 + 2;
      }
LAB_004023a1:
      local_58 = (undefined  [8])&local_48;
      uVar20 = (ulong)uVar19;
      if (uVar19 < 0x10) goto code_r0x004023b6;
      local_58 = (undefined  [8])operator_new(uVar20 + 1);
      local_48 = (long **)uVar20;
      goto LAB_00402508;
    }
    goto LAB_004024cd;
  }
  auVar34._0_8_ = std::basic_ostream<char,std::char_traits<char>>::flush();
  auVar34._8_24_ = extraout_var;
  auVar33 = vpxor_avx(auVar34._0_16_,auVar34._0_16_);
  local_68 = (worker **)0x0;
  local_78 = auVar33;
  if (uVar28 >> 0x3c != 0) {
                    // WARNING: Subroutine does not return
    std::__throw_length_error("vector::reserve");
  }
  if (uVar28 == 0) {
    local_78._0_8_ = auVar33._0_8_;
    local_78._8_8_ = auVar33._8_8_;
    *(undefined8 *)(*(long *)(local_78._8_8_ + -8) + 0xb8) = *(undefined8 *)local_78._0_8_;
    auVar7 = auVar33;
    goto LAB_00402827;
  }
  puVar14 = (undefined8 *)operator_new(uVar28 * 8);
  auVar33 = vmovq_avx(puVar14);
  auVar33 = vpunpcklqdq_avx(auVar33,auVar33);
  if (local_78._8_8_ != local_78._0_8_) {
    uVar21 = local_78._8_8_ + (-8 - local_78._0_8_);
    puVar18 = (undefined8 *)local_78._0_8_;
    puVar22 = puVar14;
    if ((puVar14 != (undefined8 *)(local_78._0_8_ + 8)) && (0x10 < uVar21)) {
      lVar32 = 0;
      uVar21 = (uVar21 >> 3) + 1;
      do {
        auVar7 = vmovdqu_avx(*(undefined (*) [16])(local_78._0_8_ + lVar32));
        auVar7 = vmovdqu_avx(auVar7);
        *(undefined (*) [16])((long)puVar14 + lVar32) = auVar7;
        lVar32 = lVar32 + 0x10;
      } while (lVar32 != (uVar21 >> 1) * 0x10);
      uVar31 = uVar21 & 0xfffffffffffffffe;
      if (uVar31 != uVar21) {
        puVar14[uVar31] = *(undefined8 *)(local_78._0_8_ + uVar31 * 8);
      }
      goto LAB_004026c4;
    }
    do {
      puVar17 = puVar18 + 1;
      *puVar22 = *puVar18;
      puVar18 = puVar17;
      puVar22 = puVar22 + 1;
    } while ((undefined8 *)local_78._8_8_ != puVar17);
  }
  if ((undefined8 *)local_78._0_8_ != (undefined8 *)0x0) {
LAB_004026c4:
    operator_delete((void *)local_78._0_8_,(long)local_68 - local_78._0_8_);
  }
  local_68 = (worker **)(puVar14 + uVar28);
  local_78 = auVar33;
  if (iVar11 < 1) goto LAB_004027e4;
  iVar23 = 0;
  uVar21 = 0;
  do {
    while( true ) {
      uVar31 = uVar21 + uVar29;
      iVar23 = iVar23 + 1;
      this = (worker *)operator_new(0xc0);
      auVar35._0_8_ =
           worker::worker(this,uVar21 / uVar28 + (long)(int)uVar30,uVar31 / uVar28 - uVar21 / uVar28
                          ,uVar29);
      auVar35._8_24_ = extraout_var_00;
      auVar33 = auVar35._0_16_;
      local_58 = (undefined  [8])this;
      uVar21 = uVar31;
      if ((worker **)local_78._8_8_ == local_68) break;
      *(worker **)local_78._8_8_ = this;
      local_78._8_8_ = (worker **)(local_78._8_8_ + 8);
LAB_0040271c:
      if (iVar23 == iVar11) goto LAB_004027e4;
    }
    std::
    vector<std::unique_ptr<worker,std::default_delete<worker>>,std::allocator<std::unique_ptr<worker,std::default_delete<worker>>>>
    ::_M_realloc_insert<std::unique_ptr<worker,std::default_delete<worker>>>
              ((vector<std::unique_ptr<worker,std::default_delete<worker>>,std::allocator<std::unique_ptr<worker,std::default_delete<worker>>>>
                *)local_78,local_78._8_4_,(unique_ptr *)local_58);
    ppvVar27 = (void **)local_58;
    if (local_58 == (undefined  [8])0x0) goto LAB_0040271c;
    auVar36._0_8_ =
         std::condition_variable::~condition_variable((condition_variable *)((long)local_58 + 0x68))
    ;
    auVar36._8_24_ = extraout_var_01;
    auVar33 = auVar36._0_16_;
    pvVar4 = ppvVar27[4];
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4,(long)ppvVar27[6] - (long)pvVar4);
    }
    if ((void **)*ppvVar27 != ppvVar27 + 2) {
      operator_delete(*ppvVar27,(long)ppvVar27[2] + 1);
    }
    operator_delete(ppvVar27,0xc0);
  } while (iVar23 != iVar11);
LAB_004027e4:
  *(long *)(*(long *)(local_78._8_8_ + -8) + 0xb8) = *(long *)local_78._0_8_;
  auVar7 = local_78;
  if (1 < iVar11) {
    plVar15 = (long *)local_78._0_8_;
    do {
      plVar2 = plVar15 + 1;
      lVar32 = *plVar15;
      plVar15 = plVar15 + 1;
      *(long *)(lVar32 + 0xb8) = *plVar2;
    } while (plVar15 != (long *)(local_78._0_8_ + ((ulong)(iVar11 - 2) + 1) * 8));
  }
LAB_00402827:
  local_78 = auVar7;
  _local_58 = vpxor_avx(auVar33,auVar33);
  local_48 = (long **)0x0;
  if (uVar28 != 0) {
    puVar14 = (undefined8 *)operator_new(uVar28 * 8);
    auVar33 = vmovq_avx(puVar14);
    auVar33 = vpunpcklqdq_avx(auVar33,auVar33);
    if ((undefined  [8])pplStack_50 == local_58) {
LAB_00402b6d:
      if (local_58 != (undefined  [8])0x0) goto LAB_004028d4;
    }
    else {
      uVar29 = (long)pplStack_50 + (-8 - (long)local_58);
      puVar18 = (undefined8 *)local_58;
      puVar22 = puVar14;
      if ((puVar14 == (undefined8 *)((long)local_58 + 8)) || (uVar29 < 0x11)) {
        do {
          puVar17 = puVar18 + 1;
          *puVar22 = *puVar18;
          puVar18 = puVar17;
          puVar22 = puVar22 + 1;
        } while (pplStack_50 != (long **)puVar17);
        goto LAB_00402b6d;
      }
      lVar32 = 0;
      uVar29 = (uVar29 >> 3) + 1;
      do {
        auVar7 = vmovdqu_avx(*(undefined (*) [16])((long)local_58 + lVar32));
        auVar7 = vmovdqu_avx(auVar7);
        *(undefined (*) [16])((long)puVar14 + lVar32) = auVar7;
        lVar32 = lVar32 + 0x10;
      } while ((uVar29 >> 1) * 0x10 != lVar32);
      uVar21 = uVar29 & 0xfffffffffffffffe;
      if (uVar21 != uVar29) {
        puVar14[uVar21] = *(undefined8 *)((long)local_58 + uVar21 * 8);
      }
LAB_004028d4:
      operator_delete((void *)local_58,(long)local_48 - (long)local_58);
    }
    local_48 = (long **)(puVar14 + uVar28);
    _local_58 = auVar33;
  }
  plVar2 = (long *)local_78._8_8_;
  plVar15 = (long *)local_78._0_8_;
joined_r0x00402906:
  do {
    if (plVar2 == plVar15) {
      plVar15 = (long *)local_78._0_8_;
      lVar32 = *(long *)local_78._0_8_;
      iVar11 = pthread_mutex_lock((pthread_mutex_t *)(lVar32 + 0x40));
      if (iVar11 != 0) {
        std::__throw_system_error(iVar11);
        std::ios_base::Init::Init((Init *)&std::__ioinit);
        __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
        return;
      }
      puVar14 = (undefined8 *)*plVar15;
      puVar14[0x14] = 0;
      puVar14[0x13] = *puVar14;
      pthread_mutex_unlock((pthread_mutex_t *)(lVar32 + 0x40));
      std::condition_variable::notify_one();
      std::thread::join();
      pplVar9 = pplStack_50;
      pplVar26 = (long **)local_58;
      do {
        if (pplVar9 == pplVar26) {
          if (local_58 != (undefined  [8])0x0) {
            operator_delete((void *)local_58,(long)local_48 - (long)local_58);
          }
          ppvVar8 = (void **)local_78._8_8_;
          for (ppvVar27 = (void **)local_78._0_8_; ppvVar8 != ppvVar27; ppvVar27 = ppvVar27 + 1) {
            ppvVar5 = (void **)*ppvVar27;
            if (ppvVar5 != (void **)0x0) {
              std::condition_variable::~condition_variable((condition_variable *)(ppvVar5 + 0xd));
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
          if ((void *)local_78._0_8_ != (void *)0x0) {
            operator_delete((void *)local_78._0_8_,(long)local_68 - local_78._0_8_);
          }
          return;
        }
        plVar15 = *pplVar26;
        if (plVar15 != (long *)0x0) {
          if (*plVar15 != 0) goto LAB_00402b8f;
          operator_delete(plVar15,8);
        }
        pplVar26 = pplVar26 + 1;
      } while( true );
    }
    lVar32 = *plVar15;
    plVar16 = (long *)operator_new(8);
    *plVar16 = 0;
    local_80 = (long *)operator_new(0x10);
    *local_80 = (long)&PTR___State_impl_00405120;
    local_80[1] = lVar32;
    std::thread::_M_start_thread(SUB81(plVar16,0),(_func_void *)&local_80);
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 8))();
    }
    local_80 = plVar16;
    if (pplStack_50 == local_48) {
      std::
      vector<std::unique_ptr<std::thread,std::default_delete<std::thread>>,std::allocator<std::unique_ptr<std::thread,std::default_delete<std::thread>>>>
      ::_M_realloc_insert<std::unique_ptr<std::thread,std::default_delete<std::thread>>>
                ((vector<std::unique_ptr<std::thread,std::default_delete<std::thread>>,std::allocator<std::unique_ptr<std::thread,std::default_delete<std::thread>>>>
                  *)local_58,SUB164(_local_58,8),(unique_ptr *)&local_80);
      if (local_80 != (long *)0x0) {
        if (*local_80 != 0) {
LAB_00402b8f:
                    // WARNING: Subroutine does not return
          std::terminate();
        }
        operator_delete(local_80,8);
        plVar15 = plVar15 + 1;
        goto joined_r0x00402906;
      }
    }
    else {
      *pplStack_50 = plVar16;
      pplStack_50 = pplStack_50 + 1;
    }
    plVar15 = plVar15 + 1;
  } while( true );
code_r0x004023b6:
  if (uVar20 != 0) {
    if (uVar20 != 1) {
LAB_00402508:
      memset((void *)local_58,0x2d,uVar20);
      goto LAB_004023c4;
    }
    goto LAB_004025da;
  }
  goto LAB_004023c4;
}



void _GLOBAL__sub_I_main(void)

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



// std::thread::_State_impl<std::thread::_Invoker<std::tuple<main::{lambda(worker*)#1}, worker*> >
// >::~_State_impl()

void __thiscall
std::thread::_State_impl<std::thread::_Invoker<std::tuple<main::{lambda(worker*)#1},worker*>>>::
~_State_impl(_State_impl<std::thread::_Invoker<std::tuple<main::_lambda(worker*)_1_,worker*>>> *this
            )

{
  *(undefined ***)this = &PTR___State_impl_00405120;
  std::thread::_State::~_State((_State *)this);
  return;
}



// std::thread::_State_impl<std::thread::_Invoker<std::tuple<main::{lambda(worker*)#1}, worker*> >
// >::~_State_impl()

void __thiscall
std::thread::_State_impl<std::thread::_Invoker<std::tuple<main::{lambda(worker*)#1},worker*>>>::
~_State_impl(_State_impl<std::thread::_Invoker<std::tuple<main::_lambda(worker*)_1_,worker*>>> *this
            )

{
  *(undefined ***)this = &PTR___State_impl_00405120;
  std::thread::_State::~_State((_State *)this);
  operator_delete(this,0x10);
  return;
}



// worker::loop()

void worker::loop(void)

{
  long **pplVar1;
  undefined auVar2 [16];
  long lVar3;
  bool bVar4;
  undefined auVar5 [16];
  pthread_mutex_t *ppVar6;
  char cVar7;
  uint uVar8;
  pthread_mutex_t *ppVar9;
  pthread_mutex_t *ppVar10;
  pthread_mutex_t *ppVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  char **ppcVar17;
  pthread_mutex_t *in_RCX;
  pthread_mutex_t *ppVar18;
  char *pcVar19;
  char *pcVar20;
  ulong extraout_RDX;
  long *plVar21;
  long *plVar22;
  uint uVar23;
  int iVar24;
  pthread_mutex_t *in_RSI;
  size_t sVar25;
  pthread_mutex_t **in_RDI;
  long **this;
  long **pplVar26;
  ulong uVar27;
  long lVar28;
  long *plVar29;
  pthread_mutex_t *unaff_R14;
  pthread_mutex_t *unaff_R15;
  undefined auVar30 [32];
  undefined8 *puStack_110;
  undefined8 *puStack_f8;
  size_t sStack_f0;
  undefined8 uStack_e8;
  char **ppcStack_d8;
  char *pcStack_d0;
  undefined auStack_c8 [16];
  undefined8 *puStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  pthread_mutex_t **pppStack_90;
  code *pcStack_88;
  pthread_mutex_t *ppStack_80;
  pthread_mutex_t *ppStack_70;
  pthread_mutex_t *ppStack_68;
  undefined8 uStack_60;
  pthread_mutex_t *local_50;
  undefined8 local_48;
  undefined local_40;
  undefined extraout_var [24];
  
  ppStack_80 = (pthread_mutex_t *)(in_RDI + 8);
  pppStack_90 = in_RDI + 0xd;
LAB_00402d10:
  local_40 = '\0';
  uStack_60 = 0x402d27;
  local_48 = (long)ppStack_80;
  uVar8 = pthread_mutex_lock(ppStack_80);
  if (uVar8 == 0) {
    ppVar11 = in_RDI[0x13];
    local_40 = '\x01';
    while (ppVar11 == (pthread_mutex_t *)0x0) {
      uStack_60 = 0x402d5b;
      std::condition_variable::wait((unique_lock *)pppStack_90);
      ppVar11 = in_RDI[0x13];
    }
    in_RSI = (pthread_mutex_t *)(in_RDI + 0x13);
    in_RDI[0x16] = (pthread_mutex_t *)(0x10000 - (long)in_RDI[0x14]);
    uStack_60 = 0x402d8e;
    writev(1,(iovec *)&in_RSI->__data,2);
    in_RDI[0x13] = (pthread_mutex_t *)0x0;
    if ((local_40 != '\0') && ((pthread_mutex_t *)local_48 != (pthread_mutex_t *)0x0)) {
      uStack_60 = 0x402feb;
      pthread_mutex_unlock((pthread_mutex_t *)local_48);
    }
    uStack_60 = 0x402dac;
    std::condition_variable::notify_one();
    unaff_R14 = (pthread_mutex_t *)(in_RDI[0x16]->__size + (long)(*in_RDI)->__size);
    ppVar11 = (pthread_mutex_t *)((long)unaff_R14 + 0x10000);
    if ((pthread_mutex_t *)((long)unaff_R14 + 0x10000) <
        (pthread_mutex_t *)((*in_RDI)->__size + (long)in_RDI[1]->__size)) {
      do {
        unaff_R14 = ppVar11;
        in_RSI = (pthread_mutex_t *)((long)unaff_R14 + -0x10000);
        uStack_60 = 0x402fb5;
        write(1,in_RSI,0x10000);
        ppVar11 = (pthread_mutex_t *)((long)unaff_R14 + 0x10000);
      } while ((pthread_mutex_t *)((long)unaff_R14 + 0x10000) <
               (pthread_mutex_t *)(in_RDI[1]->__size + (long)(*in_RDI)->__size));
    }
    unaff_R15 = (pthread_mutex_t *)((long)in_RDI[0x17] + 0x40);
    uStack_60 = 0x402de6;
    uVar8 = pthread_mutex_lock(unaff_R15);
    if (uVar8 != 0) goto LAB_00403068;
    ppVar11 = in_RDI[1];
    ppVar9 = *in_RDI;
    ppVar18 = in_RDI[0x17];
    *(pthread_mutex_t **)((long)ppVar18 + 0x98) = unaff_R14;
    ppVar18[4].__align = (long)(ppVar11->__size + (long)ppVar9->__size) - (long)unaff_R14;
    uStack_60 = 0x402e1b;
    pthread_mutex_unlock(unaff_R15);
    uStack_60 = 0x402e2b;
    std::condition_variable::notify_one();
    local_40 = '\0';
    local_48 = (long)in_RDI[0x17] + 0x40;
    uStack_60 = 0x402e4a;
    uVar8 = pthread_mutex_lock((pthread_mutex_t *)local_48);
    if (uVar8 != 0) goto LAB_00403068;
    local_40 = '\x01';
    unaff_R15 = (pthread_mutex_t *)((long)in_RDI[0x17] + 0x68);
    unaff_R14 = (pthread_mutex_t *)&stack0xffffffffffffffb8;
    if (*(long *)((long)in_RDI[0x17] + 0x98) == 0) {
LAB_00402ff0:
      if ((pthread_mutex_t *)local_48 != (pthread_mutex_t *)0x0) {
        uStack_60 = 0x40300c;
        pthread_mutex_unlock((pthread_mutex_t *)local_48);
      }
    }
    else {
      do {
        uStack_60 = 0x402e8b;
        std::condition_variable::wait((unique_lock *)&unaff_R15->__data);
      } while (*(long *)((long)in_RDI[0x17] + 0x98) != 0);
      if (local_40 != '\0') goto LAB_00402ff0;
    }
    ppVar11 = in_RDI[5];
    in_RCX = in_RDI[4];
    in_RSI = (pthread_mutex_t *)0x0;
    if (ppVar11 != in_RCX) {
      do {
        if (*(char *)(in_RCX->__align + -2) != 'z') {
          pcVar19 = (char *)(in_RCX->__align - (long)*(int *)(in_RDI + 7));
          cVar7 = *(char *)((long)in_RDI + 0x3c) + *pcVar19;
          *pcVar19 = cVar7;
          while ('9' < cVar7) {
            pcVar20 = pcVar19 + -1;
            *pcVar19 = cVar7 + -10;
            cVar7 = *pcVar20 + '\x01';
            *pcVar20 = cVar7;
            pcVar19 = pcVar20;
          }
          in_RSI = (pthread_mutex_t *)(ulong)((int)in_RSI + (uint)(cVar7 == '\v'));
        }
        in_RCX = (pthread_mutex_t *)&(in_RCX->__data).__owner;
      } while (ppVar11 != in_RCX);
      if ((int)in_RSI != 0) {
        ppVar11 = in_RDI[1];
        unaff_R14 = in_RDI[5];
        unaff_R15 = *in_RDI;
        ppVar9 = (pthread_mutex_t *)(in_RSI->__size + (long)ppVar11->__size);
        if (ppVar11 < ppVar9) {
          uStack_60 = 0x403026;
          local_50 = ppVar11;
          std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
          _M_replace_aux((basic_string<char,std::char_traits<char>,std::allocator<char>> *)in_RDI,
                         (ulong)ppVar11,0,(ulong)in_RSI,'\0');
          in_RCX = (pthread_mutex_t *)(in_RDI[1]->__size + (long)(*in_RDI)->__size);
          in_RSI = ppVar11;
          ppVar11 = local_50;
        }
        else {
          in_RCX = (pthread_mutex_t *)(unaff_R15->__size + (long)ppVar11->__size);
          if (CARRY8((ulong)in_RSI,(ulong)ppVar11) != false) {
            in_RDI[1] = ppVar9;
            unaff_R15->__size[(long)ppVar9->__size] = '\0';
            in_RCX = (pthread_mutex_t *)(in_RDI[1]->__size + (long)(*in_RDI)->__size);
          }
        }
        ppVar9 = (pthread_mutex_t *)((long)in_RCX + -1);
        ppVar10 = (pthread_mutex_t *)(ppVar11->__size + (long)unaff_R15 + -1);
        ppVar18 = in_RCX;
        ppVar6 = unaff_R14;
        if ((pthread_mutex_t *)(ppVar11->__size + (long)unaff_R15 + -1) < ppVar9) {
          do {
            while( true ) {
              unaff_R14 = ppVar6;
              in_RCX = ppVar18;
              cVar7 = ppVar10->__size[0];
              ppVar18 = ppVar9;
              if (cVar7 == '\v') {
                ppVar10->__size[0] = '\n';
                *(undefined *)((long)in_RCX + -1) = 0x31;
                cVar7 = ppVar10->__size[0];
                ppVar18 = (pthread_mutex_t *)((long)in_RCX + -2);
              }
              if (cVar7 != '\n') break;
              ppVar11 = (pthread_mutex_t *)((long)ppVar10 + -1);
              in_RCX = (pthread_mutex_t *)((long)unaff_R14 + -8);
              unaff_R14->__align = (long)((long)&(ppVar18->__data).__lock + 1);
              ppVar18->__size[0] = ppVar10->__size[0];
              ppVar9 = (pthread_mutex_t *)((long)ppVar18 + -1);
              ppVar10 = ppVar11;
              in_RSI = ppVar9;
              ppVar6 = in_RCX;
              if (ppVar9 <= ppVar11) goto LAB_00402d10;
            }
            ppVar18->__size[0] = cVar7;
            ppVar10 = (pthread_mutex_t *)((long)ppVar10 + -1);
            ppVar9 = (pthread_mutex_t *)((long)ppVar18 + -1);
            in_RSI = ppVar9;
            ppVar6 = unaff_R14;
          } while (ppVar10 < ppVar9);
        }
      }
    }
    goto LAB_00402d10;
  }
LAB_00403068:
  uVar27 = (ulong)uVar8;
  uStack_60 = 0x40306f;
  std::__throw_system_error(uVar8);
  this = *(long ***)(uVar27 + 8);
  ppStack_68 = (pthread_mutex_t *)0x40307d;
  auVar30._0_8_ = loop();
  auVar30._8_24_ = extraout_var;
  auVar5 = vpxor_avx(auVar30._0_16_,auVar30._0_16_);
  pplVar1 = this + 2;
  pcStack_88 = __pthread_key_create;
  auVar2 = vmovdqu_avx(auVar5);
  *(undefined (*) [16])(this + 4) = auVar2;
  auVar5 = vpxor_avx(auVar5,auVar5);
  *this = (long *)pplVar1;
  this[1] = (long *)0x0;
  *(undefined *)(this + 2) = 0;
  this[6] = (long *)0x0;
  *(undefined4 *)(this + 7) = 0;
  *(undefined *)((long)this + 0x3c) = 0;
  auVar2 = vmovdqu_avx(auVar5);
  *(undefined (*) [16])(this + 8) = auVar2;
  auVar2 = vmovdqu_avx(auVar5);
  *(undefined (*) [16])(this + 10) = auVar2;
  this[0xc] = (long *)0x0;
  ppStack_70 = unaff_R14;
  ppStack_68 = unaff_R15;
  std::condition_variable::condition_variable((condition_variable *)(this + 0xd));
  this[0x13] = (long *)0x0;
  this[0x14] = (long *)0x0;
  this[0x15] = (long *)0x0;
  this[0x16] = (long *)0x0;
  this[0x17] = (long *)0x0;
  if (in_RCX < (pthread_mutex_t *)0xa) {
LAB_00403a76:
    puStack_110 = &uStack_e8;
    uStack_e8 = (ulong)uStack_e8._1_7_ << 8;
    sStack_f0 = 1;
    puStack_f8 = puStack_110;
LAB_00403985:
    *(char *)((long)puStack_f8 + sStack_f0) = '\0';
    uVar8 = (int)sStack_f0 - 1;
    ppVar11 = in_RCX;
    if (in_RCX < (pthread_mutex_t *)0x64) goto LAB_0040324b;
  }
  else {
    if (in_RCX < (pthread_mutex_t *)0x64) {
      puStack_f8 = &uStack_e8;
      sStack_f0 = 2;
LAB_00403976:
      memset(puStack_f8,0,sStack_f0);
      goto LAB_00403985;
    }
    if (in_RCX < (pthread_mutex_t *)0x3e8) {
      puStack_f8 = &uStack_e8;
      sStack_f0 = 3;
      goto LAB_00403976;
    }
    ppVar11 = in_RCX;
    uVar8 = 1;
    if (in_RCX < (pthread_mutex_t *)0x2710) {
      puStack_f8 = &uStack_e8;
      sStack_f0 = 4;
      goto LAB_00403976;
    }
    do {
      uVar23 = uVar8;
      if (ppVar11 < (pthread_mutex_t *)0x186a0) {
        sStack_f0 = (size_t)(uVar23 + 4);
        goto LAB_004031b5;
      }
      if (ppVar11 < (pthread_mutex_t *)0xf4240) {
        sStack_f0 = (size_t)(uVar23 + 5);
        goto LAB_004031b5;
      }
      if (ppVar11 < (pthread_mutex_t *)0x989680) {
        sStack_f0 = (size_t)(uVar23 + 6);
        goto LAB_004031b5;
      }
      bVar4 = (pthread_mutex_t *)0x5f5e0ff < ppVar11;
      ppVar11 = (pthread_mutex_t *)((ulong)ppVar11 / 10000);
      uVar8 = uVar23 + 4;
    } while (bVar4);
    sStack_f0 = (size_t)(uVar23 + 7);
LAB_004031b5:
    puStack_f8 = &uStack_e8;
    if (0xf < sStack_f0) {
      puStack_f8 = (undefined8 *)operator_new(sStack_f0 + 1);
      uStack_e8 = sStack_f0;
      goto LAB_00403976;
    }
    if (sStack_f0 != 0) {
      if (sStack_f0 == 1) goto LAB_00403a76;
      goto LAB_00403976;
    }
    sStack_f0 = 0;
    uStack_e8 = (ulong)uStack_e8._1_7_ << 8;
    uVar8 = 0xffffffff;
    ppVar11 = in_RCX;
  }
  do {
    in_RCX = (pthread_mutex_t *)((ulong)ppVar11 / 100);
    lVar28 = ((ulong)ppVar11 % 100) * 2;
    cVar7 = std::__detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::
            __digits[lVar28];
    *(undefined1 *)((long)puStack_f8 + (ulong)uVar8) =
         std::__detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::
         __digits[lVar28 + 1];
    uVar23 = uVar8 - 1;
    uVar8 = uVar8 - 2;
    *(char *)((long)puStack_f8 + (ulong)uVar23) = cVar7;
    bVar4 = (pthread_mutex_t *)0x270f < ppVar11;
    ppVar11 = in_RCX;
  } while (bVar4);
LAB_0040324b:
  puStack_110 = &uStack_e8;
  cVar7 = (char)in_RCX + '0';
  if ((pthread_mutex_t *)0x9 < in_RCX) {
    *(undefined1 *)((long)puStack_f8 + 1) =
         std::__detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::
         __digits[(long)in_RCX * 2 + 1];
    cVar7 = std::__detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::
            __digits[(long)in_RCX * 2];
  }
  *(char *)puStack_f8 = cVar7;
  *(int *)(this + 7) = (int)sStack_f0 + 1;
  *(char *)((long)this + 0x3c) = *(char *)puStack_f8 + -0x30;
  plVar21 = (long *)((extraout_RDX * 0xef) / 0xf + 1);
  if ((long **)*this == pplVar1) {
    plVar29 = (long *)0xf;
  }
  else {
    plVar29 = this[2];
  }
  if (plVar29 < plVar21) {
    plVar12 = (long *)((long)plVar29 * 2);
    if ((long *)((long)plVar29 * 2) < plVar21) {
      plVar12 = plVar21;
    }
    plVar21 = (long *)operator_new((long)plVar12 + 1);
    pplVar26 = (long **)*this;
    sVar25 = (long)this[1] + 1;
    if (this[1] == (long *)0x0) {
      *(undefined *)plVar21 = *(undefined *)pplVar26;
    }
    else if (sVar25 != 0) {
      memcpy(plVar21,pplVar26,sVar25);
    }
    if (pplVar26 != pplVar1) {
      operator_delete(pplVar26,(long)this[2] + 1);
    }
    *this = plVar21;
    this[2] = plVar12;
  }
  if (extraout_RDX >> 0x3c != 0) {
                    // WARNING: Subroutine does not return
    std::__throw_length_error("vector::reserve");
  }
  plVar21 = this[4];
  uVar27 = (long)this[6] - (long)plVar21;
  if ((ulong)((long)uVar27 >> 3) < extraout_RDX) {
    plVar29 = this[5];
    plVar12 = (long *)0x0;
    lVar28 = (long)plVar29 - (long)plVar21;
    if (extraout_RDX != 0) {
      plVar12 = (long *)operator_new(extraout_RDX * 8);
      plVar21 = this[4];
      plVar29 = this[5];
      uVar27 = (long)this[6] - (long)plVar21;
    }
    if (plVar21 != plVar29) {
      plVar13 = plVar12;
      plVar22 = plVar21;
      do {
        lVar3 = *plVar22;
        plVar14 = plVar13 + 1;
        plVar22 = plVar22 + 1;
        *plVar13 = lVar3;
        plVar13 = plVar14;
      } while (plVar14 != (long *)(((long)plVar29 - (long)plVar21) + (long)plVar12));
    }
    if (plVar21 != (long *)0x0) {
      operator_delete(plVar21,uVar27);
    }
    auVar2 = vmovq_avx(plVar12);
    auVar2 = vpinsrq_avx(auVar2,lVar28 + (long)plVar12,1);
    this[6] = plVar12 + extraout_RDX;
    auVar2 = vmovdqu_avx(auVar2);
    *(undefined (*) [16])(this + 4) = auVar2;
  }
  ppVar11 = (pthread_mutex_t *)(in_RSI->__size + extraout_RDX);
  uVar27 = uStack_a8;
  do {
    uStack_a8 = uVar27;
    if (ppVar11 <= in_RSI) {
      this[0x15] = *this;
      if (puStack_f8 != puStack_110) {
        operator_delete(puStack_f8,uStack_e8 + 1);
      }
      return;
    }
    if ((ulong)((long)in_RSI * -0x1111111111111111) < 0x1111111111111112) {
      plVar21 = this[1];
      if (0x7fffffffffffffffU - (long)plVar21 < 9) {
LAB_00403b4e:
                    // WARNING: Subroutine does not return
        std::__throw_length_error("basic_string::append");
      }
      plVar29 = (long *)((long)plVar21 + 9);
      if (pplVar1 == (long **)*this) {
        plVar12 = (long *)0xf;
      }
      else {
        plVar12 = this[2];
      }
      if (plVar12 < plVar29) {
        std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_mutate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)this,
                   (ulong)plVar21,0,"FizzBuzz\n",9);
      }
      else {
        puVar16 = (undefined8 *)((long)*this + (long)plVar21);
        *puVar16 = 0x7a7a75427a7a6946;
        *(undefined *)(puVar16 + 1) = 10;
      }
LAB_00403480:
      this[1] = plVar29;
      *(undefined *)((long)*this + (long)plVar29) = 0;
    }
    else {
      if ((ulong)((long)in_RSI * -0x3333333333333333) < 0x3333333333333334) {
        plVar21 = this[1];
        if (0x7fffffffffffffffU - (long)plVar21 < 5) goto LAB_00403b4e;
        plVar29 = (long *)((long)plVar21 + 5);
        if (pplVar1 == (long **)*this) {
          plVar12 = (long *)0xf;
        }
        else {
          plVar12 = this[2];
        }
        if (plVar12 < plVar29) {
          std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_mutate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)this,
                     (ulong)plVar21,0,"Buzz\n",5);
        }
        else {
          puVar15 = (undefined4 *)((long)*this + (long)plVar21);
          *puVar15 = 0x7a7a7542;
          *(undefined *)(puVar15 + 1) = 10;
        }
        goto LAB_00403480;
      }
      if ((ulong)((long)in_RSI * -0x5555555555555555) < 0x5555555555555556) {
        plVar21 = this[1];
        if (0x7fffffffffffffffU - (long)plVar21 < 5) goto LAB_00403b4e;
        plVar29 = (long *)((long)plVar21 + 5);
        if (pplVar1 == (long **)*this) {
          plVar12 = (long *)0xf;
        }
        else {
          plVar12 = this[2];
        }
        if (plVar12 < plVar29) {
          std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_mutate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)this,
                     (ulong)plVar21,0,"Fizz\n",5);
        }
        else {
          puVar15 = (undefined4 *)((long)*this + (long)plVar21);
          *puVar15 = 0x7a7a6946;
          *(undefined *)(puVar15 + 1) = 10;
        }
        goto LAB_00403480;
      }
      uStack_a8._1_7_ = (uint7)(uVar27 >> 8);
      ppVar9 = in_RSI;
      if (in_RSI < (pthread_mutex_t *)0xa) {
LAB_00403a4a:
        puStack_b8 = &uStack_a8;
        uStack_a8 = (ulong)uStack_a8._1_7_ << 8;
        sVar25 = 1;
LAB_004038e6:
        *(char *)((long)puStack_b8 + sVar25) = '\0';
        uStack_b0._0_4_ = (int)sVar25;
        uVar27 = (ulong)((int)uStack_b0 - 1);
        ppVar18 = in_RSI;
        uStack_b0 = sVar25;
        if ((pthread_mutex_t *)0x63 < in_RSI) goto LAB_00403640;
      }
      else {
        if (in_RSI < (pthread_mutex_t *)0x64) {
          puStack_b8 = &uStack_a8;
          sVar25 = 2;
LAB_004038d0:
          uStack_a8 = uVar27;
          memset(puStack_b8,0,sVar25);
          goto LAB_004038e6;
        }
        if (in_RSI < (pthread_mutex_t *)0x3e8) {
          puStack_b8 = &uStack_a8;
          sVar25 = 3;
          goto LAB_004038d0;
        }
        sVar25 = 1;
        ppVar18 = in_RSI;
        if (in_RSI < (pthread_mutex_t *)0x2710) {
          puStack_b8 = &uStack_a8;
          sVar25 = 4;
          goto LAB_004038d0;
        }
        do {
          iVar24 = (int)sVar25;
          sVar25 = (size_t)(iVar24 + 4);
          if (ppVar18 < (pthread_mutex_t *)0x186a0) goto LAB_004035f4;
          if (ppVar18 < (pthread_mutex_t *)0xf4240) {
            sVar25 = (size_t)(iVar24 + 5);
            goto LAB_004035f4;
          }
          if (ppVar18 < (pthread_mutex_t *)0x989680) {
            sVar25 = (size_t)(iVar24 + 6);
            goto LAB_004035f4;
          }
          bVar4 = (pthread_mutex_t *)0x5f5e0ff < ppVar18;
          ppVar18 = (pthread_mutex_t *)((ulong)ppVar18 / 10000);
        } while (bVar4);
        sVar25 = (size_t)(iVar24 + 7);
LAB_004035f4:
        puStack_b8 = &uStack_a8;
        if (0xf < sVar25) {
          puStack_b8 = (undefined8 *)operator_new(sVar25 + 1);
          uVar27 = sVar25;
          goto LAB_004038d0;
        }
        if (sVar25 != 0) {
          if (sVar25 == 1) goto LAB_00403a4a;
          goto LAB_004038d0;
        }
        uStack_b0 = 0;
        uStack_a8 = (ulong)uStack_a8._1_7_ << 8;
        uVar27 = 0xffffffff;
LAB_00403640:
        do {
          iVar24 = (int)uVar27;
          lVar28 = ((ulong)ppVar9 % 100) * 2;
          cVar7 = std::__detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)
                  ::__digits[lVar28];
          *(undefined1 *)((long)puStack_b8 + uVar27) =
               std::__detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::
               __digits[lVar28 + 1];
          uVar27 = (ulong)(iVar24 - 2);
          *(char *)((long)puStack_b8 + (ulong)(iVar24 - 1)) = cVar7;
          bVar4 = (pthread_mutex_t *)0x270f < ppVar9;
          ppVar18 = (pthread_mutex_t *)((ulong)ppVar9 / 100);
          ppVar9 = (pthread_mutex_t *)((ulong)ppVar9 / 100);
        } while (bVar4);
      }
      cVar7 = (char)ppVar18 + '0';
      if ((pthread_mutex_t *)0x9 < ppVar18) {
        *(undefined1 *)((long)puStack_b8 + 1) =
             std::__detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::
             __digits[(long)ppVar18 * 2 + 1];
        cVar7 = std::__detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::
                __digits[(long)ppVar18 * 2];
      }
      *(char *)puStack_b8 = cVar7;
      ppcVar17 = (char **)std::__cxx11::
                          basic_string<char,std::char_traits<char>,std::allocator<char>>::
                          _M_replace_aux((basic_string<char,std::char_traits<char>,std::allocator<char>>
                                          *)&puStack_b8,uStack_b0,0,1,'\n');
      ppcStack_d8 = (char **)auStack_c8;
      if ((char **)*ppcVar17 == ppcVar17 + 2) {
        auStack_c8 = vmovdqu_avx(*(undefined (*) [16])(ppcVar17 + 2));
      }
      else {
        auStack_c8._0_8_ = ppcVar17[2];
        ppcStack_d8 = (char **)*ppcVar17;
      }
      pcStack_d0 = ppcVar17[1];
      *(undefined *)(ppcVar17 + 2) = 0;
      ppcVar17[1] = (char *)0x0;
      plVar29 = this[1];
      *ppcVar17 = (char *)(ppcVar17 + 2);
      pplVar26 = (long **)*this;
      plVar21 = (long *)(pcStack_d0 + (long)plVar29);
      if (pplVar1 == pplVar26) {
        plVar12 = (long *)0xf;
      }
      else {
        plVar12 = this[2];
      }
      if (plVar12 < plVar21) {
        std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_mutate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)this,
                   (ulong)plVar29,0,(char *)ppcStack_d8,(ulong)pcStack_d0);
        pplVar26 = (long **)*this;
      }
      else if (pcStack_d0 != (char *)0x0) {
        if (pcStack_d0 == (char *)0x1) {
          *(char *)((long)pplVar26 + (long)plVar29) = *(char *)ppcStack_d8;
          pplVar26 = (long **)*this;
        }
        else {
          memcpy((char *)((long)pplVar26 + (long)plVar29),ppcStack_d8,(size_t)pcStack_d0);
          pplVar26 = (long **)*this;
        }
      }
      this[1] = plVar21;
      *(undefined *)((long)pplVar26 + (long)plVar21) = 0;
      if (ppcStack_d8 != (char **)auStack_c8) {
        operator_delete(ppcStack_d8,auStack_c8._0_8_ + 1);
      }
      if (puStack_b8 != &uStack_a8) {
        operator_delete(puStack_b8,uStack_a8 + 1);
      }
    }
    puStack_b8 = (undefined8 *)((long)this[1] + (long)*this);
    plVar21 = this[5];
    if (plVar21 == this[6]) {
      in_RSI = (pthread_mutex_t *)((long)&(in_RSI->__data).__lock + 1);
      std::
      vector<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>>
      ::
      _M_realloc_insert<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
                ((vector<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>>
                  *)(this + 4),(__normal_iterator)plVar21,(__normal_iterator *)&puStack_b8);
      uVar27 = uStack_a8;
    }
    else {
      *plVar21 = (long)puStack_b8;
      in_RSI = (pthread_mutex_t *)((long)&(in_RSI->__data).__lock + 1);
      this[5] = plVar21 + 1;
      uVar27 = uStack_a8;
    }
  } while( true );
}



// std::thread::_State_impl<std::thread::_Invoker<std::tuple<main::{lambda(worker*)#1}, worker*> >
// >::_M_run()

void std::thread::_State_impl<std::thread::_Invoker<std::tuple<main::{lambda(worker*)#1},worker*>>>
     ::_M_run(void)

{
  long **pplVar1;
  undefined auVar2 [16];
  long lVar3;
  bool bVar4;
  undefined auVar5 [16];
  char cVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  char **ppcVar12;
  uint uVar13;
  ulong in_RCX;
  ulong uVar14;
  ulong extraout_RDX;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  uint uVar18;
  int iVar19;
  ulong in_RSI;
  size_t sVar20;
  ulong uVar21;
  long in_RDI;
  long **this;
  long **pplVar22;
  ulong uVar23;
  long lVar24;
  long *plVar25;
  undefined auVar26 [32];
  undefined8 *puStack_b8;
  undefined8 *puStack_a0;
  size_t sStack_98;
  undefined8 uStack_90;
  char **ppcStack_80;
  char *pcStack_78;
  undefined auStack_70 [16];
  undefined8 *puStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined extraout_var [24];
  
  this = *(long ***)(in_RDI + 8);
  auVar26._0_8_ = worker::loop();
  auVar26._8_24_ = extraout_var;
  auVar5 = vpxor_avx(auVar26._0_16_,auVar26._0_16_);
  pplVar1 = this + 2;
  auVar2 = vmovdqu_avx(auVar5);
  *(undefined (*) [16])(this + 4) = auVar2;
  auVar5 = vpxor_avx(auVar5,auVar5);
  *this = (long *)pplVar1;
  this[1] = (long *)0x0;
  *(undefined *)(this + 2) = 0;
  this[6] = (long *)0x0;
  *(undefined4 *)(this + 7) = 0;
  *(undefined *)((long)this + 0x3c) = 0;
  auVar2 = vmovdqu_avx(auVar5);
  *(undefined (*) [16])(this + 8) = auVar2;
  auVar2 = vmovdqu_avx(auVar5);
  *(undefined (*) [16])(this + 10) = auVar2;
  this[0xc] = (long *)0x0;
  std::condition_variable::condition_variable((condition_variable *)(this + 0xd));
  this[0x13] = (long *)0x0;
  this[0x14] = (long *)0x0;
  this[0x15] = (long *)0x0;
  this[0x16] = (long *)0x0;
  this[0x17] = (long *)0x0;
  if (in_RCX < 10) {
LAB_00403a76:
    puStack_b8 = &uStack_90;
    uStack_90 = (ulong)uStack_90._1_7_ << 8;
    sStack_98 = 1;
    puStack_a0 = puStack_b8;
LAB_00403985:
    *(char *)((long)puStack_a0 + sStack_98) = '\0';
    uVar13 = (int)sStack_98 - 1;
    uVar23 = in_RCX;
    if (in_RCX < 100) goto LAB_0040324b;
  }
  else {
    if (in_RCX < 100) {
      puStack_a0 = &uStack_90;
      sStack_98 = 2;
LAB_00403976:
      memset(puStack_a0,0,sStack_98);
      goto LAB_00403985;
    }
    if (in_RCX < 1000) {
      puStack_a0 = &uStack_90;
      sStack_98 = 3;
      goto LAB_00403976;
    }
    uVar23 = in_RCX;
    uVar13 = 1;
    if (in_RCX < 10000) {
      puStack_a0 = &uStack_90;
      sStack_98 = 4;
      goto LAB_00403976;
    }
    do {
      uVar18 = uVar13;
      if (uVar23 < 100000) {
        sStack_98 = (size_t)(uVar18 + 4);
        goto LAB_004031b5;
      }
      if (uVar23 < 1000000) {
        sStack_98 = (size_t)(uVar18 + 5);
        goto LAB_004031b5;
      }
      if (uVar23 < 10000000) {
        sStack_98 = (size_t)(uVar18 + 6);
        goto LAB_004031b5;
      }
      bVar4 = 99999999 < uVar23;
      uVar23 = uVar23 / 10000;
      uVar13 = uVar18 + 4;
    } while (bVar4);
    sStack_98 = (size_t)(uVar18 + 7);
LAB_004031b5:
    puStack_a0 = &uStack_90;
    if (0xf < sStack_98) {
      puStack_a0 = (undefined8 *)operator_new(sStack_98 + 1);
      uStack_90 = sStack_98;
      goto LAB_00403976;
    }
    if (sStack_98 != 0) {
      if (sStack_98 == 1) goto LAB_00403a76;
      goto LAB_00403976;
    }
    sStack_98 = 0;
    uStack_90 = (ulong)uStack_90._1_7_ << 8;
    uVar13 = 0xffffffff;
    uVar23 = in_RCX;
  }
  do {
    in_RCX = uVar23 / 100;
    lVar24 = (uVar23 % 100) * 2;
    cVar6 = __detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::__digits
            [lVar24];
    *(undefined1 *)((long)puStack_a0 + (ulong)uVar13) =
         __detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::__digits
         [lVar24 + 1];
    uVar18 = uVar13 - 1;
    uVar13 = uVar13 - 2;
    *(char *)((long)puStack_a0 + (ulong)uVar18) = cVar6;
    bVar4 = 9999 < uVar23;
    uVar23 = in_RCX;
  } while (bVar4);
LAB_0040324b:
  puStack_b8 = &uStack_90;
  cVar6 = (char)in_RCX + '0';
  if (9 < in_RCX) {
    *(undefined1 *)((long)puStack_a0 + 1) =
         __detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::__digits
         [in_RCX * 2 + 1];
    cVar6 = __detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::__digits
            [in_RCX * 2];
  }
  *(char *)puStack_a0 = cVar6;
  *(int *)(this + 7) = (int)sStack_98 + 1;
  *(char *)((long)this + 0x3c) = *(char *)puStack_a0 + -0x30;
  plVar15 = (long *)((extraout_RDX * 0xef) / 0xf + 1);
  if ((long **)*this == pplVar1) {
    plVar25 = (long *)0xf;
  }
  else {
    plVar25 = this[2];
  }
  if (plVar25 < plVar15) {
    plVar7 = (long *)((long)plVar25 * 2);
    if ((long *)((long)plVar25 * 2) < plVar15) {
      plVar7 = plVar15;
    }
    plVar15 = (long *)operator_new((long)plVar7 + 1);
    pplVar22 = (long **)*this;
    sVar20 = (long)this[1] + 1;
    if (this[1] == (long *)0x0) {
      *(undefined *)plVar15 = *(undefined *)pplVar22;
    }
    else if (sVar20 != 0) {
      memcpy(plVar15,pplVar22,sVar20);
    }
    if (pplVar22 != pplVar1) {
      operator_delete(pplVar22,(long)this[2] + 1);
    }
    *this = plVar15;
    this[2] = plVar7;
  }
  if (extraout_RDX >> 0x3c != 0) {
                    // WARNING: Subroutine does not return
    std::__throw_length_error("vector::reserve");
  }
  plVar15 = this[4];
  uVar23 = (long)this[6] - (long)plVar15;
  if ((ulong)((long)uVar23 >> 3) < extraout_RDX) {
    plVar25 = this[5];
    plVar7 = (long *)0x0;
    lVar24 = (long)plVar25 - (long)plVar15;
    if (extraout_RDX != 0) {
      plVar7 = (long *)operator_new(extraout_RDX * 8);
      plVar15 = this[4];
      plVar25 = this[5];
      uVar23 = (long)this[6] - (long)plVar15;
    }
    if (plVar15 != plVar25) {
      plVar8 = plVar7;
      plVar16 = plVar15;
      do {
        lVar3 = *plVar16;
        plVar9 = plVar8 + 1;
        plVar16 = plVar16 + 1;
        *plVar8 = lVar3;
        plVar8 = plVar9;
      } while (plVar9 != (long *)(((long)plVar25 - (long)plVar15) + (long)plVar7));
    }
    if (plVar15 != (long *)0x0) {
      operator_delete(plVar15,uVar23);
    }
    auVar2 = vmovq_avx(plVar7);
    auVar2 = vpinsrq_avx(auVar2,lVar24 + (long)plVar7,1);
    this[6] = plVar7 + extraout_RDX;
    auVar2 = vmovdqu_avx(auVar2);
    *(undefined (*) [16])(this + 4) = auVar2;
  }
  uVar17 = extraout_RDX + in_RSI;
  uVar23 = uStack_50;
  do {
    uStack_50 = uVar23;
    if (uVar17 <= in_RSI) {
      this[0x15] = *this;
      if (puStack_a0 != puStack_b8) {
        operator_delete(puStack_a0,uStack_90 + 1);
      }
      return;
    }
    if (in_RSI * -0x1111111111111111 < 0x1111111111111112) {
      plVar15 = this[1];
      if (0x7fffffffffffffffU - (long)plVar15 < 9) {
LAB_00403b4e:
                    // WARNING: Subroutine does not return
        std::__throw_length_error("basic_string::append");
      }
      plVar25 = (long *)((long)plVar15 + 9);
      if (pplVar1 == (long **)*this) {
        plVar7 = (long *)0xf;
      }
      else {
        plVar7 = this[2];
      }
      if (plVar7 < plVar25) {
        __cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_mutate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)this,
                   (ulong)plVar15,0,"FizzBuzz\n",9);
      }
      else {
        puVar11 = (undefined8 *)((long)*this + (long)plVar15);
        *puVar11 = 0x7a7a75427a7a6946;
        *(undefined *)(puVar11 + 1) = 10;
      }
LAB_00403480:
      this[1] = plVar25;
      *(undefined *)((long)*this + (long)plVar25) = 0;
    }
    else {
      if (in_RSI * -0x3333333333333333 < 0x3333333333333334) {
        plVar15 = this[1];
        if (0x7fffffffffffffffU - (long)plVar15 < 5) goto LAB_00403b4e;
        plVar25 = (long *)((long)plVar15 + 5);
        if (pplVar1 == (long **)*this) {
          plVar7 = (long *)0xf;
        }
        else {
          plVar7 = this[2];
        }
        if (plVar7 < plVar25) {
          __cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_mutate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)this,
                     (ulong)plVar15,0,"Buzz\n",5);
        }
        else {
          puVar10 = (undefined4 *)((long)*this + (long)plVar15);
          *puVar10 = 0x7a7a7542;
          *(undefined *)(puVar10 + 1) = 10;
        }
        goto LAB_00403480;
      }
      if (in_RSI * -0x5555555555555555 < 0x5555555555555556) {
        plVar15 = this[1];
        if (0x7fffffffffffffffU - (long)plVar15 < 5) goto LAB_00403b4e;
        plVar25 = (long *)((long)plVar15 + 5);
        if (pplVar1 == (long **)*this) {
          plVar7 = (long *)0xf;
        }
        else {
          plVar7 = this[2];
        }
        if (plVar7 < plVar25) {
          __cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_mutate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)this,
                     (ulong)plVar15,0,"Fizz\n",5);
        }
        else {
          puVar10 = (undefined4 *)((long)*this + (long)plVar15);
          *puVar10 = 0x7a7a6946;
          *(undefined *)(puVar10 + 1) = 10;
        }
        goto LAB_00403480;
      }
      uStack_50._1_7_ = (uint7)(uVar23 >> 8);
      uVar14 = in_RSI;
      if (in_RSI < 10) {
LAB_00403a4a:
        puStack_60 = &uStack_50;
        uStack_50 = (ulong)uStack_50._1_7_ << 8;
        sVar20 = 1;
LAB_004038e6:
        *(char *)((long)puStack_60 + sVar20) = '\0';
        uStack_58._0_4_ = (int)sVar20;
        uVar21 = (ulong)((int)uStack_58 - 1);
        uVar23 = in_RSI;
        uStack_58 = sVar20;
        if (99 < in_RSI) goto LAB_00403640;
      }
      else {
        if (in_RSI < 100) {
          puStack_60 = &uStack_50;
          sVar20 = 2;
LAB_004038d0:
          uStack_50 = uVar23;
          memset(puStack_60,0,sVar20);
          goto LAB_004038e6;
        }
        if (in_RSI < 1000) {
          puStack_60 = &uStack_50;
          sVar20 = 3;
          goto LAB_004038d0;
        }
        sVar20 = 1;
        uVar21 = in_RSI;
        if (in_RSI < 10000) {
          puStack_60 = &uStack_50;
          sVar20 = 4;
          goto LAB_004038d0;
        }
        do {
          iVar19 = (int)sVar20;
          sVar20 = (size_t)(iVar19 + 4);
          if (uVar21 < 100000) goto LAB_004035f4;
          if (uVar21 < 1000000) {
            sVar20 = (size_t)(iVar19 + 5);
            goto LAB_004035f4;
          }
          if (uVar21 < 10000000) {
            sVar20 = (size_t)(iVar19 + 6);
            goto LAB_004035f4;
          }
          bVar4 = 99999999 < uVar21;
          uVar21 = uVar21 / 10000;
        } while (bVar4);
        sVar20 = (size_t)(iVar19 + 7);
LAB_004035f4:
        puStack_60 = &uStack_50;
        if (0xf < sVar20) {
          puStack_60 = (undefined8 *)operator_new(sVar20 + 1);
          uVar23 = sVar20;
          goto LAB_004038d0;
        }
        if (sVar20 != 0) {
          if (sVar20 == 1) goto LAB_00403a4a;
          goto LAB_004038d0;
        }
        uStack_58 = 0;
        uStack_50 = (ulong)uStack_50._1_7_ << 8;
        uVar21 = 0xffffffff;
LAB_00403640:
        do {
          iVar19 = (int)uVar21;
          lVar24 = (uVar14 % 100) * 2;
          cVar6 = __detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::
                  __digits[lVar24];
          *(undefined1 *)((long)puStack_60 + uVar21) =
               __detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::
               __digits[lVar24 + 1];
          uVar21 = (ulong)(iVar19 - 2);
          *(char *)((long)puStack_60 + (ulong)(iVar19 - 1)) = cVar6;
          bVar4 = 9999 < uVar14;
          uVar23 = uVar14 / 100;
          uVar14 = uVar14 / 100;
        } while (bVar4);
      }
      cVar6 = (char)uVar23 + '0';
      if (9 < uVar23) {
        *(undefined1 *)((long)puStack_60 + 1) =
             __detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::__digits
             [uVar23 * 2 + 1];
        cVar6 = __detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::
                __digits[uVar23 * 2];
      }
      *(char *)puStack_60 = cVar6;
      ppcVar12 = (char **)__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                          _M_replace_aux((basic_string<char,std::char_traits<char>,std::allocator<char>>
                                          *)&puStack_60,uStack_58,0,1,'\n');
      ppcStack_80 = (char **)auStack_70;
      if ((char **)*ppcVar12 == ppcVar12 + 2) {
        auStack_70 = vmovdqu_avx(*(undefined (*) [16])(ppcVar12 + 2));
      }
      else {
        auStack_70._0_8_ = ppcVar12[2];
        ppcStack_80 = (char **)*ppcVar12;
      }
      pcStack_78 = ppcVar12[1];
      *(undefined *)(ppcVar12 + 2) = 0;
      ppcVar12[1] = (char *)0x0;
      plVar25 = this[1];
      *ppcVar12 = (char *)(ppcVar12 + 2);
      pplVar22 = (long **)*this;
      plVar15 = (long *)(pcStack_78 + (long)plVar25);
      if (pplVar1 == pplVar22) {
        plVar7 = (long *)0xf;
      }
      else {
        plVar7 = this[2];
      }
      if (plVar7 < plVar15) {
        __cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_mutate
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)this,
                   (ulong)plVar25,0,(char *)ppcStack_80,(ulong)pcStack_78);
        pplVar22 = (long **)*this;
      }
      else if (pcStack_78 != (char *)0x0) {
        if (pcStack_78 == (char *)0x1) {
          *(char *)((long)pplVar22 + (long)plVar25) = *(char *)ppcStack_80;
          pplVar22 = (long **)*this;
        }
        else {
          memcpy((char *)((long)pplVar22 + (long)plVar25),ppcStack_80,(size_t)pcStack_78);
          pplVar22 = (long **)*this;
        }
      }
      this[1] = plVar15;
      *(undefined *)((long)pplVar22 + (long)plVar15) = 0;
      if (ppcStack_80 != (char **)auStack_70) {
        operator_delete(ppcStack_80,auStack_70._0_8_ + 1);
      }
      if (puStack_60 != &uStack_50) {
        operator_delete(puStack_60,uStack_50 + 1);
      }
    }
    puStack_60 = (undefined8 *)((long)this[1] + (long)*this);
    plVar15 = this[5];
    if (plVar15 == this[6]) {
      in_RSI = in_RSI + 1;
      vector<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>>
      ::
      _M_realloc_insert<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
                ((vector<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>>
                  *)(this + 4),(__normal_iterator)plVar15,(__normal_iterator *)&puStack_60);
      uVar23 = uStack_50;
    }
    else {
      *plVar15 = (long)puStack_60;
      in_RSI = in_RSI + 1;
      this[5] = plVar15 + 1;
      uVar23 = uStack_50;
    }
  } while( true );
}



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
  uint uVar22;
  int iVar23;
  undefined8 *puVar24;
  size_t sVar25;
  long lVar26;
  ulong uVar27;
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
  
  auVar7 = vpxor_avx(in_YMM0._0_16_,in_YMM0._0_16_);
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
      uVar22 = uVar17;
      if (uVar19 < 100000) {
        local_90 = (size_t)(uVar22 + 4);
        goto LAB_004031b5;
      }
      if (uVar19 < 1000000) {
        local_90 = (size_t)(uVar22 + 5);
        goto LAB_004031b5;
      }
      if (uVar19 < 10000000) {
        local_90 = (size_t)(uVar22 + 6);
        goto LAB_004031b5;
      }
      bVar6 = 99999999 < uVar19;
      uVar19 = uVar19 / 10000;
      uVar17 = uVar22 + 4;
    } while (bVar6);
    local_90 = (size_t)(uVar22 + 7);
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
    param_3 = uVar19 / 100;
    lVar26 = (uVar19 % 100) * 2;
    cVar8 = std::__detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::
            __digits[lVar26];
    *(undefined1 *)((long)local_98 + (ulong)uVar17) =
         std::__detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::
         __digits[lVar26 + 1];
    uVar22 = uVar17 - 1;
    uVar17 = uVar17 - 2;
    *(char *)((long)local_98 + (ulong)uVar22) = cVar8;
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
    uVar27 = 0xf;
  }
  else {
    uVar27 = *(ulong *)(this + 0x10);
  }
  if (uVar27 < uVar19) {
    uVar18 = uVar27 * 2;
    if (uVar27 * 2 < uVar19) {
      uVar18 = uVar19;
    }
    pwVar9 = (worker *)operator_new(uVar18 + 1);
    pwVar3 = *(worker **)this;
    sVar25 = *(long *)(this + 8) + 1;
    if (*(long *)(this + 8) == 0) {
      *pwVar9 = *pwVar3;
    }
    else if (sVar25 != 0) {
      memcpy(pwVar9,pwVar3,sVar25);
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
    puVar24 = *(undefined8 **)(this + 0x28);
    puVar10 = (undefined8 *)0x0;
    lVar26 = (long)puVar24 - (long)puVar14;
    if (param_2 != 0) {
      puVar10 = (undefined8 *)operator_new(param_2 * 8);
      puVar14 = *(undefined8 **)(this + 0x20);
      puVar24 = *(undefined8 **)(this + 0x28);
      uVar19 = *(long *)(this + 0x30) - (long)puVar14;
    }
    if (puVar14 != puVar24) {
      puVar11 = puVar10;
      puVar20 = puVar14;
      do {
        uVar4 = *puVar20;
        puVar12 = puVar11 + 1;
        puVar20 = puVar20 + 1;
        *puVar11 = uVar4;
        puVar11 = puVar12;
      } while (puVar12 != (undefined8 *)(((long)puVar24 - (long)puVar14) + (long)puVar10));
    }
    if (puVar14 != (undefined8 *)0x0) {
      operator_delete(puVar14,uVar19);
    }
    auVar2 = vmovq_avx(puVar10);
    auVar2 = vpinsrq_avx(auVar2,lVar26 + (long)puVar10,1);
    *(undefined8 **)(this + 0x30) = puVar10 + param_2;
    auVar2 = vmovdqu_avx(auVar2);
    *(undefined (*) [16])(this + 0x20) = auVar2;
  }
  uVar19 = param_2 + param_1;
  if (param_1 < uVar19) {
LAB_004033e0:
    do {
      if (param_1 * -0x1111111111111111 < 0x1111111111111112) {
        uVar27 = *(ulong *)(this + 8);
        if (0x7fffffffffffffff - uVar27 < 9) {
LAB_00403b4e:
                    // WARNING: Subroutine does not return
          std::__throw_length_error("basic_string::append");
        }
        uVar18 = uVar27 + 9;
        if (pwVar1 == *(worker **)this) {
          uVar21 = 0xf;
        }
        else {
          uVar21 = *(ulong *)(this + 0x10);
        }
        if (uVar21 < uVar18) {
          std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_mutate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)this,uVar27,0
                     ,"FizzBuzz\n",9);
        }
        else {
          puVar14 = (undefined8 *)(*(worker **)this + uVar27);
          *puVar14 = 0x7a7a75427a7a6946;
          *(undefined *)(puVar14 + 1) = 10;
        }
LAB_00403480:
        *(ulong *)(this + 8) = uVar18;
        *(undefined *)(*(long *)this + uVar18) = 0;
      }
      else {
        if (param_1 * -0x3333333333333333 < 0x3333333333333334) {
          uVar27 = *(ulong *)(this + 8);
          if (0x7fffffffffffffff - uVar27 < 5) goto LAB_00403b4e;
          uVar18 = uVar27 + 5;
          if (pwVar1 == *(worker **)this) {
            uVar21 = 0xf;
          }
          else {
            uVar21 = *(ulong *)(this + 0x10);
          }
          if (uVar21 < uVar18) {
            std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_mutate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)this,uVar27
                       ,0,"Buzz\n",5);
          }
          else {
            puVar13 = (undefined4 *)(*(worker **)this + uVar27);
            *puVar13 = 0x7a7a7542;
            *(undefined *)(puVar13 + 1) = 10;
          }
          goto LAB_00403480;
        }
        if (param_1 * -0x5555555555555555 < 0x5555555555555556) {
          uVar27 = *(ulong *)(this + 8);
          if (0x7fffffffffffffff - uVar27 < 5) goto LAB_00403b4e;
          uVar18 = uVar27 + 5;
          if (pwVar1 == *(worker **)this) {
            uVar21 = 0xf;
          }
          else {
            uVar21 = *(ulong *)(this + 0x10);
          }
          if (uVar21 < uVar18) {
            std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_mutate
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)this,uVar27
                       ,0,"Fizz\n",5);
          }
          else {
            puVar13 = (undefined4 *)(*(worker **)this + uVar27);
            *puVar13 = 0x7a7a6946;
            *(undefined *)(puVar13 + 1) = 10;
          }
          goto LAB_00403480;
        }
        uVar27 = param_1;
        if (param_1 < 10) {
LAB_00403a4a:
          local_58 = &local_48;
          local_48 = (ulong)local_48._1_7_ << 8;
          sVar25 = 1;
LAB_004038e6:
          *(char *)((long)local_58 + sVar25) = '\0';
          local_50._0_4_ = (int)sVar25;
          uVar21 = (ulong)((int)local_50 - 1);
          uVar18 = param_1;
          local_50 = sVar25;
          if (99 < param_1) goto LAB_00403640;
        }
        else {
          if (param_1 < 100) {
            local_58 = &local_48;
            sVar25 = 2;
LAB_004038d0:
            memset(local_58,0,sVar25);
            goto LAB_004038e6;
          }
          if (param_1 < 1000) {
            local_58 = &local_48;
            sVar25 = 3;
            goto LAB_004038d0;
          }
          sVar25 = 1;
          uVar18 = param_1;
          if (param_1 < 10000) {
            local_58 = &local_48;
            sVar25 = 4;
            goto LAB_004038d0;
          }
          do {
            iVar23 = (int)sVar25;
            sVar25 = (size_t)(iVar23 + 4);
            if (uVar18 < 100000) goto LAB_004035f4;
            if (uVar18 < 1000000) {
              sVar25 = (size_t)(iVar23 + 5);
              goto LAB_004035f4;
            }
            if (uVar18 < 10000000) {
              sVar25 = (size_t)(iVar23 + 6);
              goto LAB_004035f4;
            }
            bVar6 = 99999999 < uVar18;
            uVar18 = uVar18 / 10000;
          } while (bVar6);
          sVar25 = (size_t)(iVar23 + 7);
LAB_004035f4:
          local_58 = &local_48;
          if (0xf < sVar25) {
            local_58 = (undefined8 *)operator_new(sVar25 + 1);
            local_48 = sVar25;
            goto LAB_004038d0;
          }
          if (sVar25 != 0) {
            if (sVar25 == 1) goto LAB_00403a4a;
            goto LAB_004038d0;
          }
          local_50 = 0;
          local_48 = (ulong)local_48._1_7_ << 8;
          uVar21 = 0xffffffff;
LAB_00403640:
          do {
            iVar23 = (int)uVar21;
            lVar26 = (uVar27 % 100) * 2;
            cVar8 = std::__detail::
                    __to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::__digits
                    [lVar26];
            *(undefined1 *)((long)local_58 + uVar21) =
                 std::__detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)
                 ::__digits[lVar26 + 1];
            uVar21 = (ulong)(iVar23 - 2);
            *(char *)((long)local_58 + (ulong)(iVar23 - 1)) = cVar8;
            bVar6 = 9999 < uVar27;
            uVar18 = uVar27 / 100;
            uVar27 = uVar27 / 100;
          } while (bVar6);
        }
        cVar8 = (char)uVar18 + '0';
        if (9 < uVar18) {
          *(undefined1 *)((long)local_58 + 1) =
               std::__detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)::
               __digits[uVar18 * 2 + 1];
          cVar8 = std::__detail::__to_chars_10_impl<unsigned_long>(char*,unsigned_int,unsigned_long)
                  ::__digits[uVar18 * 2];
        }
        *(char *)local_58 = cVar8;
        ppwVar15 = (worker **)
                   std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                   _M_replace_aux((basic_string<char,std::char_traits<char>,std::allocator<char>> *)
                                  &local_58,local_50,0,1,'\n');
        local_78 = (worker **)local_68;
        if ((worker **)*ppwVar15 == ppwVar15 + 2) {
          local_68 = vmovdqu_avx(*(undefined (*) [16])(ppwVar15 + 2));
        }
        else {
          local_68._0_8_ = ppwVar15[2];
          local_78 = (worker **)*ppwVar15;
        }
        local_70 = ppwVar15[1];
        *(undefined *)(ppwVar15 + 2) = 0;
        ppwVar15[1] = (worker *)0x0;
        uVar27 = *(ulong *)(this + 8);
        *ppwVar15 = (worker *)(ppwVar15 + 2);
        pwVar9 = *(worker **)this;
        pwVar3 = local_70 + uVar27;
        if (pwVar1 == pwVar9) {
          pwVar16 = (worker *)0xf;
        }
        else {
          pwVar16 = *(worker **)(this + 0x10);
        }
        if (pwVar16 < pwVar3) {
          std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_mutate
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>> *)this,uVar27,0
                     ,(char *)local_78,(ulong)local_70);
          pwVar9 = *(worker **)this;
        }
        else if (local_70 != (worker *)0x0) {
          if (local_70 == (worker *)0x1) {
            pwVar9[uVar27] = *(worker *)local_78;
            pwVar9 = *(worker **)this;
          }
          else {
            memcpy(pwVar9 + uVar27,local_78,(size_t)local_70);
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
        _M_realloc_insert<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
                  ((vector<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>>
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
    param_1 = uVar6 / 100;
    lVar4 = (uVar6 % 100) * 2;
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



// void std::vector<std::unique_ptr<worker, std::default_delete<worker> >,
// std::allocator<std::unique_ptr<worker, std::default_delete<worker> > >
// >::_M_realloc_insert<std::unique_ptr<worker, std::default_delete<worker> >
// >(__gnu_cxx::__normal_iterator<std::unique_ptr<worker, std::default_delete<worker> >*,
// std::vector<std::unique_ptr<worker, std::default_delete<worker> >,
// std::allocator<std::unique_ptr<worker, std::default_delete<worker> > > > >,
// std::unique_ptr<worker, std::default_delete<worker> >&&)

void __thiscall
std::
vector<std::unique_ptr<worker,std::default_delete<worker>>,std::allocator<std::unique_ptr<worker,std::default_delete<worker>>>>
::_M_realloc_insert<std::unique_ptr<worker,std::default_delete<worker>>>
          (vector<std::unique_ptr<worker,std::default_delete<worker>>,std::allocator<std::unique_ptr<worker,std::default_delete<worker>>>>
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
      puVar11 = (undefined8 *)0x8;
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



// void std::vector<std::unique_ptr<std::thread, std::default_delete<std::thread> >,
// std::allocator<std::unique_ptr<std::thread, std::default_delete<std::thread> > >
// >::_M_realloc_insert<std::unique_ptr<std::thread, std::default_delete<std::thread> >
// >(__gnu_cxx::__normal_iterator<std::unique_ptr<std::thread, std::default_delete<std::thread> >*,
// std::vector<std::unique_ptr<std::thread, std::default_delete<std::thread> >,
// std::allocator<std::unique_ptr<std::thread, std::default_delete<std::thread> > > > >,
// std::unique_ptr<std::thread, std::default_delete<std::thread> >&&)

void __thiscall
std::
vector<std::unique_ptr<std::thread,std::default_delete<std::thread>>,std::allocator<std::unique_ptr<std::thread,std::default_delete<std::thread>>>>
::_M_realloc_insert<std::unique_ptr<std::thread,std::default_delete<std::thread>>>
          (vector<std::unique_ptr<std::thread,std::default_delete<std::thread>>,std::allocator<std::unique_ptr<std::thread,std::default_delete<std::thread>>>>
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
      puVar11 = (undefined8 *)0x8;
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
// std::char_traits<char>, std::allocator<char> > >,
// std::allocator<__gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char> > > >
// >::_M_realloc_insert<__gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char> > >
// >(__gnu_cxx::__normal_iterator<__gnu_cxx::__normal_iterator<char*,
// std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >*,
// std::vector<__gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char> > >,
// std::allocator<__gnu_cxx::__normal_iterator<char*, std::__cxx11::basic_string<char,
// std::char_traits<char>, std::allocator<char> > > > > >, __gnu_cxx::__normal_iterator<char*,
// std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >&&)

void __thiscall
std::
vector<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>>
::
_M_realloc_insert<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
          (vector<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<__gnu_cxx::__normal_iterator<char*,std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>>>>
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
      puVar12 = (undefined8 *)0x8;
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



// std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>
// >::_M_mutate(unsigned long, unsigned long, char const*, unsigned long)

void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_mutate
          (basic_string<char,std::char_traits<char>,std::allocator<char>> *this,ulong param_1,
          ulong param_2,char *param_3,ulong param_4)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>> *__src;
  basic_string<char,std::char_traits<char>,std::allocator<char>> *__dest;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  size_t __n;
  
  uVar2 = (param_4 - param_2) + *(long *)(this + 8);
  __n = *(long *)(this + 8) - (param_1 + param_2);
  if (this + 0x10 == *(basic_string<char,std::char_traits<char>,std::allocator<char>> **)this)
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
  __dest = (basic_string<char,std::char_traits<char>,std::allocator<char>> *)operator_new(uVar3 + 1)
  ;
  __src = *(basic_string<char,std::char_traits<char>,std::allocator<char>> **)this;
  if (param_1 != 0) {
    if (param_1 == 1) {
      *__dest = *__src;
    }
    else {
      memcpy(__dest,__src,param_1);
    }
  }
  if (((basic_string<char,std::char_traits<char>,std::allocator<char>> *)param_3 !=
       (basic_string<char,std::char_traits<char>,std::allocator<char>> *)0x0) && (param_4 != 0)) {
    if (param_4 == 1) {
      __dest[param_1] = (basic_string<char,std::char_traits<char>,std::allocator<char>>)*param_3;
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
  *(basic_string<char,std::char_traits<char>,std::allocator<char>> **)this = __dest;
  *(ulong *)(this + 0x10) = uVar3;
  return;
}



// std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>
// >::_M_replace_aux(unsigned long, unsigned long, unsigned long, char)

basic_string<char,std::char_traits<char>,std::allocator<char>> * __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,std::allocator<char>>::_M_replace_aux
          (basic_string<char,std::char_traits<char>,std::allocator<char>> *this,ulong param_1,
          ulong param_2,ulong param_3,char param_4)

{
  long lVar1;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>> *pbVar4;
  
  lVar1 = *(long *)(this + 8);
  if (param_3 <= (param_2 + 0x7fffffffffffffff) - lVar1) {
    pbVar4 = *(basic_string<char,std::char_traits<char>,std::allocator<char>> **)this;
    uVar3 = (param_3 - param_2) + lVar1;
    if (pbVar4 == this + 0x10) {
      uVar2 = 0xf;
    }
    else {
      uVar2 = *(ulong *)(this + 0x10);
    }
    if (uVar2 < uVar3) {
      _M_mutate(this,param_1,param_2,(char *)0x0,param_3);
      pbVar4 = *(basic_string<char,std::char_traits<char>,std::allocator<char>> **)this;
    }
    else {
      __n = lVar1 - (param_2 + param_1);
      if ((__n != 0) && (param_2 != param_3)) {
        if (__n == 1) {
          pbVar4[param_3 + param_1] = pbVar4[param_2 + param_1];
          pbVar4 = *(basic_string<char,std::char_traits<char>,std::allocator<char>> **)this;
        }
        else {
          memmove(pbVar4 + param_3 + param_1,pbVar4 + param_2 + param_1,__n);
          pbVar4 = *(basic_string<char,std::char_traits<char>,std::allocator<char>> **)this;
        }
      }
    }
    if (param_3 != 0) {
      if (param_3 == 1) {
        pbVar4[param_1] = (basic_string<char,std::char_traits<char>,std::allocator<char>>)param_4;
        pbVar4 = *(basic_string<char,std::char_traits<char>,std::allocator<char>> **)this;
      }
      else {
        memset(pbVar4 + param_1,(int)param_4,param_3);
        pbVar4 = *(basic_string<char,std::char_traits<char>,std::allocator<char>> **)this;
      }
    }
    *(ulong *)(this + 8) = uVar3;
    pbVar4[uVar3] = (basic_string<char,std::char_traits<char>,std::allocator<char>>)0x0;
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


