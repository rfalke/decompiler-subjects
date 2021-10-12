typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
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

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef long __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char * _IO_read_ptr;
    char * _IO_read_end;
    char * _IO_read_base;
    char * _IO_write_base;
    char * _IO_write_ptr;
    char * _IO_write_end;
    char * _IO_buf_base;
    char * _IO_buf_end;
    char * _IO_save_base;
    char * _IO_backup_base;
    char * _IO_save_end;
    struct _IO_marker * _markers;
    struct _IO_FILE * _chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t * _lock;
    __off64_t _offset;
    void * __pad1;
    void * __pad2;
    void * __pad3;
    void * __pad4;
    size_t __pad5;
    int _mode;
    char _unused2[15];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct _IO_FILE FILE;

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef struct allocator<int> allocator<int>, *Pallocator<int>;

struct allocator<int> { // PlaceHolder Structure
};

typedef dword vector;

typedef struct vector<int,std::allocator<int>> vector<int,std::allocator<int>>, *Pvector<int,std::allocator<int>>;

struct vector<int,std::allocator<int>> { // PlaceHolder Structure
};

typedef struct allocator<char> allocator<char>, *Pallocator<char>;

struct allocator<char> { // PlaceHolder Structure
};

typedef dword basic_string;

typedef struct allocator allocator, *Pallocator;

struct allocator { // PlaceHolder Structure
};

typedef struct basic_ostream basic_ostream, *Pbasic_ostream;

struct basic_ostream { // PlaceHolder Structure
};

typedef struct _Vector_base<int,std::allocator<int>> _Vector_base<int,std::allocator<int>>, *P_Vector_base<int,std::allocator<int>>;

struct _Vector_base<int,std::allocator<int>> { // PlaceHolder Structure
};

typedef struct basic_string<char,std::char_traits<char>,std::allocator<char>> basic_string<char,std::char_traits<char>,std::allocator<char>>, *Pbasic_string<char,std::char_traits<char>,std::allocator<char>>;

struct basic_string<char,std::char_traits<char>,std::allocator<char>> { // PlaceHolder Structure
};

typedef struct Init Init, *PInit;

struct Init { // PlaceHolder Structure
};

typedef dword iterator_type;

typedef struct _Vector_impl _Vector_impl, *P_Vector_impl;

struct _Vector_impl { // PlaceHolder Structure
};

typedef struct new_allocator new_allocator, *Pnew_allocator;

struct new_allocator { // PlaceHolder Structure
};

typedef dword __normal_iterator;

typedef struct __normal_iterator<int*,std::vector<int,std::allocator<int>>> __normal_iterator<int*,std::vector<int,std::allocator<int>>>, *P__normal_iterator<int*,std::vector<int,std::allocator<int>>>;

struct __normal_iterator<int*,std::vector<int,std::allocator<int>>> { // PlaceHolder Structure
};

typedef struct new_allocator<int> new_allocator<int>, *Pnew_allocator<int>;

struct new_allocator<int> { // PlaceHolder Structure
};

typedef dword difference_type;

typedef struct __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>, *P__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>;

struct __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> { // PlaceHolder Class Structure
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

typedef enum Elf_ProgramHeaderType {
    PT_DYNAMIC=2,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_RELRO=1685382482,
    PT_GNU_STACK=1685382481,
    PT_INTERP=3,
    PT_LOAD=1,
    PT_NOTE=4,
    PT_NULL=0,
    PT_PHDR=6,
    PT_SHLIB=5,
    PT_TLS=7
} Elf_ProgramHeaderType;

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

typedef enum Elf64_DynTag {
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRENT=1879040003,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELSZ=1610612752,
    DT_AUDIT=1879047932,
    DT_AUXILIARY=2147483645,
    DT_BIND_NOW=24,
    DT_CHECKSUM=1879047672,
    DT_CONFIG=1879047930,
    DT_DEBUG=21,
    DT_DEPAUDIT=1879047931,
    DT_FEATURE_1=1879047676,
    DT_FILTER=2147483647,
    DT_FINI=13,
    DT_FINI_ARRAY=26,
    DT_FINI_ARRAYSZ=28,
    DT_FLAGS=30,
    DT_FLAGS_1=1879048187,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_HASH=1879047925,
    DT_GNU_LIBLIST=1879047929,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_GNU_PRELINKED=1879047669,
    DT_HASH=4,
    DT_INIT=12,
    DT_INIT_ARRAY=25,
    DT_INIT_ARRAYSZ=27,
    DT_JMPREL=23,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_MOVETAB=1879047934,
    DT_NEEDED=1,
    DT_NULL=0,
    DT_PLTGOT=3,
    DT_PLTPAD=1879047933,
    DT_PLTPADSZ=1879047673,
    DT_PLTREL=20,
    DT_PLTRELSZ=2,
    DT_POSFLAG_1=1879047677,
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_REL=17,
    DT_RELA=7,
    DT_RELACOUNT=1879048185,
    DT_RELAENT=9,
    DT_RELASZ=8,
    DT_RELCOUNT=1879048186,
    DT_RELENT=19,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_RELRSZ=35,
    DT_RELSZ=18,
    DT_RPATH=15,
    DT_RUNPATH=29,
    DT_SONAME=14,
    DT_STRSZ=10,
    DT_STRTAB=5,
    DT_SYMBOLIC=16,
    DT_SYMENT=11,
    DT_SYMINENT=1879047679,
    DT_SYMINFO=1879047935,
    DT_SYMINSZ=1879047678,
    DT_SYMTAB=6,
    DT_TEXTREL=22,
    DT_TLSDESC_GOT=1879047927,
    DT_TLSDESC_PLT=1879047926,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_VERSYM=1879048176
} Elf64_DynTag;

typedef struct Elf64_Dyn Elf64_Dyn, *PElf64_Dyn;

struct Elf64_Dyn {
    enum Elf64_DynTag d_tag;
    qword d_val;
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType {
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_CHECKSUM=1879048184,
    SHT_DYNAMIC=6,
    SHT_DYNSYM=11,
    SHT_FINI_ARRAY=15,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191,
    SHT_GROUP=17,
    SHT_HASH=5,
    SHT_INIT_ARRAY=14,
    SHT_NOBITS=8,
    SHT_NOTE=7,
    SHT_NULL=0,
    SHT_PREINIT_ARRAY=16,
    SHT_PROGBITS=1,
    SHT_REL=9,
    SHT_RELA=4,
    SHT_SHLIB=10,
    SHT_STRTAB=3,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_syminfo=1879048188,
    SHT_SYMTAB=2,
    SHT_SYMTAB_SHNDX=18
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



void FUN_00400e60(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::basic_string<char,std::char_traits<char>,std::allocator<char>>::append
               (char *param_1,ulong param_2)

{
  append(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::__throw_length_error(char *param_1)

{
  __throw_length_error(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string(void)

{
  basic_string();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::basic_string<char,std::char_traits<char>,std::allocator<char>>::substr
               (ulong param_1,ulong param_2)

{
  substr(param_1,param_2);
  return;
}



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::basic_string<char,std::char_traits<char>,std::allocator<char>>::reserve(ulong param_1)

{
  reserve(param_1);
  return;
}



void __cxa_rethrow(void)

{
  __cxa_rethrow();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::basic_string<char,std::char_traits<char>,std::allocator<char>>::size(void)

{
  size();
  return;
}



void __thiscall std::ios_base::Init::Init(Init *this)

{
  Init(this);
  return;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
               (basic_string *param_1)

{
  basic_string(param_1);
  return;
}



void __cxa_atexit(void)

{
  __cxa_atexit();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = fgets(__s,__n,__stream);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::basic_string<char,std::char_traits<char>,std::allocator<char>>::length(void)

{
  length();
  return;
}



// std::ios_base::Init::~Init()

void __thiscall std::ios_base::Init::_Init(Init *this)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

basic_ostream * std::operator__(basic_ostream *param_1,char *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = operator__(param_1,param_2);
  return pbVar1;
}



void __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
          (basic_string_char_std__char_traits_char__std__allocator_char__ *this)

{
  _basic_string(this);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
               (char *param_1,allocator *param_2)

{
  basic_string(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::terminate(void)

{
                    // WARNING: Subroutine does not return
  terminate();
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::basic_string<char,std::char_traits<char>,std::allocator<char>>::operator__(ulong param_1)

{
  operator__(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memmove(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

basic_ostream * std::operator__(basic_ostream *param_1,basic_string *param_2)

{
  basic_ostream *pbVar1;
  
  pbVar1 = operator__(param_1,param_2);
  return pbVar1;
}



void __thiscall std::allocator<char>::_allocator(allocator_char_ *this)

{
  _allocator(this);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::basic_string<char,std::char_traits<char>,std::allocator<char>>::append(char *param_1)

{
  append(param_1);
  return;
}



void __cxa_end_catch(void)

{
  __cxa_end_catch();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::__throw_bad_alloc(void)

{
  __throw_bad_alloc();
  return;
}



void __cxa_begin_catch(void)

{
  __cxa_begin_catch();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::allocator<char>::allocator(void)

{
  allocator();
  return;
}



void __gxx_personality_v0(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(param_1);
  return pvVar1;
}



void _Unwind_Resume(void)

{
                    // WARNING: Subroutine does not return
  _Unwind_Resume();
}



// WARNING: Unknown calling convention yet parameter storage is locked

void std::basic_string<char,std::char_traits<char>,std::allocator<char>>::append
               (basic_string *param_1)

{
  append(param_1);
  return;
}



void __cxx_global_var_init(void)

{
  if ((x * (x + -1) & 1U) == 0 || y < 10) goto LAB_004010db;
  do {
    std::ios_base::Init::Init((Init *)&std::__ioinit);
    __cxa_atexit(std::ios_base::Init::_Init,&std::__ioinit,&__dso_handle);
LAB_004010db:
    std::ios_base::Init::Init((Init *)&std::__ioinit);
    __cxa_atexit(std::ios_base::Init::_Init,&std::__ioinit,&__dso_handle);
  } while ((x * (x + -1) & 1U) != 0 && 9 < y);
  return;
}



void __cxx_global_var_init1(void)

{
  if ((x5 * (x5 + -1) & 1U) == 0 || y6 < 10) goto LAB_004011eb;
  do {
    std::vector<int,std::allocator<int>>::vector((vector_int_std__allocator_int__ *)hero);
    __cxa_atexit(std::vector<int,std::allocator<int>>::_vector,hero,&__dso_handle);
LAB_004011eb:
    std::vector<int,std::allocator<int>>::vector((vector_int_std__allocator_int__ *)hero);
    __cxa_atexit(std::vector<int,std::allocator<int>>::_vector,hero,&__dso_handle);
  } while ((x5 * (x5 + -1) & 1U) != 0 && 9 < y6);
  return;
}



void _GLOBAL__sub_I_wyvern_cpp(void)

{
  if ((x163 * (x163 + -1) & 1U) == 0 || y164 < 10) goto LAB_004012f7;
  do {
    __cxx_global_var_init();
    __cxx_global_var_init1();
LAB_004012f7:
    __cxx_global_var_init();
    __cxx_global_var_init1();
  } while ((x163 * (x163 + -1) & 1U) != 0 && 9 < y164);
  return;
}



void __cxx_global_var_init(void)

{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::_Init,&std::__ioinit,&__dso_handle);
  return;
}



void _GLOBAL__sub_I_domain_cpp(void)

{
  __cxx_global_var_init();
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



// WARNING: Removing unreachable block (ram,0x00401407)
// WARNING: Removing unreachable block (ram,0x00401411)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00401444)
// WARNING: Removing unreachable block (ram,0x0040144e)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_6973 == '\0') {
    deregister_tm_clones();
    completed_6973 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00401494)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void frame_dummy(void)

{
  register_tm_clones();
  return;
}



// transform_input(std::vector<int, std::allocator<int>>)

int transform_input(vector param_1)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined4 in_register_0000003c;
  bool bVar5;
  undefined8 local_58;
  undefined8 local_50;
  undefined local_3c;
  undefined local_3b;
  undefined local_3a;
  undefined local_39;
  ulong local_38;
  undefined8 *local_30;
  int *local_28;
  undefined local_19;
  vector_int_std__allocator_int__ *local_18;
  
  puVar4 = &local_58;
  local_30 = &local_58;
  local_18 = (vector_int_std__allocator_int__ *)CONCAT44(in_register_0000003c,param_1);
  do {
    local_19 = (x11 * (x11 + -1) & 1U) == 0 || y12 < 10;
  } while ((x1 * (x1 + -1) & 1U) != 0 && 9 < y2);
  if ((bool)local_19) goto LAB_0040158b;
  do {
    puVar4 = (undefined8 *)((long)local_30 + -0x20);
    *(int *)((long)local_30 + -0x10) = 0;
    *(int *)puVar4 = 0;
LAB_0040158b:
    local_30 = (undefined8 *)((long)puVar4 + -0x20);
    *(int *)((long)puVar4 + -0x10) = 0;
    *(int *)local_30 = 0;
    local_28 = (int *)((long)puVar4 + -0x10);
  } while ((x11 * (x11 + -1) & 1U) != 0 && 9 < y12);
  while( true ) {
    if ((x11 * (x11 + -1) & 1U) == 0 || y12 < 10) goto LAB_00401640;
    do {
      *(undefined8 *)((long)puVar4 + -0x28) = 0x401b88;
      local_50 = std::vector<int,std::allocator<int>>::size(local_18);
LAB_00401640:
      if ((x1 * (x1 + -1) & 1U) == 0 || y2 < 10) goto LAB_00401683;
      do {
        *(undefined8 *)((long)puVar4 + -0x28) = 0x401c60;
        local_58 = std::vector<int,std::allocator<int>>::size(local_18);
LAB_00401683:
        local_38 = (long)*(int *)local_30;
        *(undefined8 *)((long)puVar4 + -0x28) = 0x401697;
        uVar2 = std::vector<int,std::allocator<int>>::size(local_18);
        bVar5 = (x11 * (x11 + -1) & 1U) == 0;
        local_39 = local_38 < uVar2;
        local_3a = bVar5 || y12 < 10;
      } while ((x1 * (x1 + -1) & 1U) != 0 && 9 < y2);
    } while (!bVar5 && y12 >= 10);
    if (local_38 >= uVar2) break;
    if ((x11 * (x11 + -1) & 1U) == 0 || y12 < 10) goto LAB_0040178f;
    do {
      iVar1 = *(int *)local_30;
      *(undefined8 *)((long)puVar4 + -0x28) = 0x401ba1;
      piVar3 = (int *)std::vector<int,std::allocator<int>>::operator__(local_18,(long)iVar1);
      *local_28 = *local_28 + *piVar3;
LAB_0040178f:
      if ((x1 * (x1 + -1) & 1U) == 0 || y2 < 10) goto LAB_004017d2;
      do {
        iVar1 = *(int *)local_30;
        *(undefined8 *)((long)puVar4 + -0x28) = 0x401c79;
        piVar3 = (int *)std::vector<int,std::allocator<int>>::operator__(local_18,(long)iVar1);
        *local_28 = *local_28 + *piVar3;
LAB_004017d2:
        iVar1 = *(int *)local_30;
        *(undefined8 *)((long)puVar4 + -0x28) = 0x4017e2;
        piVar3 = (int *)std::vector<int,std::allocator<int>>::operator__(local_18,(long)iVar1);
        *local_28 = *piVar3 + *local_28;
        bVar5 = (x11 * (x11 + -1) & 1U) == 0;
        local_3b = bVar5 || y12 < 10;
      } while ((x1 * (x1 + -1) & 1U) != 0 && 9 < y2);
    } while (!bVar5 && y12 >= 10);
    if ((x11 * (x11 + -1) & 1U) == 0 || y12 < 10) goto LAB_004018c9;
    do {
      if ((x1 * (x1 + -1) & 1U) == 0 || y2 < 10) goto LAB_00401bf5;
      do {
        *(int *)local_30 = *(int *)local_30 + 1;
LAB_00401bf5:
        *(int *)local_30 = *(int *)local_30 + 1;
      } while ((x1 * (x1 + -1) & 1U) != 0 && 9 < y2);
LAB_004018c9:
      if ((x1 * (x1 + -1) & 1U) == 0 || y2 < 10) goto LAB_0040190c;
      do {
        *(int *)local_30 = *(int *)local_30 + 1;
LAB_0040190c:
        *(int *)local_30 = *(int *)local_30 + 1;
        bVar5 = (x11 * (x11 + -1) & 1U) == 0;
        local_3c = bVar5 || y12 < 10;
      } while ((x1 * (x1 + -1) & 1U) != 0 && 9 < y2);
    } while (!bVar5 && y12 >= 10);
  }
  do {
  } while ((x1 * (x1 + -1) & 1U) != 0 && 9 < y2);
  do {
  } while ((x11 * (x11 + -1) & 1U) != 0 && 9 < y12);
  do {
  } while ((x1 * (x1 + -1) & 1U) != 0 && 9 < y2);
  return *local_28;
}



// sanitize_input(std::basic_string<char, std::char_traits<char>, std::allocator<char>>)

int sanitize_input(basic_string param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 in_register_0000003c;
  bool bVar5;
  undefined auStack392 [24];
  undefined4 *local_170;
  int local_144;
  basic_ostream *local_140;
  undefined local_136;
  undefined local_135;
  undefined local_134;
  undefined local_133;
  undefined local_132;
  uint *local_108;
  ulong local_100;
  uint local_f8;
  undefined local_f2;
  byte local_f1;
  int local_f0;
  undefined local_e9;
  int local_e8;
  undefined local_e1;
  int *local_e0;
  ulong local_d8;
  undefined local_ca;
  undefined local_c9;
  undefined8 local_c8;
  undefined local_b9;
  long local_b8;
  undefined local_a9;
  char *local_a8;
  undefined local_99;
  long local_98;
  undefined local_8a;
  undefined local_89;
  undefined4 *local_88;
  uint *local_80;
  undefined4 *local_78;
  undefined4 *local_70;
  int *local_68;
  uint *local_60;
  vector *local_58;
  int *local_50;
  undefined4 *local_48;
  undefined local_39;
  ulong local_38;
  
  puVar3 = (undefined4 *)auStack392;
  puVar4 = (undefined4 *)auStack392;
  local_38 = CONCAT44(in_register_0000003c,param_1);
  do {
    local_39 = (x17 * (x17 + -1) & 1U) == 0 || y18 < 10;
  } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
  if ((bool)local_39) goto LAB_00401da6;
  do {
    puVar3 = puVar4 + -0x10;
    local_170 = puVar3;
    *(undefined8 *)(puVar4 + -0x12) = 0x403db1;
    std::vector<int,std::allocator<int>>::vector((vector_int_std__allocator_int__ *)(puVar4 + -0xc))
    ;
    *local_170 = 0;
LAB_00401da6:
    puVar4 = puVar3 + -0x2c;
    local_48 = puVar3 + -0x18;
    local_50 = puVar3 + -4;
    local_58 = puVar3 + -0xc;
    local_60 = puVar3 + -0x10;
    local_68 = puVar3 + -0x14;
    local_70 = puVar4;
    local_78 = puVar3 + -0x1c;
    local_80 = puVar3 + -0x20;
    local_88 = puVar3 + -0x28;
    *(undefined8 *)(puVar3 + -0x2e) = 0x401e2c;
    std::vector<int,std::allocator<int>>::vector((vector_int_std__allocator_int__ *)(puVar3 + -0xc))
    ;
    *local_60 = 0;
  } while ((x17 * (x17 + -1) & 1U) != 0 && 9 < y18);
  while( true ) {
    do {
      local_89 = (int)*local_60 < legend >> 2;
    } while ((x17 * (x17 + -1) & 1U) != 0 && 9 < y18);
    if (!(bool)local_89) goto LAB_00403729;
    do {
      local_8a = (x17 * (x17 + -1) & 1U) == 0 || y18 < 10;
    } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
    do {
      do {
        bVar5 = (x17 * (x17 + -1) & 1U) == 0;
        local_98 = (long)(int)*local_60;
        local_99 = bVar5 || y18 < 10;
      } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
    } while (!bVar5 && y18 >= 10);
    do {
    } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
                    // try { // try from 0040217d to 00402879 has its CatchHandler @ 00402e05
    *(undefined8 *)(puVar3 + -0x2e) = 0x40218d;
    local_a8 = (char *)std::basic_string<char,std::char_traits<char>,std::allocator<char>>::
                       operator__(local_38);
    if ((x17 * (x17 + -1) & 1U) == 0 || y18 < 10) goto LAB_004021dc;
    do {
      if ((x3 * (x3 + -1) & 1U) == 0 || y4 < 10) goto LAB_00403e10;
      do {
        *local_68 = (int)*local_a8;
LAB_00403e10:
        *local_68 = (int)*local_a8;
      } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
LAB_004021dc:
      *local_68 = (int)*local_a8;
    } while ((x17 * (x17 + -1) & 1U) != 0 && 9 < y18);
    do {
    } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
    *(undefined8 *)(puVar3 + -0x2e) = 0x4022c4;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)local_58,local_68);
    do {
      local_a9 = (x17 * (x17 + -1) & 1U) == 0 || y18 < 10;
    } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
    if ((bool)local_a9) goto LAB_0040239d;
    do {
      *local_80 = *local_60;
LAB_0040239d:
      if ((x3 * (x3 + -1) & 1U) == 0 || y4 < 10) goto LAB_004023e0;
      do {
        *local_80 = *local_60;
LAB_004023e0:
        puVar2 = local_80;
        *local_80 = *local_60;
        bVar5 = (x17 * (x17 + -1) & 1U) == 0;
        local_b8 = (long)(int)*puVar2;
        local_b9 = bVar5 || y18 < 10;
      } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
    } while (!bVar5 && y18 >= 10);
    *(undefined8 *)(puVar3 + -0x2e) = 0x40249a;
    local_c8 = std::basic_string<char,std::char_traits<char>,std::allocator<char>>::length();
    do {
      local_c9 = (x17 * (x17 + -1) & 1U) == 0 || y18 < 10;
    } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
    if ((bool)local_c9) goto LAB_0040257a;
    do {
      *local_80 = (uint)local_b8 & (uint)((ulong)local_c8 >> 0x28) | 0x1c;
LAB_0040257a:
      puVar2 = local_80;
      *local_80 = (uint)local_b8 & (uint)((ulong)local_c8 >> 0x28) | 0x1c;
      local_ca = *puVar2 != 0;
    } while ((x17 * (x17 + -1) & 1U) != 0 && 9 < y18);
    do {
    } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
    if (*puVar2 != 0) {
      do {
        uVar1 = *local_60;
        local_d8 = (long)(int)uVar1;
      } while ((x17 * (x17 + -1) & 1U) != 0 && 9 < y18);
      *(undefined8 *)(puVar3 + -0x2e) = 0x402739;
      local_e0 = (int *)std::vector<int,std::allocator<int>>::operator__
                                  ((vector_int_std__allocator_int__ *)hero,(long)(int)uVar1);
      do {
        local_e1 = (x17 * (x17 + -1) & 1U) == 0 || y18 < 10;
      } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
      do {
        local_e8 = *local_e0;
      } while ((x17 * (x17 + -1) & 1U) != 0 && 9 < y18);
      *(undefined8 *)(puVar3 + -0x2e) = 0x40287a;
      std::vector<int,std::allocator<int>>::vector
                ((vector_int_std__allocator_int__ *)local_88,local_58);
      do {
        local_e9 = (x17 * (x17 + -1) & 1U) == 0 || y18 < 10;
      } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
      do {
      } while ((x17 * (x17 + -1) & 1U) != 0 && 9 < y18);
      do {
      } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
                    // try { // try from 00402a1c to 00402a24 has its CatchHandler @ 00402f44
      *(undefined8 *)(puVar3 + -0x2e) = 0x402a25;
      local_f0 = transform_input((vector)local_88);
      if ((x17 * (x17 + -1) & 1U) == 0 || y18 < 10) goto LAB_00402a73;
      do {
        do {
        } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
LAB_00402a73:
        local_f1 = local_e8 == local_f0;
      } while ((x17 * (x17 + -1) & 1U) != 0 && 9 < y18);
      do {
      } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
                    // try { // try from 00402b58 to 00402d49 has its CatchHandler @ 00402e05
      *(undefined8 *)(puVar3 + -0x2e) = 0x402b61;
      std::vector<int,std::allocator<int>>::_vector((vector_int_std__allocator_int__ *)local_88);
      do {
        local_f2 = (x17 * (x17 + -1) & 1U) == 0 || y18 < 10;
      } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
      do {
      } while ((x17 * (x17 + -1) & 1U) != 0 && 9 < y18);
      if ((local_f1 & 1) != 0) {
        do {
          uVar1 = *local_60;
          local_f8 = *local_80;
          local_100 = (long)(int)uVar1;
        } while ((x17 * (x17 + -1) & 1U) != 0 && 9 < y18);
        *(undefined8 *)(puVar3 + -0x2e) = 0x402d4a;
        local_108 = (uint *)std::vector<int,std::allocator<int>>::operator__
                                      ((vector_int_std__allocator_int__ *)hero,(long)(int)uVar1);
        if ((x17 * (x17 + -1) & 1U) == 0 || y18 < 10) goto LAB_00402d99;
        do {
          *local_80 = (uint)((int)(local_f8 & *local_108) < 0);
LAB_00402d99:
          *local_80 = (uint)((int)(local_f8 & *local_108) < 0);
        } while ((x17 * (x17 + -1) & 1U) != 0 && 9 < y18);
      }
      if ((x17 * (x17 + -1) & 1U) == 0 || y18 < 10) goto LAB_0040315a;
      do {
        do {
        } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
LAB_0040315a:
      } while ((x17 * (x17 + -1) & 1U) != 0 && 9 < y18);
    }
    do {
      do {
        bVar5 = (x17 * (x17 + -1) & 1U) == 0;
        local_132 = *local_80 != 0;
        local_133 = bVar5 || y18 < 10;
      } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
    } while (!bVar5 && y18 >= 10);
    do {
    } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
    if (*local_80 != 0) break;
    do {
      local_135 = (x17 * (x17 + -1) & 1U) == 0 || y18 < 10;
    } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
    do {
    } while ((x17 * (x17 + -1) & 1U) != 0 && 9 < y18);
    do {
    } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
    if ((x17 * (x17 + -1) & 1U) == 0 || y18 < 10) goto LAB_0040368e;
    do {
      *local_60 = *local_60 + 1;
LAB_0040368e:
      *local_60 = *local_60 + 1;
    } while ((x17 * (x17 + -1) & 1U) != 0 && 9 < y18);
  }
  do {
    local_134 = (x17 * (x17 + -1) & 1U) == 0 || y18 < 10;
  } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
  if ((bool)local_134) goto LAB_0040343d;
  do {
    *local_50 = (*local_60 & 1) << 8;
    *local_70 = 1;
LAB_0040343d:
    *local_50 = (*local_60 & 1) << 8;
    *local_70 = 1;
  } while ((x17 * (x17 + -1) & 1U) != 0 && 9 < y18);
LAB_004038bd:
  if ((x17 * (x17 + -1) & 1U) == 0 || y18 < 10) goto LAB_00403900;
  do {
    *(undefined8 *)(puVar3 + -0x2e) = 0x40411c;
    std::vector<int,std::allocator<int>>::_vector((vector_int_std__allocator_int__ *)local_58);
LAB_00403900:
    *(undefined8 *)(puVar3 + -0x2e) = 0x403909;
    std::vector<int,std::allocator<int>>::_vector((vector_int_std__allocator_int__ *)local_58);
    local_144 = *local_50;
  } while ((x17 * (x17 + -1) & 1U) != 0 && 9 < y18);
  do {
  } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
  return *local_50;
LAB_00403729:
  do {
    local_136 = (x17 * (x17 + -1) & 1U) == 0 || y18 < 10;
  } while ((x3 * (x3 + -1) & 1U) != 0 && 9 < y4);
  do {
  } while ((x17 * (x17 + -1) & 1U) != 0 && 9 < y18);
                    // try { // try from 004037fd to 0040380f has its CatchHandler @ 00402e05
  *(undefined8 *)(puVar3 + -0x2e) = 0x403810;
  local_140 = std::operator__((basic_ostream *)std::cout,"success\n");
  if ((x17 * (x17 + -1) & 1U) == 0 || y18 < 10) goto LAB_0040385f;
  do {
    *local_50 = 0x1337;
    *local_70 = 1;
LAB_0040385f:
    *local_50 = 0x1337;
    *local_70 = 1;
  } while ((x17 * (x17 + -1) & 1U) != 0 && 9 < y18);
  goto LAB_004038bd;
}



// start_quest(std::basic_string<char, std::char_traits<char>, std::allocator<char>>)

int start_quest(basic_string param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 in_register_0000003c;
  int iVar4;
  undefined auStack152 [8];
  undefined8 local_90;
  int local_50;
  undefined local_49;
  basic_string *local_48;
  int *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined8 local_28;
  
  puVar3 = auStack152;
  local_28 = CONCAT44(in_register_0000003c,param_1);
  puVar1 = auStack152;
  if ((x25 * (x25 + -1) & 1U) == 0 || y26 < 10) goto LAB_004043a4;
  do {
    puVar3 = puVar1;
    *(undefined8 *)(puVar3 + -8) = 0x404c2c;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_100);
    *(undefined8 *)(puVar3 + -8) = 0x404c45;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_214);
    *(undefined8 *)(puVar3 + -8) = 0x404c5e;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_266);
    *(undefined8 *)(puVar3 + -8) = 0x404c77;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_369);
    *(undefined8 *)(puVar3 + -8) = 0x404c90;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_417);
    *(undefined8 *)(puVar3 + -8) = 0x404ca9;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_527);
    *(undefined8 *)(puVar3 + -8) = 0x404cc2;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_622);
    *(undefined8 *)(puVar3 + -8) = 0x404cdb;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_733);
    *(undefined8 *)(puVar3 + -8) = 0x404cf4;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_847);
    *(undefined8 *)(puVar3 + -8) = 0x404d0d;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_942);
    *(undefined8 *)(puVar3 + -8) = 0x404d26;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_1054);
    *(undefined8 *)(puVar3 + -8) = 0x404d3f;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_1106);
    *(undefined8 *)(puVar3 + -8) = 0x404d58;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_1222);
    *(undefined8 *)(puVar3 + -8) = 0x404d71;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_1336);
    *(undefined8 *)(puVar3 + -8) = 0x404d8a;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_1441);
    *(undefined8 *)(puVar3 + -8) = 0x404da3;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_1540);
    *(undefined8 *)(puVar3 + -8) = 0x404dbc;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_1589);
    *(undefined8 *)(puVar3 + -8) = 0x404dd5;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_1686);
    *(undefined8 *)(puVar3 + -8) = 0x404dee;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_1796);
    *(undefined8 *)(puVar3 + -8) = 0x404e07;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_1891);
    *(undefined8 *)(puVar3 + -8) = 0x404e20;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_1996);
    *(undefined8 *)(puVar3 + -8) = 0x404e39;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_2112);
    *(undefined8 *)(puVar3 + -8) = 0x404e52;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_2165);
    *(undefined8 *)(puVar3 + -8) = 0x404e6b;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_2260);
    *(undefined8 *)(puVar3 + -8) = 0x404e84;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_2336);
    *(undefined8 *)(puVar3 + -8) = 0x404e9d;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_2412);
    *(undefined8 *)(puVar3 + -8) = 0x404eb6;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_2498);
    *(undefined8 *)(puVar3 + -8) = 0x404ecf;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_2575);
    *(undefined8 *)(puVar3 + -8) = 0x404ed8;
    local_90 = std::basic_string<char,std::char_traits<char>,std::allocator<char>>::length();
LAB_004043a4:
    local_30 = puVar3 + -0x40;
    local_38 = puVar3 + -0x30;
    local_40 = (int *)(puVar3 + -0x10);
    local_48 = (basic_string *)(puVar3 + -0x20);
    *(undefined8 *)(puVar3 + -0x48) = 0x4043f5;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_100);
    *(undefined8 *)(puVar3 + -0x48) = 0x40440e;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_214);
    *(undefined8 *)(puVar3 + -0x48) = 0x404427;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_266);
    *(undefined8 *)(puVar3 + -0x48) = 0x404440;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_369);
    *(undefined8 *)(puVar3 + -0x48) = 0x404459;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_417);
    *(undefined8 *)(puVar3 + -0x48) = 0x404472;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_527);
    *(undefined8 *)(puVar3 + -0x48) = 0x40448b;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_622);
    *(undefined8 *)(puVar3 + -0x48) = 0x4044a4;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_733);
    *(undefined8 *)(puVar3 + -0x48) = 0x4044bd;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_847);
    *(undefined8 *)(puVar3 + -0x48) = 0x4044d6;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_942);
    *(undefined8 *)(puVar3 + -0x48) = 0x4044ef;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_1054);
    *(undefined8 *)(puVar3 + -0x48) = 0x404508;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_1106);
    *(undefined8 *)(puVar3 + -0x48) = 0x404521;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_1222);
    *(undefined8 *)(puVar3 + -0x48) = 0x40453a;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_1336);
    *(undefined8 *)(puVar3 + -0x48) = 0x404553;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_1441);
    *(undefined8 *)(puVar3 + -0x48) = 0x40456c;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_1540);
    *(undefined8 *)(puVar3 + -0x48) = 0x404585;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_1589);
    *(undefined8 *)(puVar3 + -0x48) = 0x40459e;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_1686);
    *(undefined8 *)(puVar3 + -0x48) = 0x4045b7;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_1796);
    *(undefined8 *)(puVar3 + -0x48) = 0x4045d0;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_1891);
    *(undefined8 *)(puVar3 + -0x48) = 0x4045e9;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_1996);
    *(undefined8 *)(puVar3 + -0x48) = 0x404602;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_2112);
    *(undefined8 *)(puVar3 + -0x48) = 0x40461b;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_2165);
    *(undefined8 *)(puVar3 + -0x48) = 0x404634;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_2260);
    *(undefined8 *)(puVar3 + -0x48) = 0x40464d;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_2336);
    *(undefined8 *)(puVar3 + -0x48) = 0x404666;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_2412);
    *(undefined8 *)(puVar3 + -0x48) = 0x40467f;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_2498);
    *(undefined8 *)(puVar3 + -0x48) = 0x404698;
    std::vector<int,std::allocator<int>>::push_back
              ((vector_int_std__allocator_int__ *)hero,&secret_2575);
    *(undefined8 *)(puVar3 + -0x48) = 0x4046a1;
    lVar2 = std::basic_string<char,std::char_traits<char>,std::allocator<char>>::length();
    iVar4 = legend >> 2;
    local_49 = lVar2 + -1 != (long)iVar4;
    puVar1 = puVar3 + -0x40;
  } while ((x25 * (x25 + -1) & 1U) != 0 && 9 < y26);
  if ((bool)local_49) {
    if ((x25 * (x25 + -1) & 1U) == 0 || y26 < 10) goto LAB_00404760;
    do {
      *local_40 = iVar4;
LAB_00404760:
      *local_40 = iVar4;
    } while ((x25 * (x25 + -1) & 1U) != 0 && 9 < y26);
  }
  else {
    if ((x25 * (x25 + -1) & 1U) == 0 || y26 < 10) goto LAB_004047fb;
    do {
      *(undefined8 *)(puVar3 + -0x48) = 0x404f06;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string(local_48);
LAB_004047fb:
      *(undefined8 *)(puVar3 + -0x48) = 0x404808;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string(local_48);
    } while ((x25 * (x25 + -1) & 1U) != 0 && 9 < y26);
                    // try { // try from 0040484b to 00404853 has its CatchHandler @ 004048fb
    *(undefined8 *)(puVar3 + -0x48) = 0x404854;
    local_50 = sanitize_input((basic_string)local_48);
    if ((x25 * (x25 + -1) & 1U) == 0 || y26 < 10) goto LAB_0040489f;
    do {
      *local_40 = local_50;
      *(undefined8 *)(puVar3 + -0x48) = 0x404f1d;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
                ((basic_string_char_std__char_traits_char__std__allocator_char__ *)local_48);
LAB_0040489f:
      *local_40 = local_50;
      *(undefined8 *)(puVar3 + -0x48) = 0x4048b1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
                ((basic_string_char_std__char_traits_char__std__allocator_char__ *)local_48);
    } while ((x25 * (x25 + -1) & 1U) != 0 && 9 < y26);
  }
  do {
  } while ((x25 * (x25 + -1) & 1U) != 0 && 9 < y26);
  return *local_40;
}



// std::vector<int, std::allocator<int>>::vector()

void __thiscall std::vector<int,std::allocator<int>>::vector(vector_int_std__allocator_int__ *this)

{
  _Vector_base_int_std__allocator_int__ **pp_Var1;
  _Vector_base_int_std__allocator_int__ **pp_Var2;
  undefined auStack24 [8];
  vector_int_std__allocator_int__ *local_10;
  
  pp_Var1 = (_Vector_base_int_std__allocator_int__ **)auStack24;
  pp_Var2 = (_Vector_base_int_std__allocator_int__ **)auStack24;
  local_10 = this;
  if ((x7 * (x7 + -1) & 1U) == 0 || y8 < 10) goto LAB_00404faf;
  do {
    pp_Var1 = pp_Var2 + -2;
    *pp_Var1 = (_Vector_base_int_std__allocator_int__ *)local_10;
    pp_Var2[-3] = (_Vector_base_int_std__allocator_int__ *)0x405034;
    _Vector_base<int,std::allocator<int>>::_Vector_base(*pp_Var1);
LAB_00404faf:
    pp_Var2 = pp_Var1 + -2;
    *pp_Var2 = (_Vector_base_int_std__allocator_int__ *)local_10;
    pp_Var1[-3] = (_Vector_base_int_std__allocator_int__ *)0x404fcb;
    _Vector_base<int,std::allocator<int>>::_Vector_base(*pp_Var2);
  } while ((x7 * (x7 + -1) & 1U) != 0 && 9 < y8);
  return;
}



// std::vector<int, std::allocator<int>>::~vector()

void __thiscall std::vector<int,std::allocator<int>>::_vector(vector_int_std__allocator_int__ *this)

{
  vector_int_std__allocator_int__ **ppvVar1;
  undefined auStack152 [64];
  allocator *local_58;
  int **local_50;
  int *local_48;
  int **local_40;
  vector_int_std__allocator_int__ **local_38;
  vector_int_std__allocator_int__ **local_30;
  int *local_28;
  vector_int_std__allocator_int__ *local_20;
  
  ppvVar1 = (vector_int_std__allocator_int__ **)auStack152;
  local_38 = (vector_int_std__allocator_int__ **)auStack152;
  if ((x9 * (x9 + -1) & 1U) == 0 || y10 < 10) goto LAB_00405095;
  do {
    ppvVar1 = local_38 + -2;
    *ppvVar1 = this;
LAB_00405095:
    local_30 = ppvVar1 + -4;
    local_38 = ppvVar1 + -6;
    ppvVar1[-2] = this;
    local_50 = (int **)ppvVar1[-2];
    local_48 = *local_50;
    local_28 = local_50[1];
  } while ((x9 * (x9 + -1) & 1U) != 0 && 9 < y10);
                    // try { // try from 0040512a to 004051d2 has its CatchHandler @ 00405275
  ppvVar1[-7] = (vector_int_std__allocator_int__ *)0x405133;
  local_40 = local_50;
  local_20 = this;
  local_58 = (allocator *)
             _Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator
                       ((_Vector_base_int_std__allocator_int__ *)local_50);
  do {
  } while ((x9 * (x9 + -1) & 1U) != 0 && 9 < y10);
  ppvVar1[-7] = (vector_int_std__allocator_int__ *)0x4051d3;
  _Destroy_int__int_(local_48,local_28,local_58);
  if ((x9 * (x9 + -1) & 1U) == 0 || y10 < 10) goto LAB_0040521b;
  do {
    ppvVar1[-7] = (vector_int_std__allocator_int__ *)0x405523;
    _Vector_base<int,std::allocator<int>>::__Vector_base
              ((_Vector_base_int_std__allocator_int__ *)local_40);
LAB_0040521b:
    ppvVar1[-7] = (vector_int_std__allocator_int__ *)0x405227;
    _Vector_base<int,std::allocator<int>>::__Vector_base
              ((_Vector_base_int_std__allocator_int__ *)local_40);
  } while ((x9 * (x9 + -1) & 1U) != 0 && 9 < y10);
  return;
}



// std::vector<int, std::allocator<int>>::size() const

long __thiscall std::vector<int,std::allocator<int>>::size(vector_int_std__allocator_int__ *this)

{
  long **pplVar1;
  long **pplVar2;
  undefined local_18 [16];
  
  pplVar1 = (long **)local_18;
  pplVar2 = (long **)local_18;
  if ((x13 * (x13 + -1) & 1U) == 0 || y14 < 10) goto LAB_004055af;
  do {
    pplVar1 = pplVar2 + -2;
    *pplVar1 = (long *)this;
LAB_004055af:
    pplVar2 = pplVar1 + -2;
    *pplVar2 = (long *)this;
  } while ((x13 * (x13 + -1) & 1U) != 0 && 9 < y14);
  return (*pplVar2)[1] - **pplVar2 >> 2;
}



// std::vector<int, std::allocator<int>>::operator[](unsigned long)

long __thiscall
std::vector<int,std::allocator<int>>::operator__
          (vector_int_std__allocator_int__ *this,ulong param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined auStack40 [8];
  long local_20;
  
  puVar1 = (ulong *)auStack40;
  puVar2 = (ulong *)auStack40;
  if ((x15 * (x15 + -1) & 1U) == 0 || y16 < 10) goto LAB_00405693;
  do {
    puVar1 = puVar2 + -4;
    puVar2[-2] = (ulong)this;
    *puVar1 = param_1;
LAB_00405693:
    puVar2 = puVar1 + -4;
    puVar1[-2] = (ulong)this;
    *puVar2 = param_1;
    local_20 = *(long *)puVar1[-2] + *puVar2 * 4;
  } while ((x15 * (x15 + -1) & 1U) != 0 && 9 < y16);
  return local_20;
}



// std::vector<int, std::allocator<int>>::push_back(int const&)

void __thiscall
std::vector<int,std::allocator<int>>::push_back(vector_int_std__allocator_int__ *this,int *param_1)

{
  int *piVar1;
  int **ppiVar2;
  int *piVar3;
  int **ppiVar4;
  undefined auStack88 [15];
  undefined local_49;
  int *local_48;
  int **local_40;
  int **local_38;
  int *local_30;
  vector_int_std__allocator_int__ *local_28;
  
  ppiVar4 = (int **)auStack88;
  local_40 = (int **)auStack88;
  local_28 = this;
  local_30 = param_1;
  if ((x19 * (x19 + -1) & 1U) == 0 || y20 < 10) goto LAB_004057a8;
  do {
    ppiVar4 = local_40 + -4;
    local_40[-2] = (int *)this;
    *ppiVar4 = param_1;
LAB_004057a8:
    local_40 = ppiVar4 + -6;
    ppiVar4[-2] = (int *)this;
    ppiVar4[-4] = param_1;
    local_48 = ppiVar4[-2];
    local_38 = ppiVar4 + -4;
    local_49 = *(long *)(local_48 + 2) != *(long *)(local_48 + 4);
  } while ((x19 * (x19 + -1) & 1U) != 0 && 9 < y20);
  if (*(long *)(local_48 + 2) != *(long *)(local_48 + 4)) {
    if ((x19 * (x19 + -1) & 1U) == 0 || y20 < 10) goto LAB_00405892;
    do {
      piVar3 = *(int **)(local_48 + 2);
      piVar1 = *local_38;
      ppiVar4[-7] = (int *)0x405a99;
      __gnu_cxx::__alloc_traits<std::allocator<int>>::construct_int_
                ((allocator *)local_48,piVar3,piVar1);
      *(long *)(local_48 + 2) = *(long *)(local_48 + 2) + 4;
LAB_00405892:
      piVar3 = *(int **)(local_48 + 2);
      piVar1 = *local_38;
      ppiVar4[-7] = (int *)0x4058ad;
      __gnu_cxx::__alloc_traits<std::allocator<int>>::construct_int_
                ((allocator *)local_48,piVar3,piVar1);
      *(long *)(local_48 + 2) = *(long *)(local_48 + 2) + 4;
    } while ((x19 * (x19 + -1) & 1U) != 0 && 9 < y20);
  }
  else {
    if ((x19 * (x19 + -1) & 1U) == 0 || y20 < 10) goto LAB_00405954;
    do {
      ppiVar4[-7] = (int *)0x405aba;
      piVar3 = (int *)end((vector_int_std__allocator_int__ *)local_48);
      ppiVar2 = local_40;
      *local_40 = piVar3;
      piVar3 = *local_38;
      piVar1 = *ppiVar2;
      ppiVar4[-7] = (int *)0x405ad4;
      _M_insert_aux((vector_int_std__allocator_int__ *)local_48,(__normal_iterator)piVar1,piVar3);
LAB_00405954:
      ppiVar4[-7] = (int *)0x40595d;
      piVar3 = (int *)end((vector_int_std__allocator_int__ *)local_48);
      ppiVar2 = local_40;
      *local_40 = piVar3;
      piVar3 = *local_38;
      piVar1 = *ppiVar2;
      ppiVar4[-7] = (int *)0x405977;
      _M_insert_aux((vector_int_std__allocator_int__ *)local_48,(__normal_iterator)piVar1,piVar3);
    } while ((x19 * (x19 + -1) & 1U) != 0 && 9 < y20);
  }
  do {
  } while ((x19 * (x19 + -1) & 1U) != 0 && 9 < y20);
  return;
}



// std::vector<int, std::allocator<int>>::vector(std::vector<int, std::allocator<int>> const&)

void __thiscall
std::vector<int,std::allocator<int>>::vector(vector_int_std__allocator_int__ *this,vector *param_1)

{
  vector *pvVar1;
  int *piVar2;
  allocator *paVar3;
  vector **ppvVar4;
  vector **ppvVar5;
  undefined auStack296 [8];
  ulong local_120;
  vector *local_118;
  vector **local_110;
  vector *local_c8;
  vector *local_c0;
  allocator *local_b8;
  int **local_b0;
  int *local_a8;
  vector *local_a0;
  vector *local_98;
  vector *local_90;
  vector *local_88;
  ulong local_80;
  int **local_78;
  vector **local_70;
  int **local_68;
  vector **local_60;
  vector **local_58;
  vector **local_50;
  vector **local_48;
  vector *local_40;
  vector *local_38;
  
  ppvVar4 = (vector **)auStack296;
  ppvVar5 = (vector **)auStack296;
  local_38 = (vector *)this;
  local_40 = param_1;
  if ((x21 * (x21 + -1) & 1U) == 0 || y22 < 10) goto LAB_00405b3f;
  do {
    ppvVar4 = ppvVar5 + -4;
    ppvVar5[-2] = local_38;
    *ppvVar4 = local_40;
    local_110 = ppvVar4;
    local_118 = ppvVar5[-2];
    ppvVar5[-5] = (vector *)0x406230;
    local_120 = size((vector_int_std__allocator_int__ *)*ppvVar4);
    pvVar1 = *local_110;
    ppvVar5[-5] = (vector *)0x406249;
    paVar3 = (allocator *)
             _Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator
                       ((_Vector_base_int_std__allocator_int__ *)pvVar1);
    ppvVar5[-5] = (vector *)0x406251;
    paVar3 = (allocator *)__gnu_cxx::__alloc_traits<std::allocator<int>>::_S_select_on_copy(paVar3);
    ppvVar5[-5] = (vector *)0x406267;
    _Vector_base<int,std::allocator<int>>::_Vector_base
              ((_Vector_base_int_std__allocator_int__ *)local_118,local_120,paVar3);
LAB_00405b3f:
    local_50 = ppvVar4 + -4;
    ppvVar5 = ppvVar4 + -0xc;
    ppvVar4[-2] = local_38;
    *local_50 = local_40;
    local_68 = (int **)ppvVar4[-2];
    local_48 = ppvVar4 + -10;
    local_58 = ppvVar4 + -6;
    local_60 = ppvVar4 + -8;
    local_70 = ppvVar5;
    local_78 = local_68;
    ppvVar4[-0xd] = (vector *)0x405bb6;
    local_80 = size((vector_int_std__allocator_int__ *)*local_50);
    pvVar1 = *local_50;
    ppvVar4[-0xd] = (vector *)0x405bc9;
    paVar3 = (allocator *)
             _Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator
                       ((_Vector_base_int_std__allocator_int__ *)pvVar1);
    ppvVar4[-0xd] = (vector *)0x405bd1;
    paVar3 = (allocator *)__gnu_cxx::__alloc_traits<std::allocator<int>>::_S_select_on_copy(paVar3);
    ppvVar4[-0xd] = (vector *)0x405be1;
    _Vector_base<int,std::allocator<int>>::_Vector_base
              ((_Vector_base_int_std__allocator_int__ *)local_68,local_80,paVar3);
    local_88 = *local_50;
  } while ((x21 * (x21 + -1) & 1U) != 0 && 9 < y22);
                    // try { // try from 00405c38 to 00405ea3 has its CatchHandler @ 00405f56
  ppvVar4[-0xd] = (vector *)0x405c41;
  local_90 = (vector *)begin((vector_int_std__allocator_int__ *)local_88);
  if ((x21 * (x21 + -1) & 1U) == 0 || y22 < 10) goto LAB_00405c90;
  do {
    *local_58 = local_90;
LAB_00405c90:
    *local_58 = local_90;
    local_98 = *local_50;
  } while ((x21 * (x21 + -1) & 1U) != 0 && 9 < y22);
  ppvVar4[-0xd] = (vector *)0x405d02;
  local_a0 = (vector *)end((vector_int_std__allocator_int__ *)local_98);
  if ((x21 * (x21 + -1) & 1U) == 0 || y22 < 10) goto LAB_00405d51;
  do {
    *local_70 = local_a0;
LAB_00405d51:
    *local_70 = local_a0;
    local_a8 = *local_78;
    local_b0 = local_78;
  } while ((x21 * (x21 + -1) & 1U) != 0 && 9 < y22);
  ppvVar4[-0xd] = (vector *)0x405dce;
  local_b8 = (allocator *)
             _Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator
                       ((_Vector_base_int_std__allocator_int__ *)local_78);
  do {
    local_c0 = *local_58;
    local_c8 = *local_70;
  } while ((x21 * (x21 + -1) & 1U) != 0 && 9 < y22);
  ppvVar4[-0xd] = (vector *)0x405ea4;
  piVar2 = __uninitialized_copy_a___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__int_
                     ((__normal_iterator)local_c0,(__normal_iterator)local_c8,local_a8,local_b8);
  if ((x21 * (x21 + -1) & 1U) == 0 || y22 < 10) goto LAB_00405ef3;
  do {
    local_78[1] = piVar2;
LAB_00405ef3:
    local_78[1] = piVar2;
  } while ((x21 * (x21 + -1) & 1U) != 0 && 9 < y22);
  return;
}



void __clang_call_terminate(undefined8 param_1)

{
  if ((x23 * (x23 + -1) & 1U) != 0 && 9 < y24) {
    __cxa_begin_catch(param_1);
                    // WARNING: Subroutine does not return
    std::terminate();
  }
  __cxa_begin_catch(param_1);
                    // WARNING: Subroutine does not return
  std::terminate();
}



// __gnu_cxx::__alloc_traits<std::allocator<int>>::_S_select_on_copy(std::allocator<int> const&)

allocator * __gnu_cxx::__alloc_traits<std::allocator<int>>::_S_select_on_copy(allocator *param_1)

{
  allocator **ppaVar1;
  allocator **ppaVar2;
  undefined local_18 [16];
  
  ppaVar1 = (allocator **)local_18;
  ppaVar2 = (allocator **)local_18;
  if ((x27 * (x27 + -1) & 1U) == 0 || y28 < 10) goto LAB_004063ff;
  do {
    ppaVar1 = ppaVar2 + -2;
    *ppaVar1 = param_1;
LAB_004063ff:
    ppaVar2 = ppaVar1 + -2;
    *ppaVar2 = param_1;
  } while ((x27 * (x27 + -1) & 1U) != 0 && 9 < y28);
  return *ppaVar2;
}



// std::_Vector_base<int, std::allocator<int>>::_M_get_Tp_allocator() const

_Vector_base_int_std__allocator_int__ * __thiscall
std::_Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator
          (_Vector_base_int_std__allocator_int__ *this)

{
  _Vector_base_int_std__allocator_int__ **pp_Var1;
  _Vector_base_int_std__allocator_int__ **pp_Var2;
  undefined local_18 [16];
  
  pp_Var1 = (_Vector_base_int_std__allocator_int__ **)local_18;
  pp_Var2 = (_Vector_base_int_std__allocator_int__ **)local_18;
  if ((x29 * (x29 + -1) & 1U) == 0 || y30 < 10) goto LAB_004064cf;
  do {
    pp_Var1 = pp_Var2 + -2;
    *pp_Var1 = this;
LAB_004064cf:
    pp_Var2 = pp_Var1 + -2;
    *pp_Var2 = this;
  } while ((x29 * (x29 + -1) & 1U) != 0 && 9 < y30);
  return *pp_Var2;
}



// std::_Vector_base<int, std::allocator<int>>::_Vector_base(unsigned long, std::allocator<int>
// const&)

void __thiscall
std::_Vector_base<int,std::allocator<int>>::_Vector_base
          (_Vector_base_int_std__allocator_int__ *this,ulong param_1,allocator *param_2)

{
  allocator **ppaVar1;
  allocator **ppaVar2;
  undefined auStack136 [32];
  allocator *local_68;
  _Vector_impl *local_60;
  allocator **local_58;
  allocator **local_50;
  allocator **local_48;
  allocator *local_40;
  _Vector_base_int_std__allocator_int__ *local_38;
  allocator *local_30;
  
  ppaVar1 = (allocator **)auStack136;
  ppaVar2 = (allocator **)auStack136;
  local_40 = param_2;
  local_38 = this;
  local_30 = (allocator *)param_1;
  if ((x31 * (x31 + -1) & 1U) == 0 || y32 < 10) goto LAB_004065b1;
  do {
    ppaVar1 = ppaVar2 + -6;
    ppaVar2[-2] = (allocator *)local_38;
    ppaVar2[-4] = local_30;
    *ppaVar1 = local_40;
    ppaVar2[-7] = (allocator *)0x4068a2;
    _Vector_impl::_Vector_impl((_Vector_impl *)ppaVar2[-2],*ppaVar1);
LAB_004065b1:
    local_58 = ppaVar1 + -4;
    local_50 = ppaVar1 + -8;
    ppaVar2 = ppaVar1 + -10;
    ppaVar1[-2] = (allocator *)local_38;
    *local_58 = local_30;
    ppaVar1[-6] = local_40;
    local_60 = (_Vector_impl *)ppaVar1[-2];
    ppaVar1[-0xb] = (allocator *)0x406619;
    local_48 = ppaVar2;
    _Vector_impl::_Vector_impl(local_60,ppaVar1[-6]);
    local_68 = *local_58;
  } while ((x31 * (x31 + -1) & 1U) != 0 && 9 < y32);
                    // try { // try from 0040666f to 0040667b has its CatchHandler @ 00406714
  ppaVar1[-0xb] = (allocator *)0x40667c;
  _M_create_storage((_Vector_base_int_std__allocator_int__ *)local_60,(ulong)local_68);
  do {
  } while ((x31 * (x31 + -1) & 1U) != 0 && 9 < y32);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::__uninitialized_copy_a<__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, int*, int>(__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, int*, std::allocator<int>&)

int * std::
      __uninitialized_copy_a___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__int_
                (__normal_iterator param_1,__normal_iterator param_2,int *param_3,allocator *param_4
                )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  undefined auStack104 [8];
  int *local_60;
  int *local_58;
  allocator *local_50;
  undefined8 local_48;
  undefined8 local_40;
  int *local_38;
  
  local_48 = CONCAT44(in_register_0000003c,param_1);
  local_40 = CONCAT44(in_register_00000034,param_2);
  puVar1 = (undefined8 *)auStack104;
  puVar2 = (undefined8 *)auStack104;
  local_50 = param_4;
  local_38 = param_3;
  if ((x33 * (x33 + -1) & 1U) == 0 || y34 < 10) goto LAB_00406939;
  do {
    puVar1 = puVar2 + -0xc;
    puVar2[-2] = local_48;
    puVar2[-4] = local_40;
    puVar2[-6] = local_38;
    puVar2[-8] = local_50;
    puVar2[-10] = puVar2[-2];
    *puVar1 = puVar2[-4];
    puVar2[-0xd] = 0x406a80;
    local_60 = uninitialized_copy___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__
                         ((__normal_iterator)puVar2[-10],(__normal_iterator)*puVar1,
                          (int *)puVar2[-6]);
LAB_00406939:
    puVar2 = puVar1 + -0xc;
    puVar1[-2] = local_48;
    puVar1[-4] = local_40;
    puVar1[-6] = local_38;
    puVar1[-8] = local_50;
    puVar1[-10] = puVar1[-2];
    *puVar2 = puVar1[-4];
    puVar1[-0xd] = 0x4069ab;
    local_58 = uninitialized_copy___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__
                         ((__normal_iterator)puVar1[-10],(__normal_iterator)*puVar2,
                          (int *)puVar1[-6]);
  } while ((x33 * (x33 + -1) & 1U) != 0 && 9 < y34);
  return local_58;
}



// std::vector<int, std::allocator<int>>::begin() const

int * __thiscall std::vector<int,std::allocator<int>>::begin(vector_int_std__allocator_int__ *this)

{
  int **ppiVar1;
  int **ppiVar2;
  int *local_28;
  int **local_20;
  int *local_18;
  
  ppiVar1 = &local_28;
  ppiVar2 = &local_28;
  local_18 = (int *)this;
  if ((x35 * (x35 + -1) & 1U) == 0 || y36 < 10) goto LAB_00406ae0;
  do {
    ppiVar1 = ppiVar2 + -6;
    ppiVar2[-4] = local_18;
    *ppiVar1 = *(int **)ppiVar2[-4];
    ppiVar2[-7] = (int *)0x406bb8;
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::__normal_iterator
              ((__normal_iterator_int_const__std__vector_int_std__allocator_int___ *)(ppiVar2 + -2),
               ppiVar1);
LAB_00406ae0:
    local_20 = ppiVar1 + -2;
    ppiVar2 = ppiVar1 + -6;
    ppiVar1[-4] = local_18;
    *ppiVar2 = *(int **)ppiVar1[-4];
    ppiVar1[-7] = (int *)0x406b1d;
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::__normal_iterator
              ((__normal_iterator_int_const__std__vector_int_std__allocator_int___ *)local_20,
               ppiVar2);
    local_28 = *local_20;
  } while ((x35 * (x35 + -1) & 1U) != 0 && 9 < y36);
  return local_28;
}



// std::vector<int, std::allocator<int>>::end() const

int * __thiscall std::vector<int,std::allocator<int>>::end(vector_int_std__allocator_int__ *this)

{
  int **ppiVar1;
  int **ppiVar2;
  int *local_28;
  int **local_20;
  int *local_18;
  
  ppiVar1 = &local_28;
  ppiVar2 = &local_28;
  local_18 = (int *)this;
  if ((x37 * (x37 + -1) & 1U) == 0 || y38 < 10) goto LAB_00406c10;
  do {
    ppiVar1 = ppiVar2 + -6;
    ppiVar2[-4] = local_18;
    *ppiVar1 = *(int **)(ppiVar2[-4] + 2);
    ppiVar2[-7] = (int *)0x406cea;
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::__normal_iterator
              ((__normal_iterator_int_const__std__vector_int_std__allocator_int___ *)(ppiVar2 + -2),
               ppiVar1);
LAB_00406c10:
    local_20 = ppiVar1 + -2;
    ppiVar2 = ppiVar1 + -6;
    ppiVar1[-4] = local_18;
    *ppiVar2 = *(int **)(ppiVar1[-4] + 2);
    ppiVar1[-7] = (int *)0x406c4e;
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::__normal_iterator
              ((__normal_iterator_int_const__std__vector_int_std__allocator_int___ *)local_20,
               ppiVar2);
    local_28 = *local_20;
  } while ((x37 * (x37 + -1) & 1U) != 0 && 9 < y38);
  return local_28;
}



// std::_Vector_base<int, std::allocator<int>>::_M_get_Tp_allocator()

_Vector_base_int_std__allocator_int__ * __thiscall
std::_Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator
          (_Vector_base_int_std__allocator_int__ *this)

{
  _Vector_base_int_std__allocator_int__ **pp_Var1;
  _Vector_base_int_std__allocator_int__ **pp_Var2;
  undefined local_18 [16];
  
  pp_Var1 = (_Vector_base_int_std__allocator_int__ **)local_18;
  pp_Var2 = (_Vector_base_int_std__allocator_int__ **)local_18;
  if ((x39 * (x39 + -1) & 1U) == 0 || y40 < 10) goto LAB_00406d3f;
  do {
    pp_Var1 = pp_Var2 + -2;
    *pp_Var1 = this;
LAB_00406d3f:
    pp_Var2 = pp_Var1 + -2;
    *pp_Var2 = this;
  } while ((x39 * (x39 + -1) & 1U) != 0 && 9 < y40);
  return *pp_Var2;
}



// std::_Vector_base<int, std::allocator<int>>::~_Vector_base()

void __thiscall
std::_Vector_base<int,std::allocator<int>>::__Vector_base
          (_Vector_base_int_std__allocator_int__ *this)

{
  _Vector_base_int_std__allocator_int__ **pp_Var1;
  undefined auStack104 [32];
  ulong local_48;
  int **local_40;
  _Vector_base_int_std__allocator_int__ **local_38;
  _Vector_base_int_std__allocator_int__ **local_30;
  int *local_28;
  _Vector_base_int_std__allocator_int__ *local_20;
  
  pp_Var1 = (_Vector_base_int_std__allocator_int__ **)auStack104;
  local_38 = (_Vector_base_int_std__allocator_int__ **)auStack104;
  if ((x41 * (x41 + -1) & 1U) == 0 || y42 < 10) goto LAB_00406e12;
  do {
    pp_Var1 = local_38 + -2;
    *pp_Var1 = this;
LAB_00406e12:
    local_30 = pp_Var1 + -4;
    local_38 = pp_Var1 + -6;
    pp_Var1[-2] = this;
    local_40 = (int **)pp_Var1[-2];
    local_28 = *local_40;
    local_48 = (long)local_40[2] - (long)*local_40 >> 2;
  } while ((x41 * (x41 + -1) & 1U) != 0 && 9 < y42);
                    // try { // try from 00406eaa to 00406eba has its CatchHandler @ 00406f58
  pp_Var1[-7] = (_Vector_base_int_std__allocator_int__ *)0x406ebb;
  local_20 = this;
  _M_deallocate((_Vector_base_int_std__allocator_int__ *)local_40,local_28,local_48);
  if ((x41 * (x41 + -1) & 1U) == 0 || y42 < 10) goto LAB_00406f03;
  do {
    pp_Var1[-7] = (_Vector_base_int_std__allocator_int__ *)0x4070c7;
    _Vector_impl::__Vector_impl((_Vector_impl *)local_40);
LAB_00406f03:
    pp_Var1[-7] = (_Vector_base_int_std__allocator_int__ *)0x406f0c;
    _Vector_impl::__Vector_impl((_Vector_impl *)local_40);
  } while ((x41 * (x41 + -1) & 1U) != 0 && 9 < y42);
  return;
}



// std::_Vector_base<int, std::allocator<int>>::_M_deallocate(int*, unsigned long)

void __thiscall
std::_Vector_base<int,std::allocator<int>>::_M_deallocate
          (_Vector_base_int_std__allocator_int__ *this,int *param_1,ulong param_2)

{
  int *piVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined auStack88 [7];
  undefined local_51;
  _Vector_base_int_std__allocator_int__ *local_50;
  ulong *local_48;
  int **local_40;
  ulong local_38;
  _Vector_base_int_std__allocator_int__ *local_30;
  int *local_28;
  
  puVar3 = (ulong *)auStack88;
  local_48 = (ulong *)auStack88;
  if ((x43 * (x43 + -1) & 1U) == 0 || y44 < 10) goto LAB_0040714f;
  do {
    puVar3 = local_48 + -6;
    local_48[-2] = (ulong)this;
    local_48[-4] = (ulong)param_1;
    *puVar3 = param_2;
LAB_0040714f:
    local_40 = (int **)(puVar3 + -4);
    local_48 = puVar3 + -6;
    puVar3[-2] = (ulong)this;
    *local_40 = param_1;
    *local_48 = param_2;
    local_50 = (_Vector_base_int_std__allocator_int__ *)puVar3[-2];
    local_51 = *local_40 != (int *)0x0;
  } while ((x43 * (x43 + -1) & 1U) != 0 && 9 < y44);
  if ((bool)local_51) {
    local_38 = param_2;
    local_30 = this;
    local_28 = param_1;
    if ((x43 * (x43 + -1) & 1U) == 0 || y44 < 10) goto LAB_0040723f;
    do {
      piVar1 = *local_40;
      uVar2 = *local_48;
      puVar3[-7] = 0x40738d;
      __gnu_cxx::new_allocator<int>::deallocate((new_allocator_int_ *)local_50,piVar1,uVar2);
LAB_0040723f:
      piVar1 = *local_40;
      uVar2 = *local_48;
      puVar3[-7] = 0x407259;
      __gnu_cxx::new_allocator<int>::deallocate((new_allocator_int_ *)local_50,piVar1,uVar2);
    } while ((x43 * (x43 + -1) & 1U) != 0 && 9 < y44);
  }
  do {
  } while ((x43 * (x43 + -1) & 1U) != 0 && 9 < y44);
  return;
}



// std::_Vector_base<int, std::allocator<int>>::_Vector_impl::~_Vector_impl()

void __thiscall
std::_Vector_base<int,std::allocator<int>>::_Vector_impl::__Vector_impl(_Vector_impl *this)

{
  allocator_int_ **ppaVar1;
  allocator_int_ **ppaVar2;
  undefined auStack24 [8];
  _Vector_impl *local_10;
  
  ppaVar1 = (allocator_int_ **)auStack24;
  ppaVar2 = (allocator_int_ **)auStack24;
  local_10 = this;
  if ((x45 * (x45 + -1) & 1U) == 0 || y46 < 10) goto LAB_004073ef;
  do {
    ppaVar1 = ppaVar2 + -2;
    *ppaVar1 = (allocator_int_ *)local_10;
    ppaVar2[-3] = (allocator_int_ *)0x407474;
    allocator<int>::_allocator(*ppaVar1);
LAB_004073ef:
    ppaVar2 = ppaVar1 + -2;
    *ppaVar2 = (allocator_int_ *)local_10;
    ppaVar1[-3] = (allocator_int_ *)0x40740b;
    allocator<int>::_allocator(*ppaVar2);
  } while ((x45 * (x45 + -1) & 1U) != 0 && 9 < y46);
  return;
}



// std::allocator<int>::~allocator()

void __thiscall std::allocator<int>::_allocator(allocator_int_ *this)

{
  new_allocator_int_ **ppnVar1;
  new_allocator_int_ **ppnVar2;
  undefined auStack24 [8];
  allocator_int_ *local_10;
  
  ppnVar1 = (new_allocator_int_ **)auStack24;
  ppnVar2 = (new_allocator_int_ **)auStack24;
  local_10 = this;
  if ((x47 * (x47 + -1) & 1U) == 0 || y48 < 10) goto LAB_004074cf;
  do {
    ppnVar1 = ppnVar2 + -2;
    *ppnVar1 = (new_allocator_int_ *)local_10;
    ppnVar2[-3] = (new_allocator_int_ *)0x407554;
    __gnu_cxx::new_allocator<int>::_new_allocator(*ppnVar1);
LAB_004074cf:
    ppnVar2 = ppnVar1 + -2;
    *ppnVar2 = (new_allocator_int_ *)local_10;
    ppnVar1[-3] = (new_allocator_int_ *)0x4074eb;
    __gnu_cxx::new_allocator<int>::_new_allocator(*ppnVar2);
  } while ((x47 * (x47 + -1) & 1U) != 0 && 9 < y48);
  return;
}



// __gnu_cxx::new_allocator<int>::~new_allocator()

void __thiscall __gnu_cxx::new_allocator<int>::_new_allocator(new_allocator_int_ *this)

{
  new_allocator_int_ **ppnVar1;
  new_allocator_int_ **ppnVar2;
  undefined auStack24 [16];
  
  ppnVar1 = (new_allocator_int_ **)auStack24;
  ppnVar2 = (new_allocator_int_ **)auStack24;
  if ((x49 * (x49 + -1) & 1U) == 0 || y50 < 10) goto LAB_004075af;
  do {
    ppnVar1 = ppnVar2 + -2;
    *ppnVar1 = this;
LAB_004075af:
    ppnVar2 = ppnVar1 + -2;
    *ppnVar2 = this;
  } while ((x49 * (x49 + -1) & 1U) != 0 && 9 < y50);
  return;
}



// __gnu_cxx::new_allocator<int>::deallocate(int*, unsigned long)

void __thiscall
__gnu_cxx::new_allocator<int>::deallocate(new_allocator_int_ *this,int *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong local_28;
  new_allocator_int_ *local_20;
  int *local_18;
  
  puVar1 = &local_28;
  puVar2 = &local_28;
  local_28 = param_2;
  local_20 = this;
  local_18 = param_1;
  if ((x51 * (x51 + -1) & 1U) == 0 || y52 < 10) goto LAB_0040767b;
  do {
    puVar1 = puVar2 + -6;
    puVar2[-2] = (ulong)local_20;
    puVar2[-4] = (ulong)local_18;
    *puVar1 = local_28;
    puVar2[-7] = 0x40774a;
    operator_delete((int *)puVar2[-4]);
LAB_0040767b:
    puVar2 = puVar1 + -6;
    puVar1[-2] = (ulong)local_20;
    puVar1[-4] = (ulong)local_18;
    *puVar2 = local_28;
    puVar1[-7] = 0x4076b9;
    operator_delete((int *)puVar1[-4]);
  } while ((x51 * (x51 + -1) & 1U) != 0 && 9 < y52);
  return;
}



// __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>::__normal_iterator(int const* const&)

void __thiscall
__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::__normal_iterator
          (__normal_iterator_int_const__std__vector_int_std__allocator_int___ *this,int **param_1)

{
  int ***pppiVar1;
  int ***pppiVar2;
  int **local_18;
  int *local_10;
  
  pppiVar1 = &local_18;
  pppiVar2 = &local_18;
  local_10 = (int *)this;
  local_18 = param_1;
  if ((x53 * (x53 + -1) & 1U) == 0 || y54 < 10) goto LAB_004077a3;
  do {
    pppiVar1 = (int ***)((int **)pppiVar2 + -4);
    ((int **)pppiVar2)[-2] = local_10;
    *pppiVar1 = local_18;
    *(int **)((int **)pppiVar2)[-2] = **pppiVar1;
LAB_004077a3:
    pppiVar2 = (int ***)((int **)pppiVar1 + -4);
    ((int **)pppiVar1)[-2] = local_10;
    *pppiVar2 = local_18;
    *(int **)((int **)pppiVar1)[-2] = **pppiVar2;
  } while ((x53 * (x53 + -1) & 1U) != 0 && 9 < y54);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::uninitialized_copy<__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, int*>(__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, int*)

int * std::
      uninitialized_copy___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__
                (__normal_iterator param_1,__normal_iterator param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  undefined auStack88 [8];
  int *local_50;
  int *local_48;
  int *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = CONCAT44(in_register_0000003c,param_1);
  local_30 = CONCAT44(in_register_00000034,param_2);
  puVar1 = (undefined8 *)auStack88;
  puVar2 = (undefined8 *)auStack88;
  local_40 = param_3;
  if ((x55 * (x55 + -1) & 1U) == 0 || y56 < 10) goto LAB_004078c1;
  do {
    puVar1 = puVar2 + -10;
    puVar2[-2] = local_38;
    puVar2[-4] = local_30;
    puVar2[-6] = local_40;
    puVar2[-8] = puVar2[-2];
    *puVar1 = puVar2[-4];
    puVar2[-0xb] = 0x4079e9;
    local_50 = __uninitialized_copy<true>::
               __uninit_copy___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__
                         ((__normal_iterator)puVar2[-8],(__normal_iterator)*puVar1,(int *)puVar2[-6]
                         );
LAB_004078c1:
    puVar2 = puVar1 + -10;
    puVar1[-2] = local_38;
    puVar1[-4] = local_30;
    puVar1[-6] = local_40;
    puVar1[-8] = puVar1[-2];
    *puVar2 = puVar1[-4];
    puVar1[-0xb] = 0x407925;
    local_48 = __uninitialized_copy<true>::
               __uninit_copy___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__
                         ((__normal_iterator)puVar1[-8],(__normal_iterator)*puVar2,(int *)puVar1[-6]
                         );
  } while ((x55 * (x55 + -1) & 1U) != 0 && 9 < y56);
  return local_48;
}



// int* std::__uninitialized_copy<true>::__uninit_copy<__gnu_cxx::__normal_iterator<int const*,
// std::vector<int, std::allocator<int>>>, int*>(__gnu_cxx::__normal_iterator<int const*,
// std::vector<int, std::allocator<int>>>, __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, int*)

int * std::__uninitialized_copy<true>::
      __uninit_copy___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__
                (__normal_iterator param_1,__normal_iterator param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  undefined auStack88 [8];
  int *local_50;
  int *local_48;
  int *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = CONCAT44(in_register_0000003c,param_1);
  local_30 = CONCAT44(in_register_00000034,param_2);
  puVar1 = (undefined8 *)auStack88;
  puVar2 = (undefined8 *)auStack88;
  local_40 = param_3;
  if ((x57 * (x57 + -1) & 1U) == 0 || y58 < 10) goto LAB_00407a61;
  do {
    puVar1 = puVar2 + -10;
    puVar2[-2] = local_38;
    puVar2[-4] = local_30;
    puVar2[-6] = local_40;
    puVar2[-8] = puVar2[-2];
    *puVar1 = puVar2[-4];
    puVar2[-0xb] = 0x407b89;
    local_50 = copy___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__
                         ((__normal_iterator)puVar2[-8],(__normal_iterator)*puVar1,(int *)puVar2[-6]
                         );
LAB_00407a61:
    puVar2 = puVar1 + -10;
    puVar1[-2] = local_38;
    puVar1[-4] = local_30;
    puVar1[-6] = local_40;
    puVar1[-8] = puVar1[-2];
    *puVar2 = puVar1[-4];
    puVar1[-0xb] = 0x407ac5;
    local_48 = copy___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__
                         ((__normal_iterator)puVar1[-8],(__normal_iterator)*puVar2,(int *)puVar1[-6]
                         );
  } while ((x57 * (x57 + -1) & 1U) != 0 && 9 < y58);
  return local_48;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::copy<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int>>>,
// int*>(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int>>>,
// __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int>>>, int*)

int * std::copy___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__
                (__normal_iterator param_1,__normal_iterator param_2,int *param_3)

{
  undefined8 uVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  iterator_type iVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  int **ppiVar6;
  int **ppiVar7;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  int *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  int **local_88;
  undefined8 *local_80;
  int *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  int **local_58;
  undefined8 *local_50;
  int *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  ppiVar6 = &local_a8;
  ppiVar7 = &local_a8;
  local_38 = CONCAT44(in_register_00000034,param_2);
  local_40 = CONCAT44(in_register_0000003c,param_1);
  local_48 = param_3;
  if ((x59 * (x59 + -1) & 1U) == 0 || y60 < 10) goto LAB_00407c03;
  do {
    ppiVar6 = ppiVar7 + -0xe;
    ppiVar7[-2] = (int *)local_40;
    ppiVar7[-4] = (int *)local_38;
    ppiVar7[-6] = local_48;
    ppiVar7[-10] = ppiVar7[-2];
    local_80 = ppiVar7 + -4;
    local_88 = ppiVar7 + -6;
    local_90 = ppiVar7 + -8;
    local_98 = ppiVar7 + -0xc;
    local_a0 = ppiVar6;
    ppiVar7[-0xf] = (int *)0x407da3;
    iVar5 = __miter_base___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
                      ((__normal_iterator)ppiVar7[-10]);
    *local_90 = CONCAT44(extraout_var_01,iVar5);
    puVar4 = local_a0;
    *local_a0 = *local_80;
    uVar1 = *puVar4;
    ppiVar7[-0xf] = (int *)0x407dc6;
    iVar5 = __miter_base___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
                      ((__normal_iterator)uVar1);
    puVar4 = local_98;
    *local_98 = CONCAT44(extraout_var_02,iVar5);
    piVar2 = *local_88;
    uVar1 = *local_90;
    uVar3 = *puVar4;
    ppiVar7[-0xf] = (int *)0x407de9;
    local_a8 = __copy_move_a2_false___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__
                         ((__normal_iterator)uVar1,(__normal_iterator)uVar3,piVar2);
LAB_00407c03:
    ppiVar7 = ppiVar6 + -0xe;
    ppiVar6[-2] = (int *)local_40;
    ppiVar6[-4] = (int *)local_38;
    ppiVar6[-6] = local_48;
    ppiVar6[-10] = ppiVar6[-2];
    local_50 = ppiVar6 + -4;
    local_58 = ppiVar6 + -6;
    local_60 = ppiVar6 + -8;
    local_68 = ppiVar6 + -0xc;
    local_70 = ppiVar7;
    ppiVar6[-0xf] = (int *)0x407c80;
    iVar5 = __miter_base___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
                      ((__normal_iterator)ppiVar6[-10]);
    *local_60 = CONCAT44(extraout_var,iVar5);
    puVar4 = local_70;
    *local_70 = *local_50;
    uVar1 = *puVar4;
    ppiVar6[-0xf] = (int *)0x407c9d;
    iVar5 = __miter_base___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
                      ((__normal_iterator)uVar1);
    puVar4 = local_68;
    *local_68 = CONCAT44(extraout_var_00,iVar5);
    piVar2 = *local_58;
    uVar1 = *local_60;
    uVar3 = *puVar4;
    ppiVar6[-0xf] = (int *)0x407cba;
    local_78 = __copy_move_a2_false___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__
                         ((__normal_iterator)uVar1,(__normal_iterator)uVar3,piVar2);
  } while ((x59 * (x59 + -1) & 1U) != 0 && 9 < y60);
  return local_78;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::__copy_move_a2<false, __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, int*>(__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, int*)

int * std::
      __copy_move_a2_false___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__
                (__normal_iterator param_1,__normal_iterator param_2,int *param_3)

{
  undefined8 uVar1;
  int *piVar2;
  undefined8 *puVar3;
  iterator_type iVar4;
  iterator_type iVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 in_register_00000034;
  undefined4 in_register_0000003c;
  undefined auStack168 [8];
  int *local_a0;
  int *local_98;
  int *local_90;
  int **local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  int *local_70;
  int *local_68;
  int *local_60;
  int **local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  int *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  puVar6 = (undefined8 *)auStack168;
  puVar7 = (undefined8 *)auStack168;
  local_30 = CONCAT44(in_register_00000034,param_2);
  local_38 = CONCAT44(in_register_0000003c,param_1);
  local_40 = param_3;
  if ((x61 * (x61 + -1) & 1U) == 0 || y62 < 10) goto LAB_00407e64;
  do {
    puVar6 = puVar7 + -10;
    puVar7[-2] = local_38;
    puVar7[-4] = local_30;
    puVar7[-6] = local_40;
    puVar7[-8] = puVar7[-2];
    local_78 = puVar6;
    local_80 = puVar7 + -4;
    local_88 = (int **)(puVar7 + -6);
    puVar7[-0xb] = 0x407fc6;
    iVar4 = __niter_base___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
                      ((__normal_iterator)puVar7[-8]);
    puVar3 = local_78;
    *local_78 = *local_80;
    uVar1 = *puVar3;
    local_90 = (int *)CONCAT44(extraout_var_02,iVar4);
    puVar7[-0xb] = 0x407fe3;
    iVar4 = __niter_base___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
                      ((__normal_iterator)uVar1);
    piVar2 = *local_88;
    local_98 = (int *)CONCAT44(extraout_var_03,iVar4);
    puVar7[-0xb] = 0x407ff6;
    iVar5 = __niter_base_int__(piVar2);
    puVar7[-0xb] = 0x40800c;
    local_a0 = __copy_move_a_false_int_const__int__
                         (local_90,local_98,(int *)CONCAT44(extraout_var_04,iVar5));
LAB_00407e64:
    puVar7 = puVar6 + -10;
    puVar6[-2] = local_38;
    puVar6[-4] = local_30;
    puVar6[-6] = local_40;
    puVar6[-8] = puVar6[-2];
    local_48 = puVar7;
    local_50 = puVar6 + -4;
    local_58 = (int **)(puVar6 + -6);
    puVar6[-0xb] = 0x407ec8;
    iVar4 = __niter_base___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
                      ((__normal_iterator)puVar6[-8]);
    puVar3 = local_48;
    *local_48 = *local_50;
    uVar1 = *puVar3;
    local_60 = (int *)CONCAT44(extraout_var,iVar4);
    puVar6[-0xb] = 0x407ee2;
    iVar4 = __niter_base___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
                      ((__normal_iterator)uVar1);
    piVar2 = *local_58;
    local_68 = (int *)CONCAT44(extraout_var_00,iVar4);
    puVar6[-0xb] = 0x407ef2;
    iVar5 = __niter_base_int__(piVar2);
    puVar6[-0xb] = 0x407f02;
    local_70 = __copy_move_a_false_int_const__int__
                         (local_60,local_68,(int *)CONCAT44(extraout_var_01,iVar5));
  } while ((x61 * (x61 + -1) & 1U) != 0 && 9 < y62);
  return local_70;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::_Miter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>>::iterator_type std::__miter_base<__gnu_cxx::__normal_iterator<int const*,
// std::vector<int, std::allocator<int>>>>(__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>)

iterator_type
std::__miter_base___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
          (__normal_iterator param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 in_register_0000003c;
  undefined auStack56 [8];
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  
  puVar2 = (undefined8 *)auStack56;
  puVar3 = (undefined8 *)auStack56;
  local_18 = CONCAT44(in_register_0000003c,param_1);
  if ((x63 * (x63 + -1) & 1U) == 0 || y64 < 10) goto LAB_00408070;
  do {
    puVar2 = puVar3 + -6;
    puVar3[-4] = local_18;
    *puVar2 = puVar3[-4];
    local_30 = puVar3 + -2;
    puVar3[-7] = 0x408143;
    uVar1 = _Iter_base<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,false>
            ::_S_base((__normal_iterator)*puVar2);
    *local_30 = uVar1;
LAB_00408070:
    puVar3 = puVar2 + -6;
    puVar2[-4] = local_18;
    *puVar3 = puVar2[-4];
    local_20 = puVar2 + -2;
    puVar2[-7] = 0x4080a7;
    uVar1 = _Iter_base<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,false>
            ::_S_base((__normal_iterator)*puVar3);
    puVar2 = local_20;
    *local_20 = uVar1;
    local_28 = *puVar2;
  } while ((x63 * (x63 + -1) & 1U) != 0 && 9 < y64);
  return (iterator_type)*puVar2;
}



// std::_Iter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int>>>,
// false>::_S_base(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int>>>)

undefined8
std::_Iter_base<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,false>
::_S_base(__normal_iterator param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 in_register_0000003c;
  undefined8 local_18;
  undefined8 local_10;
  
  puVar1 = &local_18;
  puVar2 = &local_18;
  local_10 = CONCAT44(in_register_0000003c,param_1);
  if ((x65 * (x65 + -1) & 1U) == 0 || y66 < 10) goto LAB_0040819f;
  do {
    puVar1 = puVar2 + -4;
    *puVar1 = local_10;
    puVar2[-2] = *puVar1;
LAB_0040819f:
    puVar2 = puVar1 + -4;
    *puVar2 = local_10;
    puVar1[-2] = *puVar2;
    local_18 = puVar1[-2];
  } while ((x65 * (x65 + -1) & 1U) != 0 && 9 < y66);
  return local_18;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::__copy_move_a<false, int const*, int*>(int const*, int const*, int*)

int * std::__copy_move_a_false_int_const__int__(int *param_1,int *param_2,int *param_3)

{
  int **ppiVar1;
  int **ppiVar2;
  int *local_48;
  int *local_40;
  int *local_38;
  int *local_30;
  int *local_28;
  
  ppiVar2 = &local_48;
  ppiVar1 = &local_48;
  local_38 = param_3;
  local_30 = param_1;
  local_28 = param_2;
  if ((x67 * (x67 + -1) & 1U) == 0 || y68 < 10) goto LAB_0040829f;
  do {
    ppiVar2 = (int **)((long)ppiVar1 + -0x40);
    *(int **)((long)ppiVar1 + -0x10) = local_30;
    *(int **)((long)ppiVar1 + -0x20) = local_28;
    *(int **)((long)ppiVar1 + -0x30) = local_38;
    *(undefined *)ppiVar2 = 1;
    *(undefined8 *)((long)ppiVar1 + -0x48) = 0x40839a;
    local_48 = __copy_move<false,true,std::random_access_iterator_tag>::__copy_m_int_
                         (*(int **)((long)ppiVar1 + -0x10),*(int **)((long)ppiVar1 + -0x20),
                          *(int **)((long)ppiVar1 + -0x30));
LAB_0040829f:
    ppiVar1 = (int **)((long)ppiVar2 + -0x40);
    *(int **)((long)ppiVar2 + -0x10) = local_30;
    *(int **)((long)ppiVar2 + -0x20) = local_28;
    *(int **)((long)ppiVar2 + -0x30) = local_38;
    *(undefined *)ppiVar1 = 1;
    *(undefined8 *)((long)ppiVar2 + -0x48) = 0x4082ed;
    local_40 = __copy_move<false,true,std::random_access_iterator_tag>::__copy_m_int_
                         (*(int **)((long)ppiVar2 + -0x10),*(int **)((long)ppiVar2 + -0x20),
                          *(int **)((long)ppiVar2 + -0x30));
  } while ((x67 * (x67 + -1) & 1U) != 0 && 9 < y68);
  return local_40;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::_Niter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>>::iterator_type std::__niter_base<__gnu_cxx::__normal_iterator<int const*,
// std::vector<int, std::allocator<int>>>>(__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>)

iterator_type
std::__niter_base___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
          (__normal_iterator param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 in_register_0000003c;
  undefined auStack40 [8];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  puVar1 = (undefined8 *)auStack40;
  puVar2 = (undefined8 *)auStack40;
  if ((x69 * (x69 + -1) & 1U) == 0 || y70 < 10) goto LAB_004083ff;
  do {
    puVar1 = puVar2 + -4;
    puVar2[-2] = local_10;
    *puVar1 = puVar2[-2];
    puVar2[-5] = 0x4084a8;
    local_20 = _Iter_base<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,true>
               ::_S_base((__normal_iterator)*puVar1);
LAB_004083ff:
    puVar2 = puVar1 + -4;
    puVar1[-2] = local_10;
    *puVar2 = puVar1[-2];
    puVar1[-5] = 0x408428;
    local_18 = _Iter_base<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,true>
               ::_S_base((__normal_iterator)*puVar2);
  } while ((x69 * (x69 + -1) & 1U) != 0 && 9 < y70);
  return (iterator_type)local_18;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::_Niter_base<int*>::iterator_type std::__niter_base<int*>(int*)

iterator_type std::__niter_base_int__(int *param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  undefined auStack40 [8];
  undefined8 local_20;
  undefined8 local_18;
  int *local_10;
  
  ppiVar1 = (int **)auStack40;
  ppiVar2 = (int **)auStack40;
  local_10 = param_1;
  if ((x71 * (x71 + -1) & 1U) == 0 || y72 < 10) goto LAB_0040850f;
  do {
    ppiVar1 = ppiVar2 + -2;
    *ppiVar1 = local_10;
    ppiVar2[-3] = (int *)0x408596;
    local_20 = _Iter_base<int*,false>::_S_base(*ppiVar1);
LAB_0040850f:
    ppiVar2 = ppiVar1 + -2;
    *ppiVar2 = local_10;
    ppiVar1[-3] = (int *)0x408528;
    local_18 = _Iter_base<int*,false>::_S_base(*ppiVar2);
  } while ((x71 * (x71 + -1) & 1U) != 0 && 9 < y72);
  return (iterator_type)local_18;
}



// std::_Iter_base<int*, false>::_S_base(int*)

int * std::_Iter_base<int*,false>::_S_base(int *param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  undefined local_18 [16];
  
  ppiVar1 = (int **)local_18;
  ppiVar2 = (int **)local_18;
  if ((x73 * (x73 + -1) & 1U) == 0 || y74 < 10) goto LAB_004085ef;
  do {
    ppiVar1 = ppiVar2 + -2;
    *ppiVar1 = param_1;
LAB_004085ef:
    ppiVar2 = ppiVar1 + -2;
    *ppiVar2 = param_1;
  } while ((x73 * (x73 + -1) & 1U) != 0 && 9 < y74);
  return *ppiVar2;
}



// std::_Iter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int>>>,
// true>::_S_base(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int>>>)

undefined8
std::_Iter_base<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,true>
::_S_base(__normal_iterator param_1)

{
  undefined8 *puVar1;
  undefined8 *this;
  undefined4 in_register_0000003c;
  undefined auStack40 [8];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = CONCAT44(in_register_0000003c,param_1);
  puVar1 = (undefined8 *)auStack40;
  this = (undefined8 *)auStack40;
  if ((x75 * (x75 + -1) & 1U) == 0 || y76 < 10) goto LAB_004086bf;
  do {
    puVar1 = this + -2;
    *puVar1 = local_10;
    this[-3] = 0x408749;
    local_20 = __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::base
                         ((__normal_iterator_int_const__std__vector_int_std__allocator_int___ *)
                          puVar1);
LAB_004086bf:
    this = puVar1 + -2;
    *this = local_10;
    puVar1[-3] = 0x4086d8;
    puVar1 = (undefined8 *)
             __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::base
                       ((__normal_iterator_int_const__std__vector_int_std__allocator_int___ *)this);
    local_18 = *puVar1;
  } while ((x75 * (x75 + -1) & 1U) != 0 && 9 < y76);
  return local_18;
}



// __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int>>>::base() const

__normal_iterator_int_const__std__vector_int_std__allocator_int___ * __thiscall
__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::base
          (__normal_iterator_int_const__std__vector_int_std__allocator_int___ *this)

{
  __normal_iterator_int_const__std__vector_int_std__allocator_int___ **pp_Var1;
  __normal_iterator_int_const__std__vector_int_std__allocator_int___ **pp_Var2;
  undefined local_18 [16];
  
  pp_Var1 = (__normal_iterator_int_const__std__vector_int_std__allocator_int___ **)local_18;
  pp_Var2 = (__normal_iterator_int_const__std__vector_int_std__allocator_int___ **)local_18;
  if ((x77 * (x77 + -1) & 1U) == 0 || y78 < 10) goto LAB_004087af;
  do {
    pp_Var1 = pp_Var2 + -2;
    *pp_Var1 = this;
LAB_004087af:
    pp_Var2 = pp_Var1 + -2;
    *pp_Var2 = this;
  } while ((x77 * (x77 + -1) & 1U) != 0 && 9 < y78);
  return *pp_Var2;
}



// int* std::__copy_move<false, true, std::random_access_iterator_tag>::__copy_m<int>(int const*,
// int const*, int*)

int * std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m_int_
                (int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  undefined auStack120 [23];
  undefined local_61;
  long *local_60;
  int **local_58;
  int **local_50;
  int *local_48;
  int *local_40;
  int *local_38;
  
  plVar4 = (long *)auStack120;
  local_60 = (long *)auStack120;
  if ((x79 * (x79 + -1) & 1U) == 0 || y80 < 10) goto LAB_00408893;
  do {
    plVar4 = local_60 + -8;
    local_60[-2] = (long)param_1;
    local_60[-4] = (long)param_2;
    local_60[-6] = (long)param_3;
    *plVar4 = (long)local_60[-4] - (long)local_60[-2] >> 2;
LAB_00408893:
    local_50 = (int **)(plVar4 + -2);
    local_58 = (int **)(plVar4 + -6);
    local_60 = plVar4 + -8;
    *local_50 = param_1;
    plVar4[-4] = (long)param_2;
    *local_58 = param_3;
    *local_60 = (long)plVar4[-4] - (long)*local_50 >> 2;
    local_61 = *local_60 != 0;
  } while ((x79 * (x79 + -1) & 1U) != 0 && 9 < y80);
  if ((bool)local_61) {
    local_48 = param_3;
    local_40 = param_1;
    local_38 = param_2;
    if ((x79 * (x79 + -1) & 1U) == 0 || y80 < 10) goto LAB_00408998;
    do {
      piVar1 = *local_58;
      piVar2 = *local_50;
      lVar3 = *local_60;
      plVar4[-9] = 0x408b3b;
      memmove(piVar1,piVar2,lVar3 << 2);
LAB_00408998:
      piVar1 = *local_58;
      piVar2 = *local_50;
      lVar3 = *local_60;
      plVar4[-9] = 0x4089bc;
      memmove(piVar1,piVar2,lVar3 << 2);
    } while ((x79 * (x79 + -1) & 1U) != 0 && 9 < y80);
  }
  do {
  } while ((x79 * (x79 + -1) & 1U) != 0 && 9 < y80);
  return *local_58 + *local_60;
}



// std::_Vector_base<int, std::allocator<int>>::_Vector_impl::_Vector_impl(std::allocator<int>
// const&)

void __thiscall
std::_Vector_base<int,std::allocator<int>>::_Vector_impl::_Vector_impl
          (_Vector_impl *this,allocator *param_1)

{
  allocator **ppaVar1;
  allocator **ppaVar2;
  undefined auStack56 [8];
  undefined8 *local_30;
  undefined8 *local_28;
  allocator *local_20;
  _Vector_impl *local_18;
  
  ppaVar1 = (allocator **)auStack56;
  ppaVar2 = (allocator **)auStack56;
  local_20 = param_1;
  local_18 = this;
  if ((x81 * (x81 + -1) & 1U) == 0 || y82 < 10) goto LAB_00408ba4;
  do {
    ppaVar1 = ppaVar2 + -4;
    ppaVar2[-2] = (allocator *)local_18;
    *ppaVar1 = local_20;
    local_30 = (undefined8 *)ppaVar2[-2];
    ppaVar2[-5] = (allocator *)0x408c7a;
    allocator<int>::allocator((allocator_int_ *)local_30,*ppaVar1);
    *local_30 = 0;
    local_30[1] = 0;
    local_30[2] = 0;
LAB_00408ba4:
    ppaVar2 = ppaVar1 + -4;
    ppaVar1[-2] = (allocator *)local_18;
    *ppaVar2 = local_20;
    local_28 = (undefined8 *)ppaVar1[-2];
    ppaVar1[-5] = (allocator *)0x408bd8;
    allocator<int>::allocator((allocator_int_ *)local_28,*ppaVar2);
    *local_28 = 0;
    local_28[1] = 0;
    local_28[2] = 0;
  } while ((x81 * (x81 + -1) & 1U) != 0 && 9 < y82);
  return;
}



// std::_Vector_base<int, std::allocator<int>>::_M_create_storage(unsigned long)

void __thiscall
std::_Vector_base<int,std::allocator<int>>::_M_create_storage
          (_Vector_base_int_std__allocator_int__ *this,ulong param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined auStack72 [8];
  ulong *local_40;
  long *local_38;
  ulong *local_30;
  long *local_28;
  ulong local_20;
  long *local_18;
  
  puVar2 = (ulong *)auStack72;
  puVar3 = (ulong *)auStack72;
  local_18 = (long *)this;
  local_20 = param_1;
  if ((x83 * (x83 + -1) & 1U) == 0 || y84 < 10) goto LAB_00408cf4;
  do {
    puVar2 = puVar3 + -4;
    puVar3[-2] = (ulong)local_18;
    *puVar2 = local_20;
    local_38 = (long *)puVar3[-2];
    local_40 = puVar2;
    puVar3[-5] = 0x408dda;
    lVar1 = _M_allocate((_Vector_base_int_std__allocator_int__ *)local_38,*puVar2);
    *local_38 = lVar1;
    local_38[1] = *local_38;
    local_38[2] = *local_38 + *local_40 * 4;
LAB_00408cf4:
    puVar3 = puVar2 + -4;
    puVar2[-2] = (ulong)local_18;
    *puVar3 = local_20;
    local_28 = (long *)puVar2[-2];
    local_30 = puVar3;
    puVar2[-5] = 0x408d2c;
    lVar1 = _M_allocate((_Vector_base_int_std__allocator_int__ *)local_28,*puVar3);
    *local_28 = lVar1;
    local_28[1] = *local_28;
    local_28[2] = *local_28 + *local_30 * 4;
  } while ((x83 * (x83 + -1) & 1U) != 0 && 9 < y84);
  return;
}



// std::_Vector_base<int, std::allocator<int>>::_M_allocate(unsigned long)

undefined8 __thiscall
std::_Vector_base<int,std::allocator<int>>::_M_allocate
          (_Vector_base_int_std__allocator_int__ *this,ulong param_1)

{
  ulong uVar1;
  ulong *puVar2;
  undefined8 local_58 [2];
  undefined8 local_48;
  undefined8 local_40;
  undefined local_31;
  _Vector_base_int_std__allocator_int__ *local_30;
  ulong *local_28;
  ulong local_20;
  _Vector_base_int_std__allocator_int__ *local_18;
  
  puVar2 = local_58;
  local_28 = local_58;
  if ((x85 * (x85 + -1) & 1U) == 0 || y86 < 10) goto LAB_00408e64;
  do {
    puVar2 = local_28 + -4;
    local_28[-2] = (ulong)this;
    *puVar2 = param_1;
LAB_00408e64:
    local_28 = puVar2 + -4;
    puVar2[-2] = (ulong)this;
    *local_28 = param_1;
    local_30 = (_Vector_base_int_std__allocator_int__ *)puVar2[-2];
    local_31 = *local_28 != 0;
  } while ((x85 * (x85 + -1) & 1U) != 0 && 9 < y86);
  if ((bool)local_31) {
    local_20 = param_1;
    local_18 = this;
    if ((x85 * (x85 + -1) & 1U) == 0 || y86 < 10) goto LAB_00408f3f;
    do {
      uVar1 = *local_28;
      puVar2[-5] = 0x40911f;
      local_58[0] = __gnu_cxx::new_allocator<int>::allocate
                              ((new_allocator_int_ *)local_30,uVar1,(void *)0x0);
LAB_00408f3f:
      uVar1 = *local_28;
      puVar2[-5] = 0x408f56;
      local_40 = __gnu_cxx::new_allocator<int>::allocate
                           ((new_allocator_int_ *)local_30,uVar1,(void *)0x0);
      local_48 = local_40;
    } while ((x85 * (x85 + -1) & 1U) != 0 && 9 < y86);
  }
  else {
    do {
    } while ((x85 * (x85 + -1) & 1U) != 0 && 9 < y86);
    local_48 = 0;
  }
  do {
  } while ((x85 * (x85 + -1) & 1U) != 0 && 9 < y86);
  return local_48;
}



// __gnu_cxx::new_allocator<int>::allocate(unsigned long, void const*)

void * __thiscall
__gnu_cxx::new_allocator<int>::allocate(new_allocator_int_ *this,ulong param_1,void *param_2)

{
  void *pvVar1;
  void **ppvVar2;
  void **ppvVar3;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined local_49;
  void *local_48;
  void **local_40;
  void *local_38;
  new_allocator_int_ *local_30;
  void *local_28;
  
  ppvVar2 = &local_68;
  ppvVar3 = &local_68;
  local_38 = param_2;
  local_30 = this;
  local_28 = (void *)param_1;
  if ((x87 * (x87 + -1) & 1U) == 0 || y88 < 10) goto LAB_0040919f;
  do {
    ppvVar2 = ppvVar3 + -6;
    ppvVar3[-2] = local_30;
    ppvVar3[-4] = local_28;
    *ppvVar2 = local_38;
    ppvVar3[-7] = (void *)0x4093c7;
    local_60 = max_size((new_allocator_int_ *)ppvVar3[-2]);
LAB_0040919f:
    local_40 = ppvVar2 + -4;
    ppvVar3 = ppvVar2 + -6;
    ppvVar2[-2] = local_30;
    *local_40 = local_28;
    *ppvVar3 = local_38;
    local_48 = *local_40;
    ppvVar2[-7] = (void *)0x4091e5;
    pvVar1 = (void *)max_size((new_allocator_int_ *)ppvVar2[-2]);
    local_49 = pvVar1 < local_48;
  } while ((x87 * (x87 + -1) & 1U) != 0 && 9 < y88);
  if ((bool)local_49) {
    if ((x87 * (x87 + -1) & 1U) == 0 || y88 < 10) goto LAB_00409293;
    do {
      ppvVar2[-7] = (void *)0x4093d5;
      std::__throw_bad_alloc();
LAB_00409293:
      ppvVar2[-7] = (void *)0x409298;
      std::__throw_bad_alloc();
    } while ((x87 * (x87 + -1) & 1U) != 0 && 9 < y88);
  }
  if ((x87 * (x87 + -1) & 1U) == 0 || y88 < 10) goto LAB_0040931e;
  do {
    pvVar1 = *local_40;
    ppvVar2[-7] = (void *)0x4093ed;
    local_68 = operator_new((long)pvVar1 << 2);
LAB_0040931e:
    pvVar1 = *local_40;
    ppvVar2[-7] = (void *)0x409331;
    local_58 = operator_new((long)pvVar1 << 2);
  } while ((x87 * (x87 + -1) & 1U) != 0 && 9 < y88);
  return local_58;
}



// __gnu_cxx::new_allocator<int>::max_size() const

undefined8 __thiscall __gnu_cxx::new_allocator<int>::max_size(new_allocator_int_ *this)

{
  new_allocator_int_ **ppnVar1;
  new_allocator_int_ **ppnVar2;
  undefined auStack24 [16];
  
  ppnVar1 = (new_allocator_int_ **)auStack24;
  ppnVar2 = (new_allocator_int_ **)auStack24;
  if ((x89 * (x89 + -1) & 1U) == 0 || y90 < 10) goto LAB_0040944f;
  do {
    ppnVar1 = ppnVar2 + -2;
    *ppnVar1 = this;
LAB_0040944f:
    ppnVar2 = ppnVar1 + -2;
    *ppnVar2 = this;
  } while ((x89 * (x89 + -1) & 1U) != 0 && 9 < y90);
  return 0x3fffffffffffffff;
}



// std::allocator<int>::allocator(std::allocator<int> const&)

void __thiscall std::allocator<int>::allocator(allocator_int_ *this,allocator *param_1)

{
  new_allocator **ppnVar1;
  new_allocator **ppnVar2;
  undefined auStack40 [8];
  new_allocator *local_20;
  allocator_int_ *local_18;
  
  ppnVar1 = (new_allocator **)auStack40;
  ppnVar2 = (new_allocator **)auStack40;
  local_20 = (new_allocator *)param_1;
  local_18 = this;
  if ((x91 * (x91 + -1) & 1U) == 0 || y92 < 10) goto LAB_00409524;
  do {
    ppnVar1 = ppnVar2 + -4;
    ppnVar2[-2] = (new_allocator *)local_18;
    *ppnVar1 = local_20;
    ppnVar2[-5] = (new_allocator *)0x4095dd;
    __gnu_cxx::new_allocator<int>::new_allocator((new_allocator_int_ *)ppnVar2[-2],*ppnVar1);
LAB_00409524:
    ppnVar2 = ppnVar1 + -4;
    ppnVar1[-2] = (new_allocator *)local_18;
    *ppnVar2 = local_20;
    ppnVar1[-5] = (new_allocator *)0x409557;
    __gnu_cxx::new_allocator<int>::new_allocator((new_allocator_int_ *)ppnVar1[-2],*ppnVar2);
  } while ((x91 * (x91 + -1) & 1U) != 0 && 9 < y92);
  return;
}



// __gnu_cxx::new_allocator<int>::new_allocator(__gnu_cxx::new_allocator<int> const&)

void __thiscall
__gnu_cxx::new_allocator<int>::new_allocator(new_allocator_int_ *this,new_allocator *param_1)

{
  new_allocator **ppnVar1;
  new_allocator **ppnVar2;
  new_allocator *local_18;
  new_allocator_int_ *local_10;
  
  ppnVar1 = &local_18;
  ppnVar2 = &local_18;
  local_18 = param_1;
  local_10 = this;
  if ((x93 * (x93 + -1) & 1U) == 0 || y94 < 10) goto LAB_00409643;
  do {
    ppnVar1 = ppnVar2 + -4;
    ppnVar2[-2] = (new_allocator *)local_10;
    *ppnVar1 = local_18;
LAB_00409643:
    ppnVar2 = ppnVar1 + -4;
    ppnVar1[-2] = (new_allocator *)local_10;
    *ppnVar2 = local_18;
  } while ((x93 * (x93 + -1) & 1U) != 0 && 9 < y94);
  return;
}



// void __gnu_cxx::__alloc_traits<std::allocator<int>>::construct<int>(std::allocator<int>&, int*,
// int const&)

void __gnu_cxx::__alloc_traits<std::allocator<int>>::construct_int_
               (allocator *param_1,int *param_2,int *param_3)

{
  int **ppiVar1;
  int **ppiVar2;
  undefined auStack56 [8];
  int *local_30;
  int *local_28;
  int *local_20;
  
  ppiVar1 = (int **)auStack56;
  ppiVar2 = (int **)auStack56;
  local_30 = param_3;
  local_28 = (int *)param_1;
  local_20 = param_2;
  if ((x95 * (x95 + -1) & 1U) == 0 || y96 < 10) goto LAB_0040973d;
  do {
    ppiVar1 = ppiVar2 + -6;
    ppiVar2[-2] = local_28;
    ppiVar2[-4] = local_20;
    *ppiVar1 = local_30;
    ppiVar2[-7] = (int *)0x409819;
    new_allocator<int>::construct((new_allocator_int_ *)ppiVar2[-2],ppiVar2[-4],*ppiVar1);
LAB_0040973d:
    ppiVar2 = ppiVar1 + -6;
    ppiVar1[-2] = local_28;
    ppiVar1[-4] = local_20;
    *ppiVar2 = local_30;
    ppiVar1[-7] = (int *)0x409781;
    new_allocator<int>::construct((new_allocator_int_ *)ppiVar1[-2],ppiVar1[-4],*ppiVar2);
  } while ((x95 * (x95 + -1) & 1U) != 0 && 9 < y96);
  return;
}



// std::vector<int, std::allocator<int>>::_M_insert_aux(__gnu_cxx::__normal_iterator<int*,
// std::vector<int, std::allocator<int>>>, int const&)

void __thiscall
std::vector<int,std::allocator<int>>::_M_insert_aux
          (vector_int_std__allocator_int__ *this,__normal_iterator param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  difference_type dVar3;
  undefined4 extraout_var;
  int **ppiVar4;
  int *piVar5;
  undefined4 extraout_var_00;
  allocator *paVar6;
  int **ppiVar7;
  undefined4 in_register_00000034;
  undefined auStack552 [8];
  ulong local_220;
  int *local_218;
  int *local_210;
  int local_1fc;
  int *local_1f8;
  ulong local_1d0;
  int *local_1c8;
  int *local_1c0;
  int *local_140;
  allocator *local_138;
  int *local_130;
  int *local_128;
  int **local_120;
  int *local_118;
  int **local_110;
  int *local_108;
  allocator *local_100;
  int **local_f8;
  int *local_f0;
  int *local_e8;
  int **local_e0;
  int *local_d8;
  int *local_d0;
  int **local_c8;
  int *local_c0;
  int local_b4;
  int *local_b0;
  int **local_a8;
  int **local_a0;
  int **local_98;
  int **local_90;
  int **local_88;
  int **local_80;
  int **local_78;
  undefined local_69;
  int **local_68;
  int **local_60;
  int **local_58;
  int **local_50;
  int *local_48;
  vector_int_std__allocator_int__ *local_40;
  int *local_38;
  
  local_38 = (int *)CONCAT44(in_register_00000034,param_1);
  ppiVar7 = (int **)auStack552;
  local_a8 = (int **)auStack552;
  local_40 = this;
  local_48 = param_2;
  if ((x97 * (x97 + -1) & 1U) == 0 || y98 < 10) goto LAB_00409886;
  do {
    ppiVar7 = local_a8 + -6;
    local_a8[-2] = local_38;
    local_a8[-4] = (int *)this;
    *ppiVar7 = param_2;
LAB_00409886:
    local_a8 = ppiVar7 + -0x16;
    ppiVar7[-2] = local_38;
    ppiVar7[-4] = (int *)this;
    ppiVar7[-6] = param_2;
    local_60 = (int **)ppiVar7[-4];
    local_50 = ppiVar7 + -8;
    local_58 = ppiVar7 + -2;
    local_68 = ppiVar7 + -6;
    local_69 = local_60[1] != local_60[2];
    local_78 = ppiVar7 + -10;
    local_80 = ppiVar7 + -0xc;
    local_88 = ppiVar7 + -0xe;
    local_90 = ppiVar7 + -0x10;
    local_98 = ppiVar7 + -0x12;
    local_a0 = ppiVar7 + -0x14;
  } while ((x97 * (x97 + -1) & 1U) != 0 && 9 < y98);
  if (local_60[1] != local_60[2]) {
    if ((x97 * (x97 + -1) & 1U) == 0 || y98 < 10) goto LAB_004099f3;
    do {
      piVar5 = local_60[1];
      piVar1 = local_60[1];
      ppiVar7[-0x17] = (int *)0x40acd1;
      __gnu_cxx::__alloc_traits<std::allocator<int>>::construct_int_
                ((allocator *)local_60,piVar5,piVar1 + -1);
      local_60[1] = local_60[1] + 1;
      *(int *)local_50 = **local_68;
      ppiVar7[-0x17] = (int *)0x40acfe;
      ppiVar4 = (int **)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        base((__normal_iterator_int__std__vector_int_std__allocator_int___ *)
                             local_58);
      piVar5 = *ppiVar4;
      piVar1 = local_60[1];
      piVar2 = local_60[1];
      ppiVar7[-0x17] = (int *)0x40ad23;
      local_1f8 = copy_backward_int__int__(piVar5,piVar1 + -2,piVar2 + -1);
      local_1fc = *(int *)local_50;
      ppiVar7[-0x17] = (int *)0x40ad41;
      piVar5 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                      operator_((__normal_iterator_int__std__vector_int_std__allocator_int___ *)
                                local_58);
      *piVar5 = local_1fc;
LAB_004099f3:
      piVar5 = local_60[1];
      piVar1 = local_60[1];
      ppiVar7[-0x17] = (int *)0x409a12;
      __gnu_cxx::__alloc_traits<std::allocator<int>>::construct_int_
                ((allocator *)local_60,piVar5,piVar1 + -1);
      local_60[1] = local_60[1] + 1;
      *(int *)local_50 = **local_68;
      ppiVar7[-0x17] = (int *)0x409a3f;
      ppiVar4 = (int **)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        base((__normal_iterator_int__std__vector_int_std__allocator_int___ *)
                             local_58);
      piVar5 = *ppiVar4;
      piVar1 = local_60[1];
      piVar2 = local_60[1];
      ppiVar7[-0x17] = (int *)0x409a64;
      local_b0 = copy_backward_int__int__(piVar5,piVar1 + -2,piVar2 + -1);
      local_b4 = *(int *)local_50;
      ppiVar7[-0x17] = (int *)0x409a82;
      piVar5 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                      operator_((__normal_iterator_int__std__vector_int_std__allocator_int___ *)
                                local_58);
      *piVar5 = local_b4;
    } while ((x97 * (x97 + -1) & 1U) != 0 && 9 < y98);
  }
  else {
    if ((x97 * (x97 + -1) & 1U) == 0 || y98 < 10) goto LAB_00409b20;
    do {
      ppiVar7[-0x17] = (int *)0x40ad6a;
      piVar5 = (int *)_M_check_len((vector_int_std__allocator_int__ *)local_60,1,
                                   "vector::_M_insert_aux");
      *local_78 = piVar5;
      ppiVar7[-0x17] = (int *)0x40ad7a;
      piVar5 = (int *)begin((vector_int_std__allocator_int__ *)local_60);
      ppiVar4 = local_88;
      *local_88 = piVar5;
      ppiVar7[-0x17] = (int *)0x40ad8d;
      dVar3 = __gnu_cxx::operator_((__normal_iterator *)local_58,(__normal_iterator *)ppiVar4);
      *local_80 = (int *)CONCAT44(extraout_var_00,dVar3);
      piVar5 = *local_78;
      ppiVar7[-0x17] = (int *)0x40ada7;
      piVar5 = (int *)_Vector_base<int,std::allocator<int>>::_M_allocate
                                ((_Vector_base_int_std__allocator_int__ *)local_60,(ulong)piVar5);
      ppiVar4 = local_90;
      *local_90 = piVar5;
      *local_98 = *ppiVar4;
LAB_00409b20:
      ppiVar7[-0x17] = (int *)0x409b3a;
      piVar5 = (int *)_M_check_len((vector_int_std__allocator_int__ *)local_60,1,
                                   "vector::_M_insert_aux");
      *local_78 = piVar5;
      ppiVar7[-0x17] = (int *)0x409b4a;
      piVar5 = (int *)begin((vector_int_std__allocator_int__ *)local_60);
      ppiVar4 = local_88;
      *local_88 = piVar5;
      ppiVar7[-0x17] = (int *)0x409b5d;
      dVar3 = __gnu_cxx::operator_((__normal_iterator *)local_58,(__normal_iterator *)ppiVar4);
      *local_80 = (int *)CONCAT44(extraout_var,dVar3);
      piVar5 = *local_78;
      ppiVar7[-0x17] = (int *)0x409b77;
      piVar5 = (int *)_Vector_base<int,std::allocator<int>>::_M_allocate
                                ((_Vector_base_int_std__allocator_int__ *)local_60,(ulong)piVar5);
      ppiVar4 = local_90;
      *local_90 = piVar5;
      *local_98 = *ppiVar4;
      local_d0 = *ppiVar4 + (long)*local_80;
      local_c0 = *local_68;
      local_c8 = local_60;
    } while ((x97 * (x97 + -1) & 1U) != 0 && 9 < y98);
                    // try { // try from 00409c0a to 0040a0af has its CatchHandler @ 0040a15a
    ppiVar7[-0x17] = (int *)0x409c24;
    __gnu_cxx::__alloc_traits<std::allocator<int>>::construct_int_
              ((allocator *)local_60,local_d0,local_c0);
    if ((x97 * (x97 + -1) & 1U) == 0 || y98 < 10) goto LAB_00409c6c;
    do {
      *local_98 = (int *)0x0;
LAB_00409c6c:
      *local_98 = (int *)0x0;
      local_d8 = *local_60;
    } while ((x97 * (x97 + -1) & 1U) != 0 && 9 < y98);
    ppiVar7[-0x17] = (int *)0x409cd9;
    local_e0 = (int **)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::base
                                 ((__normal_iterator_int__std__vector_int_std__allocator_int___ *)
                                  local_58);
    do {
      local_e8 = *local_e0;
      local_f0 = *local_90;
      local_f8 = local_60;
    } while ((x97 * (x97 + -1) & 1U) != 0 && 9 < y98);
    ppiVar7[-0x17] = (int *)0x409dad;
    local_100 = (allocator *)
                _Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator
                          ((_Vector_base_int_std__allocator_int__ *)local_60);
    do {
    } while ((x97 * (x97 + -1) & 1U) != 0 && 9 < y98);
    ppiVar7[-0x17] = (int *)0x409e60;
    local_108 = __uninitialized_move_if_noexcept_a_int__int__std__allocator_int__
                          (local_d8,local_e8,local_f0,local_100);
    if ((x97 * (x97 + -1) & 1U) == 0 || y98 < 10) goto LAB_00409eaf;
    do {
      ppiVar4 = local_98;
      *local_98 = local_108;
      *ppiVar4 = *ppiVar4 + 1;
LAB_00409eaf:
      ppiVar4 = local_98;
      *local_98 = local_108;
      *ppiVar4 = *ppiVar4 + 1;
    } while ((x97 * (x97 + -1) & 1U) != 0 && 9 < y98);
    ppiVar7[-0x17] = (int *)0x409f1e;
    local_110 = (int **)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        base((__normal_iterator_int__std__vector_int_std__allocator_int___ *)
                             local_58);
    do {
      local_118 = *local_110;
      local_120 = local_60;
      local_128 = local_60[1];
      local_130 = *local_98;
    } while ((x97 * (x97 + -1) & 1U) != 0 && 9 < y98);
    ppiVar7[-0x17] = (int *)0x409ffd;
    local_138 = (allocator *)
                _Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator
                          ((_Vector_base_int_std__allocator_int__ *)local_60);
    do {
    } while ((x97 * (x97 + -1) & 1U) != 0 && 9 < y98);
    ppiVar7[-0x17] = (int *)0x40a0b0;
    local_140 = __uninitialized_move_if_noexcept_a_int__int__std__allocator_int__
                          (local_118,local_128,local_130,local_138);
    if ((x97 * (x97 + -1) & 1U) == 0 || y98 < 10) goto LAB_0040a0ff;
    do {
      *local_98 = local_140;
LAB_0040a0ff:
      *local_98 = local_140;
    } while ((x97 * (x97 + -1) & 1U) != 0 && 9 < y98);
    if ((x97 * (x97 + -1) & 1U) == 0 || y98 < 10) goto LAB_0040a926;
    do {
      local_210 = *local_60;
      local_218 = local_60[1];
      ppiVar7[-0x17] = (int *)0x40aebf;
      paVar6 = (allocator *)
               _Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator
                         ((_Vector_base_int_std__allocator_int__ *)local_60);
      ppiVar7[-0x17] = (int *)0x40aed5;
      _Destroy_int__int_(local_210,local_218,paVar6);
      piVar5 = *local_60;
      local_220 = (long)local_60[2] - (long)*local_60 >> 2;
      ppiVar7[-0x17] = (int *)0x40af04;
      _Vector_base<int,std::allocator<int>>::_M_deallocate
                ((_Vector_base_int_std__allocator_int__ *)local_60,piVar5,local_220);
      *local_60 = *local_90;
      local_60[1] = *local_98;
      local_60[2] = *local_90 + (long)*local_78;
LAB_0040a926:
      local_1c0 = *local_60;
      local_1c8 = local_60[1];
      ppiVar7[-0x17] = (int *)0x40a947;
      paVar6 = (allocator *)
               _Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator
                         ((_Vector_base_int_std__allocator_int__ *)local_60);
      ppiVar7[-0x17] = (int *)0x40a95d;
      _Destroy_int__int_(local_1c0,local_1c8,paVar6);
      piVar5 = *local_60;
      local_1d0 = (long)local_60[2] - (long)*local_60 >> 2;
      ppiVar7[-0x17] = (int *)0x40a98c;
      _Vector_base<int,std::allocator<int>>::_M_deallocate
                ((_Vector_base_int_std__allocator_int__ *)local_60,piVar5,local_1d0);
      *local_60 = *local_90;
      local_60[1] = *local_98;
      local_60[2] = *local_90 + (long)*local_78;
    } while ((x97 * (x97 + -1) & 1U) != 0 && 9 < y98);
  }
  do {
  } while ((x97 * (x97 + -1) & 1U) != 0 && 9 < y98);
  return;
}



// std::vector<int, std::allocator<int>>::end()

vector_int_std__allocator_int__ * __thiscall
std::vector<int,std::allocator<int>>::end(vector_int_std__allocator_int__ *this)

{
  vector_int_std__allocator_int__ **ppvVar1;
  vector_int_std__allocator_int__ **ppvVar2;
  vector_int_std__allocator_int__ *local_28;
  vector_int_std__allocator_int__ **local_20;
  vector_int_std__allocator_int__ *local_18;
  
  ppvVar1 = &local_28;
  ppvVar2 = &local_28;
  local_18 = this;
  if ((x99 * (x99 + -1) & 1U) == 0 || y100 < 10) goto LAB_0040afc0;
  do {
    ppvVar1 = ppvVar2 + -4;
    *ppvVar1 = local_18;
    ppvVar2[-5] = (vector_int_std__allocator_int__ *)0x40b086;
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::__normal_iterator
              ((__normal_iterator_int__std__vector_int_std__allocator_int___ *)(ppvVar2 + -2),
               (int **)(*ppvVar1 + 8));
LAB_0040afc0:
    local_20 = ppvVar1 + -2;
    ppvVar2 = ppvVar1 + -4;
    *ppvVar2 = local_18;
    ppvVar1[-5] = (vector_int_std__allocator_int__ *)0x40aff4;
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::__normal_iterator
              ((__normal_iterator_int__std__vector_int_std__allocator_int___ *)local_20,
               (int **)(*ppvVar2 + 8));
    local_28 = *local_20;
  } while ((x99 * (x99 + -1) & 1U) != 0 && 9 < y100);
  return local_28;
}



// __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>>>::__normal_iterator(int*
// const&)

void __thiscall
__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::__normal_iterator
          (__normal_iterator_int__std__vector_int_std__allocator_int___ *this,int **param_1)

{
  int ***pppiVar1;
  int ***pppiVar2;
  int **local_18;
  int *local_10;
  
  pppiVar1 = &local_18;
  pppiVar2 = &local_18;
  local_10 = (int *)this;
  local_18 = param_1;
  if ((x101 * (x101 + -1) & 1U) == 0 || y102 < 10) goto LAB_0040b0e3;
  do {
    pppiVar1 = (int ***)((int **)pppiVar2 + -4);
    ((int **)pppiVar2)[-2] = local_10;
    *pppiVar1 = local_18;
    *(int **)((int **)pppiVar2)[-2] = **pppiVar1;
LAB_0040b0e3:
    pppiVar2 = (int ***)((int **)pppiVar1 + -4);
    ((int **)pppiVar1)[-2] = local_10;
    *pppiVar2 = local_18;
    *(int **)((int **)pppiVar1)[-2] = **pppiVar2;
  } while ((x101 * (x101 + -1) & 1U) != 0 && 9 < y102);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::copy_backward<int*, int*>(int*, int*, int*)

int * std::copy_backward_int__int__(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  iterator_type iVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  int **ppiVar3;
  int **ppiVar4;
  undefined auStack120 [8];
  int *local_70;
  int *local_68;
  int **local_60;
  int **local_58;
  int *local_50;
  int *local_48;
  int **local_40;
  int **local_38;
  int *local_30;
  int *local_28;
  int *local_20;
  
  ppiVar3 = (int **)auStack120;
  ppiVar4 = (int **)auStack120;
  local_30 = param_3;
  local_28 = param_1;
  local_20 = param_2;
  if ((x103 * (x103 + -1) & 1U) == 0 || y104 < 10) goto LAB_0040b1fd;
  do {
    local_58 = ppiVar4 + -4;
    ppiVar3 = ppiVar4 + -6;
    ppiVar4[-2] = local_28;
    *local_58 = local_20;
    *ppiVar3 = local_30;
    ppiVar4[-7] = (int *)0x40b302;
    local_60 = ppiVar3;
    iVar2 = __miter_base_int__(ppiVar4[-2]);
    local_68 = (int *)CONCAT44(extraout_var_01,iVar2);
    piVar1 = *local_58;
    ppiVar4[-7] = (int *)0x40b312;
    iVar2 = __miter_base_int__(piVar1);
    piVar1 = *local_60;
    ppiVar4[-7] = (int *)0x40b325;
    local_70 = __copy_move_backward_a2_false_int__int__
                         (local_68,(int *)CONCAT44(extraout_var_02,iVar2),piVar1);
LAB_0040b1fd:
    local_38 = ppiVar3 + -4;
    ppiVar4 = ppiVar3 + -6;
    ppiVar3[-2] = local_28;
    *local_38 = local_20;
    *ppiVar4 = local_30;
    ppiVar3[-7] = (int *)0x40b240;
    local_40 = ppiVar4;
    iVar2 = __miter_base_int__(ppiVar3[-2]);
    local_48 = (int *)CONCAT44(extraout_var,iVar2);
    piVar1 = *local_38;
    ppiVar3[-7] = (int *)0x40b250;
    iVar2 = __miter_base_int__(piVar1);
    piVar1 = *local_40;
    ppiVar3[-7] = (int *)0x40b263;
    local_50 = __copy_move_backward_a2_false_int__int__
                         (local_48,(int *)CONCAT44(extraout_var_00,iVar2),piVar1);
  } while ((x103 * (x103 + -1) & 1U) != 0 && 9 < y104);
  return local_50;
}



// __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>>>::base() const

__normal_iterator_int__std__vector_int_std__allocator_int___ * __thiscall
__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::base
          (__normal_iterator_int__std__vector_int_std__allocator_int___ *this)

{
  __normal_iterator_int__std__vector_int_std__allocator_int___ **pp_Var1;
  __normal_iterator_int__std__vector_int_std__allocator_int___ **pp_Var2;
  undefined local_18 [16];
  
  pp_Var1 = (__normal_iterator_int__std__vector_int_std__allocator_int___ **)local_18;
  pp_Var2 = (__normal_iterator_int__std__vector_int_std__allocator_int___ **)local_18;
  if ((x105 * (x105 + -1) & 1U) == 0 || y106 < 10) goto LAB_0040b37f;
  do {
    pp_Var1 = pp_Var2 + -2;
    *pp_Var1 = this;
LAB_0040b37f:
    pp_Var2 = pp_Var1 + -2;
    *pp_Var2 = this;
  } while ((x105 * (x105 + -1) & 1U) != 0 && 9 < y106);
  return *pp_Var2;
}



// __gnu_cxx::__normal_iterator<int*, std::vector<int,
// std::allocator<int>>>::TEMPNAMEPLACEHOLDERVALUE() const

undefined8 __thiscall
__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator_
          (__normal_iterator_int__std__vector_int_std__allocator_int___ *this)

{
  __normal_iterator_int__std__vector_int_std__allocator_int___ **pp_Var1;
  __normal_iterator_int__std__vector_int_std__allocator_int___ **pp_Var2;
  undefined local_18 [16];
  
  pp_Var1 = (__normal_iterator_int__std__vector_int_std__allocator_int___ **)local_18;
  pp_Var2 = (__normal_iterator_int__std__vector_int_std__allocator_int___ **)local_18;
  if ((x107 * (x107 + -1) & 1U) == 0 || y108 < 10) goto LAB_0040b44f;
  do {
    pp_Var1 = pp_Var2 + -2;
    *pp_Var1 = this;
LAB_0040b44f:
    pp_Var2 = pp_Var1 + -2;
    *pp_Var2 = this;
  } while ((x107 * (x107 + -1) & 1U) != 0 && 9 < y108);
  return *(undefined8 *)*pp_Var2;
}



// std::vector<int, std::allocator<int>>::_M_check_len(unsigned long, char const*) const

char * __thiscall
std::vector<int,std::allocator<int>>::_M_check_len
          (vector_int_std__allocator_int__ *this,ulong param_1,char *param_2)

{
  long lVar1;
  char *pcVar2;
  ulong *puVar3;
  char **ppcVar4;
  char **ppcVar5;
  undefined auStack264 [8];
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  vector_int_std__allocator_int__ *local_d0;
  char *local_b8;
  char *local_b0;
  undefined local_a1;
  char *local_a0;
  undefined local_91;
  char *local_90;
  long local_88;
  undefined local_79;
  long local_78;
  vector_int_std__allocator_int__ *local_70;
  char **local_68;
  char **local_60;
  char **local_58;
  char **local_50;
  char *local_48;
  vector_int_std__allocator_int__ *local_40;
  char *local_38;
  
  ppcVar4 = (char **)auStack264;
  ppcVar5 = (char **)auStack264;
  local_38 = (char *)param_1;
  local_40 = this;
  local_48 = param_2;
  if ((x109 * (x109 + -1) & 1U) == 0 || y110 < 10) goto LAB_0040b536;
  do {
    ppcVar4 = ppcVar5 + -6;
    ppcVar5[-2] = (char *)local_40;
    ppcVar5[-4] = local_38;
    *ppcVar4 = local_48;
    local_d0 = (vector_int_std__allocator_int__ *)ppcVar5[-2];
    ppcVar5[-7] = (char *)0x40bab6;
    local_d8 = max_size(local_d0);
    ppcVar5[-7] = (char *)0x40bac9;
    local_e0 = size(local_d0);
LAB_0040b536:
    ppcVar5 = ppcVar4 + -10;
    ppcVar4[-2] = (char *)local_40;
    ppcVar4[-4] = local_38;
    ppcVar4[-6] = local_48;
    local_70 = (vector_int_std__allocator_int__ *)ppcVar4[-2];
    local_50 = ppcVar5;
    local_58 = ppcVar4 + -4;
    local_60 = ppcVar4 + -6;
    local_68 = ppcVar4 + -8;
    ppcVar4[-0xb] = (char *)0x40b59c;
    local_78 = max_size(local_70);
    ppcVar4[-0xb] = (char *)0x40b5a9;
    lVar1 = size(local_70);
    local_79 = (char *)(local_78 - lVar1) < *local_58;
  } while ((x109 * (x109 + -1) & 1U) != 0 && 9 < y110);
  if ((bool)local_79) {
    if ((x109 * (x109 + -1) & 1U) == 0 || y110 < 10) goto LAB_0040b65c;
    do {
      pcVar2 = *local_60;
      ppcVar4[-0xb] = (char *)0x40bae1;
      std::__throw_length_error(pcVar2);
LAB_0040b65c:
      pcVar2 = *local_60;
      ppcVar4[-0xb] = (char *)0x40b668;
      std::__throw_length_error(pcVar2);
    } while ((x109 * (x109 + -1) & 1U) != 0 && 9 < y110);
  }
  if ((x109 * (x109 + -1) & 1U) == 0 || y110 < 10) goto LAB_0040b6f0;
  do {
    ppcVar4[-0xb] = (char *)0x40baef;
    local_e8 = size(local_70);
    ppcVar4[-0xb] = (char *)0x40baff;
    pcVar2 = (char *)size(local_70);
    ppcVar5 = local_50;
    *local_50 = pcVar2;
    ppcVar4[-0xb] = (char *)0x40bb0f;
    puVar3 = max_unsigned_long_((ulong *)ppcVar5,(ulong *)local_58);
    *local_68 = (char *)(local_e8 + *puVar3);
    ppcVar4[-0xb] = (char *)0x40bb2c;
    local_f0 = size(local_70);
LAB_0040b6f0:
    ppcVar4[-0xb] = (char *)0x40b6f9;
    local_88 = size(local_70);
    ppcVar4[-0xb] = (char *)0x40b706;
    pcVar2 = (char *)size(local_70);
    ppcVar5 = local_50;
    *local_50 = pcVar2;
    ppcVar4[-0xb] = (char *)0x40b716;
    puVar3 = max_unsigned_long_((ulong *)ppcVar5,(ulong *)local_58);
    ppcVar5 = local_68;
    *local_68 = (char *)(local_88 + *puVar3);
    local_90 = *ppcVar5;
    ppcVar4[-0xb] = (char *)0x40b737;
    pcVar2 = (char *)size(local_70);
    local_91 = local_90 < pcVar2;
  } while ((x109 * (x109 + -1) & 1U) != 0 && 9 < y110);
  if (local_90 >= pcVar2) {
    if ((x109 * (x109 + -1) & 1U) == 0 || y110 < 10) goto LAB_0040b7ea;
    do {
      ppcVar4[-0xb] = (char *)0x40bb41;
      local_f8 = max_size(local_70);
LAB_0040b7ea:
      local_a0 = *local_68;
      ppcVar4[-0xb] = (char *)0x40b801;
      pcVar2 = (char *)max_size(local_70);
      local_a1 = pcVar2 < local_a0;
    } while ((x109 * (x109 + -1) & 1U) != 0 && 9 < y110);
    if (pcVar2 >= local_a0) {
      do {
        local_b8 = *local_68;
      } while ((x109 * (x109 + -1) & 1U) != 0 && 9 < y110);
      goto LAB_0040ba18;
    }
  }
  if ((x109 * (x109 + -1) & 1U) == 0 || y110 < 10) goto LAB_0040b8b4;
  do {
    ppcVar4[-0xb] = (char *)0x40bb56;
    local_100 = max_size(local_70);
LAB_0040b8b4:
    ppcVar4[-0xb] = (char *)0x40b8bd;
    local_b8 = (char *)max_size(local_70);
    local_b0 = local_b8;
  } while ((x109 * (x109 + -1) & 1U) != 0 && 9 < y110);
LAB_0040ba18:
  do {
  } while ((x109 * (x109 + -1) & 1U) != 0 && 9 < y110);
  return local_b8;
}



// __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>>>::difference_type
// __gnu_cxx::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<int*, std::vector<int,
// std::allocator<int>>> const&, __gnu_cxx::__normal_iterator<int*, std::vector<int,
// std::allocator<int>>> const&)

difference_type __gnu_cxx::operator_(__normal_iterator *param_1,__normal_iterator *param_2)

{
  __normal_iterator *p_Var1;
  long *plVar2;
  __normal_iterator **pp_Var3;
  __normal_iterator **pp_Var4;
  undefined auStack88 [8];
  undefined8 local_50;
  undefined8 local_48;
  __normal_iterator **local_40;
  long local_38;
  long local_30;
  __normal_iterator **local_28;
  __normal_iterator *local_20;
  __normal_iterator *local_18;
  
  pp_Var3 = (__normal_iterator **)auStack88;
  pp_Var4 = (__normal_iterator **)auStack88;
  local_20 = param_2;
  local_18 = param_1;
  if ((x111 * (x111 + -1) & 1U) == 0 || y112 < 10) goto LAB_0040bbc4;
  do {
    pp_Var3 = pp_Var4 + -4;
    pp_Var4[-2] = local_18;
    *pp_Var3 = local_20;
    pp_Var4[-5] = (__normal_iterator *)0x40bc9c;
    local_40 = pp_Var3;
    local_48 = __normal_iterator<int*,std::vector<int,std::allocator<int>>>::base
                         ((__normal_iterator_int__std__vector_int_std__allocator_int___ *)
                          pp_Var4[-2]);
    p_Var1 = *local_40;
    pp_Var4[-5] = (__normal_iterator *)0x40bcac;
    local_50 = __normal_iterator<int*,std::vector<int,std::allocator<int>>>::base
                         ((__normal_iterator_int__std__vector_int_std__allocator_int___ *)p_Var1);
LAB_0040bbc4:
    pp_Var4 = pp_Var3 + -4;
    pp_Var3[-2] = local_18;
    *pp_Var4 = local_20;
    pp_Var3[-5] = (__normal_iterator *)0x40bbf2;
    local_28 = pp_Var4;
    plVar2 = (long *)__normal_iterator<int*,std::vector<int,std::allocator<int>>>::base
                               ((__normal_iterator_int__std__vector_int_std__allocator_int___ *)
                                pp_Var3[-2]);
    local_30 = *plVar2;
    p_Var1 = *local_28;
    pp_Var3[-5] = (__normal_iterator *)0x40bc05;
    plVar2 = (long *)__normal_iterator<int*,std::vector<int,std::allocator<int>>>::base
                               ((__normal_iterator_int__std__vector_int_std__allocator_int___ *)
                                p_Var1);
    local_38 = local_30 - *plVar2 >> 2;
  } while ((x111 * (x111 + -1) & 1U) != 0 && 9 < y112);
  return (difference_type)local_38;
}



// std::vector<int, std::allocator<int>>::begin()

int * __thiscall std::vector<int,std::allocator<int>>::begin(vector_int_std__allocator_int__ *this)

{
  int **ppiVar1;
  int **ppiVar2;
  int *local_28;
  int **local_20;
  int *local_18;
  
  ppiVar1 = &local_28;
  ppiVar2 = &local_28;
  local_18 = (int *)this;
  if ((x113 * (x113 + -1) & 1U) == 0 || y114 < 10) goto LAB_0040bd10;
  do {
    ppiVar1 = ppiVar2 + -4;
    *ppiVar1 = local_18;
    ppiVar2[-5] = (int *)0x40bdc8;
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::__normal_iterator
              ((__normal_iterator_int__std__vector_int_std__allocator_int___ *)(ppiVar2 + -2),
               (int **)*ppiVar1);
LAB_0040bd10:
    local_20 = ppiVar1 + -2;
    ppiVar2 = ppiVar1 + -4;
    *ppiVar2 = local_18;
    ppiVar1[-5] = (int *)0x40bd3d;
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::__normal_iterator
              ((__normal_iterator_int__std__vector_int_std__allocator_int___ *)local_20,
               (int **)*ppiVar2);
    local_28 = *local_20;
  } while ((x113 * (x113 + -1) & 1U) != 0 && 9 < y114);
  return local_28;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::__uninitialized_move_if_noexcept_a<int*, int*, std::allocator<int>>(int*, int*, int*,
// std::allocator<int>&)

int * std::__uninitialized_move_if_noexcept_a_int__int__std__allocator_int__
                (int *param_1,int *param_2,int *param_3,allocator *param_4)

{
  int **ppiVar1;
  int **ppiVar2;
  int *local_58;
  int *local_50;
  allocator *local_48;
  int *local_40;
  int *local_38;
  int *local_30;
  
  ppiVar1 = &local_58;
  ppiVar2 = &local_58;
  local_48 = param_4;
  local_40 = param_1;
  local_38 = param_2;
  local_30 = param_3;
  if ((x115 * (x115 + -1) & 1U) == 0 || y116 < 10) goto LAB_0040be37;
  do {
    ppiVar1 = (int **)((allocator **)ppiVar2 + -8);
    ((allocator **)ppiVar2)[-2] = (allocator *)local_40;
    ((allocator **)ppiVar2)[-4] = (allocator *)local_38;
    ((allocator **)ppiVar2)[-6] = (allocator *)local_30;
    *ppiVar1 = (int *)local_48;
    ((allocator **)ppiVar2)[-9] = (allocator *)0x40bf47;
    local_58 = __uninitialized_copy_a_int__int__int_
                         ((int *)((allocator **)ppiVar2)[-2],(int *)((allocator **)ppiVar2)[-4],
                          (int *)((allocator **)ppiVar2)[-6],(allocator *)*ppiVar1);
LAB_0040be37:
    ppiVar2 = (int **)((allocator **)ppiVar1 + -8);
    ((allocator **)ppiVar1)[-2] = (allocator *)local_40;
    ((allocator **)ppiVar1)[-4] = (allocator *)local_38;
    ((allocator **)ppiVar1)[-6] = (allocator *)local_30;
    *ppiVar2 = (int *)local_48;
    ((allocator **)ppiVar1)[-9] = (allocator *)0x40be8f;
    local_50 = __uninitialized_copy_a_int__int__int_
                         ((int *)((allocator **)ppiVar1)[-2],(int *)((allocator **)ppiVar1)[-4],
                          (int *)((allocator **)ppiVar1)[-6],(allocator *)*ppiVar2);
  } while ((x115 * (x115 + -1) & 1U) != 0 && 9 < y116);
  return local_50;
}



// __gnu_cxx::__alloc_traits<std::allocator<int>>::destroy(std::allocator<int>&, int*)

void __gnu_cxx::__alloc_traits<std::allocator<int>>::destroy(allocator *param_1,int *param_2)

{
  int **ppiVar1;
  int **ppiVar2;
  undefined auStack40 [8];
  int *local_20;
  int *local_18;
  
  ppiVar1 = (int **)auStack40;
  ppiVar2 = (int **)auStack40;
  local_20 = param_2;
  local_18 = (int *)param_1;
  if ((x117 * (x117 + -1) & 1U) == 0 || y118 < 10) goto LAB_0040bfa4;
  do {
    ppiVar1 = ppiVar2 + -4;
    ppiVar2[-2] = local_18;
    *ppiVar1 = local_20;
    ppiVar2[-5] = (int *)0x40c057;
    new_allocator<int>::destroy((new_allocator_int_ *)ppiVar2[-2],*ppiVar1);
LAB_0040bfa4:
    ppiVar2 = ppiVar1 + -4;
    ppiVar1[-2] = local_18;
    *ppiVar2 = local_20;
    ppiVar1[-5] = (int *)0x40bfd4;
    new_allocator<int>::destroy((new_allocator_int_ *)ppiVar1[-2],*ppiVar2);
  } while ((x117 * (x117 + -1) & 1U) != 0 && 9 < y118);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// void std::_Destroy<int*, int>(int*, int*, std::allocator<int>&)

void std::_Destroy_int__int_(int *param_1,int *param_2,allocator *param_3)

{
  allocator **ppaVar1;
  allocator **ppaVar2;
  undefined auStack56 [8];
  allocator *local_30;
  int *local_28;
  int *local_20;
  
  ppaVar1 = (allocator **)auStack56;
  ppaVar2 = (allocator **)auStack56;
  local_30 = param_3;
  local_28 = param_1;
  local_20 = param_2;
  if ((x119 * (x119 + -1) & 1U) == 0 || y120 < 10) goto LAB_0040c0bd;
  do {
    ppaVar1 = ppaVar2 + -6;
    ppaVar2[-2] = (allocator *)local_28;
    ppaVar2[-4] = (allocator *)local_20;
    *ppaVar1 = local_30;
    ppaVar2[-7] = (allocator *)0x40c18d;
    _Destroy_int__((int *)ppaVar2[-2],(int *)ppaVar2[-4]);
LAB_0040c0bd:
    ppaVar2 = ppaVar1 + -6;
    ppaVar1[-2] = (allocator *)local_28;
    ppaVar1[-4] = (allocator *)local_20;
    *ppaVar2 = local_30;
    ppaVar1[-7] = (allocator *)0x40c0fb;
    _Destroy_int__((int *)ppaVar1[-2],(int *)ppaVar1[-4]);
  } while ((x119 * (x119 + -1) & 1U) != 0 && 9 < y120);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// void std::_Destroy<int*>(int*, int*)

void std::_Destroy_int__(int *param_1,int *param_2)

{
  int **ppiVar1;
  int **ppiVar2;
  undefined auStack40 [8];
  int *local_20;
  int *local_18;
  
  ppiVar1 = (int **)auStack40;
  ppiVar2 = (int **)auStack40;
  local_20 = param_2;
  local_18 = param_1;
  if ((x121 * (x121 + -1) & 1U) == 0 || y122 < 10) goto LAB_0040c1f4;
  do {
    ppiVar1 = ppiVar2 + -4;
    ppiVar2[-2] = local_18;
    *ppiVar1 = local_20;
    ppiVar2[-5] = (int *)0x40c2a1;
    _Destroy_aux<true>::__destroy_int__(ppiVar2[-2],*ppiVar1);
LAB_0040c1f4:
    ppiVar2 = ppiVar1 + -4;
    ppiVar1[-2] = local_18;
    *ppiVar2 = local_20;
    ppiVar1[-5] = (int *)0x40c221;
    _Destroy_aux<true>::__destroy_int__(ppiVar1[-2],*ppiVar2);
  } while ((x121 * (x121 + -1) & 1U) != 0 && 9 < y122);
  return;
}



// void std::_Destroy_aux<true>::__destroy<int*>(int*, int*)

void std::_Destroy_aux<true>::__destroy_int__(int *param_1,int *param_2)

{
  int **ppiVar1;
  int **ppiVar2;
  int *local_18;
  int *local_10;
  
  ppiVar1 = &local_18;
  ppiVar2 = &local_18;
  local_18 = param_2;
  local_10 = param_1;
  if ((x123 * (x123 + -1) & 1U) == 0 || y124 < 10) goto LAB_0040c303;
  do {
    ppiVar1 = ppiVar2 + -4;
    ppiVar2[-2] = local_10;
    *ppiVar1 = local_18;
LAB_0040c303:
    ppiVar2 = ppiVar1 + -4;
    ppiVar1[-2] = local_10;
    *ppiVar2 = local_18;
  } while ((x123 * (x123 + -1) & 1U) != 0 && 9 < y124);
  return;
}



// __gnu_cxx::new_allocator<int>::destroy(int*)

void __thiscall __gnu_cxx::new_allocator<int>::destroy(new_allocator_int_ *this,int *param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  int *local_18;
  int *local_10;
  
  ppiVar1 = &local_18;
  ppiVar2 = &local_18;
  local_18 = param_1;
  local_10 = (int *)this;
  if ((x125 * (x125 + -1) & 1U) == 0 || y126 < 10) goto LAB_0040c3f3;
  do {
    ppiVar1 = ppiVar2 + -4;
    ppiVar2[-2] = local_10;
    *ppiVar1 = local_18;
LAB_0040c3f3:
    ppiVar2 = ppiVar1 + -4;
    ppiVar1[-2] = local_10;
    *ppiVar2 = local_18;
  } while ((x125 * (x125 + -1) & 1U) != 0 && 9 < y126);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::__uninitialized_copy_a<int*, int*, int>(int*, int*, int*, std::allocator<int>&)

int * std::__uninitialized_copy_a_int__int__int_
                (int *param_1,int *param_2,int *param_3,allocator *param_4)

{
  int **ppiVar1;
  int **ppiVar2;
  int *local_58;
  int *local_50;
  allocator *local_48;
  int *local_40;
  int *local_38;
  int *local_30;
  
  ppiVar1 = &local_58;
  ppiVar2 = &local_58;
  local_48 = param_4;
  local_40 = param_1;
  local_38 = param_2;
  local_30 = param_3;
  if ((x127 * (x127 + -1) & 1U) == 0 || y128 < 10) goto LAB_0040c4f7;
  do {
    ppiVar1 = (int **)((allocator **)ppiVar2 + -8);
    ((allocator **)ppiVar2)[-2] = (allocator *)local_40;
    ((allocator **)ppiVar2)[-4] = (allocator *)local_38;
    ((allocator **)ppiVar2)[-6] = (allocator *)local_30;
    *ppiVar1 = (int *)local_48;
    ((allocator **)ppiVar2)[-9] = (allocator *)0x40c5fb;
    local_58 = uninitialized_copy_int__int__
                         ((int *)((allocator **)ppiVar2)[-2],(int *)((allocator **)ppiVar2)[-4],
                          (int *)((allocator **)ppiVar2)[-6]);
LAB_0040c4f7:
    ppiVar2 = (int **)((allocator **)ppiVar1 + -8);
    ((allocator **)ppiVar1)[-2] = (allocator *)local_40;
    ((allocator **)ppiVar1)[-4] = (allocator *)local_38;
    ((allocator **)ppiVar1)[-6] = (allocator *)local_30;
    *ppiVar2 = (int *)local_48;
    ((allocator **)ppiVar1)[-9] = (allocator *)0x40c549;
    local_50 = uninitialized_copy_int__int__
                         ((int *)((allocator **)ppiVar1)[-2],(int *)((allocator **)ppiVar1)[-4],
                          (int *)((allocator **)ppiVar1)[-6]);
  } while ((x127 * (x127 + -1) & 1U) != 0 && 9 < y128);
  return local_50;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::uninitialized_copy<int*, int*>(int*, int*, int*)

int * std::uninitialized_copy_int__int__(int *param_1,int *param_2,int *param_3)

{
  int **ppiVar1;
  int **ppiVar2;
  undefined auStack72 [8];
  int *local_40;
  int *local_38;
  int *local_30;
  int *local_28;
  int *local_20;
  
  ppiVar1 = (int **)auStack72;
  ppiVar2 = (int **)auStack72;
  local_30 = param_3;
  local_28 = param_1;
  local_20 = param_2;
  if ((x129 * (x129 + -1) & 1U) == 0 || y130 < 10) goto LAB_0040c66d;
  do {
    ppiVar1 = ppiVar2 + -6;
    ppiVar2[-2] = local_28;
    ppiVar2[-4] = local_20;
    *ppiVar1 = local_30;
    ppiVar2[-7] = (int *)0x40c74b;
    local_40 = __uninitialized_copy<true>::__uninit_copy_int__int__
                         (ppiVar2[-2],ppiVar2[-4],*ppiVar1);
LAB_0040c66d:
    ppiVar2 = ppiVar1 + -6;
    ppiVar1[-2] = local_28;
    ppiVar1[-4] = local_20;
    *ppiVar2 = local_30;
    ppiVar1[-7] = (int *)0x40c6ae;
    local_38 = __uninitialized_copy<true>::__uninit_copy_int__int__
                         (ppiVar1[-2],ppiVar1[-4],*ppiVar2);
  } while ((x129 * (x129 + -1) & 1U) != 0 && 9 < y130);
  return local_38;
}



// int* std::__uninitialized_copy<true>::__uninit_copy<int*, int*>(int*, int*, int*)

int * std::__uninitialized_copy<true>::__uninit_copy_int__int__
                (int *param_1,int *param_2,int *param_3)

{
  int **ppiVar1;
  int **ppiVar2;
  undefined auStack72 [8];
  int *local_40;
  int *local_38;
  int *local_30;
  int *local_28;
  int *local_20;
  
  ppiVar1 = (int **)auStack72;
  ppiVar2 = (int **)auStack72;
  local_30 = param_3;
  local_28 = param_1;
  local_20 = param_2;
  if ((x131 * (x131 + -1) & 1U) == 0 || y132 < 10) goto LAB_0040c7bd;
  do {
    ppiVar1 = ppiVar2 + -6;
    ppiVar2[-2] = local_28;
    ppiVar2[-4] = local_20;
    *ppiVar1 = local_30;
    ppiVar2[-7] = (int *)0x40c89b;
    local_40 = copy_int__int__(ppiVar2[-2],ppiVar2[-4],*ppiVar1);
LAB_0040c7bd:
    ppiVar2 = ppiVar1 + -6;
    ppiVar1[-2] = local_28;
    ppiVar1[-4] = local_20;
    *ppiVar2 = local_30;
    ppiVar1[-7] = (int *)0x40c7fe;
    local_38 = copy_int__int__(ppiVar1[-2],ppiVar1[-4],*ppiVar2);
  } while ((x131 * (x131 + -1) & 1U) != 0 && 9 < y132);
  return local_38;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::copy<int*, int*>(int*, int*, int*)

int * std::copy_int__int__(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  iterator_type iVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  int **ppiVar3;
  int **ppiVar4;
  undefined auStack120 [8];
  int *local_70;
  int *local_68;
  int **local_60;
  int **local_58;
  int *local_50;
  int *local_48;
  int **local_40;
  int **local_38;
  int *local_30;
  int *local_28;
  int *local_20;
  
  ppiVar3 = (int **)auStack120;
  ppiVar4 = (int **)auStack120;
  local_30 = param_3;
  local_28 = param_1;
  local_20 = param_2;
  if ((x133 * (x133 + -1) & 1U) == 0 || y134 < 10) goto LAB_0040c90d;
  do {
    local_58 = ppiVar4 + -4;
    ppiVar3 = ppiVar4 + -6;
    ppiVar4[-2] = local_28;
    *local_58 = local_20;
    *ppiVar3 = local_30;
    ppiVar4[-7] = (int *)0x40ca12;
    local_60 = ppiVar3;
    iVar2 = __miter_base_int__(ppiVar4[-2]);
    local_68 = (int *)CONCAT44(extraout_var_01,iVar2);
    piVar1 = *local_58;
    ppiVar4[-7] = (int *)0x40ca22;
    iVar2 = __miter_base_int__(piVar1);
    piVar1 = *local_60;
    ppiVar4[-7] = (int *)0x40ca35;
    local_70 = __copy_move_a2_false_int__int__
                         (local_68,(int *)CONCAT44(extraout_var_02,iVar2),piVar1);
LAB_0040c90d:
    local_38 = ppiVar3 + -4;
    ppiVar4 = ppiVar3 + -6;
    ppiVar3[-2] = local_28;
    *local_38 = local_20;
    *ppiVar4 = local_30;
    ppiVar3[-7] = (int *)0x40c950;
    local_40 = ppiVar4;
    iVar2 = __miter_base_int__(ppiVar3[-2]);
    local_48 = (int *)CONCAT44(extraout_var,iVar2);
    piVar1 = *local_38;
    ppiVar3[-7] = (int *)0x40c960;
    iVar2 = __miter_base_int__(piVar1);
    piVar1 = *local_40;
    ppiVar3[-7] = (int *)0x40c973;
    local_50 = __copy_move_a2_false_int__int__
                         (local_48,(int *)CONCAT44(extraout_var_00,iVar2),piVar1);
  } while ((x133 * (x133 + -1) & 1U) != 0 && 9 < y134);
  return local_50;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::__copy_move_a2<false, int*, int*>(int*, int*, int*)

int * std::__copy_move_a2_false_int__int__(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  iterator_type iVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  int **ppiVar3;
  int **ppiVar4;
  undefined auStack136 [8];
  int *local_80;
  int *local_78;
  int *local_70;
  int **local_68;
  int **local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  int **local_40;
  int **local_38;
  int *local_30;
  int *local_28;
  int *local_20;
  
  ppiVar3 = (int **)auStack136;
  ppiVar4 = (int **)auStack136;
  local_30 = param_3;
  local_28 = param_1;
  local_20 = param_2;
  if ((x135 * (x135 + -1) & 1U) == 0 || y136 < 10) goto LAB_0040ca9d;
  do {
    local_60 = ppiVar4 + -4;
    ppiVar3 = ppiVar4 + -6;
    ppiVar4[-2] = local_28;
    *local_60 = local_20;
    *ppiVar3 = local_30;
    ppiVar4[-7] = (int *)0x40cbaf;
    local_68 = ppiVar3;
    iVar2 = __niter_base_int__(ppiVar4[-2]);
    local_70 = (int *)CONCAT44(extraout_var_02,iVar2);
    piVar1 = *local_60;
    ppiVar4[-7] = (int *)0x40cbbf;
    iVar2 = __niter_base_int__(piVar1);
    local_78 = (int *)CONCAT44(extraout_var_03,iVar2);
    piVar1 = *local_68;
    ppiVar4[-7] = (int *)0x40cbcf;
    iVar2 = __niter_base_int__(piVar1);
    ppiVar4[-7] = (int *)0x40cbdf;
    local_80 = __copy_move_a_false_int__int__
                         (local_70,local_78,(int *)CONCAT44(extraout_var_04,iVar2));
LAB_0040ca9d:
    local_38 = ppiVar3 + -4;
    ppiVar4 = ppiVar3 + -6;
    ppiVar3[-2] = local_28;
    *local_38 = local_20;
    *ppiVar4 = local_30;
    ppiVar3[-7] = (int *)0x40cae0;
    local_40 = ppiVar4;
    iVar2 = __niter_base_int__(ppiVar3[-2]);
    local_48 = (int *)CONCAT44(extraout_var,iVar2);
    piVar1 = *local_38;
    ppiVar3[-7] = (int *)0x40caf0;
    iVar2 = __niter_base_int__(piVar1);
    local_50 = (int *)CONCAT44(extraout_var_00,iVar2);
    piVar1 = *local_40;
    ppiVar3[-7] = (int *)0x40cb00;
    iVar2 = __niter_base_int__(piVar1);
    ppiVar3[-7] = (int *)0x40cb10;
    local_58 = __copy_move_a_false_int__int__
                         (local_48,local_50,(int *)CONCAT44(extraout_var_01,iVar2));
  } while ((x135 * (x135 + -1) & 1U) != 0 && 9 < y136);
  return local_58;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::_Miter_base<int*>::iterator_type std::__miter_base<int*>(int*)

iterator_type std::__miter_base_int__(int *param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  undefined auStack40 [8];
  undefined8 local_20;
  undefined8 local_18;
  int *local_10;
  
  ppiVar1 = (int **)auStack40;
  ppiVar2 = (int **)auStack40;
  local_10 = param_1;
  if ((x137 * (x137 + -1) & 1U) == 0 || y138 < 10) goto LAB_0040cc3f;
  do {
    ppiVar1 = ppiVar2 + -2;
    *ppiVar1 = local_10;
    ppiVar2[-3] = (int *)0x40ccc6;
    local_20 = _Iter_base<int*,false>::_S_base(*ppiVar1);
LAB_0040cc3f:
    ppiVar2 = ppiVar1 + -2;
    *ppiVar2 = local_10;
    ppiVar1[-3] = (int *)0x40cc58;
    local_18 = _Iter_base<int*,false>::_S_base(*ppiVar2);
  } while ((x137 * (x137 + -1) & 1U) != 0 && 9 < y138);
  return (iterator_type)local_18;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::__copy_move_a<false, int*, int*>(int*, int*, int*)

int * std::__copy_move_a_false_int__int__(int *param_1,int *param_2,int *param_3)

{
  int **ppiVar1;
  int **ppiVar2;
  int *local_48;
  int *local_40;
  int *local_38;
  int *local_30;
  int *local_28;
  
  ppiVar2 = &local_48;
  ppiVar1 = &local_48;
  local_38 = param_3;
  local_30 = param_1;
  local_28 = param_2;
  if ((x139 * (x139 + -1) & 1U) == 0 || y140 < 10) goto LAB_0040cd2f;
  do {
    ppiVar2 = (int **)((long)ppiVar1 + -0x40);
    *(int **)((long)ppiVar1 + -0x10) = local_30;
    *(int **)((long)ppiVar1 + -0x20) = local_28;
    *(int **)((long)ppiVar1 + -0x30) = local_38;
    *(undefined *)ppiVar2 = 1;
    *(undefined8 *)((long)ppiVar1 + -0x48) = 0x40ce2a;
    local_48 = __copy_move<false,true,std::random_access_iterator_tag>::__copy_m_int_
                         (*(int **)((long)ppiVar1 + -0x10),*(int **)((long)ppiVar1 + -0x20),
                          *(int **)((long)ppiVar1 + -0x30));
LAB_0040cd2f:
    ppiVar1 = (int **)((long)ppiVar2 + -0x40);
    *(int **)((long)ppiVar2 + -0x10) = local_30;
    *(int **)((long)ppiVar2 + -0x20) = local_28;
    *(int **)((long)ppiVar2 + -0x30) = local_38;
    *(undefined *)ppiVar1 = 1;
    *(undefined8 *)((long)ppiVar2 + -0x48) = 0x40cd7d;
    local_40 = __copy_move<false,true,std::random_access_iterator_tag>::__copy_m_int_
                         (*(int **)((long)ppiVar2 + -0x10),*(int **)((long)ppiVar2 + -0x20),
                          *(int **)((long)ppiVar2 + -0x30));
  } while ((x139 * (x139 + -1) & 1U) != 0 && 9 < y140);
  return local_40;
}



// std::vector<int, std::allocator<int>>::max_size() const

undefined8 __thiscall
std::vector<int,std::allocator<int>>::max_size(vector_int_std__allocator_int__ *this)

{
  allocator *paVar1;
  _Vector_base_int_std__allocator_int__ **pp_Var2;
  _Vector_base_int_std__allocator_int__ **pp_Var3;
  undefined auStack40 [8];
  undefined8 local_20;
  undefined8 local_18;
  vector_int_std__allocator_int__ *local_10;
  
  pp_Var2 = (_Vector_base_int_std__allocator_int__ **)auStack40;
  pp_Var3 = (_Vector_base_int_std__allocator_int__ **)auStack40;
  local_10 = this;
  if ((x141 * (x141 + -1) & 1U) == 0 || y142 < 10) goto LAB_0040ce8f;
  do {
    pp_Var2 = pp_Var3 + -2;
    *pp_Var2 = (_Vector_base_int_std__allocator_int__ *)local_10;
    pp_Var3[-3] = (_Vector_base_int_std__allocator_int__ *)0x40cf24;
    paVar1 = (allocator *)_Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator(*pp_Var2);
    pp_Var3[-3] = (_Vector_base_int_std__allocator_int__ *)0x40cf2c;
    local_20 = __gnu_cxx::__alloc_traits<std::allocator<int>>::max_size(paVar1);
LAB_0040ce8f:
    pp_Var3 = pp_Var2 + -2;
    *pp_Var3 = (_Vector_base_int_std__allocator_int__ *)local_10;
    pp_Var2[-3] = (_Vector_base_int_std__allocator_int__ *)0x40ceab;
    paVar1 = (allocator *)_Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator(*pp_Var3);
    pp_Var2[-3] = (_Vector_base_int_std__allocator_int__ *)0x40ceb3;
    local_18 = __gnu_cxx::__alloc_traits<std::allocator<int>>::max_size(paVar1);
  } while ((x141 * (x141 + -1) & 1U) != 0 && 9 < y142);
  return local_18;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// unsigned long const& std::max<unsigned long>(unsigned long const&, unsigned long const&)

ulong * std::max_unsigned_long_(ulong *param_1,ulong *param_2)

{
  ulong **ppuVar1;
  undefined auStack104 [23];
  bool local_51;
  ulong **local_50;
  ulong **local_48;
  ulong **local_40;
  ulong *local_38;
  ulong *local_30;
  
  ppuVar1 = (ulong **)auStack104;
  local_50 = (ulong **)auStack104;
  local_30 = param_1;
  local_38 = param_2;
  if ((x143 * (x143 + -1) & 1U) == 0 || y144 < 10) goto LAB_0040cf9a;
  do {
    ppuVar1 = local_50 + -6;
    local_50[-4] = param_1;
    *ppuVar1 = param_2;
LAB_0040cf9a:
    local_48 = ppuVar1 + -4;
    local_50 = ppuVar1 + -6;
    *local_48 = param_1;
    *local_50 = param_2;
    local_40 = ppuVar1 + -2;
    local_51 = **local_48 < **local_50;
  } while ((x143 * (x143 + -1) & 1U) != 0 && 9 < y144);
  if (**local_48 < **local_50) {
    if ((x143 * (x143 + -1) & 1U) == 0 || y144 < 10) goto LAB_0040d084;
    do {
      *local_40 = *local_50;
LAB_0040d084:
      *local_40 = *local_50;
    } while ((x143 * (x143 + -1) & 1U) != 0 && 9 < y144);
  }
  else {
    if ((x143 * (x143 + -1) & 1U) == 0 || y144 < 10) goto LAB_0040d122;
    do {
      *local_40 = *local_48;
LAB_0040d122:
      *local_40 = *local_48;
    } while ((x143 * (x143 + -1) & 1U) != 0 && 9 < y144);
  }
  do {
  } while ((x143 * (x143 + -1) & 1U) != 0 && 9 < y144);
  return *local_40;
}



// __gnu_cxx::__alloc_traits<std::allocator<int>>::max_size(std::allocator<int> const&)

undefined8 __gnu_cxx::__alloc_traits<std::allocator<int>>::max_size(allocator *param_1)

{
  new_allocator_int_ **ppnVar1;
  new_allocator_int_ **ppnVar2;
  undefined auStack40 [8];
  undefined8 local_20;
  undefined8 local_18;
  allocator *local_10;
  
  ppnVar1 = (new_allocator_int_ **)auStack40;
  ppnVar2 = (new_allocator_int_ **)auStack40;
  local_10 = param_1;
  if ((x145 * (x145 + -1) & 1U) == 0 || y146 < 10) goto LAB_0040d2cf;
  do {
    ppnVar1 = ppnVar2 + -2;
    *ppnVar1 = (new_allocator_int_ *)local_10;
    ppnVar2[-3] = (new_allocator_int_ *)0x40d35c;
    local_20 = new_allocator<int>::max_size(*ppnVar1);
LAB_0040d2cf:
    ppnVar2 = ppnVar1 + -2;
    *ppnVar2 = (new_allocator_int_ *)local_10;
    ppnVar1[-3] = (new_allocator_int_ *)0x40d2eb;
    local_18 = new_allocator<int>::max_size(*ppnVar2);
  } while ((x145 * (x145 + -1) & 1U) != 0 && 9 < y146);
  return local_18;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::__copy_move_backward_a2<false, int*, int*>(int*, int*, int*)

int * std::__copy_move_backward_a2_false_int__int__(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  iterator_type iVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  int **ppiVar3;
  int **ppiVar4;
  undefined auStack136 [8];
  int *local_80;
  int *local_78;
  int *local_70;
  int **local_68;
  int **local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  int **local_40;
  int **local_38;
  int *local_30;
  int *local_28;
  int *local_20;
  
  ppiVar3 = (int **)auStack136;
  ppiVar4 = (int **)auStack136;
  local_30 = param_3;
  local_28 = param_1;
  local_20 = param_2;
  if ((x147 * (x147 + -1) & 1U) == 0 || y148 < 10) goto LAB_0040d3cd;
  do {
    local_60 = ppiVar4 + -4;
    ppiVar3 = ppiVar4 + -6;
    ppiVar4[-2] = local_28;
    *local_60 = local_20;
    *ppiVar3 = local_30;
    ppiVar4[-7] = (int *)0x40d4df;
    local_68 = ppiVar3;
    iVar2 = __niter_base_int__(ppiVar4[-2]);
    local_70 = (int *)CONCAT44(extraout_var_02,iVar2);
    piVar1 = *local_60;
    ppiVar4[-7] = (int *)0x40d4ef;
    iVar2 = __niter_base_int__(piVar1);
    local_78 = (int *)CONCAT44(extraout_var_03,iVar2);
    piVar1 = *local_68;
    ppiVar4[-7] = (int *)0x40d4ff;
    iVar2 = __niter_base_int__(piVar1);
    ppiVar4[-7] = (int *)0x40d50f;
    local_80 = __copy_move_backward_a_false_int__int__
                         (local_70,local_78,(int *)CONCAT44(extraout_var_04,iVar2));
LAB_0040d3cd:
    local_38 = ppiVar3 + -4;
    ppiVar4 = ppiVar3 + -6;
    ppiVar3[-2] = local_28;
    *local_38 = local_20;
    *ppiVar4 = local_30;
    ppiVar3[-7] = (int *)0x40d410;
    local_40 = ppiVar4;
    iVar2 = __niter_base_int__(ppiVar3[-2]);
    local_48 = (int *)CONCAT44(extraout_var,iVar2);
    piVar1 = *local_38;
    ppiVar3[-7] = (int *)0x40d420;
    iVar2 = __niter_base_int__(piVar1);
    local_50 = (int *)CONCAT44(extraout_var_00,iVar2);
    piVar1 = *local_40;
    ppiVar3[-7] = (int *)0x40d430;
    iVar2 = __niter_base_int__(piVar1);
    ppiVar3[-7] = (int *)0x40d440;
    local_58 = __copy_move_backward_a_false_int__int__
                         (local_48,local_50,(int *)CONCAT44(extraout_var_01,iVar2));
  } while ((x147 * (x147 + -1) & 1U) != 0 && 9 < y148);
  return local_58;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::__copy_move_backward_a<false, int*, int*>(int*, int*, int*)

int * std::__copy_move_backward_a_false_int__int__(int *param_1,int *param_2,int *param_3)

{
  int **ppiVar1;
  int **ppiVar2;
  int *local_48;
  int *local_40;
  int *local_38;
  int *local_30;
  int *local_28;
  
  ppiVar2 = &local_48;
  ppiVar1 = &local_48;
  local_38 = param_3;
  local_30 = param_1;
  local_28 = param_2;
  if ((x149 * (x149 + -1) & 1U) == 0 || y150 < 10) goto LAB_0040d57f;
  do {
    ppiVar2 = (int **)((long)ppiVar1 + -0x40);
    *(int **)((long)ppiVar1 + -0x10) = local_30;
    *(int **)((long)ppiVar1 + -0x20) = local_28;
    *(int **)((long)ppiVar1 + -0x30) = local_38;
    *(undefined *)ppiVar2 = 1;
    *(undefined8 *)((long)ppiVar1 + -0x48) = 0x40d67a;
    local_48 = __copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b_int_
                         (*(int **)((long)ppiVar1 + -0x10),*(int **)((long)ppiVar1 + -0x20),
                          *(int **)((long)ppiVar1 + -0x30));
LAB_0040d57f:
    ppiVar1 = (int **)((long)ppiVar2 + -0x40);
    *(int **)((long)ppiVar2 + -0x10) = local_30;
    *(int **)((long)ppiVar2 + -0x20) = local_28;
    *(int **)((long)ppiVar2 + -0x30) = local_38;
    *(undefined *)ppiVar1 = 1;
    *(undefined8 *)((long)ppiVar2 + -0x48) = 0x40d5cd;
    local_40 = __copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b_int_
                         (*(int **)((long)ppiVar2 + -0x10),*(int **)((long)ppiVar2 + -0x20),
                          *(int **)((long)ppiVar2 + -0x30));
  } while ((x149 * (x149 + -1) & 1U) != 0 && 9 < y150);
  return local_40;
}



// int* std::__copy_move_backward<false, true,
// std::random_access_iterator_tag>::__copy_move_b<int>(int const*, int const*, int*)

int * std::__copy_move_backward<false,true,std::random_access_iterator_tag>::__copy_move_b_int_
                (int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  long *plVar5;
  undefined auStack120 [23];
  undefined local_61;
  long *local_60;
  int **local_58;
  int **local_50;
  int *local_48;
  int *local_40;
  int *local_38;
  
  plVar5 = (long *)auStack120;
  local_60 = (long *)auStack120;
  if ((x151 * (x151 + -1) & 1U) == 0 || y152 < 10) goto LAB_0040d6f3;
  do {
    plVar5 = local_60 + -8;
    local_60[-2] = (long)param_1;
    local_60[-4] = (long)param_2;
    local_60[-6] = (long)param_3;
    *plVar5 = (long)local_60[-4] - (long)local_60[-2] >> 2;
LAB_0040d6f3:
    local_50 = (int **)(plVar5 + -2);
    local_58 = (int **)(plVar5 + -6);
    local_60 = plVar5 + -8;
    *local_50 = param_1;
    plVar5[-4] = (long)param_2;
    *local_58 = param_3;
    *local_60 = (long)plVar5[-4] - (long)*local_50 >> 2;
    local_61 = *local_60 != 0;
  } while ((x151 * (x151 + -1) & 1U) != 0 && 9 < y152);
  if ((bool)local_61) {
    local_48 = param_3;
    local_40 = param_1;
    local_38 = param_2;
    if ((x151 * (x151 + -1) & 1U) == 0 || y152 < 10) goto LAB_0040d7f8;
    do {
      piVar1 = *local_58;
      lVar2 = *local_60;
      piVar3 = *local_50;
      lVar4 = *local_60;
      plVar5[-9] = 0x40d9bd;
      memmove(piVar1 + -lVar2,piVar3,lVar4 << 2);
LAB_0040d7f8:
      piVar1 = *local_58;
      lVar2 = *local_60;
      piVar3 = *local_50;
      lVar4 = *local_60;
      plVar5[-9] = 0x40d82d;
      memmove(piVar1 + -lVar2,piVar3,lVar4 << 2);
    } while ((x151 * (x151 + -1) & 1U) != 0 && 9 < y152);
  }
  do {
  } while ((x151 * (x151 + -1) & 1U) != 0 && 9 < y152);
  return *local_58 + -*local_60;
}



// __gnu_cxx::new_allocator<int>::construct(int*, int const&)

void __thiscall
__gnu_cxx::new_allocator<int>::construct(new_allocator_int_ *this,int *param_1,int *param_2)

{
  int **ppiVar1;
  undefined auStack88 [23];
  bool local_41;
  int *local_40;
  int **local_38;
  int *local_30;
  new_allocator_int_ *local_28;
  int *local_20;
  
  ppiVar1 = (int **)auStack88;
  local_38 = (int **)auStack88;
  local_20 = param_1;
  local_28 = this;
  local_30 = param_2;
  if ((x153 * (x153 + -1) & 1U) == 0 || y154 < 10) goto LAB_0040da2d;
  do {
    ppiVar1 = local_38 + -6;
    local_38[-2] = (int *)this;
    local_38[-4] = param_1;
    *ppiVar1 = param_2;
LAB_0040da2d:
    local_38 = ppiVar1 + -6;
    ppiVar1[-2] = (int *)this;
    ppiVar1[-4] = param_1;
    *local_38 = param_2;
    local_40 = ppiVar1[-4];
    local_41 = local_40 == (int *)0x0;
  } while ((x153 * (x153 + -1) & 1U) != 0 && 9 < y154);
  if (local_40 != (int *)0x0) {
    if ((x153 * (x153 + -1) & 1U) == 0 || y154 < 10) goto LAB_0040db18;
    do {
      *local_40 = **local_38;
LAB_0040db18:
      *local_40 = **local_38;
    } while ((x153 * (x153 + -1) & 1U) != 0 && 9 < y154);
  }
  do {
  } while ((x153 * (x153 + -1) & 1U) != 0 && 9 < y154);
  return;
}



// std::_Vector_base<int, std::allocator<int>>::_Vector_base()

void __thiscall
std::_Vector_base<int,std::allocator<int>>::_Vector_base
          (_Vector_base_int_std__allocator_int__ *this)

{
  _Vector_impl **pp_Var1;
  _Vector_impl **pp_Var2;
  undefined auStack24 [8];
  _Vector_base_int_std__allocator_int__ *local_10;
  
  pp_Var1 = (_Vector_impl **)auStack24;
  pp_Var2 = (_Vector_impl **)auStack24;
  local_10 = this;
  if ((x155 * (x155 + -1) & 1U) == 0 || y156 < 10) goto LAB_0040dcaf;
  do {
    pp_Var1 = pp_Var2 + -2;
    *pp_Var1 = (_Vector_impl *)local_10;
    pp_Var2[-3] = (_Vector_impl *)0x40dd2e;
    _Vector_impl::_Vector_impl(*pp_Var1);
LAB_0040dcaf:
    pp_Var2 = pp_Var1 + -2;
    *pp_Var2 = (_Vector_impl *)local_10;
    pp_Var1[-3] = (_Vector_impl *)0x40dcc8;
    _Vector_impl::_Vector_impl(*pp_Var2);
  } while ((x155 * (x155 + -1) & 1U) != 0 && 9 < y156);
  return;
}



// std::_Vector_base<int, std::allocator<int>>::_Vector_impl::_Vector_impl()

void __thiscall
std::_Vector_base<int,std::allocator<int>>::_Vector_impl::_Vector_impl(_Vector_impl *this)

{
  _Vector_impl **pp_Var1;
  _Vector_impl **pp_Var2;
  undefined auStack40 [8];
  undefined8 *local_20;
  undefined8 *local_18;
  _Vector_impl *local_10;
  
  pp_Var1 = (_Vector_impl **)auStack40;
  pp_Var2 = (_Vector_impl **)auStack40;
  local_10 = this;
  if ((x157 * (x157 + -1) & 1U) == 0 || y158 < 10) goto LAB_0040dd8f;
  do {
    pp_Var1 = pp_Var2 + -2;
    *pp_Var1 = local_10;
    local_20 = (undefined8 *)*pp_Var1;
    pp_Var2[-3] = (_Vector_impl *)0x40de3f;
    allocator<int>::allocator((allocator_int_ *)local_20);
    *local_20 = 0;
    local_20[1] = 0;
    local_20[2] = 0;
LAB_0040dd8f:
    pp_Var2 = pp_Var1 + -2;
    *pp_Var2 = local_10;
    local_18 = (undefined8 *)*pp_Var2;
    pp_Var1[-3] = (_Vector_impl *)0x40ddb2;
    allocator<int>::allocator((allocator_int_ *)local_18);
    *local_18 = 0;
    local_18[1] = 0;
    local_18[2] = 0;
  } while ((x157 * (x157 + -1) & 1U) != 0 && 9 < y158);
  return;
}



// std::allocator<int>::allocator()

void __thiscall std::allocator<int>::allocator(allocator_int_ *this)

{
  new_allocator_int_ **ppnVar1;
  new_allocator_int_ **ppnVar2;
  undefined auStack24 [8];
  allocator_int_ *local_10;
  
  ppnVar1 = (new_allocator_int_ **)auStack24;
  ppnVar2 = (new_allocator_int_ **)auStack24;
  local_10 = this;
  if ((x159 * (x159 + -1) & 1U) == 0 || y160 < 10) goto LAB_0040deaf;
  do {
    ppnVar1 = ppnVar2 + -2;
    *ppnVar1 = (new_allocator_int_ *)local_10;
    ppnVar2[-3] = (new_allocator_int_ *)0x40df34;
    __gnu_cxx::new_allocator<int>::new_allocator(*ppnVar1);
LAB_0040deaf:
    ppnVar2 = ppnVar1 + -2;
    *ppnVar2 = (new_allocator_int_ *)local_10;
    ppnVar1[-3] = (new_allocator_int_ *)0x40decb;
    __gnu_cxx::new_allocator<int>::new_allocator(*ppnVar2);
  } while ((x159 * (x159 + -1) & 1U) != 0 && 9 < y160);
  return;
}



// __gnu_cxx::new_allocator<int>::new_allocator()

void __thiscall __gnu_cxx::new_allocator<int>::new_allocator(new_allocator_int_ *this)

{
  new_allocator_int_ **ppnVar1;
  new_allocator_int_ **ppnVar2;
  undefined auStack24 [16];
  
  ppnVar1 = (new_allocator_int_ **)auStack24;
  ppnVar2 = (new_allocator_int_ **)auStack24;
  if ((x161 * (x161 + -1) & 1U) == 0 || y162 < 10) goto LAB_0040df8f;
  do {
    ppnVar1 = ppnVar2 + -2;
    *ppnVar1 = this;
LAB_0040df8f:
    ppnVar2 = ppnVar1 + -2;
    *ppnVar2 = this;
  } while ((x161 * (x161 + -1) & 1U) != 0 && 9 < y162);
  return;
}



// reward_strength(std::basic_string<char, std::char_traits<char>, std::allocator<char>>)

void reward_strength(basic_string param_1)

{
  undefined4 in_register_0000003c;
  basic_string_char_std__char_traits_char__std__allocator_char__ local_20 [8];
  basic_string_char_std__char_traits_char__std__allocator_char__ local_18 [8];
  basic_string local_10 [2];
  
  std::basic_string<char,std::char_traits<char>,std::allocator<char>>::size();
  std::basic_string<char,std::char_traits<char>,std::allocator<char>>::substr
            ((ulong)local_20,CONCAT44(in_register_0000003c,param_1));
                    // try { // try from 0040e02c to 0040e041 has its CatchHandler @ 0040e0a4
  std::operator_((char *)local_18,(basic_string *)"\n[+] A great success! Here is a flag{");
                    // try { // try from 0040e047 to 0040e05a has its CatchHandler @ 0040e0b2
  std::operator_(local_10,(char *)local_18);
                    // try { // try from 0040e060 to 0040e06f has its CatchHandler @ 0040e0c0
  std::operator__((basic_ostream *)std::cout,local_10);
                    // try { // try from 0040e079 to 0040e081 has its CatchHandler @ 0040e0b2
  std::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
            ((basic_string_char_std__char_traits_char__std__allocator_char__ *)local_10);
                    // try { // try from 0040e087 to 0040e08f has its CatchHandler @ 0040e0a4
  std::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string(local_18);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string(local_20);
  return;
}



undefined4 main(void)

{
  int iVar1;
  basic_string local_148 [2];
  basic_string local_140 [6];
  allocator_char_ local_128 [8];
  basic_string_char_std__char_traits_char__std__allocator_char__ local_120 [8];
  allocator local_118 [268];
  undefined4 local_c;
  
  local_c = 0;
  std::operator__((basic_ostream *)std::cout,"+-----------------------+\n");
  std::operator__((basic_ostream *)std::cout,"|    Welcome Hero       |\n");
  std::operator__((basic_ostream *)std::cout,"+-----------------------+\n\n");
  std::operator__((basic_ostream *)std::cout,"[!] Quest: there is a dragon prowling the domain.\n");
  std::operator__((basic_ostream *)std::cout,
                  "\tbrute strength and magic is our only hope. Test your skill.\n\n");
  std::operator__((basic_ostream *)std::cout,"Enter the dragon\'s secret: ");
  fgets((char *)local_118,0x101,stdin);
  std::allocator<char>::allocator();
                    // try { // try from 0040e217 to 0040e230 has its CatchHandler @ 0040e2ee
  std::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string
            ((char *)local_120,local_118);
  std::allocator<char>::_allocator(local_128);
                    // try { // try from 0040e242 to 0040e254 has its CatchHandler @ 0040e30e
  std::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string(local_140);
                    // try { // try from 0040e25a to 0040e265 has its CatchHandler @ 0040e322
  iVar1 = start_quest((int)register0x00000020 - 0x140);
                    // try { // try from 0040e27f to 0040e2c1 has its CatchHandler @ 0040e30e
  std::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
            ((basic_string_char_std__char_traits_char__std__allocator_char__ *)local_140);
  if (iVar1 == 0x1337) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string(local_148);
                    // try { // try from 0040e2c7 to 0040e2d2 has its CatchHandler @ 0040e347
    reward_strength((int)register0x00000020 - 0x148);
                    // try { // try from 0040e2d8 to 0040e2e3 has its CatchHandler @ 0040e30e
    std::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string
              ((basic_string_char_std__char_traits_char__std__allocator_char__ *)local_148);
  }
  else {
                    // try { // try from 0040e36c to 0040e37e has its CatchHandler @ 0040e30e
    std::operator__((basic_ostream *)std::cout,
                    "\n[-] You have failed. The dragon\'s power, speed and intelligence was greater.\n"
                   );
  }
  local_c = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>>::_basic_string(local_120);
  return local_c;
}



// WARNING: Removing unreachable block (ram,0x0040e443)
// WARNING: Unknown calling convention yet parameter storage is locked
// std::basic_string<char, std::char_traits<char>, std::allocator<char>>
// std::TEMPNAMEPLACEHOLDERVALUE(std::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const&, char const*)

basic_string std::operator_(basic_string *param_1,char *param_2)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string(param_1);
                    // try { // try from 0040e41c to 0040e424 has its CatchHandler @ 0040e448
  std::basic_string<char,std::char_traits<char>,std::allocator<char>>::append((char *)param_1);
  return (basic_string)param_1;
}



// WARNING: Removing unreachable block (ram,0x0040e543)
// WARNING: Unknown calling convention yet parameter storage is locked
// std::basic_string<char, std::char_traits<char>, std::allocator<char>>
// std::TEMPNAMEPLACEHOLDERVALUE(char const*, std::basic_string<char, std::char_traits<char>,
// std::allocator<char>> const&)

basic_string std::operator_(char *param_1,basic_string *param_2)

{
  char_traits<char>::length((char *)param_2);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>>::basic_string();
                    // try { // try from 0040e4d0 to 0040e524 has its CatchHandler @ 0040e548
  std::basic_string<char,std::char_traits<char>,std::allocator<char>>::size();
  std::basic_string<char,std::char_traits<char>,std::allocator<char>>::reserve((ulong)param_1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>>::append
            (param_1,(ulong)param_2);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>>::append
            ((basic_string *)param_1);
  return (basic_string)param_1;
}



// std::char_traits<char>::length(char const*)

void std::char_traits<char>::length(char *param_1)

{
  strlen(param_1);
  return;
}



void __libc_csu_init(EVP_PKEY_CTX *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0;
  _init(param_1);
  do {
    (*(code *)(&__frame_dummy_init_array_entry)[lVar1])((ulong)param_1 & 0xffffffff,param_2,param_3)
    ;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 3);
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


