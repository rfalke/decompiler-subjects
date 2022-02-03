typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned short    word;
typedef struct vector<int,std::allocator<int>> vector<int,std::allocator<int>>, *Pvector<int,std::allocator<int>>;

struct vector<int,std::allocator<int>> { // PlaceHolder Class Structure
};

typedef struct _Vector_base<int,std::allocator<int>> _Vector_base<int,std::allocator<int>>, *P_Vector_base<int,std::allocator<int>>;

struct _Vector_base<int,std::allocator<int>> { // PlaceHolder Class Structure
};

typedef ulong size_t;

typedef struct move_iterator<int*> move_iterator<int*>, *Pmove_iterator<int*>;

struct move_iterator<int*> { // PlaceHolder Structure
};

typedef struct allocator allocator, *Pallocator;

struct allocator { // PlaceHolder Structure
};

typedef dword __false_type;

typedef dword move_iterator;

typedef struct vector vector, *Pvector;

struct vector { // PlaceHolder Structure
};

typedef dword forward_iterator_tag;

typedef dword random_access_iterator_tag;

typedef dword iterator_type;

typedef dword iterator_category;

typedef dword difference_type;

typedef struct type type, *Ptype;

struct type { // PlaceHolder Structure
};

typedef struct __normal_iterator __normal_iterator, *P__normal_iterator;

struct __normal_iterator { // PlaceHolder Structure
};

typedef struct __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>, *P__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>;

struct __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> { // PlaceHolder Structure
};

typedef struct __normal_iterator<int*,std::vector<int,std::allocator<int>>> __normal_iterator<int*,std::vector<int,std::allocator<int>>>, *P__normal_iterator<int*,std::vector<int,std::allocator<int>>>;

struct __normal_iterator<int*,std::vector<int,std::allocator<int>>> { // PlaceHolder Structure
};

typedef enum Elf_SectionHeaderType_ARM {
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
    SHT_GNU_versym=1879048191,
    SHT_ARM_EXIDX=1879048193,
    SHT_ARM_PREEMPTMAP=1879048194,
    SHT_ARM_ATTRIBUTES=1879048195,
    SHT_ARM_DEBUGOVERLAY=1879048196,
    SHT_ARM_OVERLAYSECTION=1879048197
} Elf_SectionHeaderType_ARM;

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
};

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

struct Elf32_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_ARM sh_type;
    dword sh_flags;
    dword sh_addr;
    dword sh_offset;
    dword sh_size;
    dword sh_link;
    dword sh_info;
    dword sh_addralign;
    dword sh_entsize;
};

typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

typedef enum Elf_ProgramHeaderType_ARM {
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
    PT_GNU_RELRO=1685382482,
    PT_ARM_EXIDX=1879048192
} Elf_ProgramHeaderType_ARM;

struct Elf32_Phdr {
    enum Elf_ProgramHeaderType_ARM p_type;
    dword p_offset;
    dword p_vaddr;
    dword p_paddr;
    dword p_filesz;
    dword p_memsz;
    dword p_flags;
    dword p_align;
};

typedef enum Elf32_DynTag_ARM {
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
} Elf32_DynTag_ARM;

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
};

typedef struct Elf32_Dyn_ARM Elf32_Dyn_ARM, *PElf32_Dyn_ARM;

struct Elf32_Dyn_ARM {
    enum Elf32_DynTag_ARM d_tag;
    dword d_val;
};

typedef struct Elf32_Ehdr Elf32_Ehdr, *PElf32_Ehdr;

struct Elf32_Ehdr {
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
    dword e_entry;
    dword e_phoff;
    dword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;




int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::__throw_length_error(char const*)

void std::__throw_length_error(char *param_1)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void abort(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



void __libc_start_main(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// operator delete(void*)

void operator_delete(void *param_1)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



void __cxa_rethrow(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



void __cxa_end_cleanup(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// operator new(unsigned int)

void * operator_new(uint param_1)

{
  void *pvVar1;
  
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)(undefined *)0x0)();
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)(undefined *)0x0)();
  return pvVar1;
}



void __cxa_end_catch(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::__throw_bad_alloc()

void std::__throw_bad_alloc(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



void __cxa_begin_catch(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



void __gxx_personality_v0(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



void _start(undefined4 param_1)

{
  undefined4 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000004,__libc_csu_init,__libc_csu_fini,param_1)
  ;
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Removing unreachable block (ram,0x000086bc)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x000086f4)
// WARNING: Removing unreachable block (ram,0x000086e4)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00008720)
// WARNING: Removing unreachable block (ram,0x0000872c)
// WARNING: Removing unreachable block (ram,0x00008730)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_9846 != '\0') {
    return;
  }
  deregister_tm_clones();
  completed_9846 = 1;
  return;
}



// WARNING: Removing unreachable block (ram,0x0000878c)

void frame_dummy(void)

{
  register_tm_clones();
  return;
}



// f(std::vector<int, std::allocator<int>>&, std::vector<int, std::allocator<int>> const&)

__normal_iterator f(vector *param_1,vector *param_2)

{
  __normal_iterator _Var1;
  __normal_iterator _Var2;
  __normal_iterator local_18 [4];
  undefined4 local_14 [2];
  
  local_14[0] = std::vector<int,std::allocator<int>>::end
                          ((vector_int_std__allocator_int__ *)param_1);
  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
  __normal_iterator_int__
            ((__normal_iterator_int_const__std__vector_int_std__allocator_int___ *)local_18,
             (__normal_iterator *)local_14);
  _Var1 = (__normal_iterator)
          std::vector<int,std::allocator<int>>::begin((vector_int_std__allocator_int__ *)param_2);
  _Var2 = (__normal_iterator)
          std::vector<int,std::allocator<int>>::end((vector_int_std__allocator_int__ *)param_2);
  _Var1 = std::vector<int,std::allocator<int>>::
          insert___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____void_
                    ((vector_int_std__allocator_int__ *)param_1,local_18[0],_Var1,_Var2);
  return _Var1;
}



undefined4 main(void)

{
  return 0;
}



// operator new(unsigned int, void*)

void * operator_new(uint param_1,void *param_2)

{
  return param_2;
}



// std::vector<int, std::allocator<int>>::end()

undefined4 __thiscall
std::vector<int,std::allocator<int>>::end(vector_int_std__allocator_int__ *this)

{
  undefined4 local_c;
  
  __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::__normal_iterator
            ((__normal_iterator_int__std__vector_int_std__allocator_int___ *)&local_c,
             (int **)(this + 4));
  return local_c;
}



// std::vector<int, std::allocator<int>>::begin() const

undefined4 __thiscall
std::vector<int,std::allocator<int>>::begin(vector_int_std__allocator_int__ *this)

{
  undefined4 local_10;
  int *local_c;
  
  local_c = *(int **)this;
  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::__normal_iterator
            ((__normal_iterator_int_const__std__vector_int_std__allocator_int___ *)&local_10,
             &local_c);
  return local_10;
}



// std::vector<int, std::allocator<int>>::end() const

undefined4 __thiscall
std::vector<int,std::allocator<int>>::end(vector_int_std__allocator_int__ *this)

{
  undefined4 local_10;
  int *local_c;
  
  local_c = *(int **)(this + 4);
  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::__normal_iterator
            ((__normal_iterator_int_const__std__vector_int_std__allocator_int___ *)&local_10,
             &local_c);
  return local_10;
}



// __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>::__normal_iterator<int*>(__gnu_cxx::__normal_iterator<int*,
// __gnu_cxx::__enable_if<std::__are_same<int*, int*>::__value, std::vector<int,
// std::allocator<int>>>::__type> const&)

__normal_iterator_int_const__std__vector_int_std__allocator_int___ * __thiscall
__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
__normal_iterator_int__
          (__normal_iterator_int_const__std__vector_int_std__allocator_int___ *this,
          __normal_iterator *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           __normal_iterator<int*,std::vector<int,std::allocator<int>>>::base
                     ((__normal_iterator_int__std__vector_int_std__allocator_int___ *)param_1);
  *(undefined4 *)this = *puVar1;
  return this;
}



// __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>>> std::vector<int,
// std::allocator<int>>::insert<__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, void>(__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>)

__normal_iterator __thiscall
std::vector<int,std::allocator<int>>::
insert___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____void_
          (vector_int_std__allocator_int__ *this,__normal_iterator param_1,__normal_iterator param_2
          ,__normal_iterator param_3)

{
  __normal_iterator _Var1;
  uint local_30;
  vector_int_std__allocator_int__ *local_2c;
  undefined4 local_24;
  undefined4 local_20 [2];
  undefined4 local_18;
  difference_type local_14;
  
  local_30 = (uint)(byte)param_1;
  local_2c = this;
  local_24 = cbegin(this);
  local_14 = __gnu_cxx::operator_((__normal_iterator *)&local_30,(__normal_iterator *)&local_24);
  local_20[0] = begin(local_2c);
  _Var1 = (__normal_iterator)
          __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator_
                    ((__normal_iterator_int__std__vector_int_std__allocator_int___ *)local_20,
                     local_14);
  _M_insert_dispatch___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
            (SUB41(local_2c,0),_Var1,param_2,(uint)(byte)param_3);
  local_18 = begin(local_2c);
  _Var1 = (__normal_iterator)
          __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator_
                    ((__normal_iterator_int__std__vector_int_std__allocator_int___ *)&local_18,
                     local_14);
  return _Var1;
}



// __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>>>::__normal_iterator(int*
// const&)

__normal_iterator_int__std__vector_int_std__allocator_int___ * __thiscall
__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::__normal_iterator
          (__normal_iterator_int__std__vector_int_std__allocator_int___ *this,int **param_1)

{
  *(int **)this = *param_1;
  return this;
}



// __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>::__normal_iterator(int const* const&)

__normal_iterator_int_const__std__vector_int_std__allocator_int___ * __thiscall
__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::__normal_iterator
          (__normal_iterator_int_const__std__vector_int_std__allocator_int___ *this,int **param_1)

{
  *(int **)this = *param_1;
  return this;
}



// __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>>>::base() const

__normal_iterator_int__std__vector_int_std__allocator_int___ * __thiscall
__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::base
          (__normal_iterator_int__std__vector_int_std__allocator_int___ *this)

{
  return this;
}



// std::vector<int, std::allocator<int>>::cbegin() const

undefined4 __thiscall
std::vector<int,std::allocator<int>>::cbegin(vector_int_std__allocator_int__ *this)

{
  undefined4 local_10;
  int *local_c;
  
  local_c = *(int **)this;
  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::__normal_iterator
            ((__normal_iterator_int_const__std__vector_int_std__allocator_int___ *)&local_10,
             &local_c);
  return local_10;
}



// __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int>>>::difference_type
// __gnu_cxx::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>> const&, __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>> const&)

difference_type __gnu_cxx::operator_(__normal_iterator *param_1,__normal_iterator *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::base
                            ((__normal_iterator_int_const__std__vector_int_std__allocator_int___ *)
                             param_1);
  iVar2 = *piVar1;
  piVar1 = (int *)__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::base
                            ((__normal_iterator_int_const__std__vector_int_std__allocator_int___ *)
                             param_2);
  return iVar2 - *piVar1 >> 2;
}



// std::vector<int, std::allocator<int>>::begin()

undefined4 __thiscall
std::vector<int,std::allocator<int>>::begin(vector_int_std__allocator_int__ *this)

{
  undefined4 local_c;
  
  __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::__normal_iterator
            ((__normal_iterator_int__std__vector_int_std__allocator_int___ *)&local_c,(int **)this);
  return local_c;
}



// __gnu_cxx::__normal_iterator<int*, std::vector<int,
// std::allocator<int>>>::TEMPNAMEPLACEHOLDERVALUE(int) const

undefined4 __thiscall
__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator_
          (__normal_iterator_int__std__vector_int_std__allocator_int___ *this,int param_1)

{
  undefined4 local_10;
  int *local_c;
  
  local_c = (int *)(*(int *)this + param_1 * 4);
  __normal_iterator((__normal_iterator_int__std__vector_int_std__allocator_int___ *)&local_10,
                    &local_c);
  return local_10;
}



// void std::vector<int, std::allocator<int>>::_M_insert_dispatch<__gnu_cxx::__normal_iterator<int
// const*, std::vector<int, std::allocator<int>>>>(__gnu_cxx::__normal_iterator<int*,
// std::vector<int, std::allocator<int>>>, __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, std::__false_type)

void std::vector<int,std::allocator<int>>::
     _M_insert_dispatch___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
               (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
               __false_type param_4)

{
  _M_range_insert___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
            (param_1,param_2,param_3,param_4);
  return;
}



// __gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int>>>::base() const

__normal_iterator_int_const__std__vector_int_std__allocator_int___ * __thiscall
__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::base
          (__normal_iterator_int_const__std__vector_int_std__allocator_int___ *this)

{
  return this;
}



// void std::vector<int, std::allocator<int>>::_M_range_insert<__gnu_cxx::__normal_iterator<int
// const*, std::vector<int, std::allocator<int>>>>(__gnu_cxx::__normal_iterator<int*,
// std::vector<int, std::allocator<int>>>, __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, std::forward_iterator_tag)

void std::vector<int,std::allocator<int>>::
     _M_range_insert___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
               (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3,
               forward_iterator_tag param_4)

{
  int iVar1;
  bool bVar2;
  allocator *paVar3;
  int **ppiVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  forward_iterator_tag local_48;
  uint local_44;
  uint local_40;
  int **local_3c;
  uint local_38;
  undefined4 local_34;
  int *local_30;
  uint local_2c;
  int *local_28;
  difference_type local_24;
  difference_type local_20;
  int *local_1c;
  
  local_44 = (uint)(byte)param_3;
  local_40 = (uint)(byte)param_2;
  local_3c = (int **)(uint)(byte)param_1;
  local_48 = param_4;
  bVar2 = __gnu_cxx::operator__((__normal_iterator *)&local_44,(__normal_iterator *)&local_48);
  if (bVar2 != false) {
    local_20 = distance___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
                         (SUB41(local_44,0),SUB41(local_48,0));
    if ((uint)((int)local_3c[2] - (int)local_3c[1] >> 2) < local_20) {
      local_2c = _M_check_len((vector_int_std__allocator_int__ *)local_3c,local_20,
                              "vector::_M_range_insert");
      local_30 = (int *)_Vector_base<int,std::allocator<int>>::_M_allocate
                                  ((_Vector_base_int_std__allocator_int__ *)local_3c,local_2c);
      piVar6 = *local_3c;
      local_1c = local_30;
      ppiVar4 = (int **)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        base((__normal_iterator_int__std__vector_int_std__allocator_int___ *)
                             &local_40);
      piVar5 = *ppiVar4;
      paVar3 = (allocator *)
               _Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator
                         ((_Vector_base_int_std__allocator_int__ *)local_3c);
      local_1c = __uninitialized_move_if_noexcept_a_int__int__std__allocator_int__
                           (piVar6,piVar5,local_30,paVar3);
      paVar3 = (allocator *)
               _Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator
                         ((_Vector_base_int_std__allocator_int__ *)local_3c);
      local_1c = __uninitialized_copy_a___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__int_
                           (SUB41(local_44,0),SUB41(local_48,0),local_1c,paVar3);
      ppiVar4 = (int **)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        base((__normal_iterator_int__std__vector_int_std__allocator_int___ *)
                             &local_40);
      piVar6 = *ppiVar4;
      piVar5 = local_3c[1];
      paVar3 = (allocator *)
               _Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator
                         ((_Vector_base_int_std__allocator_int__ *)local_3c);
      local_1c = __uninitialized_move_if_noexcept_a_int__int__std__allocator_int__
                           (piVar6,piVar5,local_1c,paVar3);
      piVar6 = *local_3c;
      piVar5 = local_3c[1];
      paVar3 = (allocator *)
               _Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator
                         ((_Vector_base_int_std__allocator_int__ *)local_3c);
      _Destroy_int__int_(piVar6,piVar5,paVar3);
      _Vector_base<int,std::allocator<int>>::_M_deallocate
                ((_Vector_base_int_std__allocator_int__ *)local_3c,*local_3c,
                 (int)local_3c[2] - (int)*local_3c >> 2);
      *local_3c = local_30;
      local_3c[1] = local_1c;
      local_3c[2] = local_30 + local_2c;
    }
    else {
      local_34 = end((vector_int_std__allocator_int__ *)local_3c);
      local_24 = __gnu_cxx::operator_((__normal_iterator *)&local_34,(__normal_iterator *)&local_40)
      ;
      local_28 = local_3c[1];
      if (local_20 < local_24) {
        piVar5 = local_3c[1];
        iVar1 = -local_20;
        piVar7 = local_3c[1];
        piVar6 = local_3c[1];
        paVar3 = (allocator *)
                 _Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator
                           ((_Vector_base_int_std__allocator_int__ *)local_3c);
        __uninitialized_move_a_int__int__std__allocator_int__(piVar5 + iVar1,piVar7,piVar6,paVar3);
        local_3c[1] = local_3c[1] + local_20;
        ppiVar4 = (int **)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                          base((__normal_iterator_int__std__vector_int_std__allocator_int___ *)
                               &local_40);
        move_backward_int__int__(*ppiVar4,local_28 + -local_20,local_28);
        copy___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int______gnu_cxx____normal_iterator_int__std__vector_int_std__allocator_int____
                  (SUB41(local_44,0),SUB41(local_48,0),SUB41(local_40,0));
      }
      else {
        local_38 = local_44;
        advance___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____unsigned_int_
                  ((__normal_iterator *)&local_38,local_24);
        piVar5 = local_3c[1];
        paVar3 = (allocator *)
                 _Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator
                           ((_Vector_base_int_std__allocator_int__ *)local_3c);
        __uninitialized_copy_a___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__int_
                  (SUB41(local_38,0),SUB41(local_48,0),piVar5,paVar3);
        local_3c[1] = local_3c[1] + (local_20 - local_24);
        ppiVar4 = (int **)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                          base((__normal_iterator_int__std__vector_int_std__allocator_int___ *)
                               &local_40);
        piVar6 = *ppiVar4;
        piVar5 = local_3c[1];
        paVar3 = (allocator *)
                 _Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator
                           ((_Vector_base_int_std__allocator_int__ *)local_3c);
        __uninitialized_move_a_int__int__std__allocator_int__(piVar6,local_28,piVar5,paVar3);
        local_3c[1] = local_3c[1] + local_24;
        copy___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int______gnu_cxx____normal_iterator_int__std__vector_int_std__allocator_int____
                  (SUB41(local_44,0),SUB41(local_38,0),SUB41(local_40,0));
      }
    }
  }
  return;
}



// bool __gnu_cxx::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<int const*,
// std::vector<int, std::allocator<int>>> const&, __gnu_cxx::__normal_iterator<int const*,
// std::vector<int, std::allocator<int>>> const&)

bool __gnu_cxx::operator__(__normal_iterator *param_1,__normal_iterator *param_2)

{
  int *piVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  piVar1 = (int *)__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::base
                            ((__normal_iterator_int_const__std__vector_int_std__allocator_int___ *)
                             param_1);
  iVar4 = *piVar1;
  piVar1 = (int *)__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::base
                            ((__normal_iterator_int_const__std__vector_int_std__allocator_int___ *)
                             param_2);
  iVar3 = *piVar1;
  bVar5 = iVar4 != iVar3;
  if (bVar5) {
    iVar3 = 1;
  }
  uVar2 = (undefined)iVar3;
  if (!bVar5) {
    uVar2 = 0;
  }
  return (bool)uVar2;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::iterator_traits<__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>>::difference_type std::distance<__gnu_cxx::__normal_iterator<int const*,
// std::vector<int, std::allocator<int>>>>(__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>)

difference_type
std::distance___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
          (__normal_iterator param_1,__normal_iterator param_2)

{
  difference_type dVar1;
  random_access_iterator_tag unaff_r4;
  uint local_1c [4];
  
  local_1c[0] = (uint)(byte)param_1;
  __iterator_category___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
            ((__normal_iterator *)local_1c);
  dVar1 = __distance___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
                    (SUB41(local_1c[0],0),param_2,unaff_r4);
  return dVar1;
}



// __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>>>::difference_type
// __gnu_cxx::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<int*, std::vector<int,
// std::allocator<int>>> const&, __gnu_cxx::__normal_iterator<int*, std::vector<int,
// std::allocator<int>>> const&)

difference_type __gnu_cxx::operator_(__normal_iterator *param_1,__normal_iterator *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)__normal_iterator<int*,std::vector<int,std::allocator<int>>>::base
                            ((__normal_iterator_int__std__vector_int_std__allocator_int___ *)param_1
                            );
  iVar2 = *piVar1;
  piVar1 = (int *)__normal_iterator<int*,std::vector<int,std::allocator<int>>>::base
                            ((__normal_iterator_int__std__vector_int_std__allocator_int___ *)param_2
                            );
  return iVar2 - *piVar1 >> 2;
}



// std::_Vector_base<int, std::allocator<int>>::_M_get_Tp_allocator()

_Vector_base_int_std__allocator_int__ * __thiscall
std::_Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator
          (_Vector_base_int_std__allocator_int__ *this)

{
  return this;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::__uninitialized_move_a<int*, int*, std::allocator<int>>(int*, int*, int*,
// std::allocator<int>&)

int * std::__uninitialized_move_a_int__int__std__allocator_int__
                (int *param_1,int *param_2,int *param_3,allocator *param_4)

{
  move_iterator mVar1;
  move_iterator mVar2;
  int *piVar3;
  
  mVar1 = make_move_iterator_int__(param_1);
  mVar2 = make_move_iterator_int__(param_2);
  piVar3 = __uninitialized_copy_a_std__move_iterator_int___int__int_(mVar1,mVar2,param_3,param_4);
  return piVar3;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::move_backward<int*, int*>(int*, int*, int*)

int * std::move_backward_int__int__(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)__miter_base_int__(param_1);
  piVar2 = (int *)__miter_base_int__(param_2);
  piVar1 = __copy_move_backward_a2_true_int__int__(piVar1,piVar2,param_3);
  return piVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>>>
// std::copy<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int>>>,
// __gnu_cxx::__normal_iterator<int*, std::vector<int,
// std::allocator<int>>>>(__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>>>)

__normal_iterator
std::
copy___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int______gnu_cxx____normal_iterator_int__std__vector_int_std__allocator_int____
          (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3)

{
  __normal_iterator _Var1;
  iterator_type iVar2;
  iterator_type iVar3;
  
  iVar2 = __miter_base___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
                    (param_1);
  iVar3 = __miter_base___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
                    (param_2);
  _Var1 = __copy_move_a2_false___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int______gnu_cxx____normal_iterator_int__std__vector_int_std__allocator_int____
                    (SUB41(iVar2,0),SUB41(iVar3,0),param_3);
  return _Var1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// void std::advance<__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, unsigned int>(__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>&, unsigned int)

void std::
     advance___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____unsigned_int_
               (__normal_iterator *param_1,uint param_2)

{
  random_access_iterator_tag unaff_r4;
  
  __iterator_category___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
            (param_1);
  __advance___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int_
            (param_1,param_2,unaff_r4);
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
  int *piVar1;
  
  piVar1 = uninitialized_copy___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__
                     (param_1,param_2,param_3);
  return piVar1;
}



// std::vector<int, std::allocator<int>>::_M_check_len(unsigned int, char const*) const

uint __thiscall
std::vector<int,std::allocator<int>>::_M_check_len
          (vector_int_std__allocator_int__ *this,uint param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint local_20;
  vector_int_std__allocator_int__ *local_1c;
  uint local_18;
  uint local_14;
  
  local_20 = param_1;
  local_1c = this;
  iVar1 = max_size(this);
  iVar2 = size(local_1c);
  if ((uint)(iVar1 - iVar2) < local_20) {
    __throw_length_error(param_2);
  }
  iVar1 = size(local_1c);
  local_18 = size(local_1c);
  puVar3 = max_unsigned_int_(&local_18,&local_20);
  local_14 = iVar1 + *puVar3;
  uVar4 = size(local_1c);
  if ((local_14 < uVar4) || (uVar4 = max_size(local_1c), uVar4 < local_14)) {
    local_14 = max_size(local_1c);
  }
  return local_14;
}



// std::_Vector_base<int, std::allocator<int>>::_M_allocate(unsigned int)

undefined4 __thiscall
std::_Vector_base<int,std::allocator<int>>::_M_allocate
          (_Vector_base_int_std__allocator_int__ *this,uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = allocator_traits<std::allocator<int>>::allocate((allocator *)this,param_1);
  }
  return uVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::__uninitialized_move_if_noexcept_a<int*, int*, std::allocator<int>>(int*, int*, int*,
// std::allocator<int>&)

int * std::__uninitialized_move_if_noexcept_a_int__int__std__allocator_int__
                (int *param_1,int *param_2,int *param_3,allocator *param_4)

{
  move_iterator mVar1;
  move_iterator mVar2;
  int *piVar3;
  
  mVar1 = __make_move_if_noexcept_iterator_int__std__move_iterator_int___(param_1);
  mVar2 = __make_move_if_noexcept_iterator_int__std__move_iterator_int___(param_2);
  piVar3 = __uninitialized_copy_a_std__move_iterator_int___int__int_(mVar1,mVar2,param_3,param_4);
  return piVar3;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// void std::_Destroy<int*, int>(int*, int*, std::allocator<int>&)

void std::_Destroy_int__int_(int *param_1,int *param_2,allocator *param_3)

{
  _Destroy_int__(param_1,param_2);
  return;
}



// std::_Vector_base<int, std::allocator<int>>::_M_deallocate(int*, unsigned int)

void __thiscall
std::_Vector_base<int,std::allocator<int>>::_M_deallocate
          (_Vector_base_int_std__allocator_int__ *this,int *param_1,uint param_2)

{
  if (param_1 != (int *)0x0) {
    allocator_traits<std::allocator<int>>::deallocate((allocator *)this,param_1,param_2);
  }
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::iterator_traits<__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>>::iterator_category
// std::__iterator_category<__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>>(__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>> const&)

iterator_category
std::
__iterator_category___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
          (__normal_iterator *param_1)

{
  iterator_category in_r3;
  
  return in_r3;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::iterator_traits<__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>>::difference_type std::__distance<__gnu_cxx::__normal_iterator<int const*,
// std::vector<int, std::allocator<int>>>>(__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, std::random_access_iterator_tag)

difference_type
std::__distance___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
          (__normal_iterator param_1,__normal_iterator param_2,random_access_iterator_tag param_3)

{
  difference_type dVar1;
  uint local_10;
  uint local_c;
  
  local_10 = (uint)(byte)param_2;
  local_c = (uint)(byte)param_1;
  dVar1 = __gnu_cxx::operator_((__normal_iterator *)&local_10,(__normal_iterator *)&local_c);
  return dVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::move_iterator<int*> std::make_move_iterator<int*>(int*)

move_iterator std::make_move_iterator_int__(int *param_1)

{
  move_iterator local_c;
  
  move_iterator<int*>::move_iterator((move_iterator_int__ *)&local_c,param_1);
  return local_c;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::__uninitialized_copy_a<std::move_iterator<int*>, int*, int>(std::move_iterator<int*>,
// std::move_iterator<int*>, int*, std::allocator<int>&)

int * std::__uninitialized_copy_a_std__move_iterator_int___int__int_
                (move_iterator param_1,move_iterator param_2,int *param_3,allocator *param_4)

{
  int *piVar1;
  
  piVar1 = uninitialized_copy_std__move_iterator_int___int__(param_1,param_2,param_3);
  return piVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::_Miter_base<int*>::iterator_type std::__miter_base<int*>(int*)

iterator_type std::__miter_base_int__(int *param_1)

{
  iterator_type iVar1;
  
  iVar1 = _Iter_base<int*,false>::_S_base(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::__copy_move_backward_a2<true, int*, int*>(int*, int*, int*)

int * std::__copy_move_backward_a2_true_int__int__(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = (int *)__niter_base_int__(param_1);
  piVar2 = (int *)__niter_base_int__(param_2);
  piVar3 = (int *)__niter_base_int__(param_3);
  piVar1 = __copy_move_backward_a_true_int__int__(piVar1,piVar2,piVar3);
  return piVar1;
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
  iterator_type iVar1;
  
  iVar1 = _Iter_base<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,false>
          ::_S_base(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>>>
// std::__copy_move_a2<false, __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, __gnu_cxx::__normal_iterator<int*, std::vector<int,
// std::allocator<int>>>>(__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, __gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>>>)

__normal_iterator
std::
__copy_move_a2_false___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int______gnu_cxx____normal_iterator_int__std__vector_int_std__allocator_int____
          (__normal_iterator param_1,__normal_iterator param_2,__normal_iterator param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  __normal_iterator local_18 [4];
  int *local_14;
  
  piVar1 = (int *)__niter_base___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
                            (param_1);
  piVar2 = (int *)__niter_base___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____
                            (param_2);
  piVar3 = (int *)__niter_base___gnu_cxx____normal_iterator_int__std__vector_int_std__allocator_int____
                            (param_3);
  local_14 = __copy_move_a_false_int_const__int__(piVar1,piVar2,piVar3);
  __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::__normal_iterator
            ((__normal_iterator_int__std__vector_int_std__allocator_int___ *)local_18,&local_14);
  return local_18[0];
}



// WARNING: Unknown calling convention yet parameter storage is locked
// void std::__advance<__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, int>(__gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>&, int, std::random_access_iterator_tag)

void std::
     __advance___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int_
               (__normal_iterator *param_1,int param_2,random_access_iterator_tag param_3)

{
  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator__
            ((__normal_iterator_int_const__std__vector_int_std__allocator_int___ *)param_1,param_2);
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
  int *piVar1;
  
  piVar1 = __uninitialized_copy<false>::
           __uninit_copy___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__
                     (param_1,param_2,param_3);
  return piVar1;
}



// std::vector<int, std::allocator<int>>::size() const

int __thiscall std::vector<int,std::allocator<int>>::size(vector_int_std__allocator_int__ *this)

{
  return *(int *)(this + 4) - *(int *)this >> 2;
}



// std::vector<int, std::allocator<int>>::max_size() const

undefined4 __thiscall
std::vector<int,std::allocator<int>>::max_size(vector_int_std__allocator_int__ *this)

{
  allocator *paVar1;
  undefined4 uVar2;
  
  paVar1 = (allocator *)
           _Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator
                     ((_Vector_base_int_std__allocator_int__ *)this);
  uVar2 = allocator_traits<std::allocator<int>>::max_size(paVar1);
  return uVar2;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// unsigned int const& std::max<unsigned int>(unsigned int const&, unsigned int const&)

uint * std::max_unsigned_int_(uint *param_1,uint *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}



// std::allocator_traits<std::allocator<int>>::allocate(std::allocator<int>&, unsigned int)

undefined4 std::allocator_traits<std::allocator<int>>::allocate(allocator *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = __gnu_cxx::new_allocator<int>::allocate((uint)param_1,(void *)param_2);
  return uVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::move_iterator<int*> std::__make_move_if_noexcept_iterator<int*,
// std::move_iterator<int*>>(int*)

move_iterator std::__make_move_if_noexcept_iterator_int__std__move_iterator_int___(int *param_1)

{
  move_iterator local_c;
  
  move_iterator<int*>::move_iterator((move_iterator_int__ *)&local_c,param_1);
  return local_c;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// void std::_Destroy<int*>(int*, int*)

void std::_Destroy_int__(int *param_1,int *param_2)

{
  _Destroy_aux<true>::__destroy_int__(param_1,param_2);
  return;
}



// std::allocator_traits<std::allocator<int>>::deallocate(std::allocator<int>&, int*, unsigned int)

void std::allocator_traits<std::allocator<int>>::deallocate
               (allocator *param_1,int *param_2,uint param_3)

{
  __gnu_cxx::new_allocator<int>::deallocate((int *)param_1,(uint)param_2);
  return;
}



// std::move_iterator<int*>::move_iterator(int*)

move_iterator_int__ * __thiscall
std::move_iterator<int*>::move_iterator(move_iterator_int__ *this,int *param_1)

{
  *(int **)this = param_1;
  return this;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::uninitialized_copy<std::move_iterator<int*>, int*>(std::move_iterator<int*>,
// std::move_iterator<int*>, int*)

int * std::uninitialized_copy_std__move_iterator_int___int__
                (move_iterator param_1,move_iterator param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = __uninitialized_copy<false>::__uninit_copy_std__move_iterator_int___int__
                     (param_1,param_2,param_3);
  return piVar1;
}



// std::_Iter_base<int*, false>::_S_base(int*)

int * std::_Iter_base<int*,false>::_S_base(int *param_1)

{
  return param_1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::_Niter_base<int*>::iterator_type std::__niter_base<int*>(int*)

iterator_type std::__niter_base_int__(int *param_1)

{
  iterator_type iVar1;
  
  iVar1 = _Iter_base<int*,false>::_S_base(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::__copy_move_backward_a<true, int*, int*>(int*, int*, int*)

int * std::__copy_move_backward_a_true_int__int__(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = __copy_move_backward<true,true,std::random_access_iterator_tag>::__copy_move_b_int_
                     (param_1,param_2,param_3);
  return piVar1;
}



// std::_Iter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int>>>,
// false>::_S_base(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int>>>)

__normal_iterator
std::_Iter_base<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,false>
::_S_base(__normal_iterator param_1)

{
  return param_1;
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
  iterator_type iVar1;
  
  iVar1 = _Iter_base<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,true>
          ::_S_base(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::_Niter_base<__gnu_cxx::__normal_iterator<int*, std::vector<int,
// std::allocator<int>>>>::iterator_type std::__niter_base<__gnu_cxx::__normal_iterator<int*,
// std::vector<int, std::allocator<int>>>>(__gnu_cxx::__normal_iterator<int*, std::vector<int,
// std::allocator<int>>>)

iterator_type
std::__niter_base___gnu_cxx____normal_iterator_int__std__vector_int_std__allocator_int____
          (__normal_iterator param_1)

{
  iterator_type iVar1;
  
  iVar1 = _Iter_base<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,true>::
          _S_base(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::__copy_move_a<false, int const*, int*>(int const*, int const*, int*)

int * std::__copy_move_a_false_int_const__int__(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = __copy_move<false,true,std::random_access_iterator_tag>::__copy_m_int_
                     (param_1,param_2,param_3);
  return piVar1;
}



// __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>::TEMPNAMEPLACEHOLDERVALUE(int)

__normal_iterator_int_const__std__vector_int_std__allocator_int___ * __thiscall
__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator__
          (__normal_iterator_int_const__std__vector_int_std__allocator_int___ *this,int param_1)

{
  *(int *)this = *(int *)this + param_1 * 4;
  return this;
}



// int* std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<int const*,
// std::vector<int, std::allocator<int>>>, int*>(__gnu_cxx::__normal_iterator<int const*,
// std::vector<int, std::allocator<int>>>, __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>, int*)

int * std::__uninitialized_copy<false>::
      __uninit_copy___gnu_cxx____normal_iterator_int_const__std__vector_int_std__allocator_int____int__
                (__normal_iterator param_1,__normal_iterator param_2,int *param_3)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  uint local_20;
  uint local_1c [2];
  int *local_14;
  
  local_20 = (uint)(byte)param_2;
  local_1c[0] = (uint)(byte)param_1;
  local_14 = param_3;
  while (bVar1 = __gnu_cxx::operator__((__normal_iterator *)local_1c,(__normal_iterator *)&local_20)
        , bVar1 != false) {
    piVar2 = __addressof_int_(local_14);
    piVar3 = (int *)__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                    operator_((__normal_iterator_int_const__std__vector_int_std__allocator_int___ *)
                              local_1c);
    _Construct_int_int_const__(piVar2,piVar3);
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator__
              ((__normal_iterator_int_const__std__vector_int_std__allocator_int___ *)local_1c);
    local_14 = local_14 + 1;
  }
  return local_14;
}



// std::allocator_traits<std::allocator<int>>::max_size(std::allocator<int> const&)

uint std::allocator_traits<std::allocator<int>>::max_size(allocator *param_1)

{
  uint uVar1;
  
  uVar1 = _S_max_size_std__allocator_int_const_void_(param_1,0);
  return uVar1;
}



// std::_Vector_base<int, std::allocator<int>>::_M_get_Tp_allocator() const

_Vector_base_int_std__allocator_int__ * __thiscall
std::_Vector_base<int,std::allocator<int>>::_M_get_Tp_allocator
          (_Vector_base_int_std__allocator_int__ *this)

{
  return this;
}



// __gnu_cxx::new_allocator<int>::allocate(unsigned int, void const*)

void * __gnu_cxx::new_allocator<int>::allocate(uint param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)max_size();
  if (pvVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  pvVar1 = operator_new((int)param_2 << 2);
  return pvVar1;
}



// void std::_Destroy_aux<true>::__destroy<int*>(int*, int*)

void std::_Destroy_aux<true>::__destroy_int__(int *param_1,int *param_2)

{
  return;
}



// __gnu_cxx::new_allocator<int>::deallocate(int*, unsigned int)

void __gnu_cxx::new_allocator<int>::deallocate(int *param_1,uint param_2)

{
  operator_delete((void *)param_2);
  return;
}



// int* std::__uninitialized_copy<false>::__uninit_copy<std::move_iterator<int*>,
// int*>(std::move_iterator<int*>, std::move_iterator<int*>, int*)

int * std::__uninitialized_copy<false>::__uninit_copy_std__move_iterator_int___int__
                (move_iterator param_1,move_iterator param_2,int *param_3)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  move_iterator local_20;
  move_iterator local_1c [2];
  int *local_14;
  
  local_20 = param_2;
  local_1c[0] = param_1;
  local_14 = param_3;
  while (bVar1 = operator__(local_1c,&local_20), bVar1 != false) {
    piVar2 = __addressof_int_(local_14);
    piVar3 = (int *)move_iterator<int*>::operator_((move_iterator_int__ *)local_1c);
    _Construct_int_int_(piVar2,piVar3);
    move_iterator<int*>::operator__((move_iterator_int__ *)local_1c);
    local_14 = local_14 + 1;
  }
  return local_14;
}



// int* std::__copy_move_backward<true, true,
// std::random_access_iterator_tag>::__copy_move_b<int>(int const*, int const*, int*)

int * std::__copy_move_backward<true,true,std::random_access_iterator_tag>::__copy_move_b_int_
                (int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (int)param_2 - (int)param_1 >> 2;
  if (iVar1 != 0) {
    memmove(param_3 + -iVar1,param_1,iVar1 << 2);
  }
  return param_3 + -iVar1;
}



// std::_Iter_base<__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int>>>,
// true>::_S_base(__gnu_cxx::__normal_iterator<int const*, std::vector<int, std::allocator<int>>>)

undefined4
std::_Iter_base<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,true>
::_S_base(__normal_iterator param_1)

{
  undefined4 *puVar1;
  uint local_c;
  
  local_c = (uint)(byte)param_1;
  puVar1 = (undefined4 *)
           __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::base
                     ((__normal_iterator_int_const__std__vector_int_std__allocator_int___ *)&local_c
                     );
  return *puVar1;
}



// std::_Iter_base<__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>>>,
// true>::_S_base(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int>>>)

undefined4
std::_Iter_base<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,true>::
_S_base(__normal_iterator param_1)

{
  undefined4 *puVar1;
  uint local_c;
  
  local_c = (uint)(byte)param_1;
  puVar1 = (undefined4 *)
           __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::base
                     ((__normal_iterator_int__std__vector_int_std__allocator_int___ *)&local_c);
  return *puVar1;
}



// int* std::__copy_move<false, true, std::random_access_iterator_tag>::__copy_m<int>(int const*,
// int const*, int*)

int * std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m_int_
                (int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (int)param_2 - (int)param_1 >> 2;
  if (iVar1 != 0) {
    memmove(param_3,param_1,iVar1 << 2);
  }
  return param_3 + iVar1;
}



// __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>::TEMPNAMEPLACEHOLDERVALUE()

__normal_iterator_int_const__std__vector_int_std__allocator_int___ * __thiscall
__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator__
          (__normal_iterator_int_const__std__vector_int_std__allocator_int___ *this)

{
  *(int *)this = *(int *)this + 4;
  return this;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int* std::__addressof<int>(int&)

int * std::__addressof_int_(int *param_1)

{
  return param_1;
}



// __gnu_cxx::__normal_iterator<int const*, std::vector<int,
// std::allocator<int>>>::TEMPNAMEPLACEHOLDERVALUE() const

undefined4 __thiscall
__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator_
          (__normal_iterator_int_const__std__vector_int_std__allocator_int___ *this)

{
  return *(undefined4 *)this;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int const& std::forward<int const&>(std::remove_reference<int const&>::type&)

int * std::forward_int_const__(type *param_1)

{
  return (int *)param_1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// void std::_Construct<int, int const&>(int*, int const&)

void std::_Construct_int_int_const__(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = forward_int_const__((type *)param_2);
  iVar2 = *piVar1;
  piVar1 = (int *)operator_new(4,param_1);
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar2;
  }
  return;
}



// unsigned int std::allocator_traits<std::allocator<int>>::_S_max_size<std::allocator<int> const,
// void>(std::allocator<int> const&, int)

uint std::allocator_traits<std::allocator<int>>::_S_max_size_std__allocator_int_const_void_
               (allocator *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = __gnu_cxx::new_allocator<int>::max_size();
  return uVar1;
}



// __gnu_cxx::new_allocator<int>::max_size() const

undefined4 __gnu_cxx::new_allocator<int>::max_size(void)

{
  return 0x3fffffff;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// bool std::TEMPNAMEPLACEHOLDERVALUE(std::move_iterator<int*> const&, std::move_iterator<int*>
// const&)

bool std::operator__(move_iterator *param_1,move_iterator *param_2)

{
  bool bVar1;
  
  bVar1 = operator__(param_1,param_2);
  return (bool)(bVar1 ^ 1);
}



// std::move_iterator<int*>::TEMPNAMEPLACEHOLDERVALUE()

move_iterator_int__ * __thiscall std::move_iterator<int*>::operator__(move_iterator_int__ *this)

{
  *(int *)this = *(int *)this + 4;
  return this;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::remove_reference<int&>::type&& std::move<int&>(int&)

type * std::move_int__(int *param_1)

{
  return (type *)param_1;
}



// std::move_iterator<int*>::TEMPNAMEPLACEHOLDERVALUE() const

type * __thiscall std::move_iterator<int*>::operator_(move_iterator_int__ *this)

{
  type *ptVar1;
  
  ptVar1 = move_int__(*(int **)this);
  return ptVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// int&& std::forward<int>(std::remove_reference<int>::type&)

int * std::forward_int_(type *param_1)

{
  return (int *)param_1;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// void std::_Construct<int, int>(int*, int&&)

void std::_Construct_int_int_(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = forward_int_((type *)param_2);
  iVar2 = *piVar1;
  piVar1 = (int *)operator_new(4,param_1);
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar2;
  }
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// bool std::TEMPNAMEPLACEHOLDERVALUE(std::move_iterator<int*> const&, std::move_iterator<int*>
// const&)

bool std::operator__(move_iterator *param_1,move_iterator *param_2)

{
  int iVar1;
  int iVar2;
  undefined uVar3;
  bool bVar4;
  
  iVar1 = move_iterator<int*>::base((move_iterator_int__ *)param_1);
  iVar2 = move_iterator<int*>::base((move_iterator_int__ *)param_2);
  bVar4 = iVar1 == iVar2;
  if (bVar4) {
    iVar2 = 1;
  }
  uVar3 = (undefined)iVar2;
  if (!bVar4) {
    uVar3 = 0;
  }
  return (bool)uVar3;
}



// std::move_iterator<int*>::base() const

undefined4 __thiscall std::move_iterator<int*>::base(move_iterator_int__ *this)

{
  return *(undefined4 *)this;
}



// WARNING: Removing unreachable block (ram,0x0000a0e8)

void __libc_csu_init(EVP_PKEY_CTX *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code **ppcVar1;
  int iVar2;
  
  _init(param_1);
  iVar2 = 0;
  do {
    ppcVar1 = (code **)(&__frame_dummy_init_array_entry + iVar2);
    iVar2 = iVar2 + 1;
    (**ppcVar1)(param_1,param_2,param_3,*ppcVar1,param_4);
  } while (iVar2 != 1);
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


